#include "OpcRelationship.h"
#include "OpcPartUri.h"

COpcRelationship::COpcRelationship(LPCWSTR relationshipIdentifier, LPCWSTR relationshipType, IUri *targetUri, OPC_URI_TARGET_MODE targetMode, IOpcPartUri *source) : ref(1)
{
	int length = wcslen(relationshipIdentifier);
	int memlength = (length+1)*sizeof(wchar_t);
	id = (LPWSTR) CoTaskMemAlloc(memlength);
	ZeroMemory(id,memlength);
	CopyMemory(id,relationshipIdentifier,memlength-sizeof(wchar_t));

	length = wcslen(relationshipType);
	memlength = (length+1)*sizeof(wchar_t);
	relType = (LPWSTR) CoTaskMemAlloc(memlength);
	ZeroMemory(relType,memlength);
	CopyMemory(relType,relationshipType,memlength-sizeof(wchar_t));

	this->targetMode = targetMode;
	IOpcPartUri *targettemp = new COpcPartUri(targetUri);

	sourceUri = source;
	sourceUri->AddRef();
	IUri *targetout;
	sourceUri->GetRelativeUri(targettemp,&targetout);
	targettemp->Release();
	pTargetUri = new COpcPartUri(targetout);
	targetout->Release();
}


COpcRelationship::~COpcRelationship(void)
{
	CoTaskMemFree(id);
	CoTaskMemFree(relType);
	pTargetUri->Release();
	sourceUri->Release();
}

HRESULT STDMETHODCALLTYPE COpcRelationship::QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject )
{
	if (ppvObject == NULL) return E_POINTER;
	if (riid == IID_IOpcRelationship) {
		*ppvObject = static_cast<IOpcRelationship*>(this);
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

ULONG STDMETHODCALLTYPE COpcRelationship::AddRef( void )
{
	ref++;
	return ref;
}

ULONG STDMETHODCALLTYPE COpcRelationship::Release( void )
{
	ref--;
	if (ref == 0)
		delete this;
	return ref;
}

HRESULT STDMETHODCALLTYPE COpcRelationship::GetId(LPWSTR *relationshipIdentifier) {
	if (relationshipIdentifier == NULL) return E_POINTER;
	int length = wcslen(this->id);
	int memlength = (length+1)*sizeof(wchar_t);
	*relationshipIdentifier =(LPWSTR) CoTaskMemAlloc(memlength);
	ZeroMemory(*relationshipIdentifier,memlength);
	CopyMemory(*relationshipIdentifier,id,memlength-sizeof(wchar_t));
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcRelationship::GetRelationshipType(LPWSTR *relationshipType) {
	if (relationshipType == NULL) return E_POINTER;
	int length = wcslen(this->relType);
	int memlength = (length+1)*sizeof(wchar_t);
	*relationshipType =(LPWSTR) CoTaskMemAlloc(memlength);
	ZeroMemory(*relationshipType,memlength);
	CopyMemory(*relationshipType,relType,memlength-sizeof(wchar_t));
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcRelationship::GetSourceUri(IOpcUri **sourceUri) {
	if (sourceUri == NULL) return E_POINTER;
	return this->sourceUri->QueryInterface(IID_IOpcUri,reinterpret_cast<void**>(sourceUri));
}

HRESULT STDMETHODCALLTYPE COpcRelationship::GetTargetMode(OPC_URI_TARGET_MODE *targetMode) {
	if (targetMode == NULL) return E_POINTER;
	*targetMode = this->targetMode;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcRelationship::GetTargetUri(IUri **targetUri) {
	if (targetUri == NULL) return E_POINTER;
	this->pTargetUri->QueryInterface(IID_IUri,(void **)targetUri);
	return S_OK;
}