/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode264794 Tnode264794;
typedef struct Tcontext315020 Tcontext315020;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Ttype264832 Ttype264832;
typedef struct Tsym264826 Tsym264826;
typedef struct Tident194012 Tident194012;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
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
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef struct Tidpair264840 Tidpair264840;
typedef struct TY314242 TY314242;
typedef struct TY187090 TY187090;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode264794*, Transformation448004) (Tcontext315020* c0, Tnode264794* n0);
typedef NU8 Tnodekind264020;
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
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
typedef NU64 Ttypekind264244Set;
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
typedef NU8 Ttypeflag264431;
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
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
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
TY30019 bits;
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
struct  Tinstantiationpair315010  {
Tsym264826* genericsym;
Tinstantiation264816* inst;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
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
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
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
struct TY187090 {
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
N_NIMCALL(void, registerplugin_448102_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation448004 t0);
N_NIMCALL(Tnode264794*, itertoprocimpl_450003_1560300260)(Tcontext315020* c0, Tnode264794* n0);
N_NIMCALL(Tnode264794*, newnodei_266248_850551059)(Tnodekind264020 kind0, Tlineinfo186336 info0);
static N_INLINE(Tnode264794*, HEX5BHEX5D_265238_850551059)(Tnode264794* n0, NI i0);
N_NIMCALL(void, localerror_191085_155036129)(Tlineinfo186336 info0, NimStringDesc* arg0);
N_NIMCALL(Ttype264832*, skiptypes_268113_850551059)(Ttype264832* t0, Ttypekind264244Set kinds0);
N_NIMCALL(Ttype264832*, lastson_267377_850551059)(Ttype264832* n0);
N_NIMCALL(Tnode264794*, liftitertoproc_409195_2538784801)(Tsym264826* fn0, Tnode264794* body0, Ttype264832* ptrtype0);
N_NIMCALL(Tnode264794*, getbody_305827_1724185294)(Tsym264826* s0);
N_NIMCALL(Tsym264826*, newsym_265683_850551059)(Tsymkind264435 symkind0, Tident194012* name0, Tsym264826* owner0, Tlineinfo186336 info0);
N_NIMCALL(Ttype264832*, copytype_267470_850551059)(Ttype264832* t0, Tsym264826* owner0, NIM_BOOL keepid0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47904*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47904* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47920* s0, Cell47904* c0);
N_NIMCALL(void, add_265135_850551059)(Tnode264794* father0, Tnode264794* son0);
N_NIMCALL(Tnode264794*, newsymnode_266234_850551059)(Tsym264826* sym0);
N_NIMCALL(Tsym264826*, getenvparam_405603_2538784801)(Tsym264826* routine0);
N_NIMCALL(void, rawaddson_268408_850551059)(Ttype264832* father0, Ttype264832* son0);
N_NIMCALL(Tnode264794*, newprocnode_267040_850551059)(Tnodekind264020 kind0, Tlineinfo186336 info0, Tnode264794* body0, Tnode264794* params0, Tnode264794* name0, Tnode264794* pattern0, Tnode264794* genericparams0, Tnode264794* pragmas0, Tnode264794* exceptions0);
N_NIMCALL(void, addinterfacedecl_317538_254525290)(Tcontext315020* c0, Tsym264826* sym0);
STRING_LITERAL(TMP1236, "stdlib", 6);
STRING_LITERAL(TMP1237, "system", 6);
STRING_LITERAL(TMP1238, "iterToProc", 10);
STRING_LITERAL(TMP1239, "first argument needs to be an iterator", 38);
STRING_LITERAL(TMP1240, "second argument needs to be a type", 34);
STRING_LITERAL(TMP1241, "third argument needs to be an identifier", 40);
STRING_LITERAL(TMP1242, "type must be a non-generic ref|ptr to object with state field", 61);
extern Gcheap50418 gch_50458_1689653243;
extern Tnode264794* emptynode_265801_850551059;

static N_INLINE(Tnode264794*, HEX5BHEX5D_265238_850551059)(Tnode264794* n0, NI i0) {
	Tnode264794* result0;
	result0 = (Tnode264794*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
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

N_NIMCALL(Tnode264794*, itertoprocimpl_450003_1560300260)(Tcontext315020* c0, Tnode264794* n0) {
	Tnode264794* result0;
	Tnode264794* iter0;
	Ttype264832* t0;
	Tnode264794* LOC19;
	Tnode264794* body0;
	Tnode264794* LOC28;
	Tsym264826* prc0;
	Tnode264794* LOC29;
	Tsym264826* LOC30;
	Tnode264794* LOC31;
	Tnode264794* orig0;
	Tnode264794* LOC32;
	Tnode264794* LOC33;
	Tnode264794* LOC34;
{	result0 = (Tnode264794*)0;
	result0 = newnodei_266248_850551059(((Tnodekind264020) 115), (*n0).info);
	iter0 = HEX5BHEX5D_265238_850551059(n0, ((NI) 1));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = !(((*iter0).kind == ((Tnodekind264020) 3)));
		if (LOC3) goto LA4;
		LOC3 = !(((*(*iter0).kindU.S4.sym).kind == ((Tsymkind264435) 14)));
		LA4: ;
		if (!LOC3) goto LA5;
		localerror_191085_155036129((*iter0).info, ((NimStringDesc*) &TMP1239));
		goto BeforeRet;
	}
	LA5: ;
	{
		Tnode264794* LOC9;
		Tnode264794* LOC12;
		LOC9 = (Tnode264794*)0;
		LOC9 = HEX5BHEX5D_265238_850551059(n0, ((NI) 2));
		if (!(*LOC9).typ == 0) goto LA10;
		LOC12 = (Tnode264794*)0;
		LOC12 = HEX5BHEX5D_265238_850551059(n0, ((NI) 2));
		localerror_191085_155036129((*LOC12).info, ((NimStringDesc*) &TMP1240));
		goto BeforeRet;
	}
	LA10: ;
	{
		Tnode264794* LOC15;
		Tnode264794* LOC18;
		LOC15 = (Tnode264794*)0;
		LOC15 = HEX5BHEX5D_265238_850551059(n0, ((NI) 3));
		if (!!(((*LOC15).kind == ((Tnodekind264020) 2)))) goto LA16;
		LOC18 = (Tnode264794*)0;
		LOC18 = HEX5BHEX5D_265238_850551059(n0, ((NI) 3));
		localerror_191085_155036129((*LOC18).info, ((NimStringDesc*) &TMP1241));
		goto BeforeRet;
	}
	LA16: ;
	LOC19 = (Tnode264794*)0;
	LOC19 = HEX5BHEX5D_265238_850551059(n0, ((NI) 2));
	t0 = skiptypes_268113_850551059((*LOC19).typ, 2304);
	{
		NIM_BOOL LOC22;
		Ttype264832* LOC24;
		Tnode264794* LOC27;
		LOC22 = (NIM_BOOL)0;
		LOC22 = !(((6291456 &((NU64)1<<((NU)((*t0).kind)&63U)))!=0));
		if (LOC22) goto LA23;
		LOC24 = (Ttype264832*)0;
		LOC24 = lastson_267377_850551059(t0);
		LOC22 = !(((*LOC24).kind == ((Ttypekind264244) 17)));
		LA23: ;
		if (!LOC22) goto LA25;
		LOC27 = (Tnode264794*)0;
		LOC27 = HEX5BHEX5D_265238_850551059(n0, ((NI) 2));
		localerror_191085_155036129((*LOC27).info, ((NimStringDesc*) &TMP1242));
		goto BeforeRet;
	}
	LA25: ;
	LOC28 = (Tnode264794*)0;
	LOC28 = getbody_305827_1724185294((*iter0).kindU.S4.sym);
	body0 = liftitertoproc_409195_2538784801((*iter0).kindU.S4.sym, LOC28, t0);
	LOC29 = (Tnode264794*)0;
	LOC29 = HEX5BHEX5D_265238_850551059(n0, ((NI) 3));
	prc0 = newsym_265683_850551059(((Tsymkind264435) 12), (*LOC29).kindU.S5.ident, (*(*iter0).kindU.S4.sym).owner, (*(*iter0).kindU.S4.sym).info);
	asgnRefNoCycle((void**) (&(*prc0).typ), copytype_267470_850551059((*(*iter0).kindU.S4.sym).typ, prc0, NIM_FALSE));
	(*(*prc0).typ).flags &= ~(((NU32)1) << ((((Ttypeflag264431) 11)) % (sizeof(NU32)*8)));
	LOC30 = (Tsym264826*)0;
	LOC30 = getenvparam_405603_2538784801((*iter0).kindU.S4.sym);
	LOC31 = (Tnode264794*)0;
	LOC31 = newsymnode_266234_850551059(LOC30);
	add_265135_850551059((*(*prc0).typ).n, LOC31);
	rawaddson_268408_850551059((*prc0).typ, t0);
	orig0 = (*(*iter0).kindU.S4.sym).ast;
	LOC32 = (Tnode264794*)0;
	LOC32 = HEX5BHEX5D_265238_850551059(orig0, ((NI) 3));
	LOC33 = (Tnode264794*)0;
	LOC33 = newsymnode_266234_850551059(prc0);
	LOC34 = (Tnode264794*)0;
	LOC34 = HEX5BHEX5D_265238_850551059(orig0, ((NI) 4));
	asgnRefNoCycle((void**) (&(*prc0).ast), newprocnode_267040_850551059(((Tnodekind264020) 79), (*n0).info, body0, LOC32, LOC33, emptynode_265801_850551059, emptynode_265801_850551059, LOC34, emptynode_265801_850551059));
	add_265135_850551059((*prc0).ast, (*(*(*iter0).kindU.S4.sym).ast).kindU.S6.sons->data[((NI) 7)]);
	addinterfacedecl_317538_254525290(c0, prc0);
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_itersgenInit000)(void) {
	registerplugin_448102_1104897005(((NimStringDesc*) &TMP1236), ((NimStringDesc*) &TMP1237), ((NimStringDesc*) &TMP1238), itertoprocimpl_450003_1560300260);
}

NIM_EXTERNC N_NOINLINE(void, compiler_itersgenDatInit000)(void) {
}

