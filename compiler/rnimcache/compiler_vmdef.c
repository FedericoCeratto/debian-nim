/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_vmdef.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_vmdef.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx343036 Tctx343036;
typedef struct Tpasscontext341002 Tpasscontext341002;
typedef struct TNimObject TNimObject;
typedef struct TY343242 TY343242;
typedef struct TY193083 TY193083;
typedef struct Tnode293798 Tnode293798;
typedef struct Ttypeseq293832 Ttypeseq293832;
typedef struct PprocHEX3Aobjecttype343221 PprocHEX3Aobjecttype343221;
typedef struct Tsym293830 Tsym293830;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct TY343261 TY343261;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY343222 TY343222;
typedef struct TY343227 TY343227;
typedef struct Tblock343018 Tblock343018;
typedef struct TY343202 TY343202;
typedef struct TY343262 TY343262;
typedef struct Vmargs343030 Vmargs343030;
typedef struct TY593911 TY593911;
typedef struct TY593914 TY593914;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29480 Memregion29480;
typedef struct Smallchunk29437 Smallchunk29437;
typedef struct Llchunk29474 Llchunk29474;
typedef struct Bigchunk29439 Bigchunk29439;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29478 Avlnode29478;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Ttype293836 Ttype293836;
typedef struct Tident200012 Tident200012;
typedef struct Tnodeseq293792 Tnodeseq293792;
typedef struct Tidobj200006 Tidobj200006;
typedef struct TY293925 TY293925;
typedef struct Tstrtable293802 Tstrtable293802;
typedef struct Tsymseq293800 Tsymseq293800;
typedef struct Tloc293812 Tloc293812;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293816 Tlib293816;
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
typedef struct TY293956 TY293956;
typedef struct Tinstantiation293820 Tinstantiation293820;
typedef struct Tlistentry147010 Tlistentry147010;
typedef struct TY293957 TY293957;
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
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
struct  Tpasscontext341002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlineinfo192336  {
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
struct  Tctx343036  {
  Tpasscontext341002 Sup;
TY343242* code;
TY193083* debug;
Tnode293798* globals;
Tnode293798* constants;
Ttypeseq293832* types;
Tnode293798* currentexceptiona;
Tnode293798* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype343221* prc;
Tsym293830* module;
Tnode293798* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo192336 comesfromheuristic;
TY343261* callbacks;
NimStringDesc* errorflag;
};
struct TY343227 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY343227 TY343230[256];
struct  PprocHEX3Aobjecttype343221  {
TY343222* blocks;
Tsym293830* sym;
TY343230 slots;
NI maxslots;
};
struct  Tblock343018  {
Tsym293830* label;
TY343202* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs343030* args, void* ClEnv);
void* ClEnv;
} Vmcallback343032;
struct TY343262 {
NimStringDesc* Field0;
Vmcallback343032 Field1;
};
struct TY593911 {
void* Field0;
TY593914* Field1;
};
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29437* TY29495[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29480  {
NI minlargeobj;
NI maxlargeobj;
TY29495 freesmallchunks;
Llchunk29474* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29439* freechunkslist;
Intset29414 chunkstarts;
Avlnode29478* root;
Avlnode29478* deleted;
Avlnode29478* last;
Avlnode29478* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29480 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  Tnode293798  {
Ttype293836* typ;
Tlineinfo192336 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293830* sym;
} S4;
struct {Tident200012* ident;
} S5;
struct {Tnodeseq293792* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tidobj200006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable293802  {
NI counter;
Tsymseq293800* data;
};
struct  Tloc293812  {
NU8 k;
NU8 s;
NU16 flags;
Ttype293836* t;
Ropeobj179006* r;
};
struct  Tsym293830  {
  Tidobj200006 Sup;
NU8 kind;
union{
struct {Ttypeseq293832* typeinstcache;
} S1;
struct {TY293925* procinstcache;
Tsym293830* gcunsafetyreason;
} S2;
struct {TY293925* usedgenerics;
Tstrtable293802 tab;
} S3;
struct {Tsym293830* guard;
NI bitsize;
} S4;
} kindU;
NU16 magic;
Ttype293836* typ;
Tident200012* name;
Tlineinfo192336 info;
Tsym293830* owner;
NU32 flags;
Tnode293798* ast;
NU32 options;
NI position;
NI offset;
Tloc293812 loc;
Tlib293816* annex;
Tnode293798* constraint;
};
struct  Vmargs343030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode293798* currentexception;
};
struct TY593914 {
char dummy;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29435  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29437  {
  Basechunk29435 Sup;
Smallchunk29437* next;
Smallchunk29437* prev;
Freecell29427* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29474  {
NI size;
NI acc;
Llchunk29474* next;
};
struct  Bigchunk29439  {
  Basechunk29435 Sup;
Bigchunk29439* next;
Bigchunk29439* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29478* TY29485[2];
struct  Avlnode29478  {
TY29485 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
struct  Ttype293836  {
  Tidobj200006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq293832* sons;
Tnode293798* n;
Tsym293830* owner;
Tsym293830* sym;
Tsym293830* destructor;
Tsym293830* deepcopy;
Tsym293830* assignment;
TY293956* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293812 loc;
};
struct  Tident200012  {
  Tidobj200006 Sup;
NimStringDesc* s;
Tident200012* next;
NI h;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147010  {
  TNimObject Sup;
Tlistentry147010* prev;
Tlistentry147010* next;
};
struct  Tlib293816  {
  Tlistentry147010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293798* path;
};
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
struct TY293957 {
NI Field0;
Tsym293830* Field1;
};
struct  Tinstantiation293820  {
Tsym293830* sym;
Ttypeseq293832* concretetypes;
NI compilesid;
};
struct TY343242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY343202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY343222 {
  TGenericSeq Sup;
  Tblock343018 data[SEQ_DECL_SIZE];
};
struct TY343261 {
  TGenericSeq Sup;
  TY343262 data[SEQ_DECL_SIZE];
};
struct TY193083 {
  TGenericSeq Sup;
  Tlineinfo192336 data[SEQ_DECL_SIZE];
};
struct Ttypeseq293832 {
  TGenericSeq Sup;
  Ttype293836* data[SEQ_DECL_SIZE];
};
struct Tnodeseq293792 {
  TGenericSeq Sup;
  Tnode293798* data[SEQ_DECL_SIZE];
};
struct TY293925 {
  TGenericSeq Sup;
  Tinstantiation293820* data[SEQ_DECL_SIZE];
};
struct Tsymseq293800 {
  TGenericSeq Sup;
  Tsym293830* data[SEQ_DECL_SIZE];
};
struct TY293956 {
  TGenericSeq Sup;
  TY293957 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP2110)(void* p, NI op);
N_NIMCALL(void, TMP2113)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2114)(void* p, NI op);
N_NIMCALL(void, TMP2119)(void* p, NI op);
N_NIMCALL(void, TMP2128)(void* p, NI op);
N_NIMCALL(void, TMP2129)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode293798*, newnode_294401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo192336, unknownlineinfo_193080)(void);
N_NIMCALL(void, nimGCunref)(void* p);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53419)(Cell47305* c);
static N_INLINE(void, decref_53001)(Cell47305* c);
STRING_LITERAL(TMP2896, "", 0);
extern TNimType NTI341002; /* TPassContext */
TNimType NTI343036; /* TCtx */
extern TNimType NTI120; /* uint32 */
TNimType NTI343242; /* seq[TInstr] */
extern TNimType NTI193083; /* seq[TLineInfo] */
extern TNimType NTI293790; /* PNode */
extern TNimType NTI293832; /* TTypeSeq */
extern TNimType NTI104; /* int */
TNimType NTI343221; /* PProc:ObjectType */
TNimType NTI343018; /* TBlock */
extern TNimType NTI293796; /* PSym */
TNimType NTI343202; /* seq[TPosition] */
TNimType NTI343222; /* seq[TBlock] */
TNimType NTI343227; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI130; /* bool */
TNimType NTI343026; /* TSlotKind */
TNimType NTI343230; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI343028; /* PProc */
TNimType NTI343020; /* TEvalMode */
TNimType NTI343022; /* TSandboxFlag */
TNimType NTI343024; /* TSandboxFlags */
extern TNimType NTI192336; /* TLineInfo */
TNimType NTI343262; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI138; /* string */
TNimType NTI343032; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
extern TNimType NTI593913; /* ref tuple[] */
TNimType NTI343261; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI343034; /* PCtx */
extern Gcheap49818 gch_49855;
N_NIMCALL(void, TMP2110)(void* p, NI op) {
	TY343242* a;
	NI LOC1;
	a = (TY343242*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP2113)(void* p, NI op) {
	TY343202* a;
	NI LOC1;
	a = (TY343202*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP2114)(void* p, NI op) {
	TY343222* a;
	NI LOC1;
	a = (TY343222*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP2119)(void* p, NI op) {
	PprocHEX3Aobjecttype343221* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype343221*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP2128)(void* p, NI op) {
	TY343261* a;
	NI LOC1;
	a = (TY343261*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP2129)(void* p, NI op) {
	Tctx343036* a;
	a = (Tctx343036*)p;
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

static N_INLINE(Cell47305*, usrtocell_51440)(void* usr) {
	Cell47305* result;
	result = 0;
	result = ((Cell47305*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result;
}

static N_INLINE(void, rtladdzct_52601)(Cell47305* c) {
	addzct_51417((&gch_49855.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47305* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47305* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tctx343036*, newctx_343267)(Tsym293830* module) {
	Tctx343036* result;
	Tctx343036* LOC1;
	PprocHEX3Aobjecttype343221* LOC2;
	NimStringDesc* LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = (Tctx343036*) newObj((&NTI343034), sizeof(Tctx343036));
	(*LOC1).Sup.Sup.m_type = (&NTI343036);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY343242*) newSeqRC1((&NTI343242), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY193083*) newSeqRC1((&NTI193083), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_294401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_294401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq293832*) newSeqRC1((&NTI293832), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype343221*) newObj((&NTI343028), sizeof(PprocHEX3Aobjecttype343221));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY343222*) newSeqRC1((&NTI343222), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_193080();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY343261*) newSeqRC1((&NTI343261), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP2896));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	return result;
}

static N_INLINE(void, incref_53419)(Cell47305* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decref_53001)(Cell47305* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47305* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51440(src);
		incref_53419(LOC5);
	}
	LA3: ;
	{
		Cell47305* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51440((*dest));
		decref_53001(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, registercallback_343374)(Tctx343036* c, NimStringDesc* name, Vmcallback343032 callback) {
	TY343262 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY343261*) incrSeqV2(&((*c).callbacks)->Sup, sizeof(TY343262));
	LOC2 = 0;
	LOC2 = (*c).callbacks->data[(*c).callbacks->Sup.len].Field0; (*c).callbacks->data[(*c).callbacks->Sup.len].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c).callbacks->data[(*c).callbacks->Sup.len].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c).callbacks->data[(*c).callbacks->Sup.len].Field1.ClPrc = LOC1.Field1.ClPrc;
	++(*c).callbacks->Sup.len;
}

N_NIMCALL(void, refresh_343353)(Tctx343036* c, Tsym293830* module) {
	PprocHEX3Aobjecttype343221* LOC1;
	asgnRefNoCycle((void**) (&(*c).module), module);
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype343221*) newObj((&NTI343028), sizeof(PprocHEX3Aobjecttype343221));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY343222*) newSeqRC1((&NTI343222), 0);
	asgnRefNoCycle((void**) (&(*c).prc), LOC1);
	(*c).loopiterations = ((NI) 1500000);
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit000)(void) {
static TNimNode* TMP2109[18];
static TNimNode* TMP2111[4];
static TNimNode* TMP2112[2];
static TNimNode* TMP2115[2];
static TNimNode* TMP2116[9];
NI TMP2118;
static char* NIM_CONST TMP2117[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP2120[5];
NI TMP2122;
static char* NIM_CONST TMP2121[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP2123[3];
NI TMP2125;
static char* NIM_CONST TMP2124[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP2126[2];
static TNimNode* TMP2127[2];
static TNimNode TMP958[57];
NTI343036.size = sizeof(Tctx343036);
NTI343036.kind = 17;
NTI343036.base = (&NTI341002);
TMP2109[0] = &TMP958[1];
NTI343242.size = sizeof(TY343242*);
NTI343242.kind = 24;
NTI343242.base = (&NTI120);
NTI343242.flags = 2;
NTI343242.marker = TMP2110;
TMP958[1].kind = 1;
TMP958[1].offset = offsetof(Tctx343036, code);
TMP958[1].typ = (&NTI343242);
TMP958[1].name = "code";
TMP2109[1] = &TMP958[2];
TMP958[2].kind = 1;
TMP958[2].offset = offsetof(Tctx343036, debug);
TMP958[2].typ = (&NTI193083);
TMP958[2].name = "debug";
TMP2109[2] = &TMP958[3];
TMP958[3].kind = 1;
TMP958[3].offset = offsetof(Tctx343036, globals);
TMP958[3].typ = (&NTI293790);
TMP958[3].name = "globals";
TMP2109[3] = &TMP958[4];
TMP958[4].kind = 1;
TMP958[4].offset = offsetof(Tctx343036, constants);
TMP958[4].typ = (&NTI293790);
TMP958[4].name = "constants";
TMP2109[4] = &TMP958[5];
TMP958[5].kind = 1;
TMP958[5].offset = offsetof(Tctx343036, types);
TMP958[5].typ = (&NTI293832);
TMP958[5].name = "types";
TMP2109[5] = &TMP958[6];
TMP958[6].kind = 1;
TMP958[6].offset = offsetof(Tctx343036, currentexceptiona);
TMP958[6].typ = (&NTI293790);
TMP958[6].name = "currentExceptionA";
TMP2109[6] = &TMP958[7];
TMP958[7].kind = 1;
TMP958[7].offset = offsetof(Tctx343036, currentexceptionb);
TMP958[7].typ = (&NTI293790);
TMP958[7].name = "currentExceptionB";
TMP2109[7] = &TMP958[8];
TMP958[8].kind = 1;
TMP958[8].offset = offsetof(Tctx343036, exceptioninstr);
TMP958[8].typ = (&NTI104);
TMP958[8].name = "exceptionInstr";
TMP2109[8] = &TMP958[9];
NTI343221.size = sizeof(PprocHEX3Aobjecttype343221);
NTI343221.kind = 18;
NTI343221.base = 0;
NTI343221.flags = 2;
TMP2111[0] = &TMP958[11];
NTI343018.size = sizeof(Tblock343018);
NTI343018.kind = 18;
NTI343018.base = 0;
NTI343018.flags = 2;
TMP2112[0] = &TMP958[13];
TMP958[13].kind = 1;
TMP958[13].offset = offsetof(Tblock343018, label);
TMP958[13].typ = (&NTI293796);
TMP958[13].name = "label";
TMP2112[1] = &TMP958[14];
NTI343202.size = sizeof(TY343202*);
NTI343202.kind = 24;
NTI343202.base = (&NTI104);
NTI343202.flags = 2;
NTI343202.marker = TMP2113;
TMP958[14].kind = 1;
TMP958[14].offset = offsetof(Tblock343018, fixups);
TMP958[14].typ = (&NTI343202);
TMP958[14].name = "fixups";
TMP958[12].len = 2; TMP958[12].kind = 2; TMP958[12].sons = &TMP2112[0];
NTI343018.node = &TMP958[12];
NTI343222.size = sizeof(TY343222*);
NTI343222.kind = 24;
NTI343222.base = (&NTI343018);
NTI343222.flags = 2;
NTI343222.marker = TMP2114;
TMP958[11].kind = 1;
TMP958[11].offset = offsetof(PprocHEX3Aobjecttype343221, blocks);
TMP958[11].typ = (&NTI343222);
TMP958[11].name = "blocks";
TMP2111[1] = &TMP958[15];
TMP958[15].kind = 1;
TMP958[15].offset = offsetof(PprocHEX3Aobjecttype343221, sym);
TMP958[15].typ = (&NTI293796);
TMP958[15].name = "sym";
TMP2111[2] = &TMP958[16];
NTI343227.size = sizeof(TY343227);
NTI343227.kind = 18;
NTI343227.base = 0;
NTI343227.flags = 3;
TMP2115[0] = &TMP958[18];
TMP958[18].kind = 1;
TMP958[18].offset = offsetof(TY343227, Field0);
TMP958[18].typ = (&NTI130);
TMP958[18].name = "Field0";
TMP2115[1] = &TMP958[19];
NTI343026.size = sizeof(NU8);
NTI343026.kind = 14;
NTI343026.base = 0;
NTI343026.flags = 3;
for (TMP2118 = 0; TMP2118 < 9; TMP2118++) {
TMP958[TMP2118+20].kind = 1;
TMP958[TMP2118+20].offset = TMP2118;
TMP958[TMP2118+20].name = TMP2117[TMP2118];
TMP2116[TMP2118] = &TMP958[TMP2118+20];
}
TMP958[29].len = 9; TMP958[29].kind = 2; TMP958[29].sons = &TMP2116[0];
NTI343026.node = &TMP958[29];
TMP958[19].kind = 1;
TMP958[19].offset = offsetof(TY343227, Field1);
TMP958[19].typ = (&NTI343026);
TMP958[19].name = "Field1";
TMP958[17].len = 2; TMP958[17].kind = 2; TMP958[17].sons = &TMP2115[0];
NTI343227.node = &TMP958[17];
NTI343230.size = sizeof(TY343230);
NTI343230.kind = 16;
NTI343230.base = (&NTI343227);
NTI343230.flags = 3;
TMP958[16].kind = 1;
TMP958[16].offset = offsetof(PprocHEX3Aobjecttype343221, slots);
TMP958[16].typ = (&NTI343230);
TMP958[16].name = "slots";
TMP2111[3] = &TMP958[30];
TMP958[30].kind = 1;
TMP958[30].offset = offsetof(PprocHEX3Aobjecttype343221, maxslots);
TMP958[30].typ = (&NTI104);
TMP958[30].name = "maxSlots";
TMP958[10].len = 4; TMP958[10].kind = 2; TMP958[10].sons = &TMP2111[0];
NTI343221.node = &TMP958[10];
NTI343028.size = sizeof(PprocHEX3Aobjecttype343221*);
NTI343028.kind = 22;
NTI343028.base = (&NTI343221);
NTI343028.flags = 2;
NTI343028.marker = TMP2119;
TMP958[9].kind = 1;
TMP958[9].offset = offsetof(Tctx343036, prc);
TMP958[9].typ = (&NTI343028);
TMP958[9].name = "prc";
TMP2109[9] = &TMP958[31];
TMP958[31].kind = 1;
TMP958[31].offset = offsetof(Tctx343036, module);
TMP958[31].typ = (&NTI293796);
TMP958[31].name = "module";
TMP2109[10] = &TMP958[32];
TMP958[32].kind = 1;
TMP958[32].offset = offsetof(Tctx343036, callsite);
TMP958[32].typ = (&NTI293790);
TMP958[32].name = "callsite";
TMP2109[11] = &TMP958[33];
NTI343020.size = sizeof(NU8);
NTI343020.kind = 14;
NTI343020.base = 0;
NTI343020.flags = 3;
for (TMP2122 = 0; TMP2122 < 5; TMP2122++) {
TMP958[TMP2122+34].kind = 1;
TMP958[TMP2122+34].offset = TMP2122;
TMP958[TMP2122+34].name = TMP2121[TMP2122];
TMP2120[TMP2122] = &TMP958[TMP2122+34];
}
TMP958[39].len = 5; TMP958[39].kind = 2; TMP958[39].sons = &TMP2120[0];
NTI343020.node = &TMP958[39];
TMP958[33].kind = 1;
TMP958[33].offset = offsetof(Tctx343036, mode);
TMP958[33].typ = (&NTI343020);
TMP958[33].name = "mode";
TMP2109[12] = &TMP958[40];
NTI343022.size = sizeof(NU8);
NTI343022.kind = 14;
NTI343022.base = 0;
NTI343022.flags = 3;
for (TMP2125 = 0; TMP2125 < 3; TMP2125++) {
TMP958[TMP2125+41].kind = 1;
TMP958[TMP2125+41].offset = TMP2125;
TMP958[TMP2125+41].name = TMP2124[TMP2125];
TMP2123[TMP2125] = &TMP958[TMP2125+41];
}
TMP958[44].len = 3; TMP958[44].kind = 2; TMP958[44].sons = &TMP2123[0];
NTI343022.node = &TMP958[44];
NTI343024.size = sizeof(NU8);
NTI343024.kind = 19;
NTI343024.base = (&NTI343022);
NTI343024.flags = 3;
TMP958[45].len = 0; TMP958[45].kind = 0;
NTI343024.node = &TMP958[45];
TMP958[40].kind = 1;
TMP958[40].offset = offsetof(Tctx343036, features);
TMP958[40].typ = (&NTI343024);
TMP958[40].name = "features";
TMP2109[13] = &TMP958[46];
TMP958[46].kind = 1;
TMP958[46].offset = offsetof(Tctx343036, traceactive);
TMP958[46].typ = (&NTI130);
TMP958[46].name = "traceActive";
TMP2109[14] = &TMP958[47];
TMP958[47].kind = 1;
TMP958[47].offset = offsetof(Tctx343036, loopiterations);
TMP958[47].typ = (&NTI104);
TMP958[47].name = "loopIterations";
TMP2109[15] = &TMP958[48];
TMP958[48].kind = 1;
TMP958[48].offset = offsetof(Tctx343036, comesfromheuristic);
TMP958[48].typ = (&NTI192336);
TMP958[48].name = "comesFromHeuristic";
TMP2109[16] = &TMP958[49];
NTI343262.size = sizeof(TY343262);
NTI343262.kind = 18;
NTI343262.base = 0;
TMP2126[0] = &TMP958[51];
TMP958[51].kind = 1;
TMP958[51].offset = offsetof(TY343262, Field0);
TMP958[51].typ = (&NTI138);
TMP958[51].name = "Field0";
TMP2126[1] = &TMP958[52];
NTI343032.size = sizeof(TY593911);
NTI343032.kind = 18;
NTI343032.base = 0;
NTI343032.flags = 2;
TMP2127[0] = &TMP958[54];
TMP958[54].kind = 1;
TMP958[54].offset = offsetof(TY593911, Field0);
TMP958[54].typ = (&NTI142);
TMP958[54].name = "Field0";
TMP2127[1] = &TMP958[55];
TMP958[55].kind = 1;
TMP958[55].offset = offsetof(TY593911, Field1);
TMP958[55].typ = (&NTI593913);
TMP958[55].name = "Field1";
TMP958[53].len = 2; TMP958[53].kind = 2; TMP958[53].sons = &TMP2127[0];
NTI343032.node = &TMP958[53];
TMP958[52].kind = 1;
TMP958[52].offset = offsetof(TY343262, Field1);
TMP958[52].typ = (&NTI343032);
TMP958[52].name = "Field1";
TMP958[50].len = 2; TMP958[50].kind = 2; TMP958[50].sons = &TMP2126[0];
NTI343262.node = &TMP958[50];
NTI343261.size = sizeof(TY343261*);
NTI343261.kind = 24;
NTI343261.base = (&NTI343262);
NTI343261.marker = TMP2128;
TMP958[49].kind = 1;
TMP958[49].offset = offsetof(Tctx343036, callbacks);
TMP958[49].typ = (&NTI343261);
TMP958[49].name = "callbacks";
TMP2109[17] = &TMP958[56];
TMP958[56].kind = 1;
TMP958[56].offset = offsetof(Tctx343036, errorflag);
TMP958[56].typ = (&NTI138);
TMP958[56].name = "errorFlag";
TMP958[0].len = 18; TMP958[0].kind = 2; TMP958[0].sons = &TMP2109[0];
NTI343036.node = &TMP958[0];
NTI343034.size = sizeof(Tctx343036*);
NTI343034.kind = 22;
NTI343034.base = (&NTI343036);
NTI343034.marker = TMP2129;
}

