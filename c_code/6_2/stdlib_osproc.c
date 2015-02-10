/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <sys/types.h>

#include <unistd.h>

#include <setjmp.h>

#include <errno.h>

#include <fcntl.h>

#include <stdio.h>

#include <sys/wait.h>

#include <stdlib.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct processobj140402 processobj140402;
typedef struct stringtableobj131012 stringtableobj131012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct streamobj135035 streamobj135035;
typedef struct TY119808 TY119808;
typedef struct tcell44935 tcell44935;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44947 tcellset44947;
typedef struct tpagedesc44943 tpagedesc44943;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
typedef struct tstartprocessdata141951 tstartprocessdata141951;
typedef struct filestreamobj135742 filestreamobj135742;
typedef struct TY141202 TY141202;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TY211607[32];
typedef int TY142022[2];
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  processobj140402  {
  TNimObject Sup;
int Inhandle;
int Outhandle;
int Errhandle;
streamobj135035* Instream;
streamobj135035* Outstream;
streamobj135035* Errstream;
pid_t Id;
int Exitcode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY208063[3];
struct  tcell44935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44951  {
NI Len;
NI Cap;
tcell44935** D;
};
struct  tcellset44947  {
NI Counter;
NI Max;
tpagedesc44943* Head;
tpagedesc44943** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44951 Zct;
tcellseq44951 Decstack;
tcellset44947 Cycleroots;
tcellseq44951 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
typedef NimStringDesc* TY197301[1];
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY14809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY14809 raiseAction;
};
struct keyvaluepair131008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj131012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq131010* Data;
NU8 Mode;
};
struct  tstartprocessdata141951  {
NCSTRING Syscommand;
NCSTRING* Sysargs;
NCSTRING* Sysenv;
NCSTRING Workingdir;
TY142022 Pstdin;
TY142022 Pstdout;
TY142022 Pstderr;
TY142022 Perrorpipe;
NIM_BOOL Optionpousepath;
NIM_BOOL Optionpoparentstreams;
NIM_BOOL Optionpostderrtostdout;
};
typedef NimStringDesc* TY260532[1];
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NI idx, void* ClEnv);
void* ClEnv;
} TY203627;
typedef N_CLOSURE_PTR(void, TMP4213) (NI idx);
typedef N_CLOSURE_PTR(void, TMP4214) (NI idx);
typedef N_CLOSURE_PTR(void, TMP4215) (NI idx);
typedef N_NIMCALL_PTR(void, TY135036) (streamobj135035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY135040) (streamobj135035* s);
typedef N_NIMCALL_PTR(void, TY135044) (streamobj135035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY135049) (streamobj135035* s);
typedef N_NIMCALL_PTR(NI, TY135053) (streamobj135035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135059) (streamobj135035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135065) (streamobj135035* s);
struct  streamobj135035  {
  TNimObject Sup;
TY135036 Closeimpl;
TY135040 Atendimpl;
TY135044 Setpositionimpl;
TY135049 Getpositionimpl;
TY135053 Readdataimpl;
TY135059 Writedataimpl;
TY135065 Flushimpl;
};
typedef NI TY26420[8];
struct  tpagedesc44943  {
tpagedesc44943* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  filestreamobj135742  {
  streamobj135035 Sup;
FILE* F;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct TY119808 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq131010 {
  TGenericSeq Sup;
  keyvaluepair131008 data[SEQ_DECL_SIZE];
};
struct TY141202 {
  TGenericSeq Sup;
  processobj140402* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, nospquoteShellPosix)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, allcharsinset_96479)(NimStringDesc* s, TY211607 theset);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(processobj140402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, stringtableobj131012* env, NU8 options);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2859)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, raiseoserror_114809)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_114841)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NCSTRING*, alloccstringarray_13401)(NimStringDesc** a, NI aLen0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NCSTRING*, envtocstringarray_141855)(void);
N_NIMCALL(void, getenvvarsc_120002)(void);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74828, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NOCONV(void*, alloc0_5817)(NI size);
N_NOCONV(void*, alloc_5801)(NI size);
N_NIMCALL(NCSTRING*, envtocstringarray_141806)(stringtableobj131012* t);
N_NIMCALL(NI, nstlen)(stringtableobj131012* t);
N_NIMCALL(pid_t, startprocessauxfork_142001)(tstartprocessdata141951* data);
N_CDECL(void, startprocessafterfork_142004)(tstartprocessdata141951* data);
N_NIMCALL(void, startprocessfail_142825)(tstartprocessdata141951* data);
N_NOINLINE(void, nosraiseOSError)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
N_NIMCALL(void, dealloccstringarray_13454)(NCSTRING* a);
N_NIMCALL(void, createstream_143539)(streamobj135035** stream, int* handle, NU8 filemode);
N_NIMCALL(NIM_BOOL, open_12611)(FILE** f, int filehandle, NU8 mode);
N_NIMCALL(filestreamobj135742*, newfilestream_135814)(FILE* f);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, ncpicountProcessors)(void);
N_NIMCALL(void, TMP4211)(void* p, NI op);
N_NIMCALL(processobj140402*, startcmd_140644)(NimStringDesc* command, NU8 options);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44935* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c);
N_NOINLINE(void, incl_45671)(tcellset44947* s, tcell44935* cell);
static N_INLINE(void, decref_50604)(tcell44935* c);
N_NIMCALL(void, nossleep)(NI milsecs);
N_NIMCALL(NIM_BOOL, nosprunning)(processobj140402* p);
N_NIMCALL(NI, nospwaitForExit)(processobj140402* p, NI timeout);
N_NIMCALL(void, nospclose)(processobj140402* p);
N_NIMCALL(void, close_135093)(streamobj135035* s);
STRING_LITERAL(TMP1793, "\'\'", 2);
static NIM_CONST TY211607 TMP1794 = {
0x00, 0x00, 0x00, 0x00, 0x20, 0xE8, 0xFF, 0x27,
0xFF, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1795, "\'", 1);
STRING_LITERAL(TMP1796, "\'\"\'\"\'", 5);
STRING_LITERAL(TMP2860, "/bin/sh", 7);
STRING_LITERAL(TMP2861, "-c", 2);
STRING_LITERAL(TMP2863, "=", 1);
STRING_LITERAL(TMP2866, " ", 1);
STRING_LITERAL(TMP2867, "", 0);
static NIM_CONST TY203627 TMP4212 = {NIM_NIL,NIM_NIL};
extern TNimType NTI3211; /* RootObj */
TNimType NTI140402; /* ProcessObj */
extern TNimType NTI12408; /* FileHandle */
extern TNimType NTI135033; /* Stream */
extern TNimType NTI104462; /* TPid */
extern TNimType NTI5611; /* cint */
TNimType NTI140404; /* Process */
extern TNimType NTI119808; /* seq[string] */
extern tgcheap47016 gch_47044;
extern TSafePoint* exchandler_16243;
extern TY119808* environment_119809;
TNimType NTI141202; /* seq[Process] */

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, nospquoteShellPosix)(NimStringDesc* s) {
	NimStringDesc* result;
	NIM_BOOL safe;
	result = 0;
	{
		if (!(s->Sup.len == 0)) goto LA3;
		result = copyString(((NimStringDesc*) &TMP1793));
		goto BeforeRet;
	}
	LA3: ;
	safe = allcharsinset_96479(s, TMP1794);
	{
		if (!safe) goto LA7;
		result = copyString(s);
		goto BeforeRet;
	}
	goto LA5;
	LA7: ;
	{
		NimStringDesc* LOC10;
		NimStringDesc* LOC11;
		LOC10 = 0;
		LOC11 = 0;
		LOC11 = nsuReplaceStr(s, ((NimStringDesc*) &TMP1795), ((NimStringDesc*) &TMP1796));
		LOC10 = rawNewString(LOC11->Sup.len + 2);
appendString(LOC10, ((NimStringDesc*) &TMP1795));
appendString(LOC10, LOC11);
appendString(LOC10, ((NimStringDesc*) &TMP1795));
		result = LOC10;
		goto BeforeRet;
	}
	LA5: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = nospquoteShellPosix(s);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP2859)(void* p, NI op) {
	processobj140402* a;
	a = (processobj140402*)p;
	nimGCvisit((void*)(*a).Instream, op);
	nimGCvisit((void*)(*a).Outstream, op);
	nimGCvisit((void*)(*a).Errstream, op);
}

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44935* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16243;
	exchandler_16243 = s;
}

N_NIMCALL(NCSTRING*, envtocstringarray_141855)(void) {
	NCSTRING* result;
	NI counter;
	void* LOC5;
	NI i;
	result = 0;
	counter = 0;
	{
		NimStringDesc* key_141859;
		NimStringDesc* val_141860;
		key_141859 = 0;
		val_141860 = 0;
		getenvvarsc_120002();
		{
			NI i_141895;
			NI HEX3Atmp_141897;
			NI res_141899;
			i_141895 = 0;
			HEX3Atmp_141897 = 0;
			HEX3Atmp_141897 = (environment_119809->Sup.len-1);
			res_141899 = 0;
			{
				while (1) {
					NI p_141901;
					if (!(res_141899 <= HEX3Atmp_141897)) goto LA4;
					i_141895 = res_141899;
					p_141901 = nsuFindChar(environment_119809->data[i_141895], 61, 0);
					key_141859 = copyStrLast(environment_119809->data[i_141895], 0, (NI64)(p_141901 - 1));
					val_141860 = copyStr(environment_119809->data[i_141895], (NI64)(p_141901 + 1));
					counter += 1;
					res_141899 += 1;
				} LA4: ;
			}
		}
	}
	LOC5 = 0;
	LOC5 = alloc0_5817((NI64)((NI64)(counter + 1) * 8));
	result = ((NCSTRING*) (LOC5));
	i = 0;
	{
		NimStringDesc* key_141875;
		NimStringDesc* val_141876;
		key_141875 = 0;
		val_141876 = 0;
		getenvvarsc_120002();
		{
			NI i_141914;
			NI HEX3Atmp_141916;
			NI res_141918;
			i_141914 = 0;
			HEX3Atmp_141916 = 0;
			HEX3Atmp_141916 = (environment_119809->Sup.len-1);
			res_141918 = 0;
			{
				while (1) {
					NI p_141920;
					NimStringDesc* x;
					NimStringDesc* LOC10;
					void* LOC11;
					if (!(res_141918 <= HEX3Atmp_141916)) goto LA9;
					i_141914 = res_141918;
					p_141920 = nsuFindChar(environment_119809->data[i_141914], 61, 0);
					key_141875 = copyStrLast(environment_119809->data[i_141914], 0, (NI64)(p_141920 - 1));
					val_141876 = copyStr(environment_119809->data[i_141914], (NI64)(p_141920 + 1));
					LOC10 = 0;
					LOC10 = rawNewString(key_141875->Sup.len + val_141876->Sup.len + 1);
appendString(LOC10, key_141875);
appendString(LOC10, ((NimStringDesc*) &TMP2863));
appendString(LOC10, val_141876);
					x = LOC10;
					LOC11 = 0;
					LOC11 = alloc_5801((NI64)(x->Sup.len + 1));
					result[(i)- 0] = ((NCSTRING) (LOC11));
					memcpy(((void*) (result[(i)- 0])), ((void*) ((&x->data[0]))), (NI64)(x->Sup.len + 1));
					i += 1;
					res_141918 += 1;
				} LA9: ;
			}
		}
	}
	return result;
}

N_NIMCALL(NCSTRING*, envtocstringarray_141806)(stringtableobj131012* t) {
	NCSTRING* result;
	NI LOC1;
	void* LOC2;
	NI i;
	result = 0;
	LOC1 = 0;
	LOC1 = nstlen(t);
	LOC2 = 0;
	LOC2 = alloc0_5817((NI64)((NI64)(LOC1 + 1) * 8));
	result = ((NCSTRING*) (LOC2));
	i = 0;
	{
		NimStringDesc* key_141812;
		NimStringDesc* val_141813;
		key_141812 = 0;
		val_141813 = 0;
		{
			NI h_141835;
			NI HEX3Atmp_141837;
			NI res_141839;
			h_141835 = 0;
			HEX3Atmp_141837 = 0;
			HEX3Atmp_141837 = ((*t).Data->Sup.len-1);
			res_141839 = 0;
			{
				while (1) {
					if (!(res_141839 <= HEX3Atmp_141837)) goto LA6;
					h_141835 = res_141839;
					{
						NimStringDesc* x;
						NimStringDesc* LOC11;
						void* LOC12;
						if (!!((*t).Data->data[h_141835].Field0 == 0)) goto LA9;
						key_141812 = (*t).Data->data[h_141835].Field0;
						val_141813 = (*t).Data->data[h_141835].Field1;
						LOC11 = 0;
						LOC11 = rawNewString(key_141812->Sup.len + val_141813->Sup.len + 1);
appendString(LOC11, key_141812);
appendString(LOC11, ((NimStringDesc*) &TMP2863));
appendString(LOC11, val_141813);
						x = LOC11;
						LOC12 = 0;
						LOC12 = alloc_5801((NI64)(x->Sup.len + 1));
						result[(i)- 0] = ((NCSTRING) (LOC12));
						memcpy(((void*) (result[(i)- 0])), ((void*) ((&x->data[0]))), (NI64)(x->Sup.len + 1));
						i += 1;
					}
					LA9: ;
					res_141839 += 1;
				} LA6: ;
			}
		}
	}
	return result;
}

N_NIMCALL(void, startprocessfail_142825)(tstartprocessdata141951* data) {
	int error;
	NI LOC1;
	error = errno;
	LOC1 = 0;
	LOC1 = write((*data).Perrorpipe[(1)- 0], ((void*) ((&error))), 4);
	_exit(1);
}

N_CDECL(void, startprocessafterfork_142004)(tstartprocessdata141951* data) {
	int LOC42;
	int LOC43;
	{
		int LOC5;
		int LOC11;
		int LOC17;
		if (!!((*data).Optionpoparentstreams)) goto LA3;
		LOC5 = 0;
		LOC5 = close((*data).Pstdin[(1)- 0]);
		{
			int LOC8;
			LOC8 = 0;
			LOC8 = dup2((*data).Pstdin[(0)- 0], ((int) 0));
			if (!(LOC8 < ((NI32) 0))) goto LA9;
			startprocessfail_142825(data);
		}
		LA9: ;
		LOC11 = 0;
		LOC11 = close((*data).Pstdout[(0)- 0]);
		{
			int LOC14;
			LOC14 = 0;
			LOC14 = dup2((*data).Pstdout[(1)- 0], ((int) 1));
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			startprocessfail_142825(data);
		}
		LA15: ;
		LOC17 = 0;
		LOC17 = close((*data).Pstderr[(0)- 0]);
		{
			if (!(*data).Optionpostderrtostdout) goto LA20;
			{
				int LOC24;
				LOC24 = 0;
				LOC24 = dup2((*data).Pstdout[(1)- 0], ((int) 2));
				if (!(LOC24 < ((NI32) 0))) goto LA25;
				startprocessfail_142825(data);
			}
			LA25: ;
		}
		goto LA18;
		LA20: ;
		{
			{
				int LOC30;
				LOC30 = 0;
				LOC30 = dup2((*data).Pstderr[(1)- 0], ((int) 2));
				if (!(LOC30 < ((NI32) 0))) goto LA31;
				startprocessfail_142825(data);
			}
			LA31: ;
		}
		LA18: ;
	}
	LA3: ;
	{
		if (!(0 < strlen((*data).Workingdir))) goto LA35;
		{
			int LOC39;
			LOC39 = 0;
			LOC39 = chdir((*data).Workingdir);
			if (!(LOC39 < ((NI32) 0))) goto LA40;
			startprocessfail_142825(data);
		}
		LA40: ;
	}
	LA35: ;
	LOC42 = 0;
	LOC42 = close((*data).Perrorpipe[(0)- 0]);
	LOC43 = 0;
	LOC43 = fcntl((*data).Perrorpipe[(1)- 0], F_SETFD, FD_CLOEXEC);
	{
		int LOC48;
		if (!(*data).Optionpousepath) goto LA46;
		LOC48 = 0;
		LOC48 = execvpe((*data).Syscommand, (*data).Sysargs, (*data).Sysenv);
	}
	goto LA44;
	LA46: ;
	{
		int LOC50;
		LOC50 = 0;
		LOC50 = execve((*data).Syscommand, (*data).Sysargs, (*data).Sysenv);
	}
	LA44: ;
	startprocessfail_142825(data);
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16243 = (*exchandler_16243).prev;
}

N_NIMCALL(pid_t, startprocessauxfork_142001)(tstartprocessdata141951* data) {
	pid_t volatile result;
	TSafePoint TMP2865;
	result = 0;
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = pipe((*data).Perrorpipe);
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_114841();
		raiseoserror_114809(LOC6);
	}
	LA4: ;
	pushSafePoint(&TMP2865);
	TMP2865.status = _setjmp(TMP2865.context);
	if (TMP2865.status == 0) {
		pid_t volatile pid;
		tstartprocessdata141951 datacopy;
		int LOC12;
		int error;
		NI sizeread;
		int LOC24;
		pid = 0;
		datacopy = (*data);
		pid = fork();
		{
			if (!(pid == 0)) goto LA10;
			startprocessafterfork_142004((&datacopy));
			_exit(1);
		}
		LA10: ;
		LOC12 = 0;
		LOC12 = close((*data).Perrorpipe[(1)- 0]);
		{
			NI32 LOC17;
			if (!(pid < 0)) goto LA15;
			LOC17 = 0;
			LOC17 = oslasterror_114841();
			raiseoserror_114809(LOC17);
		}
		LA15: ;
		error = 0;
		sizeread = read((*data).Perrorpipe[(0)- 0], ((void*) ((&error))), 4);
		{
			NCSTRING LOC22;
			NimStringDesc* LOC23;
			if (!(sizeread == 4)) goto LA20;
			LOC22 = 0;
			LOC22 = strerror(error);
			LOC23 = 0;
			LOC23 = cstrToNimstr(LOC22);
			nosraiseOSError(LOC23);
		}
		LA20: ;
		result = pid;
		popSafePoint();
		LOC24 = 0;
		LOC24 = close((*data).Perrorpipe[(0)- 0]);
		goto BeforeRet;
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		int LOC27;
		LOC27 = 0;
		LOC27 = close((*data).Perrorpipe[(0)- 0]);
	}
	if (TMP2865.status != 0) reraiseException();
	BeforeRet: ;
	return result;
}

N_NIMCALL(processobj140402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, stringtableobj131012* env, NU8 options) {
	processobj140402* result;
	TY142022 pstdin;
	TY142022 pstdout;
	TY142022 pstderr;
	NimStringDesc* syscommand;
	TY119808* sysargsraw;
	pid_t volatile pid;
	NCSTRING* sysargs;
	TSafePoint TMP2862;
	result = 0;
	memset((void*)pstdin, 0, sizeof(pstdin));
	memset((void*)pstdout, 0, sizeof(pstdout));
	memset((void*)pstderr, 0, sizeof(pstderr));
	result = (processobj140402*) newObj((&NTI140404), sizeof(processobj140402));
	(*result).Sup.m_type = (&NTI140402);
	(*result).Exitcode = ((int) -3);
	{
		if (!!(((options &(1<<((((NU8) 4))&7)))!=0))) goto LA3;
		{
			NIM_BOOL LOC7;
			NIM_BOOL LOC8;
			int LOC9;
			int LOC11;
			int LOC13;
			NI32 LOC16;
			LOC7 = 0;
			LOC8 = 0;
			LOC9 = 0;
			LOC9 = pipe(pstdin);
			LOC8 = !((LOC9 == ((NI32) 0)));
			if (LOC8) goto LA10;
			LOC11 = 0;
			LOC11 = pipe(pstdout);
			LOC8 = !((LOC11 == ((NI32) 0)));
			LA10: ;
			LOC7 = LOC8;
			if (LOC7) goto LA12;
			LOC13 = 0;
			LOC13 = pipe(pstderr);
			LOC7 = !((LOC13 == ((NI32) 0)));
			LA12: ;
			if (!LOC7) goto LA14;
			LOC16 = 0;
			LOC16 = oslasterror_114841();
			raiseoserror_114809(LOC16);
		}
		LA14: ;
	}
	LA3: ;
	syscommand = 0;
	sysargsraw = 0;
	{
		TY208063 LOC21;
		NimStringDesc* LOC22;
		NimStringDesc* LOC23;
		NimStringDesc* LOC24;
		if (!((options &(1<<((((NU8) 2))&7)))!=0)) goto LA19;
		syscommand = copyString(((NimStringDesc*) &TMP2860));
		sysargsraw = (TY119808*) newSeq((&NTI119808), 3);
		memset((void*)LOC21, 0, sizeof(LOC21));
		LOC21[0] = copyString(syscommand);
		LOC21[1] = copyString(((NimStringDesc*) &TMP2861));
		LOC21[2] = copyString(command);
		LOC22 = 0;
		LOC22 = sysargsraw->data[0]; sysargsraw->data[0] = copyStringRC1(LOC21[0]);
		if (LOC22) nimGCunrefNoCycle(LOC22);
		LOC23 = 0;
		LOC23 = sysargsraw->data[1]; sysargsraw->data[1] = copyStringRC1(LOC21[1]);
		if (LOC23) nimGCunrefNoCycle(LOC23);
		LOC24 = 0;
		LOC24 = sysargsraw->data[2]; sysargsraw->data[2] = copyStringRC1(LOC21[2]);
		if (LOC24) nimGCunrefNoCycle(LOC24);
	}
	goto LA17;
	LA19: ;
	{
		TY197301 LOC26;
		NimStringDesc* LOC27;
		syscommand = copyString(command);
		sysargsraw = (TY119808*) newSeq((&NTI119808), 1);
		memset((void*)LOC26, 0, sizeof(LOC26));
		LOC26[0] = copyString(command);
		LOC27 = 0;
		LOC27 = sysargsraw->data[0]; sysargsraw->data[0] = copyStringRC1(LOC26[0]);
		if (LOC27) nimGCunrefNoCycle(LOC27);
		{
			NimStringDesc* arg_142230;
			NI i_142493;
			arg_142230 = 0;
			i_142493 = 0;
			{
				while (1) {
					NimStringDesc* LOC31;
					if (!(i_142493 < argsLen0)) goto LA30;
					arg_142230 = args[i_142493];
					sysargsraw = (TY119808*) incrSeq(&(sysargsraw)->Sup, sizeof(NimStringDesc*));
					LOC31 = 0;
					LOC31 = sysargsraw->data[sysargsraw->Sup.len-1]; sysargsraw->data[sysargsraw->Sup.len-1] = copyStringRC1(arg_142230);
					if (LOC31) nimGCunrefNoCycle(LOC31);
					i_142493 += 1;
				} LA30: ;
			}
		}
	}
	LA17: ;
	pid = 0;
	sysargs = alloccstringarray_13401(sysargsraw->data, sysargsraw->Sup.len);
	pushSafePoint(&TMP2862);
	TMP2862.status = _setjmp(TMP2862.context);
	if (TMP2862.status == 0) {
		NCSTRING* sysenv;
		TSafePoint TMP2864;
		{
			if (!(env == NIM_NIL)) goto LA35;
			sysenv = envtocstringarray_141855();
		}
		goto LA33;
		LA35: ;
		{
			sysenv = envtocstringarray_141806(env);
		}
		LA33: ;
		pushSafePoint(&TMP2864);
		TMP2864.status = _setjmp(TMP2864.context);
		if (TMP2864.status == 0) {
			tstartprocessdata141951 data;
			memset((void*)(&data), 0, sizeof(data));
			data.Syscommand = syscommand->data;
			data.Sysargs = sysargs;
			data.Sysenv = sysenv;
			memcpy((void*)data.Pstdin, (NIM_CONST void*)pstdin, sizeof(data.Pstdin));
			memcpy((void*)data.Pstdout, (NIM_CONST void*)pstdout, sizeof(data.Pstdout));
			memcpy((void*)data.Pstderr, (NIM_CONST void*)pstderr, sizeof(data.Pstderr));
			data.Optionpoparentstreams = ((options &(1<<((((NU8) 4))&7)))!=0);
			data.Optionpousepath = ((options &(1<<((((NU8) 1))&7)))!=0);
			data.Optionpostderrtostdout = ((options &(1<<((((NU8) 3))&7)))!=0);
			data.Workingdir = workingdir->data;
			pid = startprocessauxfork_142001((&data));
			{
				NimStringDesc* LOC43;
				if (!((options &(1<<((((NU8) 0))&7)))!=0)) goto LA41;
				LOC43 = 0;
				LOC43 = nsuJoinSep(args, argsLen0, ((NimStringDesc*) &TMP2866));
				printf("%s%s%s\012", (command)->data, (((NimStringDesc*) &TMP2866))->data, (LOC43)->data);
			}
			LA41: ;
			(*result).Id = pid;
			{
				if (!((options &(1<<((((NU8) 4))&7)))!=0)) goto LA46;
				(*result).Inhandle = ((int) 0);
				(*result).Outhandle = ((int) 1);
				{
					if (!((options &(1<<((((NU8) 3))&7)))!=0)) goto LA50;
					(*result).Errhandle = (*result).Outhandle;
				}
				goto LA48;
				LA50: ;
				{
					(*result).Errhandle = ((int) 2);
				}
				LA48: ;
			}
			goto LA44;
			LA46: ;
			{
				int LOC60;
				int LOC61;
				int LOC62;
				(*result).Inhandle = pstdin[(1)- 0];
				(*result).Outhandle = pstdout[(0)- 0];
				{
					int LOC58;
					if (!((options &(1<<((((NU8) 3))&7)))!=0)) goto LA56;
					(*result).Errhandle = (*result).Outhandle;
					LOC58 = 0;
					LOC58 = close(pstderr[(0)- 0]);
				}
				goto LA54;
				LA56: ;
				{
					(*result).Errhandle = pstderr[(0)- 0];
				}
				LA54: ;
				LOC60 = 0;
				LOC60 = close(pstderr[(1)- 0]);
				LOC61 = 0;
				LOC61 = close(pstdin[(0)- 0]);
				LOC62 = 0;
				LOC62 = close(pstdout[(1)- 0]);
			}
			LA44: ;
			popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			dealloccstringarray_13454(sysenv);
		}
		if (TMP2864.status != 0) reraiseException();
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		dealloccstringarray_13454(sysargs);
	}
	if (TMP2862.status != 0) reraiseException();
	return result;
}

N_NIMCALL(processobj140402*, startcmd_140644)(NimStringDesc* command, NU8 options) {
	processobj140402* result;
	TY260532 LOC1;
	result = 0;
	memset((void*)LOC1, 0, sizeof(LOC1));
	result = nospstartProcess(command, ((NimStringDesc*) &TMP2867), LOC1, 0, NIM_NIL, (options | 4));
	return result;
}

N_NIMCALL(void, createstream_143539)(streamobj135035** stream, int* handle, NU8 filemode) {
	FILE* f;
	filestreamobj135742* LOC7;
	f = 0;
	{
		NIM_BOOL LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = open_12611(&f, (*handle), filemode);
		if (!!(LOC3)) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_114841();
		raiseoserror_114809(LOC6);
	}
	LA4: ;
	LOC7 = 0;
	LOC7 = newfilestream_135814(f);
	unsureAsgnRef((void**) (&(*stream)), &LOC7->Sup);
}

N_NIMCALL(streamobj135035*, nospinputStream)(processobj140402* p) {
	streamobj135035* result;
	result = 0;
	{
		if (!((*p).Instream == NIM_NIL)) goto LA3;
		createstream_143539(&(*p).Instream, (&(*p).Inhandle), ((NU8) 1));
	}
	LA3: ;
	result = (*p).Instream;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(streamobj135035*, nospoutputStream)(processobj140402* p) {
	streamobj135035* result;
	result = 0;
	{
		if (!((*p).Outstream == NIM_NIL)) goto LA3;
		createstream_143539(&(*p).Outstream, (&(*p).Outhandle), ((NU8) 0));
	}
	LA3: ;
	result = (*p).Outstream;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, nospwaitForExit)(processobj140402* p, NI timeout) {
	NI result;
	result = 0;
	{
		if (!!(((*p).Exitcode == ((NI32) -3)))) goto LA3;
		result = ((NI) ((*p).Exitcode));
		goto BeforeRet;
	}
	LA3: ;
	{
		pid_t LOC7;
		NI32 LOC10;
		LOC7 = 0;
		LOC7 = waitpid((*p).Id, (&(*p).Exitcode), ((int) 0));
		if (!(LOC7 < 0)) goto LA8;
		(*p).Exitcode = ((int) -3);
		LOC10 = 0;
		LOC10 = oslasterror_114841();
		raiseoserror_114809(LOC10);
	}
	LA8: ;
	result = (NI)((NU64)(((NI) ((*p).Exitcode))) >> (NU64)(8));
	BeforeRet: ;
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
	int LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = system(command->data);
	result = ((NI) (LOC1));
	return result;
}
N_NIMCALL(void, TMP4211)(void* p, NI op) {
	TY141202* a;
	NI LOC1;
	a = (TY141202*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45671((&gch_47044.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51025)(tcell44935* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49429(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_50604)(tcell44935* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49429(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44935* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48646(src);
		incref_51025(LOC5);
	}
	LA3: ;
	{
		tcell44935* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48646((*dest));
		decref_50604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(NIM_BOOL, nosprunning)(processobj140402* p) {
	NIM_BOOL result;
	pid_t ret;
	result = 0;
	ret = waitpid((*p).Id, (&(*p).Exitcode), WNOHANG);
	{
		if (!(ret == 0)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	result = (ret == (*p).Id);
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, nospclose)(processobj140402* p) {
	int LOC13;
	int LOC14;
	int LOC15;
	{
		if (!!(((*p).Instream == NIM_NIL))) goto LA3;
		close_135093((*p).Instream);
	}
	LA3: ;
	{
		if (!!(((*p).Outstream == NIM_NIL))) goto LA7;
		close_135093((*p).Outstream);
	}
	LA7: ;
	{
		if (!!(((*p).Errstream == NIM_NIL))) goto LA11;
		close_135093((*p).Errstream);
	}
	LA11: ;
	LOC13 = 0;
	LOC13 = close((*p).Inhandle);
	LOC14 = 0;
	LOC14 = close((*p).Outhandle);
	LOC15 = 0;
	LOC15 = close((*p).Errhandle);
}

N_NIMCALL(NI, nospexecProcesses)(NimStringDesc** cmds, NI cmdsLen0, NU8 options_140800, NI n, TY203627 beforerunevent) {
	NI result;
	NU8 options;
	result = 0;
	options = (options_140800 & ~ 16);
	{
		TY141202* q;
		NI m;
		NI i;
		if (!(1 < n)) goto LA3;
		q = 0;
		q = (TY141202*) newSeq((&NTI141202), n);
		m = ((n <= cmdsLen0) ? n : cmdsLen0);
		{
			NI i_141241;
			NI HEX3Atmp_141513;
			NI res_141516;
			i_141241 = 0;
			HEX3Atmp_141513 = 0;
			HEX3Atmp_141513 = (NI64)(m - 1);
			res_141516 = 0;
			{
				while (1) {
					if (!(res_141516 <= HEX3Atmp_141513)) goto LA7;
					i_141241 = res_141516;
					{
						if (!!((beforerunevent.ClPrc == TMP4212.ClPrc && beforerunevent.ClEnv == TMP4212.ClEnv))) goto LA10;
						beforerunevent.ClEnv? beforerunevent.ClPrc(i_141241, beforerunevent.ClEnv):((TMP4213)(beforerunevent.ClPrc))(i_141241);
					}
					LA10: ;
					asgnRef((void**) (&q->data[i_141241]), startcmd_140644(cmds[i_141241], options));
					res_141516 += 1;
				} LA7: ;
			}
		}
		i = m;
		{
			while (1) {
				if (!(i <= (cmdsLen0-1))) goto LA13;
				nossleep(50);
				{
					NI r_141413;
					NI HEX3Atmp_141520;
					NI res_141523;
					r_141413 = 0;
					HEX3Atmp_141520 = 0;
					HEX3Atmp_141520 = (NI64)(n - 1);
					res_141523 = 0;
					{
						while (1) {
							if (!(res_141523 <= HEX3Atmp_141520)) goto LA16;
							r_141413 = res_141523;
							{
								NIM_BOOL LOC19;
								NI LOC22;
								LOC19 = 0;
								LOC19 = nosprunning(q->data[r_141413]);
								if (!!(LOC19)) goto LA20;
								LOC22 = 0;
								LOC22 = nospwaitForExit(q->data[r_141413], -1);
								result = ((LOC22 >= result) ? LOC22 : result);
								{
									if (!!((q->data[r_141413] == NIM_NIL))) goto LA25;
									nospclose(q->data[r_141413]);
								}
								LA25: ;
								{
									if (!!((beforerunevent.ClPrc == TMP4212.ClPrc && beforerunevent.ClEnv == TMP4212.ClEnv))) goto LA29;
									beforerunevent.ClEnv? beforerunevent.ClPrc(i, beforerunevent.ClEnv):((TMP4214)(beforerunevent.ClPrc))(i);
								}
								LA29: ;
								asgnRef((void**) (&q->data[r_141413]), startcmd_140644(cmds[i], options));
								i += 1;
								{
									if (!((cmdsLen0-1) < i)) goto LA33;
									goto LA14;
								}
								LA33: ;
							}
							LA20: ;
							res_141523 += 1;
						} LA16: ;
					}
				} LA14: ;
			} LA13: ;
		}
		{
			NI j_141466;
			NI HEX3Atmp_141526;
			NI res_141529;
			j_141466 = 0;
			HEX3Atmp_141526 = 0;
			HEX3Atmp_141526 = (NI64)(m - 1);
			res_141529 = 0;
			{
				while (1) {
					NI LOC38;
					if (!(res_141529 <= HEX3Atmp_141526)) goto LA37;
					j_141466 = res_141529;
					LOC38 = 0;
					LOC38 = nospwaitForExit(q->data[j_141466], -1);
					result = ((LOC38 >= result) ? LOC38 : result);
					{
						if (!!((q->data[j_141466] == NIM_NIL))) goto LA41;
						nospclose(q->data[j_141466]);
					}
					LA41: ;
					res_141529 += 1;
				} LA37: ;
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		{
			NI i_141497;
			NI HEX3Atmp_141532;
			NI res_141535;
			i_141497 = 0;
			HEX3Atmp_141532 = 0;
			HEX3Atmp_141532 = (cmdsLen0-1);
			res_141535 = 0;
			{
				while (1) {
					processobj140402* p;
					NI LOC51;
					if (!(res_141535 <= HEX3Atmp_141532)) goto LA46;
					i_141497 = res_141535;
					{
						if (!!((beforerunevent.ClPrc == TMP4212.ClPrc && beforerunevent.ClEnv == TMP4212.ClEnv))) goto LA49;
						beforerunevent.ClEnv? beforerunevent.ClPrc(i_141497, beforerunevent.ClEnv):((TMP4215)(beforerunevent.ClPrc))(i_141497);
					}
					LA49: ;
					p = startcmd_140644(cmds[i_141497], options);
					LOC51 = 0;
					LOC51 = nospwaitForExit(p, -1);
					result = ((LOC51 >= result) ? LOC51 : result);
					nospclose(p);
					res_141535 += 1;
				} LA46: ;
			}
		}
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osprocInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osprocDatInit)(void) {
static TNimNode* TMP2858[8];
static TNimNode TMP29[9];
NTI140402.size = sizeof(processobj140402);
NTI140402.kind = 17;
NTI140402.base = (&NTI3211);
TMP2858[0] = &TMP29[1];
TMP29[1].kind = 1;
TMP29[1].offset = offsetof(processobj140402, Inhandle);
TMP29[1].typ = (&NTI12408);
TMP29[1].name = "inHandle";
TMP2858[1] = &TMP29[2];
TMP29[2].kind = 1;
TMP29[2].offset = offsetof(processobj140402, Outhandle);
TMP29[2].typ = (&NTI12408);
TMP29[2].name = "outHandle";
TMP2858[2] = &TMP29[3];
TMP29[3].kind = 1;
TMP29[3].offset = offsetof(processobj140402, Errhandle);
TMP29[3].typ = (&NTI12408);
TMP29[3].name = "errHandle";
TMP2858[3] = &TMP29[4];
TMP29[4].kind = 1;
TMP29[4].offset = offsetof(processobj140402, Instream);
TMP29[4].typ = (&NTI135033);
TMP29[4].name = "inStream";
TMP2858[4] = &TMP29[5];
TMP29[5].kind = 1;
TMP29[5].offset = offsetof(processobj140402, Outstream);
TMP29[5].typ = (&NTI135033);
TMP29[5].name = "outStream";
TMP2858[5] = &TMP29[6];
TMP29[6].kind = 1;
TMP29[6].offset = offsetof(processobj140402, Errstream);
TMP29[6].typ = (&NTI135033);
TMP29[6].name = "errStream";
TMP2858[6] = &TMP29[7];
TMP29[7].kind = 1;
TMP29[7].offset = offsetof(processobj140402, Id);
TMP29[7].typ = (&NTI104462);
TMP29[7].name = "id";
TMP2858[7] = &TMP29[8];
TMP29[8].kind = 1;
TMP29[8].offset = offsetof(processobj140402, Exitcode);
TMP29[8].typ = (&NTI5611);
TMP29[8].name = "exitCode";
TMP29[0].len = 8; TMP29[0].kind = 2; TMP29[0].sons = &TMP2858[0];
NTI140402.node = &TMP29[0];
NTI140404.size = sizeof(processobj140402*);
NTI140404.kind = 22;
NTI140404.base = (&NTI140402);
NTI140404.marker = TMP2859;
NTI141202.size = sizeof(TY141202*);
NTI141202.kind = 24;
NTI141202.base = (&NTI140404);
NTI141202.marker = TMP4211;
}

