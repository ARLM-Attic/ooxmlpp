#pragma once
#include <Windows.h>
#include <Unknwn.h>
#include <msopc.h>
#include <vector>
#include "OpcPart.h"
class COpcPartEnumerator : public IOpcPartEnumerator {
private:
	ULONG ref;
	std::vector<COpcPart *> parts;
	std::vector<COpcPart *>::iterator iter;
	bool beforebegin,afterend;
public:
	HRESULT STDMETHODCALLTYPE QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject );

	ULONG STDMETHODCALLTYPE AddRef( void );

	ULONG STDMETHODCALLTYPE Release( void );
	HRESULT STDMETHODCALLTYPE Clone(IOpcPartEnumerator **copy);
	HRESULT STDMETHODCALLTYPE GetCurrent(IOpcPart **part);
	HRESULT STDMETHODCALLTYPE MoveNext(BOOL *hasNext);
	HRESULT STDMETHODCALLTYPE MovePrevious(BOOL *hasPrevious);

	COpcPartEnumerator(std::vector<COpcPart *> vParts);
	~COpcPartEnumerator(void);
};

