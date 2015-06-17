/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
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
typedef struct Processobj143402 Processobj143402;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj138027 Streamobj138027;
typedef struct TY122208 TY122208;
typedef struct Tcell46547 Tcell46547;
typedef struct Tcellseq46563 Tcellseq46563;
typedef struct Tgcheap48416 Tgcheap48416;
typedef struct Tcellset46559 Tcellset46559;
typedef struct Tpagedesc46555 Tpagedesc46555;
typedef struct Tmemregion28410 Tmemregion28410;
typedef struct Tsmallchunk27640 Tsmallchunk27640;
typedef struct Tllchunk28404 Tllchunk28404;
typedef struct Tbigchunk27642 Tbigchunk27642;
typedef struct Tintset27617 Tintset27617;
typedef struct Ttrunk27613 Ttrunk27613;
typedef struct Tavlnode28408 Tavlnode28408;
typedef struct Tgcstat48414 Tgcstat48414;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct Keyvaluepair134008 Keyvaluepair134008;
typedef struct Tstartprocessdata144948 Tstartprocessdata144948;
typedef struct Filestreamobj138692 Filestreamobj138692;
typedef struct TY144201 TY144201;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TY178407[32];
typedef int TY145026[2];
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
struct  Processobj143402  {
  TNimObject Sup;
int inhandle;
int outhandle;
int errhandle;
Streamobj138027* instream;
Streamobj138027* outstream;
Streamobj138027* errstream;
pid_t id;
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
typedef NimStringDesc* TY176061[3];
struct  Tcell46547  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46563  {
NI len;
NI cap;
Tcell46547** d;
};
struct  Tcellset46559  {
NI counter;
NI max;
Tpagedesc46555* head;
Tpagedesc46555** data;
};
typedef Tsmallchunk27640* TY28422[512];
typedef Ttrunk27613* Ttrunkbuckets27615[256];
struct  Tintset27617  {
Ttrunkbuckets27615 data;
};
struct  Tmemregion28410  {
NI minlargeobj;
NI maxlargeobj;
TY28422 freesmallchunks;
Tllchunk28404* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27642* freechunkslist;
Tintset27617 chunkstarts;
Tavlnode28408* root;
Tavlnode28408* deleted;
Tavlnode28408* last;
Tavlnode28408* freeavlnodes;
};
struct  Tgcstat48414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48416  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46563 zct;
Tcellseq46563 decstack;
Tcellset46559 cycleroots;
Tcellseq46563 tempstack;
NI recgclock;
Tmemregion28410 region;
Tgcstat48414 stat;
};
typedef NimStringDesc* TY164566[1];
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
} TY15809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15809 raiseAction;
};
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
struct Keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tstartprocessdata144948  {
NCSTRING syscommand;
NCSTRING* sysargs;
NCSTRING* sysenv;
NCSTRING workingdir;
TY145026 pstdin;
TY145026 pstdout;
TY145026 pstderr;
TY145026 perrorpipe;
NIM_BOOL optionpousepath;
NIM_BOOL optionpoparentstreams;
NIM_BOOL optionpostderrtostdout;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NI idx, void* ClEnv);
void* ClEnv;
} TY171642;
typedef N_CLOSURE_PTR(void, TMP4336) (NI idx);
typedef NimStringDesc* TY218714[1];
typedef N_CLOSURE_PTR(void, TMP4338) (NI idx);
typedef N_CLOSURE_PTR(void, TMP4339) (NI idx);
typedef N_NIMCALL_PTR(void, TY138028) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY138032) (Streamobj138027* s);
typedef N_NIMCALL_PTR(void, TY138036) (Streamobj138027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY138041) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NI, TY138045) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138051) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138057) (Streamobj138027* s);
struct  Streamobj138027  {
  TNimObject Sup;
TY138028 closeimpl;
TY138032 atendimpl;
TY138036 setpositionimpl;
TY138041 getpositionimpl;
TY138045 readdataimpl;
TY138051 writedataimpl;
TY138057 flushimpl;
};
typedef NI TY27620[8];
struct  Tpagedesc46555  {
Tpagedesc46555* next;
NI key;
TY27620 bits;
};
struct  Tbasechunk27638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27640  {
  Tbasechunk27638 Sup;
Tsmallchunk27640* next;
Tsmallchunk27640* prev;
Tfreecell27630* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28404  {
NI size;
NI acc;
Tllchunk28404* next;
};
struct  Tbigchunk27642  {
  Tbasechunk27638 Sup;
Tbigchunk27642* next;
Tbigchunk27642* prev;
NI align;
NF data;
};
struct  Ttrunk27613  {
Ttrunk27613* next;
NI key;
TY27620 bits;
};
typedef Tavlnode28408* TY28414[2];
struct  Tavlnode28408  {
TY28414 link;
NI key;
NI upperbound;
NI level;
};
struct  Filestreamobj138692  {
  Streamobj138027 Sup;
FILE* f;
};
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
struct TY122208 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY144201 {
  TGenericSeq Sup;
  Processobj143402* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  Keyvaluepair134008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, nospquoteShellPosix)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, allcharsinset_98459)(NimStringDesc* s, TY178407 theset);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2886)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, raiseoserror_117009)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_117033)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46547* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46563* s, Tcell46547* c);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NCSTRING*, alloccstringarray_14201)(NimStringDesc** a, NI aLen0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NCSTRING*, envtocstringarray_144854)(void);
N_NIMCALL(void, getenvvarsc_122404)(void);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76443, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NOCONV(void*, alloc0_6017)(NI size);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(NCSTRING*, envtocstringarray_144806)(Stringtableobj134012* t);
N_NIMCALL(NI, nstlen)(Stringtableobj134012* t);
N_NIMCALL(pid_t, startprocessauxspawn_145001)(Tstartprocessdata144948* data);
static N_INLINE(void, setcurrentdir_119207)(NimStringDesc* newdir);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, dealloccstringarray_14450)(NCSTRING* a);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, createstream_146441)(Streamobj138027** stream, int* handle, NU8 filemode);
N_NIMCALL(NIM_BOOL, open_13411)(FILE** f, int filehandle, NU8 mode);
N_NIMCALL(Filestreamobj138692*, newfilestream_138759)(FILE* f);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, ncpicountProcessors)(void);
N_NIMCALL(void, TMP4334)(void* p, NI op);
N_NIMCALL(Processobj143402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj134012* env, NU8 options);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52422)(Tcell46547* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50067)(Tcell46547* c);
static N_INLINE(void, rtladdcycleroot_50823)(Tcell46547* c);
N_NOINLINE(void, incl_47265)(Tcellset46559* s, Tcell46547* cell);
static N_INLINE(void, decref_52004)(Tcell46547* c);
N_NIMCALL(void, nossleep)(NI milsecs);
N_NIMCALL(NIM_BOOL, nosprunning)(Processobj143402* p);
N_NIMCALL(NI, nospwaitForExit)(Processobj143402* p, NI timeout);
N_NIMCALL(void, nospclose)(Processobj143402* p);
N_NIMCALL(void, close_138085)(Streamobj138027* s);
STRING_LITERAL(TMP1764, "\'\'", 2);
static NIM_CONST TY178407 TMP1765 = {
0x00, 0x00, 0x00, 0x00, 0x20, 0xE8, 0xFF, 0x27,
0xFF, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1766, "\'", 1);
STRING_LITERAL(TMP1767, "\'\"\'\"\'", 5);
STRING_LITERAL(TMP2887, "/bin/sh", 7);
STRING_LITERAL(TMP2888, "-c", 2);
STRING_LITERAL(TMP2890, "=", 1);
STRING_LITERAL(TMP2892, " ", 1);
static NIM_CONST TY171642 TMP4335 = {NIM_NIL,NIM_NIL};
STRING_LITERAL(TMP4337, "", 0);
extern NCSTRING* environ;
extern TNimType NTI3411; /* RootObj */
TNimType NTI143402; /* ProcessObj */
extern TNimType NTI13208; /* FileHandle */
extern TNimType NTI138025; /* Stream */
extern TNimType NTI107285; /* TPid */
extern TNimType NTI5811; /* cint */
TNimType NTI143404; /* Process */
extern TNimType NTI122208; /* seq[string] */
extern Tgcheap48416 gch_48444;
extern TSafePoint* exchandler_17243;
extern TY122208* environment_122209;
TNimType NTI144201; /* seq[Process] */

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, nospquoteShellPosix)(NimStringDesc* s) {
	NimStringDesc* result;
	NIM_BOOL safe;
{	result = 0;
	{
		if (!((s ? s->Sup.len : 0) == ((NI) 0))) goto LA3;
		result = copyString(((NimStringDesc*) &TMP1764));
		goto BeforeRet;
	}
	LA3: ;
	safe = allcharsinset_98459(s, TMP1765);
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
		LOC11 = nsuReplaceStr(s, ((NimStringDesc*) &TMP1766), ((NimStringDesc*) &TMP1767));
		LOC10 = rawNewString(LOC11->Sup.len + 2);
appendString(LOC10, ((NimStringDesc*) &TMP1766));
appendString(LOC10, LOC11);
appendString(LOC10, ((NimStringDesc*) &TMP1766));
		result = LOC10;
		goto BeforeRet;
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nospquoteShell)(NimStringDesc* s) {
	NimStringDesc* result;
{	result = 0;
	result = nospquoteShellPosix(s);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP2886)(void* p, NI op) {
	Processobj143402* a;
	a = (Processobj143402*)p;
	nimGCvisit((void*)(*a).instream, op);
	nimGCvisit((void*)(*a).outstream, op);
	nimGCvisit((void*)(*a).errstream, op);
}

static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr) {
	Tcell46547* result;
	result = 0;
	result = ((Tcell46547*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46547))))));
	return result;
}

static N_INLINE(void, rtladdzct_51604)(Tcell46547* c) {
	addzct_50017((&gch_48444.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46547* c;
	c = usrtocell_50046(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51604(c);
	}
	LA3: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17243;
	exchandler_17243 = s;
}

N_NIMCALL(NCSTRING*, envtocstringarray_144854)(void) {
	NCSTRING* result;
	NI counter;
	void* LOC5;
	NI i;
	result = 0;
	counter = ((NI) 0);
	{
		NimStringDesc* key_144858;
		NimStringDesc* val_144859;
		key_144858 = 0;
		val_144859 = 0;
		getenvvarsc_122404();
		{
			NI i_144888;
			NI HEX3Atmp_144890;
			NI res_144892;
			i_144888 = 0;
			HEX3Atmp_144890 = 0;
			HEX3Atmp_144890 = (environment_122209 ? (environment_122209->Sup.len-1) : -1);
			res_144892 = ((NI) 0);
			{
				while (1) {
					NI p_144896;
					if (!(res_144892 <= HEX3Atmp_144890)) goto LA4;
					i_144888 = res_144892;
					p_144896 = nsuFindChar(environment_122209->data[i_144888], 61, ((NI) 0));
					key_144858 = copyStrLast(environment_122209->data[i_144888], ((NI) 0), (NI)(p_144896 - ((NI) 1)));
					val_144859 = copyStr(environment_122209->data[i_144888], (NI)(p_144896 + ((NI) 1)));
					counter += ((NI) 1);
					res_144892 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	LOC5 = 0;
	LOC5 = alloc0_6017(((NI) ((NI)((NI)(counter + ((NI) 1)) * ((NI) 8)))));
	result = ((NCSTRING*) (LOC5));
	i = ((NI) 0);
	{
		NimStringDesc* key_144871;
		NimStringDesc* val_144872;
		key_144871 = 0;
		val_144872 = 0;
		getenvvarsc_122404();
		{
			NI i_144909;
			NI HEX3Atmp_144911;
			NI res_144913;
			i_144909 = 0;
			HEX3Atmp_144911 = 0;
			HEX3Atmp_144911 = (environment_122209 ? (environment_122209->Sup.len-1) : -1);
			res_144913 = ((NI) 0);
			{
				while (1) {
					NI p_144917;
					NimStringDesc* x;
					NimStringDesc* LOC10;
					void* LOC11;
					if (!(res_144913 <= HEX3Atmp_144911)) goto LA9;
					i_144909 = res_144913;
					p_144917 = nsuFindChar(environment_122209->data[i_144909], 61, ((NI) 0));
					key_144871 = copyStrLast(environment_122209->data[i_144909], ((NI) 0), (NI)(p_144917 - ((NI) 1)));
					val_144872 = copyStr(environment_122209->data[i_144909], (NI)(p_144917 + ((NI) 1)));
					LOC10 = 0;
					LOC10 = rawNewString(key_144871->Sup.len + val_144872->Sup.len + 1);
appendString(LOC10, key_144871);
appendString(LOC10, ((NimStringDesc*) &TMP2890));
appendString(LOC10, val_144872);
					x = LOC10;
					LOC11 = 0;
					LOC11 = alloc_6001(((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
					result[(i)- 0] = ((NCSTRING) (LOC11));
					memcpy(((void*) (result[(i)- 0])), ((void*) ((&x->data[((NI) 0)]))), ((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
					i += ((NI) 1);
					res_144913 += ((NI) 1);
				} LA9: ;
			}
		}
	}
	return result;
}

N_NIMCALL(NCSTRING*, envtocstringarray_144806)(Stringtableobj134012* t) {
	NCSTRING* result;
	NI LOC1;
	void* LOC2;
	NI i;
	result = 0;
	LOC1 = 0;
	LOC1 = nstlen(t);
	LOC2 = 0;
	LOC2 = alloc0_6017(((NI) ((NI)((NI)(LOC1 + ((NI) 1)) * ((NI) 8)))));
	result = ((NCSTRING*) (LOC2));
	i = ((NI) 0);
	{
		NimStringDesc* key_144812;
		NimStringDesc* val_144813;
		key_144812 = 0;
		val_144813 = 0;
		{
			NI h_144832;
			NI HEX3Atmp_144834;
			NI res_144836;
			h_144832 = 0;
			HEX3Atmp_144834 = 0;
			HEX3Atmp_144834 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
			res_144836 = ((NI) 0);
			{
				while (1) {
					if (!(res_144836 <= HEX3Atmp_144834)) goto LA6;
					h_144832 = res_144836;
					{
						NimStringDesc* x;
						NimStringDesc* LOC11;
						void* LOC12;
						if (!!((*t).data->data[h_144832].Field0 == 0)) goto LA9;
						key_144812 = (*t).data->data[h_144832].Field0;
						val_144813 = (*t).data->data[h_144832].Field1;
						LOC11 = 0;
						LOC11 = rawNewString(key_144812->Sup.len + val_144813->Sup.len + 1);
appendString(LOC11, key_144812);
appendString(LOC11, ((NimStringDesc*) &TMP2890));
appendString(LOC11, val_144813);
						x = LOC11;
						LOC12 = 0;
						LOC12 = alloc_6001(((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
						result[(i)- 0] = ((NCSTRING) (LOC12));
						memcpy(((void*) (result[(i)- 0])), ((void*) ((&x->data[((NI) 0)]))), ((NI) ((NI)((x ? x->Sup.len : 0) + ((NI) 1)))));
						i += ((NI) 1);
					}
					LA9: ;
					res_144836 += ((NI) 1);
				} LA6: ;
			}
		}
	}
	return result;
}

static N_INLINE(void, setcurrentdir_119207)(NimStringDesc* newdir) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = chdir(newdir->data);
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_117033();
		raiseoserror_117009(LOC6);
	}
	LA4: ;
}

N_NIMCALL(pid_t, startprocessauxspawn_145001)(Tstartprocessdata144948* data) {
	pid_t result;
	posix_spawnattr_t attr;
	posix_spawn_file_actions_t fops;
	sigset_t mask;
	int res;
	pid_t pid;
	int LOC98;
	int LOC99;
{	result = 0;
	memset((void*)(&attr), 0, sizeof(attr));
	memset((void*)(&fops), 0, sizeof(fops));
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = posix_spawn_file_actions_init((&fops));
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_117033();
		raiseoserror_117009(LOC6);
	}
	LA4: ;
	{
		int LOC9;
		NI32 LOC12;
		LOC9 = 0;
		LOC9 = posix_spawnattr_init((&attr));
		if (!!((LOC9 == ((NI32) 0)))) goto LA10;
		LOC12 = 0;
		LOC12 = oslasterror_117033();
		raiseoserror_117009(LOC12);
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
		LOC18 = oslasterror_117033();
		raiseoserror_117009(LOC18);
	}
	LA16: ;
	{
		int LOC21;
		NI32 LOC24;
		LOC21 = 0;
		LOC21 = posix_spawnattr_setsigmask((&attr), (&mask));
		if (!!((LOC21 == ((NI32) 0)))) goto LA22;
		LOC24 = 0;
		LOC24 = oslasterror_117033();
		raiseoserror_117009(LOC24);
	}
	LA22: ;
	{
		int LOC27;
		NI32 LOC30;
		LOC27 = 0;
		LOC27 = posix_spawnattr_setpgroup((&attr), ((pid_t) 0));
		if (!!((LOC27 == ((NI32) 0)))) goto LA28;
		LOC30 = 0;
		LOC30 = oslasterror_117033();
		raiseoserror_117009(LOC30);
	}
	LA28: ;
	{
		int LOC33;
		NI32 LOC36;
		LOC33 = 0;
		LOC33 = posix_spawnattr_setflags((&attr), (NI32)((NI32)(((int) 0) | POSIX_SPAWN_SETSIGMASK) | POSIX_SPAWN_SETPGROUP));
		if (!!((LOC33 == ((NI32) 0)))) goto LA34;
		LOC36 = 0;
		LOC36 = oslasterror_117033();
		raiseoserror_117009(LOC36);
	}
	LA34: ;
	{
		if (!!((*data).optionpoparentstreams)) goto LA39;
		{
			int LOC43;
			NI32 LOC46;
			LOC43 = 0;
			LOC43 = posix_spawn_file_actions_addclose((&fops), (*data).pstdin[(((NI) 1))- 0]);
			if (!!((LOC43 == ((NI32) 0)))) goto LA44;
			LOC46 = 0;
			LOC46 = oslasterror_117033();
			raiseoserror_117009(LOC46);
		}
		LA44: ;
		{
			int LOC49;
			NI32 LOC52;
			LOC49 = 0;
			LOC49 = posix_spawn_file_actions_adddup2((&fops), (*data).pstdin[(((NI) 0))- 0], ((int) 0));
			if (!!((LOC49 == ((NI32) 0)))) goto LA50;
			LOC52 = 0;
			LOC52 = oslasterror_117033();
			raiseoserror_117009(LOC52);
		}
		LA50: ;
		{
			int LOC55;
			NI32 LOC58;
			LOC55 = 0;
			LOC55 = posix_spawn_file_actions_addclose((&fops), (*data).pstdout[(((NI) 0))- 0]);
			if (!!((LOC55 == ((NI32) 0)))) goto LA56;
			LOC58 = 0;
			LOC58 = oslasterror_117033();
			raiseoserror_117009(LOC58);
		}
		LA56: ;
		{
			int LOC61;
			NI32 LOC64;
			LOC61 = 0;
			LOC61 = posix_spawn_file_actions_adddup2((&fops), (*data).pstdout[(((NI) 1))- 0], ((int) 1));
			if (!!((LOC61 == ((NI32) 0)))) goto LA62;
			LOC64 = 0;
			LOC64 = oslasterror_117033();
			raiseoserror_117009(LOC64);
		}
		LA62: ;
		{
			int LOC67;
			NI32 LOC70;
			LOC67 = 0;
			LOC67 = posix_spawn_file_actions_addclose((&fops), (*data).pstderr[(((NI) 0))- 0]);
			if (!!((LOC67 == ((NI32) 0)))) goto LA68;
			LOC70 = 0;
			LOC70 = oslasterror_117033();
			raiseoserror_117009(LOC70);
		}
		LA68: ;
		{
			if (!(*data).optionpostderrtostdout) goto LA73;
			{
				int LOC77;
				NI32 LOC80;
				LOC77 = 0;
				LOC77 = posix_spawn_file_actions_adddup2((&fops), (*data).pstdout[(((NI) 1))- 0], ((int) 2));
				if (!!((LOC77 == ((NI32) 0)))) goto LA78;
				LOC80 = 0;
				LOC80 = oslasterror_117033();
				raiseoserror_117009(LOC80);
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
				LOC84 = posix_spawn_file_actions_adddup2((&fops), (*data).pstderr[(((NI) 1))- 0], ((int) 2));
				if (!!((LOC84 == ((NI32) 0)))) goto LA85;
				LOC87 = 0;
				LOC87 = oslasterror_117033();
				raiseoserror_117009(LOC87);
			}
			LA85: ;
		}
		LA71: ;
	}
	LA39: ;
	res = 0;
	{
		NimStringDesc* LOC92;
		if (!(((NI) 0) < ((*data).workingdir ? strlen((*data).workingdir) : 0))) goto LA90;
		LOC92 = 0;
		LOC92 = cstrToNimstr((*data).workingdir);
		setcurrentdir_119207(LOC92);
	}
	LA90: ;
	pid = 0;
	{
		if (!(*data).optionpousepath) goto LA95;
		res = posix_spawnp((&pid), (*data).syscommand, (&fops), (&attr), (*data).sysargs, (*data).sysenv);
	}
	goto LA93;
	LA95: ;
	{
		res = posix_spawn((&pid), (*data).syscommand, (&fops), (&attr), (*data).sysargs, (*data).sysenv);
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
		LOC104 = oslasterror_117033();
		raiseoserror_117009(LOC104);
	}
	LA102: ;
	result = pid;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17243 = (*exchandler_17243).prev;
}

N_NIMCALL(Processobj143402*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj134012* env, NU8 options) {
	Processobj143402* result;
	TY145026 pstdin;
	TY145026 pstdout;
	TY145026 pstderr;
	NimStringDesc* syscommand;
	TY122208* sysargsraw;
	pid_t volatile pid;
	NCSTRING* sysargs;
	TSafePoint TMP2889;
	result = 0;
	memset((void*)pstdin, 0, sizeof(pstdin));
	memset((void*)pstdout, 0, sizeof(pstdout));
	memset((void*)pstderr, 0, sizeof(pstderr));
	result = (Processobj143402*) newObj((&NTI143404), sizeof(Processobj143402));
	(*result).Sup.m_type = (&NTI143402);
	(*result).exitcode = ((int) -3);
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
			LOC16 = oslasterror_117033();
			raiseoserror_117009(LOC16);
		}
		LA14: ;
	}
	LA3: ;
	syscommand = 0;
	sysargsraw = 0;
	{
		TY176061 LOC21;
		NimStringDesc* LOC22;
		NimStringDesc* LOC23;
		NimStringDesc* LOC24;
		if (!((options &(1<<((((NU8) 2))&7)))!=0)) goto LA19;
		syscommand = copyString(((NimStringDesc*) &TMP2887));
		sysargsraw = (TY122208*) newSeq((&NTI122208), 3);
		memset((void*)LOC21, 0, sizeof(LOC21));
		LOC21[0] = copyString(syscommand);
		LOC21[1] = copyString(((NimStringDesc*) &TMP2888));
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
		TY164566 LOC26;
		NimStringDesc* LOC27;
		syscommand = copyString(command);
		sysargsraw = (TY122208*) newSeq((&NTI122208), 1);
		memset((void*)LOC26, 0, sizeof(LOC26));
		LOC26[0] = copyString(command);
		LOC27 = 0;
		LOC27 = sysargsraw->data[0]; sysargsraw->data[0] = copyStringRC1(LOC26[0]);
		if (LOC27) nimGCunrefNoCycle(LOC27);
		{
			NimStringDesc* arg_145222;
			NI i_145479;
			arg_145222 = 0;
			i_145479 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC31;
					if (!(i_145479 < argsLen0)) goto LA30;
					arg_145222 = args[i_145479];
					sysargsraw = (TY122208*) incrSeq(&(sysargsraw)->Sup, sizeof(NimStringDesc*));
					LOC31 = 0;
					LOC31 = sysargsraw->data[sysargsraw->Sup.len-1]; sysargsraw->data[sysargsraw->Sup.len-1] = copyStringRC1(arg_145222);
					if (LOC31) nimGCunrefNoCycle(LOC31);
					i_145479 += ((NI) 1);
				} LA30: ;
			}
		}
	}
	LA17: ;
	pid = 0;
	sysargs = alloccstringarray_14201(sysargsraw->data, sysargsraw->Sup.len);
	pushSafePoint(&TMP2889);
	TMP2889.status = _setjmp(TMP2889.context);
	if (TMP2889.status == 0) {
		NCSTRING* sysenv;
		TSafePoint TMP2891;
		{
			if (!(env == NIM_NIL)) goto LA35;
			sysenv = envtocstringarray_144854();
		}
		goto LA33;
		LA35: ;
		{
			sysenv = envtocstringarray_144806(env);
		}
		LA33: ;
		pushSafePoint(&TMP2891);
		TMP2891.status = _setjmp(TMP2891.context);
		if (TMP2891.status == 0) {
			Tstartprocessdata144948 data;
			memset((void*)(&data), 0, sizeof(data));
			data.syscommand = syscommand->data;
			data.sysargs = sysargs;
			data.sysenv = sysenv;
			memcpy((void*)data.pstdin, (NIM_CONST void*)pstdin, sizeof(data.pstdin));
			memcpy((void*)data.pstdout, (NIM_CONST void*)pstdout, sizeof(data.pstdout));
			memcpy((void*)data.pstderr, (NIM_CONST void*)pstderr, sizeof(data.pstderr));
			data.optionpoparentstreams = ((options &(1<<((((NU8) 4))&7)))!=0);
			data.optionpousepath = ((options &(1<<((((NU8) 1))&7)))!=0);
			data.optionpostderrtostdout = ((options &(1<<((((NU8) 3))&7)))!=0);
			data.workingdir = workingdir->data;
			pid = startprocessauxspawn_145001((&data));
			{
				NimStringDesc* LOC43;
				if (!((options &(1<<((((NU8) 0))&7)))!=0)) goto LA41;
				LOC43 = 0;
				LOC43 = nsuJoinSep(args, argsLen0, ((NimStringDesc*) &TMP2892));
				printf("%s%s%s\012", command? (command)->data:"nil", ((NimStringDesc*) &TMP2892)? (((NimStringDesc*) &TMP2892))->data:"nil", LOC43? (LOC43)->data:"nil");
			}
			LA41: ;
			(*result).id = pid;
			{
				if (!((options &(1<<((((NU8) 4))&7)))!=0)) goto LA46;
				(*result).inhandle = ((int) 0);
				(*result).outhandle = ((int) 1);
				{
					if (!((options &(1<<((((NU8) 3))&7)))!=0)) goto LA50;
					(*result).errhandle = (*result).outhandle;
				}
				goto LA48;
				LA50: ;
				{
					(*result).errhandle = ((int) 2);
				}
				LA48: ;
			}
			goto LA44;
			LA46: ;
			{
				int LOC60;
				int LOC61;
				int LOC62;
				(*result).inhandle = pstdin[(((NI) 1))- 0];
				(*result).outhandle = pstdout[(((NI) 0))- 0];
				{
					int LOC58;
					if (!((options &(1<<((((NU8) 3))&7)))!=0)) goto LA56;
					(*result).errhandle = (*result).outhandle;
					LOC58 = 0;
					LOC58 = close(pstderr[(((NI) 0))- 0]);
				}
				goto LA54;
				LA56: ;
				{
					(*result).errhandle = pstderr[(((NI) 0))- 0];
				}
				LA54: ;
				LOC60 = 0;
				LOC60 = close(pstderr[(((NI) 1))- 0]);
				LOC61 = 0;
				LOC61 = close(pstdin[(((NI) 0))- 0]);
				LOC62 = 0;
				LOC62 = close(pstdout[(((NI) 1))- 0]);
			}
			LA44: ;
			popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			dealloccstringarray_14450(sysenv);
		}
		if (TMP2891.status != 0) reraiseException();
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		dealloccstringarray_14450(sysargs);
	}
	if (TMP2889.status != 0) reraiseException();
	return result;
}

N_NIMCALL(void, createstream_146441)(Streamobj138027** stream, int* handle, NU8 filemode) {
	FILE* f;
	Filestreamobj138692* LOC7;
	f = 0;
	{
		NIM_BOOL LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = open_13411(&f, (*handle), filemode);
		if (!!(LOC3)) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_117033();
		raiseoserror_117009(LOC6);
	}
	LA4: ;
	LOC7 = 0;
	LOC7 = newfilestream_138759(f);
	unsureAsgnRef((void**) (&(*stream)), &LOC7->Sup);
}

N_NIMCALL(Streamobj138027*, nospinputStream)(Processobj143402* p) {
	Streamobj138027* result;
{	result = 0;
	{
		if (!((*p).instream == NIM_NIL)) goto LA3;
		createstream_146441(&(*p).instream, (&(*p).inhandle), ((NU8) 1));
	}
	LA3: ;
	result = (*p).instream;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Streamobj138027*, nospoutputStream)(Processobj143402* p) {
	Streamobj138027* result;
{	result = 0;
	{
		if (!((*p).outstream == NIM_NIL)) goto LA3;
		createstream_146441(&(*p).outstream, (&(*p).outhandle), ((NU8) 0));
	}
	LA3: ;
	result = (*p).outstream;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, nospwaitForExit)(Processobj143402* p, NI timeout) {
	NI result;
{	result = 0;
	{
		if (!!(((*p).exitcode == ((NI32) -3)))) goto LA3;
		result = ((NI) ((*p).exitcode));
		goto BeforeRet;
	}
	LA3: ;
	{
		pid_t LOC7;
		NI32 LOC10;
		LOC7 = 0;
		LOC7 = waitpid((*p).id, (&(*p).exitcode), ((int) 0));
		if (!(LOC7 < ((NI) 0))) goto LA8;
		(*p).exitcode = ((int) -3);
		LOC10 = 0;
		LOC10 = oslasterror_117033();
		raiseoserror_117009(LOC10);
	}
	LA8: ;
	result = (NI)((NU64)(((NI) ((*p).exitcode))) >> (NU64)(((NI) 8)));
	}BeforeRet: ;
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
N_NIMCALL(void, TMP4334)(void* p, NI op) {
	TY144201* a;
	NI LOC1;
	a = (TY144201*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(NIM_BOOL, canbecycleroot_50067)(Tcell46547* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50823)(Tcell46547* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47265((&gch_48444.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52422)(Tcell46547* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_50067(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50823(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_52004)(Tcell46547* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51604(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_50067(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50823(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46547* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50046(src);
		incref_52422(LOC5);
	}
	LA3: ;
	{
		Tcell46547* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_50046((*dest));
		decref_52004(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(NIM_BOOL, nosprunning)(Processobj143402* p) {
	NIM_BOOL result;
	NI ret;
{	result = 0;
	ret = 0;
	ret = waitpid((*p).id, (&(*p).exitcode), WNOHANG);
	{
		if (!(ret == ((NI) 0))) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	result = (ret == (*p).id);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, nospclose)(Processobj143402* p) {
	int LOC13;
	int LOC14;
	int LOC15;
	{
		if (!!(((*p).instream == NIM_NIL))) goto LA3;
		close_138085((*p).instream);
	}
	LA3: ;
	{
		if (!!(((*p).outstream == NIM_NIL))) goto LA7;
		close_138085((*p).outstream);
	}
	LA7: ;
	{
		if (!!(((*p).errstream == NIM_NIL))) goto LA11;
		close_138085((*p).errstream);
	}
	LA11: ;
	LOC13 = 0;
	LOC13 = close((*p).inhandle);
	LOC14 = 0;
	LOC14 = close((*p).outhandle);
	LOC15 = 0;
	LOC15 = close((*p).errhandle);
}

N_NIMCALL(NI, nospexecProcesses)(NimStringDesc** cmds, NI cmdsLen0, NU8 options_143793, NI n, TY171642 beforerunevent) {
	NI result;
	NU8 options;
	result = 0;
	options = (options_143793 & ~ 16);
	{
		TY144201* q;
		NI m;
		NI i;
		if (!(((NI) 1) < n)) goto LA3;
		q = 0;
		q = (TY144201*) newSeq((&NTI144201), ((NI) (n)));
		m = ((n <= cmdsLen0) ? n : cmdsLen0);
		{
			NI i_144235;
			NI HEX3Atmp_144528;
			NI res_144531;
			i_144235 = 0;
			HEX3Atmp_144528 = 0;
			HEX3Atmp_144528 = (NI)(m - ((NI) 1));
			res_144531 = ((NI) 0);
			{
				while (1) {
					TY218714 LOC12;
					if (!(res_144531 <= HEX3Atmp_144528)) goto LA7;
					i_144235 = res_144531;
					{
						if (!!((beforerunevent.ClPrc == TMP4335.ClPrc && beforerunevent.ClEnv == TMP4335.ClEnv))) goto LA10;
						beforerunevent.ClEnv? beforerunevent.ClPrc(i_144235, beforerunevent.ClEnv):((TMP4336)(beforerunevent.ClPrc))(i_144235);
					}
					LA10: ;
					memset((void*)LOC12, 0, sizeof(LOC12));
					asgnRef((void**) (&q->data[i_144235]), nospstartProcess(cmds[i_144235], ((NimStringDesc*) &TMP4337), LOC12, 0, NIM_NIL, (options | 4)));
					res_144531 += ((NI) 1);
				} LA7: ;
			}
		}
		i = m;
		{
			while (1) {
				if (!(i <= (cmdsLen0-1))) goto LA14;
				nossleep(((NI) 50));
				{
					NI r_144413;
					NI HEX3Atmp_144537;
					NI res_144540;
					r_144413 = 0;
					HEX3Atmp_144537 = 0;
					HEX3Atmp_144537 = (NI)(n - ((NI) 1));
					res_144540 = ((NI) 0);
					{
						while (1) {
							if (!(res_144540 <= HEX3Atmp_144537)) goto LA17;
							r_144413 = res_144540;
							{
								NIM_BOOL LOC20;
								NI LOC23;
								TY218714 LOC32;
								LOC20 = 0;
								LOC20 = nosprunning(q->data[r_144413]);
								if (!!(LOC20)) goto LA21;
								LOC23 = 0;
								LOC23 = nospwaitForExit(q->data[r_144413], ((NI) -1));
								result = ((LOC23 >= result) ? LOC23 : result);
								{
									if (!!((q->data[r_144413] == NIM_NIL))) goto LA26;
									nospclose(q->data[r_144413]);
								}
								LA26: ;
								{
									if (!!((beforerunevent.ClPrc == TMP4335.ClPrc && beforerunevent.ClEnv == TMP4335.ClEnv))) goto LA30;
									beforerunevent.ClEnv? beforerunevent.ClPrc(i, beforerunevent.ClEnv):((TMP4338)(beforerunevent.ClPrc))(i);
								}
								LA30: ;
								memset((void*)LOC32, 0, sizeof(LOC32));
								asgnRef((void**) (&q->data[r_144413]), nospstartProcess(cmds[i], ((NimStringDesc*) &TMP4337), LOC32, 0, NIM_NIL, (options | 4)));
								i += ((NI) 1);
								{
									if (!((cmdsLen0-1) < i)) goto LA35;
									goto LA15;
								}
								LA35: ;
							}
							LA21: ;
							res_144540 += ((NI) 1);
						} LA17: ;
					}
				} LA15: ;
			} LA14: ;
		}
		{
			NI j_144471;
			NI HEX3Atmp_144545;
			NI res_144548;
			j_144471 = 0;
			HEX3Atmp_144545 = 0;
			HEX3Atmp_144545 = (NI)(m - ((NI) 1));
			res_144548 = ((NI) 0);
			{
				while (1) {
					NI LOC40;
					if (!(res_144548 <= HEX3Atmp_144545)) goto LA39;
					j_144471 = res_144548;
					LOC40 = 0;
					LOC40 = nospwaitForExit(q->data[j_144471], ((NI) -1));
					result = ((LOC40 >= result) ? LOC40 : result);
					{
						if (!!((q->data[j_144471] == NIM_NIL))) goto LA43;
						nospclose(q->data[j_144471]);
					}
					LA43: ;
					res_144548 += ((NI) 1);
				} LA39: ;
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		{
			NI i_144498;
			NI HEX3Atmp_144553;
			NI res_144556;
			i_144498 = 0;
			HEX3Atmp_144553 = 0;
			HEX3Atmp_144553 = (cmdsLen0-1);
			res_144556 = ((NI) 0);
			{
				while (1) {
					Processobj143402* p;
					TY218714 LOC53;
					NI LOC54;
					if (!(res_144556 <= HEX3Atmp_144553)) goto LA48;
					i_144498 = res_144556;
					{
						if (!!((beforerunevent.ClPrc == TMP4335.ClPrc && beforerunevent.ClEnv == TMP4335.ClEnv))) goto LA51;
						beforerunevent.ClEnv? beforerunevent.ClPrc(i_144498, beforerunevent.ClEnv):((TMP4339)(beforerunevent.ClPrc))(i_144498);
					}
					LA51: ;
					memset((void*)LOC53, 0, sizeof(LOC53));
					p = nospstartProcess(cmds[i_144498], ((NimStringDesc*) &TMP4337), LOC53, 0, NIM_NIL, (options | 4));
					LOC54 = 0;
					LOC54 = nospwaitForExit(p, ((NI) -1));
					result = ((LOC54 >= result) ? LOC54 : result);
					nospclose(p);
					res_144556 += ((NI) 1);
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
static TNimNode* TMP2885[8];
static TNimNode TMP29[9];
NTI143402.size = sizeof(Processobj143402);
NTI143402.kind = 17;
NTI143402.base = (&NTI3411);
TMP2885[0] = &TMP29[1];
TMP29[1].kind = 1;
TMP29[1].offset = offsetof(Processobj143402, inhandle);
TMP29[1].typ = (&NTI13208);
TMP29[1].name = "inHandle";
TMP2885[1] = &TMP29[2];
TMP29[2].kind = 1;
TMP29[2].offset = offsetof(Processobj143402, outhandle);
TMP29[2].typ = (&NTI13208);
TMP29[2].name = "outHandle";
TMP2885[2] = &TMP29[3];
TMP29[3].kind = 1;
TMP29[3].offset = offsetof(Processobj143402, errhandle);
TMP29[3].typ = (&NTI13208);
TMP29[3].name = "errHandle";
TMP2885[3] = &TMP29[4];
TMP29[4].kind = 1;
TMP29[4].offset = offsetof(Processobj143402, instream);
TMP29[4].typ = (&NTI138025);
TMP29[4].name = "inStream";
TMP2885[4] = &TMP29[5];
TMP29[5].kind = 1;
TMP29[5].offset = offsetof(Processobj143402, outstream);
TMP29[5].typ = (&NTI138025);
TMP29[5].name = "outStream";
TMP2885[5] = &TMP29[6];
TMP29[6].kind = 1;
TMP29[6].offset = offsetof(Processobj143402, errstream);
TMP29[6].typ = (&NTI138025);
TMP29[6].name = "errStream";
TMP2885[6] = &TMP29[7];
TMP29[7].kind = 1;
TMP29[7].offset = offsetof(Processobj143402, id);
TMP29[7].typ = (&NTI107285);
TMP29[7].name = "id";
TMP2885[7] = &TMP29[8];
TMP29[8].kind = 1;
TMP29[8].offset = offsetof(Processobj143402, exitcode);
TMP29[8].typ = (&NTI5811);
TMP29[8].name = "exitCode";
TMP29[0].len = 8; TMP29[0].kind = 2; TMP29[0].sons = &TMP2885[0];
NTI143402.node = &TMP29[0];
NTI143404.size = sizeof(Processobj143402*);
NTI143404.kind = 22;
NTI143404.base = (&NTI143402);
NTI143404.marker = TMP2886;
NTI144201.size = sizeof(TY144201*);
NTI144201.kind = 24;
NTI144201.base = (&NTI143404);
NTI144201.marker = TMP4334;
}

