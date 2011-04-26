#pragma once
#include <Windows.h>
#include <Unknwn.h>
#include <msopc.h>
class COpcRelationship : public IOpcRelationship {
private:
	ULONG ref;
	LPWSTR id;
	LPWSTR relType;
	OPC_URI_TARGET_MODE targetMode;
	IOpcPartUri *pTargetUri, *sourceUri;
public:
	virtual HRESULT STDMETHODCALLTYPE QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject );

	virtual ULONG STDMETHODCALLTYPE AddRef( void );

	virtual ULONG STDMETHODCALLTYPE Release( void );
	HRESULT STDMETHODCALLTYPE GetId(LPWSTR *relationshipIdentifier);
	HRESULT STDMETHODCALLTYPE GetRelationshipType(LPWSTR *relationshipType);
	HRESULT STDMETHODCALLTYPE GetSourceUri(IOpcUri **sourceUri);
	HRESULT STDMETHODCALLTYPE GetTargetMode(OPC_URI_TARGET_MODE *targetMode);
	HRESULT STDMETHODCALLTYPE GetTargetUri(IUri **targetUri);
	COpcRelationship(LPCWSTR relationshipIdentifier, LPCWSTR relationshipType, IUri *targetUri, OPC_URI_TARGET_MODE targetMode, IOpcPartUri *source);
	~COpcRelationship(void);
};

