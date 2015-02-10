/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <sys/types.h>

#include <unistd.h>

#include <setjmp.h>

#include <spawn.h>

#include <signal.h>

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
typedef struct TY120008 TY120008;
typedef struct tcell45133 tcell45133;
typedef struct tcellseq45149 tcellseq45149;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45145 tcellset45145;
typedef struct tpagedesc45141 tpagedesc45141;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct keyvaluepairseq131010 keyvaluepairseq131010;
typedef struct keyvaluepair131008 keyvaluepair131008;
typedef struct tstartprocessdata141951 tstartprocessdata141951;
typedef struct filestreamobj135742 filestreamobj135742;
typedef struct TY141202 TY141202;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TY211607[32];
typedef int TY142025[2];
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
struct  tcell45133  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45149  {
NI Len;
NI Cap;
tcell45133** D;
};
struct  tcellset45145  {
NI Counter;
NI Max;
tpagedesc45141* Head;
tpagedesc45141** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
};
struct  tgcstat47214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45149 Zct;
tcellseq45149 Decstack;
tcellset45145 Cycleroots;
tcellseq45149 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
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
} TY15009;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15009 raiseAction;
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
TY142025 Pstdin;
TY142025 Pstdout;
TY142025 Pstderr;
TY142025 Perrorpipe;
NIM_BOOL Optionpousepath;
NIM_BOOL Optionpoparentstreams;
NIM_BOOL Optionpostderrtostdout;
};
typedef NimStringDesc* TY260532[1];
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NI idx, void* ClEnv);
void* ClEnv;
} TY203627;
typedef N_CLOSURE_PTR(void, TMP4210) (NI idx);
typedef N_CLOSURE_PTR(void, TMP4211) (NI idx);
typedef N_CLOSURE_PTR(void, TMP4212) (NI idx);
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
typedef NI TY26620[8];
struct  tpagedesc45141  {
tpagedesc45141* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  filestreamobj135742  {
  streamobj135035 Sup;
FILE* F;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
struct TY120008 {
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
N_NIMCALL(void, TMP2857)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, raiseoserror_115009)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_115041)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45133*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45133* c);
N_NOINLINE(void, addzct_48817)(tcellseq45149* s, tcell45133* c);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NCSTRING*, alloccstringarray_13601)(NimStringDesc** a, NI aLen0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NCSTRING*, envtocstringarray_141855)(void);
N_NIMCALL(void, getenvvarsc_120202)(void);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75028, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NOCONV(void*, alloc0_5817)(NI size);
N_NOCONV(void*, alloc_5801)(NI size);
N_NIMCALL(NCSTRING*, envtocstringarray_141806)(stringtableobj131012* t);
N_NIMCALL(NI, nstlen)(stringtableobj131012* t);
N_NIMCALL(pid_t, startprocessauxspawn_142001)(tstartprocessdata141951* data);
static N_INLINE(void, setcurrentdir_117207)(NimStringDesc* newdir);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, dealloccstringarray_13654)(NCSTRING* a);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, createstream_143339)(streamobj135035** stream, int* handle, NU8 filemode);
N_NIMCALL(NIM_BOOL, open_12811)(FILE** f, int filehandle, NU8 mode);
N_NIMCALL(filestreamobj135742*, newfilestream_135814)(FILE* f);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, ncpicountProcessors)(void);
N_NIMCALL(void, TMP4208)(void* p, NI op);
N_NIMCALL(processobj140402*, startcmd_140644)(NimStringDesc* command, NU8 options);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51225)(tcell45133* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48867)(tcell45133* c);
static N_INLINE(void, rtladdcycleroot_49629)(tcell45133* c);
N_NOINLINE(void, incl_45871)(tcellset45145* s, tcell45133* cell);
static N_INLINE(void, decref_50804)(tcell45133* c);
N_NIMCALL(void, nossleep)(NI milsecs);
N_NIMCALL(NIM_BOOL, nosprunning)(processobj140402* p);
N_NIMCALL(NI, nospwaitForExit)(processobj140402* p, NI timeout);
N_NIMCALL(void, nospclose)(processobj140402* p);
N_NIMCALL(void, close_135093)(streamobj135035* s);
STRING_LITERAL(TMP1791, "\'\'", 2);
static NIM_CONST TY211607 TMP1792 = {
0x00, 0x00, 0x00, 0x00, 0x20, 0xE8, 0xFF, 0x27,
0xFF, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1793, "\'", 1);
STRING_LITERAL(TMP1794, "\'\"\'\"\'", 5);
STRING_LITERAL(TMP2858, "/bin/sh", 7);
STRING_LITERAL(TMP2859, "-c", 2);
STRING_LITERAL(TMP2861, "=", 1);
STRING_LITERAL(TMP2863, " ", 1);
STRING_LITERAL(TMP2864, "", 0);
static NIM_CONST TY203627 TMP4209 = {NIM_NIL,NIM_NIL};
extern NCSTRING* environ;
extern TNimType NTI3211; /* RootObj */
TNimType NTI140402; /* ProcessObj */
extern TNimType NTI12608; /* FileHandle */
extern TNimType NTI135033; /* Stream */
extern TNimType NTI104462; /* TPid */
extern TNimType NTI5611; /* cint */
TNimType NTI140404; /* Process */
extern TNimType NTI120008; /* seq[string] */
extern tgcheap47216 gch_47244;
extern TSafePoint* exchandler_16443;
extern TY120008* environment_120009;
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
		result = copyString(((NimStringDesc*) &TMP1791));
		goto BeforeRet;
	}
	LA3: ;
	safe = allcharsinset_96479(s, TMP1792);
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
		LOC11 = nsuReplaceStr(s, ((NimStringDesc*) &TMP1793), ((NimStringDesc*) &TMP1794));
		LOC10 = rawNewString(LOC11->Sup.len + 2);
appendString(LOC10, ((NimStringDesc*) &TMP1793));
appendString(LOC10, LOC11);
appendString(LOC10, ((NimStringDesc*) &TMP1793));
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
N_NIMCALL(void, TMP2857)(void* p, NI op) {
	processobj140402* a;
	a = (processobj140402*)p;
	nimGCvisit((void*)(*a).Instream, op);
	nimGCvisit((void*)(*a).Outstream, op);
	nimGCvisit((void*)(*a).Errstream, op);
}

static N_INLINE(tcell45133*, usrtocell_48846)(void* usr) {
	tcell45133* result;
	result = 0;
	result = ((tcell45133*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45133))))));
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45133* c) {
	addzct_48817((&gch_47244.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45133* c;
	c = usrtocell_48846(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	LA3: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16443;
	exchandler_16443 = s;
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
		getenvvarsc_120202();
		{
			NI i_141895;
			NI HEX3Atmp_141897;
			NI res_141899;
			i_141895 = 0;
			HEX3Atmp_141897 = 0;
			HEX3Atmp_141897 = (environment_120009->Sup.len-1);
			res_141899 = 0;
			{
				while (1) {
					NI p_141901;
					if (!(res_141899 <= HEX3Atmp_141897)) goto LA4;
					i_141895 = res_141899;
					p_141901 = nsuFindChar(environment_120009->data[i_141895], 61, 0);
					key_141859 = copyStrLast(environment_120009->data[i_141895], 0, (NI64)(p_141901 - 1));
					val_141860 = copyStr(environment_120009->data[i_141895], (NI64)(p_141901 + 1));
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
		getenvvarsc_120202();
		{
			NI i_141914;
			NI HEX3Atmp_141916;
			NI res_141918;
			i_141914 = 0;
			HEX3Atmp_141916 = 0;
			HEX3Atmp_141916 = (environment_120009->Sup.len-1);
			res_141918 = 0;
			{
				while (1) {
					NI p_141920;
					NimStringDesc* x;
					NimStringDesc* LOC10;
					void* LOC11;
					if (!(res_141918 <= HEX3Atmp_141916)) goto LA9;
					i_141914 = res_141918;
					p_141920 = nsuFindChar(environment_120009->data[i_141914], 61, 0);
					key_141875 = copyStrLast(environment_120009->data[i_141914], 0, (NI64)(p_141920 - 1));
					val_141876 = copyStr(environment_120009->data[i_141914], (NI64)(p_141920 + 1));
					LOC10 = 0;
					LOC10 = rawNewString(key_141875->Sup.len + val_141876->Sup.len + 1);
appendString(LOC10, key_141875);
appendString(LOC10, ((NimStringDesc*) &TMP2861));
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
appendString(LOC11, ((NimStringDesc*) &TMP2861));
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

static N_INLINE(void, setcurrentdir_117207)(NimStringDesc* newdir) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = chdir(newdir->data);
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_115041();
		raiseoserror_115009(LOC6);
	}
	LA4: ;
}

N_NIMCALL(pid_t, startprocessauxspawn_142001)(tstartprocessdata141951* data) {
	pid_t result;
	posix_spawnattr_t attr;
	posix_spawn_file_actions_t fops;
	sigset_t mask;
	int res;
	pid_t pid;
	int LOC98;
	int LOC99;
	result = 0;
	memset((void*)(&attr), 0, sizeof(attr));
	memset((void*)(&fops), 0, sizeof(fops));
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = posix_spawn_file_actions_init((&fops));
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_115041();
		raiseoserror_115009(LOC6);
	}
	LA4: ;
	{
		int LOC9;
		NI32 LOC12;
		LOC9 = 0;
		LOC9 = posix_spawnattr_init((&attr));
		if (!!((LOC9 == ((NI32) 0)))) goto LA10;
		LOC12 = 0;
		LOC12 = oslasterror_115041();
		raiseoserror_115009(LOC12);
	}
	LA10: ;
	memset((void*)(&mask), 0, sizeof(mask));
	{
		int LOC15;
		NI32 LOC18;
		LOC15 = 0;
		LOC15 = sigemptyset((&mask));
		if (!!((LOC15 == ((NI32) 0)))) goto LA16;
		LOC18 = 0;
		LOC18 = oslasterror_115041();
		raiseoserror_115009(LOC18);
	}
	LA16: ;
	{
		int LOC21;
		NI32 LOC24;
		LOC21 = 0;
		LOC21 = posix_spawnattr_setsigmask((&attr), (&mask));
		if (!!((LOC21 == ((NI32) 0)))) goto LA22;
		LOC24 = 0;
		LOC24 = oslasterror_115041();
		raiseoserror_115009(LOC24);
	}
	LA22: ;
	{
		int LOC27;
		NI32 LOC30;
		LOC27 = 0;
		LOC27 = posix_spawnattr_setpgroup((&attr), 0);
		if (!!((LOC27 == ((NI32) 0)))) goto LA28;
		LOC30 = 0;
		LOC30 = oslasterror_115041();
		raiseoserror_115009(LOC30);
	}
	LA28: ;
	{
		int LOC33;
		NI32 LOC36;
		LOC33 = 0;
		LOC33 = posix_spawnattr_setflags((&attr), (NI32)((NI32)(((int) 0) | POSIX_SPAWN_SETSIGMASK) | POSIX_SPAWN_SETPGROUP));
		if (!!((LOC33 == ((NI32) 0)))) goto LA34;
		LOC36 = 0;
		LOC36 = oslasterror_115041();
		raiseoserror_115009(LOC36);
	}
	LA34: ;
	{
		if (!!((*data).Optionpoparentstreams)) goto LA39;
		{
			int LOC43;
			NI32 LOC46;
			LOC43 = 0;
			LOC43 = posix_spawn_file_actions_addclose((&fops), (*data).Pstdin[(1)- 0]);
			if (!!((LOC43 == ((NI32) 0)))) goto LA44;
			LOC46 = 0;
			LOC46 = oslasterror_115041();
			raiseoserror_115009(LOC46);
		}
		LA44: ;
		{
			int LOC49;
			NI32 LOC52;
			LOC49 = 0;
			LOC49 = posix_spawn_file_actions_adddup2((&fops), (*data).Pstdin[(0)- 0], ((int) 0));
			if (!!((LOC49 == ((NI32) 0)))) goto LA50;
			LOC52 = 0;
			LOC52 = oslasterror_115041();
			raiseoserror_115009(LOC52);
		}
		LA50: ;
		{
			int LOC55;
			NI32 LOC58;
			LOC55 = 0;
			LOC55 = posix_spawn_file_actions_addclose((&fops), (*data).Pstdout[(0)- 0]);
			if (!!((LOC55 == ((NI32) 0)))) goto LA56;
			LOC58 = 0;
			LOC58 = oslasterror_115041();
			raiseoserror_115009(LOC58);
		}
		LA56: ;
		{
			int LOC61;
			NI32 LOC64;
			LOC61 = 0;
			LOC61 = posix_spawn_file_actions_adddup2((&fops), (*data).Pstdout[(1)- 0], ((int) 1));
			if (!!((LOC61 == ((NI32) 0)))) goto LA62;
			LOC64 = 0;
			LOC64 = oslasterror_115041();
			raiseoserror_115009(LOC64);
		}
		LA62: ;
		{
			int LOC67;
			NI32 LOC70;
			LOC67 = 0;
			LOC67 = posix_spawn_file_actions_addclose((&fops), (*data).Pstderr[(0)- 0]);
			if (!!((LOC67 == ((NI32) 0)))) goto LA68;
			LOC70 = 0;
			LOC70 = oslasterror_115041();
			raiseoserror_115009(LOC70);
		}
		LA68: ;
		{
			if (!(*data).Optionpostderrtostdout) goto LA73;
			{
				int LOC77;
				NI32 LOC80;
				LOC77 = 0;
				LOC77 = posix_spawn_file_actions_adddup2((&fops), (*data).Pstdout[(1)- 0], ((int) 2));
				if (!!((LOC77 == ((NI32) 0)))) goto LA78;
				LOC80 = 0;
				LOC80 = oslasterror_115041();
				raiseoserror_115009(LOC80);
			}
			LA78: ;
		}
		goto LA71;
		LA73: ;
		{
			{
				int LOC84;
				NI32 LOC87;
				LOC84 = 0;
				LOC84 = posix_spawn_file_actions_adddup2((&fops), (*data).Pstderr[(1)- 0], ((int) 2));
				if (!!((LOC84 == ((NI32) 0)))) goto LA85;
				LOC87 = 0;
				LOC87 = oslasterror_115041();
				raiseoserror_115009(LOC87);
			}
			LA85: ;
		}
		LA71: ;
	}
	LA39: ;
	res = 0;
	{
		NimStringDesc* LOC92;
		if (!(0 < strlen((*data).Workingdir))) goto LA90;
		LOC92 = 0;
		LOC92 = cstrToNimstr((*data).Workingdir);
		setcurrentdir_117207(LOC92);
	}
	LA90: ;
	pid = 0;
	{
		if (!(*data).Optionpousepath) goto LA95;
		res = posix_spawnp((&pid), (*data).Syscommand, (&fops), (&attr), (*data).Sysargs, (*data).Sysenv);
	}
	goto LA93;
	LA95: ;
	{
		res = posix_spawn((&pid), (*data).Syscommand, (&fops), (&attr), (*data).Sysargs, (*data).Sysenv);
	}
	LA93: ;
	LOC98 = 0;
	LOC98 = posix_spawn_file_actions_destroy((&fops));
	LOC99 = 0;
	LOC99 = posix_spawnattr_destroy((&attr));
	{
		NI32 LOC104;
		if (!!((res == ((NI32) 0)))) goto LA102;
		LOC104 = 0;
		LOC104 = oslasterror_115041();
		raiseoserror_115009(LOC104);
	}
	LA102: ;
	result = pid;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16443 = (*exchandler_16443).prev;
}

N_NIMCALL(processobj140402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, stringtableobj131012* env, NU8 options) {
	processobj140402* result;
	TY142025 pstdin;
	TY142025 pstdout;
	TY142025 pstderr;
	NimStringDesc* syscommand;
	TY120008* sysargsraw;
	pid_t volatile pid;
	NCSTRING* sysargs;
	TSafePoint TMP2860;
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
			LOC16 = oslasterror_115041();
			raiseoserror_115009(LOC16);
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
		syscommand = copyString(((NimStringDesc*) &TMP2858));
		sysargsraw = (TY120008*) newSeq((&NTI120008), 3);
		memset((void*)LOC21, 0, sizeof(LOC21));
		LOC21[0] = copyString(syscommand);
		LOC21[1] = copyString(((NimStringDesc*) &TMP2859));
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
		sysargsraw = (TY120008*) newSeq((&NTI120008), 1);
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
					sysargsraw = (TY120008*) incrSeq(&(sysargsraw)->Sup, sizeof(NimStringDesc*));
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
	sysargs = alloccstringarray_13601(sysargsraw->data, sysargsraw->Sup.len);
	pushSafePoint(&TMP2860);
	TMP2860.status = _setjmp(TMP2860.context);
	if (TMP2860.status == 0) {
		NCSTRING* sysenv;
		TSafePoint TMP2862;
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
		pushSafePoint(&TMP2862);
		TMP2862.status = _setjmp(TMP2862.context);
		if (TMP2862.status == 0) {
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
			pid = startprocessauxspawn_142001((&data));
			{
				NimStringDesc* LOC43;
				if (!((options &(1<<((((NU8) 0))&7)))!=0)) goto LA41;
				LOC43 = 0;
				LOC43 = nsuJoinSep(args, argsLen0, ((NimStringDesc*) &TMP2863));
				printf("%s%s%s\012", (command)->data, (((NimStringDesc*) &TMP2863))->data, (LOC43)->data);
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
			dealloccstringarray_13654(sysenv);
		}
		if (TMP2862.status != 0) reraiseException();
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		dealloccstringarray_13654(sysargs);
	}
	if (TMP2860.status != 0) reraiseException();
	return result;
}

N_NIMCALL(processobj140402*, startcmd_140644)(NimStringDesc* command, NU8 options) {
	processobj140402* result;
	TY260532 LOC1;
	result = 0;
	memset((void*)LOC1, 0, sizeof(LOC1));
	result = nospstartProcess(command, ((NimStringDesc*) &TMP2864), LOC1, 0, NIM_NIL, (options | 4));
	return result;
}

N_NIMCALL(void, createstream_143339)(streamobj135035** stream, int* handle, NU8 filemode) {
	FILE* f;
	filestreamobj135742* LOC7;
	f = 0;
	{
		NIM_BOOL LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = open_12811(&f, (*handle), filemode);
		if (!!(LOC3)) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_115041();
		raiseoserror_115009(LOC6);
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
		createstream_143339(&(*p).Instream, (&(*p).Inhandle), ((NU8) 1));
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
		createstream_143339(&(*p).Outstream, (&(*p).Outhandle), ((NU8) 0));
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
		LOC10 = oslasterror_115041();
		raiseoserror_115009(LOC10);
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
N_NIMCALL(void, TMP4208)(void* p, NI op) {
	TY141202* a;
	NI LOC1;
	a = (TY141202*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(NIM_BOOL, canbecycleroot_48867)(tcell45133* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49629)(tcell45133* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45871((&gch_47244.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51225)(tcell45133* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49629(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_50804)(tcell45133* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49629(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell45133* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48846(src);
		incref_51225(LOC5);
	}
	LA3: ;
	{
		tcell45133* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48846((*dest));
		decref_50804(LOC10);
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
						if (!!((beforerunevent.ClPrc == TMP4209.ClPrc && beforerunevent.ClEnv == TMP4209.ClEnv))) goto LA10;
						beforerunevent.ClEnv? beforerunevent.ClPrc(i_141241, beforerunevent.ClEnv):((TMP4210)(beforerunevent.ClPrc))(i_141241);
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
									if (!!((beforerunevent.ClPrc == TMP4209.ClPrc && beforerunevent.ClEnv == TMP4209.ClEnv))) goto LA29;
									beforerunevent.ClEnv? beforerunevent.ClPrc(i, beforerunevent.ClEnv):((TMP4211)(beforerunevent.ClPrc))(i);
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
						if (!!((beforerunevent.ClPrc == TMP4209.ClPrc && beforerunevent.ClEnv == TMP4209.ClEnv))) goto LA49;
						beforerunevent.ClEnv? beforerunevent.ClPrc(i_141497, beforerunevent.ClEnv):((TMP4212)(beforerunevent.ClPrc))(i_141497);
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
static TNimNode* TMP2856[8];
static TNimNode TMP29[9];
NTI140402.size = sizeof(processobj140402);
NTI140402.kind = 17;
NTI140402.base = (&NTI3211);
TMP2856[0] = &TMP29[1];
TMP29[1].kind = 1;
TMP29[1].offset = offsetof(processobj140402, Inhandle);
TMP29[1].typ = (&NTI12608);
TMP29[1].name = "inHandle";
TMP2856[1] = &TMP29[2];
TMP29[2].kind = 1;
TMP29[2].offset = offsetof(processobj140402, Outhandle);
TMP29[2].typ = (&NTI12608);
TMP29[2].name = "outHandle";
TMP2856[2] = &TMP29[3];
TMP29[3].kind = 1;
TMP29[3].offset = offsetof(processobj140402, Errhandle);
TMP29[3].typ = (&NTI12608);
TMP29[3].name = "errHandle";
TMP2856[3] = &TMP29[4];
TMP29[4].kind = 1;
TMP29[4].offset = offsetof(processobj140402, Instream);
TMP29[4].typ = (&NTI135033);
TMP29[4].name = "inStream";
TMP2856[4] = &TMP29[5];
TMP29[5].kind = 1;
TMP29[5].offset = offsetof(processobj140402, Outstream);
TMP29[5].typ = (&NTI135033);
TMP29[5].name = "outStream";
TMP2856[5] = &TMP29[6];
TMP29[6].kind = 1;
TMP29[6].offset = offsetof(processobj140402, Errstream);
TMP29[6].typ = (&NTI135033);
TMP29[6].name = "errStream";
TMP2856[6] = &TMP29[7];
TMP29[7].kind = 1;
TMP29[7].offset = offsetof(processobj140402, Id);
TMP29[7].typ = (&NTI104462);
TMP29[7].name = "id";
TMP2856[7] = &TMP29[8];
TMP29[8].kind = 1;
TMP29[8].offset = offsetof(processobj140402, Exitcode);
TMP29[8].typ = (&NTI5611);
TMP29[8].name = "exitCode";
TMP29[0].len = 8; TMP29[0].kind = 2; TMP29[0].sons = &TMP2856[0];
NTI140402.node = &TMP29[0];
NTI140404.size = sizeof(processobj140402*);
NTI140404.kind = 22;
NTI140404.base = (&NTI140402);
NTI140404.marker = TMP2857;
NTI141202.size = sizeof(TY141202*);
NTI141202.kind = 24;
NTI141202.base = (&NTI140404);
NTI141202.marker = TMP4208;
}

