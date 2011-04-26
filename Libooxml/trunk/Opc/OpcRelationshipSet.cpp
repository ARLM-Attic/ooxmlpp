#include "OpcRelationshipSet.h"
#include "opc-relationships.h"

COpcRelationshipSet::COpcRelationshipSet(IOpcPartUri *source) : ref(1)
{
	sourceUri = source;
	sourceUri->AddRef();
}


COpcRelationshipSet::~COpcRelationshipSet(void)
{
	for (auto iter = parts.begin(); iter != parts.end();++iter) {
		reinterpret_cast<IUnknown*>(*iter)->Release();
	}
	sourceUri->Release();
}

HRESULT STDMETHODCALLTYPE COpcRelationshipSet::QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject )
{
	if (ppvObject == NULL) return E_POINTER;
	if (riid == IID_IOpcRelationshipSet) {
		*ppvObject = static_cast<IOpcRelationshipSet*>(this);
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

ULONG STDMETHODCALLTYPE COpcRelationshipSet::AddRef( void )
{
	ref++;
	return ref;
}

ULONG STDMETHODCALLTYPE COpcRelationshipSet::Release( void )
{
	int res = ref--;
	if (ref == 0)
		delete this;
	return res;
}

HRESULT COpcRelationshipSet::CreateRelationship(LPCWSTR relationshipIdentifier, LPCWSTR relationshipType, IUri *targetUri, OPC_URI_TARGET_MODE targetMode, IOpcRelationship **relationship) {
	if (relationship == NULL) return E_POINTER;
	BOOL exists;
	RelationshipExists(relationshipIdentifier,&exists);
	if (exists) return OPC_E_DUPLICATE_RELATIONSHIP;
	COpcRelationship *newrel = new COpcRelationship(relationshipIdentifier,relationshipType,targetUri,targetMode,sourceUri);
	parts.push_back(newrel);
	*relationship = newrel;
	reinterpret_cast<IUnknown*>(*relationship)->AddRef();
	return S_OK;
}

HRESULT COpcRelationshipSet::DeleteRelationship(LPCWSTR relationshipIdentifier) {
	if (relationshipIdentifier == NULL) return E_POINTER;
	std::vector<COpcRelationship*>::iterator iterdel;
	bool foundrel = false;
	for (auto iter = parts.begin();iter != parts.end();++iter) {
		auto item = *iter;
		LPWSTR id;
		item->GetId(&id);
		if (wcscmp(id,relationshipIdentifier) == 0) {
			iterdel = iter;
			foundrel = true;
			CoTaskMemFree(id);
			break;
		}
		CoTaskMemFree(id);
	}
	if (foundrel) {
		parts.erase(iterdel);
		return S_OK;
	}
	else {
		return OPC_E_NO_SUCH_RELATIONSHIP;
	}
}

HRESULT COpcRelationshipSet::GetEnumerator(IOpcRelationshipEnumerator **relationshipEnumerator) {
	if (relationshipEnumerator == NULL) return E_POINTER;
	*relationshipEnumerator = new COpcRelationshipEnumerator(parts);
	return S_OK;
}

HRESULT COpcRelationshipSet::GetEnumeratorForType(LPCWSTR relationshipType, IOpcRelationshipEnumerator **relationshipEnumerator) {
	return E_NOTIMPL;
}

HRESULT COpcRelationshipSet::GetRelationship(LPCWSTR relationshipIdentifier, IOpcRelationship **relationship) {
	if (relationship == NULL) return E_POINTER;
	for (auto iter = parts.begin();iter != parts.end();++iter) {
		auto item = *iter;
		LPWSTR id;
		item->GetId(&id);
		if (wcscmp(id,relationshipIdentifier) == 0) {
			*relationship = item;
			reinterpret_cast<IUnknown*>(*relationship)->AddRef();
			CoTaskMemFree(id);
			return S_OK;
		}
		CoTaskMemFree(id);
	}
	return OPC_E_NO_SUCH_RELATIONSHIP;
}

HRESULT COpcRelationshipSet::GetRelationshipsContentStream(IStream **contents) {
	package::relationships::CT_Relationships rels;
	for (auto iter = parts.begin();iter != parts.end(); ++iter) {
		auto item = *iter;
		LPWSTR id, relType;
		OPC_URI_TARGET_MODE targetMode;
		IUri *targetUri;
		BSTR targetPath;
		item->GetId(&id);
		item->GetRelationshipType(&relType);
		item->GetTargetMode(&targetMode);
		item->GetTargetUri(&targetUri);
		targetUri->GetPath(&targetPath);
		package::relationships::CT_Relationship rel(targetPath,relType,id);
		if (targetMode == OPC_URI_TARGET_MODE_INTERNAL)
			rel.TargetMode() = L"Internal";
		else
			rel.TargetMode() = L"External";
		rels.Relationship().push_back(rel);
		CoTaskMemFree(id);
		CoTaskMemFree(relType);
		SysFreeString(targetPath);
		targetUri->Release();
	}
	std::ostringstream out;
	xml_schema::namespace_infomap map;
	map[L""].name = L"http://schemas.openxmlformats.org/package/2006/relationships";
	package::relationships::Relationships(out,rels,map);
	char *buf = (char *)GlobalAlloc(0,out.str().size());
	CopyMemory(buf,out.str().c_str(),out.str().size());
	CreateStreamOnHGlobal(buf,TRUE,contents);
	//ULONG written;
	//(*contents)->Write(out.str().c_str(),out.str().size(),&written);
	return S_OK;
}

HRESULT COpcRelationshipSet::RelationshipExists(LPCWSTR relationshipIdentifier,BOOL *relationshipExists) {
	if (relationshipExists == NULL) return E_POINTER;
	*relationshipExists = FALSE;
	for (auto iter = parts.begin();iter != parts.end();++iter) {
		auto item = *iter;
		LPWSTR id;
		item->GetId(&id);
		if (wcscmp(id,relationshipIdentifier) == 0) {
			*relationshipExists = TRUE;
			CoTaskMemFree(id);
			break;
		}
		CoTaskMemFree(id);
	}
	return S_OK;
}