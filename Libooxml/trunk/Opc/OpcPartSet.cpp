#include "OpcPartSet.h"
#include "OpcPart.h"
#include "OpcPartEnumerator.h"
COpcPartSet::COpcPartSet(void) : ref(1)
{
}


COpcPartSet::~COpcPartSet(void)
{
	for (auto iter = parts.begin(); iter != parts.end(); ++iter) {
		(*iter)->Release();
	}
	parts.clear();
}

HRESULT STDMETHODCALLTYPE COpcPartSet::QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject )
{
	if (riid == IID_IOpcPartSet) {
		*ppvObject = static_cast<IOpcPartSet*>(this);
	}
	else if (riid == IID_IUnknown) {
		*ppvObject = static_cast<IUnknown*>(this);
	}
	else {
		return E_NOINTERFACE;
	}
	reinterpret_cast<IUnknown*>(*ppvObject)->AddRef();
	return S_OK;
}

ULONG STDMETHODCALLTYPE COpcPartSet::AddRef( void )
{
	ref++;
	return ref;
}

ULONG STDMETHODCALLTYPE COpcPartSet::Release( void )
{
	ref--;
	int res = ref;
	if (ref == 0)
		delete this;
	return res;
}

HRESULT STDMETHODCALLTYPE COpcPartSet::CreatePart(IOpcPartUri *name,LPCWSTR contentType,OPC_COMPRESSION_OPTIONS compressionOptions, IOpcPart **part) {
	COpcPart *newpart = new COpcPart(name,contentType,compressionOptions);
	parts.push_back(newpart);
	*part = newpart;
	reinterpret_cast<IUnknown *>(*part)->AddRef();
	return S_OK; 
}

HRESULT STDMETHODCALLTYPE COpcPartSet::DeletePart(IOpcPartUri *name) {
	if (name == NULL) return E_POINTER;
	BOOL bExits = FALSE;
	PartExists(name,&bExits);
	if (bExits == FALSE) return OPC_E_NO_SUCH_PART;
	std::vector<COpcPart *>::iterator todelete;
	for (auto iter = parts.begin(); iter != parts.end();++iter) {
		auto item = *iter;
		IOpcPartUri *partName = NULL;
		item->GetName(&partName);
		INT32 result = 0;
		name->ComparePartUri(partName,&result);
		partName->Release();
		if (result == 0) {
			item->Release();
			todelete = iter;
			break;
		}
		parts.erase(todelete);
	}
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcPartSet::GetEnumerator(IOpcPartEnumerator **partEnumerator) {
	if (partEnumerator == NULL) return E_POINTER;
	*partEnumerator = new COpcPartEnumerator(parts);
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcPartSet::GetPart(IOpcPartUri *name, IOpcPart **part) {
	if (part == NULL) return E_POINTER;
	IOpcPartEnumerator *partEnum;
	GetEnumerator(&partEnum);
	BOOL hasNext;
	partEnum->MoveNext(&hasNext);
	*part = NULL;
	while (hasNext) {
		IOpcPart *cpart = NULL;
		IOpcPartUri *partName = NULL;
		INT32 result;
		partEnum->GetCurrent(&cpart);
		cpart->GetName(&partName);
		name->ComparePartUri(partName,&result);
		partEnum->MoveNext(&hasNext);
		partName->Release();
		if (result == 0) {
			*part = cpart;
			cpart->AddRef();
			break;
		}
		cpart->Release();
	}
	partEnum->Release();
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcPartSet::PartExists(IOpcPartUri *name, BOOL *partExists) {
	if (partExists == NULL) return E_POINTER;
	IOpcPartEnumerator *partEnum;
	GetEnumerator(&partEnum);
	BOOL hasNext;
	partEnum->MoveNext(&hasNext);
	*partExists = FALSE;
	while (hasNext) {
		IOpcPart *part = NULL;
		IOpcPartUri *partName = NULL;
		INT32 result;
		partEnum->GetCurrent(&part);
		part->GetName(&partName);
		name->ComparePartUri(partName,&result);
		partEnum->MoveNext(&hasNext);
		part->Release();
		partName->Release();
		if (result == 0) {
			*partExists = TRUE;
			break;
		}
	}
	partEnum->Release();
	return S_OK;
}
