#pragma once
#include <Windows.h>
#include <Unknwn.h>
#include <msopc.h>
#include "OpcPartSet.h"
#include "OpcRelationshipSet.h"
class COpcPackage : public IOpcPackage {
private:
	ULONG ref;
	COpcPartSet *partSet;
	COpcRelationshipSet *relSet;
public:
	HRESULT STDMETHODCALLTYPE QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject );

	ULONG STDMETHODCALLTYPE AddRef( void );

	ULONG STDMETHODCALLTYPE Release( void );
	HRESULT STDMETHODCALLTYPE GetPartSet(IOpcPartSet **partSet);
	HRESULT STDMETHODCALLTYPE GetRelationshipSet(IOpcRelationshipSet **relationshipSet);
	COpcPackage(void);
	~COpcPackage(void);
};

