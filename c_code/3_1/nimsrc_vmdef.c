/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx243048 Tctx243048;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct TNimObject TNimObject;
typedef struct TY243253 TY243253;
typedef struct TY164036 TY164036;
typedef struct Tnode190813 Tnode190813;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct PprocHEX3Aobjecttype243232 PprocHEX3Aobjecttype243232;
typedef struct Tsym190843 Tsym190843;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct TY243272 TY243272;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY243233 TY243233;
typedef struct TY243239 TY243239;
typedef struct Tblock243030 Tblock243030;
typedef struct TY243213 TY243213;
typedef struct TY243273 TY243273;
typedef struct Vmargs243042 Vmargs243042;
typedef struct TY522942 TY522942;
typedef struct TY522945 TY522945;
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
typedef struct Ttype190849 Ttype190849;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
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
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlineinfo163338  {
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
struct  Tctx243048  {
  Tpasscontext241005 Sup;
TY243253* code;
TY164036* debug;
Tnode190813* globals;
Tnode190813* constants;
Ttypeseq190845* types;
Tnode190813* currentexceptiona;
Tnode190813* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype243232* prc;
Tsym190843* module;
Tnode190813* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo163338 comesfromheuristic;
TY243272* callbacks;
NimStringDesc* errorflag;
};
struct TY243239 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY243239 TY243236[256];
struct  PprocHEX3Aobjecttype243232  {
TY243233* blocks;
Tsym190843* sym;
TY243236 slots;
NI maxslots;
};
struct  Tblock243030  {
Tsym190843* label;
TY243213* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs243042* args, void* ClEnv);
void* ClEnv;
} Vmcallback243044;
struct TY243273 {
NimStringDesc* Field0;
Vmcallback243044 Field1;
};
struct TY522942 {
void* Field0;
TY522945* Field1;
};
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
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym190843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Vmargs243042  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode190813* currentexception;
};
struct TY522945 {
char dummy;
};
typedef NI TY27620[16];
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
struct  Ttype190849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode190813* path;
};
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct TY243253 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY243213 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY243233 {
  TGenericSeq Sup;
  Tblock243030 data[SEQ_DECL_SIZE];
};
struct TY243272 {
  TGenericSeq Sup;
  TY243273 data[SEQ_DECL_SIZE];
};
struct TY164036 {
  TGenericSeq Sup;
  Tlineinfo163338 data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP1931)(void* p, NI op);
N_NIMCALL(void, TMP1934)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1935)(void* p, NI op);
N_NIMCALL(void, TMP1940)(void* p, NI op);
N_NIMCALL(void, TMP1949)(void* p, NI op);
N_NIMCALL(void, TMP1950)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46547* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46563* s, Tcell46547* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode190813*, newnode_191401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo163338, unknownlineinfo_164027)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_52004)(Tcell46547* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50067)(Tcell46547* c);
static N_INLINE(void, rtladdcycleroot_50823)(Tcell46547* c);
N_NOINLINE(void, incl_47265)(Tcellset46559* s, Tcell46547* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52422)(Tcell46547* c);
STRING_LITERAL(TMP2692, "", 0);
extern TNimType NTI241005; /* TPassContext */
TNimType NTI243048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI243253; /* seq[TInstr] */
extern TNimType NTI164036; /* seq[TLineInfo] */
extern TNimType NTI190805; /* PNode */
extern TNimType NTI190845; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI243232; /* PProc:ObjectType */
TNimType NTI243030; /* TBlock */
extern TNimType NTI190811; /* PSym */
TNimType NTI243213; /* seq[TPosition] */
TNimType NTI243233; /* seq[TBlock] */
TNimType NTI243239; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI243038; /* TSlotKind */
TNimType NTI243236; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI243040; /* PProc */
TNimType NTI243032; /* TEvalMode */
TNimType NTI243034; /* TSandboxFlag */
TNimType NTI243036; /* TSandboxFlags */
extern TNimType NTI163338; /* TLineInfo */
TNimType NTI243273; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI243044; /* (pointer, ref tuple[]) */
extern TNimType NTI153; /* pointer */
extern TNimType NTI522944; /* ref tuple[] */
TNimType NTI243272; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI243046; /* PCtx */
extern Tgcheap48416 gch_48444;
N_NIMCALL(void, TMP1931)(void* p, NI op) {
	TY243253* a;
	NI LOC1;
	a = (TY243253*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1934)(void* p, NI op) {
	TY243213* a;
	NI LOC1;
	a = (TY243213*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1935)(void* p, NI op) {
	TY243233* a;
	NI LOC1;
	a = (TY243233*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP1940)(void* p, NI op) {
	PprocHEX3Aobjecttype243232* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype243232*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP1949)(void* p, NI op) {
	TY243272* a;
	NI LOC1;
	a = (TY243272*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP1950)(void* p, NI op) {
	Tctx243048* a;
	a = (Tctx243048*)p;
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

static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr) {
	Tcell46547* result;
	result = 0;
	result = ((Tcell46547*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46547))))));
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
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51604(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46547* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_50046(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46547* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_50046((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51604(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
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

static N_INLINE(void, decref_52004)(Tcell46547* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
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

static N_INLINE(void, nimGCunref)(void* p) {
	Tcell46547* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_50046(p);
	decref_52004(LOC1);
}

N_NIMCALL(Tctx243048*, newctx_243281)(Tsym190843* module) {
	Tctx243048* result;
	Tctx243048* LOC1;
	PprocHEX3Aobjecttype243232* LOC2;
	NimStringDesc* LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = (Tctx243048*) newObj((&NTI243046), sizeof(Tctx243048));
	(*LOC1).Sup.Sup.m_type = (&NTI243048);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY243253*) newSeqRC1((&NTI243253), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY164036*) newSeqRC1((&NTI164036), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_191401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_191401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq190845*) newSeqRC1((&NTI190845), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype243232*) newObj((&NTI243040), sizeof(PprocHEX3Aobjecttype243232));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY243233*) newSeqRC1((&NTI243233), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_164027();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY243272*) newSeqRC1((&NTI243272), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP2692));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	return result;
}

static N_INLINE(void, incref_52422)(Tcell46547* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_50067(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50823(c);
	}
	LA4: ;
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

N_NIMCALL(void, registercallback_243400)(Tctx243048* c, NimStringDesc* name, Vmcallback243044 callback) {
	TY243273 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY243272*) incrSeq(&((*c).callbacks)->Sup, sizeof(TY243273));
	LOC2 = 0;
	LOC2 = (*c).callbacks->data[(*c).callbacks->Sup.len-1].Field0; (*c).callbacks->data[(*c).callbacks->Sup.len-1].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c).callbacks->data[(*c).callbacks->Sup.len-1].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c).callbacks->data[(*c).callbacks->Sup.len-1].Field1.ClPrc = LOC1.Field1.ClPrc;
}

N_NIMCALL(void, refresh_243373)(Tctx243048* c, Tsym190843* module) {
	PprocHEX3Aobjecttype243232* LOC1;
	asgnRefNoCycle((void**) (&(*c).module), module);
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype243232*) newObj((&NTI243040), sizeof(PprocHEX3Aobjecttype243232));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY243233*) newSeqRC1((&NTI243233), 0);
	asgnRefNoCycle((void**) (&(*c).prc), LOC1);
	(*c).loopiterations = ((NI) 1500000);
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_vmdefInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_vmdefDatInit)(void) {
static TNimNode* TMP1930[18];
static TNimNode* TMP1932[4];
static TNimNode* TMP1933[2];
static TNimNode* TMP1936[2];
static TNimNode* TMP1937[9];
NI TMP1939;
static char* NIM_CONST TMP1938[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP1941[5];
NI TMP1943;
static char* NIM_CONST TMP1942[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP1944[3];
NI TMP1946;
static char* NIM_CONST TMP1945[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP1947[2];
static TNimNode* TMP1948[2];
static TNimNode TMP852[57];
NTI243048.size = sizeof(Tctx243048);
NTI243048.kind = 17;
NTI243048.base = (&NTI241005);
TMP1930[0] = &TMP852[1];
NTI243253.size = sizeof(TY243253*);
NTI243253.kind = 24;
NTI243253.base = (&NTI124);
NTI243253.flags = 2;
NTI243253.marker = TMP1931;
TMP852[1].kind = 1;
TMP852[1].offset = offsetof(Tctx243048, code);
TMP852[1].typ = (&NTI243253);
TMP852[1].name = "code";
TMP1930[1] = &TMP852[2];
TMP852[2].kind = 1;
TMP852[2].offset = offsetof(Tctx243048, debug);
TMP852[2].typ = (&NTI164036);
TMP852[2].name = "debug";
TMP1930[2] = &TMP852[3];
TMP852[3].kind = 1;
TMP852[3].offset = offsetof(Tctx243048, globals);
TMP852[3].typ = (&NTI190805);
TMP852[3].name = "globals";
TMP1930[3] = &TMP852[4];
TMP852[4].kind = 1;
TMP852[4].offset = offsetof(Tctx243048, constants);
TMP852[4].typ = (&NTI190805);
TMP852[4].name = "constants";
TMP1930[4] = &TMP852[5];
TMP852[5].kind = 1;
TMP852[5].offset = offsetof(Tctx243048, types);
TMP852[5].typ = (&NTI190845);
TMP852[5].name = "types";
TMP1930[5] = &TMP852[6];
TMP852[6].kind = 1;
TMP852[6].offset = offsetof(Tctx243048, currentexceptiona);
TMP852[6].typ = (&NTI190805);
TMP852[6].name = "currentExceptionA";
TMP1930[6] = &TMP852[7];
TMP852[7].kind = 1;
TMP852[7].offset = offsetof(Tctx243048, currentexceptionb);
TMP852[7].typ = (&NTI190805);
TMP852[7].name = "currentExceptionB";
TMP1930[7] = &TMP852[8];
TMP852[8].kind = 1;
TMP852[8].offset = offsetof(Tctx243048, exceptioninstr);
TMP852[8].typ = (&NTI108);
TMP852[8].name = "exceptionInstr";
TMP1930[8] = &TMP852[9];
NTI243232.size = sizeof(PprocHEX3Aobjecttype243232);
NTI243232.kind = 18;
NTI243232.base = 0;
NTI243232.flags = 2;
TMP1932[0] = &TMP852[11];
NTI243030.size = sizeof(Tblock243030);
NTI243030.kind = 18;
NTI243030.base = 0;
NTI243030.flags = 2;
TMP1933[0] = &TMP852[13];
TMP852[13].kind = 1;
TMP852[13].offset = offsetof(Tblock243030, label);
TMP852[13].typ = (&NTI190811);
TMP852[13].name = "label";
TMP1933[1] = &TMP852[14];
NTI243213.size = sizeof(TY243213*);
NTI243213.kind = 24;
NTI243213.base = (&NTI108);
NTI243213.flags = 2;
NTI243213.marker = TMP1934;
TMP852[14].kind = 1;
TMP852[14].offset = offsetof(Tblock243030, fixups);
TMP852[14].typ = (&NTI243213);
TMP852[14].name = "fixups";
TMP852[12].len = 2; TMP852[12].kind = 2; TMP852[12].sons = &TMP1933[0];
NTI243030.node = &TMP852[12];
NTI243233.size = sizeof(TY243233*);
NTI243233.kind = 24;
NTI243233.base = (&NTI243030);
NTI243233.flags = 2;
NTI243233.marker = TMP1935;
TMP852[11].kind = 1;
TMP852[11].offset = offsetof(PprocHEX3Aobjecttype243232, blocks);
TMP852[11].typ = (&NTI243233);
TMP852[11].name = "blocks";
TMP1932[1] = &TMP852[15];
TMP852[15].kind = 1;
TMP852[15].offset = offsetof(PprocHEX3Aobjecttype243232, sym);
TMP852[15].typ = (&NTI190811);
TMP852[15].name = "sym";
TMP1932[2] = &TMP852[16];
NTI243239.size = sizeof(TY243239);
NTI243239.kind = 18;
NTI243239.base = 0;
NTI243239.flags = 3;
TMP1936[0] = &TMP852[18];
TMP852[18].kind = 1;
TMP852[18].offset = offsetof(TY243239, Field0);
TMP852[18].typ = (&NTI138);
TMP852[18].name = "Field0";
TMP1936[1] = &TMP852[19];
NTI243038.size = sizeof(NU8);
NTI243038.kind = 14;
NTI243038.base = 0;
NTI243038.flags = 3;
for (TMP1939 = 0; TMP1939 < 9; TMP1939++) {
TMP852[TMP1939+20].kind = 1;
TMP852[TMP1939+20].offset = TMP1939;
TMP852[TMP1939+20].name = TMP1938[TMP1939];
TMP1937[TMP1939] = &TMP852[TMP1939+20];
}
TMP852[29].len = 9; TMP852[29].kind = 2; TMP852[29].sons = &TMP1937[0];
NTI243038.node = &TMP852[29];
TMP852[19].kind = 1;
TMP852[19].offset = offsetof(TY243239, Field1);
TMP852[19].typ = (&NTI243038);
TMP852[19].name = "Field1";
TMP852[17].len = 2; TMP852[17].kind = 2; TMP852[17].sons = &TMP1936[0];
NTI243239.node = &TMP852[17];
NTI243236.size = sizeof(TY243236);
NTI243236.kind = 16;
NTI243236.base = (&NTI243239);
NTI243236.flags = 3;
TMP852[16].kind = 1;
TMP852[16].offset = offsetof(PprocHEX3Aobjecttype243232, slots);
TMP852[16].typ = (&NTI243236);
TMP852[16].name = "slots";
TMP1932[3] = &TMP852[30];
TMP852[30].kind = 1;
TMP852[30].offset = offsetof(PprocHEX3Aobjecttype243232, maxslots);
TMP852[30].typ = (&NTI108);
TMP852[30].name = "maxSlots";
TMP852[10].len = 4; TMP852[10].kind = 2; TMP852[10].sons = &TMP1932[0];
NTI243232.node = &TMP852[10];
NTI243040.size = sizeof(PprocHEX3Aobjecttype243232*);
NTI243040.kind = 22;
NTI243040.base = (&NTI243232);
NTI243040.flags = 2;
NTI243040.marker = TMP1940;
TMP852[9].kind = 1;
TMP852[9].offset = offsetof(Tctx243048, prc);
TMP852[9].typ = (&NTI243040);
TMP852[9].name = "prc";
TMP1930[9] = &TMP852[31];
TMP852[31].kind = 1;
TMP852[31].offset = offsetof(Tctx243048, module);
TMP852[31].typ = (&NTI190811);
TMP852[31].name = "module";
TMP1930[10] = &TMP852[32];
TMP852[32].kind = 1;
TMP852[32].offset = offsetof(Tctx243048, callsite);
TMP852[32].typ = (&NTI190805);
TMP852[32].name = "callsite";
TMP1930[11] = &TMP852[33];
NTI243032.size = sizeof(NU8);
NTI243032.kind = 14;
NTI243032.base = 0;
NTI243032.flags = 3;
for (TMP1943 = 0; TMP1943 < 5; TMP1943++) {
TMP852[TMP1943+34].kind = 1;
TMP852[TMP1943+34].offset = TMP1943;
TMP852[TMP1943+34].name = TMP1942[TMP1943];
TMP1941[TMP1943] = &TMP852[TMP1943+34];
}
TMP852[39].len = 5; TMP852[39].kind = 2; TMP852[39].sons = &TMP1941[0];
NTI243032.node = &TMP852[39];
TMP852[33].kind = 1;
TMP852[33].offset = offsetof(Tctx243048, mode);
TMP852[33].typ = (&NTI243032);
TMP852[33].name = "mode";
TMP1930[12] = &TMP852[40];
NTI243034.size = sizeof(NU8);
NTI243034.kind = 14;
NTI243034.base = 0;
NTI243034.flags = 3;
for (TMP1946 = 0; TMP1946 < 3; TMP1946++) {
TMP852[TMP1946+41].kind = 1;
TMP852[TMP1946+41].offset = TMP1946;
TMP852[TMP1946+41].name = TMP1945[TMP1946];
TMP1944[TMP1946] = &TMP852[TMP1946+41];
}
TMP852[44].len = 3; TMP852[44].kind = 2; TMP852[44].sons = &TMP1944[0];
NTI243034.node = &TMP852[44];
NTI243036.size = sizeof(NU8);
NTI243036.kind = 19;
NTI243036.base = (&NTI243034);
NTI243036.flags = 3;
TMP852[45].len = 0; TMP852[45].kind = 0;
NTI243036.node = &TMP852[45];
TMP852[40].kind = 1;
TMP852[40].offset = offsetof(Tctx243048, features);
TMP852[40].typ = (&NTI243036);
TMP852[40].name = "features";
TMP1930[13] = &TMP852[46];
TMP852[46].kind = 1;
TMP852[46].offset = offsetof(Tctx243048, traceactive);
TMP852[46].typ = (&NTI138);
TMP852[46].name = "traceActive";
TMP1930[14] = &TMP852[47];
TMP852[47].kind = 1;
TMP852[47].offset = offsetof(Tctx243048, loopiterations);
TMP852[47].typ = (&NTI108);
TMP852[47].name = "loopIterations";
TMP1930[15] = &TMP852[48];
TMP852[48].kind = 1;
TMP852[48].offset = offsetof(Tctx243048, comesfromheuristic);
TMP852[48].typ = (&NTI163338);
TMP852[48].name = "comesFromHeuristic";
TMP1930[16] = &TMP852[49];
NTI243273.size = sizeof(TY243273);
NTI243273.kind = 18;
NTI243273.base = 0;
TMP1947[0] = &TMP852[51];
TMP852[51].kind = 1;
TMP852[51].offset = offsetof(TY243273, Field0);
TMP852[51].typ = (&NTI149);
TMP852[51].name = "Field0";
TMP1947[1] = &TMP852[52];
NTI243044.size = sizeof(TY522942);
NTI243044.kind = 18;
NTI243044.base = 0;
NTI243044.flags = 2;
TMP1948[0] = &TMP852[54];
TMP852[54].kind = 1;
TMP852[54].offset = offsetof(TY522942, Field0);
TMP852[54].typ = (&NTI153);
TMP852[54].name = "Field0";
TMP1948[1] = &TMP852[55];
TMP852[55].kind = 1;
TMP852[55].offset = offsetof(TY522942, Field1);
TMP852[55].typ = (&NTI522944);
TMP852[55].name = "Field1";
TMP852[53].len = 2; TMP852[53].kind = 2; TMP852[53].sons = &TMP1948[0];
NTI243044.node = &TMP852[53];
TMP852[52].kind = 1;
TMP852[52].offset = offsetof(TY243273, Field1);
TMP852[52].typ = (&NTI243044);
TMP852[52].name = "Field1";
TMP852[50].len = 2; TMP852[50].kind = 2; TMP852[50].sons = &TMP1947[0];
NTI243273.node = &TMP852[50];
NTI243272.size = sizeof(TY243272*);
NTI243272.kind = 24;
NTI243272.base = (&NTI243273);
NTI243272.marker = TMP1949;
TMP852[49].kind = 1;
TMP852[49].offset = offsetof(Tctx243048, callbacks);
TMP852[49].typ = (&NTI243272);
TMP852[49].name = "callbacks";
TMP1930[17] = &TMP852[56];
TMP852[56].kind = 1;
TMP852[56].offset = offsetof(Tctx243048, errorflag);
TMP852[56].typ = (&NTI149);
TMP852[56].name = "errorFlag";
TMP852[0].len = 18; TMP852[0].kind = 2; TMP852[0].sons = &TMP1930[0];
NTI243048.node = &TMP852[0];
NTI243046.size = sizeof(Tctx243048*);
NTI243046.kind = 22;
NTI243046.base = (&NTI243048);
NTI243046.marker = TMP1950;
}

