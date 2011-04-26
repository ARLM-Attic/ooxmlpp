#include "OpcPart.h"
#include "OpcRelationshipSet.h"

COpcPart::COpcPart(IOpcPartUri *pPartUri,LPCWSTR pwzContentType, OPC_COMPRESSION_OPTIONS comOpt) : ref(1)
{
	partUri = pPartUri;
	partUri->AddRef();
	int length = wcslen(pwzContentType);
	int memlength = length*sizeof(wchar_t);
	memlength += sizeof(wchar_t);//add space for null char
	contentType = (LPWSTR)CoTaskMemAlloc(memlength);
	ZeroMemory((void *)contentType,memlength);
	CopyMemory((void *)contentType,pwzContentType,memlength-sizeof(wchar_t));
	relationships = new COpcRelationshipSet(partUri);
	compression = comOpt;
	CreateStreamOnHGlobal(NULL,TRUE,&partStream);
}


COpcPart::~COpcPart(void)
{
	CoTaskMemFree((void *)contentType);
	relationships->Release();
	partUri->Release();
	partStream->Release();
}

HRESULT STDMETHODCALLTYPE COpcPart::QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject )
{
	if (riid == IID_IOpcPart) {
		*ppvObject = static_cast<IOpcPart*>(this);
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

ULONG STDMETHODCALLTYPE COpcPart::AddRef( void )
{
	ref++;
	return ref;
}

ULONG STDMETHODCALLTYPE COpcPart::Release( void )
{
	int res = ref--;
	if (ref == 0)
		delete this;
	return res;
}

HRESULT COpcPart::GetCompressionOptions( OPC_COMPRESSION_OPTIONS *compressionOptions )
{
	if (compressionOptions == NULL) return E_POINTER;
	*compressionOptions = compression;
	return S_OK;
}

HRESULT COpcPart::GetContentType(LPWSTR *contentType )
{
	if (contentType == NULL) return E_POINTER;
	int length = wcslen(this->contentType);
	int memlength = (length+1)*sizeof(wchar_t);
	*contentType = (LPWSTR) CoTaskMemAlloc(memlength);
	ZeroMemory(*contentType,memlength);
	CopyMemory(*contentType,this->contentType,memlength-sizeof(wchar_t));
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcPart::GetContentStream(IStream **stream)
{
	if (stream == NULL) return E_POINTER;
	*stream = partStream;
	reinterpret_cast<IUnknown*>(*stream)->AddRef();
	return S_OK;
}

HRESULT COpcPart::GetName(IOpcPartUri **name )
{
	if (name == NULL) return E_POINTER;
	*name = partUri;
	(*name)->AddRef();
	return S_OK;
}

HRESULT COpcPart::GetRelationshipSet(IOpcRelationshipSet **relationshipSet )
{
	if (relationshipSet == NULL) return E_POINTER;
	*relationshipSet = relationships;
	relationships->AddRef();
	return S_OK;
}
