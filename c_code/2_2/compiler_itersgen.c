/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode215790 Tnode215790;
typedef struct Tcontext265020 Tcontext265020;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct Ttype215828 Ttype215828;
typedef struct Tsym215822 Tsym215822;
typedef struct Tident190012 Tident190012;
typedef struct Tnodeseq215784 Tnodeseq215784;
typedef struct Tidobj190006 Tidobj190006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq215824 Ttypeseq215824;
typedef struct Tscope215816 Tscope215816;
typedef struct TY215925 TY215925;
typedef struct Tstrtable215794 Tstrtable215794;
typedef struct Tsymseq215792 Tsymseq215792;
typedef struct Tloc215804 Tloc215804;
typedef struct Ropeobj170006 Ropeobj170006;
typedef struct Tlib215808 Tlib215808;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29688 Memregion29688;
typedef struct Smallchunk29640 Smallchunk29640;
typedef struct Llchunk29682 Llchunk29682;
typedef struct Bigchunk29642 Bigchunk29642;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29686 Avlnode29686;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Tpasscontext262002 Tpasscontext262002;
typedef struct Tproccon265008 Tproccon265008;
typedef struct Intset212035 Intset212035;
typedef struct Trunk212031 Trunk212031;
typedef struct Trunkseq212033 Trunkseq212033;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tidtable215840 Tidtable215840;
typedef struct Tidpairseq215838 Tidpairseq215838;
typedef struct Tctx264036 Tctx264036;
typedef struct TY265140 TY265140;
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef struct Tidpair215836 Tidpair215836;
typedef struct TY264242 TY264242;
typedef struct TY184090 TY184090;
typedef struct PprocHEX3Aobjecttype264221 PprocHEX3Aobjecttype264221;
typedef struct TY264261 TY264261;
typedef struct Tinstantiationpair265010 Tinstantiationpair265010;
typedef struct TY215913 TY215913;
typedef struct TY264222 TY264222;
typedef struct TY264227 TY264227;
typedef struct TY264262 TY264262;
typedef struct Vmargs264030 Vmargs264030;
typedef struct Tblock264018 Tblock264018;
typedef struct TY264202 TY264202;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode215790*, Transformation422004) (Tcontext265020* c, Tnode215790* n);
struct  Tlineinfo183337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode215790  {
Ttype215828* typ;
Tlineinfo183337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym215822* sym;
} S4;
struct {Tident190012* ident;
} S5;
struct {Tnodeseq215784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj190006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable215794  {
NI counter;
Tsymseq215792* data;
};
struct  Tloc215804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype215828* t;
Ropeobj170006* r;
Ropeobj170006* heaproot;
};
struct  Tsym215822  {
  Tidobj190006 Sup;
NU8 kind;
union{
struct {Ttypeseq215824* typeinstcache;
Tscope215816* typscope;
} S1;
struct {TY215925* procinstcache;
Tsym215822* gcunsafetyreason;
} S2;
struct {TY215925* usedgenerics;
Tstrtable215794 tab;
} S3;
struct {Tsym215822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype215828* typ;
Tident190012* name;
Tlineinfo183337 info;
Tsym215822* owner;
NU32 flags;
Tnode215790* ast;
NU32 options;
NI position;
NI offset;
Tloc215804 loc;
Tlib215808* annex;
Tnode215790* constraint;
};
struct  Ttype215828  {
  Tidobj190006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq215824* sons;
Tnode215790* n;
Tsym215822* owner;
Tsym215822* sym;
Tsym215822* destructor;
Tsym215822* deepcopy;
Tsym215822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc215804 loc;
};
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29640* TY29703[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29688  {
NI minlargeobj;
NI maxlargeobj;
TY29703 freesmallchunks;
Llchunk29682* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29642* freechunkslist;
Intset29614 chunkstarts;
Avlnode29686* root;
Avlnode29686* deleted;
Avlnode29686* last;
Avlnode29686* freeavlnodes;
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
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29688 region;
Gcstat49814 stat;
};
struct  Tpasscontext262002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset212035  {
NI counter;
NI max;
Trunk212031* head;
Trunkseq212033* data;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
};
struct  Tidtable215840  {
NI counter;
Tidpairseq215838* data;
};
typedef N_NIMCALL_PTR(Tnode215790*, TY265071) (Tcontext265020* c, Tnode215790* n);
typedef N_NIMCALL_PTR(Tnode215790*, TY265076) (Tcontext265020* c, Tnode215790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode215790*, TY265084) (Tcontext265020* c, Tnode215790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode215790*, TY265092) (Tcontext265020* c, Tnode215790* n);
typedef N_NIMCALL_PTR(Tnode215790*, TY265097) (Tcontext265020* c, Tnode215790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode215790*, TY265105) (Tcontext265020* c, Tnode215790* n);
typedef N_NIMCALL_PTR(Tnode215790*, TY265110) (Tcontext265020* c, Tnode215790* n, Tnode215790* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype215828*, TY265117) (Tcontext265020* c, Tnode215790* n, Ttype215828* prev);
typedef struct {
N_NIMCALL_PTR(Tnode215790*, ClPrc) (Tcontext265020* c, Tidtable215840 pt, Tnode215790* n, void* ClEnv);
void* ClEnv;
} TY265123;
typedef struct {
N_NIMCALL_PTR(Tsym215822*, ClPrc) (Tcontext265020* c, Tsym215822* fn, Tidtable215840 pt, Tlineinfo183337 info, void* ClEnv);
void* ClEnv;
} TY265129;
typedef N_NIMCALL_PTR(Tsym215822*, TY265145) (Tcontext265020* c, Tsym215822* dc, Ttype215828* t, Tlineinfo183337 info, NU8 op);
struct  Tcontext265020  {
  Tpasscontext262002 Sup;
Tsym215822* module;
Tscope215816* currentscope;
Tscope215816* importtable;
Tscope215816* toplevelscope;
Tproccon265008* p;
Tsymseq215792* friendmodules;
NI instcounter;
Intset212035 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq215792* converters;
Tsymseq215792* patterns;
Tlinkedlist135016 optionstack;
Tidtable215840 symmapping;
Tlinkedlist135016 libs;
TY265071 semconstexpr;
TY265076 semexpr;
TY265084 semtryexpr;
TY265092 semtryconstexpr;
TY265097 semoperand;
TY265105 semconstboolexpr;
TY265110 semoverloadedcall;
TY265117 semtypenode;
TY265123 seminferredlambda;
TY265129 semgenerateinstance;
Intset212035 includedfiles;
Tstrtable215794 userpragmas;
Tctx264036* evalcontext;
Intset212035 unknownidents;
TY265140* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY265145 insttypeboundop;
};
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope215816  {
NI depthlevel;
Tstrtable215794 symbols;
Tnodeseq215784* usingsyms;
Tscope215816* parent;
};
struct  Ropeobj170006  {
  TNimObject Sup;
Ropeobj170006* left;
Ropeobj170006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib215808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj170006* name;
Tnode215790* path;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29619[8];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29619 bits;
};
struct  Basechunk29638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29640  {
  Basechunk29638 Sup;
Smallchunk29640* next;
Smallchunk29640* prev;
Freecell29630* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29682  {
NI size;
NI acc;
Llchunk29682* next;
};
struct  Bigchunk29642  {
  Basechunk29638 Sup;
Bigchunk29642* next;
Bigchunk29642* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29619 bits;
};
typedef Avlnode29686* TY29693[2];
struct  Avlnode29686  {
TY29693 link;
NI key;
NI upperbound;
NI level;
};
struct  Tproccon265008  {
Tsym215822* owner;
Tsym215822* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon265008* next;
NIM_BOOL wasforwarded;
Tnode215790* bracketexpr;
};
struct  Trunk212031  {
Trunk212031* next;
NI key;
TY29619 bits;
};
struct  Tidpair215836  {
Tidobj190006* key;
TNimObject* val;
};
struct  Tctx264036  {
  Tpasscontext262002 Sup;
TY264242* code;
TY184090* debug;
Tnode215790* globals;
Tnode215790* constants;
Ttypeseq215824* types;
Tnode215790* currentexceptiona;
Tnode215790* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype264221* prc;
Tsym215822* module;
Tnode215790* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo183337 comesfromheuristic;
TY264261* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair265010  {
Tsym215822* genericsym;
Tinstantiation215812* inst;
};
struct  Tinstantiation215812  {
Tsym215822* sym;
Ttypeseq215824* concretetypes;
TY215913* usedby;
NI compilesid;
};
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct TY264227 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY264227 TY264230[256];
struct  PprocHEX3Aobjecttype264221  {
TY264222* blocks;
Tsym215822* sym;
TY264230 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs264030* args, void* ClEnv);
void* ClEnv;
} Vmcallback264032;
struct TY264262 {
NimStringDesc* Field0;
Vmcallback264032 Field1;
};
struct  Tblock264018  {
Tsym215822* label;
TY264202* fixups;
};
struct  Vmargs264030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode215790* currentexception;
};
struct Tnodeseq215784 {
  TGenericSeq Sup;
  Tnode215790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq215824 {
  TGenericSeq Sup;
  Ttype215828* data[SEQ_DECL_SIZE];
};
struct TY215925 {
  TGenericSeq Sup;
  Tinstantiation215812* data[SEQ_DECL_SIZE];
};
struct Tsymseq215792 {
  TGenericSeq Sup;
  Tsym215822* data[SEQ_DECL_SIZE];
};
struct Trunkseq212033 {
  TGenericSeq Sup;
  Trunk212031* data[SEQ_DECL_SIZE];
};
struct Tidpairseq215838 {
  TGenericSeq Sup;
  Tidpair215836 data[SEQ_DECL_SIZE];
};
struct TY265140 {
  TGenericSeq Sup;
  Tinstantiationpair265010 data[SEQ_DECL_SIZE];
};
struct TY264242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY184090 {
  TGenericSeq Sup;
  Tlineinfo183337 data[SEQ_DECL_SIZE];
};
struct TY264261 {
  TGenericSeq Sup;
  TY264262 data[SEQ_DECL_SIZE];
};
struct TY215913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY264222 {
  TGenericSeq Sup;
  Tblock264018 data[SEQ_DECL_SIZE];
};
struct TY264202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registerplugin_422091)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation422004 t);
N_NIMCALL(Tnode215790*, itertoprocimpl_424003)(Tcontext265020* c, Tnode215790* n);
N_NIMCALL(Tnode215790*, newnodei_217248)(NU8 kind, Tlineinfo183337 info);
static N_INLINE(Tnode215790*, HEX5BHEX5D_216238)(Tnode215790* n, NI i);
N_NIMCALL(void, localerror_188085)(Tlineinfo183337 info, NimStringDesc* arg);
N_NIMCALL(Ttype215828*, skiptypes_219113)(Ttype215828* t, NU64 kinds);
N_NIMCALL(Ttype215828*, lastson_218377)(Ttype215828* n);
N_NIMCALL(Tnode215790*, liftitertoproc_384207)(Tsym215822* fn, Tnode215790* body, Ttype215828* ptrtype);
N_NIMCALL(Tnode215790*, getbody_255827)(Tsym215822* s);
N_NIMCALL(Tsym215822*, newsym_216683)(NU8 symkind, Tident190012* name, Tsym215822* owner, Tlineinfo183337 info);
N_NIMCALL(Ttype215828*, copytype_218470)(Ttype215828* t, Tsym215822* owner, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void, add_216114)(Tnode215790* father, Tnode215790* son);
N_NIMCALL(Tnode215790*, newsymnode_217234)(Tsym215822* sym);
N_NIMCALL(Tsym215822*, getenvparam_380603)(Tsym215822* routine);
N_NIMCALL(void, rawaddson_219408)(Ttype215828* father, Ttype215828* son);
N_NIMCALL(Tnode215790*, newprocnode_218040)(NU8 kind, Tlineinfo183337 info, Tnode215790* body, Tnode215790* params, Tnode215790* name, Tnode215790* pattern, Tnode215790* genericparams, Tnode215790* pragmas, Tnode215790* exceptions);
N_NIMCALL(void, addinterfacedecl_270538)(Tcontext265020* c, Tsym215822* sym);
STRING_LITERAL(TMP1116, "stdlib", 6);
STRING_LITERAL(TMP1117, "system", 6);
STRING_LITERAL(TMP1118, "iterToProc", 10);
STRING_LITERAL(TMP1119, "first argument needs to be an iterator", 38);
STRING_LITERAL(TMP1120, "second argument needs to be a type", 34);
STRING_LITERAL(TMP1121, "third argument needs to be an identifier", 40);
STRING_LITERAL(TMP1122, "type must be a non-generic ref|ptr to object with state field", 61);
extern Gcheap49818 gch_49859;
extern Tnode215790* emptynode_216801;

static N_INLINE(Tnode215790*, HEX5BHEX5D_216238)(Tnode215790* n, NI i) {
	Tnode215790* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47505* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47505* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode215790*, itertoprocimpl_424003)(Tcontext265020* c, Tnode215790* n) {
	Tnode215790* result;
	Tnode215790* iter;
	Ttype215828* t;
	Tnode215790* LOC19;
	Tnode215790* body;
	Tnode215790* LOC28;
	Tsym215822* prc;
	Tnode215790* LOC29;
	Tsym215822* LOC30;
	Tnode215790* LOC31;
	Tnode215790* orig;
	Tnode215790* LOC32;
	Tnode215790* LOC33;
	Tnode215790* LOC34;
{	result = 0;
	result = newnodei_217248(((NU8) 115), (*n).info);
	iter = HEX5BHEX5D_216238(n, ((NI) 1));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = !(((*iter).kind == ((NU8) 3)));
		if (LOC3) goto LA4;
		LOC3 = !(((*(*iter).kindU.S4.sym).kind == ((NU8) 14)));
		LA4: ;
		if (!LOC3) goto LA5;
		localerror_188085((*iter).info, ((NimStringDesc*) &TMP1119));
		goto BeforeRet;
	}
	LA5: ;
	{
		Tnode215790* LOC9;
		Tnode215790* LOC12;
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_216238(n, ((NI) 2));
		if (!(*LOC9).typ == 0) goto LA10;
		LOC12 = 0;
		LOC12 = HEX5BHEX5D_216238(n, ((NI) 2));
		localerror_188085((*LOC12).info, ((NimStringDesc*) &TMP1120));
		goto BeforeRet;
	}
	LA10: ;
	{
		Tnode215790* LOC15;
		Tnode215790* LOC18;
		LOC15 = 0;
		LOC15 = HEX5BHEX5D_216238(n, ((NI) 3));
		if (!!(((*LOC15).kind == ((NU8) 2)))) goto LA16;
		LOC18 = 0;
		LOC18 = HEX5BHEX5D_216238(n, ((NI) 3));
		localerror_188085((*LOC18).info, ((NimStringDesc*) &TMP1121));
		goto BeforeRet;
	}
	LA16: ;
	LOC19 = 0;
	LOC19 = HEX5BHEX5D_216238(n, ((NI) 2));
	t = skiptypes_219113((*LOC19).typ, 2304);
	{
		NIM_BOOL LOC22;
		Ttype215828* LOC24;
		Tnode215790* LOC27;
		LOC22 = 0;
		LOC22 = !(((6291456 &((NU64)1<<((NU)((*t).kind)&63U)))!=0));
		if (LOC22) goto LA23;
		LOC24 = 0;
		LOC24 = lastson_218377(t);
		LOC22 = !(((*LOC24).kind == ((NU8) 17)));
		LA23: ;
		if (!LOC22) goto LA25;
		LOC27 = 0;
		LOC27 = HEX5BHEX5D_216238(n, ((NI) 2));
		localerror_188085((*LOC27).info, ((NimStringDesc*) &TMP1122));
		goto BeforeRet;
	}
	LA25: ;
	LOC28 = 0;
	LOC28 = getbody_255827((*iter).kindU.S4.sym);
	body = liftitertoproc_384207((*iter).kindU.S4.sym, LOC28, t);
	LOC29 = 0;
	LOC29 = HEX5BHEX5D_216238(n, ((NI) 3));
	prc = newsym_216683(((NU8) 12), (*LOC29).kindU.S5.ident, (*(*iter).kindU.S4.sym).owner, (*(*iter).kindU.S4.sym).info);
	asgnRefNoCycle((void**) (&(*prc).typ), copytype_218470((*(*iter).kindU.S4.sym).typ, prc, NIM_FALSE));
	(*(*prc).typ).flags &= ~(((NU32)1) << ((((NU8) 11)) % (sizeof(NU32)*8)));
	LOC30 = 0;
	LOC30 = getenvparam_380603((*iter).kindU.S4.sym);
	LOC31 = 0;
	LOC31 = newsymnode_217234(LOC30);
	add_216114((*(*prc).typ).n, LOC31);
	rawaddson_219408((*prc).typ, t);
	orig = (*(*iter).kindU.S4.sym).ast;
	LOC32 = 0;
	LOC32 = HEX5BHEX5D_216238(orig, ((NI) 3));
	LOC33 = 0;
	LOC33 = newsymnode_217234(prc);
	LOC34 = 0;
	LOC34 = HEX5BHEX5D_216238(orig, ((NI) 4));
	asgnRefNoCycle((void**) (&(*prc).ast), newprocnode_218040(((NU8) 79), (*n).info, body, LOC32, LOC33, emptynode_216801, emptynode_216801, LOC34, emptynode_216801));
	add_216114((*prc).ast, (*(*(*iter).kindU.S4.sym).ast).kindU.S6.sons->data[((NI) 7)]);
	addinterfacedecl_270538(c, prc);
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_itersgenInit000)(void) {
	registerplugin_422091(((NimStringDesc*) &TMP1116), ((NimStringDesc*) &TMP1117), ((NimStringDesc*) &TMP1118), itertoprocimpl_424003);
}

NIM_EXTERNC N_NOINLINE(void, compiler_itersgenDatInit000)(void) {
}

