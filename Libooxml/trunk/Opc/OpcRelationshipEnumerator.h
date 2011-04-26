#pragma once
#include <Windows.h>
#include <Unknwn.h>
#include <msopc.h>
#include <vector>
#include "OpcRelationship.h"
class COpcRelationshipEnumerator : public IOpcRelationshipEnumerator {
private:
	ULONG ref;
	std::vector<COpcRelationship *> parts;
	std::vector<COpcRelationship *>::iterator iter;
	bool beforebegin,afterend;
public:
	virtual HRESULT STDMETHODCALLTYPE QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject );

	virtual ULONG STDMETHODCALLTYPE AddRef( void );

	virtual ULONG STDMETHODCALLTYPE Release( void );
	HRESULT STDMETHODCALLTYPE Clone(IOpcRelationshipEnumerator **copy);
	HRESULT STDMETHODCALLTYPE GetCurrent(IOpcRelationship **relationship);
	HRESULT STDMETHODCALLTYPE MoveNext(BOOL *hasNext);
	HRESULT STDMETHODCALLTYPE MovePrevious(BOOL *hasPrevious);
	COpcRelationshipEnumerator(std::vector<COpcRelationship*> vParts);
	~COpcRelationshipEnumerator(void);
};

