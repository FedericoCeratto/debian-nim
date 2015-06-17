/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Processobj145402 Processobj145402;
typedef struct Stringtableobj136012 Stringtableobj136012;
typedef struct Tstartupinfo104244 Tstartupinfo104244;
typedef struct Tprocessinformation104246 Tprocessinformation104246;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tsecurityattributes104242 Tsecurityattributes104242;
typedef struct Keyvaluepairseq136010 Keyvaluepairseq136010;
typedef struct Keyvaluepair136008 Keyvaluepair136008;
typedef struct Streamobj140027 Streamobj140027;
typedef struct Tfilehandlestream146807 Tfilehandlestream146807;
typedef struct TY146201 TY146201;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TY179407[32];
struct  Tstartupinfo104244  {
NI32 cb;
NCSTRING lpreserved;
NCSTRING lpdesktop;
NCSTRING lptitle;
NI32 dwx;
NI32 dwy;
NI32 dwxsize;
NI32 dwysize;
NI32 dwxcountchars;
NI32 dwycountchars;
NI32 dwfillattribute;
NI32 dwflags;
NI16 wshowwindow;
NI16 cbreserved2;
void* lpreserved2;
NI hstdinput;
NI hstdoutput;
NI hstderror;
};
struct  Tprocessinformation104246  {
NI hprocess;
NI hthread;
NI32 dwprocessid;
NI32 dwthreadid;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Processobj145402  {
  TNimObject Sup;
NI fprocesshandle;
int inhandle;
int outhandle;
int errhandle;
NI id;
int exitcode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tsecurityattributes104242  {
NI32 nlength;
void* lpsecuritydescriptor;
NI32 binherithandle;
};
typedef N_STDCALL_PTR(NI32, TY104453) (NI* hreadpipe, NI* hwritepipe, Tsecurityattributes104242* lppipeattributes, NI32 nsize);
typedef N_STDCALL_PTR(NI, TY104639) (NI32 nstdhandle);
struct  Stringtableobj136012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq136010* data;
NU8 mode;
};
struct Keyvaluepair136008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
typedef N_STDCALL_PTR(NI32, TY104464) (NI16* lpapplicationname, NI16* lpcommandline, Tsecurityattributes104242* lpprocessattributes, Tsecurityattributes104242* lpthreadattributes, NI32 binherithandles, NI32 dwcreationflags, NI16* lpenvironment, NI16* lpcurrentdirectory, Tstartupinfo104244* lpstartupinfo, Tprocessinformation104246* lpprocessinformation);
typedef N_STDCALL_PTR(NI32, TY104425) (NI hobject);
typedef N_NIMCALL_PTR(void, TY140028) (Streamobj140027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY140032) (Streamobj140027* s);
typedef N_NIMCALL_PTR(void, TY140036) (Streamobj140027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY140041) (Streamobj140027* s);
typedef N_NIMCALL_PTR(NI, TY140045) (Streamobj140027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY140051) (Streamobj140027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY140057) (Streamobj140027* s);
struct  Streamobj140027  {
  TNimObject Sup;
TY140028 closeimpl;
TY140032 atendimpl;
TY140036 setpositionimpl;
TY140041 getpositionimpl;
TY140045 readdataimpl;
TY140051 writedataimpl;
TY140057 flushimpl;
};
struct  Tfilehandlestream146807  {
  Streamobj140027 Sup;
NI handle;
NIM_BOOL attheend;
};
typedef N_STDCALL_PTR(NI32, TY104431) (NI hfile, void* Buffer, NI32 nnumberofbytestoread, NI32* lpnumberofbytesread, void* lpoverlapped);
typedef N_STDCALL_PTR(NI32, TY104442) (NI hfile, void* Buffer, NI32 nnumberofbytestowrite, NI32* lpnumberofbyteswritten, void* lpoverlapped);
typedef N_STDCALL_PTR(NI32, TY104617) (NI hhandle, NI32 dwmilliseconds);
typedef N_STDCALL_PTR(NI32, TY104631) (NI hprocess, NI32* lpexitcode);
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NI idx, void* ClEnv);
void* ClEnv;
} TY172642;
typedef N_CLOSURE_PTR(void, TMP4340) (NI idx);
typedef NimStringDesc* TY219714[1];
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
typedef N_CLOSURE_PTR(void, TMP4341) (NI idx);
typedef N_CLOSURE_PTR(void, TMP4342) (NI idx);
typedef NI TY27420[16];
struct  Tpagedesc46354  {
Tpagedesc46354* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct TY146201 {
  TGenericSeq Sup;
  Processobj145402* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq136010 {
  TGenericSeq Sup;
  Keyvaluepair136008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, nospquoteShellWindows)(NimStringDesc* s);
N_NIMCALL(NIM_BOOL, contains_100373)(NimStringDesc* s, TY179407 chars);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, TMP2892)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, createpipehandles_146985)(NI* rdhandle, NI* wrhandle);
N_NIMCALL(void, raiseoserror_114430)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_114454)(void);
N_NIMCALL(NCSTRING, buildcommandline_146867)(NimStringDesc* a, NimStringDesc** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s);
N_NOCONV(void*, alloc0_6017)(NI size);
N_NIMCALL(NCSTRING, buildenv_146906)(Stringtableobj136012* env);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NI16*, newwidecstring_80744)(NCSTRING s);
static N_INLINE(void, fileclose_147001)(NI h);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(Tfilehandlestream146807*, newfilehandlestream_146852)(NI handle);
N_NIMCALL(void, TMP2895)(void* p, NI op);
N_NIMCALL(void, hsclose_146810)(Streamobj140027* s);
N_NIMCALL(NIM_BOOL, hsatend_146816)(Streamobj140027* s);
N_NIMCALL(NI, hsreaddata_146823)(Streamobj140027* s_146825, void* buffer, NI buflen);
N_NIMCALL(void, hswritedata_146838)(Streamobj140027* s_146840, void* buffer, NI buflen);
N_NIMCALL(NI, ncpicountProcessors)(void);
N_NIMCALL(NI16*, newwidecstring_80805)(NimStringDesc* s);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4338)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Processobj145402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj136012* env, NU8 options);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46346* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46346* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46346* c);
N_NOINLINE(void, incl_47065)(Tcellset46358* s, Tcell46346* cell);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, decref_51804)(Tcell46346* c);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void, nossleep)(NI milsecs);
N_NIMCALL(NIM_BOOL, nosprunning)(Processobj145402* p);
N_NIMCALL(NI, nospwaitForExit)(Processobj145402* p, NI timeout);
N_NIMCALL(void, nospclose)(Processobj145402* p);
static NIM_CONST TY179407 TMP1776 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1777, "", 0);
STRING_LITERAL(TMP1778, "\"", 1);
STRING_LITERAL(TMP1779, "\\\"", 2);
STRING_LITERAL(TMP2893, "=", 1);
static NIM_CONST TY172642 TMP4339 = {NIM_NIL,NIM_NIL};
extern TNimType NTI3411; /* RootObj */
TNimType NTI145402; /* ProcessObj */
extern TNimType NTI104222; /* THandle */
extern TNimType NTI13008; /* FileHandle */
extern TNimType NTI5811; /* cint */
TNimType NTI145404; /* Process */
extern TY104453 Dl_104452;
extern TY104639 Dl_104638;
extern TY104464 Dl_104463;
extern TY104425 Dl_104424;
extern TNimType NTI140027; /* StreamObj */
TNimType NTI146807; /* TFileHandleStream */
extern TNimType NTI138; /* bool */
TNimType NTI146805; /* PFileHandleStream */
extern TY104431 Dl_104430;
extern TY104442 Dl_104441;
extern TY104617 Dl_104616;
extern TY104631 Dl_104630;
TNimType NTI146201; /* seq[Process] */
extern Tgcheap48216 gch_48244;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, nospquoteShellWindows)(NimStringDesc* s) {
	NimStringDesc* result;
	NIM_BOOL needquote;
	NIM_BOOL LOC1;
	NimStringDesc* backslashbuff;
	result = 0;
	LOC1 = 0;
	LOC1 = contains_100373(s, TMP1776);
	if (LOC1) goto LA2;
	LOC1 = ((s ? s->Sup.len : 0) == ((NI) 0));
	LA2: ;
	needquote = LOC1;
	result = copyString(((NimStringDesc*) &TMP1777));
	backslashbuff = copyString(((NimStringDesc*) &TMP1777));
	{
		if (!needquote) goto LA5;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1778));
	}
	LA5: ;
	{
		NIM_CHAR c_145438;
		NI i_145442;
		NI L_145444;
		c_145438 = 0;
		i_145442 = ((NI) 0);
		L_145444 = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i_145442 < L_145444)) goto LA9;
				c_145438 = s->data[i_145442];
				{
					if (!((NU8)(c_145438) == (NU8)(92))) goto LA12;
					backslashbuff = addChar(backslashbuff, c_145438);
				}
				goto LA10;
				LA12: ;
				{
					if (!((NU8)(c_145438) == (NU8)(34))) goto LA15;
					result = resizeString(result, backslashbuff->Sup.len + 0);
appendString(result, backslashbuff);
					result = resizeString(result, backslashbuff->Sup.len + 0);
appendString(result, backslashbuff);
					backslashbuff = setLengthStr(backslashbuff, ((NI) 0));
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP1779));
				}
				goto LA10;
				LA15: ;
				{
					{
						if (!!(((backslashbuff ? backslashbuff->Sup.len : 0) == ((NI) 0)))) goto LA20;
						result = resizeString(result, backslashbuff->Sup.len + 0);
appendString(result, backslashbuff);
						backslashbuff = setLengthStr(backslashbuff, ((NI) 0));
					}
					LA20: ;
					result = addChar(result, c_145438);
				}
				LA10: ;
				i_145442 += ((NI) 1);
			} LA9: ;
		}
	}
	{
		if (!needquote) goto LA24;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1778));
	}
	LA24: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s) {
	NimStringDesc* result;
{	result = 0;
	result = nospquoteShellWindows(s);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP2892)(void* p, NI op) {
	Processobj145402* a;
	a = (Processobj145402*)p;
}

N_NIMCALL(void, createpipehandles_146985)(NI* rdhandle, NI* wrhandle) {
	Tsecurityattributes104242 piinheritablepipe;
	memset((void*)(&piinheritablepipe), 0, sizeof(piinheritablepipe));
	piinheritablepipe.nlength = ((int) (((NI)sizeof(Tsecurityattributes104242))));
	piinheritablepipe.lpsecuritydescriptor = NIM_NIL;
	piinheritablepipe.binherithandle = ((NI32) 1);
	{
		NI32 LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = Dl_104452(rdhandle, wrhandle, (&piinheritablepipe), ((NI32) 1024));
		if (!(LOC3 == ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_114454();
		raiseoserror_114430(LOC6);
	}
	LA4: ;
}

N_NIMCALL(NCSTRING, buildcommandline_146867)(NimStringDesc* a, NimStringDesc** args, NI argsLen0) {
	NCSTRING result;
	NimStringDesc* res;
	void* LOC5;
	result = 0;
	res = nospquoteShell(a);
	{
		NI i_146884;
		NI HEX3Atmp_146886;
		NI res_146889;
		i_146884 = 0;
		HEX3Atmp_146886 = 0;
		HEX3Atmp_146886 = (argsLen0-1);
		res_146889 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(res_146889 <= HEX3Atmp_146886)) goto LA3;
				i_146884 = res_146889;
				res = addChar(res, 32);
				LOC4 = 0;
				LOC4 = nospquoteShell(args[i_146884]);
				res = resizeString(res, LOC4->Sup.len + 0);
appendString(res, LOC4);
				res_146889 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC5 = 0;
	LOC5 = alloc0_6017(((NI) ((NI)((res ? res->Sup.len : 0) + ((NI) 1)))));
	result = ((NCSTRING) (LOC5));
	memcpy(((void*) (result)), ((void*) (res->data)), ((NI) ((res ? res->Sup.len : 0))));
	return result;
}

N_NIMCALL(NCSTRING, buildenv_146906)(Stringtableobj136012* env) {
	NCSTRING result;
	NI L;
	void* LOC9;
	result = 0;
	L = ((NI) 0);
	{
		NimStringDesc* key_146911;
		NimStringDesc* val_146912;
		key_146911 = 0;
		val_146912 = 0;
		{
			NI h_146939;
			NI HEX3Atmp_146941;
			NI res_146943;
			h_146939 = 0;
			HEX3Atmp_146941 = 0;
			HEX3Atmp_146941 = ((*env).data ? ((*env).data->Sup.len-1) : -1);
			res_146943 = ((NI) 0);
			{
				while (1) {
					if (!(res_146943 <= HEX3Atmp_146941)) goto LA4;
					h_146939 = res_146943;
					{
						if (!!((*env).data->data[h_146939].Field0 == 0)) goto LA7;
						key_146911 = (*env).data->data[h_146939].Field0;
						val_146912 = (*env).data->data[h_146939].Field1;
						L += (NI)((NI)((key_146911 ? key_146911->Sup.len : 0) + (val_146912 ? val_146912->Sup.len : 0)) + ((NI) 2));
					}
					LA7: ;
					res_146943 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	LOC9 = 0;
	LOC9 = alloc0_6017(((NI) ((NI)(L + ((NI) 2)))));
	result = ((NCSTRING) (LOC9));
	L = ((NI) 0);
	{
		NimStringDesc* key_146922;
		NimStringDesc* val_146923;
		key_146922 = 0;
		val_146923 = 0;
		{
			NI h_146951;
			NI HEX3Atmp_146953;
			NI res_146955;
			h_146951 = 0;
			HEX3Atmp_146953 = 0;
			HEX3Atmp_146953 = ((*env).data ? ((*env).data->Sup.len-1) : -1);
			res_146955 = ((NI) 0);
			{
				while (1) {
					if (!(res_146955 <= HEX3Atmp_146953)) goto LA13;
					h_146951 = res_146955;
					{
						NimStringDesc* x;
						NimStringDesc* LOC18;
						if (!!((*env).data->data[h_146951].Field0 == 0)) goto LA16;
						key_146922 = (*env).data->data[h_146951].Field0;
						val_146923 = (*env).data->data[h_146951].Field1;
						LOC18 = 0;
						LOC18 = rawNewString(key_146922->Sup.len + val_146923->Sup.len + 1);
appendString(LOC18, key_146922);
appendString(LOC18, ((NimStringDesc*) &TMP2893));
appendString(LOC18, val_146923);
						x = LOC18;
						memcpy(((void*) ((&result[L]))), ((void*) (x->data)), ((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
						L += (NI)((x ? x->Sup.len : 0) + ((NI) 1));
					}
					LA16: ;
					res_146955 += ((NI) 1);
				} LA13: ;
			}
		}
	}
	return result;
}

static N_INLINE(void, fileclose_147001)(NI h) {
	{
		NI32 LOC5;
		if (!(((NI) 4) < h)) goto LA3;
		LOC5 = 0;
		LOC5 = Dl_104424(h);
	}
	LA3: ;
}

N_NIMCALL(Processobj145402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj136012* env, NU8 options) {
	Processobj145402* result;
	Tstartupinfo104244 si;
	Tprocessinformation104246 procinfo;
	NI success;
	NI hi;
	NI ho;
	NI he;
	NCSTRING cmdl;
	NCSTRING wd;
	NCSTRING e;
	NI16* tmp;
	NI16* ee;
	NI16* wwd;
	NI32 LOC29;
	NI32 lasterror;
	NI32 LOC46;
	result = 0;
	memset((void*)(&si), 0, sizeof(si));
	memset((void*)(&procinfo), 0, sizeof(procinfo));
	success = 0;
	hi = 0;
	ho = 0;
	he = 0;
	result = (Processobj145402*) newObj((&NTI145404), sizeof(Processobj145402));
	(*result).Sup.m_type = (&NTI145402);
	si.cb = ((int) (((NI)sizeof(Tstartupinfo104244))));
	{
		if (!!(((options &(1<<((((NU8) 4))&7)))!=0))) goto LA3;
		si.dwflags = ((NI32) 256);
		createpipehandles_146985((&si.hstdinput), (&hi));
		createpipehandles_146985((&ho), (&si.hstdoutput));
		{
			if (!((options &(1<<((((NU8) 3))&7)))!=0)) goto LA7;
			si.hstderror = si.hstdoutput;
			he = ho;
		}
		goto LA5;
		LA7: ;
		{
			createpipehandles_146985((&he), (&si.hstderror));
		}
		LA5: ;
		(*result).inhandle = ((int) (hi));
		(*result).outhandle = ((int) (ho));
		(*result).errhandle = ((int) (he));
	}
	goto LA1;
	LA3: ;
	{
		si.hstderror = Dl_104638(((NI32) -12));
		si.hstdinput = Dl_104638(((NI32) -10));
		si.hstdoutput = Dl_104638(((NI32) -11));
		(*result).inhandle = ((int) (si.hstdinput));
		(*result).outhandle = ((int) (si.hstdoutput));
		(*result).errhandle = ((int) (si.hstderror));
	}
	LA1: ;
	cmdl = 0;
	{
		if (!((options &(1<<((((NU8) 2))&7)))!=0)) goto LA13;
		cmdl = command->data;
	}
	goto LA11;
	LA13: ;
	{
		cmdl = buildcommandline_146867(command, args, argsLen0);
	}
	LA11: ;
	wd = NIM_NIL;
	e = NIM_NIL;
	{
		if (!(((NI) 0) < (workingdir ? workingdir->Sup.len : 0))) goto LA18;
		wd = workingdir->data;
	}
	LA18: ;
	{
		if (!!((env == NIM_NIL))) goto LA22;
		e = buildenv_146906(env);
	}
	LA22: ;
	{
		NimStringDesc* LOC28;
		if (!((options &(1<<((((NU8) 0))&7)))!=0)) goto LA26;
		LOC28 = 0;
		LOC28 = cstrToNimstr(cmdl);
		printf("%s\015\012", LOC28? (LOC28)->data:"nil");
	}
	LA26: ;
	tmp = newwidecstring_80744(cmdl);
	ee = newwidecstring_80744(e);
	wwd = newwidecstring_80744(wd);
	LOC29 = 0;
	LOC29 = Dl_104463(NIM_NIL, tmp, NIM_NIL, NIM_NIL, ((NI32) 1), ((NI32) 1056), ee, wwd, (&si), (&procinfo));
	success = ((NI) (LOC29));
	lasterror = oslasterror_114454();
	{
		if (!!(((options &(1<<((((NU8) 4))&7)))!=0))) goto LA32;
		fileclose_147001(si.hstdinput);
		fileclose_147001(si.hstdoutput);
		{
			if (!!(((options &(1<<((((NU8) 3))&7)))!=0))) goto LA36;
			fileclose_147001(si.hstderror);
		}
		LA36: ;
	}
	LA32: ;
	{
		if (!!((e == NIM_NIL))) goto LA40;
		dealloc_6048(((void*) (e)));
	}
	LA40: ;
	{
		if (!(success == ((NI) 0))) goto LA44;
		raiseoserror_114430(lasterror);
	}
	LA44: ;
	LOC46 = 0;
	LOC46 = Dl_104424(procinfo.hthread);
	(*result).fprocesshandle = procinfo.hprocess;
	(*result).id = ((NI) (procinfo.dwprocessid));
	return result;
}
N_NIMCALL(void, TMP2895)(void* p, NI op) {
	Tfilehandlestream146807* a;
	a = (Tfilehandlestream146807*)p;
}

N_NIMCALL(void, hsclose_146810)(Streamobj140027* s) {
}

N_NIMCALL(NIM_BOOL, hsatend_146816)(Streamobj140027* s) {
	NIM_BOOL result;
{	result = 0;
	result = (*((Tfilehandlestream146807*) (s))).attheend;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, hsreaddata_146823)(Streamobj140027* s_146825, void* buffer, NI buflen) {
	NI result;
	Tfilehandlestream146807* s;
	NI32 br;
	NI32 a;
{	result = 0;
	s = ((Tfilehandlestream146807*) (s_146825));
	{
		if (!(*s).attheend) goto LA3;
		result = ((NI) 0);
		goto BeforeRet;
	}
	LA3: ;
	br = 0;
	a = Dl_104430((*s).handle, buffer, ((int) (buflen)), (&br), NIM_NIL);
	{
		NIM_BOOL LOC7;
		NI32 LOC11;
		LOC7 = 0;
		LOC7 = (a == ((NI32) 0));
		if (!(LOC7)) goto LA8;
		LOC7 = !((br == ((NI32) 0)));
		LA8: ;
		if (!LOC7) goto LA9;
		LOC11 = 0;
		LOC11 = oslasterror_114454();
		raiseoserror_114430(LOC11);
	}
	LA9: ;
	(*s).attheend = (((NI) (br)) < buflen);
	result = ((NI) (br));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, hswritedata_146838)(Streamobj140027* s_146840, void* buffer, NI buflen) {
	Tfilehandlestream146807* s;
	NI32 byteswritten;
	NI32 a;
	s = ((Tfilehandlestream146807*) (s_146840));
	byteswritten = 0;
	a = Dl_104441((*s).handle, buffer, ((int) (buflen)), (&byteswritten), NIM_NIL);
	{
		NI32 LOC5;
		if (!(a == ((NI32) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_114454();
		raiseoserror_114430(LOC5);
	}
	LA3: ;
}

N_NIMCALL(Tfilehandlestream146807*, newfilehandlestream_146852)(NI handle) {
	Tfilehandlestream146807* result;
	result = 0;
	result = (Tfilehandlestream146807*) newObj((&NTI146805), sizeof(Tfilehandlestream146807));
	(*result).Sup.Sup.m_type = (&NTI146807);
	(*result).handle = handle;
	(*result).Sup.closeimpl = hsclose_146810;
	(*result).Sup.atendimpl = hsatend_146816;
	(*result).Sup.readdataimpl = hsreaddata_146823;
	(*result).Sup.writedataimpl = hswritedata_146838;
	return result;
}

N_NIMCALL(Streamobj140027*, nospinputStream)(Processobj145402* p) {
	Streamobj140027* result;
	Tfilehandlestream146807* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = newfilehandlestream_146852(((NI) ((*p).inhandle)));
	result = &LOC1->Sup;
	return result;
}

N_NIMCALL(Streamobj140027*, nospoutputStream)(Processobj145402* p) {
	Streamobj140027* result;
	Tfilehandlestream146807* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = newfilehandlestream_146852(((NI) ((*p).outhandle)));
	result = &LOC1->Sup;
	return result;
}

N_NIMCALL(NI, nospwaitForExit)(Processobj145402* p, NI timeout) {
	NI result;
	NI32 LOC1;
	NI32 res;
	NI32 LOC2;
	NI32 LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = Dl_104616((*p).fprocesshandle, ((NI32) (timeout)));
	res = 0;
	LOC2 = 0;
	LOC2 = Dl_104630((*p).fprocesshandle, (&res));
	result = ((NI) (res));
	LOC3 = 0;
	LOC3 = Dl_104424((*p).fprocesshandle);
	return result;
}

N_NIMCALL(NI, nospcountProcessors)(void) {
	NI result;
	result = 0;
	result = ncpicountProcessors();
	return result;
}

N_NIMCALL(NI, nospexecCmd)(NimStringDesc* command) {
	NI result;
	Tstartupinfo104244 si;
	Tprocessinformation104246 procinfo;
	NI process;
	NI32 L;
	NI16* c;
	NI32 res;
	result = 0;
	memset((void*)(&si), 0, sizeof(si));
	memset((void*)(&procinfo), 0, sizeof(procinfo));
	process = 0;
	L = 0;
	si.cb = ((int) (((NI)sizeof(Tstartupinfo104244))));
	si.hstderror = Dl_104638(((NI32) -12));
	si.hstdinput = Dl_104638(((NI32) -10));
	si.hstdoutput = Dl_104638(((NI32) -11));
	c = newwidecstring_80805(command);
	res = Dl_104463(NIM_NIL, c, NIM_NIL, NIM_NIL, ((NI32) 0), ((NI32) 32), NIM_NIL, NIM_NIL, (&si), (&procinfo));
	{
		NI32 LOC5;
		if (!(res == ((NI32) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_114454();
		raiseoserror_114430(LOC5);
	}
	goto LA1;
	LA3: ;
	{
		NI32 LOC7;
		NI32 LOC15;
		process = procinfo.hprocess;
		LOC7 = 0;
		LOC7 = Dl_104424(procinfo.hthread);
		{
			NI32 LOC10;
			NI32 LOC13;
			LOC10 = 0;
			LOC10 = Dl_104616(process, ((NI32) -1));
			if (!!((LOC10 == ((NI32) -1)))) goto LA11;
			LOC13 = 0;
			LOC13 = Dl_104630(process, (&L));
			result = ((NI) (L));
		}
		goto LA8;
		LA11: ;
		{
			result = ((NI) -1);
		}
		LA8: ;
		LOC15 = 0;
		LOC15 = Dl_104424(process);
	}
	LA1: ;
	return result;
}
N_NIMCALL(void, TMP4338)(void* p, NI op) {
	TY146201* a;
	NI LOC1;
	a = (TY146201*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46346* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50623)(Tcell46346* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47065((&gch_48244.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52222)(Tcell46346* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50623(c);
	}
	LA4: ;
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, decref_51804)(Tcell46346* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50623(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46346* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49846(src);
		incref_52222(LOC5);
	}
	LA3: ;
	{
		Tcell46346* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49846((*dest));
		decref_51804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(NIM_BOOL, nosprunning)(Processobj145402* p) {
	NIM_BOOL result;
	NI32 x;
{	result = 0;
	x = Dl_104616((*p).fprocesshandle, ((NI32) 50));
	result = (x == ((NI32) 258));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, nospclose)(Processobj145402* p) {
}

N_NIMCALL(NI, nospexecProcesses)(NimStringDesc** cmds, NI cmdsLen0, NU8 options, NI n, TY172642 beforerunevent) {
	NI result;
	result = 0;
	{
		TY146201* q;
		NI m;
		NI i;
		if (!(((NI) 1) < n)) goto LA3;
		q = 0;
		q = (TY146201*) newSeq((&NTI146201), ((NI) (n)));
		m = ((n <= cmdsLen0) ? n : cmdsLen0);
		{
			NI i_146235;
			NI HEX3Atmp_146528;
			NI res_146531;
			i_146235 = 0;
			HEX3Atmp_146528 = 0;
			HEX3Atmp_146528 = (NI)(m - ((NI) 1));
			res_146531 = ((NI) 0);
			{
				while (1) {
					TY219714 LOC12;
					if (!(res_146531 <= HEX3Atmp_146528)) goto LA7;
					i_146235 = res_146531;
					{
						if (!!((beforerunevent.ClPrc == TMP4339.ClPrc && beforerunevent.ClEnv == TMP4339.ClEnv))) goto LA10;
						beforerunevent.ClEnv? beforerunevent.ClPrc(i_146235, beforerunevent.ClEnv):((TMP4340)(beforerunevent.ClPrc))(i_146235);
					}
					LA10: ;
					memset((void*)LOC12, 0, sizeof(LOC12));
					asgnRef((void**) (&q->data[i_146235]), nospstartProcess(cmds[i_146235], ((NimStringDesc*) &TMP1777), LOC12, 0, NIM_NIL, (options | 4)));
					res_146531 += ((NI) 1);
				} LA7: ;
			}
		}
		i = m;
		{
			while (1) {
				if (!(i <= (cmdsLen0-1))) goto LA14;
				nossleep(((NI) 50));
				{
					NI r_146413;
					NI HEX3Atmp_146537;
					NI res_146540;
					r_146413 = 0;
					HEX3Atmp_146537 = 0;
					HEX3Atmp_146537 = (NI)(n - ((NI) 1));
					res_146540 = ((NI) 0);
					{
						while (1) {
							if (!(res_146540 <= HEX3Atmp_146537)) goto LA17;
							r_146413 = res_146540;
							{
								NIM_BOOL LOC20;
								NI LOC23;
								TY219714 LOC32;
								LOC20 = 0;
								LOC20 = nosprunning(q->data[r_146413]);
								if (!!(LOC20)) goto LA21;
								LOC23 = 0;
								LOC23 = nospwaitForExit(q->data[r_146413], ((NI) -1));
								result = ((LOC23 >= result) ? LOC23 : result);
								{
									if (!!((q->data[r_146413] == NIM_NIL))) goto LA26;
									nospclose(q->data[r_146413]);
								}
								LA26: ;
								{
									if (!!((beforerunevent.ClPrc == TMP4339.ClPrc && beforerunevent.ClEnv == TMP4339.ClEnv))) goto LA30;
									beforerunevent.ClEnv? beforerunevent.ClPrc(i, beforerunevent.ClEnv):((TMP4341)(beforerunevent.ClPrc))(i);
								}
								LA30: ;
								memset((void*)LOC32, 0, sizeof(LOC32));
								asgnRef((void**) (&q->data[r_146413]), nospstartProcess(cmds[i], ((NimStringDesc*) &TMP1777), LOC32, 0, NIM_NIL, (options | 4)));
								i += ((NI) 1);
								{
									if (!((cmdsLen0-1) < i)) goto LA35;
									goto LA15;
								}
								LA35: ;
							}
							LA21: ;
							res_146540 += ((NI) 1);
						} LA17: ;
					}
				} LA15: ;
			} LA14: ;
		}
		{
			NI j_146471;
			NI HEX3Atmp_146545;
			NI res_146548;
			j_146471 = 0;
			HEX3Atmp_146545 = 0;
			HEX3Atmp_146545 = (NI)(m - ((NI) 1));
			res_146548 = ((NI) 0);
			{
				while (1) {
					NI LOC40;
					if (!(res_146548 <= HEX3Atmp_146545)) goto LA39;
					j_146471 = res_146548;
					LOC40 = 0;
					LOC40 = nospwaitForExit(q->data[j_146471], ((NI) -1));
					result = ((LOC40 >= result) ? LOC40 : result);
					{
						if (!!((q->data[j_146471] == NIM_NIL))) goto LA43;
						nospclose(q->data[j_146471]);
					}
					LA43: ;
					res_146548 += ((NI) 1);
				} LA39: ;
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		{
			NI i_146498;
			NI HEX3Atmp_146553;
			NI res_146556;
			i_146498 = 0;
			HEX3Atmp_146553 = 0;
			HEX3Atmp_146553 = (cmdsLen0-1);
			res_146556 = ((NI) 0);
			{
				while (1) {
					Processobj145402* p;
					TY219714 LOC53;
					NI LOC54;
					if (!(res_146556 <= HEX3Atmp_146553)) goto LA48;
					i_146498 = res_146556;
					{
						if (!!((beforerunevent.ClPrc == TMP4339.ClPrc && beforerunevent.ClEnv == TMP4339.ClEnv))) goto LA51;
						beforerunevent.ClEnv? beforerunevent.ClPrc(i_146498, beforerunevent.ClEnv):((TMP4342)(beforerunevent.ClPrc))(i_146498);
					}
					LA51: ;
					memset((void*)LOC53, 0, sizeof(LOC53));
					p = nospstartProcess(cmds[i_146498], ((NimStringDesc*) &TMP1777), LOC53, 0, NIM_NIL, (options | 4));
					LOC54 = 0;
					LOC54 = nospwaitForExit(p, ((NI) -1));
					result = ((LOC54 >= result) ? LOC54 : result);
					nospclose(p);
					res_146556 += ((NI) 1);
				} LA48: ;
			}
		}
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit)(void) {
static TNimNode* TMP2891[6];
static TNimNode* TMP2894[2];
static TNimNode TMP31[10];
NTI145402.size = sizeof(Processobj145402);
NTI145402.kind = 17;
NTI145402.base = (&NTI3411);
NTI145402.flags = 1;
TMP2891[0] = &TMP31[1];
TMP31[1].kind = 1;
TMP31[1].offset = offsetof(Processobj145402, fprocesshandle);
TMP31[1].typ = (&NTI104222);
TMP31[1].name = "fProcessHandle";
TMP2891[1] = &TMP31[2];
TMP31[2].kind = 1;
TMP31[2].offset = offsetof(Processobj145402, inhandle);
TMP31[2].typ = (&NTI13008);
TMP31[2].name = "inHandle";
TMP2891[2] = &TMP31[3];
TMP31[3].kind = 1;
TMP31[3].offset = offsetof(Processobj145402, outhandle);
TMP31[3].typ = (&NTI13008);
TMP31[3].name = "outHandle";
TMP2891[3] = &TMP31[4];
TMP31[4].kind = 1;
TMP31[4].offset = offsetof(Processobj145402, errhandle);
TMP31[4].typ = (&NTI13008);
TMP31[4].name = "errHandle";
TMP2891[4] = &TMP31[5];
TMP31[5].kind = 1;
TMP31[5].offset = offsetof(Processobj145402, id);
TMP31[5].typ = (&NTI104222);
TMP31[5].name = "id";
TMP2891[5] = &TMP31[6];
TMP31[6].kind = 1;
TMP31[6].offset = offsetof(Processobj145402, exitcode);
TMP31[6].typ = (&NTI5811);
TMP31[6].name = "exitCode";
TMP31[0].len = 6; TMP31[0].kind = 2; TMP31[0].sons = &TMP2891[0];
NTI145402.node = &TMP31[0];
NTI145404.size = sizeof(Processobj145402*);
NTI145404.kind = 22;
NTI145404.base = (&NTI145402);
NTI145404.marker = TMP2892;
NTI146807.size = sizeof(Tfilehandlestream146807);
NTI146807.kind = 17;
NTI146807.base = (&NTI140027);
NTI146807.flags = 1;
TMP2894[0] = &TMP31[8];
TMP31[8].kind = 1;
TMP31[8].offset = offsetof(Tfilehandlestream146807, handle);
TMP31[8].typ = (&NTI104222);
TMP31[8].name = "handle";
TMP2894[1] = &TMP31[9];
TMP31[9].kind = 1;
TMP31[9].offset = offsetof(Tfilehandlestream146807, attheend);
TMP31[9].typ = (&NTI138);
TMP31[9].name = "atTheEnd";
TMP31[7].len = 2; TMP31[7].kind = 2; TMP31[7].sons = &TMP2894[0];
NTI146807.node = &TMP31[7];
NTI146805.size = sizeof(Tfilehandlestream146807*);
NTI146805.kind = 22;
NTI146805.base = (&NTI146807);
NTI146805.marker = TMP2895;
NTI146201.size = sizeof(TY146201*);
NTI146201.kind = 24;
NTI146201.base = (&NTI145404);
NTI146201.marker = TMP4338;
}

