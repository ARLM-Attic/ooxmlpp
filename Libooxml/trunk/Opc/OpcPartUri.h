#pragma once
#include <Windows.h>
#include <UrlMon.h>
#include <msopc.h>
#include <comutil.h>
#include "OpcUri.h"
class COpcPartUri : public IOpcPartUri {
private:
	COpcUri *uri;
	ULONG ref;
public:
	virtual HRESULT STDMETHODCALLTYPE ComparePartUri(IOpcPartUri *partUri,INT32 *comparisonResult);
	virtual HRESULT STDMETHODCALLTYPE GetSourceUri(IOpcUri **sourceUri);
	virtual HRESULT STDMETHODCALLTYPE IsRelationshipsPartUri(BOOL *isRelationshipUri);
	COpcPartUri(COpcUri *uri);
	COpcPartUri(IUri *uri);
	COpcPartUri(LPCWSTR pwzStr);
	~COpcPartUri(void);

	virtual HRESULT STDMETHODCALLTYPE QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject );

	virtual ULONG STDMETHODCALLTYPE AddRef( void );

	virtual ULONG STDMETHODCALLTYPE Release( void );

	virtual HRESULT STDMETHODCALLTYPE GetZone( __RPC__out DWORD *pdwZone );

	virtual HRESULT STDMETHODCALLTYPE GetExtension( __RPC__deref_out_opt BSTR *pbstrExtension );

	virtual HRESULT STDMETHODCALLTYPE GetPassword( __RPC__deref_out_opt BSTR *pbstrPassword );

	virtual HRESULT STDMETHODCALLTYPE GetPropertyLength( Uri_PROPERTY uriProp, __RPC__out DWORD *pcchProperty, DWORD dwFlags );

	virtual HRESULT STDMETHODCALLTYPE GetPropertyBSTR( Uri_PROPERTY uriProp, __RPC__deref_out_opt BSTR *pbstrProperty, DWORD dwFlags );

	virtual HRESULT STDMETHODCALLTYPE GetAbsoluteUri( __RPC__deref_out_opt BSTR *pbstrAbsoluteUri );

	virtual HRESULT STDMETHODCALLTYPE GetRawUri( __RPC__deref_out_opt BSTR *pbstrRawUri );

	virtual HRESULT STDMETHODCALLTYPE GetFragment( __RPC__deref_out_opt BSTR *pbstrFragment );

	virtual HRESULT STDMETHODCALLTYPE GetQuery( __RPC__deref_out_opt BSTR *pbstrQuery );

	virtual HRESULT STDMETHODCALLTYPE GetDisplayUri( __RPC__deref_out_opt BSTR *pbstrDisplayString );

	virtual HRESULT STDMETHODCALLTYPE GetPath( __RPC__deref_out_opt BSTR *pbstrPath);

	virtual HRESULT STDMETHODCALLTYPE GetPathAndQuery( __RPC__deref_out_opt BSTR *pbstrPathAndQuery );

	virtual HRESULT STDMETHODCALLTYPE GetHostType( __RPC__out DWORD *pdwHostType );

	virtual HRESULT STDMETHODCALLTYPE GetUserInfo( __RPC__deref_out_opt BSTR *pbstrUserInfo );

	virtual HRESULT STDMETHODCALLTYPE GetPort( __RPC__out DWORD *pdwPort );

	virtual HRESULT STDMETHODCALLTYPE GetHost( __RPC__deref_out_opt BSTR *pbstrHost );

	virtual HRESULT STDMETHODCALLTYPE HasProperty( Uri_PROPERTY uriProp, __RPC__out BOOL *pfHasProperty );

	virtual HRESULT STDMETHODCALLTYPE GetSchemeName( __RPC__deref_out_opt BSTR *pbstrSchemeName );

	virtual HRESULT STDMETHODCALLTYPE GetAuthority( __RPC__deref_out_opt BSTR *pbstrAuthority );

	virtual HRESULT STDMETHODCALLTYPE GetProperties( __RPC__out LPDWORD pdwFlags );

	virtual HRESULT STDMETHODCALLTYPE GetScheme( __RPC__out DWORD *pdwScheme );

	virtual HRESULT STDMETHODCALLTYPE GetDomain( __RPC__deref_out_opt BSTR *pbstrDomain );

	virtual HRESULT STDMETHODCALLTYPE GetPropertyDWORD( Uri_PROPERTY uriProp, __RPC__out DWORD *pdwProperty, DWORD dwFlags );

	virtual HRESULT STDMETHODCALLTYPE IsEqual( __RPC__in_opt IUri *pUri, __RPC__out BOOL *pfEqual );

	virtual HRESULT STDMETHODCALLTYPE GetUserName( __RPC__deref_out_opt BSTR *pbstrUserName);

	virtual HRESULT STDMETHODCALLTYPE CombinePartUri( __RPC__in_opt IUri *relativeUri, __RPC__deref_out_opt IOpcPartUri **combinedUri );

	virtual HRESULT STDMETHODCALLTYPE GetRelationshipsPartUri( __RPC__deref_out_opt IOpcPartUri **relationshipPartUri );

	virtual HRESULT STDMETHODCALLTYPE GetRelativeUri( __RPC__in_opt IOpcPartUri *targetPartUri, __RPC__deref_out_opt IUri **relativeUri );
};


