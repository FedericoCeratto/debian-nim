/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx344035 Tctx344035;
typedef struct Tpasscontext342002 Tpasscontext342002;
typedef struct TNimObject TNimObject;
typedef struct TY344241 TY344241;
typedef struct TY193083 TY193083;
typedef struct Tnode293802 Tnode293802;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct PprocHEX3Aobjecttype344220 PprocHEX3Aobjecttype344220;
typedef struct Tsym293834 Tsym293834;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct TY344260 TY344260;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY344221 TY344221;
typedef struct TY344226 TY344226;
typedef struct Tblock344017 Tblock344017;
typedef struct TY344201 TY344201;
typedef struct TY344261 TY344261;
typedef struct Vmargs344029 Vmargs344029;
typedef struct TY179027 TY179027;
typedef struct TY179030 TY179030;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29486 Memregion29486;
typedef struct Smallchunk29440 Smallchunk29440;
typedef struct Llchunk29480 Llchunk29480;
typedef struct Bigchunk29442 Bigchunk29442;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29484 Avlnode29484;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Ttype293840 Ttype293840;
typedef struct Tident200010 Tident200010;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293820 Tlib293820;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct TY293960 TY293960;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY293961 TY293961;
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
struct  Tpasscontext342002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef NU8 Tevalmode344019;
typedef NU8 Tsandboxflag344021Set;
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
struct  Tctx344035  {
  Tpasscontext342002 Sup;
TY344241* code;
TY193083* debug;
Tnode293802* globals;
Tnode293802* constants;
Ttypeseq293836* types;
Tnode293802* currentexceptiona;
Tnode293802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype344220* prc;
Tsym293834* module;
Tnode293802* callsite;
Tevalmode344019 mode;
Tsandboxflag344021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo192336 comesfromheuristic;
TY344260* callbacks;
NimStringDesc* errorflag;
};
typedef NU8 Tslotkind344025;
struct TY344226 {
NIM_BOOL Field0;
Tslotkind344025 Field1;
};
typedef TY344226 TY344229[256];
struct  PprocHEX3Aobjecttype344220  {
TY344221* blocks;
Tsym293834* sym;
TY344229 slots;
NI maxslots;
};
struct  Tblock344017  {
Tsym293834* label;
TY344201* fixups;
};
typedef NU8 Tsandboxflag344021;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs344029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback344031;
struct TY344261 {
NimStringDesc* Field0;
Vmcallback344031 Field1;
};
struct TY179027 {
void* Field0;
TY179030* Field1;
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
typedef Smallchunk29440* TY29501[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29486  {
NI minlargeobj;
NI maxlargeobj;
TY29501 freesmallchunks;
Llchunk29480* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29442* freechunkslist;
Intset29414 chunkstarts;
Avlnode29484* root;
Avlnode29484* deleted;
Avlnode29484* last;
Avlnode29484* freeavlnodes;
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
Memregion29486 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
typedef NU8 Tnodekind293020;
typedef NU16 Tnodeflag293427Set;
struct  Tnode293802  {
Ttype293840* typ;
Tlineinfo192336 info;
Tnodeflag293427Set flags;
Tnodekind293020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293834* sym;
} S4;
struct {Tident200010* ident;
} S5;
struct {Tnodeseq293796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind293435;
struct  Tstrtable293806  {
NI counter;
Tsymseq293804* data;
};
typedef NU16 Tmagic293524;
typedef NU32 Tsymflag293184Set;
typedef NU32 Toption170009Set;
typedef NU8 Tlockind293808;
typedef NU8 Tstorageloc293812;
typedef NU16 Tlocflag293810Set;
struct  Tloc293816  {
Tlockind293808 k;
Tstorageloc293812 s;
Tlocflag293810Set flags;
Ttype293840* t;
Ropeobj179006* r;
};
struct  Tsym293834  {
  Tidobj200004 Sup;
Tsymkind293435 kind;
union{
struct {Ttypeseq293836* typeinstcache;
} S1;
struct {TY293929* procinstcache;
Tsym293834* gcunsafetyreason;
} S2;
struct {TY293929* usedgenerics;
Tstrtable293806 tab;
} S3;
struct {Tsym293834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic293524 magic;
Ttype293840* typ;
Tident200010* name;
Tlineinfo192336 info;
Tsym293834* owner;
Tsymflag293184Set flags;
Tnode293802* ast;
Toption170009Set options;
NI position;
NI offset;
Tloc293816 loc;
Tlib293820* annex;
Tnode293802* constraint;
};
struct  Vmargs344029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode293802* currentexception;
};
struct TY179030 {
char dummy;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29440  {
  Basechunk29438 Sup;
Smallchunk29440* next;
Smallchunk29440* prev;
Freecell29430* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29480  {
NI size;
NI acc;
Llchunk29480* next;
};
struct  Bigchunk29442  {
  Basechunk29438 Sup;
Bigchunk29442* next;
Bigchunk29442* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29484* TY29491[2];
struct  Avlnode29484  {
TY29491 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
typedef NU8 Ttypekind293244;
typedef NU8 Tcallingconvention293002;
typedef NU32 Ttypeflag293431Set;
struct  Ttype293840  {
  Tidobj200004 Sup;
Ttypekind293244 kind;
Tcallingconvention293002 callconv;
Ttypeflag293431Set flags;
Ttypeseq293836* sons;
Tnode293802* n;
Tsym293834* owner;
Tsym293834* sym;
Tsym293834* destructor;
Tsym293834* deepcopy;
Tsym293834* assignment;
TY293960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293816 loc;
};
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
NI h;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind293818;
struct  Tlib293820  {
  Tlistentry147007 Sup;
Tlibkind293818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293802* path;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct TY293961 {
NI Field0;
Tsym293834* Field1;
};
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
struct TY344241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY344201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY344221 {
  TGenericSeq Sup;
  Tblock344017 data[SEQ_DECL_SIZE];
};
struct TY344260 {
  TGenericSeq Sup;
  TY344261 data[SEQ_DECL_SIZE];
};
struct TY193083 {
  TGenericSeq Sup;
  Tlineinfo192336 data[SEQ_DECL_SIZE];
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
struct TY293929 {
  TGenericSeq Sup;
  Tinstantiation293824* data[SEQ_DECL_SIZE];
};
struct Tsymseq293804 {
  TGenericSeq Sup;
  Tsym293834* data[SEQ_DECL_SIZE];
};
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
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
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(Tnode293802*, newnode_294401_850551059)(Tnodekind293020 kind0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(Tlineinfo192336, unknownlineinfo_193080_155036129)(void);
N_NIMCALL(void, nimGCunref)(void* p0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0);
static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0);
STRING_LITERAL(T984354655_23, "", 0);
extern TNimType NTI342002; /* TPassContext */
TNimType NTI344035; /* TCtx */
extern TNimType NTI120; /* uint32 */
TNimType NTI344241; /* seq[TInstr] */
extern TNimType NTI193083; /* seq[TLineInfo] */
extern TNimType NTI293794; /* PNode */
extern TNimType NTI293836; /* TTypeSeq */
extern TNimType NTI104; /* int */
TNimType NTI344220; /* PProc:ObjectType */
TNimType NTI344017; /* TBlock */
extern TNimType NTI293800; /* PSym */
TNimType NTI344201; /* seq[TPosition] */
TNimType NTI344221; /* seq[TBlock] */
TNimType NTI344226; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI130; /* bool */
TNimType NTI344025; /* TSlotKind */
TNimType NTI344229; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI344027; /* PProc */
TNimType NTI344019; /* TEvalMode */
TNimType NTI344021; /* TSandboxFlag */
TNimType NTI344023; /* TSandboxFlags */
extern TNimType NTI192336; /* TLineInfo */
TNimType NTI344261; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI138; /* string */
TNimType NTI344031; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
extern TNimType NTI179029; /* ref tuple[] */
TNimType NTI344260; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI344033; /* PCtx */
extern Gcheap49818 gch_49858_1689653243;
N_NIMCALL(void, T984354655_3)(void* p, NI op) {
	TY344241* a;
	NI LOC1;
	a = (TY344241*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, T984354655_6)(void* p, NI op) {
	TY344201* a;
	NI LOC1;
	a = (TY344201*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, T984354655_7)(void* p, NI op) {
	TY344221* a;
	NI LOC1;
	a = (TY344221*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, T984354655_12)(void* p, NI op) {
	PprocHEX3Aobjecttype344220* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype344220*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, T984354655_21)(void* p, NI op) {
	TY344260* a;
	NI LOC1;
	a = (TY344260*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, T984354655_22)(void* p, NI op) {
	Tctx344035* a;
	a = (Tctx344035*)p;
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

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47305* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47305* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51440_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tctx344035*, newctx_344286_984354655)(Tsym293834* module0) {
	Tctx344035* result0;
	Tctx344035* LOC1;
	PprocHEX3Aobjecttype344220* LOC2;
	NimStringDesc* LOC3;
	result0 = (Tctx344035*)0;
	LOC1 = (Tctx344035*)0;
	LOC1 = (Tctx344035*) newObj((&NTI344033), sizeof(Tctx344035));
	(*LOC1).Sup.Sup.m_type = (&NTI344035);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY344241*) newSeqRC1((&NTI344241), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY193083*) newSeqRC1((&NTI193083), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_294401_850551059(((Tnodekind293020) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_294401_850551059(((Tnodekind293020) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq293836*) newSeqRC1((&NTI293836), 0);
	LOC2 = (PprocHEX3Aobjecttype344220*)0;
	LOC2 = (PprocHEX3Aobjecttype344220*) newObj((&NTI344027), sizeof(PprocHEX3Aobjecttype344220));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY344221*) newSeqRC1((&NTI344221), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module0);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_193080_155036129();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY344260*) newSeqRC1((&NTI344260), 0);
	LOC3 = (NimStringDesc*)0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &T984354655_23));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result0 = LOC1;
	return result0;
}

static N_INLINE(void, incref_53419_1689653243)(Cell47305* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decref_53001_1689653243)(Cell47305* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47305* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47305*)0;
		LOC5 = usrtocell_51440_1689653243(src0);
		incref_53419_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47305* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47305*)0;
		LOC10 = usrtocell_51440_1689653243((*dest0));
		decref_53001_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, registercallback_344393_984354655)(Tctx344035* c0, NimStringDesc* name0, Vmcallback344031 callback0) {
	TY344261 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name0);
	LOC1.Field1.ClEnv = callback0.ClEnv;
	LOC1.Field1.ClPrc = callback0.ClPrc;
	(*c0).callbacks = (TY344260*) incrSeqV2(&((*c0).callbacks)->Sup, sizeof(TY344261));
	LOC2 = (NimStringDesc*)0;
	LOC2 = (*c0).callbacks->data[(*c0).callbacks->Sup.len].Field0; (*c0).callbacks->data[(*c0).callbacks->Sup.len].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c0).callbacks->data[(*c0).callbacks->Sup.len].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c0).callbacks->data[(*c0).callbacks->Sup.len].Field1.ClPrc = LOC1.Field1.ClPrc;
	++(*c0).callbacks->Sup.len;
}

N_NIMCALL(void, refresh_344372_984354655)(Tctx344035* c0, Tsym293834* module0) {
	PprocHEX3Aobjecttype344220* LOC1;
	asgnRefNoCycle((void**) (&(*c0).module), module0);
	LOC1 = (PprocHEX3Aobjecttype344220*)0;
	LOC1 = (PprocHEX3Aobjecttype344220*) newObj((&NTI344027), sizeof(PprocHEX3Aobjecttype344220));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY344221*) newSeqRC1((&NTI344221), 0);
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
NTI344035.size = sizeof(Tctx344035);
NTI344035.kind = 17;
NTI344035.base = (&NTI342002);
T984354655_2[0] = &T984354655_0[1];
NTI344241.size = sizeof(TY344241*);
NTI344241.kind = 24;
NTI344241.base = (&NTI120);
NTI344241.flags = 2;
NTI344241.marker = T984354655_3;
T984354655_0[1].kind = 1;
T984354655_0[1].offset = offsetof(Tctx344035, code);
T984354655_0[1].typ = (&NTI344241);
T984354655_0[1].name = "code";
T984354655_2[1] = &T984354655_0[2];
T984354655_0[2].kind = 1;
T984354655_0[2].offset = offsetof(Tctx344035, debug);
T984354655_0[2].typ = (&NTI193083);
T984354655_0[2].name = "debug";
T984354655_2[2] = &T984354655_0[3];
T984354655_0[3].kind = 1;
T984354655_0[3].offset = offsetof(Tctx344035, globals);
T984354655_0[3].typ = (&NTI293794);
T984354655_0[3].name = "globals";
T984354655_2[3] = &T984354655_0[4];
T984354655_0[4].kind = 1;
T984354655_0[4].offset = offsetof(Tctx344035, constants);
T984354655_0[4].typ = (&NTI293794);
T984354655_0[4].name = "constants";
T984354655_2[4] = &T984354655_0[5];
T984354655_0[5].kind = 1;
T984354655_0[5].offset = offsetof(Tctx344035, types);
T984354655_0[5].typ = (&NTI293836);
T984354655_0[5].name = "types";
T984354655_2[5] = &T984354655_0[6];
T984354655_0[6].kind = 1;
T984354655_0[6].offset = offsetof(Tctx344035, currentexceptiona);
T984354655_0[6].typ = (&NTI293794);
T984354655_0[6].name = "currentExceptionA";
T984354655_2[6] = &T984354655_0[7];
T984354655_0[7].kind = 1;
T984354655_0[7].offset = offsetof(Tctx344035, currentexceptionb);
T984354655_0[7].typ = (&NTI293794);
T984354655_0[7].name = "currentExceptionB";
T984354655_2[7] = &T984354655_0[8];
T984354655_0[8].kind = 1;
T984354655_0[8].offset = offsetof(Tctx344035, exceptioninstr);
T984354655_0[8].typ = (&NTI104);
T984354655_0[8].name = "exceptionInstr";
T984354655_2[8] = &T984354655_0[9];
NTI344220.size = sizeof(PprocHEX3Aobjecttype344220);
NTI344220.kind = 18;
NTI344220.base = 0;
NTI344220.flags = 2;
T984354655_4[0] = &T984354655_0[11];
NTI344017.size = sizeof(Tblock344017);
NTI344017.kind = 18;
NTI344017.base = 0;
NTI344017.flags = 2;
T984354655_5[0] = &T984354655_0[13];
T984354655_0[13].kind = 1;
T984354655_0[13].offset = offsetof(Tblock344017, label);
T984354655_0[13].typ = (&NTI293800);
T984354655_0[13].name = "label";
T984354655_5[1] = &T984354655_0[14];
NTI344201.size = sizeof(TY344201*);
NTI344201.kind = 24;
NTI344201.base = (&NTI104);
NTI344201.flags = 2;
NTI344201.marker = T984354655_6;
T984354655_0[14].kind = 1;
T984354655_0[14].offset = offsetof(Tblock344017, fixups);
T984354655_0[14].typ = (&NTI344201);
T984354655_0[14].name = "fixups";
T984354655_0[12].len = 2; T984354655_0[12].kind = 2; T984354655_0[12].sons = &T984354655_5[0];
NTI344017.node = &T984354655_0[12];
NTI344221.size = sizeof(TY344221*);
NTI344221.kind = 24;
NTI344221.base = (&NTI344017);
NTI344221.flags = 2;
NTI344221.marker = T984354655_7;
T984354655_0[11].kind = 1;
T984354655_0[11].offset = offsetof(PprocHEX3Aobjecttype344220, blocks);
T984354655_0[11].typ = (&NTI344221);
T984354655_0[11].name = "blocks";
T984354655_4[1] = &T984354655_0[15];
T984354655_0[15].kind = 1;
T984354655_0[15].offset = offsetof(PprocHEX3Aobjecttype344220, sym);
T984354655_0[15].typ = (&NTI293800);
T984354655_0[15].name = "sym";
T984354655_4[2] = &T984354655_0[16];
NTI344226.size = sizeof(TY344226);
NTI344226.kind = 18;
NTI344226.base = 0;
NTI344226.flags = 3;
T984354655_8[0] = &T984354655_0[18];
T984354655_0[18].kind = 1;
T984354655_0[18].offset = offsetof(TY344226, Field0);
T984354655_0[18].typ = (&NTI130);
T984354655_0[18].name = "Field0";
T984354655_8[1] = &T984354655_0[19];
NTI344025.size = sizeof(Tslotkind344025);
NTI344025.kind = 14;
NTI344025.base = 0;
NTI344025.flags = 3;
for (T984354655_11 = 0; T984354655_11 < 9; T984354655_11++) {
T984354655_0[T984354655_11+20].kind = 1;
T984354655_0[T984354655_11+20].offset = T984354655_11;
T984354655_0[T984354655_11+20].name = T984354655_10[T984354655_11];
T984354655_9[T984354655_11] = &T984354655_0[T984354655_11+20];
}
T984354655_0[29].len = 9; T984354655_0[29].kind = 2; T984354655_0[29].sons = &T984354655_9[0];
NTI344025.node = &T984354655_0[29];
T984354655_0[19].kind = 1;
T984354655_0[19].offset = offsetof(TY344226, Field1);
T984354655_0[19].typ = (&NTI344025);
T984354655_0[19].name = "Field1";
T984354655_0[17].len = 2; T984354655_0[17].kind = 2; T984354655_0[17].sons = &T984354655_8[0];
NTI344226.node = &T984354655_0[17];
NTI344229.size = sizeof(TY344229);
NTI344229.kind = 16;
NTI344229.base = (&NTI344226);
NTI344229.flags = 3;
T984354655_0[16].kind = 1;
T984354655_0[16].offset = offsetof(PprocHEX3Aobjecttype344220, slots);
T984354655_0[16].typ = (&NTI344229);
T984354655_0[16].name = "slots";
T984354655_4[3] = &T984354655_0[30];
T984354655_0[30].kind = 1;
T984354655_0[30].offset = offsetof(PprocHEX3Aobjecttype344220, maxslots);
T984354655_0[30].typ = (&NTI104);
T984354655_0[30].name = "maxSlots";
T984354655_0[10].len = 4; T984354655_0[10].kind = 2; T984354655_0[10].sons = &T984354655_4[0];
NTI344220.node = &T984354655_0[10];
NTI344027.size = sizeof(PprocHEX3Aobjecttype344220*);
NTI344027.kind = 22;
NTI344027.base = (&NTI344220);
NTI344027.flags = 2;
NTI344027.marker = T984354655_12;
T984354655_0[9].kind = 1;
T984354655_0[9].offset = offsetof(Tctx344035, prc);
T984354655_0[9].typ = (&NTI344027);
T984354655_0[9].name = "prc";
T984354655_2[9] = &T984354655_0[31];
T984354655_0[31].kind = 1;
T984354655_0[31].offset = offsetof(Tctx344035, module);
T984354655_0[31].typ = (&NTI293800);
T984354655_0[31].name = "module";
T984354655_2[10] = &T984354655_0[32];
T984354655_0[32].kind = 1;
T984354655_0[32].offset = offsetof(Tctx344035, callsite);
T984354655_0[32].typ = (&NTI293794);
T984354655_0[32].name = "callsite";
T984354655_2[11] = &T984354655_0[33];
NTI344019.size = sizeof(Tevalmode344019);
NTI344019.kind = 14;
NTI344019.base = 0;
NTI344019.flags = 3;
for (T984354655_15 = 0; T984354655_15 < 5; T984354655_15++) {
T984354655_0[T984354655_15+34].kind = 1;
T984354655_0[T984354655_15+34].offset = T984354655_15;
T984354655_0[T984354655_15+34].name = T984354655_14[T984354655_15];
T984354655_13[T984354655_15] = &T984354655_0[T984354655_15+34];
}
T984354655_0[39].len = 5; T984354655_0[39].kind = 2; T984354655_0[39].sons = &T984354655_13[0];
NTI344019.node = &T984354655_0[39];
T984354655_0[33].kind = 1;
T984354655_0[33].offset = offsetof(Tctx344035, mode);
T984354655_0[33].typ = (&NTI344019);
T984354655_0[33].name = "mode";
T984354655_2[12] = &T984354655_0[40];
NTI344021.size = sizeof(Tsandboxflag344021);
NTI344021.kind = 14;
NTI344021.base = 0;
NTI344021.flags = 3;
for (T984354655_18 = 0; T984354655_18 < 3; T984354655_18++) {
T984354655_0[T984354655_18+41].kind = 1;
T984354655_0[T984354655_18+41].offset = T984354655_18;
T984354655_0[T984354655_18+41].name = T984354655_17[T984354655_18];
T984354655_16[T984354655_18] = &T984354655_0[T984354655_18+41];
}
T984354655_0[44].len = 3; T984354655_0[44].kind = 2; T984354655_0[44].sons = &T984354655_16[0];
NTI344021.node = &T984354655_0[44];
NTI344023.size = sizeof(Tsandboxflag344021Set);
NTI344023.kind = 19;
NTI344023.base = (&NTI344021);
NTI344023.flags = 3;
T984354655_0[45].len = 0; T984354655_0[45].kind = 0;
NTI344023.node = &T984354655_0[45];
T984354655_0[40].kind = 1;
T984354655_0[40].offset = offsetof(Tctx344035, features);
T984354655_0[40].typ = (&NTI344023);
T984354655_0[40].name = "features";
T984354655_2[13] = &T984354655_0[46];
T984354655_0[46].kind = 1;
T984354655_0[46].offset = offsetof(Tctx344035, traceactive);
T984354655_0[46].typ = (&NTI130);
T984354655_0[46].name = "traceActive";
T984354655_2[14] = &T984354655_0[47];
T984354655_0[47].kind = 1;
T984354655_0[47].offset = offsetof(Tctx344035, loopiterations);
T984354655_0[47].typ = (&NTI104);
T984354655_0[47].name = "loopIterations";
T984354655_2[15] = &T984354655_0[48];
T984354655_0[48].kind = 1;
T984354655_0[48].offset = offsetof(Tctx344035, comesfromheuristic);
T984354655_0[48].typ = (&NTI192336);
T984354655_0[48].name = "comesFromHeuristic";
T984354655_2[16] = &T984354655_0[49];
NTI344261.size = sizeof(TY344261);
NTI344261.kind = 18;
NTI344261.base = 0;
T984354655_19[0] = &T984354655_0[51];
T984354655_0[51].kind = 1;
T984354655_0[51].offset = offsetof(TY344261, Field0);
T984354655_0[51].typ = (&NTI138);
T984354655_0[51].name = "Field0";
T984354655_19[1] = &T984354655_0[52];
NTI344031.size = sizeof(TY179027);
NTI344031.kind = 18;
NTI344031.base = 0;
NTI344031.flags = 2;
T984354655_20[0] = &T984354655_0[54];
T984354655_0[54].kind = 1;
T984354655_0[54].offset = offsetof(TY179027, Field0);
T984354655_0[54].typ = (&NTI142);
T984354655_0[54].name = "Field0";
T984354655_20[1] = &T984354655_0[55];
T984354655_0[55].kind = 1;
T984354655_0[55].offset = offsetof(TY179027, Field1);
T984354655_0[55].typ = (&NTI179029);
T984354655_0[55].name = "Field1";
T984354655_0[53].len = 2; T984354655_0[53].kind = 2; T984354655_0[53].sons = &T984354655_20[0];
NTI344031.node = &T984354655_0[53];
T984354655_0[52].kind = 1;
T984354655_0[52].offset = offsetof(TY344261, Field1);
T984354655_0[52].typ = (&NTI344031);
T984354655_0[52].name = "Field1";
T984354655_0[50].len = 2; T984354655_0[50].kind = 2; T984354655_0[50].sons = &T984354655_19[0];
NTI344261.node = &T984354655_0[50];
NTI344260.size = sizeof(TY344260*);
NTI344260.kind = 24;
NTI344260.base = (&NTI344261);
NTI344260.marker = T984354655_21;
T984354655_0[49].kind = 1;
T984354655_0[49].offset = offsetof(Tctx344035, callbacks);
T984354655_0[49].typ = (&NTI344260);
T984354655_0[49].name = "callbacks";
T984354655_2[17] = &T984354655_0[56];
T984354655_0[56].kind = 1;
T984354655_0[56].offset = offsetof(Tctx344035, errorflag);
T984354655_0[56].typ = (&NTI138);
T984354655_0[56].name = "errorFlag";
T984354655_0[0].len = 18; T984354655_0[0].kind = 2; T984354655_0[0].sons = &T984354655_2[0];
NTI344035.node = &T984354655_0[0];
NTI344033.size = sizeof(Tctx344035*);
NTI344033.kind = 22;
NTI344033.base = (&NTI344035);
NTI344033.marker = T984354655_22;
}

