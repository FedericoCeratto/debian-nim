/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Memfile328202 Memfile328202;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  Memfile328202  {
void* mem;
NI size;
NI fhandle;
NI maphandle;
NIM_BOOL wasopened;
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
typedef N_STDCALL_PTR(NI, TY116424) (NI16* lpfilename0, NI32 dwdesiredaccess0, NI32 dwsharemode0, void* lpsecurityattributes0, NI32 dwcreationdisposition0, NI32 dwflagsandattributes0, NI htemplatefile0);
typedef N_STDCALL_PTR(NI32, TY114604) (NI hobject0);
typedef N_STDCALL_PTR(NI32, TY116605) (NI hfile0, NI32 ldistancetomove0, NI32* lpdistancetomovehigh0, NI32 dwmovemethod0);
typedef N_STDCALL_PTR(NI32, TY116602) (NI hfile0);
typedef N_STDCALL_PTR(NI, TY116625) (NI hfile0, void* lpfilemappingattributes0, NI32 flprotect0, NI32 dwmaximumsizehigh0, NI32 dwmaximumsizelow0, void* lpname0);
typedef N_STDCALL_PTR(void*, TY116617) (NI hfilemappingobject0, NI32 dwdesiredaccess0, NI32 dwfileoffsethigh0, NI32 dwfileoffsetlow0, NI32 dwnumberofbytestomap0, void* lpbaseaddress0);
typedef N_STDCALL_PTR(NI32, TY116612) (NI hfile0, NI32* lpfilesizehigh0);
typedef N_STDCALL_PTR(NI32, TY116802) (void* lpbaseaddress0);
N_NIMCALL(NI16*, newwidecstring_83127_1689653243)(NimStringDesc* s0);
N_NOINLINE(void, raiseoserror_127224_2125978480)(NI32 errorcode0, NimStringDesc* additionalinfo0);
N_NIMCALL(NI32, oslasterror_127240_2125978480)(void);
STRING_LITERAL(T947767598_3, "", 0);
TNimType NTI328202; /* MemFile */
extern TNimType NTI142; /* pointer */
extern TNimType NTI104; /* int */
extern TNimType NTI114403; /* Handle */
extern TNimType NTI130; /* bool */
extern TY116424 Dl_116423;
extern TY114604 Dl_114603;
extern TY116605 Dl_116604;
extern TY116602 Dl_116601;
extern TY116625 Dl_116624;
extern TY116617 Dl_116616;
extern TY116612 Dl_116611;
extern TY116802 Dl_116801;

N_NIMCALL(Memfile328202, open_328601_947767598)(NimStringDesc* filename0, Filemode13009 mode0, NI mappedsize0, NI offset0, NI newfilesize0) {
	Memfile328202 result0;
	NIM_BOOL readonly0;
	NI16* LOC1;
	NI32 LOC2;
	NI32 LOC8;
	NI32 LOC14;
	NI32 LOC58;
	NI32 LOC79;
	NI LOC85;
	NI32 hi0;
	NI32 low0;
	memset((void*)(&result0), 0, sizeof(result0));
	readonly0 = (mode0 == ((Filemode13009) 0));
	LOC1 = (NI16*)0;
	LOC1 = newwidecstring_83127_1689653243(filename0);
	LOC2 = (NI32)0;
	{
		if (!readonly0) goto LA5;
		LOC2 = ((NI32) (-2147483647 -1));
	}
	goto LA3;
	LA5: ;
	{
		LOC2 = ((NI32) -1073741824);
	}
	LA3: ;
	LOC8 = (NI32)0;
	{
		if (!!((newfilesize0 == ((NI) -1)))) goto LA11;
		LOC8 = ((NI32) 2);
	}
	goto LA9;
	LA11: ;
	{
		LOC8 = ((NI32) 3);
	}
	LA9: ;
	LOC14 = (NI32)0;
	{
		if (!readonly0) goto LA17;
		LOC14 = ((NI32) 1);
	}
	goto LA15;
	LA17: ;
	{
		LOC14 = ((NI32) 256);
	}
	LA15: ;
	result0.fhandle = Dl_116423(LOC1, LOC2, ((NI32) 1), NIM_NIL, LOC8, LOC14, ((NI) 0));
	{
		NI32 LOC34;
		if (!(result0.fhandle == ((NI) -1))) goto LA22;
		result0.mem = NIM_NIL;
		result0.size = ((NI) 0);
		{
			NI32 LOC28;
			if (!!((result0.fhandle == ((NI) 0)))) goto LA26;
			LOC28 = (NI32)0;
			LOC28 = Dl_114603(result0.fhandle);
		}
		LA26: ;
		{
			NI32 LOC33;
			if (!!((result0.maphandle == ((NI) 0)))) goto LA31;
			LOC33 = (NI32)0;
			LOC33 = Dl_114603(result0.maphandle);
		}
		LA31: ;
		LOC34 = (NI32)0;
		LOC34 = oslasterror_127240_2125978480();
		raiseoserror_127224_2125978480(LOC34, ((NimStringDesc*) &T947767598_3));
	}
	LA22: ;
	{
		NI32 sizehigh0;
		NI32 sizelow0;
		NI32 status0;
		NI32 lasterr0;
		if (!!((newfilesize0 == ((NI) -1)))) goto LA37;
		sizehigh0 = ((NI32) ((NI)((NU32)(newfilesize0) >> (NU32)(((NI) 32)))));
		sizelow0 = ((NI32) ((NI)(((NI64) (newfilesize0)) & IL64(4294967295))));
		status0 = Dl_116604(result0.fhandle, sizelow0, (&sizehigh0), ((NI32) 0));
		lasterr0 = oslasterror_127240_2125978480();
		{
			NIM_BOOL LOC41;
			NIM_BOOL LOC42;
			NI32 LOC45;
			LOC41 = (NIM_BOOL)0;
			LOC42 = (NIM_BOOL)0;
			LOC42 = (status0 == ((NI32) -1));
			if (!(LOC42)) goto LA43;
			LOC42 = !((lasterr0 == ((NI32) 0)));
			LA43: ;
			LOC41 = LOC42;
			if (LOC41) goto LA44;
			LOC45 = (NI32)0;
			LOC45 = Dl_116601(result0.fhandle);
			LOC41 = (LOC45 == ((NI32) 0));
			LA44: ;
			if (!LOC41) goto LA46;
			result0.mem = NIM_NIL;
			result0.size = ((NI) 0);
			{
				NI32 LOC52;
				if (!!((result0.fhandle == ((NI) 0)))) goto LA50;
				LOC52 = (NI32)0;
				LOC52 = Dl_114603(result0.fhandle);
			}
			LA50: ;
			{
				NI32 LOC57;
				if (!!((result0.maphandle == ((NI) 0)))) goto LA55;
				LOC57 = (NI32)0;
				LOC57 = Dl_114603(result0.maphandle);
			}
			LA55: ;
			raiseoserror_127224_2125978480(lasterr0, ((NimStringDesc*) &T947767598_3));
		}
		LA46: ;
	}
	LA37: ;
	LOC58 = (NI32)0;
	{
		if (!readonly0) goto LA61;
		LOC58 = ((NI32) 2);
	}
	goto LA59;
	LA61: ;
	{
		LOC58 = ((NI32) 4);
	}
	LA59: ;
	result0.maphandle = Dl_116624(result0.fhandle, NIM_NIL, LOC58, ((NI32) 0), ((NI32) 0), NIM_NIL);
	{
		NI32 LOC78;
		if (!(result0.maphandle == ((NI) 0))) goto LA66;
		result0.mem = NIM_NIL;
		result0.size = ((NI) 0);
		{
			NI32 LOC72;
			if (!!((result0.fhandle == ((NI) 0)))) goto LA70;
			LOC72 = (NI32)0;
			LOC72 = Dl_114603(result0.fhandle);
		}
		LA70: ;
		{
			NI32 LOC77;
			if (!!((result0.maphandle == ((NI) 0)))) goto LA75;
			LOC77 = (NI32)0;
			LOC77 = Dl_114603(result0.maphandle);
		}
		LA75: ;
		LOC78 = (NI32)0;
		LOC78 = oslasterror_127240_2125978480();
		raiseoserror_127224_2125978480(LOC78, ((NimStringDesc*) &T947767598_3));
	}
	LA66: ;
	LOC79 = (NI32)0;
	{
		if (!readonly0) goto LA82;
		LOC79 = ((NI32) 4);
	}
	goto LA80;
	LA82: ;
	{
		LOC79 = ((NI32) 2);
	}
	LA80: ;
	LOC85 = (NI)0;
	{
		if (!(mappedsize0 == ((NI) -1))) goto LA88;
		LOC85 = ((NI) 0);
	}
	goto LA86;
	LA88: ;
	{
		LOC85 = mappedsize0;
	}
	LA86: ;
	result0.mem = Dl_116616(result0.maphandle, LOC79, ((NI32) ((NI)((NU32)(offset0) >> (NU32)(((NI) 32))))), ((NI32) ((NI)(((NI64) (offset0)) & IL64(4294967295)))), ((NI32) (LOC85)), NIM_NIL);
	{
		NI32 LOC105;
		if (!(result0.mem == NIM_NIL)) goto LA93;
		result0.mem = NIM_NIL;
		result0.size = ((NI) 0);
		{
			NI32 LOC99;
			if (!!((result0.fhandle == ((NI) 0)))) goto LA97;
			LOC99 = (NI32)0;
			LOC99 = Dl_114603(result0.fhandle);
		}
		LA97: ;
		{
			NI32 LOC104;
			if (!!((result0.maphandle == ((NI) 0)))) goto LA102;
			LOC104 = (NI32)0;
			LOC104 = Dl_114603(result0.maphandle);
		}
		LA102: ;
		LOC105 = (NI32)0;
		LOC105 = oslasterror_127240_2125978480();
		raiseoserror_127224_2125978480(LOC105, ((NimStringDesc*) &T947767598_3));
	}
	LA93: ;
	hi0 = (NI32)0;
	low0 = (NI32)0;
	low0 = Dl_116611(result0.fhandle, (&hi0));
	{
		NI32 LOC120;
		if (!(low0 == ((NI32) -1))) goto LA108;
		result0.mem = NIM_NIL;
		result0.size = ((NI) 0);
		{
			NI32 LOC114;
			if (!!((result0.fhandle == ((NI) 0)))) goto LA112;
			LOC114 = (NI32)0;
			LOC114 = Dl_114603(result0.fhandle);
		}
		LA112: ;
		{
			NI32 LOC119;
			if (!!((result0.maphandle == ((NI) 0)))) goto LA117;
			LOC119 = (NI32)0;
			LOC119 = Dl_114603(result0.maphandle);
		}
		LA117: ;
		LOC120 = (NI32)0;
		LOC120 = oslasterror_127240_2125978480();
		raiseoserror_127224_2125978480(LOC120, ((NimStringDesc*) &T947767598_3));
	}
	goto LA106;
	LA108: ;
	{
		NI64 filesize0;
		filesize0 = (NI64)((NI64)((NU64)(((NI64) (hi0))) >> (NU64)(IL64(32))) | ((NI64) (low0)));
		{
			if (!!((mappedsize0 == ((NI) -1)))) goto LA124;
			result0.size = ((NI) (((filesize0 <= ((NI64) (mappedsize0))) ? filesize0 : ((NI64) (mappedsize0)))));
		}
		goto LA122;
		LA124: ;
		{
			result0.size = ((NI) (filesize0));
		}
		LA122: ;
	}
	LA106: ;
	result0.wasopened = NIM_TRUE;
	return result0;
}

N_NIMCALL(void, close_329221_947767598)(Memfile328202* f0) {
	NIM_BOOL error0;
	NI32 lasterr0;
	error0 = NIM_FALSE;
	lasterr0 = (NI32)0;
	{
		NIM_BOOL LOC3;
		NI32 LOC7;
		NIM_BOOL LOC8;
		NI32 LOC9;
		NIM_BOOL LOC11;
		NI32 LOC12;
		LOC3 = (NIM_BOOL)0;
		LOC3 = !(((*f0).fhandle == ((NI) -1)));
		if (!(LOC3)) goto LA4;
		LOC3 = (*f0).wasopened;
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = (NI32)0;
		LOC7 = Dl_116801((*f0).mem);
		error0 = (LOC7 == ((NI32) 0));
		lasterr0 = oslasterror_127240_2125978480();
		LOC8 = (NIM_BOOL)0;
		LOC9 = (NI32)0;
		LOC9 = Dl_114603((*f0).maphandle);
		LOC8 = (LOC9 == ((NI32) 0));
		if (LOC8) goto LA10;
		LOC8 = error0;
		LA10: ;
		error0 = LOC8;
		LOC11 = (NIM_BOOL)0;
		LOC12 = (NI32)0;
		LOC12 = Dl_114603((*f0).fhandle);
		LOC11 = (LOC12 == ((NI32) 0));
		if (LOC11) goto LA13;
		LOC11 = error0;
		LA13: ;
		error0 = LOC11;
	}
	LA5: ;
	(*f0).size = ((NI) 0);
	(*f0).mem = NIM_NIL;
	(*f0).fhandle = ((NI) 0);
	(*f0).maphandle = ((NI) 0);
	(*f0).wasopened = NIM_FALSE;
	{
		if (!error0) goto LA16;
		raiseoserror_127224_2125978480(lasterr0, ((NimStringDesc*) &T947767598_3));
	}
	LA16: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit000)(void) {
static TNimNode* T947767598_2[5];
static TNimNode T947767598_0[6];
NTI328202.size = sizeof(Memfile328202);
NTI328202.kind = 18;
NTI328202.base = 0;
NTI328202.flags = 3;
T947767598_2[0] = &T947767598_0[1];
T947767598_0[1].kind = 1;
T947767598_0[1].offset = offsetof(Memfile328202, mem);
T947767598_0[1].typ = (&NTI142);
T947767598_0[1].name = "mem";
T947767598_2[1] = &T947767598_0[2];
T947767598_0[2].kind = 1;
T947767598_0[2].offset = offsetof(Memfile328202, size);
T947767598_0[2].typ = (&NTI104);
T947767598_0[2].name = "size";
T947767598_2[2] = &T947767598_0[3];
T947767598_0[3].kind = 1;
T947767598_0[3].offset = offsetof(Memfile328202, fhandle);
T947767598_0[3].typ = (&NTI114403);
T947767598_0[3].name = "fHandle";
T947767598_2[3] = &T947767598_0[4];
T947767598_0[4].kind = 1;
T947767598_0[4].offset = offsetof(Memfile328202, maphandle);
T947767598_0[4].typ = (&NTI114403);
T947767598_0[4].name = "mapHandle";
T947767598_2[4] = &T947767598_0[5];
T947767598_0[5].kind = 1;
T947767598_0[5].offset = offsetof(Memfile328202, wasopened);
T947767598_0[5].typ = (&NTI130);
T947767598_0[5].name = "wasOpened";
T947767598_0[0].len = 5; T947767598_0[0].kind = 2; T947767598_0[0].sons = &T947767598_2[0];
NTI328202.node = &T947767598_0[0];
}

