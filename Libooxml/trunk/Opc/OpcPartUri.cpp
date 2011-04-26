#include "OpcPartUri.h"
#include <string>

COpcPartUri::COpcPartUri(COpcUri *uri) : ref(1)
{
	this->uri = uri;
	this->uri->AddRef();
}

COpcPartUri::COpcPartUri(IUri *uri) : ref(1)
{
	this->uri = new COpcUri(uri);
}

COpcPartUri::COpcPartUri(LPCWSTR pwzStr) : ref(1)
{
	uri = new COpcUri(pwzStr);
}

COpcPartUri::~COpcPartUri(void)
{
	uri->Release();
}

HRESULT STDMETHODCALLTYPE COpcPartUri::QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject )
{
	if (riid == IID_IOpcPartUri) {
		*ppvObject = static_cast<IOpcPartUri *>(this);
	}
	else if (riid == IID_IOpcUri) {
		*ppvObject = static_cast<IOpcUri *>(this);
	}
	else if (riid == IID_IUri) {
		*ppvObject = static_cast<IUri *>(this);
	}
	else if (riid == IID_IUnknown) {
		*ppvObject = static_cast<IUnknown *>(this);
	}
	else {
		return E_NOINTERFACE;
	}
	reinterpret_cast<IUnknown *>(*ppvObject)->AddRef();
	return S_OK;
}

ULONG STDMETHODCALLTYPE COpcPartUri::AddRef( void )
{
	return ++ref;
}

ULONG STDMETHODCALLTYPE COpcPartUri::Release( void )
{
	ULONG result = --ref;
	if (result == 0)
		delete this;
	return result;
}

HRESULT COpcPartUri::ComparePartUri(IOpcPartUri *partUri, INT32 *comparisonResult) {
	if (comparisonResult == NULL) return E_POINTER;
	BSTR part1,part2;
	this->GetPath(&part1);
	partUri->GetPath(&part2);
	_bstr_t p1(part1,false);
	_bstr_t p2(part2,false);

	if (p1 < p2) *comparisonResult = -1;
	else if (p1 > p2) *comparisonResult = 1;
	else *comparisonResult = 0;
	SysFreeString(part1);
	SysFreeString(part2);
	return S_OK;
}

HRESULT COpcPartUri::GetSourceUri(IOpcUri **sourceUri) {
	if (sourceUri == NULL) return E_POINTER;
	BOOL isrel = FALSE;
	IsRelationshipsPartUri(&isrel);
	if (!isrel) return OPC_E_RELATIONSHIP_URI_REQUIRED;
	BSTR absuri;
	uri->GetPath(&absuri);
	_bstr_t n(absuri,false);
	std::wstring suri = n;
	suri.erase(suri.find(L"_rels/"),6);
	suri.erase(suri.find(L".rels"),5);
	IUri *newuri = NULL;
	HRESULT hr = CreateUri(suri.c_str(),Uri_CREATE_ALLOW_RELATIVE,0,&newuri);
	if (SUCCEEDED(hr)) {
		*sourceUri = new COpcUri(newuri);
		newuri->Release();
	}
	SysFreeString(absuri);
	return hr;
}

HRESULT COpcPartUri::IsRelationshipsPartUri(BOOL *isRelationshipUri) {
	if (isRelationshipUri == NULL) return E_POINTER;
	BSTR ext;
	uri->GetExtension(&ext);
	_bstr_t bExt(ext,false);
	_bstr_t relExt(L".rels");
	if (bExt == relExt) {
		*isRelationshipUri = TRUE;
	}
	else {
		*isRelationshipUri = FALSE;
	}
	//relationships part has extension of .rels
	SysFreeString(ext);
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcPartUri::CombinePartUri( __RPC__in_opt IUri *relativeUri, __RPC__deref_out_opt IOpcPartUri **combinedUri )
{
	return uri->CombinePartUri(relativeUri,combinedUri);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetRelationshipsPartUri( __RPC__deref_out_opt IOpcPartUri **relationshipPartUri )
{
	return uri->GetRelationshipsPartUri(relationshipPartUri);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetRelativeUri( __RPC__in_opt IOpcPartUri *targetPartUri, __RPC__deref_out_opt IUri **relativeUri )
{
	return uri->GetRelativeUri(targetPartUri,relativeUri);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetZone( __RPC__out DWORD *pdwZone )
{
	return uri->GetZone(pdwZone);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetExtension( __RPC__deref_out_opt BSTR *pbstrExtension )
{
	return uri->GetExtension(pbstrExtension);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetPassword( __RPC__deref_out_opt BSTR *pbstrPassword )
{
	return uri->GetPassword(pbstrPassword);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetPropertyLength( Uri_PROPERTY uriProp, __RPC__out DWORD *pcchProperty, DWORD dwFlags )
{
	return uri->GetPropertyLength(uriProp,pcchProperty,dwFlags);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetPropertyBSTR( Uri_PROPERTY uriProp, __RPC__deref_out_opt BSTR *pbstrProperty, DWORD dwFlags )
{
	return uri->GetPropertyBSTR(uriProp,pbstrProperty,dwFlags);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetAbsoluteUri( __RPC__deref_out_opt BSTR *pbstrAbsoluteUri )
{
	return uri->GetAbsoluteUri(pbstrAbsoluteUri);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetRawUri( __RPC__deref_out_opt BSTR *pbstrRawUri )
{
	return uri->GetRawUri(pbstrRawUri);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetFragment( __RPC__deref_out_opt BSTR *pbstrFragment )
{
	return uri->GetFragment(pbstrFragment);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetQuery( __RPC__deref_out_opt BSTR *pbstrQuery )
{
	return uri->GetQuery(pbstrQuery);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetDisplayUri( __RPC__deref_out_opt BSTR *pbstrDisplayString )
{
	return uri->GetDisplayUri(pbstrDisplayString);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetPathAndQuery( __RPC__deref_out_opt BSTR *pbstrPathAndQuery )
{
	return uri->GetPathAndQuery(pbstrPathAndQuery);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetHostType( __RPC__out DWORD *pdwHostType )
{
	return uri->GetHostType(pdwHostType);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetUserInfo( __RPC__deref_out_opt BSTR *pbstrUserInfo )
{
	return uri->GetUserInfo(pbstrUserInfo);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetPort( __RPC__out DWORD *pdwPort )
{
	return uri->GetPort(pdwPort);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetHost( __RPC__deref_out_opt BSTR *pbstrHost )
{
	return uri->GetHost(pbstrHost);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::HasProperty( Uri_PROPERTY uriProp, __RPC__out BOOL *pfHasProperty )
{
	return uri->HasProperty(uriProp,pfHasProperty);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetSchemeName( __RPC__deref_out_opt BSTR *pbstrSchemeName )
{
	return uri->GetSchemeName(pbstrSchemeName);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetAuthority( __RPC__deref_out_opt BSTR *pbstrAuthority )
{
	return uri->GetAuthority(pbstrAuthority);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetProperties( __RPC__out LPDWORD pdwFlags )
{
	return uri->GetProperties(pdwFlags);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetScheme( __RPC__out DWORD *pdwScheme )
{
	return uri->GetScheme(pdwScheme);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetDomain( __RPC__deref_out_opt BSTR *pbstrDomain )
{
	return uri->GetDomain(pbstrDomain);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetPropertyDWORD( Uri_PROPERTY uriProp, __RPC__out DWORD *pdwProperty, DWORD dwFlags )
{
	return uri->GetPropertyDWORD(uriProp,pdwProperty,dwFlags);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::IsEqual( __RPC__in_opt IUri *pUri, __RPC__out BOOL *pfEqual )
{
	return uri->IsEqual(pUri,pfEqual);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetUserName( __RPC__deref_out_opt BSTR *pbstrUserName)
{
	return uri->GetUserName(pbstrUserName);
}

HRESULT STDMETHODCALLTYPE COpcPartUri::GetPath( __RPC__deref_out_opt BSTR *pbstrPath)
{
	return uri->GetPath(pbstrPath);
}