/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx244048 Tctx244048;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct TNimObject TNimObject;
typedef struct TY244253 TY244253;
typedef struct TY165036 TY165036;
typedef struct Tnode191813 Tnode191813;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct PprocHEX3Aobjecttype244232 PprocHEX3Aobjecttype244232;
typedef struct Tsym191843 Tsym191843;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct TY244272 TY244272;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY244233 TY244233;
typedef struct TY244239 TY244239;
typedef struct Tblock244030 Tblock244030;
typedef struct TY244213 TY244213;
typedef struct TY244273 TY244273;
typedef struct Vmargs244042 Vmargs244042;
typedef struct TY523942 TY523942;
typedef struct TY523945 TY523945;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tctx244048  {
  Tpasscontext242005 Sup;
TY244253* code;
TY165036* debug;
Tnode191813* globals;
Tnode191813* constants;
Ttypeseq191845* types;
Tnode191813* currentexceptiona;
Tnode191813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype244232* prc;
Tsym191843* module;
Tnode191813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo164338 comesfromheuristic;
TY244272* callbacks;
NimStringDesc* errorflag;
};
struct TY244239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY244239 TY244236[256];
struct  PprocHEX3Aobjecttype244232  {
TY244233* blocks;
Tsym191843* sym;
TY244236 slots;
NI maxslots;
};
struct  Tblock244030  {
Tsym191843* label;
TY244213* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs244042* args, void* ClEnv);
void* ClEnv;
} Vmcallback244044;
struct TY244273 {
NimStringDesc* Field0;
Vmcallback244044 Field1;
};
struct TY523942 {
void* Field0;
TY523945* Field1;
};
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
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
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Tsym191843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Vmargs244042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode191813* currentexception;
};
struct TY523945 {
char dummy;
};
typedef NI TY27420[16];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
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
struct  Ttype191849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode191813* path;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct TY244253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY244213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY244233 {
  TGenericSeq Sup;
  Tblock244030 data[SEQ_DECL_SIZE];
};
struct TY244272 {
  TGenericSeq Sup;
  TY244273 data[SEQ_DECL_SIZE];
};
struct TY165036 {
  TGenericSeq Sup;
  Tlineinfo164338 data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP1935)(void* p, NI op);
N_NIMCALL(void, TMP1938)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1939)(void* p, NI op);
N_NIMCALL(void, TMP1944)(void* p, NI op);
N_NIMCALL(void, TMP1953)(void* p, NI op);
N_NIMCALL(void, TMP1954)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode191813*, newnode_192401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo164338, unknownlineinfo_165027)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_51804)(Tcell46347* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c);
N_NOINLINE(void, incl_47065)(Tcellset46359* s, Tcell46347* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46347* c);
STRING_LITERAL(TMP2696, "", 0);
extern TNimType NTI242005; /* TPassContext */
TNimType NTI244048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI244253; /* seq[TInstr] */
extern TNimType NTI165036; /* seq[TLineInfo] */
extern TNimType NTI191805; /* PNode */
extern TNimType NTI191845; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI244232; /* PProc:ObjectType */
TNimType NTI244030; /* TBlock */
extern TNimType NTI191811; /* PSym */
TNimType NTI244213; /* seq[TPosition] */
TNimType NTI244233; /* seq[TBlock] */
TNimType NTI244239; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI244038; /* TSlotKind */
TNimType NTI244236; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI244040; /* PProc */
TNimType NTI244032; /* TEvalMode */
TNimType NTI244034; /* TSandboxFlag */
TNimType NTI244036; /* TSandboxFlags */
extern TNimType NTI164338; /* TLineInfo */
TNimType NTI244273; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI244044; /* (pointer, ref tuple[]) */
extern TNimType NTI153; /* pointer */
extern TNimType NTI523944; /* ref tuple[] */
TNimType NTI244272; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI244046; /* PCtx */
extern Tgcheap48216 gch_48244;
N_NIMCALL(void, TMP1935)(void* p, NI op) {
	TY244253* a;
	NI LOC1;
	a = (TY244253*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1938)(void* p, NI op) {
	TY244213* a;
	NI LOC1;
	a = (TY244213*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1939)(void* p, NI op) {
	TY244233* a;
	NI LOC1;
	a = (TY244233*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP1944)(void* p, NI op) {
	PprocHEX3Aobjecttype244232* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype244232*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP1953)(void* p, NI op) {
	TY244272* a;
	NI LOC1;
	a = (TY244272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP1954)(void* p, NI op) {
	Tctx244048* a;
	a = (Tctx244048*)p;
	nimGCvisit((void*)(*a).code, op);
	nimGCvisit((void*)(*a).debug, op);
	nimGCvisit((void*)(*a).globals, op);
	nimGCvisit((void*)(*a).constants, op);
	nimGCvisit((void*)(*a).types, op);
	nimGCvisit((void*)(*a).currentexceptiona, op);
	nimGCvisit((void*)(*a).currentexceptionb, op);
	nimGCvisit((void*)(*a).prc, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).callsite, op);
	nimGCvisit((void*)(*a).callbacks, op);
	nimGCvisit((void*)(*a).errorflag, op);
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46347* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46347* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47065((&gch_48244.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, decref_51804)(Tcell46347* c) {
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

static N_INLINE(void, nimGCunref)(void* p) {
	Tcell46347* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_49846(p);
	decref_51804(LOC1);
}

N_NIMCALL(Tctx244048*, newctx_244281)(Tsym191843* module) {
	Tctx244048* result;
	Tctx244048* LOC1;
	PprocHEX3Aobjecttype244232* LOC2;
	NimStringDesc* LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = (Tctx244048*) newObj((&NTI244046), sizeof(Tctx244048));
	(*LOC1).Sup.Sup.m_type = (&NTI244048);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY244253*) newSeqRC1((&NTI244253), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY165036*) newSeqRC1((&NTI165036), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_192401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_192401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq191845*) newSeqRC1((&NTI191845), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype244232*) newObj((&NTI244040), sizeof(PprocHEX3Aobjecttype244232));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY244233*) newSeqRC1((&NTI244233), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_165027();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY244272*) newSeqRC1((&NTI244272), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP2696));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	return result;
}

static N_INLINE(void, incref_52222)(Tcell46347* c) {
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

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46347* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49846(src);
		incref_52222(LOC5);
	}
	LA3: ;
	{
		Tcell46347* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49846((*dest));
		decref_51804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, registercallback_244400)(Tctx244048* c, NimStringDesc* name, Vmcallback244044 callback) {
	TY244273 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY244272*) incrSeq(&((*c).callbacks)->Sup, sizeof(TY244273));
	LOC2 = 0;
	LOC2 = (*c).callbacks->data[(*c).callbacks->Sup.len-1].Field0; (*c).callbacks->data[(*c).callbacks->Sup.len-1].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c).callbacks->data[(*c).callbacks->Sup.len-1].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c).callbacks->data[(*c).callbacks->Sup.len-1].Field1.ClPrc = LOC1.Field1.ClPrc;
}

N_NIMCALL(void, refresh_244373)(Tctx244048* c, Tsym191843* module) {
	PprocHEX3Aobjecttype244232* LOC1;
	asgnRefNoCycle((void**) (&(*c).module), module);
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype244232*) newObj((&NTI244040), sizeof(PprocHEX3Aobjecttype244232));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY244233*) newSeqRC1((&NTI244233), 0);
	asgnRefNoCycle((void**) (&(*c).prc), LOC1);
	(*c).loopiterations = ((NI) 1500000);
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmdefInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_vmdefDatInit)(void) {
static TNimNode* TMP1934[18];
static TNimNode* TMP1936[4];
static TNimNode* TMP1937[2];
static TNimNode* TMP1940[2];
static TNimNode* TMP1941[9];
NI TMP1943;
static char* NIM_CONST TMP1942[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP1945[5];
NI TMP1947;
static char* NIM_CONST TMP1946[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP1948[3];
NI TMP1950;
static char* NIM_CONST TMP1949[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP1951[2];
static TNimNode* TMP1952[2];
static TNimNode TMP854[57];
NTI244048.size = sizeof(Tctx244048);
NTI244048.kind = 17;
NTI244048.base = (&NTI242005);
TMP1934[0] = &TMP854[1];
NTI244253.size = sizeof(TY244253*);
NTI244253.kind = 24;
NTI244253.base = (&NTI124);
NTI244253.flags = 2;
NTI244253.marker = TMP1935;
TMP854[1].kind = 1;
TMP854[1].offset = offsetof(Tctx244048, code);
TMP854[1].typ = (&NTI244253);
TMP854[1].name = "code";
TMP1934[1] = &TMP854[2];
TMP854[2].kind = 1;
TMP854[2].offset = offsetof(Tctx244048, debug);
TMP854[2].typ = (&NTI165036);
TMP854[2].name = "debug";
TMP1934[2] = &TMP854[3];
TMP854[3].kind = 1;
TMP854[3].offset = offsetof(Tctx244048, globals);
TMP854[3].typ = (&NTI191805);
TMP854[3].name = "globals";
TMP1934[3] = &TMP854[4];
TMP854[4].kind = 1;
TMP854[4].offset = offsetof(Tctx244048, constants);
TMP854[4].typ = (&NTI191805);
TMP854[4].name = "constants";
TMP1934[4] = &TMP854[5];
TMP854[5].kind = 1;
TMP854[5].offset = offsetof(Tctx244048, types);
TMP854[5].typ = (&NTI191845);
TMP854[5].name = "types";
TMP1934[5] = &TMP854[6];
TMP854[6].kind = 1;
TMP854[6].offset = offsetof(Tctx244048, currentexceptiona);
TMP854[6].typ = (&NTI191805);
TMP854[6].name = "currentExceptionA";
TMP1934[6] = &TMP854[7];
TMP854[7].kind = 1;
TMP854[7].offset = offsetof(Tctx244048, currentexceptionb);
TMP854[7].typ = (&NTI191805);
TMP854[7].name = "currentExceptionB";
TMP1934[7] = &TMP854[8];
TMP854[8].kind = 1;
TMP854[8].offset = offsetof(Tctx244048, exceptioninstr);
TMP854[8].typ = (&NTI108);
TMP854[8].name = "exceptionInstr";
TMP1934[8] = &TMP854[9];
NTI244232.size = sizeof(PprocHEX3Aobjecttype244232);
NTI244232.kind = 18;
NTI244232.base = 0;
NTI244232.flags = 2;
TMP1936[0] = &TMP854[11];
NTI244030.size = sizeof(Tblock244030);
NTI244030.kind = 18;
NTI244030.base = 0;
NTI244030.flags = 2;
TMP1937[0] = &TMP854[13];
TMP854[13].kind = 1;
TMP854[13].offset = offsetof(Tblock244030, label);
TMP854[13].typ = (&NTI191811);
TMP854[13].name = "label";
TMP1937[1] = &TMP854[14];
NTI244213.size = sizeof(TY244213*);
NTI244213.kind = 24;
NTI244213.base = (&NTI108);
NTI244213.flags = 2;
NTI244213.marker = TMP1938;
TMP854[14].kind = 1;
TMP854[14].offset = offsetof(Tblock244030, fixups);
TMP854[14].typ = (&NTI244213);
TMP854[14].name = "fixups";
TMP854[12].len = 2; TMP854[12].kind = 2; TMP854[12].sons = &TMP1937[0];
NTI244030.node = &TMP854[12];
NTI244233.size = sizeof(TY244233*);
NTI244233.kind = 24;
NTI244233.base = (&NTI244030);
NTI244233.flags = 2;
NTI244233.marker = TMP1939;
TMP854[11].kind = 1;
TMP854[11].offset = offsetof(PprocHEX3Aobjecttype244232, blocks);
TMP854[11].typ = (&NTI244233);
TMP854[11].name = "blocks";
TMP1936[1] = &TMP854[15];
TMP854[15].kind = 1;
TMP854[15].offset = offsetof(PprocHEX3Aobjecttype244232, sym);
TMP854[15].typ = (&NTI191811);
TMP854[15].name = "sym";
TMP1936[2] = &TMP854[16];
NTI244239.size = sizeof(TY244239);
NTI244239.kind = 18;
NTI244239.base = 0;
NTI244239.flags = 3;
TMP1940[0] = &TMP854[18];
TMP854[18].kind = 1;
TMP854[18].offset = offsetof(TY244239, Field0);
TMP854[18].typ = (&NTI138);
TMP854[18].name = "Field0";
TMP1940[1] = &TMP854[19];
NTI244038.size = sizeof(NU8);
NTI244038.kind = 14;
NTI244038.base = 0;
NTI244038.flags = 3;
for (TMP1943 = 0; TMP1943 < 9; TMP1943++) {
TMP854[TMP1943+20].kind = 1;
TMP854[TMP1943+20].offset = TMP1943;
TMP854[TMP1943+20].name = TMP1942[TMP1943];
TMP1941[TMP1943] = &TMP854[TMP1943+20];
}
TMP854[29].len = 9; TMP854[29].kind = 2; TMP854[29].sons = &TMP1941[0];
NTI244038.node = &TMP854[29];
TMP854[19].kind = 1;
TMP854[19].offset = offsetof(TY244239, Field1);
TMP854[19].typ = (&NTI244038);
TMP854[19].name = "Field1";
TMP854[17].len = 2; TMP854[17].kind = 2; TMP854[17].sons = &TMP1940[0];
NTI244239.node = &TMP854[17];
NTI244236.size = sizeof(TY244236);
NTI244236.kind = 16;
NTI244236.base = (&NTI244239);
NTI244236.flags = 3;
TMP854[16].kind = 1;
TMP854[16].offset = offsetof(PprocHEX3Aobjecttype244232, slots);
TMP854[16].typ = (&NTI244236);
TMP854[16].name = "slots";
TMP1936[3] = &TMP854[30];
TMP854[30].kind = 1;
TMP854[30].offset = offsetof(PprocHEX3Aobjecttype244232, maxslots);
TMP854[30].typ = (&NTI108);
TMP854[30].name = "maxSlots";
TMP854[10].len = 4; TMP854[10].kind = 2; TMP854[10].sons = &TMP1936[0];
NTI244232.node = &TMP854[10];
NTI244040.size = sizeof(PprocHEX3Aobjecttype244232*);
NTI244040.kind = 22;
NTI244040.base = (&NTI244232);
NTI244040.flags = 2;
NTI244040.marker = TMP1944;
TMP854[9].kind = 1;
TMP854[9].offset = offsetof(Tctx244048, prc);
TMP854[9].typ = (&NTI244040);
TMP854[9].name = "prc";
TMP1934[9] = &TMP854[31];
TMP854[31].kind = 1;
TMP854[31].offset = offsetof(Tctx244048, module);
TMP854[31].typ = (&NTI191811);
TMP854[31].name = "module";
TMP1934[10] = &TMP854[32];
TMP854[32].kind = 1;
TMP854[32].offset = offsetof(Tctx244048, callsite);
TMP854[32].typ = (&NTI191805);
TMP854[32].name = "callsite";
TMP1934[11] = &TMP854[33];
NTI244032.size = sizeof(NU8);
NTI244032.kind = 14;
NTI244032.base = 0;
NTI244032.flags = 3;
for (TMP1947 = 0; TMP1947 < 5; TMP1947++) {
TMP854[TMP1947+34].kind = 1;
TMP854[TMP1947+34].offset = TMP1947;
TMP854[TMP1947+34].name = TMP1946[TMP1947];
TMP1945[TMP1947] = &TMP854[TMP1947+34];
}
TMP854[39].len = 5; TMP854[39].kind = 2; TMP854[39].sons = &TMP1945[0];
NTI244032.node = &TMP854[39];
TMP854[33].kind = 1;
TMP854[33].offset = offsetof(Tctx244048, mode);
TMP854[33].typ = (&NTI244032);
TMP854[33].name = "mode";
TMP1934[12] = &TMP854[40];
NTI244034.size = sizeof(NU8);
NTI244034.kind = 14;
NTI244034.base = 0;
NTI244034.flags = 3;
for (TMP1950 = 0; TMP1950 < 3; TMP1950++) {
TMP854[TMP1950+41].kind = 1;
TMP854[TMP1950+41].offset = TMP1950;
TMP854[TMP1950+41].name = TMP1949[TMP1950];
TMP1948[TMP1950] = &TMP854[TMP1950+41];
}
TMP854[44].len = 3; TMP854[44].kind = 2; TMP854[44].sons = &TMP1948[0];
NTI244034.node = &TMP854[44];
NTI244036.size = sizeof(NU8);
NTI244036.kind = 19;
NTI244036.base = (&NTI244034);
NTI244036.flags = 3;
TMP854[45].len = 0; TMP854[45].kind = 0;
NTI244036.node = &TMP854[45];
TMP854[40].kind = 1;
TMP854[40].offset = offsetof(Tctx244048, features);
TMP854[40].typ = (&NTI244036);
TMP854[40].name = "features";
TMP1934[13] = &TMP854[46];
TMP854[46].kind = 1;
TMP854[46].offset = offsetof(Tctx244048, traceactive);
TMP854[46].typ = (&NTI138);
TMP854[46].name = "traceActive";
TMP1934[14] = &TMP854[47];
TMP854[47].kind = 1;
TMP854[47].offset = offsetof(Tctx244048, loopiterations);
TMP854[47].typ = (&NTI108);
TMP854[47].name = "loopIterations";
TMP1934[15] = &TMP854[48];
TMP854[48].kind = 1;
TMP854[48].offset = offsetof(Tctx244048, comesfromheuristic);
TMP854[48].typ = (&NTI164338);
TMP854[48].name = "comesFromHeuristic";
TMP1934[16] = &TMP854[49];
NTI244273.size = sizeof(TY244273);
NTI244273.kind = 18;
NTI244273.base = 0;
TMP1951[0] = &TMP854[51];
TMP854[51].kind = 1;
TMP854[51].offset = offsetof(TY244273, Field0);
TMP854[51].typ = (&NTI149);
TMP854[51].name = "Field0";
TMP1951[1] = &TMP854[52];
NTI244044.size = sizeof(TY523942);
NTI244044.kind = 18;
NTI244044.base = 0;
NTI244044.flags = 2;
TMP1952[0] = &TMP854[54];
TMP854[54].kind = 1;
TMP854[54].offset = offsetof(TY523942, Field0);
TMP854[54].typ = (&NTI153);
TMP854[54].name = "Field0";
TMP1952[1] = &TMP854[55];
TMP854[55].kind = 1;
TMP854[55].offset = offsetof(TY523942, Field1);
TMP854[55].typ = (&NTI523944);
TMP854[55].name = "Field1";
TMP854[53].len = 2; TMP854[53].kind = 2; TMP854[53].sons = &TMP1952[0];
NTI244044.node = &TMP854[53];
TMP854[52].kind = 1;
TMP854[52].offset = offsetof(TY244273, Field1);
TMP854[52].typ = (&NTI244044);
TMP854[52].name = "Field1";
TMP854[50].len = 2; TMP854[50].kind = 2; TMP854[50].sons = &TMP1951[0];
NTI244273.node = &TMP854[50];
NTI244272.size = sizeof(TY244272*);
NTI244272.kind = 24;
NTI244272.base = (&NTI244273);
NTI244272.marker = TMP1953;
TMP854[49].kind = 1;
TMP854[49].offset = offsetof(Tctx244048, callbacks);
TMP854[49].typ = (&NTI244272);
TMP854[49].name = "callbacks";
TMP1934[17] = &TMP854[56];
TMP854[56].kind = 1;
TMP854[56].offset = offsetof(Tctx244048, errorflag);
TMP854[56].typ = (&NTI149);
TMP854[56].name = "errorFlag";
TMP854[0].len = 18; TMP854[0].kind = 2; TMP854[0].sons = &TMP1934[0];
NTI244048.node = &TMP854[0];
NTI244046.size = sizeof(Tctx244048*);
NTI244046.kind = 22;
NTI244046.base = (&NTI244048);
NTI244046.marker = TMP1954;
}

