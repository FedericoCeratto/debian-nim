/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype448010 PluginHEX3Aobjecttype448010;
typedef struct Tident194012 Tident194012;
typedef struct Tnode264794 Tnode264794;
typedef struct Tcontext315020 Tcontext315020;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell48105 Cell48105;
typedef struct Cellseq48121 Cellseq48121;
typedef struct Gcheap50618 Gcheap50618;
typedef struct Gcstack50616 Gcstack50616;
typedef struct Memregion30285 Memregion30285;
typedef struct Smallchunk30239 Smallchunk30239;
typedef struct Llchunk30279 Llchunk30279;
typedef struct Bigchunk30241 Bigchunk30241;
typedef struct Intset30214 Intset30214;
typedef struct Trunk30210 Trunk30210;
typedef struct Avlnode30283 Avlnode30283;
typedef struct Gcstat50614 Gcstat50614;
typedef struct Cellset48117 Cellset48117;
typedef struct Pagedesc48113 Pagedesc48113;
typedef struct Tsym264826 Tsym264826;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Ttype264832 Ttype264832;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tpasscontext312002 Tpasscontext312002;
typedef struct Tproccon315008 Tproccon315008;
typedef struct Intset241031 Intset241031;
typedef struct Trunk241027 Trunk241027;
typedef struct Trunkseq241029 Trunkseq241029;
typedef struct Tlinkedlist141016 Tlinkedlist141016;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Tidtable264844 Tidtable264844;
typedef struct Tidpairseq264842 Tidpairseq264842;
typedef struct Tctx314036 Tctx314036;
typedef struct TY315144 TY315144;
typedef struct Basechunk30237 Basechunk30237;
typedef struct Freecell30229 Freecell30229;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tidpair264840 Tidpair264840;
typedef struct TY314242 TY314242;
typedef struct TY187093 TY187093;
typedef struct PprocHEX3Aobjecttype314221 PprocHEX3Aobjecttype314221;
typedef struct TY314261 TY314261;
typedef struct Tinstantiationpair315010 Tinstantiationpair315010;
typedef struct TY264917 TY264917;
typedef struct TY314222 TY314222;
typedef struct TY314227 TY314227;
typedef struct TY314262 TY314262;
typedef struct Vmargs314030 Vmargs314030;
typedef struct Tblock314018 Tblock314018;
typedef struct TY314202 TY314202;
typedef N_NIMCALL_PTR(Tnode264794*, Transformation448004) (Tcontext315020* c0, Tnode264794* n0);
struct  PluginHEX3Aobjecttype448010  {
Tident194012* fn;
Tident194012* module;
Tident194012* package;
Transformation448004 t;
PluginHEX3Aobjecttype448010* next;
};
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
typedef N_NIMCALL_PTR(void, Globalmarkerproc56602) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Cell48105  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48121  {
NI len;
NI cap;
Cell48105** d;
};
typedef Smallchunk30239* TY30300[512];
typedef Trunk30210* Trunkbuckets30212[256];
struct  Intset30214  {
Trunkbuckets30212 data;
};
struct  Memregion30285  {
NI minlargeobj;
NI maxlargeobj;
TY30300 freesmallchunks;
Llchunk30279* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30241* freechunkslist;
Intset30214 chunkstarts;
Avlnode30283* root;
Avlnode30283* deleted;
Avlnode30283* last;
Avlnode30283* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset48117  {
NI counter;
NI max;
Pagedesc48113* head;
Pagedesc48113** data;
};
struct  Gcheap50618  {
Gcstack50616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48121 zct;
Cellseq48121 decstack;
Cellseq48121 tempstack;
NI recgclock;
Memregion30285 region;
Gcstat50614 stat;
Cellset48117 marked;
Cellseq48121 additionalroots;
};
struct  TNimObject  {
TNimType* m_type;
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
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
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
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
typedef NU16 Tnodeflag264427Set;
typedef NU8 Tnodekind264020;
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
struct  Tpasscontext312002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset241031  {
NI counter;
NI max;
Trunk241027* head;
Trunkseq241029* data;
};
struct  Tlinkedlist141016  {
Tlistentry141010* head;
Tlistentry141010* tail;
NI counter;
};
struct  Tidtable264844  {
NI counter;
Tidpairseq264842* data;
};
typedef N_NIMCALL_PTR(Tnode264794*, TY315075) (Tcontext315020* c0, Tnode264794* n0);
typedef NU16 Texprflag315012Set;
typedef N_NIMCALL_PTR(Tnode264794*, TY315080) (Tcontext315020* c0, Tnode264794* n0, Texprflag315012Set flags0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315088) (Tcontext315020* c0, Tnode264794* n0, Texprflag315012Set flags0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315096) (Tcontext315020* c0, Tnode264794* n0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315101) (Tcontext315020* c0, Tnode264794* n0, Texprflag315012Set flags0);
typedef N_NIMCALL_PTR(Tnode264794*, TY315109) (Tcontext315020* c0, Tnode264794* n0);
typedef NU32 Tsymkind264435Set;
typedef N_NIMCALL_PTR(Tnode264794*, TY315114) (Tcontext315020* c0, Tnode264794* n0, Tnode264794* norig0, Tsymkind264435Set filter0);
typedef N_NIMCALL_PTR(Ttype264832*, TY315121) (Tcontext315020* c0, Tnode264794* n0, Ttype264832* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode264794*, ClPrc) (Tcontext315020* c0, Tidtable264844 pt0, Tnode264794* n0, void* ClEnv);
void* ClEnv;
} TY315127;
typedef struct {
N_NIMCALL_PTR(Tsym264826*, ClPrc) (Tcontext315020* c0, Tsym264826* fn0, Tidtable264844 pt0, Tlineinfo186336 info0, void* ClEnv);
void* ClEnv;
} TY315133;
typedef NU8 Ttypeattachedop315016;
typedef N_NIMCALL_PTR(Tsym264826*, TY315149) (Tcontext315020* c0, Tsym264826* dc0, Ttype264832* t0, Tlineinfo186336 info0, Ttypeattachedop315016 op0);
struct  Tcontext315020  {
  Tpasscontext312002 Sup;
Tsym264826* module;
Tscope264820* currentscope;
Tscope264820* importtable;
Tscope264820* toplevelscope;
Tproccon315008* p;
Tsymseq264796* friendmodules;
NI instcounter;
Intset241031 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq264796* converters;
Tsymseq264796* patterns;
Tlinkedlist141016 optionstack;
Tidtable264844 symmapping;
Tlinkedlist141016 libs;
TY315075 semconstexpr;
TY315080 semexpr;
TY315088 semtryexpr;
TY315096 semtryconstexpr;
TY315101 semoperand;
TY315109 semconstboolexpr;
TY315114 semoverloadedcall;
TY315121 semtypenode;
TY315127 seminferredlambda;
TY315133 semgenerateinstance;
Intset241031 includedfiles;
Tstrtable264798 userpragmas;
Tctx314036* evalcontext;
Intset241031 unknownidents;
TY315144* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY315149 insttypeboundop;
Tident194012* selfname;
Tstrtable264798 signatures;
};
struct  Gcstack50616  {
Gcstack50616* prev;
Gcstack50616* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30237  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30239  {
  Basechunk30237 Sup;
Smallchunk30239* next;
Smallchunk30239* prev;
Freecell30229* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30279  {
NI size;
NI acc;
Llchunk30279* next;
};
struct  Bigchunk30241  {
  Basechunk30237 Sup;
Bigchunk30241* next;
Bigchunk30241* prev;
NI align;
NF data;
};
typedef NI TY30218[16];
struct  Trunk30210  {
Trunk30210* next;
NI key;
TY30218 bits;
};
typedef Avlnode30283* TY30290[2];
struct  Avlnode30283  {
TY30290 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc48113  {
Pagedesc48113* next;
NI key;
TY30218 bits;
};
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
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
struct  Tproccon315008  {
Tsym264826* owner;
Tsym264826* resultsym;
Tsym264826* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon315008* next;
NIM_BOOL wasforwarded;
Tnode264794* bracketexpr;
};
struct  Trunk241027  {
Trunk241027* next;
NI key;
TY30218 bits;
};
struct  Tidpair264840  {
Tidobj194006* key;
TNimObject* val;
};
typedef NU8 Tevalmode314020;
typedef NU8 Tsandboxflag314022Set;
struct  Tctx314036  {
  Tpasscontext312002 Sup;
TY314242* code;
TY187093* debug;
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
struct  Tinstantiationpair315010  {
Tsym264826* genericsym;
Tinstantiation264816* inst;
};
struct  Freecell30229  {
Freecell30229* next;
NI zerofield;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
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
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs314030* args0, void* ClEnv);
void* ClEnv;
} Vmcallback314032;
struct TY314262 {
NimStringDesc* Field0;
Vmcallback314032 Field1;
};
struct  Tblock314018  {
Tsym264826* label;
TY314202* fixups;
};
struct  Vmargs314030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode264794* currentexception;
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct Trunkseq241029 {
  TGenericSeq Sup;
  Trunk241027* data[SEQ_DECL_SIZE];
};
struct Tidpairseq264842 {
  TGenericSeq Sup;
  Tidpair264840 data[SEQ_DECL_SIZE];
};
struct TY315144 {
  TGenericSeq Sup;
  Tinstantiationpair315010 data[SEQ_DECL_SIZE];
};
struct TY314242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY187093 {
  TGenericSeq Sup;
  Tlineinfo186336 data[SEQ_DECL_SIZE];
};
struct TY314261 {
  TGenericSeq Sup;
  TY314262 data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY314222 {
  TGenericSeq Sup;
  Tblock314018 data[SEQ_DECL_SIZE];
};
struct TY314202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1159)(void* p, NI op);
N_NIMCALL(void, TMP1160)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56602 markerproc0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(Tident194012*, getident_194441_791273810)(NimStringDesc* identifier0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0);
N_NOINLINE(void, addzct_52217_1689653243)(Cellseq48121* s0, Cell48105* c0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_54219_1689653243)(Cell48105* c0);
static N_INLINE(void, decref_53801_1689653243)(Cell48105* c0);
N_NIMCALL(NIM_BOOL, pluginmatches_448028_1104897005)(PluginHEX3Aobjecttype448010* p0, Tsym264826* s0);
N_NIMCALL(Tsym264826*, skipgenericowner_269352_850551059)(Tsym264826* s0);
PluginHEX3Aobjecttype448010* head_448082_1104897005;
TNimType NTI448010; /* Plugin:ObjectType */
extern TNimType NTI194010; /* PIdent */
TNimType NTI448004; /* Transformation */
TNimType NTI448006; /* Plugin */
extern Gcheap50618 gch_50658_1689653243;
N_NIMCALL(void, TMP1159)(void* p, NI op) {
	PluginHEX3Aobjecttype448010* a;
	a = (PluginHEX3Aobjecttype448010*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
}
N_NIMCALL(void, TMP1160)() {
	nimGCvisit((void*)head_448082_1104897005, 0);
}

static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0) {
	Cell48105* result0;
	result0 = (Cell48105*)0;
	result0 = ((Cell48105*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell48105))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0) {
	addzct_52217_1689653243((&gch_50658_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell48105* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52240_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48105* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52240_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53401_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(void, incref_54219_1689653243)(Cell48105* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_53801_1689653243)(Cell48105* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53401_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell48105* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell48105*)0;
		LOC5 = usrtocell_52240_1689653243(src0);
		incref_54219_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell48105* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell48105*)0;
		LOC10 = usrtocell_52240_1689653243((*dest0));
		decref_53801_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, registerplugin_448102_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation448004 t0) {
	PluginHEX3Aobjecttype448010* oldhead0;
	PluginHEX3Aobjecttype448010* LOC1;
	oldhead0 = head_448082_1104897005;
	LOC1 = (PluginHEX3Aobjecttype448010*)0;
	LOC1 = (PluginHEX3Aobjecttype448010*) newObj((&NTI448006), sizeof(PluginHEX3Aobjecttype448010));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_194441_791273810(fn0));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_194441_791273810(module0));
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_194441_791273810(package0));
	(*LOC1).t = t0;
	asgnRef((void**) (&(*LOC1).next), oldhead0);
	asgnRef((void**) (&head_448082_1104897005), LOC1);
}

N_NIMCALL(NIM_BOOL, pluginmatches_448028_1104897005)(PluginHEX3Aobjecttype448010* p0, Tsym264826* s0) {
	NIM_BOOL result0;
	Tsym264826* module0;
	Tsym264826* package0;
{	result0 = (NIM_BOOL)0;
	{
		if (!!(((*(*s0).name).Sup.id == (*(*p0).fn).Sup.id))) goto LA3;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	module0 = skipgenericowner_269352_850551059(s0);
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = (NIM_BOOL)0;
		LOC8 = (NIM_BOOL)0;
		LOC8 = (module0 == NIM_NIL);
		if (LOC8) goto LA9;
		LOC8 = !(((*module0).kind == ((Tsymkind264435) 6)));
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
		LOC16 = !(((*package0).kind == ((Tsymkind264435) 23)));
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

N_NIMCALL(Transformation448004, getplugin_448084_1104897005)(Tsym264826* fn0) {
	Transformation448004 result0;
	PluginHEX3Aobjecttype448010* it0;
{	result0 = (Transformation448004)0;
	it0 = head_448082_1104897005;
	{
		while (1) {
			if (!!((it0 == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = (NIM_BOOL)0;
				LOC5 = pluginmatches_448028_1104897005(it0, fn0);
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
nimRegisterGlobalMarker(TMP1160);
}

NIM_EXTERNC N_NOINLINE(void, compiler_pluginsupportDatInit000)(void) {
static TNimNode* TMP1158[5];
static TNimNode TMP1156[6];
NTI448010.size = sizeof(PluginHEX3Aobjecttype448010);
NTI448010.kind = 18;
NTI448010.base = 0;
TMP1158[0] = &TMP1156[1];
TMP1156[1].kind = 1;
TMP1156[1].offset = offsetof(PluginHEX3Aobjecttype448010, fn);
TMP1156[1].typ = (&NTI194010);
TMP1156[1].name = "fn";
TMP1158[1] = &TMP1156[2];
TMP1156[2].kind = 1;
TMP1156[2].offset = offsetof(PluginHEX3Aobjecttype448010, module);
TMP1156[2].typ = (&NTI194010);
TMP1156[2].name = "module";
TMP1158[2] = &TMP1156[3];
TMP1156[3].kind = 1;
TMP1156[3].offset = offsetof(PluginHEX3Aobjecttype448010, package);
TMP1156[3].typ = (&NTI194010);
TMP1156[3].name = "package";
TMP1158[3] = &TMP1156[4];
NTI448004.size = sizeof(Transformation448004);
NTI448004.kind = 25;
NTI448004.base = 0;
NTI448004.flags = 3;
TMP1156[4].kind = 1;
TMP1156[4].offset = offsetof(PluginHEX3Aobjecttype448010, t);
TMP1156[4].typ = (&NTI448004);
TMP1156[4].name = "t";
TMP1158[4] = &TMP1156[5];
TMP1156[5].kind = 1;
TMP1156[5].offset = offsetof(PluginHEX3Aobjecttype448010, next);
TMP1156[5].typ = (&NTI448006);
TMP1156[5].name = "next";
TMP1156[0].len = 5; TMP1156[0].kind = 2; TMP1156[0].sons = &TMP1158[0];
NTI448010.node = &TMP1156[0];
NTI448006.size = sizeof(PluginHEX3Aobjecttype448010*);
NTI448006.kind = 22;
NTI448006.base = (&NTI448010);
NTI448006.marker = TMP1159;
}

