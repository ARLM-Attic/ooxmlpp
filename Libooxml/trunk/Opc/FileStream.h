#pragma once
#include <Windows.h>
#include <msopc.h>

class CFileStream : public IStream {
private:
	HANDLE file;
	LONG ref;
public:
	CFileStream(LPCWSTR filename, OPC_STREAM_IO_MODE ioMode, LPSECURITY_ATTRIBUTES securityAttributes, DWORD dwFlagsAndAttributes);
	~CFileStream(void);

	virtual HRESULT STDMETHODCALLTYPE Seek(LARGE_INTEGER dlibMove,	DWORD dwOrigin, ULARGE_INTEGER *plibNewPosition);
				
	virtual HRESULT STDMETHODCALLTYPE SetSize(ULARGE_INTEGER libNewSize);
				
	virtual HRESULT STDMETHODCALLTYPE CopyTo(IStream *pstm, ULARGE_INTEGER cb, ULARGE_INTEGER *pcbRead, ULARGE_INTEGER *pcbWritten);
				
	virtual HRESULT STDMETHODCALLTYPE Commit(DWORD grfCommitFlags);
				
	virtual HRESULT STDMETHODCALLTYPE Revert( void);
				
	virtual HRESULT STDMETHODCALLTYPE LockRegion(ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
				
	virtual HRESULT STDMETHODCALLTYPE UnlockRegion(ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
				
	virtual HRESULT STDMETHODCALLTYPE Stat(STATSTG *pstatstg, DWORD grfStatFlag);
				
	virtual HRESULT STDMETHODCALLTYPE Clone(__RPC__deref_out_opt IStream **ppstm);

	virtual HRESULT STDMETHODCALLTYPE Read(void *pv, ULONG cb, ULONG *pcbRead);
				
	virtual HRESULT STDMETHODCALLTYPE Write(const void *pv, ULONG cb, ULONG *pcbWritten);

	virtual HRESULT STDMETHODCALLTYPE QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject );

	virtual ULONG STDMETHODCALLTYPE AddRef( void );

	virtual	ULONG STDMETHODCALLTYPE Release( void );
};

