#include "OpcPackage.h"


COpcPackage::COpcPackage(void): ref(1) {
	partSet = new COpcPartSet();
	relSet = new COpcRelationshipSet(new COpcPartUri(L"/"));
}


COpcPackage::~COpcPackage(void) {
	partSet->Release();
	relSet->Release();
}

HRESULT STDMETHODCALLTYPE COpcPackage::QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject )
{
	if (riid == IID_IOpcPackage) {
		*ppvObject = static_cast<IOpcPackage *>(this);
	}
	else if (riid == IID_IUnknown) {
		*ppvObject = static_cast<IUnknown *>(this);
	}
	else {
		return E_NOINTERFACE;
	}
	reinterpret_cast<IUnknown*>(*ppvObject)->AddRef();
	return S_OK;
}

ULONG STDMETHODCALLTYPE COpcPackage::AddRef( void )
{
	ref++;
	return ref;
}

ULONG STDMETHODCALLTYPE COpcPackage::Release( void )
{
	int result;
	ref--;
	result = ref;
	if (result == 0)
		delete this;
	return result;
}

HRESULT COpcPackage::GetRelationshipSet(IOpcRelationshipSet **relationshipSet )
{
	if (relationshipSet == NULL) return E_POINTER;
	return relSet->QueryInterface(IID_IOpcRelationshipSet,(void **)relationshipSet);
}

HRESULT COpcPackage::GetPartSet(IOpcPartSet **partSet )
{
	if (partSet == NULL) return E_POINTER;
	return this->partSet->QueryInterface(IID_IOpcPartSet,(void **)partSet);
}
