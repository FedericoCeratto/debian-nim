/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode264794 Tnode264794;
typedef struct Tcontext315020 Tcontext315020;
typedef struct Ttype264832 Ttype264832;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Tsym264826 Tsym264826;
typedef struct Tident194012 Tident194012;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
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
typedef struct Tscope264820 Tscope264820;
typedef struct Tpasscontext312002 Tpasscontext312002;
typedef struct Tproccon315008 Tproccon315008;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Intset241031 Intset241031;
typedef struct Trunk241027 Trunk241027;
typedef struct Trunkseq241029 Trunkseq241029;
typedef struct Tlinkedlist141016 Tlinkedlist141016;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Tidtable264844 Tidtable264844;
typedef struct Tidpairseq264842 Tidpairseq264842;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tctx314036 Tctx314036;
typedef struct TY315144 TY315144;
typedef struct Ttabiter271075 Ttabiter271075;
typedef struct TY264927 TY264927;
typedef struct Tlib264812 Tlib264812;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef struct Tidpair264840 Tidpair264840;
typedef struct TY314242 TY314242;
typedef struct TY187093 TY187093;
typedef struct PprocHEX3Aobjecttype314221 PprocHEX3Aobjecttype314221;
typedef struct TY314261 TY314261;
typedef struct Tinstantiationpair315010 Tinstantiationpair315010;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct TY314222 TY314222;
typedef struct TY314227 TY314227;
typedef struct TY314262 TY314262;
typedef struct Vmargs314030 Vmargs314030;
typedef struct TY264917 TY264917;
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
typedef NU8 Ttypekind264244;
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
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
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
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
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
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
};
struct  Ttabiter271075  {
NI h;
};
typedef NU8 Tsymkind264435;
typedef NU8 Tmagic264525;
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
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
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
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
TY30018 bits;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
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
typedef NU8 Tlibkind264810;
struct  Tlib264812  {
  Tlistentry141010 Sup;
Tlibkind264810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj173006* name;
Tnode264794* path;
};
struct  Freecell30029  {
Freecell30029* next;
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
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
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
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
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
struct TY314222 {
  TGenericSeq Sup;
  Tblock314018 data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY314202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registerplugin_448102_1104897005)(NimStringDesc* package0, NimStringDesc* module0, NimStringDesc* fn0, Transformation448004 t0);
N_NIMCALL(Tnode264794*, semlocals_449005_4183469335)(Tcontext315020* c0, Tnode264794* n0);
N_NIMCALL(Ttype264832*, newtypes_315195_893308950)(Ttypekind264244 kind0, Tcontext315020* c0);
N_NIMCALL(Tnode264794*, newnodeit_266801_850551059)(Tnodekind264020 kind0, Tlineinfo186336 info0, Ttype264832* typ0);
N_NIMCALL(Tnode264794*, newnodei_266248_850551059)(Tnodekind264020 kind0, Tlineinfo186336 info0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(Tsym264826*, inittabiter_271077_2984716966)(Ttabiter271075* ti0, Tstrtable264798 tab0);
N_NIMCALL(Ttype264832*, skiptypes_268113_850551059)(Ttype264832* t0, Ttypekind264244Set kinds0);
N_NIMCALL(Tsym264826*, newsym_265684_850551059)(Tsymkind264435 symkind0, Tident194012* name0, Tsym264826* owner0, Tlineinfo186336 info0);
N_NIMCALL(Tsym264826*, getcurrowner_315220_893308950)(void);
N_NIMCALL(void, addson_266807_850551059)(Tnode264794* father0, Tnode264794* son0);
N_NIMCALL(Tnode264794*, newsymnode_266234_850551059)(Tsym264826* sym0);
N_NIMCALL(void, addsonskipintlit_309678_3937434831)(Ttype264832* father0, Ttype264832* son0);
N_NIMCALL(Tnode264794*, newsymnode_266241_850551059)(Tsym264826* sym0, Tlineinfo186336 info0);
static N_INLINE(Tnode264794*, newderef_402006_2218250499)(Tnode264794* n0);
N_NIMCALL(void, add_265135_850551059)(Tnode264794* father0, Tnode264794* son0);
N_NIMCALL(Tsym264826*, nextiter_271082_2984716966)(Ttabiter271075* ti0, Tstrtable264798 tab0);
STRING_LITERAL(TMP1165, "stdlib", 6);
STRING_LITERAL(TMP1166, "system", 6);
STRING_LITERAL(TMP1167, "locals", 6);
extern Gcheap50418 gch_50458_1689653243;

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
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

static N_INLINE(Tnode264794*, newderef_402006_2218250499)(Tnode264794* n0) {
	Tnode264794* result0;
	result0 = (Tnode264794*)0;
	result0 = newnodeit_266801_850551059(((Tnodekind264020) 65), (*n0).info, (*(*n0).typ).sons->data[((NI) 0)]);
	addson_266807_850551059(result0, n0);
	return result0;
}

N_NIMCALL(Tnode264794*, semlocals_449005_4183469335)(Tcontext315020* c0, Tnode264794* n0) {
	Tnode264794* result0;
	NI counter0;
	Ttype264832* tupletype0;
	result0 = (Tnode264794*)0;
	counter0 = ((NI) 0);
	tupletype0 = newtypes_315195_893308950(((Ttypekind264244) 18), c0);
	result0 = newnodeit_266801_850551059(((Tnodekind264020) 37), (*n0).info, tupletype0);
	asgnRefNoCycle((void**) (&(*tupletype0).n), newnodei_266248_850551059(((Tnodekind264020) 138), (*n0).info));
	{
		Tscope264820* scope_449012_4183469335;
		Tscope264820* HEX3Atmp_449085_4183469335;
		Tscope264820* current_449088_4183469335;
		scope_449012_4183469335 = (Tscope264820*)0;
		HEX3Atmp_449085_4183469335 = (Tscope264820*)0;
		HEX3Atmp_449085_4183469335 = (*c0).currentscope;
		current_449088_4183469335 = HEX3Atmp_449085_4183469335;
		{
			while (1) {
				if (!!((current_449088_4183469335 == NIM_NIL))) goto LA3;
				scope_449012_4183469335 = current_449088_4183469335;
				{
					if (!(scope_449012_4183469335 == (*c0).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym264826* it_449024_4183469335;
					Tstrtable264798 HEX3Atmp_449079_4183469335;
					Ttabiter271075 it_449082_4183469335;
					Tsym264826* s_449084_4183469335;
					it_449024_4183469335 = (Tsym264826*)0;
					memset((void*)(&HEX3Atmp_449079_4183469335), 0, sizeof(HEX3Atmp_449079_4183469335));
					HEX3Atmp_449079_4183469335.counter = (*scope_449012_4183469335).symbols.counter;
					HEX3Atmp_449079_4183469335.data = (*scope_449012_4183469335).symbols.data;
					memset((void*)(&it_449082_4183469335), 0, sizeof(it_449082_4183469335));
					s_449084_4183469335 = inittabiter_271077_2984716966((&it_449082_4183469335), HEX3Atmp_449079_4183469335);
					{
						while (1) {
							if (!!((s_449084_4183469335 == NIM_NIL))) goto LA10;
							it_449024_4183469335 = s_449084_4183469335;
							{
								NIM_BOOL LOC13;
								Ttype264832* LOC15;
								Tsym264826* field0;
								Tsym264826* LOC18;
								Tnode264794* LOC19;
								Tnode264794* a0;
								LOC13 = (NIM_BOOL)0;
								LOC13 = ((1051400 &(1U<<((NU)((*it_449024_4183469335).kind)&31U)))!=0);
								if (!(LOC13)) goto LA14;
								LOC15 = (Ttype264832*)0;
								LOC15 = skiptypes_268113_850551059((*it_449024_4183469335).typ, 8390656);
								LOC13 = !(((*LOC15).kind == ((Ttypekind264244) 48) || (*LOC15).kind == ((Ttypekind264244) 27) || (*LOC15).kind == ((Ttypekind264244) 8) || (*LOC15).kind == ((Ttypekind264244) 59) || (*LOC15).kind == ((Ttypekind264244) 6) || (*LOC15).kind == ((Ttypekind264244) 7) || (*LOC15).kind == ((Ttypekind264244) 3)));
								LA14: ;
								if (!LOC13) goto LA16;
								LOC18 = (Tsym264826*)0;
								LOC18 = getcurrowner_315220_893308950();
								field0 = newsym_265684_850551059(((Tsymkind264435) 18), (*it_449024_4183469335).name, LOC18, (*n0).info);
								asgnRefNoCycle((void**) (&(*field0).typ), skiptypes_268113_850551059((*it_449024_4183469335).typ, 8390656));
								(*field0).position = counter0;
								counter0 += ((NI) 1);
								LOC19 = (Tnode264794*)0;
								LOC19 = newsymnode_266234_850551059(field0);
								addson_266807_850551059((*tupletype0).n, LOC19);
								addsonskipintlit_309678_3937434831(tupletype0, (*field0).typ);
								a0 = newsymnode_266241_850551059(it_449024_4183469335, (*result0).info);
								{
									Ttype264832* LOC22;
									LOC22 = (Ttype264832*)0;
									LOC22 = skiptypes_268113_850551059((*it_449024_4183469335).typ, 2048);
									if (!((*LOC22).kind == ((Ttypekind264244) 23))) goto LA23;
									a0 = newderef_402006_2218250499(a0);
								}
								LA23: ;
								add_265135_850551059(result0, a0);
							}
							LA16: ;
							s_449084_4183469335 = nextiter_271082_2984716966((&it_449082_4183469335), HEX3Atmp_449079_4183469335);
						} LA10: ;
					}
				}
				current_449088_4183469335 = (*current_449088_4183469335).parent;
			} LA3: ;
		}
	} LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit000)(void) {
	registerplugin_448102_1104897005(((NimStringDesc*) &TMP1165), ((NimStringDesc*) &TMP1166), ((NimStringDesc*) &TMP1167), semlocals_449005_4183469335);
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit000)(void) {
}

