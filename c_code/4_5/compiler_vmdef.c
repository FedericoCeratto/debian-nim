/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx343035 Tctx343035;
typedef struct Tpasscontext341002 Tpasscontext341002;
typedef struct TNimObject TNimObject;
typedef struct TY343241 TY343241;
typedef struct TY192086 TY192086;
typedef struct Tnode292802 Tnode292802;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct PprocHEX3Aobjecttype343220 PprocHEX3Aobjecttype343220;
typedef struct Tsym292834 Tsym292834;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct TY343260 TY343260;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY343221 TY343221;
typedef struct TY343226 TY343226;
typedef struct Tblock343017 Tblock343017;
typedef struct TY343201 TY343201;
typedef struct TY343261 TY343261;
typedef struct Vmargs343029 Vmargs343029;
typedef struct TY178027 TY178027;
typedef struct TY178030 TY178030;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29485 Memregion29485;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29479 Llchunk29479;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29483 Avlnode29483;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct Ttype292840 Ttype292840;
typedef struct Tident199010 Tident199010;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Tlib292820 Tlib292820;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct TY292960 TY292960;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY292961 TY292961;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext341002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef NU8 Tevalmode343019;
typedef NU8 Tsandboxflag343021Set;
struct  Tlineinfo191336  {
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
struct  Tctx343035  {
  Tpasscontext341002 Sup;
TY343241* code;
TY192086* debug;
Tnode292802* globals;
Tnode292802* constants;
Ttypeseq292836* types;
Tnode292802* currentexceptiona;
Tnode292802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype343220* prc;
Tsym292834* module;
Tnode292802* callsite;
Tevalmode343019 mode;
Tsandboxflag343021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo191336 comesfromheuristic;
TY343260* callbacks;
NimStringDesc* errorflag;
};
typedef NU8 Tslotkind343025;
struct TY343226 {
NIM_BOOL Field0;
Tslotkind343025 Field1;
};
typedef TY343226 TY343229[256];
struct  PprocHEX3Aobjecttype343220  {
TY343221* blocks;
Tsym292834* sym;
TY343229 slots;
NI maxslots;
};
struct  Tblock343017  {
Tsym292834* label;
TY343201* fixups;
};
typedef NU8 Tsandboxflag343021;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs343029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback343031;
struct TY343261 {
NimStringDesc* Field0;
Vmcallback343031 Field1;
};
struct TY178027 {
void* Field0;
TY178030* Field1;
};
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
};
typedef Smallchunk29439* TY29500[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29485  {
NI minlargeobj;
NI maxlargeobj;
TY29500 freesmallchunks;
Llchunk29479* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29483* root;
Avlnode29483* deleted;
Avlnode29483* last;
Avlnode29483* freeavlnodes;
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
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellseq47320 tempstack;
NI recgclock;
Memregion29485 region;
Gcstat49814 stat;
Cellset47316 marked;
Cellseq47320 additionalroots;
};
typedef NU8 Tnodekind292020;
typedef NU16 Tnodeflag292427Set;
struct  Tnode292802  {
Ttype292840* typ;
Tlineinfo191336 info;
Tnodeflag292427Set flags;
Tnodekind292020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym292834* sym;
} S4;
struct {Tident199010* ident;
} S5;
struct {Tnodeseq292796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind292435;
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef NU16 Tmagic292524;
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
typedef NU8 Tlockind292808;
typedef NU8 Tstorageloc292812;
typedef NU16 Tlocflag292810Set;
struct  Tloc292816  {
Tlockind292808 k;
Tstorageloc292812 s;
Tlocflag292810Set flags;
Ttype292840* t;
Ropeobj178006* r;
};
struct  Tsym292834  {
  Tidobj199004 Sup;
Tsymkind292435 kind;
union{
struct {Ttypeseq292836* typeinstcache;
} S1;
struct {TY292929* procinstcache;
Tsym292834* gcunsafetyreason;
} S2;
struct {TY292929* usedgenerics;
Tstrtable292806 tab;
} S3;
struct {Tsym292834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic292524 magic;
Ttype292840* typ;
Tident199010* name;
Tlineinfo191336 info;
Tsym292834* owner;
Tsymflag292184Set flags;
Tnode292802* ast;
Toption169009Set options;
NI position;
NI offset;
Tloc292816 loc;
Tlib292820* annex;
Tnode292802* constraint;
};
struct  Vmargs343029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode292802* currentexception;
};
struct TY178030 {
char dummy;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29479  {
NI size;
NI acc;
Llchunk29479* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
typedef NI TY29418[16];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29483* TY29490[2];
struct  Avlnode29483  {
TY29490 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29418 bits;
};
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
struct  Ttype292840  {
  Tidobj199004 Sup;
Ttypekind292244 kind;
Tcallingconvention292002 callconv;
Ttypeflag292431Set flags;
Ttypeseq292836* sons;
Tnode292802* n;
Tsym292834* owner;
Tsym292834* sym;
Tsym292834* destructor;
Tsym292834* deepcopy;
Tsym292834* assignment;
TY292960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc292816 loc;
};
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
};
struct  Ropeobj178006  {
  TNimObject Sup;
Ropeobj178006* left;
Ropeobj178006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind292818;
struct  Tlib292820  {
  Tlistentry147007 Sup;
Tlibkind292818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj178006* name;
Tnode292802* path;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct TY343241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY343201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY343221 {
  TGenericSeq Sup;
  Tblock343017 data[SEQ_DECL_SIZE];
};
struct TY343260 {
  TGenericSeq Sup;
  TY343261 data[SEQ_DECL_SIZE];
};
struct TY192086 {
  TGenericSeq Sup;
  Tlineinfo191336 data[SEQ_DECL_SIZE];
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, T984354655_3)(void* p, NI op);
N_NIMCALL(void, T984354655_6)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T984354655_7)(void* p, NI op);
N_NIMCALL(void, T984354655_12)(void* p, NI op);
N_NIMCALL(void, T984354655_21)(void* p, NI op);
N_NIMCALL(void, T984354655_22)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(Tnode292802*, newnode_293401_850551059)(Tnodekind292020 kind0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(Tlineinfo191336, unknownlineinfo_192083_155036129)(void);
N_NIMCALL(void, nimGCunref)(void* p0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0);
static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0);
STRING_LITERAL(T984354655_23, "", 0);
extern TNimType NTI341002; /* TPassContext */
TNimType NTI343035; /* TCtx */
extern TNimType NTI120; /* uint32 */
TNimType NTI343241; /* seq[TInstr] */
extern TNimType NTI192086; /* seq[TLineInfo] */
extern TNimType NTI292794; /* PNode */
extern TNimType NTI292836; /* TTypeSeq */
extern TNimType NTI104; /* int */
TNimType NTI343220; /* PProc:ObjectType */
TNimType NTI343017; /* TBlock */
extern TNimType NTI292800; /* PSym */
TNimType NTI343201; /* seq[TPosition] */
TNimType NTI343221; /* seq[TBlock] */
TNimType NTI343226; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI130; /* bool */
TNimType NTI343025; /* TSlotKind */
TNimType NTI343229; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI343027; /* PProc */
TNimType NTI343019; /* TEvalMode */
TNimType NTI343021; /* TSandboxFlag */
TNimType NTI343023; /* TSandboxFlags */
extern TNimType NTI191336; /* TLineInfo */
TNimType NTI343261; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI138; /* string */
TNimType NTI343031; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
extern TNimType NTI178029; /* ref tuple[] */
TNimType NTI343260; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI343033; /* PCtx */
extern Gcheap49818 gch_49858_1689653243;
N_NIMCALL(void, T984354655_3)(void* p, NI op) {
	TY343241* a;
	NI LOC1;
	a = (TY343241*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, T984354655_6)(void* p, NI op) {
	TY343201* a;
	NI LOC1;
	a = (TY343201*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, T984354655_7)(void* p, NI op) {
	TY343221* a;
	NI LOC1;
	a = (TY343221*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, T984354655_12)(void* p, NI op) {
	PprocHEX3Aobjecttype343220* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype343220*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, T984354655_21)(void* p, NI op) {
	TY343260* a;
	NI LOC1;
	a = (TY343260*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, T984354655_22)(void* p, NI op) {
	Tctx343035* a;
	a = (Tctx343035*)p;
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

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47304))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47304* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47304* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47304* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51440_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tctx343035*, newctx_343286_984354655)(Tsym292834* module0) {
	Tctx343035* result0;
	Tctx343035* LOC1;
	PprocHEX3Aobjecttype343220* LOC2;
	NimStringDesc* LOC3;
	result0 = (Tctx343035*)0;
	LOC1 = (Tctx343035*)0;
	LOC1 = (Tctx343035*) newObj((&NTI343033), sizeof(Tctx343035));
	(*LOC1).Sup.Sup.m_type = (&NTI343035);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY343241*) newSeqRC1((&NTI343241), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY192086*) newSeqRC1((&NTI192086), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_293401_850551059(((Tnodekind292020) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_293401_850551059(((Tnodekind292020) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq292836*) newSeqRC1((&NTI292836), 0);
	LOC2 = (PprocHEX3Aobjecttype343220*)0;
	LOC2 = (PprocHEX3Aobjecttype343220*) newObj((&NTI343027), sizeof(PprocHEX3Aobjecttype343220));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY343221*) newSeqRC1((&NTI343221), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module0);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_192083_155036129();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY343260*) newSeqRC1((&NTI343260), 0);
	LOC3 = (NimStringDesc*)0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &T984354655_23));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result0 = LOC1;
	return result0;
}

static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47304* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47304*)0;
		LOC5 = usrtocell_51440_1689653243(src0);
		incref_53419_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47304* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47304*)0;
		LOC10 = usrtocell_51440_1689653243((*dest0));
		decref_53001_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, registercallback_343393_984354655)(Tctx343035* c0, NimStringDesc* name0, Vmcallback343031 callback0) {
	TY343261 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name0);
	LOC1.Field1.ClEnv = callback0.ClEnv;
	LOC1.Field1.ClPrc = callback0.ClPrc;
	(*c0).callbacks = (TY343260*) incrSeqV2(&((*c0).callbacks)->Sup, sizeof(TY343261));
	LOC2 = (NimStringDesc*)0;
	LOC2 = (*c0).callbacks->data[(*c0).callbacks->Sup.len].Field0; (*c0).callbacks->data[(*c0).callbacks->Sup.len].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c0).callbacks->data[(*c0).callbacks->Sup.len].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c0).callbacks->data[(*c0).callbacks->Sup.len].Field1.ClPrc = LOC1.Field1.ClPrc;
	++(*c0).callbacks->Sup.len;
}

N_NIMCALL(void, refresh_343372_984354655)(Tctx343035* c0, Tsym292834* module0) {
	PprocHEX3Aobjecttype343220* LOC1;
	asgnRefNoCycle((void**) (&(*c0).module), module0);
	LOC1 = (PprocHEX3Aobjecttype343220*)0;
	LOC1 = (PprocHEX3Aobjecttype343220*) newObj((&NTI343027), sizeof(PprocHEX3Aobjecttype343220));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY343221*) newSeqRC1((&NTI343221), 0);
	asgnRefNoCycle((void**) (&(*c0).prc), LOC1);
	(*c0).loopiterations = ((NI) 1500000);
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit000)(void) {
static TNimNode* T984354655_2[18];
static TNimNode* T984354655_4[4];
static TNimNode* T984354655_5[2];
static TNimNode* T984354655_8[2];
static TNimNode* T984354655_9[9];
NI T984354655_11;
static char* NIM_CONST T984354655_10[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* T984354655_13[5];
NI T984354655_15;
static char* NIM_CONST T984354655_14[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* T984354655_16[3];
NI T984354655_18;
static char* NIM_CONST T984354655_17[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* T984354655_19[2];
static TNimNode* T984354655_20[2];
static TNimNode T984354655_0[57];
NTI343035.size = sizeof(Tctx343035);
NTI343035.kind = 17;
NTI343035.base = (&NTI341002);
T984354655_2[0] = &T984354655_0[1];
NTI343241.size = sizeof(TY343241*);
NTI343241.kind = 24;
NTI343241.base = (&NTI120);
NTI343241.flags = 2;
NTI343241.marker = T984354655_3;
T984354655_0[1].kind = 1;
T984354655_0[1].offset = offsetof(Tctx343035, code);
T984354655_0[1].typ = (&NTI343241);
T984354655_0[1].name = "code";
T984354655_2[1] = &T984354655_0[2];
T984354655_0[2].kind = 1;
T984354655_0[2].offset = offsetof(Tctx343035, debug);
T984354655_0[2].typ = (&NTI192086);
T984354655_0[2].name = "debug";
T984354655_2[2] = &T984354655_0[3];
T984354655_0[3].kind = 1;
T984354655_0[3].offset = offsetof(Tctx343035, globals);
T984354655_0[3].typ = (&NTI292794);
T984354655_0[3].name = "globals";
T984354655_2[3] = &T984354655_0[4];
T984354655_0[4].kind = 1;
T984354655_0[4].offset = offsetof(Tctx343035, constants);
T984354655_0[4].typ = (&NTI292794);
T984354655_0[4].name = "constants";
T984354655_2[4] = &T984354655_0[5];
T984354655_0[5].kind = 1;
T984354655_0[5].offset = offsetof(Tctx343035, types);
T984354655_0[5].typ = (&NTI292836);
T984354655_0[5].name = "types";
T984354655_2[5] = &T984354655_0[6];
T984354655_0[6].kind = 1;
T984354655_0[6].offset = offsetof(Tctx343035, currentexceptiona);
T984354655_0[6].typ = (&NTI292794);
T984354655_0[6].name = "currentExceptionA";
T984354655_2[6] = &T984354655_0[7];
T984354655_0[7].kind = 1;
T984354655_0[7].offset = offsetof(Tctx343035, currentexceptionb);
T984354655_0[7].typ = (&NTI292794);
T984354655_0[7].name = "currentExceptionB";
T984354655_2[7] = &T984354655_0[8];
T984354655_0[8].kind = 1;
T984354655_0[8].offset = offsetof(Tctx343035, exceptioninstr);
T984354655_0[8].typ = (&NTI104);
T984354655_0[8].name = "exceptionInstr";
T984354655_2[8] = &T984354655_0[9];
NTI343220.size = sizeof(PprocHEX3Aobjecttype343220);
NTI343220.kind = 18;
NTI343220.base = 0;
NTI343220.flags = 2;
T984354655_4[0] = &T984354655_0[11];
NTI343017.size = sizeof(Tblock343017);
NTI343017.kind = 18;
NTI343017.base = 0;
NTI343017.flags = 2;
T984354655_5[0] = &T984354655_0[13];
T984354655_0[13].kind = 1;
T984354655_0[13].offset = offsetof(Tblock343017, label);
T984354655_0[13].typ = (&NTI292800);
T984354655_0[13].name = "label";
T984354655_5[1] = &T984354655_0[14];
NTI343201.size = sizeof(TY343201*);
NTI343201.kind = 24;
NTI343201.base = (&NTI104);
NTI343201.flags = 2;
NTI343201.marker = T984354655_6;
T984354655_0[14].kind = 1;
T984354655_0[14].offset = offsetof(Tblock343017, fixups);
T984354655_0[14].typ = (&NTI343201);
T984354655_0[14].name = "fixups";
T984354655_0[12].len = 2; T984354655_0[12].kind = 2; T984354655_0[12].sons = &T984354655_5[0];
NTI343017.node = &T984354655_0[12];
NTI343221.size = sizeof(TY343221*);
NTI343221.kind = 24;
NTI343221.base = (&NTI343017);
NTI343221.flags = 2;
NTI343221.marker = T984354655_7;
T984354655_0[11].kind = 1;
T984354655_0[11].offset = offsetof(PprocHEX3Aobjecttype343220, blocks);
T984354655_0[11].typ = (&NTI343221);
T984354655_0[11].name = "blocks";
T984354655_4[1] = &T984354655_0[15];
T984354655_0[15].kind = 1;
T984354655_0[15].offset = offsetof(PprocHEX3Aobjecttype343220, sym);
T984354655_0[15].typ = (&NTI292800);
T984354655_0[15].name = "sym";
T984354655_4[2] = &T984354655_0[16];
NTI343226.size = sizeof(TY343226);
NTI343226.kind = 18;
NTI343226.base = 0;
NTI343226.flags = 3;
T984354655_8[0] = &T984354655_0[18];
T984354655_0[18].kind = 1;
T984354655_0[18].offset = offsetof(TY343226, Field0);
T984354655_0[18].typ = (&NTI130);
T984354655_0[18].name = "Field0";
T984354655_8[1] = &T984354655_0[19];
NTI343025.size = sizeof(Tslotkind343025);
NTI343025.kind = 14;
NTI343025.base = 0;
NTI343025.flags = 3;
for (T984354655_11 = 0; T984354655_11 < 9; T984354655_11++) {
T984354655_0[T984354655_11+20].kind = 1;
T984354655_0[T984354655_11+20].offset = T984354655_11;
T984354655_0[T984354655_11+20].name = T984354655_10[T984354655_11];
T984354655_9[T984354655_11] = &T984354655_0[T984354655_11+20];
}
T984354655_0[29].len = 9; T984354655_0[29].kind = 2; T984354655_0[29].sons = &T984354655_9[0];
NTI343025.node = &T984354655_0[29];
T984354655_0[19].kind = 1;
T984354655_0[19].offset = offsetof(TY343226, Field1);
T984354655_0[19].typ = (&NTI343025);
T984354655_0[19].name = "Field1";
T984354655_0[17].len = 2; T984354655_0[17].kind = 2; T984354655_0[17].sons = &T984354655_8[0];
NTI343226.node = &T984354655_0[17];
NTI343229.size = sizeof(TY343229);
NTI343229.kind = 16;
NTI343229.base = (&NTI343226);
NTI343229.flags = 3;
T984354655_0[16].kind = 1;
T984354655_0[16].offset = offsetof(PprocHEX3Aobjecttype343220, slots);
T984354655_0[16].typ = (&NTI343229);
T984354655_0[16].name = "slots";
T984354655_4[3] = &T984354655_0[30];
T984354655_0[30].kind = 1;
T984354655_0[30].offset = offsetof(PprocHEX3Aobjecttype343220, maxslots);
T984354655_0[30].typ = (&NTI104);
T984354655_0[30].name = "maxSlots";
T984354655_0[10].len = 4; T984354655_0[10].kind = 2; T984354655_0[10].sons = &T984354655_4[0];
NTI343220.node = &T984354655_0[10];
NTI343027.size = sizeof(PprocHEX3Aobjecttype343220*);
NTI343027.kind = 22;
NTI343027.base = (&NTI343220);
NTI343027.flags = 2;
NTI343027.marker = T984354655_12;
T984354655_0[9].kind = 1;
T984354655_0[9].offset = offsetof(Tctx343035, prc);
T984354655_0[9].typ = (&NTI343027);
T984354655_0[9].name = "prc";
T984354655_2[9] = &T984354655_0[31];
T984354655_0[31].kind = 1;
T984354655_0[31].offset = offsetof(Tctx343035, module);
T984354655_0[31].typ = (&NTI292800);
T984354655_0[31].name = "module";
T984354655_2[10] = &T984354655_0[32];
T984354655_0[32].kind = 1;
T984354655_0[32].offset = offsetof(Tctx343035, callsite);
T984354655_0[32].typ = (&NTI292794);
T984354655_0[32].name = "callsite";
T984354655_2[11] = &T984354655_0[33];
NTI343019.size = sizeof(Tevalmode343019);
NTI343019.kind = 14;
NTI343019.base = 0;
NTI343019.flags = 3;
for (T984354655_15 = 0; T984354655_15 < 5; T984354655_15++) {
T984354655_0[T984354655_15+34].kind = 1;
T984354655_0[T984354655_15+34].offset = T984354655_15;
T984354655_0[T984354655_15+34].name = T984354655_14[T984354655_15];
T984354655_13[T984354655_15] = &T984354655_0[T984354655_15+34];
}
T984354655_0[39].len = 5; T984354655_0[39].kind = 2; T984354655_0[39].sons = &T984354655_13[0];
NTI343019.node = &T984354655_0[39];
T984354655_0[33].kind = 1;
T984354655_0[33].offset = offsetof(Tctx343035, mode);
T984354655_0[33].typ = (&NTI343019);
T984354655_0[33].name = "mode";
T984354655_2[12] = &T984354655_0[40];
NTI343021.size = sizeof(Tsandboxflag343021);
NTI343021.kind = 14;
NTI343021.base = 0;
NTI343021.flags = 3;
for (T984354655_18 = 0; T984354655_18 < 3; T984354655_18++) {
T984354655_0[T984354655_18+41].kind = 1;
T984354655_0[T984354655_18+41].offset = T984354655_18;
T984354655_0[T984354655_18+41].name = T984354655_17[T984354655_18];
T984354655_16[T984354655_18] = &T984354655_0[T984354655_18+41];
}
T984354655_0[44].len = 3; T984354655_0[44].kind = 2; T984354655_0[44].sons = &T984354655_16[0];
NTI343021.node = &T984354655_0[44];
NTI343023.size = sizeof(Tsandboxflag343021Set);
NTI343023.kind = 19;
NTI343023.base = (&NTI343021);
NTI343023.flags = 3;
T984354655_0[45].len = 0; T984354655_0[45].kind = 0;
NTI343023.node = &T984354655_0[45];
T984354655_0[40].kind = 1;
T984354655_0[40].offset = offsetof(Tctx343035, features);
T984354655_0[40].typ = (&NTI343023);
T984354655_0[40].name = "features";
T984354655_2[13] = &T984354655_0[46];
T984354655_0[46].kind = 1;
T984354655_0[46].offset = offsetof(Tctx343035, traceactive);
T984354655_0[46].typ = (&NTI130);
T984354655_0[46].name = "traceActive";
T984354655_2[14] = &T984354655_0[47];
T984354655_0[47].kind = 1;
T984354655_0[47].offset = offsetof(Tctx343035, loopiterations);
T984354655_0[47].typ = (&NTI104);
T984354655_0[47].name = "loopIterations";
T984354655_2[15] = &T984354655_0[48];
T984354655_0[48].kind = 1;
T984354655_0[48].offset = offsetof(Tctx343035, comesfromheuristic);
T984354655_0[48].typ = (&NTI191336);
T984354655_0[48].name = "comesFromHeuristic";
T984354655_2[16] = &T984354655_0[49];
NTI343261.size = sizeof(TY343261);
NTI343261.kind = 18;
NTI343261.base = 0;
T984354655_19[0] = &T984354655_0[51];
T984354655_0[51].kind = 1;
T984354655_0[51].offset = offsetof(TY343261, Field0);
T984354655_0[51].typ = (&NTI138);
T984354655_0[51].name = "Field0";
T984354655_19[1] = &T984354655_0[52];
NTI343031.size = sizeof(TY178027);
NTI343031.kind = 18;
NTI343031.base = 0;
NTI343031.flags = 2;
T984354655_20[0] = &T984354655_0[54];
T984354655_0[54].kind = 1;
T984354655_0[54].offset = offsetof(TY178027, Field0);
T984354655_0[54].typ = (&NTI142);
T984354655_0[54].name = "Field0";
T984354655_20[1] = &T984354655_0[55];
T984354655_0[55].kind = 1;
T984354655_0[55].offset = offsetof(TY178027, Field1);
T984354655_0[55].typ = (&NTI178029);
T984354655_0[55].name = "Field1";
T984354655_0[53].len = 2; T984354655_0[53].kind = 2; T984354655_0[53].sons = &T984354655_20[0];
NTI343031.node = &T984354655_0[53];
T984354655_0[52].kind = 1;
T984354655_0[52].offset = offsetof(TY343261, Field1);
T984354655_0[52].typ = (&NTI343031);
T984354655_0[52].name = "Field1";
T984354655_0[50].len = 2; T984354655_0[50].kind = 2; T984354655_0[50].sons = &T984354655_19[0];
NTI343261.node = &T984354655_0[50];
NTI343260.size = sizeof(TY343260*);
NTI343260.kind = 24;
NTI343260.base = (&NTI343261);
NTI343260.marker = T984354655_21;
T984354655_0[49].kind = 1;
T984354655_0[49].offset = offsetof(Tctx343035, callbacks);
T984354655_0[49].typ = (&NTI343260);
T984354655_0[49].name = "callbacks";
T984354655_2[17] = &T984354655_0[56];
T984354655_0[56].kind = 1;
T984354655_0[56].offset = offsetof(Tctx343035, errorflag);
T984354655_0[56].typ = (&NTI138);
T984354655_0[56].name = "errorFlag";
T984354655_0[0].len = 18; T984354655_0[0].kind = 2; T984354655_0[0].sons = &T984354655_2[0];
NTI343035.node = &T984354655_0[0];
NTI343033.size = sizeof(Tctx343035*);
NTI343033.kind = 22;
NTI343033.base = (&NTI343035);
NTI343033.marker = T984354655_22;
}

