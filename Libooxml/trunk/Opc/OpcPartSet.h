#pragma once
#include <Windows.h>
#include <Unknwn.h>
#include <msopc.h>
#include <vector>
#include "OpcPart.h"
class COpcPartSet : public IOpcPartSet {
private:
	ULONG ref;
	std::vector<COpcPart *> parts;
public:
	HRESULT STDMETHODCALLTYPE QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject );

	ULONG STDMETHODCALLTYPE AddRef( void );

	ULONG STDMETHODCALLTYPE Release( void );
	HRESULT STDMETHODCALLTYPE CreatePart(IOpcPartUri *name, LPCWSTR contentType, OPC_COMPRESSION_OPTIONS compressionOptions, IOpcPart **part);
	HRESULT STDMETHODCALLTYPE DeletePart(IOpcPartUri *name);
	HRESULT STDMETHODCALLTYPE GetEnumerator(IOpcPartEnumerator **partEnumerator);
	HRESULT STDMETHODCALLTYPE GetPart(IOpcPartUri *name, IOpcPart **part);
	HRESULT STDMETHODCALLTYPE PartExists(IOpcPartUri *name, BOOL *partExists);
	COpcPartSet(void);
	~COpcPartSet(void);
};

