/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx314036 Tctx314036;
typedef struct Tpasscontext312002 Tpasscontext312002;
typedef struct TNimObject TNimObject;
typedef struct TY314242 TY314242;
typedef struct TY187090 TY187090;
typedef struct Tnode264794 Tnode264794;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct PprocHEX3Aobjecttype314221 PprocHEX3Aobjecttype314221;
typedef struct Tsym264826 Tsym264826;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct TY314261 TY314261;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY314222 TY314222;
typedef struct TY314227 TY314227;
typedef struct Tblock314018 Tblock314018;
typedef struct TY314202 TY314202;
typedef struct TY314262 TY314262;
typedef struct Vmargs314030 Vmargs314030;
typedef struct TY173027 TY173027;
typedef struct TY173030 TY173030;
typedef struct Cell47904 Cell47904;
typedef struct Cellseq47920 Cellseq47920;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30086 Memregion30086;
typedef struct Smallchunk30040 Smallchunk30040;
typedef struct Llchunk30080 Llchunk30080;
typedef struct Bigchunk30042 Bigchunk30042;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30084 Avlnode30084;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47916 Cellset47916;
typedef struct Pagedesc47912 Pagedesc47912;
typedef struct Ttype264832 Ttype264832;
typedef struct Tident194012 Tident194012;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tidobj194006 Tidobj194006;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY264917 TY264917;
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext312002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef NU8 Tevalmode314020;
typedef NU8 Tsandboxflag314022Set;
struct  Tlineinfo186336  {
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
struct  Tctx314036  {
  Tpasscontext312002 Sup;
TY314242* code;
TY187090* debug;
Tnode264794* globals;
Tnode264794* constants;
Ttypeseq264828* types;
Tnode264794* currentexceptiona;
Tnode264794* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype314221* prc;
Tsym264826* module;
Tnode264794* callsite;
Tevalmode314020 mode;
Tsandboxflag314022Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo186336 comesfromheuristic;
TY314261* callbacks;
NimStringDesc* errorflag;
};
typedef NU8 Tslotkind314026;
struct TY314227 {
NIM_BOOL Field0;
Tslotkind314026 Field1;
};
typedef TY314227 TY314230[256];
struct  PprocHEX3Aobjecttype314221  {
TY314222* blocks;
Tsym264826* sym;
TY314230 slots;
NI maxslots;
};
struct  Tblock314018  {
Tsym264826* label;
TY314202* fixups;
};
typedef NU8 Tsandboxflag314022;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs314030* args0, void* ClEnv);
void* ClEnv;
} Vmcallback314032;
struct TY314262 {
NimStringDesc* Field0;
Vmcallback314032 Field1;
};
struct TY173027 {
void* Field0;
TY173030* Field1;
};
struct  Cell47904  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47920  {
NI len;
NI cap;
Cell47904** d;
};
typedef Smallchunk30040* TY30101[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30086  {
NI minlargeobj;
NI maxlargeobj;
TY30101 freesmallchunks;
Llchunk30080* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30042* freechunkslist;
Intset30014 chunkstarts;
Avlnode30084* root;
Avlnode30084* deleted;
Avlnode30084* last;
Avlnode30084* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47916  {
NI counter;
NI max;
Pagedesc47912* head;
Pagedesc47912** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47920 zct;
Cellseq47920 decstack;
Cellseq47920 tempstack;
NI recgclock;
Memregion30086 region;
Gcstat50414 stat;
Cellset47916 marked;
Cellseq47920 additionalroots;
};
typedef NU8 Tnodekind264020;
typedef NU16 Tnodeflag264427Set;
struct  Tnode264794  {
Ttype264832* typ;
Tlineinfo186336 info;
Tnodeflag264427Set flags;
Tnodekind264020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym264826* sym;
} S4;
struct {Tident194012* ident;
} S5;
struct {Tnodeseq264788* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef NU8 Tmagic264525;
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
typedef NU8 Tlockind264800;
typedef NU8 Tstorageloc264804;
typedef NU16 Tlocflag264802Set;
struct  Tloc264808  {
Tlockind264800 k;
Tstorageloc264804 s;
Tlocflag264802Set flags;
Ttype264832* t;
Ropeobj173006* r;
Ropeobj173006* heaproot;
};
struct  Tsym264826  {
  Tidobj194006 Sup;
Tsymkind264435 kind;
union{
struct {Ttypeseq264828* typeinstcache;
Tscope264820* typscope;
} S1;
struct {TY264927* procinstcache;
Tsym264826* gcunsafetyreason;
} S2;
struct {TY264927* usedgenerics;
Tstrtable264798 tab;
} S3;
struct {Tsym264826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic264525 magic;
Ttype264832* typ;
Tident194012* name;
Tlineinfo186336 info;
Tsym264826* owner;
Tsymflag264184Set flags;
Tnode264794* ast;
Toption164009Set options;
NI position;
NI offset;
Tloc264808 loc;
Tlib264812* annex;
Tnode264794* constraint;
};
struct  Vmargs314030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode264794* currentexception;
};
struct TY173030 {
char dummy;
};
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30040  {
  Basechunk30038 Sup;
Smallchunk30040* next;
Smallchunk30040* prev;
Freecell30030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30080  {
NI size;
NI acc;
Llchunk30080* next;
};
struct  Bigchunk30042  {
  Basechunk30038 Sup;
Bigchunk30042* next;
Bigchunk30042* prev;
NI align;
NF data;
};
typedef NI TY30019[8];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30019 bits;
};
typedef Avlnode30084* TY30091[2];
struct  Avlnode30084  {
TY30091 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47912  {
Pagedesc47912* next;
NI key;
TY30019 bits;
};
typedef NU8 Ttypekind264244;
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
struct  Ttype264832  {
  Tidobj194006 Sup;
Ttypekind264244 kind;
Tcallingconvention264002 callconv;
Ttypeflag264431Set flags;
Ttypeseq264828* sons;
Tnode264794* n;
Tsym264826* owner;
Tsym264826* sym;
Tsym264826* destructor;
Tsym264826* deepcopy;
Tsym264826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc264808 loc;
};
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
};
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind264810;
struct  Tlib264812  {
  Tlistentry141010 Sup;
Tlibkind264810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj173006* name;
Tnode264794* path;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct TY314242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY314202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY314222 {
  TGenericSeq Sup;
  Tblock314018 data[SEQ_DECL_SIZE];
};
struct TY314261 {
  TGenericSeq Sup;
  TY314262 data[SEQ_DECL_SIZE];
};
struct TY187090 {
  TGenericSeq Sup;
  Tlineinfo186336 data[SEQ_DECL_SIZE];
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP1125)(void* p, NI op);
N_NIMCALL(void, TMP1128)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1129)(void* p, NI op);
N_NIMCALL(void, TMP1134)(void* p, NI op);
N_NIMCALL(void, TMP1143)(void* p, NI op);
N_NIMCALL(void, TMP1144)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47904*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47904* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47920* s0, Cell47904* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(Tnode264794*, newnode_265401_850551059)(Tnodekind264020 kind0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(Tlineinfo186336, unknownlineinfo_187087_155036129)(void);
N_NIMCALL(void, nimGCunref)(void* p0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_54019_1689653243)(Cell47904* c0);
static N_INLINE(void, decref_53601_1689653243)(Cell47904* c0);
STRING_LITERAL(TMP2998, "", 0);
extern TNimType NTI312002; /* TPassContext */
TNimType NTI314036; /* TCtx */
extern TNimType NTI120; /* uint32 */
TNimType NTI314242; /* seq[TInstr] */
extern TNimType NTI187090; /* seq[TLineInfo] */
extern TNimType NTI264786; /* PNode */
extern TNimType NTI264828; /* TTypeSeq */
extern TNimType NTI104; /* int */
TNimType NTI314221; /* PProc:ObjectType */
TNimType NTI314018; /* TBlock */
extern TNimType NTI264792; /* PSym */
TNimType NTI314202; /* seq[TPosition] */
TNimType NTI314222; /* seq[TBlock] */
TNimType NTI314227; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI130; /* bool */
TNimType NTI314026; /* TSlotKind */
TNimType NTI314230; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI314028; /* PProc */
TNimType NTI314020; /* TEvalMode */
TNimType NTI314022; /* TSandboxFlag */
TNimType NTI314024; /* TSandboxFlags */
extern TNimType NTI186336; /* TLineInfo */
TNimType NTI314262; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI138; /* string */
TNimType NTI314032; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
extern TNimType NTI173029; /* ref tuple[] */
TNimType NTI314261; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI314034; /* PCtx */
extern Gcheap50418 gch_50458_1689653243;
N_NIMCALL(void, TMP1125)(void* p, NI op) {
	TY314242* a;
	NI LOC1;
	a = (TY314242*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1128)(void* p, NI op) {
	TY314202* a;
	NI LOC1;
	a = (TY314202*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1129)(void* p, NI op) {
	TY314222* a;
	NI LOC1;
	a = (TY314222*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP1134)(void* p, NI op) {
	PprocHEX3Aobjecttype314221* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype314221*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP1143)(void* p, NI op) {
	TY314261* a;
	NI LOC1;
	a = (TY314261*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP1144)(void* p, NI op) {
	Tctx314036* a;
	a = (Tctx314036*)p;
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

static N_INLINE(Cell47904*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47904* result0;
	result0 = (Cell47904*)0;
	result0 = ((Cell47904*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47904))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47904* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47904* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47904* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47904* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tctx314036*, newctx_314287_984354655)(Tsym264826* module0) {
	Tctx314036* result0;
	Tctx314036* LOC1;
	PprocHEX3Aobjecttype314221* LOC2;
	NimStringDesc* LOC3;
	result0 = (Tctx314036*)0;
	LOC1 = (Tctx314036*)0;
	LOC1 = (Tctx314036*) newObj((&NTI314034), sizeof(Tctx314036));
	(*LOC1).Sup.Sup.m_type = (&NTI314036);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY314242*) newSeqRC1((&NTI314242), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY187090*) newSeqRC1((&NTI187090), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_265401_850551059(((Tnodekind264020) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_265401_850551059(((Tnodekind264020) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq264828*) newSeqRC1((&NTI264828), 0);
	LOC2 = (PprocHEX3Aobjecttype314221*)0;
	LOC2 = (PprocHEX3Aobjecttype314221*) newObj((&NTI314028), sizeof(PprocHEX3Aobjecttype314221));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY314222*) newSeqRC1((&NTI314222), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module0);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_187087_155036129();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY314261*) newSeqRC1((&NTI314261), 0);
	LOC3 = (NimStringDesc*)0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP2998));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result0 = LOC1;
	return result0;
}

static N_INLINE(void, incref_54019_1689653243)(Cell47904* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decref_53601_1689653243)(Cell47904* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47904* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47904*)0;
		LOC5 = usrtocell_52040_1689653243(src0);
		incref_54019_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47904* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47904*)0;
		LOC10 = usrtocell_52040_1689653243((*dest0));
		decref_53601_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, registercallback_314394_984354655)(Tctx314036* c0, NimStringDesc* name0, Vmcallback314032 callback0) {
	TY314262 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name0);
	LOC1.Field1.ClEnv = callback0.ClEnv;
	LOC1.Field1.ClPrc = callback0.ClPrc;
	(*c0).callbacks = (TY314261*) incrSeqV2(&((*c0).callbacks)->Sup, sizeof(TY314262));
	LOC2 = (NimStringDesc*)0;
	LOC2 = (*c0).callbacks->data[(*c0).callbacks->Sup.len].Field0; (*c0).callbacks->data[(*c0).callbacks->Sup.len].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c0).callbacks->data[(*c0).callbacks->Sup.len].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c0).callbacks->data[(*c0).callbacks->Sup.len].Field1.ClPrc = LOC1.Field1.ClPrc;
	++(*c0).callbacks->Sup.len;
}

N_NIMCALL(void, refresh_314373_984354655)(Tctx314036* c0, Tsym264826* module0) {
	PprocHEX3Aobjecttype314221* LOC1;
	asgnRefNoCycle((void**) (&(*c0).module), module0);
	LOC1 = (PprocHEX3Aobjecttype314221*)0;
	LOC1 = (PprocHEX3Aobjecttype314221*) newObj((&NTI314028), sizeof(PprocHEX3Aobjecttype314221));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY314222*) newSeqRC1((&NTI314222), 0);
	asgnRefNoCycle((void**) (&(*c0).prc), LOC1);
	(*c0).loopiterations = ((NI) 1500000);
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit000)(void) {
static TNimNode* TMP1124[18];
static TNimNode* TMP1126[4];
static TNimNode* TMP1127[2];
static TNimNode* TMP1130[2];
static TNimNode* TMP1131[9];
NI TMP1133;
static char* NIM_CONST TMP1132[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP1135[5];
NI TMP1137;
static char* NIM_CONST TMP1136[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP1138[3];
NI TMP1140;
static char* NIM_CONST TMP1139[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP1141[2];
static TNimNode* TMP1142[2];
static TNimNode TMP1021[57];
NTI314036.size = sizeof(Tctx314036);
NTI314036.kind = 17;
NTI314036.base = (&NTI312002);
TMP1124[0] = &TMP1021[1];
NTI314242.size = sizeof(TY314242*);
NTI314242.kind = 24;
NTI314242.base = (&NTI120);
NTI314242.flags = 2;
NTI314242.marker = TMP1125;
TMP1021[1].kind = 1;
TMP1021[1].offset = offsetof(Tctx314036, code);
TMP1021[1].typ = (&NTI314242);
TMP1021[1].name = "code";
TMP1124[1] = &TMP1021[2];
TMP1021[2].kind = 1;
TMP1021[2].offset = offsetof(Tctx314036, debug);
TMP1021[2].typ = (&NTI187090);
TMP1021[2].name = "debug";
TMP1124[2] = &TMP1021[3];
TMP1021[3].kind = 1;
TMP1021[3].offset = offsetof(Tctx314036, globals);
TMP1021[3].typ = (&NTI264786);
TMP1021[3].name = "globals";
TMP1124[3] = &TMP1021[4];
TMP1021[4].kind = 1;
TMP1021[4].offset = offsetof(Tctx314036, constants);
TMP1021[4].typ = (&NTI264786);
TMP1021[4].name = "constants";
TMP1124[4] = &TMP1021[5];
TMP1021[5].kind = 1;
TMP1021[5].offset = offsetof(Tctx314036, types);
TMP1021[5].typ = (&NTI264828);
TMP1021[5].name = "types";
TMP1124[5] = &TMP1021[6];
TMP1021[6].kind = 1;
TMP1021[6].offset = offsetof(Tctx314036, currentexceptiona);
TMP1021[6].typ = (&NTI264786);
TMP1021[6].name = "currentExceptionA";
TMP1124[6] = &TMP1021[7];
TMP1021[7].kind = 1;
TMP1021[7].offset = offsetof(Tctx314036, currentexceptionb);
TMP1021[7].typ = (&NTI264786);
TMP1021[7].name = "currentExceptionB";
TMP1124[7] = &TMP1021[8];
TMP1021[8].kind = 1;
TMP1021[8].offset = offsetof(Tctx314036, exceptioninstr);
TMP1021[8].typ = (&NTI104);
TMP1021[8].name = "exceptionInstr";
TMP1124[8] = &TMP1021[9];
NTI314221.size = sizeof(PprocHEX3Aobjecttype314221);
NTI314221.kind = 18;
NTI314221.base = 0;
NTI314221.flags = 2;
TMP1126[0] = &TMP1021[11];
NTI314018.size = sizeof(Tblock314018);
NTI314018.kind = 18;
NTI314018.base = 0;
NTI314018.flags = 2;
TMP1127[0] = &TMP1021[13];
TMP1021[13].kind = 1;
TMP1021[13].offset = offsetof(Tblock314018, label);
TMP1021[13].typ = (&NTI264792);
TMP1021[13].name = "label";
TMP1127[1] = &TMP1021[14];
NTI314202.size = sizeof(TY314202*);
NTI314202.kind = 24;
NTI314202.base = (&NTI104);
NTI314202.flags = 2;
NTI314202.marker = TMP1128;
TMP1021[14].kind = 1;
TMP1021[14].offset = offsetof(Tblock314018, fixups);
TMP1021[14].typ = (&NTI314202);
TMP1021[14].name = "fixups";
TMP1021[12].len = 2; TMP1021[12].kind = 2; TMP1021[12].sons = &TMP1127[0];
NTI314018.node = &TMP1021[12];
NTI314222.size = sizeof(TY314222*);
NTI314222.kind = 24;
NTI314222.base = (&NTI314018);
NTI314222.flags = 2;
NTI314222.marker = TMP1129;
TMP1021[11].kind = 1;
TMP1021[11].offset = offsetof(PprocHEX3Aobjecttype314221, blocks);
TMP1021[11].typ = (&NTI314222);
TMP1021[11].name = "blocks";
TMP1126[1] = &TMP1021[15];
TMP1021[15].kind = 1;
TMP1021[15].offset = offsetof(PprocHEX3Aobjecttype314221, sym);
TMP1021[15].typ = (&NTI264792);
TMP1021[15].name = "sym";
TMP1126[2] = &TMP1021[16];
NTI314227.size = sizeof(TY314227);
NTI314227.kind = 18;
NTI314227.base = 0;
NTI314227.flags = 3;
TMP1130[0] = &TMP1021[18];
TMP1021[18].kind = 1;
TMP1021[18].offset = offsetof(TY314227, Field0);
TMP1021[18].typ = (&NTI130);
TMP1021[18].name = "Field0";
TMP1130[1] = &TMP1021[19];
NTI314026.size = sizeof(Tslotkind314026);
NTI314026.kind = 14;
NTI314026.base = 0;
NTI314026.flags = 3;
for (TMP1133 = 0; TMP1133 < 9; TMP1133++) {
TMP1021[TMP1133+20].kind = 1;
TMP1021[TMP1133+20].offset = TMP1133;
TMP1021[TMP1133+20].name = TMP1132[TMP1133];
TMP1131[TMP1133] = &TMP1021[TMP1133+20];
}
TMP1021[29].len = 9; TMP1021[29].kind = 2; TMP1021[29].sons = &TMP1131[0];
NTI314026.node = &TMP1021[29];
TMP1021[19].kind = 1;
TMP1021[19].offset = offsetof(TY314227, Field1);
TMP1021[19].typ = (&NTI314026);
TMP1021[19].name = "Field1";
TMP1021[17].len = 2; TMP1021[17].kind = 2; TMP1021[17].sons = &TMP1130[0];
NTI314227.node = &TMP1021[17];
NTI314230.size = sizeof(TY314230);
NTI314230.kind = 16;
NTI314230.base = (&NTI314227);
NTI314230.flags = 3;
TMP1021[16].kind = 1;
TMP1021[16].offset = offsetof(PprocHEX3Aobjecttype314221, slots);
TMP1021[16].typ = (&NTI314230);
TMP1021[16].name = "slots";
TMP1126[3] = &TMP1021[30];
TMP1021[30].kind = 1;
TMP1021[30].offset = offsetof(PprocHEX3Aobjecttype314221, maxslots);
TMP1021[30].typ = (&NTI104);
TMP1021[30].name = "maxSlots";
TMP1021[10].len = 4; TMP1021[10].kind = 2; TMP1021[10].sons = &TMP1126[0];
NTI314221.node = &TMP1021[10];
NTI314028.size = sizeof(PprocHEX3Aobjecttype314221*);
NTI314028.kind = 22;
NTI314028.base = (&NTI314221);
NTI314028.flags = 2;
NTI314028.marker = TMP1134;
TMP1021[9].kind = 1;
TMP1021[9].offset = offsetof(Tctx314036, prc);
TMP1021[9].typ = (&NTI314028);
TMP1021[9].name = "prc";
TMP1124[9] = &TMP1021[31];
TMP1021[31].kind = 1;
TMP1021[31].offset = offsetof(Tctx314036, module);
TMP1021[31].typ = (&NTI264792);
TMP1021[31].name = "module";
TMP1124[10] = &TMP1021[32];
TMP1021[32].kind = 1;
TMP1021[32].offset = offsetof(Tctx314036, callsite);
TMP1021[32].typ = (&NTI264786);
TMP1021[32].name = "callsite";
TMP1124[11] = &TMP1021[33];
NTI314020.size = sizeof(Tevalmode314020);
NTI314020.kind = 14;
NTI314020.base = 0;
NTI314020.flags = 3;
for (TMP1137 = 0; TMP1137 < 5; TMP1137++) {
TMP1021[TMP1137+34].kind = 1;
TMP1021[TMP1137+34].offset = TMP1137;
TMP1021[TMP1137+34].name = TMP1136[TMP1137];
TMP1135[TMP1137] = &TMP1021[TMP1137+34];
}
TMP1021[39].len = 5; TMP1021[39].kind = 2; TMP1021[39].sons = &TMP1135[0];
NTI314020.node = &TMP1021[39];
TMP1021[33].kind = 1;
TMP1021[33].offset = offsetof(Tctx314036, mode);
TMP1021[33].typ = (&NTI314020);
TMP1021[33].name = "mode";
TMP1124[12] = &TMP1021[40];
NTI314022.size = sizeof(Tsandboxflag314022);
NTI314022.kind = 14;
NTI314022.base = 0;
NTI314022.flags = 3;
for (TMP1140 = 0; TMP1140 < 3; TMP1140++) {
TMP1021[TMP1140+41].kind = 1;
TMP1021[TMP1140+41].offset = TMP1140;
TMP1021[TMP1140+41].name = TMP1139[TMP1140];
TMP1138[TMP1140] = &TMP1021[TMP1140+41];
}
TMP1021[44].len = 3; TMP1021[44].kind = 2; TMP1021[44].sons = &TMP1138[0];
NTI314022.node = &TMP1021[44];
NTI314024.size = sizeof(Tsandboxflag314022Set);
NTI314024.kind = 19;
NTI314024.base = (&NTI314022);
NTI314024.flags = 3;
TMP1021[45].len = 0; TMP1021[45].kind = 0;
NTI314024.node = &TMP1021[45];
TMP1021[40].kind = 1;
TMP1021[40].offset = offsetof(Tctx314036, features);
TMP1021[40].typ = (&NTI314024);
TMP1021[40].name = "features";
TMP1124[13] = &TMP1021[46];
TMP1021[46].kind = 1;
TMP1021[46].offset = offsetof(Tctx314036, traceactive);
TMP1021[46].typ = (&NTI130);
TMP1021[46].name = "traceActive";
TMP1124[14] = &TMP1021[47];
TMP1021[47].kind = 1;
TMP1021[47].offset = offsetof(Tctx314036, loopiterations);
TMP1021[47].typ = (&NTI104);
TMP1021[47].name = "loopIterations";
TMP1124[15] = &TMP1021[48];
TMP1021[48].kind = 1;
TMP1021[48].offset = offsetof(Tctx314036, comesfromheuristic);
TMP1021[48].typ = (&NTI186336);
TMP1021[48].name = "comesFromHeuristic";
TMP1124[16] = &TMP1021[49];
NTI314262.size = sizeof(TY314262);
NTI314262.kind = 18;
NTI314262.base = 0;
TMP1141[0] = &TMP1021[51];
TMP1021[51].kind = 1;
TMP1021[51].offset = offsetof(TY314262, Field0);
TMP1021[51].typ = (&NTI138);
TMP1021[51].name = "Field0";
TMP1141[1] = &TMP1021[52];
NTI314032.size = sizeof(TY173027);
NTI314032.kind = 18;
NTI314032.base = 0;
NTI314032.flags = 2;
TMP1142[0] = &TMP1021[54];
TMP1021[54].kind = 1;
TMP1021[54].offset = offsetof(TY173027, Field0);
TMP1021[54].typ = (&NTI142);
TMP1021[54].name = "Field0";
TMP1142[1] = &TMP1021[55];
TMP1021[55].kind = 1;
TMP1021[55].offset = offsetof(TY173027, Field1);
TMP1021[55].typ = (&NTI173029);
TMP1021[55].name = "Field1";
TMP1021[53].len = 2; TMP1021[53].kind = 2; TMP1021[53].sons = &TMP1142[0];
NTI314032.node = &TMP1021[53];
TMP1021[52].kind = 1;
TMP1021[52].offset = offsetof(TY314262, Field1);
TMP1021[52].typ = (&NTI314032);
TMP1021[52].name = "Field1";
TMP1021[50].len = 2; TMP1021[50].kind = 2; TMP1021[50].sons = &TMP1141[0];
NTI314262.node = &TMP1021[50];
NTI314261.size = sizeof(TY314261*);
NTI314261.kind = 24;
NTI314261.base = (&NTI314262);
NTI314261.marker = TMP1143;
TMP1021[49].kind = 1;
TMP1021[49].offset = offsetof(Tctx314036, callbacks);
TMP1021[49].typ = (&NTI314261);
TMP1021[49].name = "callbacks";
TMP1124[17] = &TMP1021[56];
TMP1021[56].kind = 1;
TMP1021[56].offset = offsetof(Tctx314036, errorflag);
TMP1021[56].typ = (&NTI138);
TMP1021[56].name = "errorFlag";
TMP1021[0].len = 18; TMP1021[0].kind = 2; TMP1021[0].sons = &TMP1124[0];
NTI314036.node = &TMP1021[0];
NTI314034.size = sizeof(Tctx314036*);
NTI314034.kind = 22;
NTI314034.base = (&NTI314036);
NTI314034.marker = TMP1144;
}

