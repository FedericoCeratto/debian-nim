/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode215790 Tnode215790;
typedef struct Tcontext265020 Tcontext265020;
typedef struct Ttype215828 Ttype215828;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct Tsym215822 Tsym215822;
typedef struct Tident190012 Tident190012;
typedef struct Tnodeseq215784 Tnodeseq215784;
typedef struct Tidobj190006 Tidobj190006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq215824 Ttypeseq215824;
typedef struct Tloc215804 Tloc215804;
typedef struct Ropeobj170006 Ropeobj170006;
typedef struct Cell47504 Cell47504;
typedef struct Cellseq47520 Cellseq47520;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47516 Cellset47516;
typedef struct Pagedesc47512 Pagedesc47512;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Tscope215816 Tscope215816;
typedef struct Tpasscontext262002 Tpasscontext262002;
typedef struct Tproccon265008 Tproccon265008;
typedef struct Tsymseq215792 Tsymseq215792;
typedef struct Intset212035 Intset212035;
typedef struct Trunk212031 Trunk212031;
typedef struct Trunkseq212033 Trunkseq212033;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tidtable215840 Tidtable215840;
typedef struct Tidpairseq215838 Tidpairseq215838;
typedef struct Tstrtable215794 Tstrtable215794;
typedef struct Tctx264036 Tctx264036;
typedef struct TY265140 TY265140;
typedef struct Ttabiter222071 Ttabiter222071;
typedef struct TY215925 TY215925;
typedef struct Tlib215808 Tlib215808;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct Tidpair215836 Tidpair215836;
typedef struct TY264242 TY264242;
typedef struct TY184093 TY184093;
typedef struct PprocHEX3Aobjecttype264221 PprocHEX3Aobjecttype264221;
typedef struct TY264261 TY264261;
typedef struct Tinstantiationpair265010 Tinstantiationpair265010;
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct TY264222 TY264222;
typedef struct TY264227 TY264227;
typedef struct TY264262 TY264262;
typedef struct Vmargs264030 Vmargs264030;
typedef struct TY215913 TY215913;
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
struct  Tloc215804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype215828* t;
Ropeobj170006* r;
Ropeobj170006* heaproot;
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
struct  Cell47504  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47520  {
NI len;
NI cap;
Cell47504** d;
};
struct  Cellset47516  {
NI counter;
NI max;
Pagedesc47512* head;
Pagedesc47512** data;
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
Cellseq47520 zct;
Cellseq47520 decstack;
Cellset47516 cycleroots;
Cellseq47520 tempstack;
NI recgclock;
Memregion29687 region;
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
struct  Tstrtable215794  {
NI counter;
Tsymseq215792* data;
};
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
struct  Tscope215816  {
NI depthlevel;
Tstrtable215794 symbols;
Tnodeseq215784* usingsyms;
Tscope215816* parent;
};
struct  Ttabiter222071  {
NI h;
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
struct  Ropeobj170006  {
  TNimObject Sup;
Ropeobj170006* left;
Ropeobj170006* right;
NI length;
NimStringDesc* data;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29618[16];
struct  Pagedesc47512  {
Pagedesc47512* next;
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
struct  Trunk212031  {
Trunk212031* next;
NI key;
TY29618 bits;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
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
struct  Tlib215808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj170006* name;
Tnode215790* path;
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
struct  Tinstantiation215812  {
Tsym215822* sym;
Ttypeseq215824* concretetypes;
TY215913* usedby;
NI compilesid;
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
struct TY215925 {
  TGenericSeq Sup;
  Tinstantiation215812* data[SEQ_DECL_SIZE];
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
struct TY264222 {
  TGenericSeq Sup;
  Tblock264018 data[SEQ_DECL_SIZE];
};
struct TY215913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY264202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registerplugin_422091)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation422004 t);
N_NIMCALL(Tnode215790*, semlocals_423005)(Tcontext265020* c, Tnode215790* n);
N_NIMCALL(Ttype215828*, newtypes_265185)(NU8 kind, Tcontext265020* c);
N_NIMCALL(Tnode215790*, newnodeit_217801)(NU8 kind, Tlineinfo183337 info, Ttype215828* typ);
N_NIMCALL(Tnode215790*, newnodei_217248)(NU8 kind, Tlineinfo183337 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47504*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47504* c);
N_NOINLINE(void, addzct_51417)(Cellseq47520* s, Cell47504* c);
N_NIMCALL(Tsym215822*, inittabiter_222073)(Ttabiter222071* ti, Tstrtable215794 tab);
N_NIMCALL(Ttype215828*, skiptypes_219113)(Ttype215828* t, NU64 kinds);
N_NIMCALL(Tsym215822*, newsym_216684)(NU8 symkind, Tident190012* name, Tsym215822* owner, Tlineinfo183337 info);
N_NIMCALL(Tsym215822*, getcurrowner_265210)(void);
N_NIMCALL(void, addson_217807)(Tnode215790* father, Tnode215790* son);
N_NIMCALL(Tnode215790*, newsymnode_217234)(Tsym215822* sym);
N_NIMCALL(void, addsonskipintlit_259678)(Ttype215828* father, Ttype215828* son);
N_NIMCALL(Tnode215790*, newsymnode_217241)(Tsym215822* sym, Tlineinfo183337 info);
static N_INLINE(Tnode215790*, newderef_377006)(Tnode215790* n);
N_NIMCALL(void, add_216114)(Tnode215790* father, Tnode215790* son);
N_NIMCALL(Tsym215822*, nextiter_222078)(Ttabiter222071* ti, Tstrtable215794 tab);
STRING_LITERAL(TMP1046, "stdlib", 6);
STRING_LITERAL(TMP1047, "system", 6);
STRING_LITERAL(TMP1048, "locals", 6);
extern Gcheap49818 gch_49859;

static N_INLINE(Cell47504*, usrtocell_51440)(void* usr) {
	Cell47504* result;
	result = 0;
	result = ((Cell47504*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47504))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47504* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47504* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47504* c;
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

static N_INLINE(Tnode215790*, newderef_377006)(Tnode215790* n) {
	Tnode215790* result;
	result = 0;
	result = newnodeit_217801(((NU8) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	addson_217807(result, n);
	return result;
}

N_NIMCALL(Tnode215790*, semlocals_423005)(Tcontext265020* c, Tnode215790* n) {
	Tnode215790* result;
	NI counter;
	Ttype215828* tupletype;
	result = 0;
	counter = ((NI) 0);
	tupletype = newtypes_265185(((NU8) 18), c);
	result = newnodeit_217801(((NU8) 37), (*n).info, tupletype);
	asgnRefNoCycle((void**) (&(*tupletype).n), newnodei_217248(((NU8) 138), (*n).info));
	{
		Tscope215816* scope_423012;
		Tscope215816* HEX3Atmp_423085;
		Tscope215816* current_423088;
		scope_423012 = 0;
		HEX3Atmp_423085 = 0;
		HEX3Atmp_423085 = (*c).currentscope;
		current_423088 = HEX3Atmp_423085;
		{
			while (1) {
				if (!!((current_423088 == NIM_NIL))) goto LA3;
				scope_423012 = current_423088;
				{
					if (!(scope_423012 == (*c).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym215822* it_423024;
					Tstrtable215794 HEX3Atmp_423079;
					Ttabiter222071 it_423082;
					Tsym215822* s_423084;
					it_423024 = 0;
					memset((void*)(&HEX3Atmp_423079), 0, sizeof(HEX3Atmp_423079));
					HEX3Atmp_423079.counter = (*scope_423012).symbols.counter;
					HEX3Atmp_423079.data = (*scope_423012).symbols.data;
					memset((void*)(&it_423082), 0, sizeof(it_423082));
					s_423084 = inittabiter_222073((&it_423082), HEX3Atmp_423079);
					{
						while (1) {
							if (!!((s_423084 == NIM_NIL))) goto LA10;
							it_423024 = s_423084;
							{
								NIM_BOOL LOC13;
								Ttype215828* LOC15;
								Tsym215822* field;
								Tsym215822* LOC18;
								Tnode215790* LOC19;
								Tnode215790* a;
								LOC13 = 0;
								LOC13 = ((1051400 &(1U<<((NU)((*it_423024).kind)&31U)))!=0);
								if (!(LOC13)) goto LA14;
								LOC15 = 0;
								LOC15 = skiptypes_219113((*it_423024).typ, 8390656);
								LOC13 = !(((*LOC15).kind == ((NU8) 48) || (*LOC15).kind == ((NU8) 27) || (*LOC15).kind == ((NU8) 8) || (*LOC15).kind == ((NU8) 59) || (*LOC15).kind == ((NU8) 6) || (*LOC15).kind == ((NU8) 7) || (*LOC15).kind == ((NU8) 3)));
								LA14: ;
								if (!LOC13) goto LA16;
								LOC18 = 0;
								LOC18 = getcurrowner_265210();
								field = newsym_216684(((NU8) 18), (*it_423024).name, LOC18, (*n).info);
								asgnRefNoCycle((void**) (&(*field).typ), skiptypes_219113((*it_423024).typ, 8390656));
								(*field).position = counter;
								counter += ((NI) 1);
								LOC19 = 0;
								LOC19 = newsymnode_217234(field);
								addson_217807((*tupletype).n, LOC19);
								addsonskipintlit_259678(tupletype, (*field).typ);
								a = newsymnode_217241(it_423024, (*result).info);
								{
									Ttype215828* LOC22;
									LOC22 = 0;
									LOC22 = skiptypes_219113((*it_423024).typ, 2048);
									if (!((*LOC22).kind == ((NU8) 23))) goto LA23;
									a = newderef_377006(a);
								}
								LA23: ;
								add_216114(result, a);
							}
							LA16: ;
							s_423084 = nextiter_222078((&it_423082), HEX3Atmp_423079);
						} LA10: ;
					}
				}
				current_423088 = (*current_423088).parent;
			} LA3: ;
		}
	} LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit000)(void) {
	registerplugin_422091(((NimStringDesc*) &TMP1046), ((NimStringDesc*) &TMP1047), ((NimStringDesc*) &TMP1048), semlocals_423005);
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit000)(void) {
}

