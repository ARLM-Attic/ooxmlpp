#include "FileStream.h"


CFileStream::CFileStream(LPCWSTR filename, OPC_STREAM_IO_MODE ioMode, LPSECURITY_ATTRIBUTES securityAttributes, DWORD dwFlagsAndAttributes) : ref(1)
{
	DWORD size, read = 0;
	if (ioMode == OPC_STREAM_IO_READ) {
		file = CreateFile(filename,GENERIC_READ,0,securityAttributes,OPEN_ALWAYS,dwFlagsAndAttributes,0);
	}
	else {
		file = CreateFile(filename,GENERIC_WRITE,0,securityAttributes,CREATE_ALWAYS,dwFlagsAndAttributes,0);
	}
}


CFileStream::~CFileStream(void)
{
	CloseHandle(file);
}

HRESULT STDMETHODCALLTYPE CFileStream::QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject )
{
	if (riid == IID_IStream) {
		*ppvObject = static_cast<IStream *>(this);
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

ULONG STDMETHODCALLTYPE CFileStream::AddRef( void )
{
	ref++;
	return ref;
}

ULONG STDMETHODCALLTYPE CFileStream::Release( void )
{
	LONG ans = --ref;
	if (ans == 0)
		delete this;
	return ans;
}

HRESULT STDMETHODCALLTYPE CFileStream::Seek(LARGE_INTEGER dlibMove,	DWORD dwOrigin, ULARGE_INTEGER *plibNewPosition) 
{
	LONG highpos = dlibMove.HighPart;
	DWORD pos = SetFilePointer(file,dlibMove.LowPart,&highpos,dwOrigin);
	(*plibNewPosition).HighPart = highpos;
	(*plibNewPosition).LowPart = pos;
	return S_OK;
}
				
HRESULT STDMETHODCALLTYPE CFileStream::SetSize(ULARGE_INTEGER libNewSize)
{
	LONG highpos = libNewSize.HighPart;
	DWORD pos = SetFilePointer(file,libNewSize.LowPart,&highpos,STREAM_SEEK_SET);
	SetEndOfFile(file);
	return S_OK;
}
				
HRESULT STDMETHODCALLTYPE CFileStream::CopyTo(IStream *pstm, ULARGE_INTEGER cb, ULARGE_INTEGER *pcbRead, ULARGE_INTEGER *pcbWritten)
{
	return E_NOTIMPL;
}
				
 HRESULT STDMETHODCALLTYPE CFileStream::Commit(DWORD grfCommitFlags)
 {
	 return E_NOTIMPL;
 }
				
 HRESULT STDMETHODCALLTYPE CFileStream::Revert(void)
 {
	 return E_NOTIMPL;
 }
				
 HRESULT STDMETHODCALLTYPE CFileStream::LockRegion(ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType)
 {
	 return STG_E_INVALIDFUNCTION;
 }
				
 HRESULT STDMETHODCALLTYPE CFileStream::UnlockRegion(ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType) 
 {
	 return STG_E_INVALIDFUNCTION;
 }
				
 HRESULT STDMETHODCALLTYPE CFileStream::Stat(STATSTG *pstatstg, DWORD grfStatFlag)
 {
	 return E_NOTIMPL;
 }
				
 HRESULT STDMETHODCALLTYPE CFileStream::Clone(__RPC__deref_out_opt IStream **ppstm)
 {
	 return E_NOTIMPL;
 }

 HRESULT STDMETHODCALLTYPE CFileStream::Read(void *pv, ULONG cb, ULONG *pcbRead)
 {
	 if (pv == NULL || pcbRead == NULL) return STG_E_INVALIDPOINTER;
	 ReadFile(file,pv,cb,pcbRead,NULL);
	 if (cb == *pcbRead) return S_OK;
	 else return S_FALSE;
 }
				
 HRESULT STDMETHODCALLTYPE CFileStream::Write(const void *pv, ULONG cb, ULONG *pcbWritten)
 {
	 if (pv == NULL || pcbWritten == NULL) return STG_E_INVALIDPOINTER;
	 WriteFile(file,pv,cb,pcbWritten,NULL);
	 return S_OK;
 }