/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype477009 PluginHEX3Aobjecttype477009;
typedef struct Tident197010 Tident197010;
typedef struct Tnode290802 Tnode290802;
typedef struct Tcontext342020 Tcontext342020;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell46904 Cell46904;
typedef struct Cellseq46920 Cellseq46920;
typedef struct Gcheap49418 Gcheap49418;
typedef struct Gcstack49416 Gcstack49416;
typedef struct Memregion29085 Memregion29085;
typedef struct Smallchunk29039 Smallchunk29039;
typedef struct Llchunk29079 Llchunk29079;
typedef struct Bigchunk29041 Bigchunk29041;
typedef struct Intset29014 Intset29014;
typedef struct Trunk29010 Trunk29010;
typedef struct Avlnode29083 Avlnode29083;
typedef struct Gcstat49414 Gcstat49414;
typedef struct Cellset46916 Cellset46916;
typedef struct Pagedesc46912 Pagedesc46912;
typedef struct Tsym290834 Tsym290834;
typedef struct Tidobj197004 Tidobj197004;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct TY290929 TY290929;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Ttype290840 Ttype290840;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct Tloc290816 Tloc290816;
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct Tlib290820 Tlib290820;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct Tpasscontext339002 Tpasscontext339002;
typedef struct Tscope290828 Tscope290828;
typedef struct Tproccon342008 Tproccon342008;
typedef struct Intset266030 Intset266030;
typedef struct Trunk266026 Trunk266026;
typedef struct Trunkseq266028 Trunkseq266028;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tidtable290850 Tidtable290850;
typedef struct Tidpairseq290848 Tidpairseq290848;
typedef struct Tctx341035 Tctx341035;
typedef struct TY342144 TY342144;
typedef struct Basechunk29037 Basechunk29037;
typedef struct Freecell29029 Freecell29029;
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct TY290960 TY290960;
typedef struct Tidpair290846 Tidpair290846;
typedef struct TY341241 TY341241;
typedef struct TY190086 TY190086;
typedef struct PprocHEX3Aobjecttype341220 PprocHEX3Aobjecttype341220;
typedef struct TY341260 TY341260;
typedef struct Tinstantiationpair342010 Tinstantiationpair342010;
typedef struct TY290961 TY290961;
typedef struct TY341221 TY341221;
typedef struct TY341226 TY341226;
typedef struct TY341261 TY341261;
typedef struct Vmargs341029 Vmargs341029;
typedef struct Tblock341017 Tblock341017;
typedef struct TY341201 TY341201;
typedef N_NIMCALL_PTR(Tnode290802*, Transformation477003) (Tcontext342020* c0, Tnode290802* n0);
struct  PluginHEX3Aobjecttype477009  {
Tident197010* fn;
Tident197010* module;
Tident197010* package;
Transformation477003 t;
PluginHEX3Aobjecttype477009* next;
};
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
typedef N_NIMCALL_PTR(void, Globalmarkerproc55402) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Cell46904  {
NI refcount;
TNimType* typ;
};
struct  Cellseq46920  {
NI len;
NI cap;
Cell46904** d;
};
typedef Smallchunk29039* TY29100[512];
typedef Trunk29010* Trunkbuckets29012[256];
struct  Intset29014  {
Trunkbuckets29012 data;
};
struct  Memregion29085  {
NI minlargeobj;
NI maxlargeobj;
TY29100 freesmallchunks;
Llchunk29079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29041* freechunkslist;
Intset29014 chunkstarts;
Avlnode29083* root;
Avlnode29083* deleted;
Avlnode29083* last;
Avlnode29083* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset46916  {
NI counter;
NI max;
Pagedesc46912* head;
Pagedesc46912** data;
};
struct  Gcheap49418  {
Gcstack49416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq46920 zct;
Cellseq46920 decstack;
Cellseq46920 tempstack;
NI recgclock;
Memregion29085 region;
Gcstat49414 stat;
Cellset46916 marked;
Cellseq46920 additionalroots;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind290435;
struct  Tstrtable290806  {
NI counter;
Tsymseq290804* data;
};
typedef NU16 Tmagic290524;
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag290184Set;
typedef NU32 Toption168009Set;
typedef NU8 Tlockind290808;
typedef NU8 Tstorageloc290812;
typedef NU16 Tlocflag290810Set;
struct  Tloc290816  {
Tlockind290808 k;
Tstorageloc290812 s;
Tlocflag290810Set flags;
Ttype290840* t;
Ropeobj177006* r;
};
struct  Tsym290834  {
  Tidobj197004 Sup;
Tsymkind290435 kind;
union{
struct {Ttypeseq290836* typeinstcache;
} S1;
struct {TY290929* procinstcache;
Tsym290834* gcunsafetyreason;
} S2;
struct {TY290929* usedgenerics;
Tstrtable290806 tab;
} S3;
struct {Tsym290834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic290524 magic;
Ttype290840* typ;
Tident197010* name;
Tlineinfo189336 info;
Tsym290834* owner;
Tsymflag290184Set flags;
Tnode290802* ast;
Toption168009Set options;
NI position;
NI offset;
Tloc290816 loc;
Tlib290820* annex;
Tnode290802* constraint;
};
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
NI h;
};
typedef NU16 Tnodeflag290427Set;
typedef NU8 Tnodekind290020;
struct  Tnode290802  {
Ttype290840* typ;
Tlineinfo189336 info;
Tnodeflag290427Set flags;
Tnodekind290020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym290834* sym;
} S4;
struct {Tident197010* ident;
} S5;
struct {Tnodeseq290796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tpasscontext339002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset266030  {
NI counter;
NI max;
Trunk266026* head;
Trunkseq266028* data;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
struct  Tidtable290850  {
NI counter;
Tidpairseq290848* data;
};
typedef N_NIMCALL_PTR(Tnode290802*, TY342075) (Tcontext342020* c0, Tnode290802* n0);
typedef NU16 Texprflag342012Set;
typedef N_NIMCALL_PTR(Tnode290802*, TY342080) (Tcontext342020* c0, Tnode290802* n0, Texprflag342012Set flags0);
typedef N_NIMCALL_PTR(Tnode290802*, TY342088) (Tcontext342020* c0, Tnode290802* n0, Texprflag342012Set flags0);
typedef N_NIMCALL_PTR(Tnode290802*, TY342096) (Tcontext342020* c0, Tnode290802* n0);
typedef N_NIMCALL_PTR(Tnode290802*, TY342101) (Tcontext342020* c0, Tnode290802* n0, Texprflag342012Set flags0);
typedef N_NIMCALL_PTR(Tnode290802*, TY342109) (Tcontext342020* c0, Tnode290802* n0);
typedef NU32 Tsymkind290435Set;
typedef N_NIMCALL_PTR(Tnode290802*, TY342114) (Tcontext342020* c0, Tnode290802* n0, Tnode290802* norig0, Tsymkind290435Set filter0);
typedef N_NIMCALL_PTR(Ttype290840*, TY342121) (Tcontext342020* c0, Tnode290802* n0, Ttype290840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode290802*, ClPrc) (Tcontext342020* c0, Tidtable290850 pt0, Tnode290802* n0, void* ClEnv);
void* ClEnv;
} TY342127;
typedef struct {
N_NIMCALL_PTR(Tsym290834*, ClPrc) (Tcontext342020* c0, Tsym290834* fn0, Tidtable290850 pt0, Tlineinfo189336 info0, void* ClEnv);
void* ClEnv;
} TY342133;
typedef NU8 Ttypeattachedop342016;
typedef N_NIMCALL_PTR(Tsym290834*, TY342150) (Tcontext342020* c0, Tsym290834* dc0, Ttype290840* t0, Tlineinfo189336 info0, Ttypeattachedop342016 op0, NI col0);
struct  Tcontext342020  {
  Tpasscontext339002 Sup;
Tsym290834* module;
Tscope290828* currentscope;
Tscope290828* importtable;
Tscope290828* toplevelscope;
Tproccon342008* p;
Tsymseq290804* friendmodules;
NI instcounter;
Intset266030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq290804* converters;
Tsymseq290804* patterns;
Tlinkedlist147013 optionstack;
Tidtable290850 symmapping;
Tlinkedlist147013 libs;
TY342075 semconstexpr;
TY342080 semexpr;
TY342088 semtryexpr;
TY342096 semtryconstexpr;
TY342101 semoperand;
TY342109 semconstboolexpr;
TY342114 semoverloadedcall;
TY342121 semtypenode;
TY342127 seminferredlambda;
TY342133 semgenerateinstance;
Intset266030 includedfiles;
Tstrtable290806 userpragmas;
Tctx341035* evalcontext;
Intset266030 unknownidents;
TY342144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY342150 insttypeboundop;
Tident197010* selfname;
Tstrtable290806 signatures;
};
struct  Gcstack49416  {
Gcstack49416* prev;
Gcstack49416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29039  {
  Basechunk29037 Sup;
Smallchunk29039* next;
Smallchunk29039* prev;
Freecell29029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29079  {
NI size;
NI acc;
Llchunk29079* next;
};
struct  Bigchunk29041  {
  Basechunk29037 Sup;
Bigchunk29041* next;
Bigchunk29041* prev;
NI align;
NF data;
};
typedef NI TY29018[16];
struct  Trunk29010  {
Trunk29010* next;
NI key;
TY29018 bits;
};
typedef Avlnode29083* TY29090[2];
struct  Avlnode29083  {
TY29090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc46912  {
Pagedesc46912* next;
NI key;
TY29018 bits;
};
typedef NU8 Ttypekind290244;
typedef NU8 Tcallingconvention290002;
typedef NU32 Ttypeflag290431Set;
struct  Ttype290840  {
  Tidobj197004 Sup;
Ttypekind290244 kind;
Tcallingconvention290002 callconv;
Ttypeflag290431Set flags;
Ttypeseq290836* sons;
Tnode290802* n;
Tsym290834* owner;
Tsym290834* sym;
Tsym290834* destructor;
Tsym290834* deepcopy;
Tsym290834* assignment;
TY290960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc290816 loc;
};
struct  Ropeobj177006  {
  TNimObject Sup;
Ropeobj177006* left;
Ropeobj177006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind290818;
struct  Tlib290820  {
  Tlistentry147007 Sup;
Tlibkind290818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj177006* name;
Tnode290802* path;
};
struct  Tscope290828  {
NI depthlevel;
Tstrtable290806 symbols;
Tscope290828* parent;
};
struct  Tproccon342008  {
Tsym290834* owner;
Tsym290834* resultsym;
Tsym290834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon342008* next;
NIM_BOOL wasforwarded;
Tnode290802* bracketexpr;
};
struct  Trunk266026  {
Trunk266026* next;
NI key;
TY29018 bits;
};
struct  Tidpair290846  {
Tidobj197004* key;
TNimObject* val;
};
typedef NU8 Tevalmode341019;
typedef NU8 Tsandboxflag341021Set;
struct  Tctx341035  {
  Tpasscontext339002 Sup;
TY341241* code;
TY190086* debug;
Tnode290802* globals;
Tnode290802* constants;
Ttypeseq290836* types;
Tnode290802* currentexceptiona;
Tnode290802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype341220* prc;
Tsym290834* module;
Tnode290802* callsite;
Tevalmode341019 mode;
Tsandboxflag341021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo189336 comesfromheuristic;
TY341260* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair342010  {
Tsym290834* genericsym;
Tinstantiation290824* inst;
};
struct  Freecell29029  {
Freecell29029* next;
NI zerofield;
};
struct  Tinstantiation290824  {
Tsym290834* sym;
Ttypeseq290836* concretetypes;
NI compilesid;
};
struct TY290961 {
NI Field0;
Tsym290834* Field1;
};
typedef NU8 Tslotkind341025;
struct TY341226 {
NIM_BOOL Field0;
Tslotkind341025 Field1;
};
typedef TY341226 TY341229[256];
struct  PprocHEX3Aobjecttype341220  {
TY341221* blocks;
Tsym290834* sym;
TY341229 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs341029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback341031;
struct TY341261 {
NimStringDesc* Field0;
Vmcallback341031 Field1;
};
struct  Tblock341017  {
Tsym290834* label;
TY341201* fixups;
};
struct  Vmargs341029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode290802* currentexception;
};
struct Ttypeseq290836 {
  TGenericSeq Sup;
  Ttype290840* data[SEQ_DECL_SIZE];
};
struct TY290929 {
  TGenericSeq Sup;
  Tinstantiation290824* data[SEQ_DECL_SIZE];
};
struct Tsymseq290804 {
  TGenericSeq Sup;
  Tsym290834* data[SEQ_DECL_SIZE];
};
struct Tnodeseq290796 {
  TGenericSeq Sup;
  Tnode290802* data[SEQ_DECL_SIZE];
};
struct Trunkseq266028 {
  TGenericSeq Sup;
  Trunk266026* data[SEQ_DECL_SIZE];
};
struct Tidpairseq290848 {
  TGenericSeq Sup;
  Tidpair290846 data[SEQ_DECL_SIZE];
};
struct TY342144 {
  TGenericSeq Sup;
  Tinstantiationpair342010 data[SEQ_DECL_SIZE];
};
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
};
struct TY341241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY190086 {
  TGenericSeq Sup;
  Tlineinfo189336 data[SEQ_DECL_SIZE];
};
struct TY341260 {
  TGenericSeq Sup;
  TY341261 data[SEQ_DECL_SIZE];
};
struct TY341221 {
  TGenericSeq Sup;
  Tblock341017 data[SEQ_DECL_SIZE];
};
struct TY341201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T1104897005_3)(void* p, NI op);
N_NIMCALL(void, T1104897005_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55402 markerproc0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(Tident197010*, getident_197441_791273810)(NimStringDesc* identifier0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0);
N_NOINLINE(void, addzct_51017_1689653243)(Cellseq46920* s0, Cell46904* c0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53019_1689653243)(Cell46904* c0);
static N_INLINE(void, decref_52601_1689653243)(Cell46904* c0);
N_NIMCALL(NIM_BOOL, pluginmatches_477027_1104897005)(PluginHEX3Aobjecttype477009* p0, Tsym290834* s0);
N_NIMCALL(Tsym290834*, skipgenericowner_295279_850551059)(Tsym290834* s0);
PluginHEX3Aobjecttype477009* head_477081_1104897005;
TNimType NTI477009; /* Plugin:ObjectType */
extern TNimType NTI197008; /* PIdent */
TNimType NTI477003; /* Transformation */
TNimType NTI477005; /* Plugin */
extern Gcheap49418 gch_49458_1689653243;
N_NIMCALL(void, T1104897005_3)(void* p, NI op) {
	PluginHEX3Aobjecttype477009* a;
	a = (PluginHEX3Aobjecttype477009*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
}
N_NIMCALL(void, T1104897005_4)(void) {
	nimGCvisit((void*)head_477081_1104897005, 0);
}

static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0) {
	Cell46904* result0;
	result0 = (Cell46904*)0;
	result0 = ((Cell46904*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell46904))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0) {
	addzct_51017_1689653243((&gch_49458_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell46904* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell46904* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(void, incref_53019_1689653243)(Cell46904* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_52601_1689653243)(Cell46904* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell46904* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell46904*)0;
		LOC5 = usrtocell_51040_1689653243(src0);
		incref_53019_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell46904* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell46904*)0;
		LOC10 = usrtocell_51040_1689653243((*dest0));
		decref_52601_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, registerplugin_477101_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation477003 t0) {
	PluginHEX3Aobjecttype477009* oldhead0;
	PluginHEX3Aobjecttype477009* LOC1;
	oldhead0 = head_477081_1104897005;
	LOC1 = (PluginHEX3Aobjecttype477009*)0;
	LOC1 = (PluginHEX3Aobjecttype477009*) newObj((&NTI477005), sizeof(PluginHEX3Aobjecttype477009));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_197441_791273810(fn0));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_197441_791273810(module0));
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_197441_791273810(package0));
	(*LOC1).t = t0;
	asgnRef((void**) (&(*LOC1).next), oldhead0);
	asgnRef((void**) (&head_477081_1104897005), LOC1);
}

N_NIMCALL(NIM_BOOL, pluginmatches_477027_1104897005)(PluginHEX3Aobjecttype477009* p0, Tsym290834* s0) {
	NIM_BOOL result0;
	Tsym290834* module0;
	Tsym290834* package0;
{	result0 = (NIM_BOOL)0;
	{
		if (!!(((*(*s0).name).Sup.id == (*(*p0).fn).Sup.id))) goto LA3;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	module0 = skipgenericowner_295279_850551059(s0);
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = (NIM_BOOL)0;
		LOC8 = (NIM_BOOL)0;
		LOC8 = (module0 == NIM_NIL);
		if (LOC8) goto LA9;
		LOC8 = !(((*module0).kind == ((Tsymkind290435) 6)));
		LA9: ;
		LOC7 = LOC8;
		if (LOC7) goto LA10;
		LOC7 = !(((*(*module0).name).Sup.id == (*(*p0).module).Sup.id));
		LA10: ;
		if (!LOC7) goto LA11;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA11: ;
	package0 = (*module0).owner;
	{
		NIM_BOOL LOC15;
		NIM_BOOL LOC16;
		LOC15 = (NIM_BOOL)0;
		LOC16 = (NIM_BOOL)0;
		LOC16 = (package0 == NIM_NIL);
		if (LOC16) goto LA17;
		LOC16 = !(((*package0).kind == ((Tsymkind290435) 23)));
		LA17: ;
		LOC15 = LOC16;
		if (LOC15) goto LA18;
		LOC15 = !(((*(*package0).name).Sup.id == (*(*p0).package).Sup.id));
		LA18: ;
		if (!LOC15) goto LA19;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA19: ;
	result0 = NIM_TRUE;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Transformation477003, getplugin_477083_1104897005)(Tsym290834* fn0) {
	Transformation477003 result0;
	PluginHEX3Aobjecttype477009* it0;
{	result0 = (Transformation477003)0;
	it0 = head_477081_1104897005;
	{
		while (1) {
			if (!!((it0 == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = (NIM_BOOL)0;
				LOC5 = pluginmatches_477027_1104897005(it0, fn0);
				if (!LOC5) goto LA6;
				result0 = (*it0).t;
				goto BeforeRet;
			}
			LA6: ;
			it0 = (*it0).next;
		} LA2: ;
	}
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_pluginsupportInit000)(void) {
nimRegisterGlobalMarker(T1104897005_4);
}

NIM_EXTERNC N_NOINLINE(void, compiler_pluginsupportDatInit000)(void) {
static TNimNode* T1104897005_2[5];
static TNimNode T1104897005_0[6];
NTI477009.size = sizeof(PluginHEX3Aobjecttype477009);
NTI477009.kind = 18;
NTI477009.base = 0;
T1104897005_2[0] = &T1104897005_0[1];
T1104897005_0[1].kind = 1;
T1104897005_0[1].offset = offsetof(PluginHEX3Aobjecttype477009, fn);
T1104897005_0[1].typ = (&NTI197008);
T1104897005_0[1].name = "fn";
T1104897005_2[1] = &T1104897005_0[2];
T1104897005_0[2].kind = 1;
T1104897005_0[2].offset = offsetof(PluginHEX3Aobjecttype477009, module);
T1104897005_0[2].typ = (&NTI197008);
T1104897005_0[2].name = "module";
T1104897005_2[2] = &T1104897005_0[3];
T1104897005_0[3].kind = 1;
T1104897005_0[3].offset = offsetof(PluginHEX3Aobjecttype477009, package);
T1104897005_0[3].typ = (&NTI197008);
T1104897005_0[3].name = "package";
T1104897005_2[3] = &T1104897005_0[4];
NTI477003.size = sizeof(Transformation477003);
NTI477003.kind = 25;
NTI477003.base = 0;
NTI477003.flags = 3;
T1104897005_0[4].kind = 1;
T1104897005_0[4].offset = offsetof(PluginHEX3Aobjecttype477009, t);
T1104897005_0[4].typ = (&NTI477003);
T1104897005_0[4].name = "t";
T1104897005_2[4] = &T1104897005_0[5];
T1104897005_0[5].kind = 1;
T1104897005_0[5].offset = offsetof(PluginHEX3Aobjecttype477009, next);
T1104897005_0[5].typ = (&NTI477005);
T1104897005_0[5].name = "next";
T1104897005_0[0].len = 5; T1104897005_0[0].kind = 2; T1104897005_0[0].sons = &T1104897005_2[0];
NTI477009.node = &T1104897005_0[0];
NTI477005.size = sizeof(PluginHEX3Aobjecttype477009*);
NTI477005.kind = 22;
NTI477005.base = (&NTI477009);
NTI477005.marker = T1104897005_3;
}

