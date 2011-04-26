#include "OpcUri.h"
#include <string>
#include <Shlwapi.h>
#include <WinInet.h>
#include <vector>
#include "OpcPartUri.h"
COpcUri::COpcUri(IUri *uri) : ref(1)
{
	this->uri = uri;
	this->uri->AddRef();
}

COpcUri::COpcUri(LPCWSTR pwzStr) : ref(1)
{
	DWORD size;
	WCHAR result[INTERNET_MAX_URL_LENGTH];
	CoInternetParseUrl(pwzStr,PARSE_CANONICALIZE,0,result,INTERNET_MAX_URL_LENGTH,&size,0);
	HRESULT hr = CreateUri(result,Uri_CREATE_ALLOW_RELATIVE | Uri_CREATE_CANONICALIZE,0,&uri);
}


COpcUri::~COpcUri(void)
{
	uri->Release();
}

HRESULT STDMETHODCALLTYPE COpcUri::QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject )
{
	if (riid == IID_IOpcUri) {
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

ULONG STDMETHODCALLTYPE COpcUri::AddRef( void )
{
	return ++ref;
}

ULONG STDMETHODCALLTYPE COpcUri::Release( void )
{
	ULONG result = --ref;
	if (result == 0)
		delete this;
	return result;
}

HRESULT STDMETHODCALLTYPE COpcUri::CombinePartUri( __RPC__in_opt IUri *relativeUri, __RPC__deref_out_opt IOpcPartUri **combinedUri )
{
	if (relativeUri == NULL || combinedUri == NULL) return E_POINTER;
	BSTR path1, path2;
	GetPath(&path1);
	relativeUri->GetPath(&path2);
	_bstr_t p1(path1,false), p2(path2,false);
	std::wstring currentpath, relativepath;
	currentpath = p1;
	BOOL hasext;
	HasProperty(Uri_PROPERTY_EXTENSION,&hasext);
	if (hasext) {
		currentpath.erase(currentpath.find_last_of(L"/")+1);
	}
	//get rid of filename in cpath
	relativepath = p2;
	currentpath += relativepath;
	WCHAR out[INTERNET_MAX_URL_LENGTH];
	DWORD size;
	CoInternetParseUrl(currentpath.c_str(),PARSE_CANONICALIZE,0,out,INTERNET_MAX_URL_LENGTH,&size,0);
	//fixslashes
	std::wstring sout(out);
	while (sout.find(L"//") != sout.npos) {
		sout.replace(sout.find(L"//"),2,L"/");
	}
	//fix ../
	SysFreeString(path1);
	SysFreeString(path2);
	*combinedUri = new COpcPartUri(out);
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcUri::GetRelationshipsPartUri( __RPC__deref_out_opt IOpcPartUri **relationshipPartUri )
{
	if (relationshipPartUri == NULL) return E_POINTER;
	BSTR bpart;
	uri->GetPath(&bpart);
	_bstr_t part(bpart,false);
	std::wstring fname = PathFindFileName(part);
	std::wstring filename = part;
	filename.erase(filename.find(fname.c_str()));
	filename += L"_rels/" + fname + L".rels";
	*relationshipPartUri = new COpcPartUri((wchar_t *)filename.c_str());
	SysFreeString(bpart);
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcUri::GetRelativeUri( __RPC__in_opt IOpcPartUri *targetPartUri, __RPC__deref_out_opt IUri **relativeUri )
{
	if (targetPartUri == NULL || relativeUri == NULL) return E_POINTER;
	BSTR path1, path2;
	GetPath(&path1);
	targetPartUri->GetPath(&path2);
	_bstr_t p1(path1,false), p2(path2,false);
	std::wstring currentpath, targetpath;
	currentpath = p1;
	/*BOOL hasext;
	HasProperty(Uri_PROPERTY_EXTENSION,&hasext);
	if (hasext) {
		currentpath.erase(currentpath.find_last_of(L"/")+1);
	}*/
	targetpath = p2;
	std::wstring indir, path;
	std::vector<std::wstring> vcurrent,vinput;
	wchar_t *current = wcstok(&currentpath[0],L"/");
	while (current != NULL) {
		vcurrent.push_back(current);
		current = wcstok(NULL,L"/");
	}
	wchar_t *input = wcstok(&targetpath[0],L"/");
	while (input != NULL) {
		vinput.push_back(input);
		input = wcstok(NULL,L"/");
	}
	while (vcurrent.size() > 1 && vinput.size() > 1) {
		if (vcurrent[0].compare(vinput[0]) == 0) {
		}
		else {
			indir += L"../";
			path += L"/";
			path += vinput[0];
		}
		vcurrent.erase(vcurrent.begin());
		vinput.erase(vinput.begin());
	}
	while (vinput.size() > 1) {
		indir += L"../";
		vinput.erase(vinput.begin());;
	}
	std::wstring reluri = indir + path + L"/" + vinput[0];
	while (reluri.find(L"//") != reluri.npos) {
		reluri.replace(reluri.find(L"//"),2,L"/");
	}
	//compare segments
		//if segment match - do nothing
		//segments mismatch
			//add ../ to indirection string
			//add current CurrentIUri segment to path
		//stop when nothing left in current iuri
			//for each segment still left in input add ../ to indir
	SysFreeString(path1);
	SysFreeString(path2);
	return CreateUri(reluri.c_str(),Uri_CREATE_ALLOW_RELATIVE | Uri_CREATE_CANONICALIZE,0,relativeUri);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetZone( __RPC__out DWORD *pdwZone )
{
	return uri->GetZone(pdwZone);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetExtension( __RPC__deref_out_opt BSTR *pbstrExtension )
{
	return uri->GetExtension(pbstrExtension);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetPassword( __RPC__deref_out_opt BSTR *pbstrPassword )
{
	return uri->GetPassword(pbstrPassword);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetPropertyLength( Uri_PROPERTY uriProp, __RPC__out DWORD *pcchProperty, DWORD dwFlags )
{
	return uri->GetPropertyLength(uriProp,pcchProperty,dwFlags);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetPropertyBSTR( Uri_PROPERTY uriProp, __RPC__deref_out_opt BSTR *pbstrProperty, DWORD dwFlags )
{
	return uri->GetPropertyBSTR(uriProp,pbstrProperty,dwFlags);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetAbsoluteUri( __RPC__deref_out_opt BSTR *pbstrAbsoluteUri )
{
	return uri->GetAbsoluteUri(pbstrAbsoluteUri);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetRawUri( __RPC__deref_out_opt BSTR *pbstrRawUri )
{
	return uri->GetRawUri(pbstrRawUri);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetFragment( __RPC__deref_out_opt BSTR *pbstrFragment )
{
	return uri->GetFragment(pbstrFragment);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetQuery( __RPC__deref_out_opt BSTR *pbstrQuery )
{
	return uri->GetQuery(pbstrQuery);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetDisplayUri( __RPC__deref_out_opt BSTR *pbstrDisplayString )
{
	return uri->GetDisplayUri(pbstrDisplayString);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetPathAndQuery( __RPC__deref_out_opt BSTR *pbstrPathAndQuery )
{
	return uri->GetPathAndQuery(pbstrPathAndQuery);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetHostType( __RPC__out DWORD *pdwHostType )
{
	return uri->GetHostType(pdwHostType);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetUserInfo( __RPC__deref_out_opt BSTR *pbstrUserInfo )
{
	return uri->GetUserInfo(pbstrUserInfo);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetPort( __RPC__out DWORD *pdwPort )
{
	return uri->GetPort(pdwPort);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetHost( __RPC__deref_out_opt BSTR *pbstrHost )
{
	return uri->GetHost(pbstrHost);
}

HRESULT STDMETHODCALLTYPE COpcUri::HasProperty( Uri_PROPERTY uriProp, __RPC__out BOOL *pfHasProperty )
{
	return uri->HasProperty(uriProp,pfHasProperty);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetSchemeName( __RPC__deref_out_opt BSTR *pbstrSchemeName )
{
	return uri->GetSchemeName(pbstrSchemeName);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetAuthority( __RPC__deref_out_opt BSTR *pbstrAuthority )
{
	return uri->GetAuthority(pbstrAuthority);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetProperties( __RPC__out LPDWORD pdwFlags )
{
	return uri->GetProperties(pdwFlags);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetScheme( __RPC__out DWORD *pdwScheme )
{
	return uri->GetScheme(pdwScheme);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetDomain( __RPC__deref_out_opt BSTR *pbstrDomain )
{
	return uri->GetDomain(pbstrDomain);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetPropertyDWORD( Uri_PROPERTY uriProp, __RPC__out DWORD *pdwProperty, DWORD dwFlags )
{
	return uri->GetPropertyDWORD(uriProp,pdwProperty,dwFlags);
}

HRESULT STDMETHODCALLTYPE COpcUri::IsEqual( __RPC__in_opt IUri *pUri, __RPC__out BOOL *pfEqual )
{
	return uri->IsEqual(pUri,pfEqual);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetUserName( __RPC__deref_out_opt BSTR *pbstrUserName)
{
	return uri->GetUserName(pbstrUserName);
}

HRESULT STDMETHODCALLTYPE COpcUri::GetPath( __RPC__deref_out_opt BSTR *pbstrPath)
{
	return uri->GetPath(pbstrPath);
}