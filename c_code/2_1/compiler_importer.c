/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode215790 Tnode215790;
typedef struct Tcontext265020 Tcontext265020;
typedef struct Intset212035 Intset212035;
typedef struct Trunk212031 Trunk212031;
typedef struct Trunkseq212033 Trunkseq212033;
typedef struct Tsym215822 Tsym215822;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype215828 Ttype215828;
typedef struct Tlineinfo183337 Tlineinfo183337;
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
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Tpasscontext262002 Tpasscontext262002;
typedef struct Tproccon265008 Tproccon265008;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tidtable215840 Tidtable215840;
typedef struct Tidpairseq215838 Tidpairseq215838;
typedef struct Tctx264036 Tctx264036;
typedef struct TY265140 TY265140;
typedef struct Ttabiter222071 Ttabiter222071;
typedef struct Tidentiter222084 Tidentiter222084;
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct Tidpair215836 Tidpair215836;
typedef struct TY264242 TY264242;
typedef struct TY184093 TY184093;
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
struct  Intset212035  {
NI counter;
NI max;
Trunk212031* head;
Trunkseq212033* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
NI h;
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
typedef Smallchunk29639* TY29702[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29687  {
NI minlargeobj;
NI maxlargeobj;
TY29702 freesmallchunks;
Llchunk29681* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29641* freechunkslist;
Intset29614 chunkstarts;
Avlnode29685* root;
Avlnode29685* deleted;
Avlnode29685* last;
Avlnode29685* freeavlnodes;
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
Memregion29687 region;
Gcstat49814 stat;
};
typedef N_NIMCALL_PTR(Tsym215822*, TY262049) (Tsym215822* m, NI32 fileidx);
struct  Tpasscontext262002  {
  TNimObject Sup;
NIM_BOOL fromcache;
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
struct  Ttabiter222071  {
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
struct  Tidentiter222084  {
NI h;
Tident190012* name;
};
typedef NI TY29618[16];
struct  Trunk212031  {
Trunk212031* next;
NI key;
TY29618 bits;
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
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29618 bits;
};
struct  Basechunk29637  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29639  {
  Basechunk29637 Sup;
Smallchunk29639* next;
Smallchunk29639* prev;
Freecell29629* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29681  {
NI size;
NI acc;
Llchunk29681* next;
};
struct  Bigchunk29641  {
  Basechunk29637 Sup;
Bigchunk29641* next;
Bigchunk29641* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29618 bits;
};
typedef Avlnode29685* TY29692[2];
struct  Avlnode29685  {
TY29692 link;
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
struct  Tidpair215836  {
Tidobj190006* key;
TNimObject* val;
};
struct  Tctx264036  {
  Tpasscontext262002 Sup;
TY264242* code;
TY184093* debug;
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
struct  Freecell29629  {
Freecell29629* next;
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
struct Trunkseq212033 {
  TGenericSeq Sup;
  Trunk212031* data[SEQ_DECL_SIZE];
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
struct TY184093 {
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
N_NIMCALL(NI, sonslen_218351)(Tnode215790* n);
N_NIMCALL(Tsym215822*, myimportmodule_272474)(Tcontext265020* c, Tnode215790* n);
N_NIMCALL(NI32, checkmodulename_272049)(Tnode215790* n);
N_NIMCALL(NimStringDesc*, getmodulename_272009)(Tnode215790* n);
N_NIMCALL(NimStringDesc*, nosunixToNativePath)(NimStringDesc* path, NimStringDesc* drive);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(Tident190012*, getident_190441)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_NIMCALL(NimStringDesc*, rendertree_234044)(Tnode215790* n, NU8 renderflags);
N_NIMCALL(void, localerror_188080)(Tlineinfo183337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_NIMCALL(NimStringDesc*, findmodule_162484)(NimStringDesc* modulename, NimStringDesc* currentmodule);
N_NIMCALL(NimStringDesc*, tofullpath_184269)(NI32 fileidx);
N_NIMCALL(NI32, fileinfoidx_184017)(NimStringDesc* filename);
N_NIMCALL(Tsym215822*, importmoduleas_272443)(Tnode215790* n, Tsym215822* realmodule);
static N_INLINE(NI, len_216059)(Tnode215790* n);
N_NIMCALL(Tsym215822*, createmodulealias_218838)(Tsym215822* s, Tident190012* newident, Tlineinfo183337 info);
N_NIMCALL(void, message_188095)(Tlineinfo183337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, adddecl_270445)(Tcontext265020* c, Tsym215822* sym);
N_NIMCALL(void, importallsymbolsexcept_272260)(Tcontext265020* c, Tsym215822* frommod, Intset212035 exceptset);
N_NIMCALL(Tsym215822*, inittabiter_222073)(Ttabiter222071* ti, Tstrtable215794 tab);
N_NIMCALL(void, internalerror_188100)(Tlineinfo183337 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_85009, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NIM_BOOL, isnil_212898)(Intset212035 x);
N_NIMCALL(NIM_BOOL, contains_212811)(Intset212035 s, NI key);
N_NIMCALL(void, rawimportsymbol_272056)(Tcontext265020* c, Tsym215822* s);
N_NIMCALL(Tsym215822*, strtableget_222066)(Tstrtable215794 t, Tident190012* name);
N_NIMCALL(void, incl_212832)(Intset212035* s, NI key);
N_NIMCALL(void, strtableadd_222061)(Tstrtable215794* t, Tsym215822* n);
N_NIMCALL(Tsym215822*, initidentiter_222087)(Tidentiter222084* ti, Tstrtable215794 tab, Tident190012* s);
N_NIMCALL(Tsym215822*, nextidentiter_222093)(Tidentiter222084* ti, Tstrtable215794 tab);
N_NIMCALL(void, addconverter_265440)(Tcontext265020* c, Tsym215822* conv);
static N_INLINE(NIM_BOOL, haspattern_220410)(Tsym215822* s);
static N_INLINE(NIM_BOOL, isroutine_220396)(Tsym215822* s);
N_NIMCALL(void, addpattern_265445)(Tcontext265020* c, Tsym215822* p);
N_NIMCALL(Tsym215822*, nextiter_222078)(Ttabiter222071* ti, Tstrtable215794 tab);
N_NIMCALL(void, checkminsonslen_265962)(Tnode215790* n, NI length);
N_NIMCALL(Tnode215790*, newsymnode_217234)(Tsym215822* sym);
N_NIMCALL(void, initintset_212885)(Intset212035* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(Tident190012*, considerquotedident_270004)(Tnode215790* n);
N_NIMCALL(void, importsymbol_272198)(Tcontext265020* c, Tnode215790* n, Tsym215822* frommod);
N_NIMCALL(void, loadstub_255825)(Tsym215822* s);
STRING_LITERAL(TMP3629, "", 0);
STRING_LITERAL(TMP3630, "as", 2);
STRING_LITERAL(TMP3631, " ", 1);
STRING_LITERAL(TMP3632, ".", 1);
STRING_LITERAL(TMP3633, "/", 1);
STRING_LITERAL(TMP3634, "invalid module name: \'$1\'", 25);
STRING_LITERAL(TMP3635, "module alias must be an identifier", 34);
STRING_LITERAL(TMP3636, "A module cannot import itself", 29);
STRING_LITERAL(TMP3637, "importAllSymbols: ", 18);
STRING_LITERAL(TMP3638, "rawImportSymbol", 15);
STRING_LITERAL(TMP3640, "importSymbol: 2", 15);
STRING_LITERAL(TMP3641, "importSymbol: 3", 15);
extern Gcheap49818 gch_49859;
extern TY262049 gimportmodule_262053;
extern TNimType NTI215435; /* TSymKind */

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47505))))));
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
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(NimStringDesc*, getmodulename_272009)(Tnode215790* n) {
	NimStringDesc* result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 20):
	case ((NU8) 21):
	case ((NU8) 22):
	{
		result = nosunixToNativePath((*n).kindU.S3.strval, ((NimStringDesc*) &TMP3629));
	}
	break;
	case ((NU8) 2):
	{
		result = copyString((*(*n).kindU.S5.ident).s);
	}
	break;
	case ((NU8) 3):
	{
		result = copyString((*(*(*n).kindU.S4.sym).name).s);
	}
	break;
	case ((NU8) 29):
	case ((NU8) 30):
	{
		NimStringDesc* LOC12;
		{
			NIM_BOOL LOC7;
			Tident190012* LOC9;
			LOC7 = 0;
			LOC7 = ((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2));
			if (!(LOC7)) goto LA8;
			LOC9 = 0;
			LOC9 = getident_190441(((NimStringDesc*) &TMP3630));
			LOC7 = ((*(*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident).Sup.id == (*LOC9).Sup.id);
			LA8: ;
			if (!LOC7) goto LA10;
			(*n).kind = ((NU8) 78);
			asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 0)]), (*n).kindU.S6.sons->data[((NI) 1)]);
			asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 1)]), (*n).kindU.S6.sons->data[((NI) 2)]);
			(*n).kindU.S6.sons = (Tnodeseq215784*) setLengthSeq(&((*n).kindU.S6.sons)->Sup, sizeof(Tnode215790*), ((NI) 2));
			result = getmodulename_272009((*n).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA10: ;
		LOC12 = 0;
		LOC12 = rendertree_234044(n, 4);
		result = nsuReplaceStr(LOC12, ((NimStringDesc*) &TMP3631), ((NimStringDesc*) &TMP3629));
	}
	break;
	case ((NU8) 45):
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = rendertree_234044(n, 4);
		result = nsuReplaceStr(LOC14, ((NimStringDesc*) &TMP3632), ((NimStringDesc*) &TMP3633));
	}
	break;
	case ((NU8) 78):
	{
		result = getmodulename_272009((*n).kindU.S6.sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* LOC17;
		NimStringDesc* LOC18;
		LOC17 = 0;
		LOC17 = rendertree_234044(n, 0);
		LOC18 = 0;
		LOC18 = nsuFormatSingleElem(((NimStringDesc*) &TMP3634), LOC17);
		localerror_188080((*n).info, ((NU16) 4), LOC18);
		result = copyString(((NimStringDesc*) &TMP3629));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI32, checkmodulename_272049)(Tnode215790* n) {
	NI32 result;
	NimStringDesc* modulename;
	NimStringDesc* fullpath;
	NimStringDesc* LOC1;
	result = 0;
	modulename = getmodulename_272009(n);
	LOC1 = 0;
	LOC1 = tofullpath_184269((*n).info.fileindex);
	fullpath = findmodule_162484(modulename, LOC1);
	{
		if (!((fullpath ? fullpath->Sup.len : 0) == ((NI) 0))) goto LA4;
		localerror_188080((*n).info, ((NU16) 3), modulename);
		result = ((NI32) -1);
	}
	goto LA2;
	LA4: ;
	{
		result = fileinfoidx_184017(fullpath);
	}
	LA2: ;
	return result;
}

static N_INLINE(NI, len_216059)(Tnode215790* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tsym215822*, importmoduleas_272443)(Tnode215790* n, Tsym215822* realmodule) {
	Tsym215822* result;
	result = 0;
	result = realmodule;
	{
		if (!!(((*n).kind == ((NU8) 78)))) goto LA3;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = len_216059(n);
		LOC6 = !((LOC7 == ((NI) 2)));
		if (LOC6) goto LA8;
		LOC6 = !(((*(*n).kindU.S6.sons->data[((NI) 1)]).kind == ((NU8) 2)));
		LA8: ;
		if (!LOC6) goto LA9;
		localerror_188080((*n).info, ((NU16) 4), ((NimStringDesc*) &TMP3635));
	}
	goto LA1;
	LA9: ;
	{
		if (!!(((*(*(*n).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident).Sup.id == (*(*realmodule).name).Sup.id))) goto LA12;
		result = createmodulealias_218838(realmodule, (*(*n).kindU.S6.sons->data[((NI) 1)]).kindU.S5.ident, (*realmodule).info);
	}
	goto LA1;
	LA12: ;
	LA1: ;
	return result;
}

N_NIMCALL(Tsym215822*, myimportmodule_272474)(Tcontext265020* c, Tnode215790* n) {
	Tsym215822* result;
	NI32 f;
	result = 0;
	f = checkmodulename_272049(n);
	{
		Tsym215822* LOC5;
		if (!!((f == ((NI32) -1)))) goto LA3;
		LOC5 = 0;
		LOC5 = gimportmodule_262053((*c).module, f);
		result = importmoduleas_272443(n, LOC5);
		{
			if (!((*result).info.fileindex == (*n).info.fileindex)) goto LA8;
			localerror_188080((*n).info, ((NU16) 4), ((NimStringDesc*) &TMP3636));
		}
		LA8: ;
		{
			if (!(((*result).flags &(1U<<((NU)(((NU8) 19))&31U)))!=0)) goto LA12;
			message_188095((*n).info, ((NU16) 241), (*(*result).name).s);
		}
		LA12: ;
	}
	LA3: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NIM_BOOL, isnil_212898)(Intset212035 x) {
	NIM_BOOL result;
	result = 0;
	result = x.head == 0;
	return result;
}

static N_INLINE(NIM_BOOL, isroutine_220396)(Tsym215822* s) {
	NIM_BOOL result;
	result = 0;
	result = ((258048 &(1U<<((NU)((*s).kind)&31U)))!=0);
	return result;
}

static N_INLINE(NIM_BOOL, haspattern_220410)(Tsym215822* s) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = isroutine_220396(s);
	if (!(LOC1)) goto LA2;
	LOC1 = !(((*(*(*s).ast).kindU.S6.sons->data[((NI) 1)]).kind == ((NU8) 1)));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, rawimportsymbol_272056)(Tcontext265020* c, Tsym215822* s) {
	Tsym215822* check;
	check = strtableget_222066((*(*c).importtable).symbols, (*s).name);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = !((check == NIM_NIL));
		if (!(LOC3)) goto LA4;
		LOC3 = !(((*check).Sup.id == (*s).Sup.id));
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!!(((258112 &(1U<<((NU)((*s).kind)&31U)))!=0))) goto LA9;
			incl_212832((&(*c).ambiguoussymbols), (*s).Sup.id);
			incl_212832((&(*c).ambiguoussymbols), (*check).Sup.id);
		}
		LA9: ;
	}
	LA5: ;
	strtableadd_222061((&(*(*c).importtable).symbols), s);
	{
		Ttype215828* etyp;
		if (!((*s).kind == ((NU8) 7))) goto LA13;
		etyp = (*s).typ;
		{
			NIM_BOOL LOC17;
			LOC17 = 0;
			LOC17 = ((*etyp).kind == ((NU8) 1) || (*etyp).kind == ((NU8) 14));
			if (!(LOC17)) goto LA18;
			LOC17 = !((((*s).flags &(1U<<((NU)(((NU8) 9))&31U)))!=0));
			LA18: ;
			if (!LOC17) goto LA19;
			{
				NI j_272135;
				NI HEX3Atmp_272191;
				NI LOC22;
				NI res_272194;
				j_272135 = 0;
				HEX3Atmp_272191 = 0;
				LOC22 = 0;
				LOC22 = sonslen_218351((*etyp).n);
				HEX3Atmp_272191 = (NI)(LOC22 - ((NI) 1));
				res_272194 = ((NI) 0);
				{
					while (1) {
						Tsym215822* e;
						Tidentiter222084 it;
						if (!(res_272194 <= HEX3Atmp_272191)) goto LA24;
						j_272135 = res_272194;
						e = (*(*(*etyp).n).kindU.S6.sons->data[j_272135]).kindU.S4.sym;
						{
							if (!!(((*e).kind == ((NU8) 19)))) goto LA27;
							internalerror_188100((*s).info, ((NimStringDesc*) &TMP3638));
						}
						LA27: ;
						memset((void*)(&it), 0, sizeof(it));
						check = initidentiter_222087((&it), (*(*c).importtable).symbols, (*e).name);
						{
							while (1) {
								if (!!((check == NIM_NIL))) goto LA30;
								{
									if (!((*check).Sup.id == (*e).Sup.id)) goto LA33;
									e = NIM_NIL;
									goto LA29;
								}
								LA33: ;
								check = nextidentiter_222093((&it), (*(*c).importtable).symbols);
							} LA30: ;
						} LA29: ;
						{
							if (!!((e == NIM_NIL))) goto LA37;
							rawimportsymbol_272056(c, e);
						}
						LA37: ;
						res_272194 += ((NI) 1);
					} LA24: ;
				}
			}
		}
		LA19: ;
	}
	goto LA11;
	LA13: ;
	{
		{
			if (!((*s).kind == ((NU8) 15))) goto LA42;
			addconverter_265440(c, s);
		}
		LA42: ;
		{
			NIM_BOOL LOC46;
			LOC46 = 0;
			LOC46 = haspattern_220410(s);
			if (!LOC46) goto LA47;
			addpattern_265445(c, s);
		}
		LA47: ;
	}
	LA11: ;
}

N_NIMCALL(void, importallsymbolsexcept_272260)(Tcontext265020* c, Tsym215822* frommod, Intset212035 exceptset) {
	Ttabiter222071 i;
	Tsym215822* s;
	memset((void*)(&i), 0, sizeof(i));
	s = inittabiter_222073((&i), (*frommod).kindU.S3.tab);
	{
		while (1) {
			if (!!((s == NIM_NIL))) goto LA2;
			{
				if (!!(((*s).kind == ((NU8) 6)))) goto LA5;
				{
					if (!!(((*s).kind == ((NU8) 19)))) goto LA9;
					{
						NimStringDesc* LOC15;
						if (!!(((21755776 &(1U<<((NU)((*s).kind)&31U)))!=0))) goto LA13;
						LOC15 = 0;
						LOC15 = rawNewString(reprEnum((*s).kind, (&NTI215435))->Sup.len + 18);
appendString(LOC15, ((NimStringDesc*) &TMP3637));
appendString(LOC15, reprEnum((*s).kind, (&NTI215435)));
						internalerror_188100((*s).info, LOC15);
					}
					LA13: ;
					{
						NIM_BOOL LOC18;
						NIM_BOOL LOC20;
						LOC18 = 0;
						LOC18 = isnil_212898(exceptset);
						if (LOC18) goto LA19;
						LOC20 = 0;
						LOC20 = contains_212811(exceptset, (*(*s).name).Sup.id);
						LOC18 = !(LOC20);
						LA19: ;
						if (!LOC18) goto LA21;
						rawimportsymbol_272056(c, s);
					}
					LA21: ;
				}
				LA9: ;
			}
			LA5: ;
			s = nextiter_222078((&i), (*frommod).kindU.S3.tab);
		} LA2: ;
	}
}

N_NIMCALL(Tnode215790*, evalimport_272001)(Tcontext265020* c, Tnode215790* n) {
	Tnode215790* result;
	Intset212035 emptyset;
	result = 0;
	result = n;
	memset((void*)(&emptyset), 0, sizeof(emptyset));
	{
		NI i_272510;
		NI HEX3Atmp_272527;
		NI LOC2;
		NI res_272530;
		i_272510 = 0;
		HEX3Atmp_272527 = 0;
		LOC2 = 0;
		LOC2 = sonslen_218351(n);
		HEX3Atmp_272527 = (NI)(LOC2 - ((NI) 1));
		res_272530 = ((NI) 0);
		{
			while (1) {
				Tsym215822* m;
				if (!(res_272530 <= HEX3Atmp_272527)) goto LA4;
				i_272510 = res_272530;
				m = myimportmodule_272474(c, (*n).kindU.S6.sons->data[i_272510]);
				{
					if (!!((m == NIM_NIL))) goto LA7;
					adddecl_270445(c, m);
					importallsymbolsexcept_272260(c, m, emptyset);
				}
				LA7: ;
				res_272530 += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(Tnode215790*, evalimportexcept_272585)(Tcontext265020* c, Tnode215790* n) {
	Tnode215790* result;
	Tsym215822* m;
	result = 0;
	result = n;
	checkminsonslen_265962(n, ((NI) 2));
	m = myimportmodule_272474(c, (*n).kindU.S6.sons->data[((NI) 0)]);
	{
		Intset212035 exceptset;
		if (!!((m == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 0)]), newsymnode_217234(m));
		adddecl_270445(c, m);
		memset((void*)(&exceptset), 0, sizeof(exceptset));
		chckNil((void*)(&exceptset));
		memset((void*)(&exceptset), 0, sizeof(exceptset));
		initintset_212885((&exceptset));
		{
			NI i_272617;
			NI HEX3Atmp_272622;
			NI LOC6;
			NI res_272625;
			i_272617 = 0;
			HEX3Atmp_272622 = 0;
			LOC6 = 0;
			LOC6 = sonslen_218351(n);
			HEX3Atmp_272622 = (NI)(LOC6 - ((NI) 1));
			res_272625 = ((NI) 1);
			{
				while (1) {
					Tident190012* ident;
					if (!(res_272625 <= HEX3Atmp_272622)) goto LA8;
					i_272617 = res_272625;
					ident = considerquotedident_270004((*n).kindU.S6.sons->data[i_272617]);
					incl_212832((&exceptset), (*ident).Sup.id);
					res_272625 += ((NI) 1);
				} LA8: ;
			}
		}
		importallsymbolsexcept_272260(c, m, exceptset);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, importsymbol_272198)(Tcontext265020* c, Tnode215790* n, Tsym215822* frommod) {
	Tident190012* ident;
	Tsym215822* s;
	ident = considerquotedident_270004(n);
	s = strtableget_222066((*frommod).kindU.S3.tab, ident);
	{
		if (!(s == NIM_NIL)) goto LA3;
		localerror_188080((*n).info, ((NU16) 63), (*ident).s);
	}
	goto LA1;
	LA3: ;
	{
		{
			if (!((*s).kind == ((NU8) 22))) goto LA8;
			loadstub_255825(s);
		}
		LA8: ;
		{
			if (!!(((21755776 &(1U<<((NU)((*s).kind)&31U)))!=0))) goto LA12;
			internalerror_188100((*n).info, ((NimStringDesc*) &TMP3640));
		}
		LA12: ;
		switch ((*s).kind) {
		case ((NU8) 12):
		case ((NU8) 17):
		case ((NU8) 16):
		case ((NU8) 14):
		case ((NU8) 13):
		case ((NU8) 15):
		{
			Tidentiter222084 it;
			Tsym215822* e;
			memset((void*)(&it), 0, sizeof(it));
			e = initidentiter_222087((&it), (*frommod).kindU.S3.tab, (*s).name);
			{
				while (1) {
					if (!!((e == NIM_NIL))) goto LA16;
					{
						if (!!(((*(*e).name).Sup.id == (*(*s).name).Sup.id))) goto LA19;
						internalerror_188100((*n).info, ((NimStringDesc*) &TMP3641));
					}
					LA19: ;
					rawimportsymbol_272056(c, e);
					e = nextidentiter_222093((&it), (*frommod).kindU.S3.tab);
				} LA16: ;
			}
		}
		break;
		default:
		{
			rawimportsymbol_272056(c, s);
		}
		break;
		}
	}
	LA1: ;
}

N_NIMCALL(Tnode215790*, evalfrom_272005)(Tcontext265020* c, Tnode215790* n) {
	Tnode215790* result;
	Tsym215822* m;
	result = 0;
	result = n;
	checkminsonslen_265962(n, ((NI) 2));
	m = myimportmodule_272474(c, (*n).kindU.S6.sons->data[((NI) 0)]);
	{
		if (!!((m == NIM_NIL))) goto LA3;
		asgnRefNoCycle((void**) (&(*n).kindU.S6.sons->data[((NI) 0)]), newsymnode_217234(m));
		adddecl_270445(c, m);
		{
			NI i_272565;
			NI HEX3Atmp_272578;
			NI LOC6;
			NI res_272581;
			i_272565 = 0;
			HEX3Atmp_272578 = 0;
			LOC6 = 0;
			LOC6 = sonslen_218351(n);
			HEX3Atmp_272578 = (NI)(LOC6 - ((NI) 1));
			res_272581 = ((NI) 1);
			{
				while (1) {
					if (!(res_272581 <= HEX3Atmp_272578)) goto LA8;
					i_272565 = res_272581;
					{
						if (!!(((*(*n).kindU.S6.sons->data[i_272565]).kind == ((NU8) 23)))) goto LA11;
						importsymbol_272198(c, (*n).kindU.S6.sons->data[i_272565], m);
					}
					LA11: ;
					res_272581 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, importallsymbols_272322)(Tcontext265020* c, Tsym215822* frommod) {
	Intset212035 exceptset;
	memset((void*)(&exceptset), 0, sizeof(exceptset));
	importallsymbolsexcept_272260(c, frommod, exceptset);
}
NIM_EXTERNC N_NOINLINE(void, compiler_importerInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_importerDatInit000)(void) {
}

