/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx264036 Tctx264036;
typedef struct Tpasscontext262002 Tpasscontext262002;
typedef struct TNimObject TNimObject;
typedef struct TY264242 TY264242;
typedef struct TY184090 TY184090;
typedef struct Tnode215790 Tnode215790;
typedef struct Ttypeseq215824 Ttypeseq215824;
typedef struct PprocHEX3Aobjecttype264221 PprocHEX3Aobjecttype264221;
typedef struct Tsym215822 Tsym215822;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct TY264261 TY264261;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY264222 TY264222;
typedef struct TY264227 TY264227;
typedef struct Tblock264018 Tblock264018;
typedef struct TY264202 TY264202;
typedef struct TY264262 TY264262;
typedef struct Vmargs264030 Vmargs264030;
typedef struct TY532873 TY532873;
typedef struct TY532876 TY532876;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29688 Memregion29688;
typedef struct Smallchunk29640 Smallchunk29640;
typedef struct Llchunk29682 Llchunk29682;
typedef struct Bigchunk29642 Bigchunk29642;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29686 Avlnode29686;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Ttype215828 Ttype215828;
typedef struct Tident190012 Tident190012;
typedef struct Tnodeseq215784 Tnodeseq215784;
typedef struct Tidobj190006 Tidobj190006;
typedef struct Tscope215816 Tscope215816;
typedef struct TY215925 TY215925;
typedef struct Tstrtable215794 Tstrtable215794;
typedef struct Tsymseq215792 Tsymseq215792;
typedef struct Tloc215804 Tloc215804;
typedef struct Ropeobj170006 Ropeobj170006;
typedef struct Tlib215808 Tlib215808;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY215913 TY215913;
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
struct  Tpasscontext262002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tlineinfo183337  {
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
struct  Tctx264036  {
  Tpasscontext262002 Sup;
TY264242* code;
TY184090* debug;
Tnode215790* globals;
Tnode215790* constants;
Ttypeseq215824* types;
Tnode215790* currentexceptiona;
Tnode215790* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype264221* prc;
Tsym215822* module;
Tnode215790* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo183337 comesfromheuristic;
TY264261* callbacks;
NimStringDesc* errorflag;
};
struct TY264227 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY264227 TY264230[256];
struct  PprocHEX3Aobjecttype264221  {
TY264222* blocks;
Tsym215822* sym;
TY264230 slots;
NI maxslots;
};
struct  Tblock264018  {
Tsym215822* label;
TY264202* fixups;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs264030* args, void* ClEnv);
void* ClEnv;
} Vmcallback264032;
struct TY264262 {
NimStringDesc* Field0;
Vmcallback264032 Field1;
};
struct TY532873 {
void* Field0;
TY532876* Field1;
};
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29640* TY29703[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29688  {
NI minlargeobj;
NI maxlargeobj;
TY29703 freesmallchunks;
Llchunk29682* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29642* freechunkslist;
Intset29614 chunkstarts;
Avlnode29686* root;
Avlnode29686* deleted;
Avlnode29686* last;
Avlnode29686* freeavlnodes;
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
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29688 region;
Gcstat49814 stat;
};
struct  Tnode215790  {
Ttype215828* typ;
Tlineinfo183337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym215822* sym;
} S4;
struct {Tident190012* ident;
} S5;
struct {Tnodeseq215784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tidobj190006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable215794  {
NI counter;
Tsymseq215792* data;
};
struct  Tloc215804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype215828* t;
Ropeobj170006* r;
Ropeobj170006* heaproot;
};
struct  Tsym215822  {
  Tidobj190006 Sup;
NU8 kind;
union{
struct {Ttypeseq215824* typeinstcache;
Tscope215816* typscope;
} S1;
struct {TY215925* procinstcache;
Tsym215822* gcunsafetyreason;
} S2;
struct {TY215925* usedgenerics;
Tstrtable215794 tab;
} S3;
struct {Tsym215822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype215828* typ;
Tident190012* name;
Tlineinfo183337 info;
Tsym215822* owner;
NU32 flags;
Tnode215790* ast;
NU32 options;
NI position;
NI offset;
Tloc215804 loc;
Tlib215808* annex;
Tnode215790* constraint;
};
struct  Vmargs264030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode215790* currentexception;
};
struct TY532876 {
char dummy;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29619[8];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29619 bits;
};
struct  Basechunk29638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29640  {
  Basechunk29638 Sup;
Smallchunk29640* next;
Smallchunk29640* prev;
Freecell29630* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29682  {
NI size;
NI acc;
Llchunk29682* next;
};
struct  Bigchunk29642  {
  Basechunk29638 Sup;
Bigchunk29642* next;
Bigchunk29642* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29619 bits;
};
typedef Avlnode29686* TY29693[2];
struct  Avlnode29686  {
TY29693 link;
NI key;
NI upperbound;
NI level;
};
struct  Ttype215828  {
  Tidobj190006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq215824* sons;
Tnode215790* n;
Tsym215822* owner;
Tsym215822* sym;
Tsym215822* destructor;
Tsym215822* deepcopy;
Tsym215822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc215804 loc;
};
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
NI h;
};
struct  Tscope215816  {
NI depthlevel;
Tstrtable215794 symbols;
Tnodeseq215784* usingsyms;
Tscope215816* parent;
};
struct  Ropeobj170006  {
  TNimObject Sup;
Ropeobj170006* left;
Ropeobj170006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib215808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj170006* name;
Tnode215790* path;
};
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct  Tinstantiation215812  {
Tsym215822* sym;
Ttypeseq215824* concretetypes;
TY215913* usedby;
NI compilesid;
};
struct TY264242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY264202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY264222 {
  TGenericSeq Sup;
  Tblock264018 data[SEQ_DECL_SIZE];
};
struct TY264261 {
  TGenericSeq Sup;
  TY264262 data[SEQ_DECL_SIZE];
};
struct TY184090 {
  TGenericSeq Sup;
  Tlineinfo183337 data[SEQ_DECL_SIZE];
};
struct Ttypeseq215824 {
  TGenericSeq Sup;
  Ttype215828* data[SEQ_DECL_SIZE];
};
struct Tnodeseq215784 {
  TGenericSeq Sup;
  Tnode215790* data[SEQ_DECL_SIZE];
};
struct TY215925 {
  TGenericSeq Sup;
  Tinstantiation215812* data[SEQ_DECL_SIZE];
};
struct Tsymseq215792 {
  TGenericSeq Sup;
  Tsym215822* data[SEQ_DECL_SIZE];
};
struct TY215913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP2069)(void* p, NI op);
N_NIMCALL(void, TMP2072)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2073)(void* p, NI op);
N_NIMCALL(void, TMP2078)(void* p, NI op);
N_NIMCALL(void, TMP2087)(void* p, NI op);
N_NIMCALL(void, TMP2088)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(Tnode215790*, newnode_216401)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Tlineinfo183337, unknownlineinfo_184087)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_53401)(Cell47505* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c);
N_NOINLINE(void, incl_48247)(Cellset47517* s, Cell47505* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47505* c);
STRING_LITERAL(TMP2844, "", 0);
extern TNimType NTI262002; /* TPassContext */
TNimType NTI264036; /* TCtx */
extern TNimType NTI120; /* uint32 */
TNimType NTI264242; /* seq[TInstr] */
extern TNimType NTI184090; /* seq[TLineInfo] */
extern TNimType NTI215782; /* PNode */
extern TNimType NTI215824; /* TTypeSeq */
extern TNimType NTI104; /* int */
TNimType NTI264221; /* PProc:ObjectType */
TNimType NTI264018; /* TBlock */
extern TNimType NTI215788; /* PSym */
TNimType NTI264202; /* seq[TPosition] */
TNimType NTI264222; /* seq[TBlock] */
TNimType NTI264227; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI130; /* bool */
TNimType NTI264026; /* TSlotKind */
TNimType NTI264230; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI264028; /* PProc */
TNimType NTI264020; /* TEvalMode */
TNimType NTI264022; /* TSandboxFlag */
TNimType NTI264024; /* TSandboxFlags */
extern TNimType NTI183337; /* TLineInfo */
TNimType NTI264262; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI138; /* string */
TNimType NTI264032; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
extern TNimType NTI532875; /* ref tuple[] */
TNimType NTI264261; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI264034; /* PCtx */
extern Gcheap49818 gch_49859;
N_NIMCALL(void, TMP2069)(void* p, NI op) {
	TY264242* a;
	NI LOC1;
	a = (TY264242*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP2072)(void* p, NI op) {
	TY264202* a;
	NI LOC1;
	a = (TY264202*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP2073)(void* p, NI op) {
	TY264222* a;
	NI LOC1;
	a = (TY264222*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP2078)(void* p, NI op) {
	PprocHEX3Aobjecttype264221* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype264221*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP2087)(void* p, NI op) {
	TY264261* a;
	NI LOC1;
	a = (TY264261*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP2088)(void* p, NI op) {
	Tctx264036* a;
	a = (Tctx264036*)p;
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

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47505* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47505* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47505* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48247((&gch_49859.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, decref_53401)(Cell47505* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51458(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52220(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, nimGCunref)(void* p) {
	Cell47505* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_51440(p);
	decref_53401(LOC1);
}

N_NIMCALL(Tctx264036*, newctx_264267)(Tsym215822* module) {
	Tctx264036* result;
	Tctx264036* LOC1;
	PprocHEX3Aobjecttype264221* LOC2;
	NimStringDesc* LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = (Tctx264036*) newObj((&NTI264034), sizeof(Tctx264036));
	(*LOC1).Sup.Sup.m_type = (&NTI264036);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY264242*) newSeqRC1((&NTI264242), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY184090*) newSeqRC1((&NTI184090), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_216401(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_216401(((NU8) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq215824*) newSeqRC1((&NTI215824), 0);
	LOC2 = 0;
	LOC2 = (PprocHEX3Aobjecttype264221*) newObj((&NTI264028), sizeof(PprocHEX3Aobjecttype264221));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY264222*) newSeqRC1((&NTI264222), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_184087();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY264261*) newSeqRC1((&NTI264261), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP2844));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	return result;
}

static N_INLINE(void, incref_53819)(Cell47505* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51458(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52220(c);
	}
	LA4: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47505* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51440(src);
		incref_53819(LOC5);
	}
	LA3: ;
	{
		Cell47505* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51440((*dest));
		decref_53401(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, registercallback_264374)(Tctx264036* c, NimStringDesc* name, Vmcallback264032 callback) {
	TY264262 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).callbacks = (TY264261*) incrSeqV2(&((*c).callbacks)->Sup, sizeof(TY264262));
	LOC2 = 0;
	LOC2 = (*c).callbacks->data[(*c).callbacks->Sup.len].Field0; (*c).callbacks->data[(*c).callbacks->Sup.len].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c).callbacks->data[(*c).callbacks->Sup.len].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c).callbacks->data[(*c).callbacks->Sup.len].Field1.ClPrc = LOC1.Field1.ClPrc;
	++(*c).callbacks->Sup.len;
}

N_NIMCALL(void, refresh_264353)(Tctx264036* c, Tsym215822* module) {
	PprocHEX3Aobjecttype264221* LOC1;
	asgnRefNoCycle((void**) (&(*c).module), module);
	LOC1 = 0;
	LOC1 = (PprocHEX3Aobjecttype264221*) newObj((&NTI264028), sizeof(PprocHEX3Aobjecttype264221));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY264222*) newSeqRC1((&NTI264222), 0);
	asgnRefNoCycle((void**) (&(*c).prc), LOC1);
	(*c).loopiterations = ((NI) 1500000);
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit000)(void) {
static TNimNode* TMP2068[18];
static TNimNode* TMP2070[4];
static TNimNode* TMP2071[2];
static TNimNode* TMP2074[2];
static TNimNode* TMP2075[9];
NI TMP2077;
static char* NIM_CONST TMP2076[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP2079[5];
NI TMP2081;
static char* NIM_CONST TMP2080[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP2082[3];
NI TMP2084;
static char* NIM_CONST TMP2083[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP2085[2];
static TNimNode* TMP2086[2];
static TNimNode TMP939[57];
NTI264036.size = sizeof(Tctx264036);
NTI264036.kind = 17;
NTI264036.base = (&NTI262002);
TMP2068[0] = &TMP939[1];
NTI264242.size = sizeof(TY264242*);
NTI264242.kind = 24;
NTI264242.base = (&NTI120);
NTI264242.flags = 2;
NTI264242.marker = TMP2069;
TMP939[1].kind = 1;
TMP939[1].offset = offsetof(Tctx264036, code);
TMP939[1].typ = (&NTI264242);
TMP939[1].name = "code";
TMP2068[1] = &TMP939[2];
TMP939[2].kind = 1;
TMP939[2].offset = offsetof(Tctx264036, debug);
TMP939[2].typ = (&NTI184090);
TMP939[2].name = "debug";
TMP2068[2] = &TMP939[3];
TMP939[3].kind = 1;
TMP939[3].offset = offsetof(Tctx264036, globals);
TMP939[3].typ = (&NTI215782);
TMP939[3].name = "globals";
TMP2068[3] = &TMP939[4];
TMP939[4].kind = 1;
TMP939[4].offset = offsetof(Tctx264036, constants);
TMP939[4].typ = (&NTI215782);
TMP939[4].name = "constants";
TMP2068[4] = &TMP939[5];
TMP939[5].kind = 1;
TMP939[5].offset = offsetof(Tctx264036, types);
TMP939[5].typ = (&NTI215824);
TMP939[5].name = "types";
TMP2068[5] = &TMP939[6];
TMP939[6].kind = 1;
TMP939[6].offset = offsetof(Tctx264036, currentexceptiona);
TMP939[6].typ = (&NTI215782);
TMP939[6].name = "currentExceptionA";
TMP2068[6] = &TMP939[7];
TMP939[7].kind = 1;
TMP939[7].offset = offsetof(Tctx264036, currentexceptionb);
TMP939[7].typ = (&NTI215782);
TMP939[7].name = "currentExceptionB";
TMP2068[7] = &TMP939[8];
TMP939[8].kind = 1;
TMP939[8].offset = offsetof(Tctx264036, exceptioninstr);
TMP939[8].typ = (&NTI104);
TMP939[8].name = "exceptionInstr";
TMP2068[8] = &TMP939[9];
NTI264221.size = sizeof(PprocHEX3Aobjecttype264221);
NTI264221.kind = 18;
NTI264221.base = 0;
NTI264221.flags = 2;
TMP2070[0] = &TMP939[11];
NTI264018.size = sizeof(Tblock264018);
NTI264018.kind = 18;
NTI264018.base = 0;
NTI264018.flags = 2;
TMP2071[0] = &TMP939[13];
TMP939[13].kind = 1;
TMP939[13].offset = offsetof(Tblock264018, label);
TMP939[13].typ = (&NTI215788);
TMP939[13].name = "label";
TMP2071[1] = &TMP939[14];
NTI264202.size = sizeof(TY264202*);
NTI264202.kind = 24;
NTI264202.base = (&NTI104);
NTI264202.flags = 2;
NTI264202.marker = TMP2072;
TMP939[14].kind = 1;
TMP939[14].offset = offsetof(Tblock264018, fixups);
TMP939[14].typ = (&NTI264202);
TMP939[14].name = "fixups";
TMP939[12].len = 2; TMP939[12].kind = 2; TMP939[12].sons = &TMP2071[0];
NTI264018.node = &TMP939[12];
NTI264222.size = sizeof(TY264222*);
NTI264222.kind = 24;
NTI264222.base = (&NTI264018);
NTI264222.flags = 2;
NTI264222.marker = TMP2073;
TMP939[11].kind = 1;
TMP939[11].offset = offsetof(PprocHEX3Aobjecttype264221, blocks);
TMP939[11].typ = (&NTI264222);
TMP939[11].name = "blocks";
TMP2070[1] = &TMP939[15];
TMP939[15].kind = 1;
TMP939[15].offset = offsetof(PprocHEX3Aobjecttype264221, sym);
TMP939[15].typ = (&NTI215788);
TMP939[15].name = "sym";
TMP2070[2] = &TMP939[16];
NTI264227.size = sizeof(TY264227);
NTI264227.kind = 18;
NTI264227.base = 0;
NTI264227.flags = 3;
TMP2074[0] = &TMP939[18];
TMP939[18].kind = 1;
TMP939[18].offset = offsetof(TY264227, Field0);
TMP939[18].typ = (&NTI130);
TMP939[18].name = "Field0";
TMP2074[1] = &TMP939[19];
NTI264026.size = sizeof(NU8);
NTI264026.kind = 14;
NTI264026.base = 0;
NTI264026.flags = 3;
for (TMP2077 = 0; TMP2077 < 9; TMP2077++) {
TMP939[TMP2077+20].kind = 1;
TMP939[TMP2077+20].offset = TMP2077;
TMP939[TMP2077+20].name = TMP2076[TMP2077];
TMP2075[TMP2077] = &TMP939[TMP2077+20];
}
TMP939[29].len = 9; TMP939[29].kind = 2; TMP939[29].sons = &TMP2075[0];
NTI264026.node = &TMP939[29];
TMP939[19].kind = 1;
TMP939[19].offset = offsetof(TY264227, Field1);
TMP939[19].typ = (&NTI264026);
TMP939[19].name = "Field1";
TMP939[17].len = 2; TMP939[17].kind = 2; TMP939[17].sons = &TMP2074[0];
NTI264227.node = &TMP939[17];
NTI264230.size = sizeof(TY264230);
NTI264230.kind = 16;
NTI264230.base = (&NTI264227);
NTI264230.flags = 3;
TMP939[16].kind = 1;
TMP939[16].offset = offsetof(PprocHEX3Aobjecttype264221, slots);
TMP939[16].typ = (&NTI264230);
TMP939[16].name = "slots";
TMP2070[3] = &TMP939[30];
TMP939[30].kind = 1;
TMP939[30].offset = offsetof(PprocHEX3Aobjecttype264221, maxslots);
TMP939[30].typ = (&NTI104);
TMP939[30].name = "maxSlots";
TMP939[10].len = 4; TMP939[10].kind = 2; TMP939[10].sons = &TMP2070[0];
NTI264221.node = &TMP939[10];
NTI264028.size = sizeof(PprocHEX3Aobjecttype264221*);
NTI264028.kind = 22;
NTI264028.base = (&NTI264221);
NTI264028.flags = 2;
NTI264028.marker = TMP2078;
TMP939[9].kind = 1;
TMP939[9].offset = offsetof(Tctx264036, prc);
TMP939[9].typ = (&NTI264028);
TMP939[9].name = "prc";
TMP2068[9] = &TMP939[31];
TMP939[31].kind = 1;
TMP939[31].offset = offsetof(Tctx264036, module);
TMP939[31].typ = (&NTI215788);
TMP939[31].name = "module";
TMP2068[10] = &TMP939[32];
TMP939[32].kind = 1;
TMP939[32].offset = offsetof(Tctx264036, callsite);
TMP939[32].typ = (&NTI215782);
TMP939[32].name = "callsite";
TMP2068[11] = &TMP939[33];
NTI264020.size = sizeof(NU8);
NTI264020.kind = 14;
NTI264020.base = 0;
NTI264020.flags = 3;
for (TMP2081 = 0; TMP2081 < 5; TMP2081++) {
TMP939[TMP2081+34].kind = 1;
TMP939[TMP2081+34].offset = TMP2081;
TMP939[TMP2081+34].name = TMP2080[TMP2081];
TMP2079[TMP2081] = &TMP939[TMP2081+34];
}
TMP939[39].len = 5; TMP939[39].kind = 2; TMP939[39].sons = &TMP2079[0];
NTI264020.node = &TMP939[39];
TMP939[33].kind = 1;
TMP939[33].offset = offsetof(Tctx264036, mode);
TMP939[33].typ = (&NTI264020);
TMP939[33].name = "mode";
TMP2068[12] = &TMP939[40];
NTI264022.size = sizeof(NU8);
NTI264022.kind = 14;
NTI264022.base = 0;
NTI264022.flags = 3;
for (TMP2084 = 0; TMP2084 < 3; TMP2084++) {
TMP939[TMP2084+41].kind = 1;
TMP939[TMP2084+41].offset = TMP2084;
TMP939[TMP2084+41].name = TMP2083[TMP2084];
TMP2082[TMP2084] = &TMP939[TMP2084+41];
}
TMP939[44].len = 3; TMP939[44].kind = 2; TMP939[44].sons = &TMP2082[0];
NTI264022.node = &TMP939[44];
NTI264024.size = sizeof(NU8);
NTI264024.kind = 19;
NTI264024.base = (&NTI264022);
NTI264024.flags = 3;
TMP939[45].len = 0; TMP939[45].kind = 0;
NTI264024.node = &TMP939[45];
TMP939[40].kind = 1;
TMP939[40].offset = offsetof(Tctx264036, features);
TMP939[40].typ = (&NTI264024);
TMP939[40].name = "features";
TMP2068[13] = &TMP939[46];
TMP939[46].kind = 1;
TMP939[46].offset = offsetof(Tctx264036, traceactive);
TMP939[46].typ = (&NTI130);
TMP939[46].name = "traceActive";
TMP2068[14] = &TMP939[47];
TMP939[47].kind = 1;
TMP939[47].offset = offsetof(Tctx264036, loopiterations);
TMP939[47].typ = (&NTI104);
TMP939[47].name = "loopIterations";
TMP2068[15] = &TMP939[48];
TMP939[48].kind = 1;
TMP939[48].offset = offsetof(Tctx264036, comesfromheuristic);
TMP939[48].typ = (&NTI183337);
TMP939[48].name = "comesFromHeuristic";
TMP2068[16] = &TMP939[49];
NTI264262.size = sizeof(TY264262);
NTI264262.kind = 18;
NTI264262.base = 0;
TMP2085[0] = &TMP939[51];
TMP939[51].kind = 1;
TMP939[51].offset = offsetof(TY264262, Field0);
TMP939[51].typ = (&NTI138);
TMP939[51].name = "Field0";
TMP2085[1] = &TMP939[52];
NTI264032.size = sizeof(TY532873);
NTI264032.kind = 18;
NTI264032.base = 0;
NTI264032.flags = 2;
TMP2086[0] = &TMP939[54];
TMP939[54].kind = 1;
TMP939[54].offset = offsetof(TY532873, Field0);
TMP939[54].typ = (&NTI142);
TMP939[54].name = "Field0";
TMP2086[1] = &TMP939[55];
TMP939[55].kind = 1;
TMP939[55].offset = offsetof(TY532873, Field1);
TMP939[55].typ = (&NTI532875);
TMP939[55].name = "Field1";
TMP939[53].len = 2; TMP939[53].kind = 2; TMP939[53].sons = &TMP2086[0];
NTI264032.node = &TMP939[53];
TMP939[52].kind = 1;
TMP939[52].offset = offsetof(TY264262, Field1);
TMP939[52].typ = (&NTI264032);
TMP939[52].name = "Field1";
TMP939[50].len = 2; TMP939[50].kind = 2; TMP939[50].sons = &TMP2085[0];
NTI264262.node = &TMP939[50];
NTI264261.size = sizeof(TY264261*);
NTI264261.kind = 24;
NTI264261.base = (&NTI264262);
NTI264261.marker = TMP2087;
TMP939[49].kind = 1;
TMP939[49].offset = offsetof(Tctx264036, callbacks);
TMP939[49].typ = (&NTI264261);
TMP939[49].name = "callbacks";
TMP2068[17] = &TMP939[56];
TMP939[56].kind = 1;
TMP939[56].offset = offsetof(Tctx264036, errorflag);
TMP939[56].typ = (&NTI138);
TMP939[56].name = "errorFlag";
TMP939[0].len = 18; TMP939[0].kind = 2; TMP939[0].sons = &TMP2068[0];
NTI264036.node = &TMP939[0];
NTI264034.size = sizeof(Tctx264036*);
NTI264034.kind = 22;
NTI264034.base = (&NTI264036);
NTI264034.marker = TMP2088;
}

