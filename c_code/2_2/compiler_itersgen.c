/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode294802 Tnode294802;
typedef struct Tcontext346020 Tcontext346020;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct Ttype294840 Ttype294840;
typedef struct Tsym294834 Tsym294834;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
typedef struct TY294960 TY294960;
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
typedef struct Tpasscontext343002 Tpasscontext343002;
typedef struct Tscope294828 Tscope294828;
typedef struct Tproccon346008 Tproccon346008;
typedef struct Intset270030 Intset270030;
typedef struct Trunk270026 Trunk270026;
typedef struct Trunkseq270028 Trunkseq270028;
typedef struct Tlinkedlist148013 Tlinkedlist148013;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct Tidtable294850 Tidtable294850;
typedef struct Tidpairseq294848 Tidpairseq294848;
typedef struct Tctx345035 Tctx345035;
typedef struct TY346144 TY346144;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct TY294961 TY294961;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct Tidpair294846 Tidpair294846;
typedef struct TY345241 TY345241;
typedef struct TY194083 TY194083;
typedef struct PprocHEX3Aobjecttype345220 PprocHEX3Aobjecttype345220;
typedef struct TY345260 TY345260;
typedef struct Tinstantiationpair346010 Tinstantiationpair346010;
typedef struct TY345221 TY345221;
typedef struct TY345226 TY345226;
typedef struct TY345261 TY345261;
typedef struct Vmargs345029 Vmargs345029;
typedef struct Tblock345017 Tblock345017;
typedef struct TY345201 TY345201;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode294802*, Transformation481003) (Tcontext346020* c0, Tnode294802* n0);
typedef NU8 Tnodekind294020;
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag294427Set;
struct  Tnode294802  {
Ttype294840* typ;
Tlineinfo193336 info;
Tnodeflag294427Set flags;
Tnodekind294020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym294834* sym;
} S4;
struct {Tident201010* ident;
} S5;
struct {Tnodeseq294796* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
typedef NU8 Tlockind294808;
typedef NU8 Tstorageloc294812;
typedef NU16 Tlocflag294810Set;
struct  Tloc294816  {
Tlockind294808 k;
Tstorageloc294812 s;
Tlocflag294810Set flags;
Ttype294840* t;
Ropeobj180006* r;
};
struct  Tsym294834  {
  Tidobj201004 Sup;
Tsymkind294435 kind;
union{
struct {Ttypeseq294836* typeinstcache;
} S1;
struct {TY294929* procinstcache;
Tsym294834* gcunsafetyreason;
} S2;
struct {TY294929* usedgenerics;
Tstrtable294806 tab;
} S3;
struct {Tsym294834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic294524 magic;
Ttype294840* typ;
Tident201010* name;
Tlineinfo193336 info;
Tsym294834* owner;
Tsymflag294184Set flags;
Tnode294802* ast;
Toption171009Set options;
NI position;
NI offset;
Tloc294816 loc;
Tlib294820* annex;
Tnode294802* constraint;
};
typedef NU64 Ttypekind294244Set;
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
struct  Ttype294840  {
  Tidobj201004 Sup;
Ttypekind294244 kind;
Tcallingconvention294002 callconv;
Ttypeflag294431Set flags;
Ttypeseq294836* sons;
Tnode294802* n;
Tsym294834* owner;
Tsym294834* sym;
Tsym294834* destructor;
Tsym294834* deepcopy;
Tsym294834* assignment;
TY294960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc294816 loc;
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
typedef NU8 Ttypeflag294431;
struct  Tpasscontext343002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset270030  {
NI counter;
NI max;
Trunk270026* head;
Trunkseq270028* data;
};
struct  Tlinkedlist148013  {
Tlistentry148007* head;
Tlistentry148007* tail;
NI counter;
};
struct  Tidtable294850  {
NI counter;
Tidpairseq294848* data;
};
typedef N_NIMCALL_PTR(Tnode294802*, TY346075) (Tcontext346020* c0, Tnode294802* n0);
typedef NU16 Texprflag346012Set;
typedef N_NIMCALL_PTR(Tnode294802*, TY346080) (Tcontext346020* c0, Tnode294802* n0, Texprflag346012Set flags0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346088) (Tcontext346020* c0, Tnode294802* n0, Texprflag346012Set flags0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346096) (Tcontext346020* c0, Tnode294802* n0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346101) (Tcontext346020* c0, Tnode294802* n0, Texprflag346012Set flags0);
typedef N_NIMCALL_PTR(Tnode294802*, TY346109) (Tcontext346020* c0, Tnode294802* n0);
typedef NU32 Tsymkind294435Set;
typedef N_NIMCALL_PTR(Tnode294802*, TY346114) (Tcontext346020* c0, Tnode294802* n0, Tnode294802* norig0, Tsymkind294435Set filter0);
typedef N_NIMCALL_PTR(Ttype294840*, TY346121) (Tcontext346020* c0, Tnode294802* n0, Ttype294840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode294802*, ClPrc) (Tcontext346020* c0, Tidtable294850 pt0, Tnode294802* n0, void* ClEnv);
void* ClEnv;
} TY346127;
typedef struct {
N_NIMCALL_PTR(Tsym294834*, ClPrc) (Tcontext346020* c0, Tsym294834* fn0, Tidtable294850 pt0, Tlineinfo193336 info0, void* ClEnv);
void* ClEnv;
} TY346133;
typedef NU8 Ttypeattachedop346016;
typedef N_NIMCALL_PTR(Tsym294834*, TY346150) (Tcontext346020* c0, Tsym294834* dc0, Ttype294840* t0, Tlineinfo193336 info0, Ttypeattachedop346016 op0, NI col0);
struct  Tcontext346020  {
  Tpasscontext343002 Sup;
Tsym294834* module;
Tscope294828* currentscope;
Tscope294828* importtable;
Tscope294828* toplevelscope;
Tproccon346008* p;
Tsymseq294804* friendmodules;
NI instcounter;
Intset270030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq294804* converters;
Tsymseq294804* patterns;
Tlinkedlist148013 optionstack;
Tidtable294850 symmapping;
Tlinkedlist148013 libs;
TY346075 semconstexpr;
TY346080 semexpr;
TY346088 semtryexpr;
TY346096 semtryconstexpr;
TY346101 semoperand;
TY346109 semconstboolexpr;
TY346114 semoverloadedcall;
TY346121 semtypenode;
TY346127 seminferredlambda;
TY346133 semgenerateinstance;
Intset270030 includedfiles;
Tstrtable294806 userpragmas;
Tctx345035* evalcontext;
Intset270030 unknownidents;
TY346144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY346150 insttypeboundop;
Tident201010* selfname;
Tstrtable294806 signatures;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
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
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
};
typedef NU8 Tlibkind294818;
struct  Tlib294820  {
  Tlistentry148007 Sup;
Tlibkind294818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj180006* name;
Tnode294802* path;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
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
struct  Tscope294828  {
NI depthlevel;
Tstrtable294806 symbols;
Tscope294828* parent;
};
struct  Tproccon346008  {
Tsym294834* owner;
Tsym294834* resultsym;
Tsym294834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon346008* next;
NIM_BOOL wasforwarded;
Tnode294802* bracketexpr;
};
struct  Trunk270026  {
Trunk270026* next;
NI key;
TY29419 bits;
};
struct  Tidpair294846  {
Tidobj201004* key;
TNimObject* val;
};
typedef NU8 Tevalmode345019;
typedef NU8 Tsandboxflag345021Set;
struct  Tctx345035  {
  Tpasscontext343002 Sup;
TY345241* code;
TY194083* debug;
Tnode294802* globals;
Tnode294802* constants;
Ttypeseq294836* types;
Tnode294802* currentexceptiona;
Tnode294802* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype345220* prc;
Tsym294834* module;
Tnode294802* callsite;
Tevalmode345019 mode;
Tsandboxflag345021Set features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo193336 comesfromheuristic;
TY345260* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair346010  {
Tsym294834* genericsym;
Tinstantiation294824* inst;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
typedef NU8 Tslotkind345025;
struct TY345226 {
NIM_BOOL Field0;
Tslotkind345025 Field1;
};
typedef TY345226 TY345229[256];
struct  PprocHEX3Aobjecttype345220  {
TY345221* blocks;
Tsym294834* sym;
TY345229 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs345029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback345031;
struct TY345261 {
NimStringDesc* Field0;
Vmcallback345031 Field1;
};
struct  Tblock345017  {
Tsym294834* label;
TY345201* fixups;
};
struct  Vmargs345029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode294802* currentexception;
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
struct Trunkseq270028 {
  TGenericSeq Sup;
  Trunk270026* data[SEQ_DECL_SIZE];
};
struct Tidpairseq294848 {
  TGenericSeq Sup;
  Tidpair294846 data[SEQ_DECL_SIZE];
};
struct TY346144 {
  TGenericSeq Sup;
  Tinstantiationpair346010 data[SEQ_DECL_SIZE];
};
struct TY345241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY194083 {
  TGenericSeq Sup;
  Tlineinfo193336 data[SEQ_DECL_SIZE];
};
struct TY345260 {
  TGenericSeq Sup;
  TY345261 data[SEQ_DECL_SIZE];
};
struct TY345221 {
  TGenericSeq Sup;
  Tblock345017 data[SEQ_DECL_SIZE];
};
struct TY345201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registerplugin_481101_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation481003 t0);
N_NIMCALL(Tnode294802*, itertoprocimpl_483002_1560300260)(Tcontext346020* c0, Tnode294802* n0);
N_NIMCALL(Tnode294802*, newnodei_296197_850551059)(Tnodekind294020 kind0, Tlineinfo193336 info0);
static N_INLINE(Tnode294802*, HEX5BHEX5D_295238_850551059)(Tnode294802* n0, NI i0);
N_NIMCALL(void, localerror_198085_155036129)(Tlineinfo193336 info0, NimStringDesc* arg0);
N_NIMCALL(Ttype294840*, skiptypes_298099_850551059)(Ttype294840* t0, Ttypekind294244Set kinds0);
N_NIMCALL(Ttype294840*, lastson_297377_850551059)(Ttype294840* n0);
N_NIMCALL(Tnode294802*, liftitertoproc_442395_2538784801)(Tsym294834* fn0, Tnode294802* body0, Ttype294840* ptrtype0);
N_NIMCALL(Tnode294802*, getbody_337226_1724185294)(Tsym294834* s0);
N_NIMCALL(Tsym294834*, newsym_295683_850551059)(Tsymkind294435 symkind0, Tident201010* name0, Tsym294834* owner0, Tlineinfo193336 info0);
N_NIMCALL(Ttype294840*, copytype_297470_850551059)(Ttype294840* t0, Tsym294834* owner0, NIM_BOOL keepid0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void, add_295136_850551059)(Tnode294802* father0, Tnode294802* son0);
N_NIMCALL(Tnode294802*, newsymnode_296183_850551059)(Tsym294834* sym0);
N_NIMCALL(Tsym294834*, getenvparam_438603_2538784801)(Tsym294834* routine0);
N_NIMCALL(void, rawaddson_298394_850551059)(Ttype294840* father0, Ttype294840* son0);
N_NIMCALL(Tnode294802*, newprocnode_297040_850551059)(Tnodekind294020 kind0, Tlineinfo193336 info0, Tnode294802* body0, Tnode294802* params0, Tnode294802* name0, Tnode294802* pattern0, Tnode294802* genericparams0, Tnode294802* pragmas0, Tnode294802* exceptions0);
N_NIMCALL(void, addinterfacedecl_348560_254525290)(Tcontext346020* c0, Tsym294834* sym0);
STRING_LITERAL(T1560300260_2, "stdlib", 6);
STRING_LITERAL(T1560300260_3, "system", 6);
STRING_LITERAL(T1560300260_4, "iterToProc", 10);
STRING_LITERAL(T1560300260_5, "first argument needs to be an iterator", 38);
STRING_LITERAL(T1560300260_6, "second argument needs to be a type", 34);
STRING_LITERAL(T1560300260_7, "third argument needs to be an identifier", 40);
STRING_LITERAL(T1560300260_8, "type must be a non-generic ref|ptr to object with state field", 61);
extern Gcheap49818 gch_49858_1689653243;
extern Tnode294802* emptynode_295801_850551059;

static N_INLINE(Tnode294802*, HEX5BHEX5D_295238_850551059)(Tnode294802* n0, NI i0) {
	Tnode294802* result0;
	result0 = (Tnode294802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
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

N_NIMCALL(Tnode294802*, itertoprocimpl_483002_1560300260)(Tcontext346020* c0, Tnode294802* n0) {
	Tnode294802* result0;
	Tnode294802* iter0;
	Ttype294840* t0;
	Tnode294802* LOC19;
	Tnode294802* body0;
	Tnode294802* LOC28;
	Tsym294834* prc0;
	Tnode294802* LOC29;
	Tsym294834* LOC30;
	Tnode294802* LOC31;
	Tnode294802* orig0;
	Tnode294802* LOC32;
	Tnode294802* LOC33;
	Tnode294802* LOC34;
{	result0 = (Tnode294802*)0;
	result0 = newnodei_296197_850551059(((Tnodekind294020) 115), (*n0).info);
	iter0 = HEX5BHEX5D_295238_850551059(n0, ((NI) 1));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = !(((*iter0).kind == ((Tnodekind294020) 3)));
		if (LOC3) goto LA4;
		LOC3 = !(((*(*iter0).kindU.S4.sym).kind == ((Tsymkind294435) 14)));
		LA4: ;
		if (!LOC3) goto LA5;
		localerror_198085_155036129((*iter0).info, ((NimStringDesc*) &T1560300260_5));
		goto BeforeRet;
	}
	LA5: ;
	{
		Tnode294802* LOC9;
		Tnode294802* LOC12;
		LOC9 = (Tnode294802*)0;
		LOC9 = HEX5BHEX5D_295238_850551059(n0, ((NI) 2));
		if (!(*LOC9).typ == 0) goto LA10;
		LOC12 = (Tnode294802*)0;
		LOC12 = HEX5BHEX5D_295238_850551059(n0, ((NI) 2));
		localerror_198085_155036129((*LOC12).info, ((NimStringDesc*) &T1560300260_6));
		goto BeforeRet;
	}
	LA10: ;
	{
		Tnode294802* LOC15;
		Tnode294802* LOC18;
		LOC15 = (Tnode294802*)0;
		LOC15 = HEX5BHEX5D_295238_850551059(n0, ((NI) 3));
		if (!!(((*LOC15).kind == ((Tnodekind294020) 2)))) goto LA16;
		LOC18 = (Tnode294802*)0;
		LOC18 = HEX5BHEX5D_295238_850551059(n0, ((NI) 3));
		localerror_198085_155036129((*LOC18).info, ((NimStringDesc*) &T1560300260_7));
		goto BeforeRet;
	}
	LA16: ;
	LOC19 = (Tnode294802*)0;
	LOC19 = HEX5BHEX5D_295238_850551059(n0, ((NI) 2));
	t0 = skiptypes_298099_850551059((*LOC19).typ, 2304);
	{
		NIM_BOOL LOC22;
		Ttype294840* LOC24;
		Tnode294802* LOC27;
		LOC22 = (NIM_BOOL)0;
		LOC22 = !(((6291456 &((NU64)1<<((NU)((*t0).kind)&63U)))!=0));
		if (LOC22) goto LA23;
		LOC24 = (Ttype294840*)0;
		LOC24 = lastson_297377_850551059(t0);
		LOC22 = !(((*LOC24).kind == ((Ttypekind294244) 17)));
		LA23: ;
		if (!LOC22) goto LA25;
		LOC27 = (Tnode294802*)0;
		LOC27 = HEX5BHEX5D_295238_850551059(n0, ((NI) 2));
		localerror_198085_155036129((*LOC27).info, ((NimStringDesc*) &T1560300260_8));
		goto BeforeRet;
	}
	LA25: ;
	LOC28 = (Tnode294802*)0;
	LOC28 = getbody_337226_1724185294((*iter0).kindU.S4.sym);
	body0 = liftitertoproc_442395_2538784801((*iter0).kindU.S4.sym, LOC28, t0);
	LOC29 = (Tnode294802*)0;
	LOC29 = HEX5BHEX5D_295238_850551059(n0, ((NI) 3));
	prc0 = newsym_295683_850551059(((Tsymkind294435) 12), (*LOC29).kindU.S5.ident, (*(*iter0).kindU.S4.sym).owner, (*(*iter0).kindU.S4.sym).info);
	asgnRefNoCycle((void**) (&(*prc0).typ), copytype_297470_850551059((*(*iter0).kindU.S4.sym).typ, prc0, NIM_FALSE));
	(*(*prc0).typ).flags &= ~(((NU32)1) << ((((Ttypeflag294431) 11)) % (sizeof(NU32)*8)));
	LOC30 = (Tsym294834*)0;
	LOC30 = getenvparam_438603_2538784801((*iter0).kindU.S4.sym);
	LOC31 = (Tnode294802*)0;
	LOC31 = newsymnode_296183_850551059(LOC30);
	add_295136_850551059((*(*prc0).typ).n, LOC31);
	rawaddson_298394_850551059((*prc0).typ, t0);
	orig0 = (*(*iter0).kindU.S4.sym).ast;
	LOC32 = (Tnode294802*)0;
	LOC32 = HEX5BHEX5D_295238_850551059(orig0, ((NI) 3));
	LOC33 = (Tnode294802*)0;
	LOC33 = newsymnode_296183_850551059(prc0);
	LOC34 = (Tnode294802*)0;
	LOC34 = HEX5BHEX5D_295238_850551059(orig0, ((NI) 4));
	asgnRefNoCycle((void**) (&(*prc0).ast), newprocnode_297040_850551059(((Tnodekind294020) 79), (*n0).info, body0, LOC32, LOC33, emptynode_295801_850551059, emptynode_295801_850551059, LOC34, emptynode_295801_850551059));
	add_295136_850551059((*prc0).ast, (*(*(*iter0).kindU.S4.sym).ast).kindU.S6.sons->data[((NI) 7)]);
	addinterfacedecl_348560_254525290(c0, prc0);
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_itersgenInit000)(void) {
	registerplugin_481101_1104897005(((NimStringDesc*) &T1560300260_2), ((NimStringDesc*) &T1560300260_3), ((NimStringDesc*) &T1560300260_4), itertoprocimpl_483002_1560300260);
}

NIM_EXTERNC N_NOINLINE(void, compiler_itersgenDatInit000)(void) {
}

