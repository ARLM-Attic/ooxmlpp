#pragma once
#include <Windows.h>
#include <Unknwn.h>
#include <msopc.h>
#include <vector>
#include "OpcRelationship.h"
#include "OpcRelationshipEnumerator.h"
class COpcRelationshipSet : public IOpcRelationshipSet {
private:
	ULONG ref;
	IOpcPartUri *sourceUri;
	std::vector<COpcRelationship*> parts;
public:
	virtual HRESULT STDMETHODCALLTYPE QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject );

	virtual ULONG STDMETHODCALLTYPE AddRef( void );

	virtual ULONG STDMETHODCALLTYPE Release( void );
	virtual HRESULT STDMETHODCALLTYPE CreateRelationship(LPCWSTR relationshipIdentifier, LPCWSTR relationshipType, IUri *targetUri, OPC_URI_TARGET_MODE targetMode, IOpcRelationship **relationship);
	virtual HRESULT STDMETHODCALLTYPE DeleteRelationship(LPCWSTR relationshipIdentifier);
	virtual HRESULT STDMETHODCALLTYPE GetEnumerator(IOpcRelationshipEnumerator **relationshipEnumerator);
	virtual HRESULT STDMETHODCALLTYPE GetEnumeratorForType(LPCWSTR relationshipType, IOpcRelationshipEnumerator **relationshipEnumerator);
	virtual HRESULT STDMETHODCALLTYPE GetRelationship(LPCWSTR relationshipIdentifier,IOpcRelationship **relationship);
	virtual HRESULT STDMETHODCALLTYPE GetRelationshipsContentStream(IStream **contents);
	virtual HRESULT STDMETHODCALLTYPE RelationshipExists(LPCWSTR relationshipIdentifier, BOOL *relationshipExists);
	COpcRelationshipSet(IOpcPartUri *source);
	~COpcRelationshipSet(void);
};

