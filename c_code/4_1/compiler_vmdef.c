/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tctx313036 Tctx313036;
typedef struct Tpasscontext311002 Tpasscontext311002;
typedef struct TNimObject TNimObject;
typedef struct TY313242 TY313242;
typedef struct TY186093 TY186093;
typedef struct Tnode263794 Tnode263794;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct PprocHEX3Aobjecttype313221 PprocHEX3Aobjecttype313221;
typedef struct Tsym263826 Tsym263826;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct TY313261 TY313261;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY313222 TY313222;
typedef struct TY313227 TY313227;
typedef struct Tblock313018 Tblock313018;
typedef struct TY313202 TY313202;
typedef struct TY313262 TY313262;
typedef struct Vmargs313030 Vmargs313030;
typedef struct TY172027 TY172027;
typedef struct TY172030 TY172030;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30085 Memregion30085;
typedef struct Smallchunk30039 Smallchunk30039;
typedef struct Llchunk30079 Llchunk30079;
typedef struct Bigchunk30041 Bigchunk30041;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30083 Avlnode30083;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct Ttype263832 Ttype263832;
typedef struct Tident193012 Tident193012;
typedef struct Tnodeseq263788 Tnodeseq263788;
typedef struct Tidobj193006 Tidobj193006;
typedef struct Tscope263820 Tscope263820;
typedef struct TY263927 TY263927;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Tloc263808 Tloc263808;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tlib263812 Tlib263812;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY263917 TY263917;
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
struct  Tpasscontext311002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef NU8 Tevalmode313020;
typedef NU8 Tsandboxflag313022Set;
struct  Tlineinfo185336  {
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
struct  Tctx313036  {
  Tpasscontext311002 Sup;
TY313242* code;
TY186093* debug;
Tnode263794* globals;
Tnode263794* constants;
Ttypeseq263828* types;
Tnode263794* currentexceptiona;
Tnode263794* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype313221* prc;
Tsym263826* module;
Tnode263794* callsite;
Tevalmode313020 mode;
Tsandboxflag313022Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo185336 comesfromheuristic;
TY313261* callbacks;
NimStringDesc* errorflag;
};
typedef NU8 Tslotkind313026;
struct TY313227 {
NIM_BOOL Field0;
Tslotkind313026 Field1;
};
typedef TY313227 TY313230[256];
struct  PprocHEX3Aobjecttype313221  {
TY313222* blocks;
Tsym263826* sym;
TY313230 slots;
NI maxslots;
};
struct  Tblock313018  {
Tsym263826* label;
TY313202* fixups;
};
typedef NU8 Tsandboxflag313022;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs313030* args0, void* ClEnv);
void* ClEnv;
} Vmcallback313032;
struct TY313262 {
NimStringDesc* Field0;
Vmcallback313032 Field1;
};
struct TY172027 {
void* Field0;
TY172030* Field1;
};
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
};
typedef Smallchunk30039* TY30100[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30085  {
NI minlargeobj;
NI maxlargeobj;
TY30100 freesmallchunks;
Llchunk30079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30041* freechunkslist;
Intset30014 chunkstarts;
Avlnode30083* root;
Avlnode30083* deleted;
Avlnode30083* last;
Avlnode30083* freeavlnodes;
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
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellseq47921 tempstack;
NI recgclock;
Memregion30085 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
typedef NU8 Tnodekind263020;
typedef NU16 Tnodeflag263427Set;
struct  Tnode263794  {
Ttype263832* typ;
Tlineinfo185336 info;
Tnodeflag263427Set flags;
Tnodekind263020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym263826* sym;
} S4;
struct {Tident193012* ident;
} S5;
struct {Tnodeseq263788* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tidobj193006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind263435;
struct  Tstrtable263798  {
NI counter;
Tsymseq263796* data;
};
typedef NU8 Tmagic263525;
typedef NU32 Tsymflag263184Set;
typedef NU32 Toption163009Set;
typedef NU8 Tlockind263800;
typedef NU8 Tstorageloc263804;
typedef NU16 Tlocflag263802Set;
struct  Tloc263808  {
Tlockind263800 k;
Tstorageloc263804 s;
Tlocflag263802Set flags;
Ttype263832* t;
Ropeobj172006* r;
Ropeobj172006* heaproot;
};
struct  Tsym263826  {
  Tidobj193006 Sup;
Tsymkind263435 kind;
union{
struct {Ttypeseq263828* typeinstcache;
Tscope263820* typscope;
} S1;
struct {TY263927* procinstcache;
Tsym263826* gcunsafetyreason;
} S2;
struct {TY263927* usedgenerics;
Tstrtable263798 tab;
} S3;
struct {Tsym263826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic263525 magic;
Ttype263832* typ;
Tident193012* name;
Tlineinfo185336 info;
Tsym263826* owner;
Tsymflag263184Set flags;
Tnode263794* ast;
Toption163009Set options;
NI position;
NI offset;
Tloc263808 loc;
Tlib263812* annex;
Tnode263794* constraint;
};
struct  Vmargs313030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode263794* currentexception;
};
struct TY172030 {
char dummy;
};
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30039  {
  Basechunk30037 Sup;
Smallchunk30039* next;
Smallchunk30039* prev;
Freecell30029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30079  {
NI size;
NI acc;
Llchunk30079* next;
};
struct  Bigchunk30041  {
  Basechunk30037 Sup;
Bigchunk30041* next;
Bigchunk30041* prev;
NI align;
NF data;
};
typedef NI TY30018[16];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30018 bits;
};
typedef Avlnode30083* TY30090[2];
struct  Avlnode30083  {
TY30090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30018 bits;
};
typedef NU8 Ttypekind263244;
typedef NU8 Tcallingconvention263002;
typedef NU32 Ttypeflag263431Set;
struct  Ttype263832  {
  Tidobj193006 Sup;
Ttypekind263244 kind;
Tcallingconvention263002 callconv;
Ttypeflag263431Set flags;
Ttypeseq263828* sons;
Tnode263794* n;
Tsym263826* owner;
Tsym263826* sym;
Tsym263826* destructor;
Tsym263826* deepcopy;
Tsym263826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc263808 loc;
};
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
NI h;
};
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
};
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind263810;
struct  Tlib263812  {
  Tlistentry141010 Sup;
Tlibkind263810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj172006* name;
Tnode263794* path;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct  Tinstantiation263816  {
Tsym263826* sym;
Ttypeseq263828* concretetypes;
TY263917* usedby;
NI compilesid;
};
struct TY313242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY313202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY313222 {
  TGenericSeq Sup;
  Tblock313018 data[SEQ_DECL_SIZE];
};
struct TY313261 {
  TGenericSeq Sup;
  TY313262 data[SEQ_DECL_SIZE];
};
struct TY186093 {
  TGenericSeq Sup;
  Tlineinfo185336 data[SEQ_DECL_SIZE];
};
struct Ttypeseq263828 {
  TGenericSeq Sup;
  Ttype263832* data[SEQ_DECL_SIZE];
};
struct Tnodeseq263788 {
  TGenericSeq Sup;
  Tnode263794* data[SEQ_DECL_SIZE];
};
struct TY263927 {
  TGenericSeq Sup;
  Tinstantiation263816* data[SEQ_DECL_SIZE];
};
struct Tsymseq263796 {
  TGenericSeq Sup;
  Tsym263826* data[SEQ_DECL_SIZE];
};
struct TY263917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP1123)(void* p, NI op);
N_NIMCALL(void, TMP1126)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1127)(void* p, NI op);
N_NIMCALL(void, TMP1132)(void* p, NI op);
N_NIMCALL(void, TMP1141)(void* p, NI op);
N_NIMCALL(void, TMP1142)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(Tnode263794*, newnode_264401_850551059)(Tnodekind263020 kind0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(Tlineinfo185336, unknownlineinfo_186090_155036129)(void);
N_NIMCALL(void, nimGCunref)(void* p0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_54019_1689653243)(Cell47905* c0);
static N_INLINE(void, decref_53601_1689653243)(Cell47905* c0);
STRING_LITERAL(TMP2997, "", 0);
extern TNimType NTI311002; /* TPassContext */
TNimType NTI313036; /* TCtx */
extern TNimType NTI120; /* uint32 */
TNimType NTI313242; /* seq[TInstr] */
extern TNimType NTI186093; /* seq[TLineInfo] */
extern TNimType NTI263786; /* PNode */
extern TNimType NTI263828; /* TTypeSeq */
extern TNimType NTI104; /* int */
TNimType NTI313221; /* PProc:ObjectType */
TNimType NTI313018; /* TBlock */
extern TNimType NTI263792; /* PSym */
TNimType NTI313202; /* seq[TPosition] */
TNimType NTI313222; /* seq[TBlock] */
TNimType NTI313227; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI130; /* bool */
TNimType NTI313026; /* TSlotKind */
TNimType NTI313230; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI313028; /* PProc */
TNimType NTI313020; /* TEvalMode */
TNimType NTI313022; /* TSandboxFlag */
TNimType NTI313024; /* TSandboxFlags */
extern TNimType NTI185336; /* TLineInfo */
TNimType NTI313262; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI138; /* string */
TNimType NTI313032; /* (pointer, ref tuple[]) */
extern TNimType NTI142; /* pointer */
extern TNimType NTI172029; /* ref tuple[] */
TNimType NTI313261; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI313034; /* PCtx */
extern Gcheap50418 gch_50458_1689653243;
N_NIMCALL(void, TMP1123)(void* p, NI op) {
	TY313242* a;
	NI LOC1;
	a = (TY313242*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1126)(void* p, NI op) {
	TY313202* a;
	NI LOC1;
	a = (TY313202*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1127)(void* p, NI op) {
	TY313222* a;
	NI LOC1;
	a = (TY313222*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].label, op);
	nimGCvisit((void*)a->data[LOC1].fixups, op);
	}
}
N_NIMCALL(void, TMP1132)(void* p, NI op) {
	PprocHEX3Aobjecttype313221* a;
	NI LOC1;
	a = (PprocHEX3Aobjecttype313221*)p;
	nimGCvisit((void*)(*a).blocks, op);
	nimGCvisit((void*)(*a).sym, op);
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP1141)(void* p, NI op) {
	TY313261* a;
	NI LOC1;
	a = (TY313261*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP1142)(void* p, NI op) {
	Tctx313036* a;
	a = (Tctx313036*)p;
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

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47905* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47905* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47905* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(Tctx313036*, newctx_313287_984354655)(Tsym263826* module0) {
	Tctx313036* result0;
	Tctx313036* LOC1;
	PprocHEX3Aobjecttype313221* LOC2;
	NimStringDesc* LOC3;
	result0 = (Tctx313036*)0;
	LOC1 = (Tctx313036*)0;
	LOC1 = (Tctx313036*) newObj((&NTI313034), sizeof(Tctx313036));
	(*LOC1).Sup.Sup.m_type = (&NTI313036);
	if ((*LOC1).code) nimGCunrefNoCycle((*LOC1).code);
	(*LOC1).code = (TY313242*) newSeqRC1((&NTI313242), 0);
	if ((*LOC1).debug) nimGCunrefNoCycle((*LOC1).debug);
	(*LOC1).debug = (TY186093*) newSeqRC1((&NTI186093), 0);
	asgnRefNoCycle((void**) (&(*LOC1).globals), newnode_264401_850551059(((Tnodekind263020) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).constants), newnode_264401_850551059(((Tnodekind263020) 115)));
	if ((*LOC1).types) nimGCunrefNoCycle((*LOC1).types);
	(*LOC1).types = (Ttypeseq263828*) newSeqRC1((&NTI263828), 0);
	LOC2 = (PprocHEX3Aobjecttype313221*)0;
	LOC2 = (PprocHEX3Aobjecttype313221*) newObj((&NTI313028), sizeof(PprocHEX3Aobjecttype313221));
	if ((*LOC2).blocks) nimGCunrefNoCycle((*LOC2).blocks);
	(*LOC2).blocks = (TY313222*) newSeqRC1((&NTI313222), 0);
	asgnRefNoCycle((void**) (&(*LOC1).prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).module), module0);
	(*LOC1).loopiterations = ((NI) 1500000);
	(*LOC1).comesfromheuristic = unknownlineinfo_186090_155036129();
	if ((*LOC1).callbacks) nimGCunref((*LOC1).callbacks);
	(*LOC1).callbacks = (TY313261*) newSeqRC1((&NTI313261), 0);
	LOC3 = (NimStringDesc*)0;
	LOC3 = (*LOC1).errorflag; (*LOC1).errorflag = copyStringRC1(((NimStringDesc*) &TMP2997));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result0 = LOC1;
	return result0;
}

static N_INLINE(void, incref_54019_1689653243)(Cell47905* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_53601_1689653243)(Cell47905* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47905* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47905*)0;
		LOC5 = usrtocell_52040_1689653243(src0);
		incref_54019_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47905* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47905*)0;
		LOC10 = usrtocell_52040_1689653243((*dest0));
		decref_53601_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, registercallback_313394_984354655)(Tctx313036* c0, NimStringDesc* name0, Vmcallback313032 callback0) {
	TY313262 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name0);
	LOC1.Field1.ClEnv = callback0.ClEnv;
	LOC1.Field1.ClPrc = callback0.ClPrc;
	(*c0).callbacks = (TY313261*) incrSeqV2(&((*c0).callbacks)->Sup, sizeof(TY313262));
	LOC2 = (NimStringDesc*)0;
	LOC2 = (*c0).callbacks->data[(*c0).callbacks->Sup.len].Field0; (*c0).callbacks->data[(*c0).callbacks->Sup.len].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c0).callbacks->data[(*c0).callbacks->Sup.len].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c0).callbacks->data[(*c0).callbacks->Sup.len].Field1.ClPrc = LOC1.Field1.ClPrc;
	++(*c0).callbacks->Sup.len;
}

N_NIMCALL(void, refresh_313373_984354655)(Tctx313036* c0, Tsym263826* module0) {
	PprocHEX3Aobjecttype313221* LOC1;
	asgnRefNoCycle((void**) (&(*c0).module), module0);
	LOC1 = (PprocHEX3Aobjecttype313221*)0;
	LOC1 = (PprocHEX3Aobjecttype313221*) newObj((&NTI313028), sizeof(PprocHEX3Aobjecttype313221));
	if ((*LOC1).blocks) nimGCunrefNoCycle((*LOC1).blocks);
	(*LOC1).blocks = (TY313222*) newSeqRC1((&NTI313222), 0);
	asgnRefNoCycle((void**) (&(*c0).prc), LOC1);
	(*c0).loopiterations = ((NI) 1500000);
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdefInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdefDatInit000)(void) {
static TNimNode* TMP1122[18];
static TNimNode* TMP1124[4];
static TNimNode* TMP1125[2];
static TNimNode* TMP1128[2];
static TNimNode* TMP1129[9];
NI TMP1131;
static char* NIM_CONST TMP1130[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP1133[5];
NI TMP1135;
static char* NIM_CONST TMP1134[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP1136[3];
NI TMP1138;
static char* NIM_CONST TMP1137[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP1139[2];
static TNimNode* TMP1140[2];
static TNimNode TMP1019[57];
NTI313036.size = sizeof(Tctx313036);
NTI313036.kind = 17;
NTI313036.base = (&NTI311002);
TMP1122[0] = &TMP1019[1];
NTI313242.size = sizeof(TY313242*);
NTI313242.kind = 24;
NTI313242.base = (&NTI120);
NTI313242.flags = 2;
NTI313242.marker = TMP1123;
TMP1019[1].kind = 1;
TMP1019[1].offset = offsetof(Tctx313036, code);
TMP1019[1].typ = (&NTI313242);
TMP1019[1].name = "code";
TMP1122[1] = &TMP1019[2];
TMP1019[2].kind = 1;
TMP1019[2].offset = offsetof(Tctx313036, debug);
TMP1019[2].typ = (&NTI186093);
TMP1019[2].name = "debug";
TMP1122[2] = &TMP1019[3];
TMP1019[3].kind = 1;
TMP1019[3].offset = offsetof(Tctx313036, globals);
TMP1019[3].typ = (&NTI263786);
TMP1019[3].name = "globals";
TMP1122[3] = &TMP1019[4];
TMP1019[4].kind = 1;
TMP1019[4].offset = offsetof(Tctx313036, constants);
TMP1019[4].typ = (&NTI263786);
TMP1019[4].name = "constants";
TMP1122[4] = &TMP1019[5];
TMP1019[5].kind = 1;
TMP1019[5].offset = offsetof(Tctx313036, types);
TMP1019[5].typ = (&NTI263828);
TMP1019[5].name = "types";
TMP1122[5] = &TMP1019[6];
TMP1019[6].kind = 1;
TMP1019[6].offset = offsetof(Tctx313036, currentexceptiona);
TMP1019[6].typ = (&NTI263786);
TMP1019[6].name = "currentExceptionA";
TMP1122[6] = &TMP1019[7];
TMP1019[7].kind = 1;
TMP1019[7].offset = offsetof(Tctx313036, currentexceptionb);
TMP1019[7].typ = (&NTI263786);
TMP1019[7].name = "currentExceptionB";
TMP1122[7] = &TMP1019[8];
TMP1019[8].kind = 1;
TMP1019[8].offset = offsetof(Tctx313036, exceptioninstr);
TMP1019[8].typ = (&NTI104);
TMP1019[8].name = "exceptionInstr";
TMP1122[8] = &TMP1019[9];
NTI313221.size = sizeof(PprocHEX3Aobjecttype313221);
NTI313221.kind = 18;
NTI313221.base = 0;
NTI313221.flags = 2;
TMP1124[0] = &TMP1019[11];
NTI313018.size = sizeof(Tblock313018);
NTI313018.kind = 18;
NTI313018.base = 0;
NTI313018.flags = 2;
TMP1125[0] = &TMP1019[13];
TMP1019[13].kind = 1;
TMP1019[13].offset = offsetof(Tblock313018, label);
TMP1019[13].typ = (&NTI263792);
TMP1019[13].name = "label";
TMP1125[1] = &TMP1019[14];
NTI313202.size = sizeof(TY313202*);
NTI313202.kind = 24;
NTI313202.base = (&NTI104);
NTI313202.flags = 2;
NTI313202.marker = TMP1126;
TMP1019[14].kind = 1;
TMP1019[14].offset = offsetof(Tblock313018, fixups);
TMP1019[14].typ = (&NTI313202);
TMP1019[14].name = "fixups";
TMP1019[12].len = 2; TMP1019[12].kind = 2; TMP1019[12].sons = &TMP1125[0];
NTI313018.node = &TMP1019[12];
NTI313222.size = sizeof(TY313222*);
NTI313222.kind = 24;
NTI313222.base = (&NTI313018);
NTI313222.flags = 2;
NTI313222.marker = TMP1127;
TMP1019[11].kind = 1;
TMP1019[11].offset = offsetof(PprocHEX3Aobjecttype313221, blocks);
TMP1019[11].typ = (&NTI313222);
TMP1019[11].name = "blocks";
TMP1124[1] = &TMP1019[15];
TMP1019[15].kind = 1;
TMP1019[15].offset = offsetof(PprocHEX3Aobjecttype313221, sym);
TMP1019[15].typ = (&NTI263792);
TMP1019[15].name = "sym";
TMP1124[2] = &TMP1019[16];
NTI313227.size = sizeof(TY313227);
NTI313227.kind = 18;
NTI313227.base = 0;
NTI313227.flags = 3;
TMP1128[0] = &TMP1019[18];
TMP1019[18].kind = 1;
TMP1019[18].offset = offsetof(TY313227, Field0);
TMP1019[18].typ = (&NTI130);
TMP1019[18].name = "Field0";
TMP1128[1] = &TMP1019[19];
NTI313026.size = sizeof(Tslotkind313026);
NTI313026.kind = 14;
NTI313026.base = 0;
NTI313026.flags = 3;
for (TMP1131 = 0; TMP1131 < 9; TMP1131++) {
TMP1019[TMP1131+20].kind = 1;
TMP1019[TMP1131+20].offset = TMP1131;
TMP1019[TMP1131+20].name = TMP1130[TMP1131];
TMP1129[TMP1131] = &TMP1019[TMP1131+20];
}
TMP1019[29].len = 9; TMP1019[29].kind = 2; TMP1019[29].sons = &TMP1129[0];
NTI313026.node = &TMP1019[29];
TMP1019[19].kind = 1;
TMP1019[19].offset = offsetof(TY313227, Field1);
TMP1019[19].typ = (&NTI313026);
TMP1019[19].name = "Field1";
TMP1019[17].len = 2; TMP1019[17].kind = 2; TMP1019[17].sons = &TMP1128[0];
NTI313227.node = &TMP1019[17];
NTI313230.size = sizeof(TY313230);
NTI313230.kind = 16;
NTI313230.base = (&NTI313227);
NTI313230.flags = 3;
TMP1019[16].kind = 1;
TMP1019[16].offset = offsetof(PprocHEX3Aobjecttype313221, slots);
TMP1019[16].typ = (&NTI313230);
TMP1019[16].name = "slots";
TMP1124[3] = &TMP1019[30];
TMP1019[30].kind = 1;
TMP1019[30].offset = offsetof(PprocHEX3Aobjecttype313221, maxslots);
TMP1019[30].typ = (&NTI104);
TMP1019[30].name = "maxSlots";
TMP1019[10].len = 4; TMP1019[10].kind = 2; TMP1019[10].sons = &TMP1124[0];
NTI313221.node = &TMP1019[10];
NTI313028.size = sizeof(PprocHEX3Aobjecttype313221*);
NTI313028.kind = 22;
NTI313028.base = (&NTI313221);
NTI313028.flags = 2;
NTI313028.marker = TMP1132;
TMP1019[9].kind = 1;
TMP1019[9].offset = offsetof(Tctx313036, prc);
TMP1019[9].typ = (&NTI313028);
TMP1019[9].name = "prc";
TMP1122[9] = &TMP1019[31];
TMP1019[31].kind = 1;
TMP1019[31].offset = offsetof(Tctx313036, module);
TMP1019[31].typ = (&NTI263792);
TMP1019[31].name = "module";
TMP1122[10] = &TMP1019[32];
TMP1019[32].kind = 1;
TMP1019[32].offset = offsetof(Tctx313036, callsite);
TMP1019[32].typ = (&NTI263786);
TMP1019[32].name = "callsite";
TMP1122[11] = &TMP1019[33];
NTI313020.size = sizeof(Tevalmode313020);
NTI313020.kind = 14;
NTI313020.base = 0;
NTI313020.flags = 3;
for (TMP1135 = 0; TMP1135 < 5; TMP1135++) {
TMP1019[TMP1135+34].kind = 1;
TMP1019[TMP1135+34].offset = TMP1135;
TMP1019[TMP1135+34].name = TMP1134[TMP1135];
TMP1133[TMP1135] = &TMP1019[TMP1135+34];
}
TMP1019[39].len = 5; TMP1019[39].kind = 2; TMP1019[39].sons = &TMP1133[0];
NTI313020.node = &TMP1019[39];
TMP1019[33].kind = 1;
TMP1019[33].offset = offsetof(Tctx313036, mode);
TMP1019[33].typ = (&NTI313020);
TMP1019[33].name = "mode";
TMP1122[12] = &TMP1019[40];
NTI313022.size = sizeof(Tsandboxflag313022);
NTI313022.kind = 14;
NTI313022.base = 0;
NTI313022.flags = 3;
for (TMP1138 = 0; TMP1138 < 3; TMP1138++) {
TMP1019[TMP1138+41].kind = 1;
TMP1019[TMP1138+41].offset = TMP1138;
TMP1019[TMP1138+41].name = TMP1137[TMP1138];
TMP1136[TMP1138] = &TMP1019[TMP1138+41];
}
TMP1019[44].len = 3; TMP1019[44].kind = 2; TMP1019[44].sons = &TMP1136[0];
NTI313022.node = &TMP1019[44];
NTI313024.size = sizeof(Tsandboxflag313022Set);
NTI313024.kind = 19;
NTI313024.base = (&NTI313022);
NTI313024.flags = 3;
TMP1019[45].len = 0; TMP1019[45].kind = 0;
NTI313024.node = &TMP1019[45];
TMP1019[40].kind = 1;
TMP1019[40].offset = offsetof(Tctx313036, features);
TMP1019[40].typ = (&NTI313024);
TMP1019[40].name = "features";
TMP1122[13] = &TMP1019[46];
TMP1019[46].kind = 1;
TMP1019[46].offset = offsetof(Tctx313036, traceactive);
TMP1019[46].typ = (&NTI130);
TMP1019[46].name = "traceActive";
TMP1122[14] = &TMP1019[47];
TMP1019[47].kind = 1;
TMP1019[47].offset = offsetof(Tctx313036, loopiterations);
TMP1019[47].typ = (&NTI104);
TMP1019[47].name = "loopIterations";
TMP1122[15] = &TMP1019[48];
TMP1019[48].kind = 1;
TMP1019[48].offset = offsetof(Tctx313036, comesfromheuristic);
TMP1019[48].typ = (&NTI185336);
TMP1019[48].name = "comesFromHeuristic";
TMP1122[16] = &TMP1019[49];
NTI313262.size = sizeof(TY313262);
NTI313262.kind = 18;
NTI313262.base = 0;
TMP1139[0] = &TMP1019[51];
TMP1019[51].kind = 1;
TMP1019[51].offset = offsetof(TY313262, Field0);
TMP1019[51].typ = (&NTI138);
TMP1019[51].name = "Field0";
TMP1139[1] = &TMP1019[52];
NTI313032.size = sizeof(TY172027);
NTI313032.kind = 18;
NTI313032.base = 0;
NTI313032.flags = 2;
TMP1140[0] = &TMP1019[54];
TMP1019[54].kind = 1;
TMP1019[54].offset = offsetof(TY172027, Field0);
TMP1019[54].typ = (&NTI142);
TMP1019[54].name = "Field0";
TMP1140[1] = &TMP1019[55];
TMP1019[55].kind = 1;
TMP1019[55].offset = offsetof(TY172027, Field1);
TMP1019[55].typ = (&NTI172029);
TMP1019[55].name = "Field1";
TMP1019[53].len = 2; TMP1019[53].kind = 2; TMP1019[53].sons = &TMP1140[0];
NTI313032.node = &TMP1019[53];
TMP1019[52].kind = 1;
TMP1019[52].offset = offsetof(TY313262, Field1);
TMP1019[52].typ = (&NTI313032);
TMP1019[52].name = "Field1";
TMP1019[50].len = 2; TMP1019[50].kind = 2; TMP1019[50].sons = &TMP1139[0];
NTI313262.node = &TMP1019[50];
NTI313261.size = sizeof(TY313261*);
NTI313261.kind = 24;
NTI313261.base = (&NTI313262);
NTI313261.marker = TMP1141;
TMP1019[49].kind = 1;
TMP1019[49].offset = offsetof(Tctx313036, callbacks);
TMP1019[49].typ = (&NTI313261);
TMP1019[49].name = "callbacks";
TMP1122[17] = &TMP1019[56];
TMP1019[56].kind = 1;
TMP1019[56].offset = offsetof(Tctx313036, errorflag);
TMP1019[56].typ = (&NTI138);
TMP1019[56].name = "errorFlag";
TMP1019[0].len = 18; TMP1019[0].kind = 2; TMP1019[0].sons = &TMP1122[0];
NTI313036.node = &TMP1019[0];
NTI313034.size = sizeof(Tctx313036*);
NTI313034.kind = 22;
NTI313034.base = (&NTI313036);
NTI313034.marker = TMP1142;
}

