/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode214790 Tnode214790;
typedef struct Tcontext264020 Tcontext264020;
typedef struct Ttype214828 Ttype214828;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Tsym214822 Tsym214822;
typedef struct Tident189012 Tident189012;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
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
typedef struct Tscope214816 Tscope214816;
typedef struct Tpasscontext261002 Tpasscontext261002;
typedef struct Tproccon264008 Tproccon264008;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Intset211035 Intset211035;
typedef struct Trunk211031 Trunk211031;
typedef struct Trunkseq211033 Trunkseq211033;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tidtable214840 Tidtable214840;
typedef struct Tidpairseq214838 Tidpairseq214838;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Tctx263036 Tctx263036;
typedef struct TY264140 TY264140;
typedef struct Ttabiter221071 Ttabiter221071;
typedef struct TY214925 TY214925;
typedef struct Tlib214808 Tlib214808;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct Tidpair214836 Tidpair214836;
typedef struct TY263242 TY263242;
typedef struct TY183093 TY183093;
typedef struct PprocHEX3Aobjecttype263221 PprocHEX3Aobjecttype263221;
typedef struct TY263261 TY263261;
typedef struct Tinstantiationpair264010 Tinstantiationpair264010;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct TY263222 TY263222;
typedef struct TY263227 TY263227;
typedef struct TY263262 TY263262;
typedef struct Vmargs263030 Vmargs263030;
typedef struct TY214913 TY214913;
typedef struct Tblock263018 Tblock263018;
typedef struct TY263202 TY263202;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode214790*, Transformation421004) (Tcontext264020* c, Tnode214790* n);
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode214790  {
Ttype214828* typ;
Tlineinfo182337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym214822* sym;
} S4;
struct {Tident189012* ident;
} S5;
struct {Tnodeseq214784* sons;
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
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tloc214804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype214828* t;
Ropeobj169006* r;
Ropeobj169006* heaproot;
};
struct  Ttype214828  {
  Tidobj189006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq214824* sons;
Tnode214790* n;
Tsym214822* owner;
Tsym214822* sym;
Tsym214822* destructor;
Tsym214822* deepcopy;
Tsym214822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc214804 loc;
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
struct  Tpasscontext261002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset211035  {
NI counter;
NI max;
Trunk211031* head;
Trunkseq211033* data;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
};
struct  Tidtable214840  {
NI counter;
Tidpairseq214838* data;
};
typedef N_NIMCALL_PTR(Tnode214790*, TY264071) (Tcontext264020* c, Tnode214790* n);
typedef N_NIMCALL_PTR(Tnode214790*, TY264076) (Tcontext264020* c, Tnode214790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode214790*, TY264084) (Tcontext264020* c, Tnode214790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode214790*, TY264092) (Tcontext264020* c, Tnode214790* n);
typedef N_NIMCALL_PTR(Tnode214790*, TY264097) (Tcontext264020* c, Tnode214790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode214790*, TY264105) (Tcontext264020* c, Tnode214790* n);
typedef N_NIMCALL_PTR(Tnode214790*, TY264110) (Tcontext264020* c, Tnode214790* n, Tnode214790* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype214828*, TY264117) (Tcontext264020* c, Tnode214790* n, Ttype214828* prev);
typedef struct {
N_NIMCALL_PTR(Tnode214790*, ClPrc) (Tcontext264020* c, Tidtable214840 pt, Tnode214790* n, void* ClEnv);
void* ClEnv;
} TY264123;
typedef struct {
N_NIMCALL_PTR(Tsym214822*, ClPrc) (Tcontext264020* c, Tsym214822* fn, Tidtable214840 pt, Tlineinfo182337 info, void* ClEnv);
void* ClEnv;
} TY264129;
struct  Tstrtable214794  {
NI counter;
Tsymseq214792* data;
};
typedef N_NIMCALL_PTR(Tsym214822*, TY264145) (Tcontext264020* c, Tsym214822* dc, Ttype214828* t, Tlineinfo182337 info, NU8 op);
struct  Tcontext264020  {
  Tpasscontext261002 Sup;
Tsym214822* module;
Tscope214816* currentscope;
Tscope214816* importtable;
Tscope214816* toplevelscope;
Tproccon264008* p;
Tsymseq214792* friendmodules;
NI instcounter;
Intset211035 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq214792* converters;
Tsymseq214792* patterns;
Tlinkedlist135016 optionstack;
Tidtable214840 symmapping;
Tlinkedlist135016 libs;
TY264071 semconstexpr;
TY264076 semexpr;
TY264084 semtryexpr;
TY264092 semtryconstexpr;
TY264097 semoperand;
TY264105 semconstboolexpr;
TY264110 semoverloadedcall;
TY264117 semtypenode;
TY264123 seminferredlambda;
TY264129 semgenerateinstance;
Intset211035 includedfiles;
Tstrtable214794 userpragmas;
Tctx263036* evalcontext;
Intset211035 unknownidents;
TY264140* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY264145 insttypeboundop;
};
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
};
struct  Ttabiter221071  {
NI h;
};
struct  Tsym214822  {
  Tidobj189006 Sup;
NU8 kind;
union{
struct {Ttypeseq214824* typeinstcache;
Tscope214816* typscope;
} S1;
struct {TY214925* procinstcache;
Tsym214822* gcunsafetyreason;
} S2;
struct {TY214925* usedgenerics;
Tstrtable214794 tab;
} S3;
struct {Tsym214822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype214828* typ;
Tident189012* name;
Tlineinfo182337 info;
Tsym214822* owner;
NU32 flags;
Tnode214790* ast;
NU32 options;
NI position;
NI offset;
Tloc214804 loc;
Tlib214808* annex;
Tnode214790* constraint;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
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
struct  Ropeobj169006  {
  TNimObject Sup;
Ropeobj169006* left;
Ropeobj169006* right;
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
struct  Tproccon264008  {
Tsym214822* owner;
Tsym214822* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon264008* next;
NIM_BOOL wasforwarded;
Tnode214790* bracketexpr;
};
struct  Trunk211031  {
Trunk211031* next;
NI key;
TY29618 bits;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tidpair214836  {
Tidobj189006* key;
TNimObject* val;
};
struct  Tctx263036  {
  Tpasscontext261002 Sup;
TY263242* code;
TY183093* debug;
Tnode214790* globals;
Tnode214790* constants;
Ttypeseq214824* types;
Tnode214790* currentexceptiona;
Tnode214790* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype263221* prc;
Tsym214822* module;
Tnode214790* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo182337 comesfromheuristic;
TY263261* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair264010  {
Tsym214822* genericsym;
Tinstantiation214812* inst;
};
struct  Tlib214808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj169006* name;
Tnode214790* path;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct TY263227 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY263227 TY263230[256];
struct  PprocHEX3Aobjecttype263221  {
TY263222* blocks;
Tsym214822* sym;
TY263230 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs263030* args, void* ClEnv);
void* ClEnv;
} Vmcallback263032;
struct TY263262 {
NimStringDesc* Field0;
Vmcallback263032 Field1;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
};
struct  Tblock263018  {
Tsym214822* label;
TY263202* fixups;
};
struct  Vmargs263030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode214790* currentexception;
};
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq214824 {
  TGenericSeq Sup;
  Ttype214828* data[SEQ_DECL_SIZE];
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct Trunkseq211033 {
  TGenericSeq Sup;
  Trunk211031* data[SEQ_DECL_SIZE];
};
struct Tidpairseq214838 {
  TGenericSeq Sup;
  Tidpair214836 data[SEQ_DECL_SIZE];
};
struct TY264140 {
  TGenericSeq Sup;
  Tinstantiationpair264010 data[SEQ_DECL_SIZE];
};
struct TY214925 {
  TGenericSeq Sup;
  Tinstantiation214812* data[SEQ_DECL_SIZE];
};
struct TY263242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY183093 {
  TGenericSeq Sup;
  Tlineinfo182337 data[SEQ_DECL_SIZE];
};
struct TY263261 {
  TGenericSeq Sup;
  TY263262 data[SEQ_DECL_SIZE];
};
struct TY263222 {
  TGenericSeq Sup;
  Tblock263018 data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY263202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registerplugin_421091)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation421004 t);
N_NIMCALL(Tnode214790*, semlocals_422005)(Tcontext264020* c, Tnode214790* n);
N_NIMCALL(Ttype214828*, newtypes_264185)(NU8 kind, Tcontext264020* c);
N_NIMCALL(Tnode214790*, newnodeit_216801)(NU8 kind, Tlineinfo182337 info, Ttype214828* typ);
N_NIMCALL(Tnode214790*, newnodei_216248)(NU8 kind, Tlineinfo182337 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(Tsym214822*, inittabiter_221073)(Ttabiter221071* ti, Tstrtable214794 tab);
N_NIMCALL(Ttype214828*, skiptypes_218113)(Ttype214828* t, NU64 kinds);
N_NIMCALL(Tsym214822*, newsym_215684)(NU8 symkind, Tident189012* name, Tsym214822* owner, Tlineinfo182337 info);
N_NIMCALL(Tsym214822*, getcurrowner_264210)(void);
N_NIMCALL(void, addson_216807)(Tnode214790* father, Tnode214790* son);
N_NIMCALL(Tnode214790*, newsymnode_216234)(Tsym214822* sym);
N_NIMCALL(void, addsonskipintlit_258678)(Ttype214828* father, Ttype214828* son);
N_NIMCALL(Tnode214790*, newsymnode_216241)(Tsym214822* sym, Tlineinfo182337 info);
static N_INLINE(Tnode214790*, newderef_376006)(Tnode214790* n);
N_NIMCALL(void, add_215114)(Tnode214790* father, Tnode214790* son);
N_NIMCALL(Tsym214822*, nextiter_221078)(Ttabiter221071* ti, Tstrtable214794 tab);
STRING_LITERAL(TMP1044, "stdlib", 6);
STRING_LITERAL(TMP1045, "system", 6);
STRING_LITERAL(TMP1046, "locals", 6);
extern Gcheap49818 gch_49859;

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

static N_INLINE(Tnode214790*, newderef_376006)(Tnode214790* n) {
	Tnode214790* result;
	result = 0;
	result = newnodeit_216801(((NU8) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	addson_216807(result, n);
	return result;
}

N_NIMCALL(Tnode214790*, semlocals_422005)(Tcontext264020* c, Tnode214790* n) {
	Tnode214790* result;
	NI counter;
	Ttype214828* tupletype;
	result = 0;
	counter = ((NI) 0);
	tupletype = newtypes_264185(((NU8) 18), c);
	result = newnodeit_216801(((NU8) 37), (*n).info, tupletype);
	asgnRefNoCycle((void**) (&(*tupletype).n), newnodei_216248(((NU8) 138), (*n).info));
	{
		Tscope214816* scope_422012;
		Tscope214816* HEX3Atmp_422085;
		Tscope214816* current_422088;
		scope_422012 = 0;
		HEX3Atmp_422085 = 0;
		HEX3Atmp_422085 = (*c).currentscope;
		current_422088 = HEX3Atmp_422085;
		{
			while (1) {
				if (!!((current_422088 == NIM_NIL))) goto LA3;
				scope_422012 = current_422088;
				{
					if (!(scope_422012 == (*c).toplevelscope)) goto LA6;
					goto LA1;
				}
				LA6: ;
				{
					Tsym214822* it_422024;
					Tstrtable214794 HEX3Atmp_422079;
					Ttabiter221071 it_422082;
					Tsym214822* s_422084;
					it_422024 = 0;
					memset((void*)(&HEX3Atmp_422079), 0, sizeof(HEX3Atmp_422079));
					HEX3Atmp_422079.counter = (*scope_422012).symbols.counter;
					HEX3Atmp_422079.data = (*scope_422012).symbols.data;
					memset((void*)(&it_422082), 0, sizeof(it_422082));
					s_422084 = inittabiter_221073((&it_422082), HEX3Atmp_422079);
					{
						while (1) {
							if (!!((s_422084 == NIM_NIL))) goto LA10;
							it_422024 = s_422084;
							{
								NIM_BOOL LOC13;
								Ttype214828* LOC15;
								Tsym214822* field;
								Tsym214822* LOC18;
								Tnode214790* LOC19;
								Tnode214790* a;
								LOC13 = 0;
								LOC13 = ((1051400 &(1U<<((NU)((*it_422024).kind)&31U)))!=0);
								if (!(LOC13)) goto LA14;
								LOC15 = 0;
								LOC15 = skiptypes_218113((*it_422024).typ, 8390656);
								LOC13 = !(((*LOC15).kind == ((NU8) 48) || (*LOC15).kind == ((NU8) 27) || (*LOC15).kind == ((NU8) 8) || (*LOC15).kind == ((NU8) 59) || (*LOC15).kind == ((NU8) 6) || (*LOC15).kind == ((NU8) 7) || (*LOC15).kind == ((NU8) 3)));
								LA14: ;
								if (!LOC13) goto LA16;
								LOC18 = 0;
								LOC18 = getcurrowner_264210();
								field = newsym_215684(((NU8) 18), (*it_422024).name, LOC18, (*n).info);
								asgnRefNoCycle((void**) (&(*field).typ), skiptypes_218113((*it_422024).typ, 8390656));
								(*field).position = counter;
								counter += ((NI) 1);
								LOC19 = 0;
								LOC19 = newsymnode_216234(field);
								addson_216807((*tupletype).n, LOC19);
								addsonskipintlit_258678(tupletype, (*field).typ);
								a = newsymnode_216241(it_422024, (*result).info);
								{
									Ttype214828* LOC22;
									LOC22 = 0;
									LOC22 = skiptypes_218113((*it_422024).typ, 2048);
									if (!((*LOC22).kind == ((NU8) 23))) goto LA23;
									a = newderef_376006(a);
								}
								LA23: ;
								add_215114(result, a);
							}
							LA16: ;
							s_422084 = nextiter_221078((&it_422082), HEX3Atmp_422079);
						} LA10: ;
					}
				}
				current_422088 = (*current_422088).parent;
			} LA3: ;
		}
	} LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_localsInit000)(void) {
	registerplugin_421091(((NimStringDesc*) &TMP1044), ((NimStringDesc*) &TMP1045), ((NimStringDesc*) &TMP1046), semlocals_422005);
}

NIM_EXTERNC N_NOINLINE(void, compiler_localsDatInit000)(void) {
}

