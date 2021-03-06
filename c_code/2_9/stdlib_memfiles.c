/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>
#include <sys/mman.h>
typedef struct Memfile332202 Memfile332202;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  Memfile332202  {
void* mem;
NI size;
int handle;
};
typedef NU8 Tnimkind3403;
typedef NU8 Tnimtypeflag3409Set;
typedef N_NIMCALL_PTR(void, TY3489) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3403 kind;
Tnimtypeflag3409Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Filemode13009;
N_NOINLINE(void, raiseoserror_131603_2125978480)(NI32 errorcode0, NimStringDesc* additionalinfo0);
N_NIMCALL(NI32, oslasterror_131619_2125978480)(void);
STRING_LITERAL(T947767598_3, "", 0);
TNimType NTI332202; /* MemFile */
extern TNimType NTI142; /* pointer */
extern TNimType NTI104; /* int */
extern TNimType NTI7408; /* cint */

N_NIMCALL(Memfile332202, open_332801_947767598)(NimStringDesc* filename0, Filemode13009 mode0, NI mappedsize0, NI offset0, NI newfilesize0) {
	Memfile332202 result0;
	NIM_BOOL readonly0;
	int flags0;
	int LOC53;
	NI32 LOC59;
	memset((void*)(&result0), 0, sizeof(result0));
	readonly0 = (mode0 == ((Filemode13009) 0));
	{
		if (!readonly0) goto LA3;
		flags0 = O_RDONLY;
	}
	goto LA1;
	LA3: ;
	{
		flags0 = O_RDWR;
	}
	LA1: ;
	{
		NI32 permissionsmode0;
		if (!!((newfilesize0 == ((NI) -1)))) goto LA8;
		flags0 = (NI32)((NI32)(flags0 | O_CREAT) | O_TRUNC);
		permissionsmode0 = (NI32)(S_IRUSR | S_IWUSR);
		result0.handle = open(filename0->data, flags0, permissionsmode0);
	}
	goto LA6;
	LA8: ;
	{
		result0.handle = open(filename0->data, flags0);
	}
	LA6: ;
	{
		NI32 LOC20;
		if (!(result0.handle == ((NI32) -1))) goto LA13;
		result0.mem = NIM_NIL;
		result0.size = ((NI) 0);
		{
			int LOC19;
			if (!!((result0.handle == ((NI32) 0)))) goto LA17;
			LOC19 = (int)0;
			LOC19 = close(result0.handle);
		}
		LA17: ;
		LOC20 = (NI32)0;
		LOC20 = oslasterror_131619_2125978480();
		raiseoserror_131603_2125978480(LOC20, ((NimStringDesc*) &T947767598_3));
	}
	LA13: ;
	{
		if (!!((newfilesize0 == ((NI) -1)))) goto LA23;
		{
			int LOC27;
			NI32 LOC35;
			LOC27 = (int)0;
			LOC27 = ftruncate(result0.handle, ((off_t) (newfilesize0)));
			if (!(LOC27 == ((NI32) -1))) goto LA28;
			result0.mem = NIM_NIL;
			result0.size = ((NI) 0);
			{
				int LOC34;
				if (!!((result0.handle == ((NI32) 0)))) goto LA32;
				LOC34 = (int)0;
				LOC34 = close(result0.handle);
			}
			LA32: ;
			LOC35 = (NI32)0;
			LOC35 = oslasterror_131619_2125978480();
			raiseoserror_131603_2125978480(LOC35, ((NimStringDesc*) &T947767598_3));
		}
		LA28: ;
	}
	LA23: ;
	{
		if (!!((mappedsize0 == ((NI) -1)))) goto LA38;
		result0.size = mappedsize0;
	}
	goto LA36;
	LA38: ;
	{
		struct stat stat0;
		memset((void*)(&stat0), 0, sizeof(stat0));
		{
			int LOC43;
			LOC43 = (int)0;
			LOC43 = fstat(result0.handle, (&stat0));
			if (!!((LOC43 == ((NI32) -1)))) goto LA44;
			result0.size = ((NI) (stat0.st_size));
		}
		goto LA41;
		LA44: ;
		{
			NI32 LOC52;
			result0.mem = NIM_NIL;
			result0.size = ((NI) 0);
			{
				int LOC51;
				if (!!((result0.handle == ((NI32) 0)))) goto LA49;
				LOC51 = (int)0;
				LOC51 = close(result0.handle);
			}
			LA49: ;
			LOC52 = (NI32)0;
			LOC52 = oslasterror_131619_2125978480();
			raiseoserror_131603_2125978480(LOC52, ((NimStringDesc*) &T947767598_3));
		}
		LA41: ;
	}
	LA36: ;
	LOC53 = (int)0;
	{
		if (!readonly0) goto LA56;
		LOC53 = PROT_READ;
	}
	goto LA54;
	LA56: ;
	{
		LOC53 = (NI32)(PROT_READ | PROT_WRITE);
	}
	LA54: ;
	LOC59 = (NI32)0;
	{
		if (!readonly0) goto LA62;
		LOC59 = (NI32)(MAP_PRIVATE | MAP_POPULATE);
	}
	goto LA60;
	LA62: ;
	{
		LOC59 = (NI32)(MAP_SHARED | MAP_POPULATE);
	}
	LA60: ;
	result0.mem = mmap(NIM_NIL, result0.size, LOC53, LOC59, result0.handle, ((off_t) (offset0)));
	{
		NI32 LOC74;
		if (!(result0.mem == ((void*) (MAP_FAILED)))) goto LA67;
		result0.mem = NIM_NIL;
		result0.size = ((NI) 0);
		{
			int LOC73;
			if (!!((result0.handle == ((NI32) 0)))) goto LA71;
			LOC73 = (int)0;
			LOC73 = close(result0.handle);
		}
		LA71: ;
		LOC74 = (NI32)0;
		LOC74 = oslasterror_131619_2125978480();
		raiseoserror_131603_2125978480(LOC74, ((NimStringDesc*) &T947767598_3));
	}
	LA67: ;
	return result0;
}

N_NIMCALL(void, close_333243_947767598)(Memfile332202* f0) {
	NIM_BOOL error0;
	NI32 lasterr0;
	error0 = NIM_FALSE;
	lasterr0 = (NI32)0;
	{
		int LOC5;
		NIM_BOOL LOC6;
		int LOC7;
		if (!!(((*f0).handle == ((NI32) 0)))) goto LA3;
		LOC5 = (int)0;
		LOC5 = munmap((*f0).mem, (*f0).size);
		error0 = !((LOC5 == ((NI32) 0)));
		lasterr0 = oslasterror_131619_2125978480();
		LOC6 = (NIM_BOOL)0;
		LOC7 = (int)0;
		LOC7 = close((*f0).handle);
		LOC6 = !((LOC7 == ((NI32) 0)));
		if (LOC6) goto LA8;
		LOC6 = error0;
		LA8: ;
		error0 = LOC6;
	}
	LA3: ;
	(*f0).size = ((NI) 0);
	(*f0).mem = NIM_NIL;
	(*f0).handle = ((int) 0);
	{
		if (!error0) goto LA11;
		raiseoserror_131603_2125978480(lasterr0, ((NimStringDesc*) &T947767598_3));
	}
	LA11: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit000)(void) {
static TNimNode* T947767598_2[3];
static TNimNode T947767598_0[4];
NTI332202.size = sizeof(Memfile332202);
NTI332202.kind = 18;
NTI332202.base = 0;
NTI332202.flags = 3;
T947767598_2[0] = &T947767598_0[1];
T947767598_0[1].kind = 1;
T947767598_0[1].offset = offsetof(Memfile332202, mem);
T947767598_0[1].typ = (&NTI142);
T947767598_0[1].name = "mem";
T947767598_2[1] = &T947767598_0[2];
T947767598_0[2].kind = 1;
T947767598_0[2].offset = offsetof(Memfile332202, size);
T947767598_0[2].typ = (&NTI104);
T947767598_0[2].name = "size";
T947767598_2[2] = &T947767598_0[3];
T947767598_0[3].kind = 1;
T947767598_0[3].offset = offsetof(Memfile332202, handle);
T947767598_0[3].typ = (&NTI7408);
T947767598_0[3].name = "handle";
T947767598_0[0].len = 3; T947767598_0[0].kind = 2; T947767598_0[0].sons = &T947767598_2[0];
NTI332202.node = &T947767598_0[0];
}

