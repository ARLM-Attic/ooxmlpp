#pragma once
#include <Windows.h>
#include <Unknwn.h>
#include <msopc.h>
class COpcFactory : public IOpcFactory {
public:
	COpcFactory(void);
	~COpcFactory(void);

	HRESULT STDMETHODCALLTYPE QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject );

	ULONG STDMETHODCALLTYPE AddRef( void );

	ULONG STDMETHODCALLTYPE Release( void );

	HRESULT STDMETHODCALLTYPE CreatePackage(IOpcPackage **package);
	HRESULT STDMETHODCALLTYPE CreatePackageRootUri(IOpcUri **rootUri);
	HRESULT STDMETHODCALLTYPE CreatePartUri(LPCWSTR pwzUri,IOpcPartUri **partUri);

	HRESULT STDMETHODCALLTYPE CreateStreamOnFile( LPCWSTR filename, OPC_STREAM_IO_MODE ioMode, LPSECURITY_ATTRIBUTES securityAttributes, DWORD dwFlagsAndAttributes, IStream **stream );

	HRESULT STDMETHODCALLTYPE ReadPackageFromStream( __RPC__in_opt IStream *stream, OPC_READ_FLAGS flags, __RPC__deref_out_opt IOpcPackage **package );

	HRESULT STDMETHODCALLTYPE WritePackageToStream( __RPC__in_opt IOpcPackage *package, OPC_WRITE_FLAGS flags, __RPC__in_opt IStream *stream );

	HRESULT STDMETHODCALLTYPE CreateDigitalSignatureManager( __RPC__in_opt IOpcPackage *package, __RPC__deref_out_opt IOpcDigitalSignatureManager **signatureManager );

};

