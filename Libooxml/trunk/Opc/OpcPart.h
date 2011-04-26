#pragma once
#include <Windows.h>
#include <Unknwn.h>
#include <msopc.h>
#include "OpcPartUri.h"
#include "OpcRelationshipSet.h"
class COpcPart : public IOpcPart {
private:
	ULONG ref;
	IOpcPartUri *partUri;
	COpcRelationshipSet *relationships;
	LPWSTR contentType;
	OPC_COMPRESSION_OPTIONS compression;
	IStream *partStream;
public:
	virtual HRESULT STDMETHODCALLTYPE QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject );

	virtual ULONG STDMETHODCALLTYPE AddRef( void );

	virtual ULONG STDMETHODCALLTYPE Release( void );
	virtual HRESULT STDMETHODCALLTYPE GetCompressionOptions(OPC_COMPRESSION_OPTIONS *compressionOptions);
	virtual HRESULT STDMETHODCALLTYPE GetContentType(LPWSTR *contentType);
	virtual HRESULT STDMETHODCALLTYPE GetName(IOpcPartUri **name);
	virtual HRESULT STDMETHODCALLTYPE GetRelationshipSet(IOpcRelationshipSet **relationshipSet);
	virtual HRESULT STDMETHODCALLTYPE GetContentStream(IStream **stream);
	COpcPart(IOpcPartUri *pPartUri,LPCWSTR pwzContentType, OPC_COMPRESSION_OPTIONS comOpt);
	~COpcPart(void);
};

