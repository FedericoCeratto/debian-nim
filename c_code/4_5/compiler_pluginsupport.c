/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype479009 PluginHEX3Aobjecttype479009;
typedef struct Tident199010 Tident199010;
typedef struct Tnode292802 Tnode292802;
typedef struct Tcontext344020 Tcontext344020;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct Tsym292834 Tsym292834;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Ttype292840 Ttype292840;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Tlib292820 Tlib292820;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tpasscontext341002 Tpasscontext341002;
typedef struct Tscope292828 Tscope292828;
typedef struct Tproccon344008 Tproccon344008;
typedef struct Intset268030 Intset268030;
typedef struct Trunk268026 Trunk268026;
typedef struct Trunkseq268028 Trunkseq268028;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tidtable292850 Tidtable292850;
typedef struct Tidpairseq292848 Tidpairseq292848;
typedef struct Tctx343035 Tctx343035;
typedef struct TY344144 TY344144;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct TY292960 TY292960;
typedef struct Tidpair292846 Tidpair292846;
typedef struct TY343241 TY343241;
typedef struct TY192086 TY192086;
typedef struct PprocHEX3Aobjecttype343220 PprocHEX3Aobjecttype343220;
typedef struct TY343260 TY343260;
typedef struct Tinstantiationpair344010 Tinstantiationpair344010;
typedef struct TY292961 TY292961;
typedef struct TY343221 TY343221;
typedef struct TY343226 TY343226;
typedef struct TY343261 TY343261;
typedef struct Vmargs343029 Vmargs343029;
typedef struct Tblock343017 Tblock343017;
typedef struct TY343201 TY343201;
typedef N_NIMCALL_PTR(Tnode292802*, Transformation479003) (Tcontext344020* c0, Tnode292802* n0);
struct  PluginHEX3Aobjecttype479009  {
Tident199010* fn;
Tident199010* module;
Tident199010* package;
Transformation479003 t;
PluginHEX3Aobjecttype479009* next;
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
typedef N_NIMCALL_PTR(void, Globalmarkerproc55802) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimObject  {
TNimType* m_type;
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
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
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
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
NI h;
};
typedef NU16 Tnodeflag292427Set;
typedef NU8 Tnodekind292020;
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
struct  Tpasscontext341002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset268030  {
NI counter;
NI max;
Trunk268026* head;
Trunkseq268028* data;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
struct  Tidtable292850  {
NI counter;
Tidpairseq292848* data;
};
typedef N_NIMCALL_PTR(Tnode292802*, TY344075) (Tcontext344020* c0, Tnode292802* n0);
typedef NU16 Texprflag344012Set;
typedef N_NIMCALL_PTR(Tnode292802*, TY344080) (Tcontext344020* c0, Tnode292802* n0, Texprflag344012Set flags0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344088) (Tcontext344020* c0, Tnode292802* n0, Texprflag344012Set flags0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344096) (Tcontext344020* c0, Tnode292802* n0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344101) (Tcontext344020* c0, Tnode292802* n0, Texprflag344012Set flags0);
typedef N_NIMCALL_PTR(Tnode292802*, TY344109) (Tcontext344020* c0, Tnode292802* n0);
typedef NU32 Tsymkind292435Set;
typedef N_NIMCALL_PTR(Tnode292802*, TY344114) (Tcontext344020* c0, Tnode292802* n0, Tnode292802* norig0, Tsymkind292435Set filter0);
typedef N_NIMCALL_PTR(Ttype292840*, TY344121) (Tcontext344020* c0, Tnode292802* n0, Ttype292840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode292802*, ClPrc) (Tcontext344020* c0, Tidtable292850 pt0, Tnode292802* n0, void* ClEnv);
void* ClEnv;
} TY344127;
typedef struct {
N_NIMCALL_PTR(Tsym292834*, ClPrc) (Tcontext344020* c0, Tsym292834* fn0, Tidtable292850 pt0, Tlineinfo191336 info0, void* ClEnv);
void* ClEnv;
} TY344133;
typedef NU8 Ttypeattachedop344016;
typedef N_NIMCALL_PTR(Tsym292834*, TY344150) (Tcontext344020* c0, Tsym292834* dc0, Ttype292840* t0, Tlineinfo191336 info0, Ttypeattachedop344016 op0, NI col0);
struct  Tcontext344020  {
  Tpasscontext341002 Sup;
Tsym292834* module;
Tscope292828* currentscope;
Tscope292828* importtable;
Tscope292828* toplevelscope;
Tproccon344008* p;
Tsymseq292804* friendmodules;
NI instcounter;
Intset268030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq292804* converters;
Tsymseq292804* patterns;
Tlinkedlist147013 optionstack;
Tidtable292850 symmapping;
Tlinkedlist147013 libs;
TY344075 semconstexpr;
TY344080 semexpr;
TY344088 semtryexpr;
TY344096 semtryconstexpr;
TY344101 semoperand;
TY344109 semconstboolexpr;
TY344114 semoverloadedcall;
TY344121 semtypenode;
TY344127 seminferredlambda;
TY344133 semgenerateinstance;
Intset268030 includedfiles;
Tstrtable292806 userpragmas;
Tctx343035* evalcontext;
Intset268030 unknownidents;
TY344144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY344150 insttypeboundop;
Tident199010* selfname;
Tstrtable292806 signatures;
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
struct  Tscope292828  {
NI depthlevel;
Tstrtable292806 symbols;
Tscope292828* parent;
};
struct  Tproccon344008  {
Tsym292834* owner;
Tsym292834* resultsym;
Tsym292834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon344008* next;
NIM_BOOL wasforwarded;
Tnode292802* bracketexpr;
};
struct  Trunk268026  {
Trunk268026* next;
NI key;
TY29418 bits;
};
struct  Tidpair292846  {
Tidobj199004* key;
TNimObject* val;
};
typedef NU8 Tevalmode343019;
typedef NU8 Tsandboxflag343021Set;
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
struct  Tinstantiationpair344010  {
Tsym292834* genericsym;
Tinstantiation292824* inst;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
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
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs343029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback343031;
struct TY343261 {
NimStringDesc* Field0;
Vmcallback343031 Field1;
};
struct  Tblock343017  {
Tsym292834* label;
TY343201* fixups;
};
struct  Vmargs343029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode292802* currentexception;
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
struct Trunkseq268028 {
  TGenericSeq Sup;
  Trunk268026* data[SEQ_DECL_SIZE];
};
struct Tidpairseq292848 {
  TGenericSeq Sup;
  Tidpair292846 data[SEQ_DECL_SIZE];
};
struct TY344144 {
  TGenericSeq Sup;
  Tinstantiationpair344010 data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
struct TY343241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY192086 {
  TGenericSeq Sup;
  Tlineinfo191336 data[SEQ_DECL_SIZE];
};
struct TY343260 {
  TGenericSeq Sup;
  TY343261 data[SEQ_DECL_SIZE];
};
struct TY343221 {
  TGenericSeq Sup;
  Tblock343017 data[SEQ_DECL_SIZE];
};
struct TY343201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T1104897005_3)(void* p, NI op);
N_NIMCALL(void, T1104897005_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(Tident199010*, getident_199441_791273810)(NimStringDesc* identifier0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0);
static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0);
N_NIMCALL(NIM_BOOL, pluginmatches_479027_1104897005)(PluginHEX3Aobjecttype479009* p0, Tsym292834* s0);
N_NIMCALL(Tsym292834*, skipgenericowner_297279_850551059)(Tsym292834* s0);
PluginHEX3Aobjecttype479009* head_479081_1104897005;
TNimType NTI479009; /* Plugin:ObjectType */
extern TNimType NTI199008; /* PIdent */
TNimType NTI479003; /* Transformation */
TNimType NTI479005; /* Plugin */
extern Gcheap49818 gch_49858_1689653243;
N_NIMCALL(void, T1104897005_3)(void* p, NI op) {
	PluginHEX3Aobjecttype479009* a;
	a = (PluginHEX3Aobjecttype479009*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
}
N_NIMCALL(void, T1104897005_4)(void) {
	nimGCvisit((void*)head_479081_1104897005, 0);
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

N_NIMCALL(void, registerplugin_479101_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation479003 t0) {
	PluginHEX3Aobjecttype479009* oldhead0;
	PluginHEX3Aobjecttype479009* LOC1;
	oldhead0 = head_479081_1104897005;
	LOC1 = (PluginHEX3Aobjecttype479009*)0;
	LOC1 = (PluginHEX3Aobjecttype479009*) newObj((&NTI479005), sizeof(PluginHEX3Aobjecttype479009));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_199441_791273810(fn0));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_199441_791273810(module0));
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_199441_791273810(package0));
	(*LOC1).t = t0;
	asgnRef((void**) (&(*LOC1).next), oldhead0);
	asgnRef((void**) (&head_479081_1104897005), LOC1);
}

N_NIMCALL(NIM_BOOL, pluginmatches_479027_1104897005)(PluginHEX3Aobjecttype479009* p0, Tsym292834* s0) {
	NIM_BOOL result0;
	Tsym292834* module0;
	Tsym292834* package0;
{	result0 = (NIM_BOOL)0;
	{
		if (!!(((*(*s0).name).Sup.id == (*(*p0).fn).Sup.id))) goto LA3;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	module0 = skipgenericowner_297279_850551059(s0);
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = (NIM_BOOL)0;
		LOC8 = (NIM_BOOL)0;
		LOC8 = (module0 == NIM_NIL);
		if (LOC8) goto LA9;
		LOC8 = !(((*module0).kind == ((Tsymkind292435) 6)));
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
		LOC16 = !(((*package0).kind == ((Tsymkind292435) 23)));
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

N_NIMCALL(Transformation479003, getplugin_479083_1104897005)(Tsym292834* fn0) {
	Transformation479003 result0;
	PluginHEX3Aobjecttype479009* it0;
{	result0 = (Transformation479003)0;
	it0 = head_479081_1104897005;
	{
		while (1) {
			if (!!((it0 == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = (NIM_BOOL)0;
				LOC5 = pluginmatches_479027_1104897005(it0, fn0);
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
NTI479009.size = sizeof(PluginHEX3Aobjecttype479009);
NTI479009.kind = 18;
NTI479009.base = 0;
T1104897005_2[0] = &T1104897005_0[1];
T1104897005_0[1].kind = 1;
T1104897005_0[1].offset = offsetof(PluginHEX3Aobjecttype479009, fn);
T1104897005_0[1].typ = (&NTI199008);
T1104897005_0[1].name = "fn";
T1104897005_2[1] = &T1104897005_0[2];
T1104897005_0[2].kind = 1;
T1104897005_0[2].offset = offsetof(PluginHEX3Aobjecttype479009, module);
T1104897005_0[2].typ = (&NTI199008);
T1104897005_0[2].name = "module";
T1104897005_2[2] = &T1104897005_0[3];
T1104897005_0[3].kind = 1;
T1104897005_0[3].offset = offsetof(PluginHEX3Aobjecttype479009, package);
T1104897005_0[3].typ = (&NTI199008);
T1104897005_0[3].name = "package";
T1104897005_2[3] = &T1104897005_0[4];
NTI479003.size = sizeof(Transformation479003);
NTI479003.kind = 25;
NTI479003.base = 0;
NTI479003.flags = 3;
T1104897005_0[4].kind = 1;
T1104897005_0[4].offset = offsetof(PluginHEX3Aobjecttype479009, t);
T1104897005_0[4].typ = (&NTI479003);
T1104897005_0[4].name = "t";
T1104897005_2[4] = &T1104897005_0[5];
T1104897005_0[5].kind = 1;
T1104897005_0[5].offset = offsetof(PluginHEX3Aobjecttype479009, next);
T1104897005_0[5].typ = (&NTI479005);
T1104897005_0[5].name = "next";
T1104897005_0[0].len = 5; T1104897005_0[0].kind = 2; T1104897005_0[0].sons = &T1104897005_2[0];
NTI479009.node = &T1104897005_0[0];
NTI479005.size = sizeof(PluginHEX3Aobjecttype479009*);
NTI479005.kind = 22;
NTI479005.base = (&NTI479009);
NTI479005.marker = T1104897005_3;
}

