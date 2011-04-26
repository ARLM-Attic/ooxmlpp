#include "OpcPartEnumerator.h"


COpcPartEnumerator::COpcPartEnumerator(std::vector<COpcPart *> vParts) : ref(1)
{
	parts = vParts;
	iter = parts.begin();
	beforebegin = true;
	afterend = false;
}


COpcPartEnumerator::~COpcPartEnumerator(void)
{
}

HRESULT STDMETHODCALLTYPE COpcPartEnumerator::QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject )
{
	if (riid == IID_IOpcPartEnumerator) {
		*ppvObject = static_cast<IOpcPartEnumerator*>(this);
	}
	else if (riid == IID_IUnknown) {
		*ppvObject = static_cast<IUnknown*>(this);
	}
	else {
		return E_NOINTERFACE;
	}
	reinterpret_cast<IUnknown*>(*ppvObject)->AddRef();
	return S_OK;
}

ULONG STDMETHODCALLTYPE COpcPartEnumerator::AddRef( void )
{
	ref++;
	return ref;
}

ULONG STDMETHODCALLTYPE COpcPartEnumerator::Release( void )
{
	ref--;
	if (ref == 0)
		delete this;
	return ref;
}

HRESULT COpcPartEnumerator::Clone( IOpcPartEnumerator **copy )
{
	if (copy == NULL) return E_POINTER;
	*copy = new COpcPartEnumerator(parts);
	return S_OK;
}

HRESULT COpcPartEnumerator::GetCurrent(IOpcPart **part )
{
	if (part == NULL) return E_POINTER;
	*part = *iter;
	reinterpret_cast<IUnknown *>(*part)->AddRef();
	return S_OK;
}

HRESULT COpcPartEnumerator::MoveNext(BOOL *hasNext )
{
	if (hasNext == NULL) return E_POINTER;
	if (iter == parts.end()) {
		*hasNext = FALSE;
		afterend = true;
		return OPC_E_ENUM_CANNOT_MOVE_NEXT;
	}
	if (beforebegin == true) {
		iter = parts.begin();
		*hasNext = true;
		beforebegin = false;
		return S_OK;
	}
	iter++;
	if (iter == parts.end()) {
		*hasNext = false;
		afterend = true;
	}
	else {
		*hasNext = TRUE;
		afterend = false;
	}
	return S_OK;
}

HRESULT COpcPartEnumerator::MovePrevious(BOOL *hasPrevious )
{
	if (hasPrevious == NULL) return E_POINTER;
	if (iter == parts.begin()) {
		*hasPrevious = FALSE;
		beforebegin = true;
		return OPC_E_ENUM_CANNOT_MOVE_PREVIOUS;
	}
	if (afterend == true) {
		iter = parts.end();
		*hasPrevious = true;
		afterend = false;
		return S_OK;
	}
	iter--;
	if (iter == parts.begin()) {
		*hasPrevious = FALSE;
		beforebegin = false;
	}
	else {
		*hasPrevious = TRUE;
		beforebegin = false;
	}
	return S_OK;
}
