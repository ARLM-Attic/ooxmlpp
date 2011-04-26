#include "OpcFactory.h"
#include "OpcPackage.h"
#include "OpcUri.h"
#include "OpcPartUri.h"
#include "FileStream.h"
#include "unzip.h"
#include "zip.h"
#include "opc-contentTypes.h"
#include "opc-relationships.h"
#include <iostream>

#include <stdlib.h>
#include "zlib.h"
#include "ioapi.h"
#include "iowin32.h"

#ifndef INVALID_HANDLE_VALUE
#define INVALID_HANDLE_VALUE (0xFFFFFFFF)
#endif

#ifndef INVALID_SET_FILE_POINTER
#define INVALID_SET_FILE_POINTER ((DWORD)-1)
#endif

voidpf  ZCALLBACK win32_open_file_func  OF((voidpf opaque, const char* filename, int mode));
uLong   ZCALLBACK win32_read_file_func  OF((voidpf opaque, voidpf stream, void* buf, uLong size));
uLong   ZCALLBACK win32_write_file_func OF((voidpf opaque, voidpf stream, const void* buf, uLong size));
ZPOS64_T ZCALLBACK win32_tell64_file_func  OF((voidpf opaque, voidpf stream));
long    ZCALLBACK win32_seek64_file_func  OF((voidpf opaque, voidpf stream, ZPOS64_T offset, int origin));
int     ZCALLBACK win32_close_file_func OF((voidpf opaque, voidpf stream));
int     ZCALLBACK win32_error_file_func OF((voidpf opaque, voidpf stream));

typedef struct
{
		IStream *str;
		int error;
} WIN32FILE_IOWIN;


static void win32_translate_open_mode(int mode,
																			DWORD* lpdwDesiredAccess,
																			DWORD* lpdwCreationDisposition,
																			DWORD* lpdwShareMode,
																			DWORD* lpdwFlagsAndAttributes)
{
		*lpdwDesiredAccess = *lpdwShareMode = *lpdwFlagsAndAttributes = *lpdwCreationDisposition = 0;

		if ((mode & ZLIB_FILEFUNC_MODE_READWRITEFILTER)==ZLIB_FILEFUNC_MODE_READ)
		{
				*lpdwDesiredAccess = GENERIC_READ;
				*lpdwCreationDisposition = OPEN_EXISTING;
				*lpdwShareMode = FILE_SHARE_READ;
		}
		else if (mode & ZLIB_FILEFUNC_MODE_EXISTING)
		{
				*lpdwDesiredAccess = GENERIC_WRITE | GENERIC_READ;
				*lpdwCreationDisposition = OPEN_EXISTING;
		}
		else if (mode & ZLIB_FILEFUNC_MODE_CREATE)
		{
				*lpdwDesiredAccess = GENERIC_WRITE | GENERIC_READ;
				*lpdwCreationDisposition = CREATE_ALWAYS;
		}
}

static voidpf win32_build_iowin(IStream *iStr)
{
		voidpf ret=NULL;

		if ((iStr != NULL))
		{
				WIN32FILE_IOWIN w32fiow;
				w32fiow.str = iStr;
				w32fiow.str->AddRef();
				w32fiow.error = 0;
				ret = malloc(sizeof(WIN32FILE_IOWIN));

				if (ret==NULL)
					iStr->Release();
				else
					*((WIN32FILE_IOWIN*)ret) = w32fiow;
		}
		return ret;
}

voidpf ZCALLBACK win32_open64_file_func (voidpf opaque,const void* filename,int mode)
{
		const char* mode_fopen = NULL;
		DWORD dwDesiredAccess,dwCreationDisposition,dwShareMode,dwFlagsAndAttributes ;

		win32_translate_open_mode(mode,&dwDesiredAccess,&dwCreationDisposition,&dwShareMode,&dwFlagsAndAttributes);

		return win32_build_iowin((IStream*)filename);
}


voidpf ZCALLBACK win32_open64_file_funcA (voidpf opaque,const void* filename,int mode)
{
		const char* mode_fopen = NULL;
		DWORD dwDesiredAccess,dwCreationDisposition,dwShareMode,dwFlagsAndAttributes ;

		win32_translate_open_mode(mode,&dwDesiredAccess,&dwCreationDisposition,&dwShareMode,&dwFlagsAndAttributes);

		return win32_build_iowin((IStream*)filename);
}


voidpf ZCALLBACK win32_open64_file_funcW (voidpf opaque,const void* filename,int mode)
{
		const char* mode_fopen = NULL;
		DWORD dwDesiredAccess,dwCreationDisposition,dwShareMode,dwFlagsAndAttributes ;

		win32_translate_open_mode(mode,&dwDesiredAccess,&dwCreationDisposition,&dwShareMode,&dwFlagsAndAttributes);

		return win32_build_iowin((IStream*)filename);
}


voidpf ZCALLBACK win32_open_file_func (voidpf opaque,const char* filename,int mode)
{
		const char* mode_fopen = NULL;
		DWORD dwDesiredAccess,dwCreationDisposition,dwShareMode,dwFlagsAndAttributes ;

		win32_translate_open_mode(mode,&dwDesiredAccess,&dwCreationDisposition,&dwShareMode,&dwFlagsAndAttributes);

		return win32_build_iowin((IStream*)filename);
}


uLong ZCALLBACK win32_read_file_func (voidpf opaque, voidpf stream, void* buf,uLong size)
{
		uLong ret=0;
		IStream *str = NULL;
		if (stream!=NULL)
			str = ((WIN32FILE_IOWIN*)stream)->str;

		if (str != NULL)
		{
			((WIN32FILE_IOWIN*)stream)->error = str->Read(buf,size,&ret);
			std::cout << "read " << size << std::endl;
		}

		return ret;
}


uLong ZCALLBACK win32_write_file_func (voidpf opaque,voidpf stream,const void* buf,uLong size)
{
		uLong ret=0;
		IStream *str = NULL;
		if (stream!=NULL)
				str = ((WIN32FILE_IOWIN*)stream)->str;

		if (str != NULL)
		{
				((WIN32FILE_IOWIN*)stream)->error = str->Write(buf,size,&ret);
				std::cout << "write " << size << std::endl;
		}

		return ret;
}

long ZCALLBACK win32_tell_file_func (voidpf opaque,voidpf stream)
{
		long ret=-1;
		IStream *str = NULL;
		if (stream!=NULL)
				str = ((WIN32FILE_IOWIN*)stream)->str;
		if (str != NULL)
		{
				LARGE_INTEGER li;
				li.QuadPart = 0;
				ULARGE_INTEGER pos;
				str->Seek(li,STREAM_SEEK_CUR,&pos);
				ret = pos.LowPart;
				std::cout << "tell " << ret << std::endl;
		}
		return ret;
}

ZPOS64_T ZCALLBACK win32_tell64_file_func (voidpf opaque, voidpf stream)
{
		ZPOS64_T ret= (ZPOS64_T)-1;
		IStream *str = NULL;
		if (stream!=NULL)
				str = ((WIN32FILE_IOWIN*)stream)->str;

		if (str)
		{
				LARGE_INTEGER li;
				li.QuadPart = 0;
				ULARGE_INTEGER pos;
				str->Seek(li,STREAM_SEEK_CUR,&pos);
				ret = pos.QuadPart;
				std::cout << "tell64 " << ret << std::endl;
		}
		return ret;
}


long ZCALLBACK win32_seek_file_func (voidpf opaque,voidpf stream,uLong offset,int origin)
{
		DWORD dwMoveMethod=0xFFFFFFFF;
		IStream *str = NULL;

		long ret=-1;
		if (stream!=NULL)
				str = ((WIN32FILE_IOWIN*)stream)->str;
		switch (origin)
		{
		case ZLIB_FILEFUNC_SEEK_CUR :
				dwMoveMethod = FILE_CURRENT;
				break;
		case ZLIB_FILEFUNC_SEEK_END :
				dwMoveMethod = FILE_END;
				break;
		case ZLIB_FILEFUNC_SEEK_SET :
				dwMoveMethod = FILE_BEGIN;
				break;
		default: return -1;
		}

		if (str != NULL)
		{
			LARGE_INTEGER* li = (LARGE_INTEGER*)&offset;
			ULARGE_INTEGER out;
			str->Seek(*li,dwMoveMethod,&out);
			std::cout << "seek " << offset << std::endl;
			ret = 0;
		}
		return ret;
}

long ZCALLBACK win32_seek64_file_func (voidpf opaque, voidpf stream,ZPOS64_T offset,int origin)
{
		DWORD dwMoveMethod=0xFFFFFFFF;
		IStream *str = NULL;
		long ret=-1;

		if (stream!=NULL)
				str = ((WIN32FILE_IOWIN*)stream)->str;

		switch (origin)
		{
				case ZLIB_FILEFUNC_SEEK_CUR :
						dwMoveMethod = FILE_CURRENT;
						break;
				case ZLIB_FILEFUNC_SEEK_END :
						dwMoveMethod = FILE_END;
						break;
				case ZLIB_FILEFUNC_SEEK_SET :
						dwMoveMethod = FILE_BEGIN;
						break;
				default: return -1;
		}

		if (str)
		{
				LARGE_INTEGER* li = (LARGE_INTEGER*)&offset;
				ULARGE_INTEGER out;
				str->Seek(*li,dwMoveMethod,&out);
				std::cout << "seek64 " << offset << std::endl;
				ret = 0;
		}
		return ret;
}

int ZCALLBACK win32_close_file_func (voidpf opaque, voidpf stream)
{
		int ret=-1;

		if (stream!=NULL)
		{
				IStream *str;
				str = ((WIN32FILE_IOWIN*)stream) -> str;
				if (str != NULL)
				{
					str->Release();
					ret=0;
				}
				free(stream);
		}
		return ret;
}

int ZCALLBACK win32_error_file_func (voidpf opaque,voidpf stream)
{
		int ret=-1;
		if (stream!=NULL)
		{
				ret = ((WIN32FILE_IOWIN*)stream) -> error;
		}
		return ret;
}

void fill_win32_filefunc (zlib_filefunc_def* pzlib_filefunc_def)
{
		pzlib_filefunc_def->zopen_file = win32_open_file_func;
		pzlib_filefunc_def->zread_file = win32_read_file_func;
		pzlib_filefunc_def->zwrite_file = win32_write_file_func;
		pzlib_filefunc_def->ztell_file = win32_tell_file_func;
		pzlib_filefunc_def->zseek_file = win32_seek_file_func;
		pzlib_filefunc_def->zclose_file = win32_close_file_func;
		pzlib_filefunc_def->zerror_file = win32_error_file_func;
		pzlib_filefunc_def->opaque = NULL;
}

void fill_win32_filefunc64(zlib_filefunc64_def* pzlib_filefunc_def)
{
		pzlib_filefunc_def->zopen64_file = win32_open64_file_func;
		pzlib_filefunc_def->zread_file = win32_read_file_func;
		pzlib_filefunc_def->zwrite_file = win32_write_file_func;
		pzlib_filefunc_def->ztell64_file = win32_tell64_file_func;
		pzlib_filefunc_def->zseek64_file = win32_seek64_file_func;
		pzlib_filefunc_def->zclose_file = win32_close_file_func;
		pzlib_filefunc_def->zerror_file = win32_error_file_func;
		pzlib_filefunc_def->opaque = NULL;
}


void fill_win32_filefunc64A(zlib_filefunc64_def* pzlib_filefunc_def)
{
		pzlib_filefunc_def->zopen64_file = win32_open64_file_funcA;
		pzlib_filefunc_def->zread_file = win32_read_file_func;
		pzlib_filefunc_def->zwrite_file = win32_write_file_func;
		pzlib_filefunc_def->ztell64_file = win32_tell64_file_func;
		pzlib_filefunc_def->zseek64_file = win32_seek64_file_func;
		pzlib_filefunc_def->zclose_file = win32_close_file_func;
		pzlib_filefunc_def->zerror_file = win32_error_file_func;
		pzlib_filefunc_def->opaque = NULL;
}


void fill_win32_filefunc64W(zlib_filefunc64_def* pzlib_filefunc_def)
{
		pzlib_filefunc_def->zopen64_file = win32_open64_file_funcW;
		pzlib_filefunc_def->zread_file = win32_read_file_func;
		pzlib_filefunc_def->zwrite_file = win32_write_file_func;
		pzlib_filefunc_def->ztell64_file = win32_tell64_file_func;
		pzlib_filefunc_def->zseek64_file = win32_seek64_file_func;
		pzlib_filefunc_def->zclose_file = win32_close_file_func;
		pzlib_filefunc_def->zerror_file = win32_error_file_func;
		pzlib_filefunc_def->opaque = NULL;
}

/* iowin32.c -- IO base function header for compress/uncompress .zip
		 Version 1.1, February 14h, 2010
		 part of the MiniZip project - ( http://www.winimage.com/zLibDll/minizip.html )

				 Copyright (C) 1998-2010 Gilles Vollant (minizip) ( http://www.winimage.com/zLibDll/minizip.html )

				 Modifications for Zip64 support
				 Copyright (C) 2009-2010 Mathias Svensson ( http://result42.com )

		 For more info read MiniZip_info.txt

*/

/*#include <stdlib.h>

#include "zlib.h"
#include "ioapi.h"
#include "iowin32.h"

#ifndef INVALID_HANDLE_VALUE
#define INVALID_HANDLE_VALUE (0xFFFFFFFF)
#endif

#ifndef INVALID_SET_FILE_POINTER
#define INVALID_SET_FILE_POINTER ((DWORD)-1)
#endif

voidpf  ZCALLBACK win32_open_file_func  OF((voidpf opaque, const char* filename, int mode));
uLong   ZCALLBACK win32_read_file_func  OF((voidpf opaque, voidpf stream, void* buf, uLong size));
uLong   ZCALLBACK win32_write_file_func OF((voidpf opaque, voidpf stream, const void* buf, uLong size));
ZPOS64_T ZCALLBACK win32_tell64_file_func  OF((voidpf opaque, voidpf stream));
long    ZCALLBACK win32_seek64_file_func  OF((voidpf opaque, voidpf stream, ZPOS64_T offset, int origin));
int     ZCALLBACK win32_close_file_func OF((voidpf opaque, voidpf stream));
int     ZCALLBACK win32_error_file_func OF((voidpf opaque, voidpf stream));

typedef struct
{
		HANDLE hf;
		int error;
} WIN32FILE_IOWIN;


static void win32_translate_open_mode(int mode,
																			DWORD* lpdwDesiredAccess,
																			DWORD* lpdwCreationDisposition,
																			DWORD* lpdwShareMode,
																			DWORD* lpdwFlagsAndAttributes)
{
		*lpdwDesiredAccess = *lpdwShareMode = *lpdwFlagsAndAttributes = *lpdwCreationDisposition = 0;

		if ((mode & ZLIB_FILEFUNC_MODE_READWRITEFILTER)==ZLIB_FILEFUNC_MODE_READ)
		{
				*lpdwDesiredAccess = GENERIC_READ;
				*lpdwCreationDisposition = OPEN_EXISTING;
				*lpdwShareMode = FILE_SHARE_READ;
		}
		else if (mode & ZLIB_FILEFUNC_MODE_EXISTING)
		{
				*lpdwDesiredAccess = GENERIC_WRITE | GENERIC_READ;
				*lpdwCreationDisposition = OPEN_EXISTING;
		}
		else if (mode & ZLIB_FILEFUNC_MODE_CREATE)
		{
				*lpdwDesiredAccess = GENERIC_WRITE | GENERIC_READ;
				*lpdwCreationDisposition = CREATE_ALWAYS;
		}
}

static voidpf win32_build_iowin(HANDLE hFile)
{
		voidpf ret=NULL;

		if ((hFile != NULL) && (hFile != INVALID_HANDLE_VALUE))
		{
				WIN32FILE_IOWIN w32fiow;
				w32fiow.hf = hFile;
				w32fiow.error = 0;
				ret = malloc(sizeof(WIN32FILE_IOWIN));

				if (ret==NULL)
						CloseHandle(hFile);
				else
						*((WIN32FILE_IOWIN*)ret) = w32fiow;
		}
		return ret;
}

voidpf ZCALLBACK win32_open64_file_func (voidpf opaque,const void* filename,int mode)
{
		const char* mode_fopen = NULL;
		DWORD dwDesiredAccess,dwCreationDisposition,dwShareMode,dwFlagsAndAttributes ;
		HANDLE hFile = NULL;

		win32_translate_open_mode(mode,&dwDesiredAccess,&dwCreationDisposition,&dwShareMode,&dwFlagsAndAttributes);

		if ((filename!=NULL) && (dwDesiredAccess != 0))
				hFile = CreateFile((LPCTSTR)filename, dwDesiredAccess, dwShareMode, NULL, dwCreationDisposition, dwFlagsAndAttributes, NULL);

		return win32_build_iowin(hFile);
}


voidpf ZCALLBACK win32_open64_file_funcA (voidpf opaque,const void* filename,int mode)
{
		const char* mode_fopen = NULL;
		DWORD dwDesiredAccess,dwCreationDisposition,dwShareMode,dwFlagsAndAttributes ;
		HANDLE hFile = NULL;

		win32_translate_open_mode(mode,&dwDesiredAccess,&dwCreationDisposition,&dwShareMode,&dwFlagsAndAttributes);

		if ((filename!=NULL) && (dwDesiredAccess != 0))
				hFile = CreateFileA((LPCSTR)filename, dwDesiredAccess, dwShareMode, NULL, dwCreationDisposition, dwFlagsAndAttributes, NULL);

		return win32_build_iowin(hFile);
}


voidpf ZCALLBACK win32_open64_file_funcW (voidpf opaque,const void* filename,int mode)
{
		const char* mode_fopen = NULL;
		DWORD dwDesiredAccess,dwCreationDisposition,dwShareMode,dwFlagsAndAttributes ;
		HANDLE hFile = NULL;

		win32_translate_open_mode(mode,&dwDesiredAccess,&dwCreationDisposition,&dwShareMode,&dwFlagsAndAttributes);

		if ((filename!=NULL) && (dwDesiredAccess != 0))
				hFile = CreateFileW((LPCWSTR)filename, dwDesiredAccess, dwShareMode, NULL, dwCreationDisposition, dwFlagsAndAttributes, NULL);

		return win32_build_iowin(hFile);
}


voidpf ZCALLBACK win32_open_file_func (voidpf opaque,const char* filename,int mode)
{
		const char* mode_fopen = NULL;
		DWORD dwDesiredAccess,dwCreationDisposition,dwShareMode,dwFlagsAndAttributes ;
		HANDLE hFile = NULL;

		win32_translate_open_mode(mode,&dwDesiredAccess,&dwCreationDisposition,&dwShareMode,&dwFlagsAndAttributes);

		if ((filename!=NULL) && (dwDesiredAccess != 0))
				hFile = CreateFile((LPCTSTR)filename, dwDesiredAccess, dwShareMode, NULL, dwCreationDisposition, dwFlagsAndAttributes, NULL);

		return win32_build_iowin(hFile);
}


uLong ZCALLBACK win32_read_file_func (voidpf opaque, voidpf stream, void* buf,uLong size)
{
		uLong ret=0;
		HANDLE hFile = NULL;
		if (stream!=NULL)
				hFile = ((WIN32FILE_IOWIN*)stream) -> hf;

		if (hFile != NULL)
		{
				if (!ReadFile(hFile, buf, size, &ret, NULL))
				{
						DWORD dwErr = GetLastError();
						if (dwErr == ERROR_HANDLE_EOF)
								dwErr = 0;
						((WIN32FILE_IOWIN*)stream) -> error=(int)dwErr;
				}
				std::cout << "read " << size << std::endl;
		}

		return ret;
}


uLong ZCALLBACK win32_write_file_func (voidpf opaque,voidpf stream,const void* buf,uLong size)
{
		uLong ret=0;
		HANDLE hFile = NULL;
		if (stream!=NULL)
				hFile = ((WIN32FILE_IOWIN*)stream) -> hf;

		if (hFile != NULL)
		{
				if (!WriteFile(hFile, buf, size, &ret, NULL))
				{
						DWORD dwErr = GetLastError();
						if (dwErr == ERROR_HANDLE_EOF)
								dwErr = 0;
						((WIN32FILE_IOWIN*)stream) -> error=(int)dwErr;
				}
				std::cout << "write " << size << std::endl;
		}

		return ret;
}

long ZCALLBACK win32_tell_file_func (voidpf opaque,voidpf stream)
{
		long ret=-1;
		HANDLE hFile = NULL;
		if (stream!=NULL)
				hFile = ((WIN32FILE_IOWIN*)stream) -> hf;
		if (hFile != NULL)
		{
				DWORD dwSet = SetFilePointer(hFile, 0, NULL, FILE_CURRENT);
				if (dwSet == INVALID_SET_FILE_POINTER)
				{
					std::cout << "tell " << dwSet << std::endl;
						DWORD dwErr = GetLastError();
						((WIN32FILE_IOWIN*)stream) -> error=(int)dwErr;
						ret = -1;
				}
				else
						ret=(long)dwSet;
		}
		return ret;
}

ZPOS64_T ZCALLBACK win32_tell64_file_func (voidpf opaque, voidpf stream)
{
		ZPOS64_T ret= (ZPOS64_T)-1;
		HANDLE hFile = NULL;
		if (stream!=NULL)
				hFile = ((WIN32FILE_IOWIN*)stream)->hf;

		if (hFile)
		{
				LARGE_INTEGER li;
				li.QuadPart = 0;
				li.u.LowPart = SetFilePointer(hFile, li.u.LowPart, &li.u.HighPart, FILE_CURRENT);
				std::cout << "tell64 " << li.QuadPart << std::endl;
				if ( (li.LowPart == 0xFFFFFFFF) && (GetLastError() != NO_ERROR))
				{
						DWORD dwErr = GetLastError();
						((WIN32FILE_IOWIN*)stream) -> error=(int)dwErr;
						ret = (ZPOS64_T)-1;
				}
				else
						ret=li.QuadPart;
		}
		return ret;
}


long ZCALLBACK win32_seek_file_func (voidpf opaque,voidpf stream,uLong offset,int origin)
{
		DWORD dwMoveMethod=0xFFFFFFFF;
		HANDLE hFile = NULL;

		long ret=-1;
		if (stream!=NULL)
				hFile = ((WIN32FILE_IOWIN*)stream) -> hf;
		switch (origin)
		{
		case ZLIB_FILEFUNC_SEEK_CUR :
				dwMoveMethod = FILE_CURRENT;
				break;
		case ZLIB_FILEFUNC_SEEK_END :
				dwMoveMethod = FILE_END;
				break;
		case ZLIB_FILEFUNC_SEEK_SET :
				dwMoveMethod = FILE_BEGIN;
				break;
		default: return -1;
		}

		if (hFile != NULL)
		{
				DWORD dwSet = SetFilePointer(hFile, offset, NULL, dwMoveMethod);
				std::cout << "seek " << dwSet << std::endl;
				if (dwSet == INVALID_SET_FILE_POINTER)
				{
						DWORD dwErr = GetLastError();
						((WIN32FILE_IOWIN*)stream) -> error=(int)dwErr;
						ret = -1;
				}
				else
						ret=0;
		}
		return ret;
}

long ZCALLBACK win32_seek64_file_func (voidpf opaque, voidpf stream,ZPOS64_T offset,int origin)
{
		DWORD dwMoveMethod=0xFFFFFFFF;
		HANDLE hFile = NULL;
		long ret=-1;

		if (stream!=NULL)
				hFile = ((WIN32FILE_IOWIN*)stream)->hf;

		switch (origin)
		{
				case ZLIB_FILEFUNC_SEEK_CUR :
						dwMoveMethod = FILE_CURRENT;
						break;
				case ZLIB_FILEFUNC_SEEK_END :
						dwMoveMethod = FILE_END;
						break;
				case ZLIB_FILEFUNC_SEEK_SET :
						dwMoveMethod = FILE_BEGIN;
						break;
				default: return -1;
		}

		if (hFile)
		{
				LARGE_INTEGER* li = (LARGE_INTEGER*)&offset;
				DWORD dwSet = SetFilePointer(hFile, li->u.LowPart, &li->u.HighPart, dwMoveMethod);
				std::cout << "seek64 " << dwSet << std::endl;
				if (dwSet == INVALID_SET_FILE_POINTER)
				{
						DWORD dwErr = GetLastError();
						((WIN32FILE_IOWIN*)stream) -> error=(int)dwErr;
						ret = -1;
				}
				else
						ret=0;
		}
		return ret;
}

int ZCALLBACK win32_close_file_func (voidpf opaque, voidpf stream)
{
		int ret=-1;

		if (stream!=NULL)
		{
				HANDLE hFile;
				hFile = ((WIN32FILE_IOWIN*)stream) -> hf;
				if (hFile != NULL)
				{
						CloseHandle(hFile);
						ret=0;
				}
				free(stream);
		}
		return ret;
}

int ZCALLBACK win32_error_file_func (voidpf opaque,voidpf stream)
{
		int ret=-1;
		if (stream!=NULL)
		{
				ret = ((WIN32FILE_IOWIN*)stream) -> error;
		}
		return ret;
}

void fill_win32_filefunc (zlib_filefunc_def* pzlib_filefunc_def)
{
		pzlib_filefunc_def->zopen_file = win32_open_file_func;
		pzlib_filefunc_def->zread_file = win32_read_file_func;
		pzlib_filefunc_def->zwrite_file = win32_write_file_func;
		pzlib_filefunc_def->ztell_file = win32_tell_file_func;
		pzlib_filefunc_def->zseek_file = win32_seek_file_func;
		pzlib_filefunc_def->zclose_file = win32_close_file_func;
		pzlib_filefunc_def->zerror_file = win32_error_file_func;
		pzlib_filefunc_def->opaque = NULL;
}

void fill_win32_filefunc64(zlib_filefunc64_def* pzlib_filefunc_def)
{
		pzlib_filefunc_def->zopen64_file = win32_open64_file_func;
		pzlib_filefunc_def->zread_file = win32_read_file_func;
		pzlib_filefunc_def->zwrite_file = win32_write_file_func;
		pzlib_filefunc_def->ztell64_file = win32_tell64_file_func;
		pzlib_filefunc_def->zseek64_file = win32_seek64_file_func;
		pzlib_filefunc_def->zclose_file = win32_close_file_func;
		pzlib_filefunc_def->zerror_file = win32_error_file_func;
		pzlib_filefunc_def->opaque = NULL;
}


void fill_win32_filefunc64A(zlib_filefunc64_def* pzlib_filefunc_def)
{
		pzlib_filefunc_def->zopen64_file = win32_open64_file_funcA;
		pzlib_filefunc_def->zread_file = win32_read_file_func;
		pzlib_filefunc_def->zwrite_file = win32_write_file_func;
		pzlib_filefunc_def->ztell64_file = win32_tell64_file_func;
		pzlib_filefunc_def->zseek64_file = win32_seek64_file_func;
		pzlib_filefunc_def->zclose_file = win32_close_file_func;
		pzlib_filefunc_def->zerror_file = win32_error_file_func;
		pzlib_filefunc_def->opaque = NULL;
}


void fill_win32_filefunc64W(zlib_filefunc64_def* pzlib_filefunc_def)
{
		pzlib_filefunc_def->zopen64_file = win32_open64_file_funcW;
		pzlib_filefunc_def->zread_file = win32_read_file_func;
		pzlib_filefunc_def->zwrite_file = win32_write_file_func;
		pzlib_filefunc_def->ztell64_file = win32_tell64_file_func;
		pzlib_filefunc_def->zseek64_file = win32_seek64_file_func;
		pzlib_filefunc_def->zclose_file = win32_close_file_func;
		pzlib_filefunc_def->zerror_file = win32_error_file_func;
		pzlib_filefunc_def->opaque = NULL;
}*/



COpcFactory::COpcFactory(void) {
}


COpcFactory::~COpcFactory(void) {
}


HRESULT STDMETHODCALLTYPE COpcFactory::QueryInterface( REFIID riid, __RPC__deref_out void **ppvObject )
{
	if (riid == IID_IOpcFactory) {
		*ppvObject = static_cast<IOpcFactory*>(this);
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

ULONG STDMETHODCALLTYPE COpcFactory::AddRef( void )
{
	return 2;
}

ULONG STDMETHODCALLTYPE COpcFactory::Release( void )
{
	return 1;
}

HRESULT STDMETHODCALLTYPE COpcFactory::CreatePackage( IOpcPackage **package )
{
	if (package == NULL) return E_POINTER;
	*package = new COpcPackage();
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcFactory::CreatePackageRootUri( IOpcUri **rootUri )
{
	if (rootUri == NULL) return E_POINTER;
	*rootUri = new COpcUri(L"/");
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcFactory::CreatePartUri( LPCWSTR pwzUri,IOpcPartUri **partUri )
{
	if (partUri == NULL) return E_POINTER;
	*partUri = new COpcPartUri(pwzUri);
	return S_OK;
}


HRESULT STDMETHODCALLTYPE COpcFactory::CreateStreamOnFile(LPCWSTR filename, OPC_STREAM_IO_MODE ioMode, LPSECURITY_ATTRIBUTES securityAttributes, DWORD dwFlagsAndAttributes, IStream **stream )
{
	*stream = new CFileStream(filename,ioMode,securityAttributes,dwFlagsAndAttributes);
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcFactory::ReadPackageFromStream( __RPC__in_opt IStream *stream, OPC_READ_FLAGS flags, __RPC__deref_out_opt IOpcPackage **package )
{
	CreatePackage(package);
	//open stream
	IOpcPackage *current = *package;
	current->AddRef();
	IOpcRelationshipSet *relset;
	current->GetRelationshipSet(&relset);
	IOpcUri *root;
	IOpcPartUri *packagerelsuri;
	CreatePackageRootUri(&root);
	root->GetRelationshipsPartUri(&packagerelsuri);
	current->Release();
	return E_NOTIMPL;
}

void WritePartToFile(zipFile f,IOpcPart *part) {
	IStream *partStream;
	IOpcPartUri *name;
	part->GetContentStream(&partStream);
	part->GetName(&name);
	//unzwritefile partstream
	zip_fileinfo zipfi;
	BSTR path;
	name->GetPath(&path);
	_bstr_t p(path,false);
	//remove begin /
	zipOpenNewFileInZip2_64(f,&(p.operator char *())[1],&zipfi,NULL,0,NULL,0,NULL,Z_DEFLATED,Z_DEFAULT_COMPRESSION,0,1);
	STATSTG stat;
	partStream->Stat(&stat,STATFLAG_NONAME);
	char *buf = new char[stat.cbSize.QuadPart];
	partStream->Read(buf,stat.cbSize.QuadPart,NULL);
	zipWriteInFileInZip(f,buf,stat.cbSize.QuadPart);
	zipCloseFileInZip(f);
	delete[] buf;
	SysFreeString(path);
	partStream->Release();
	partStream = NULL;
	IOpcPartUri *relname;
	IOpcRelationshipSet *relset;
	part->GetRelationshipSet(&relset);
	IOpcRelationshipEnumerator *relEnum;
	relset->GetEnumerator(&relEnum);
	BOOL hasNext = FALSE;
	relEnum->MoveNext(&hasNext);
	relEnum->Release();
	//write part relationships
	relset->GetRelationshipsContentStream(&partStream);
	name->GetRelationshipsPartUri(&relname);
	BSTR relpath;
	relname->GetPath(&relpath);
	_bstr_t p2(relpath,false);
	//only output relationsship file if there are relationships
	if (hasNext) {
		//remove begin /
		zip_fileinfo zipfi2;
		zipOpenNewFileInZip2_64(f,&(p2.operator char *())[1],&zipfi2,NULL,0,NULL,0,NULL,Z_DEFLATED,Z_DEFAULT_COMPRESSION,0,1);
		STATSTG stat2;
		partStream->Stat(&stat2,STATFLAG_NONAME);
		buf = new char[stat2.cbSize.QuadPart];
		partStream->Read(buf,stat2.cbSize.QuadPart,NULL);
		zipWriteInFileInZip(f,buf,stat2.cbSize.QuadPart);
		zipCloseFileInZip(f);
		delete[] buf;
	}
	SysFreeString(relpath);
	partStream->Release();
	relset->Release();
	relname->Release();
	name->Release();
}

HRESULT STDMETHODCALLTYPE COpcFactory::WritePackageToStream( __RPC__in_opt IOpcPackage *package, OPC_WRITE_FLAGS flags, __RPC__in_opt IStream *stream )
{
	package::content_types::CT_Types types;
	package::content_types::CT_Default defrels(L"rels",L"application/vnd.openxmlformats-package.relationships+xml");
	package::content_types::CT_Default defxml(L"xml",L"application/xml");
	types.Default().push_back(defrels);
	types.Default().push_back(defxml);
	zlib_filefunc64_def ffunc;
	fill_win32_filefunc64W(&ffunc);
	zipFile f = zipOpen2_64(stream,0,NULL,&ffunc);
	//open zip stream
	IOpcPartSet *partset;
	IOpcPartEnumerator *partEnum;
	package->GetPartSet(&partset);
	partset->GetEnumerator(&partEnum);
	BOOL hasNext = FALSE;
	partEnum->MoveNext(&hasNext);
	while (hasNext) {
		IOpcPart *part;
		partEnum->GetCurrent(&part);
		WritePartToFile(f,part);
		LPWSTR ctype;
		IOpcPartUri *nameuri;
		BSTR name;
		part->GetName(&nameuri);
		nameuri->GetPath(&name);
		_bstr_t n(name,false);
		part->GetContentType(&ctype);
		package::content_types::CT_Override over(ctype,n.operator wchar_t *());
		types.Override().push_back(over);
		CoTaskMemFree(ctype);
		SysFreeString(name);
		nameuri->Release();
		part->Release();
		partEnum->MoveNext(&hasNext);
	}
	partEnum->Release();
	partset->Release();
	zip_fileinfo zipfi;
	zipfi.dosDate = 0;
	zipfi.external_fa = 0;
	zipfi.internal_fa = 0;
	zipfi.tmz_date.tm_hour = zipfi.tmz_date.tm_min = zipfi.tmz_date.tm_mon = zipfi.tmz_date.tm_sec = 0;
	zipfi.tmz_date.tm_mday = 0;
	zipfi.tmz_date.tm_year = 0;
	FILETIME ftLocal;
	SYSTEMTIME sysTime;
	GetSystemTime(&sysTime);
	SystemTimeToFileTime(&sysTime,&ftLocal);
	FileTimeToDosDateTime(&ftLocal,((LPWORD)&zipfi.dosDate)+1,((LPWORD)&zipfi.dosDate)+0);
	//get package rels
	IOpcRelationshipSet *packrelset;
	package->GetRelationshipSet(&packrelset);
	IStream *relstream = NULL;
	packrelset->GetRelationshipsContentStream(&relstream);
	//unzwritefile
	zipOpenNewFileInZip2_64(f,"_rels/.rels",&zipfi,NULL,0,NULL,0,NULL,Z_DEFLATED,Z_DEFAULT_COMPRESSION,0,1);
	STATSTG stat2;
	relstream->Stat(&stat2,STATFLAG_NONAME);
	char *buf = new char[stat2.cbSize.QuadPart];
	relstream->Read(buf,stat2.cbSize.QuadPart,NULL);
	zipWriteInFileInZip(f,buf,stat2.cbSize.QuadPart);
	zipCloseFileInZip(f);
	delete[] buf;
	relstream->Release();
	packrelset->Release();
	std::ostringstream g;
	xml_schema::namespace_infomap map;
	map[L""].name = L"http://schemas.openxmlformats.org/package/2006/content-types";
	package::content_types::Types(g,types,map);
	std::string stypes = g.str();


	//zipOpenNewFileInZip2_64(f,"[Content_Types].xml",&zipfi,NULL,0,NULL,0,NULL,Z_DEFLATED,Z_DEFAULT_COMPRESSION,0,1);
	zipOpenNewFileInZip3_64(f,"[Content_Types].xml",&zipfi,
																 NULL,0,NULL,0,NULL /* comment*/,
																 Z_DEFLATED,
																 Z_DEFAULT_COMPRESSION,0,
																 /* -MAX_WBITS, DEF_MEM_LEVEL, Z_DEFAULT_STRATEGY, */
																 -MAX_WBITS, DEF_MEM_LEVEL, Z_DEFAULT_STRATEGY,
																 NULL,0, 0);
	zipWriteInFileInZip(f,stypes.c_str(),stypes.size());
	zipCloseFileInZip(f);
	zipClose(f,NULL);
	return S_OK;
}

HRESULT STDMETHODCALLTYPE COpcFactory::CreateDigitalSignatureManager( __RPC__in_opt IOpcPackage *package, __RPC__deref_out_opt IOpcDigitalSignatureManager **signatureManager )
{
	return E_NOTIMPL;
}
