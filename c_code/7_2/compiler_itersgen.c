/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode293802 Tnode293802;
typedef struct Tcontext345020 Tcontext345020;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Ttype293840 Ttype293840;
typedef struct Tsym293834 Tsym293834;
typedef struct Tident200010 Tident200010;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293820 Tlib293820;
typedef struct TY293960 TY293960;
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
typedef struct Tpasscontext342002 Tpasscontext342002;
typedef struct Tscope293828 Tscope293828;
typedef struct Tproccon345008 Tproccon345008;
typedef struct Intset269030 Intset269030;
typedef struct Trunk269026 Trunk269026;
typedef struct Trunkseq269028 Trunkseq269028;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Tidtable293850 Tidtable293850;
typedef struct Tidpairseq293848 Tidpairseq293848;
typedef struct Tctx344035 Tctx344035;
typedef struct TY345144 TY345144;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct TY293961 TY293961;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef struct Tidpair293846 Tidpair293846;
typedef struct TY344241 TY344241;
typedef struct TY193083 TY193083;
typedef struct PprocHEX3Aobjecttype344220 PprocHEX3Aobjecttype344220;
typedef struct TY344260 TY344260;
typedef struct Tinstantiationpair345010 Tinstantiationpair345010;
typedef struct TY344221 TY344221;
typedef struct TY344226 TY344226;
typedef struct TY344261 TY344261;
typedef struct Vmargs344029 Vmargs344029;
typedef struct Tblock344017 Tblock344017;
typedef struct TY344201 TY344201;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode293802*, Transformation480003) (Tcontext345020* c0, Tnode293802* n0);
typedef NU8 Tnodekind293020;
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
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
typedef NU64 Ttypekind293244Set;
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
typedef NU8 Ttypeflag293431;
struct  Tpasscontext342002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset269030  {
NI counter;
NI max;
Trunk269026* head;
Trunkseq269028* data;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
struct  Tidtable293850  {
NI counter;
Tidpairseq293848* data;
};
typedef N_NIMCALL_PTR(Tnode293802*, TY345075) (Tcontext345020* c0, Tnode293802* n0);
typedef NU16 Texprflag345012Set;
typedef N_NIMCALL_PTR(Tnode293802*, TY345080) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345088) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345096) (Tcontext345020* c0, Tnode293802* n0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345101) (Tcontext345020* c0, Tnode293802* n0, Texprflag345012Set flags0);
typedef N_NIMCALL_PTR(Tnode293802*, TY345109) (Tcontext345020* c0, Tnode293802* n0);
typedef NU32 Tsymkind293435Set;
typedef N_NIMCALL_PTR(Tnode293802*, TY345114) (Tcontext345020* c0, Tnode293802* n0, Tnode293802* norig0, Tsymkind293435Set filter0);
typedef N_NIMCALL_PTR(Ttype293840*, TY345121) (Tcontext345020* c0, Tnode293802* n0, Ttype293840* prev0);
typedef struct {
N_NIMCALL_PTR(Tnode293802*, ClPrc) (Tcontext345020* c0, Tidtable293850 pt0, Tnode293802* n0, void* ClEnv);
void* ClEnv;
} TY345127;
typedef struct {
N_NIMCALL_PTR(Tsym293834*, ClPrc) (Tcontext345020* c0, Tsym293834* fn0, Tidtable293850 pt0, Tlineinfo192336 info0, void* ClEnv);
void* ClEnv;
} TY345133;
typedef NU8 Ttypeattachedop345016;
typedef N_NIMCALL_PTR(Tsym293834*, TY345150) (Tcontext345020* c0, Tsym293834* dc0, Ttype293840* t0, Tlineinfo192336 info0, Ttypeattachedop345016 op0, NI col0);
struct  Tcontext345020  {
  Tpasscontext342002 Sup;
Tsym293834* module;
Tscope293828* currentscope;
Tscope293828* importtable;
Tscope293828* toplevelscope;
Tproccon345008* p;
Tsymseq293804* friendmodules;
NI instcounter;
Intset269030 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq293804* converters;
Tsymseq293804* patterns;
Tlinkedlist147013 optionstack;
Tidtable293850 symmapping;
Tlinkedlist147013 libs;
TY345075 semconstexpr;
TY345080 semexpr;
TY345088 semtryexpr;
TY345096 semtryconstexpr;
TY345101 semoperand;
TY345109 semconstboolexpr;
TY345114 semoverloadedcall;
TY345121 semtypenode;
TY345127 seminferredlambda;
TY345133 semgenerateinstance;
Intset269030 includedfiles;
Tstrtable293806 userpragmas;
Tctx344035* evalcontext;
Intset269030 unknownidents;
TY345144* generics;
NI topstmts;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY345150 insttypeboundop;
Tident200010* selfname;
Tstrtable293806 signatures;
};
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
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
struct TY293961 {
NI Field0;
Tsym293834* Field1;
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
struct  Tscope293828  {
NI depthlevel;
Tstrtable293806 symbols;
Tscope293828* parent;
};
struct  Tproccon345008  {
Tsym293834* owner;
Tsym293834* resultsym;
Tsym293834* selfsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon345008* next;
NIM_BOOL wasforwarded;
Tnode293802* bracketexpr;
};
struct  Trunk269026  {
Trunk269026* next;
NI key;
TY29419 bits;
};
struct  Tidpair293846  {
Tidobj200004* key;
TNimObject* val;
};
typedef NU8 Tevalmode344019;
typedef NU8 Tsandboxflag344021Set;
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
struct  Tinstantiationpair345010  {
Tsym293834* genericsym;
Tinstantiation293824* inst;
};
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
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
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs344029* args0, void* ClEnv);
void* ClEnv;
} Vmcallback344031;
struct TY344261 {
NimStringDesc* Field0;
Vmcallback344031 Field1;
};
struct  Tblock344017  {
Tsym293834* label;
TY344201* fixups;
};
struct  Vmargs344029  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode293802* currentexception;
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
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
struct Trunkseq269028 {
  TGenericSeq Sup;
  Trunk269026* data[SEQ_DECL_SIZE];
};
struct Tidpairseq293848 {
  TGenericSeq Sup;
  Tidpair293846 data[SEQ_DECL_SIZE];
};
struct TY345144 {
  TGenericSeq Sup;
  Tinstantiationpair345010 data[SEQ_DECL_SIZE];
};
struct TY344241 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY193083 {
  TGenericSeq Sup;
  Tlineinfo192336 data[SEQ_DECL_SIZE];
};
struct TY344260 {
  TGenericSeq Sup;
  TY344261 data[SEQ_DECL_SIZE];
};
struct TY344221 {
  TGenericSeq Sup;
  Tblock344017 data[SEQ_DECL_SIZE];
};
struct TY344201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registerplugin_480101_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation480003 t0);
N_NIMCALL(Tnode293802*, itertoprocimpl_482002_1560300260)(Tcontext345020* c0, Tnode293802* n0);
N_NIMCALL(Tnode293802*, newnodei_295197_850551059)(Tnodekind293020 kind0, Tlineinfo192336 info0);
static N_INLINE(Tnode293802*, HEX5BHEX5D_294238_850551059)(Tnode293802* n0, NI i0);
N_NIMCALL(void, localerror_197085_155036129)(Tlineinfo192336 info0, NimStringDesc* arg0);
N_NIMCALL(Ttype293840*, skiptypes_297099_850551059)(Ttype293840* t0, Ttypekind293244Set kinds0);
N_NIMCALL(Ttype293840*, lastson_296377_850551059)(Ttype293840* n0);
N_NIMCALL(Tnode293802*, liftitertoproc_441395_2538784801)(Tsym293834* fn0, Tnode293802* body0, Ttype293840* ptrtype0);
N_NIMCALL(Tnode293802*, getbody_336226_1724185294)(Tsym293834* s0);
N_NIMCALL(Tsym293834*, newsym_294683_850551059)(Tsymkind293435 symkind0, Tident200010* name0, Tsym293834* owner0, Tlineinfo192336 info0);
N_NIMCALL(Ttype293840*, copytype_296470_850551059)(Ttype293840* t0, Tsym293834* owner0, NIM_BOOL keepid0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void, add_294136_850551059)(Tnode293802* father0, Tnode293802* son0);
N_NIMCALL(Tnode293802*, newsymnode_295183_850551059)(Tsym293834* sym0);
N_NIMCALL(Tsym293834*, getenvparam_437603_2538784801)(Tsym293834* routine0);
N_NIMCALL(void, rawaddson_297394_850551059)(Ttype293840* father0, Ttype293840* son0);
N_NIMCALL(Tnode293802*, newprocnode_296040_850551059)(Tnodekind293020 kind0, Tlineinfo192336 info0, Tnode293802* body0, Tnode293802* params0, Tnode293802* name0, Tnode293802* pattern0, Tnode293802* genericparams0, Tnode293802* pragmas0, Tnode293802* exceptions0);
N_NIMCALL(void, addinterfacedecl_347560_254525290)(Tcontext345020* c0, Tsym293834* sym0);
STRING_LITERAL(T1560300260_2, "stdlib", 6);
STRING_LITERAL(T1560300260_3, "system", 6);
STRING_LITERAL(T1560300260_4, "iterToProc", 10);
STRING_LITERAL(T1560300260_5, "first argument needs to be an iterator", 38);
STRING_LITERAL(T1560300260_6, "second argument needs to be a type", 34);
STRING_LITERAL(T1560300260_7, "third argument needs to be an identifier", 40);
STRING_LITERAL(T1560300260_8, "type must be a non-generic ref|ptr to object with state field", 61);
extern Gcheap49818 gch_49858_1689653243;
extern Tnode293802* emptynode_294801_850551059;

static N_INLINE(Tnode293802*, HEX5BHEX5D_294238_850551059)(Tnode293802* n0, NI i0) {
	Tnode293802* result0;
	result0 = (Tnode293802*)0;
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

N_NIMCALL(Tnode293802*, itertoprocimpl_482002_1560300260)(Tcontext345020* c0, Tnode293802* n0) {
	Tnode293802* result0;
	Tnode293802* iter0;
	Ttype293840* t0;
	Tnode293802* LOC19;
	Tnode293802* body0;
	Tnode293802* LOC28;
	Tsym293834* prc0;
	Tnode293802* LOC29;
	Tsym293834* LOC30;
	Tnode293802* LOC31;
	Tnode293802* orig0;
	Tnode293802* LOC32;
	Tnode293802* LOC33;
	Tnode293802* LOC34;
{	result0 = (Tnode293802*)0;
	result0 = newnodei_295197_850551059(((Tnodekind293020) 115), (*n0).info);
	iter0 = HEX5BHEX5D_294238_850551059(n0, ((NI) 1));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = !(((*iter0).kind == ((Tnodekind293020) 3)));
		if (LOC3) goto LA4;
		LOC3 = !(((*(*iter0).kindU.S4.sym).kind == ((Tsymkind293435) 14)));
		LA4: ;
		if (!LOC3) goto LA5;
		localerror_197085_155036129((*iter0).info, ((NimStringDesc*) &T1560300260_5));
		goto BeforeRet;
	}
	LA5: ;
	{
		Tnode293802* LOC9;
		Tnode293802* LOC12;
		LOC9 = (Tnode293802*)0;
		LOC9 = HEX5BHEX5D_294238_850551059(n0, ((NI) 2));
		if (!(*LOC9).typ == 0) goto LA10;
		LOC12 = (Tnode293802*)0;
		LOC12 = HEX5BHEX5D_294238_850551059(n0, ((NI) 2));
		localerror_197085_155036129((*LOC12).info, ((NimStringDesc*) &T1560300260_6));
		goto BeforeRet;
	}
	LA10: ;
	{
		Tnode293802* LOC15;
		Tnode293802* LOC18;
		LOC15 = (Tnode293802*)0;
		LOC15 = HEX5BHEX5D_294238_850551059(n0, ((NI) 3));
		if (!!(((*LOC15).kind == ((Tnodekind293020) 2)))) goto LA16;
		LOC18 = (Tnode293802*)0;
		LOC18 = HEX5BHEX5D_294238_850551059(n0, ((NI) 3));
		localerror_197085_155036129((*LOC18).info, ((NimStringDesc*) &T1560300260_7));
		goto BeforeRet;
	}
	LA16: ;
	LOC19 = (Tnode293802*)0;
	LOC19 = HEX5BHEX5D_294238_850551059(n0, ((NI) 2));
	t0 = skiptypes_297099_850551059((*LOC19).typ, 2304);
	{
		NIM_BOOL LOC22;
		Ttype293840* LOC24;
		Tnode293802* LOC27;
		LOC22 = (NIM_BOOL)0;
		LOC22 = !(((6291456 &((NU64)1<<((NU)((*t0).kind)&63U)))!=0));
		if (LOC22) goto LA23;
		LOC24 = (Ttype293840*)0;
		LOC24 = lastson_296377_850551059(t0);
		LOC22 = !(((*LOC24).kind == ((Ttypekind293244) 17)));
		LA23: ;
		if (!LOC22) goto LA25;
		LOC27 = (Tnode293802*)0;
		LOC27 = HEX5BHEX5D_294238_850551059(n0, ((NI) 2));
		localerror_197085_155036129((*LOC27).info, ((NimStringDesc*) &T1560300260_8));
		goto BeforeRet;
	}
	LA25: ;
	LOC28 = (Tnode293802*)0;
	LOC28 = getbody_336226_1724185294((*iter0).kindU.S4.sym);
	body0 = liftitertoproc_441395_2538784801((*iter0).kindU.S4.sym, LOC28, t0);
	LOC29 = (Tnode293802*)0;
	LOC29 = HEX5BHEX5D_294238_850551059(n0, ((NI) 3));
	prc0 = newsym_294683_850551059(((Tsymkind293435) 12), (*LOC29).kindU.S5.ident, (*(*iter0).kindU.S4.sym).owner, (*(*iter0).kindU.S4.sym).info);
	asgnRefNoCycle((void**) (&(*prc0).typ), copytype_296470_850551059((*(*iter0).kindU.S4.sym).typ, prc0, NIM_FALSE));
	(*(*prc0).typ).flags &= ~(((NU32)1) << ((((Ttypeflag293431) 11)) % (sizeof(NU32)*8)));
	LOC30 = (Tsym293834*)0;
	LOC30 = getenvparam_437603_2538784801((*iter0).kindU.S4.sym);
	LOC31 = (Tnode293802*)0;
	LOC31 = newsymnode_295183_850551059(LOC30);
	add_294136_850551059((*(*prc0).typ).n, LOC31);
	rawaddson_297394_850551059((*prc0).typ, t0);
	orig0 = (*(*iter0).kindU.S4.sym).ast;
	LOC32 = (Tnode293802*)0;
	LOC32 = HEX5BHEX5D_294238_850551059(orig0, ((NI) 3));
	LOC33 = (Tnode293802*)0;
	LOC33 = newsymnode_295183_850551059(prc0);
	LOC34 = (Tnode293802*)0;
	LOC34 = HEX5BHEX5D_294238_850551059(orig0, ((NI) 4));
	asgnRefNoCycle((void**) (&(*prc0).ast), newprocnode_296040_850551059(((Tnodekind293020) 79), (*n0).info, body0, LOC32, LOC33, emptynode_294801_850551059, emptynode_294801_850551059, LOC34, emptynode_294801_850551059));
	add_294136_850551059((*prc0).ast, (*(*(*iter0).kindU.S4.sym).ast).kindU.S6.sons->data[((NI) 7)]);
	addinterfacedecl_347560_254525290(c0, prc0);
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_itersgenInit000)(void) {
	registerplugin_480101_1104897005(((NimStringDesc*) &T1560300260_2), ((NimStringDesc*) &T1560300260_3), ((NimStringDesc*) &T1560300260_4), itertoprocimpl_482002_1560300260);
}

NIM_EXTERNC N_NOINLINE(void, compiler_itersgenDatInit000)(void) {
}

