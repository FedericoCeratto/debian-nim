/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode290802 Tnode290802;
typedef struct Tcontext342020 Tcontext342020;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct Ttype290840 Ttype290840;
typedef struct Tsym290834 Tsym290834;
typedef struct Tident197010 Tident197010;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct Tidobj197004 Tidobj197004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct TY290929 TY290929;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Tloc290816 Tloc290816;
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct Tlib290820 Tlib290820;
typedef struct TY290960 TY290960;
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
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct TY290961 TY290961;
typedef struct Basechunk29037 Basechunk29037;
typedef struct Freecell29029 Freecell29029;
typedef struct Tidpair290846 Tidpair290846;
typedef struct TY341241 TY341241;
typedef struct TY190086 TY190086;
typedef struct PprocHEX3Aobjecttype341220 PprocHEX3Aobjecttype341220;
typedef struct TY341260 TY341260;
typedef struct Tinstantiationpair342010 Tinstantiationpair342010;
typedef struct TY341221 TY341221;
typedef struct TY341226 TY341226;
typedef struct TY341261 TY341261;
typedef struct Vmargs341029 Vmargs341029;
typedef struct Tblock341017 Tblock341017;
typedef struct TY341201 TY341201;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode290802*, Transformation477003) (Tcontext342020* c0, Tnode290802* n0);
typedef NU8 Tnodekind290020;
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag290427Set;
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
typedef NU64 Ttypekind290244Set;
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
typedef NU8 Ttypeflag290431;
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
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
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
struct TY290961 {
NI Field0;
Tsym290834* Field1;
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
struct  Tinstantiation290824  {
Tsym290834* sym;
Ttypeseq290836* concretetypes;
NI compilesid;
};
struct  Freecell29029  {
Freecell29029* next;
NI zerofield;
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
struct Tnodeseq290796 {
  TGenericSeq Sup;
  Tnode290802* data[SEQ_DECL_SIZE];
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
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, registerplugin_477101_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation477003 t0);
N_NIMCALL(Tnode290802*, itertoprocimpl_479002_1560300260)(Tcontext342020* c0, Tnode290802* n0);
N_NIMCALL(Tnode290802*, newnodei_292197_850551059)(Tnodekind290020 kind0, Tlineinfo189336 info0);
static N_INLINE(Tnode290802*, HEX5BHEX5D_291238_850551059)(Tnode290802* n0, NI i0);
N_NIMCALL(void, localerror_194085_155036129)(Tlineinfo189336 info0, NimStringDesc* arg0);
N_NIMCALL(Ttype290840*, skiptypes_294099_850551059)(Ttype290840* t0, Ttypekind290244Set kinds0);
N_NIMCALL(Ttype290840*, lastson_293377_850551059)(Ttype290840* n0);
N_NIMCALL(Tnode290802*, liftitertoproc_438395_2538784801)(Tsym290834* fn0, Tnode290802* body0, Ttype290840* ptrtype0);
N_NIMCALL(Tnode290802*, getbody_333227_1724185294)(Tsym290834* s0);
N_NIMCALL(Tsym290834*, newsym_291684_850551059)(Tsymkind290435 symkind0, Tident197010* name0, Tsym290834* owner0, Tlineinfo189336 info0);
N_NIMCALL(Ttype290840*, copytype_293470_850551059)(Ttype290840* t0, Tsym290834* owner0, NIM_BOOL keepid0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0);
N_NOINLINE(void, addzct_51017_1689653243)(Cellseq46920* s0, Cell46904* c0);
N_NIMCALL(void, add_291136_850551059)(Tnode290802* father0, Tnode290802* son0);
N_NIMCALL(Tnode290802*, newsymnode_292183_850551059)(Tsym290834* sym0);
N_NIMCALL(Tsym290834*, getenvparam_434603_2538784801)(Tsym290834* routine0);
N_NIMCALL(void, rawaddson_294394_850551059)(Ttype290840* father0, Ttype290840* son0);
N_NIMCALL(Tnode290802*, newprocnode_293040_850551059)(Tnodekind290020 kind0, Tlineinfo189336 info0, Tnode290802* body0, Tnode290802* params0, Tnode290802* name0, Tnode290802* pattern0, Tnode290802* genericparams0, Tnode290802* pragmas0, Tnode290802* exceptions0);
N_NIMCALL(void, addinterfacedecl_344560_254525290)(Tcontext342020* c0, Tsym290834* sym0);
STRING_LITERAL(T1560300260_2, "stdlib", 6);
STRING_LITERAL(T1560300260_3, "system", 6);
STRING_LITERAL(T1560300260_4, "iterToProc", 10);
STRING_LITERAL(T1560300260_5, "first argument needs to be an iterator", 38);
STRING_LITERAL(T1560300260_6, "second argument needs to be a type", 34);
STRING_LITERAL(T1560300260_7, "third argument needs to be an identifier", 40);
STRING_LITERAL(T1560300260_8, "type must be a non-generic ref|ptr to object with state field", 61);
extern Gcheap49418 gch_49458_1689653243;
extern Tnode290802* emptynode_291801_850551059;

static N_INLINE(Tnode290802*, HEX5BHEX5D_291238_850551059)(Tnode290802* n0, NI i0) {
	Tnode290802* result0;
	result0 = (Tnode290802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
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

N_NIMCALL(Tnode290802*, itertoprocimpl_479002_1560300260)(Tcontext342020* c0, Tnode290802* n0) {
	Tnode290802* result0;
	Tnode290802* iter0;
	Ttype290840* t0;
	Tnode290802* LOC19;
	Tnode290802* body0;
	Tnode290802* LOC28;
	Tsym290834* prc0;
	Tnode290802* LOC29;
	Tsym290834* LOC30;
	Tnode290802* LOC31;
	Tnode290802* orig0;
	Tnode290802* LOC32;
	Tnode290802* LOC33;
	Tnode290802* LOC34;
{	result0 = (Tnode290802*)0;
	result0 = newnodei_292197_850551059(((Tnodekind290020) 115), (*n0).info);
	iter0 = HEX5BHEX5D_291238_850551059(n0, ((NI) 1));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = !(((*iter0).kind == ((Tnodekind290020) 3)));
		if (LOC3) goto LA4;
		LOC3 = !(((*(*iter0).kindU.S4.sym).kind == ((Tsymkind290435) 14)));
		LA4: ;
		if (!LOC3) goto LA5;
		localerror_194085_155036129((*iter0).info, ((NimStringDesc*) &T1560300260_5));
		goto BeforeRet;
	}
	LA5: ;
	{
		Tnode290802* LOC9;
		Tnode290802* LOC12;
		LOC9 = (Tnode290802*)0;
		LOC9 = HEX5BHEX5D_291238_850551059(n0, ((NI) 2));
		if (!(*LOC9).typ == 0) goto LA10;
		LOC12 = (Tnode290802*)0;
		LOC12 = HEX5BHEX5D_291238_850551059(n0, ((NI) 2));
		localerror_194085_155036129((*LOC12).info, ((NimStringDesc*) &T1560300260_6));
		goto BeforeRet;
	}
	LA10: ;
	{
		Tnode290802* LOC15;
		Tnode290802* LOC18;
		LOC15 = (Tnode290802*)0;
		LOC15 = HEX5BHEX5D_291238_850551059(n0, ((NI) 3));
		if (!!(((*LOC15).kind == ((Tnodekind290020) 2)))) goto LA16;
		LOC18 = (Tnode290802*)0;
		LOC18 = HEX5BHEX5D_291238_850551059(n0, ((NI) 3));
		localerror_194085_155036129((*LOC18).info, ((NimStringDesc*) &T1560300260_7));
		goto BeforeRet;
	}
	LA16: ;
	LOC19 = (Tnode290802*)0;
	LOC19 = HEX5BHEX5D_291238_850551059(n0, ((NI) 2));
	t0 = skiptypes_294099_850551059((*LOC19).typ, 2304);
	{
		NIM_BOOL LOC22;
		Ttype290840* LOC24;
		Tnode290802* LOC27;
		LOC22 = (NIM_BOOL)0;
		LOC22 = !(((*t0).kind == ((Ttypekind290244) 22) || (*t0).kind == ((Ttypekind290244) 21)));
		if (LOC22) goto LA23;
		LOC24 = (Ttype290840*)0;
		LOC24 = lastson_293377_850551059(t0);
		LOC22 = !(((*LOC24).kind == ((Ttypekind290244) 17)));
		LA23: ;
		if (!LOC22) goto LA25;
		LOC27 = (Tnode290802*)0;
		LOC27 = HEX5BHEX5D_291238_850551059(n0, ((NI) 2));
		localerror_194085_155036129((*LOC27).info, ((NimStringDesc*) &T1560300260_8));
		goto BeforeRet;
	}
	LA25: ;
	LOC28 = (Tnode290802*)0;
	LOC28 = getbody_333227_1724185294((*iter0).kindU.S4.sym);
	body0 = liftitertoproc_438395_2538784801((*iter0).kindU.S4.sym, LOC28, t0);
	LOC29 = (Tnode290802*)0;
	LOC29 = HEX5BHEX5D_291238_850551059(n0, ((NI) 3));
	prc0 = newsym_291684_850551059(((Tsymkind290435) 12), (*LOC29).kindU.S5.ident, (*(*iter0).kindU.S4.sym).owner, (*(*iter0).kindU.S4.sym).info);
	asgnRefNoCycle((void**) (&(*prc0).typ), copytype_293470_850551059((*(*iter0).kindU.S4.sym).typ, prc0, NIM_FALSE));
	(*(*prc0).typ).flags &= ~(((NU32)1) << ((((Ttypeflag290431) 11)) % (sizeof(NU32)*8)));
	LOC30 = (Tsym290834*)0;
	LOC30 = getenvparam_434603_2538784801((*iter0).kindU.S4.sym);
	LOC31 = (Tnode290802*)0;
	LOC31 = newsymnode_292183_850551059(LOC30);
	add_291136_850551059((*(*prc0).typ).n, LOC31);
	rawaddson_294394_850551059((*prc0).typ, t0);
	orig0 = (*(*iter0).kindU.S4.sym).ast;
	LOC32 = (Tnode290802*)0;
	LOC32 = HEX5BHEX5D_291238_850551059(orig0, ((NI) 3));
	LOC33 = (Tnode290802*)0;
	LOC33 = newsymnode_292183_850551059(prc0);
	LOC34 = (Tnode290802*)0;
	LOC34 = HEX5BHEX5D_291238_850551059(orig0, ((NI) 4));
	asgnRefNoCycle((void**) (&(*prc0).ast), newprocnode_293040_850551059(((Tnodekind290020) 79), (*n0).info, body0, LOC32, LOC33, emptynode_291801_850551059, emptynode_291801_850551059, LOC34, emptynode_291801_850551059));
	add_291136_850551059((*prc0).ast, (*(*(*iter0).kindU.S4.sym).ast).kindU.S6.sons->data[((NI) 7)]);
	addinterfacedecl_344560_254525290(c0, prc0);
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_itersgenInit000)(void) {
	registerplugin_477101_1104897005(((NimStringDesc*) &T1560300260_2), ((NimStringDesc*) &T1560300260_3), ((NimStringDesc*) &T1560300260_4), itertoprocimpl_479002_1560300260);
}

NIM_EXTERNC N_NOINLINE(void, compiler_itersgenDatInit000)(void) {
}

