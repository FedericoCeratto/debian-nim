/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Memfile232208 Memfile232208;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  Memfile232208  {
void* mem;
NI size;
NI fhandle;
NI maphandle;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimNode  {
NU8 kind;
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
typedef N_STDCALL_PTR(NI, TY106318) (NI16* lpfilename, NI32 dwdesiredaccess, NI32 dwsharemode, void* lpsecurityattributes, NI32 dwcreationdisposition, NI32 dwflagsandattributes, NI htemplatefile);
typedef N_STDCALL_PTR(NI32, TY104425) (NI hobject);
typedef N_STDCALL_PTR(NI32, TY106411) (NI hfile, NI32 ldistancetomove, NI32* lpdistancetomovehigh, NI32 dwmovemethod);
typedef N_STDCALL_PTR(NI32, TY106405) (NI hfile);
typedef N_STDCALL_PTR(NI, TY106440) (NI hfile, void* lpfilemappingattributes, NI32 flprotect, NI32 dwmaximumsizehigh, NI32 dwmaximumsizelow, void* lpname);
typedef N_STDCALL_PTR(void*, TY106429) (NI hfilemappingobject, NI32 dwdesiredaccess, NI32 dwfileoffsethigh, NI32 dwfileoffsetlow, NI32 dwnumberofbytestomap, void* lpbaseaddress);
typedef N_STDCALL_PTR(NI32, TY106421) (NI hfile, NI32* lpfilesizehigh);
typedef N_STDCALL_PTR(NI32, TY106602) (void* lpbaseaddress);
N_NIMCALL(NI16*, newwidecstring_80805)(NimStringDesc* s);
N_NIMCALL(void, raiseoserror_114430)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_114454)(void);
TNimType NTI232208; /* MemFile */
extern TNimType NTI153; /* pointer */
extern TNimType NTI108; /* int */
extern TY106318 Dl_106317;
extern TY104425 Dl_104424;
extern TY106411 Dl_106410;
extern TY106405 Dl_106404;
extern TY106440 Dl_106439;
extern TY106429 Dl_106428;
extern TY106421 Dl_106420;
extern TY106602 Dl_106601;

N_NIMCALL(Memfile232208, open_232607)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize) {
	Memfile232208 result;
	NIM_BOOL readonly;
	NI16* LOC1;
	NI32 LOC2;
	NI32 LOC8;
	NI32 LOC14;
	NI32 LOC58;
	NI32 LOC79;
	NI LOC85;
	NI32 hi;
	NI32 low;
	memset((void*)(&result), 0, sizeof(result));
	readonly = (mode == ((NU8) 0));
	LOC1 = 0;
	LOC1 = newwidecstring_80805(filename);
	LOC2 = 0;
	{
		if (!readonly) goto LA5;
		LOC2 = ((NI32) (-2147483647 -1));
	}
	goto LA3;
	LA5: ;
	{
		LOC2 = ((NI32) 268435456);
	}
	LA3: ;
	LOC8 = 0;
	{
		if (!!((newfilesize == ((NI) -1)))) goto LA11;
		LOC8 = ((NI32) 2);
	}
	goto LA9;
	LA11: ;
	{
		LOC8 = ((NI32) 3);
	}
	LA9: ;
	LOC14 = 0;
	{
		if (!readonly) goto LA17;
		LOC14 = ((NI32) 1);
	}
	goto LA15;
	LA17: ;
	{
		LOC14 = ((NI32) 256);
	}
	LA15: ;
	result.fhandle = Dl_106317(LOC1, LOC2, ((NI32) 1), NIM_NIL, LOC8, LOC14, ((NI) 0));
	{
		NI32 LOC34;
		if (!(result.fhandle == ((NI) -1))) goto LA22;
		result.mem = NIM_NIL;
		result.size = ((NI) 0);
		{
			NI32 LOC28;
			if (!!((result.fhandle == ((NI) 0)))) goto LA26;
			LOC28 = 0;
			LOC28 = Dl_104424(result.fhandle);
		}
		LA26: ;
		{
			NI32 LOC33;
			if (!!((result.maphandle == ((NI) 0)))) goto LA31;
			LOC33 = 0;
			LOC33 = Dl_104424(result.maphandle);
		}
		LA31: ;
		LOC34 = 0;
		LOC34 = oslasterror_114454();
		raiseoserror_114430(LOC34);
	}
	LA22: ;
	{
		NI32 sizehigh;
		NI32 sizelow;
		NI32 status;
		NI32 lasterr;
		if (!!((newfilesize == ((NI) -1)))) goto LA37;
		sizehigh = ((NI32) ((NI)((NU64)(newfilesize) >> (NU64)(((NI) 32)))));
		sizelow = ((NI32) ((NI)(newfilesize & ((NI) IL64(4294967295)))));
		status = Dl_106410(result.fhandle, sizelow, (&sizehigh), ((NI32) 0));
		lasterr = oslasterror_114454();
		{
			NIM_BOOL LOC41;
			NIM_BOOL LOC42;
			NI32 LOC45;
			LOC41 = 0;
			LOC42 = 0;
			LOC42 = (status == ((NI32) -1));
			if (!(LOC42)) goto LA43;
			LOC42 = !((lasterr == ((NI32) 0)));
			LA43: ;
			LOC41 = LOC42;
			if (LOC41) goto LA44;
			LOC45 = 0;
			LOC45 = Dl_106404(result.fhandle);
			LOC41 = (LOC45 == ((NI32) 0));
			LA44: ;
			if (!LOC41) goto LA46;
			result.mem = NIM_NIL;
			result.size = ((NI) 0);
			{
				NI32 LOC52;
				if (!!((result.fhandle == ((NI) 0)))) goto LA50;
				LOC52 = 0;
				LOC52 = Dl_104424(result.fhandle);
			}
			LA50: ;
			{
				NI32 LOC57;
				if (!!((result.maphandle == ((NI) 0)))) goto LA55;
				LOC57 = 0;
				LOC57 = Dl_104424(result.maphandle);
			}
			LA55: ;
			raiseoserror_114430(lasterr);
		}
		LA46: ;
	}
	LA37: ;
	LOC58 = 0;
	{
		if (!readonly) goto LA61;
		LOC58 = ((NI32) 2);
	}
	goto LA59;
	LA61: ;
	{
		LOC58 = ((NI32) 4);
	}
	LA59: ;
	result.maphandle = Dl_106439(result.fhandle, NIM_NIL, LOC58, ((NI32) 0), ((NI32) 0), NIM_NIL);
	{
		NI32 LOC78;
		if (!(result.maphandle == ((NI) 0))) goto LA66;
		result.mem = NIM_NIL;
		result.size = ((NI) 0);
		{
			NI32 LOC72;
			if (!!((result.fhandle == ((NI) 0)))) goto LA70;
			LOC72 = 0;
			LOC72 = Dl_104424(result.fhandle);
		}
		LA70: ;
		{
			NI32 LOC77;
			if (!!((result.maphandle == ((NI) 0)))) goto LA75;
			LOC77 = 0;
			LOC77 = Dl_104424(result.maphandle);
		}
		LA75: ;
		LOC78 = 0;
		LOC78 = oslasterror_114454();
		raiseoserror_114430(LOC78);
	}
	LA66: ;
	LOC79 = 0;
	{
		if (!readonly) goto LA82;
		LOC79 = ((NI32) 4);
	}
	goto LA80;
	LA82: ;
	{
		LOC79 = ((NI32) 2);
	}
	LA80: ;
	LOC85 = 0;
	{
		if (!(mappedsize == ((NI) -1))) goto LA88;
		LOC85 = ((NI) 0);
	}
	goto LA86;
	LA88: ;
	{
		LOC85 = mappedsize;
	}
	LA86: ;
	result.mem = Dl_106428(result.maphandle, LOC79, ((NI32) ((NI)((NU64)(offset) >> (NU64)(((NI) 32))))), ((NI32) ((NI)(offset & ((NI) IL64(4294967295))))), ((NI32) (LOC85)), NIM_NIL);
	{
		NI32 LOC105;
		if (!(result.mem == NIM_NIL)) goto LA93;
		result.mem = NIM_NIL;
		result.size = ((NI) 0);
		{
			NI32 LOC99;
			if (!!((result.fhandle == ((NI) 0)))) goto LA97;
			LOC99 = 0;
			LOC99 = Dl_104424(result.fhandle);
		}
		LA97: ;
		{
			NI32 LOC104;
			if (!!((result.maphandle == ((NI) 0)))) goto LA102;
			LOC104 = 0;
			LOC104 = Dl_104424(result.maphandle);
		}
		LA102: ;
		LOC105 = 0;
		LOC105 = oslasterror_114454();
		raiseoserror_114430(LOC105);
	}
	LA93: ;
	hi = 0;
	low = 0;
	low = Dl_106420(result.fhandle, (&hi));
	{
		NI32 LOC120;
		if (!(low == ((NI32) -1))) goto LA108;
		result.mem = NIM_NIL;
		result.size = ((NI) 0);
		{
			NI32 LOC114;
			if (!!((result.fhandle == ((NI) 0)))) goto LA112;
			LOC114 = 0;
			LOC114 = Dl_104424(result.fhandle);
		}
		LA112: ;
		{
			NI32 LOC119;
			if (!!((result.maphandle == ((NI) 0)))) goto LA117;
			LOC119 = 0;
			LOC119 = Dl_104424(result.maphandle);
		}
		LA117: ;
		LOC120 = 0;
		LOC120 = oslasterror_114454();
		raiseoserror_114430(LOC120);
	}
	goto LA106;
	LA108: ;
	{
		NI64 filesize;
		filesize = (NI64)((NI64)((NU64)(((NI64) (hi))) >> (NU64)(IL64(32))) | ((NI64) (low)));
		{
			if (!!((mappedsize == ((NI) -1)))) goto LA124;
			result.size = ((NI) (((filesize <= ((NI64) (mappedsize))) ? filesize : ((NI64) (mappedsize)))));
		}
		goto LA122;
		LA124: ;
		{
			result.size = ((NI) (filesize));
		}
		LA122: ;
	}
	LA106: ;
	return result;
}

N_NIMCALL(void, close_233229)(Memfile232208* f) {
	NIM_BOOL error;
	NI32 lasterr;
	error = NIM_FALSE;
	lasterr = 0;
	{
		NI32 LOC5;
		NIM_BOOL LOC6;
		NI32 LOC7;
		NIM_BOOL LOC9;
		NI32 LOC10;
		if (!!(((*f).fhandle == ((NI) -1)))) goto LA3;
		LOC5 = 0;
		LOC5 = Dl_106601((*f).mem);
		error = (LOC5 == ((NI32) 0));
		lasterr = oslasterror_114454();
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = Dl_104424((*f).maphandle);
		LOC6 = (LOC7 == ((NI32) 0));
		if (LOC6) goto LA8;
		LOC6 = error;
		LA8: ;
		error = LOC6;
		LOC9 = 0;
		LOC10 = 0;
		LOC10 = Dl_104424((*f).fhandle);
		LOC9 = (LOC10 == ((NI32) 0));
		if (LOC9) goto LA11;
		LOC9 = error;
		LA11: ;
		error = LOC9;
	}
	LA3: ;
	(*f).size = ((NI) 0);
	(*f).mem = NIM_NIL;
	(*f).fhandle = ((NI) 0);
	(*f).maphandle = ((NI) 0);
	{
		if (!error) goto LA14;
		raiseoserror_114430(lasterr);
	}
	LA14: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit)(void) {
static TNimNode* TMP833[4];
static TNimNode TMP817[5];
NTI232208.size = sizeof(Memfile232208);
NTI232208.kind = 18;
NTI232208.base = 0;
NTI232208.flags = 3;
TMP833[0] = &TMP817[1];
TMP817[1].kind = 1;
TMP817[1].offset = offsetof(Memfile232208, mem);
TMP817[1].typ = (&NTI153);
TMP817[1].name = "mem";
TMP833[1] = &TMP817[2];
TMP817[2].kind = 1;
TMP817[2].offset = offsetof(Memfile232208, size);
TMP817[2].typ = (&NTI108);
TMP817[2].name = "size";
TMP833[2] = &TMP817[3];
TMP817[3].kind = 1;
TMP817[3].offset = offsetof(Memfile232208, fhandle);
TMP817[3].typ = (&NTI108);
TMP817[3].name = "fHandle";
TMP833[3] = &TMP817[4];
TMP817[4].kind = 1;
TMP817[4].offset = offsetof(Memfile232208, maphandle);
TMP817[4].typ = (&NTI108);
TMP817[4].name = "mapHandle";
TMP817[0].len = 4; TMP817[0].kind = 2; TMP817[0].sons = &TMP833[0];
NTI232208.node = &TMP817[0];
}

