/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype420010 PluginHEX3Aobjecttype420010;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode213790 Tnode213790;
typedef struct Tcontext263020 Tcontext263020;
typedef struct Tident188012 Tident188012;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47705 Cell47705;
typedef struct Cellseq47721 Cellseq47721;
typedef struct Gcheap50018 Gcheap50018;
typedef struct Gcstack50016 Gcstack50016;
typedef struct Cellset47717 Cellset47717;
typedef struct Pagedesc47713 Pagedesc47713;
typedef struct Memregion29887 Memregion29887;
typedef struct Smallchunk29839 Smallchunk29839;
typedef struct Llchunk29881 Llchunk29881;
typedef struct Bigchunk29841 Bigchunk29841;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29885 Avlnode29885;
typedef struct Gcstat50014 Gcstat50014;
typedef struct Tsym213822 Tsym213822;
typedef struct Tidobj188006 Tidobj188006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq213824 Ttypeseq213824;
typedef struct Tscope213816 Tscope213816;
typedef struct TY213925 TY213925;
typedef struct Tstrtable213794 Tstrtable213794;
typedef struct Tsymseq213792 Tsymseq213792;
typedef struct Ttype213828 Ttype213828;
typedef struct Tlineinfo181337 Tlineinfo181337;
typedef struct Tloc213804 Tloc213804;
typedef struct Ropeobj168006 Ropeobj168006;
typedef struct Tlib213808 Tlib213808;
typedef struct Tnodeseq213784 Tnodeseq213784;
typedef struct Tpasscontext260002 Tpasscontext260002;
typedef struct Tproccon263008 Tproccon263008;
typedef struct Intset210035 Intset210035;
typedef struct Trunk210031 Trunk210031;
typedef struct Trunkseq210033 Trunkseq210033;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tidtable213840 Tidtable213840;
typedef struct Tidpairseq213838 Tidpairseq213838;
typedef struct Tctx262036 Tctx262036;
typedef struct TY263140 TY263140;
typedef struct Basechunk29837 Basechunk29837;
typedef struct Freecell29829 Freecell29829;
typedef struct Tinstantiation213812 Tinstantiation213812;
typedef struct Tidpair213836 Tidpair213836;
typedef struct TY262242 TY262242;
typedef struct TY182093 TY182093;
typedef struct PprocHEX3Aobjecttype262221 PprocHEX3Aobjecttype262221;
typedef struct TY262261 TY262261;
typedef struct Tinstantiationpair263010 Tinstantiationpair263010;
typedef struct TY213913 TY213913;
typedef struct TY262222 TY262222;
typedef struct TY262227 TY262227;
typedef struct TY262262 TY262262;
typedef struct Vmargs262030 Vmargs262030;
typedef struct Tblock262018 Tblock262018;
typedef struct TY262202 TY262202;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tnode213790*, Transformation420004) (Tcontext263020* c, Tnode213790* n);
struct  PluginHEX3Aobjecttype420010  {
Tident188012* fn;
Tident188012* module;
Tident188012* package;
Transformation420004 t;
PluginHEX3Aobjecttype420010* next;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47705  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47721  {
NI len;
NI cap;
Cell47705** d;
};
struct  Cellset47717  {
NI counter;
NI max;
Pagedesc47713* head;
Pagedesc47713** data;
};
typedef Smallchunk29839* TY29902[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29887  {
NI minlargeobj;
NI maxlargeobj;
TY29902 freesmallchunks;
Llchunk29881* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29841* freechunkslist;
Intset29814 chunkstarts;
Avlnode29885* root;
Avlnode29885* deleted;
Avlnode29885* last;
Avlnode29885* freeavlnodes;
};
struct  Gcstat50014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap50018  {
Gcstack50016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47721 zct;
Cellseq47721 decstack;
Cellset47717 cycleroots;
Cellseq47721 tempstack;
NI recgclock;
Memregion29887 region;
Gcstat50014 stat;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj188006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable213794  {
NI counter;
Tsymseq213792* data;
};
struct  Tlineinfo181337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc213804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype213828* t;
Ropeobj168006* r;
Ropeobj168006* heaproot;
};
struct  Tsym213822  {
  Tidobj188006 Sup;
NU8 kind;
union{
struct {Ttypeseq213824* typeinstcache;
Tscope213816* typscope;
} S1;
struct {TY213925* procinstcache;
Tsym213822* gcunsafetyreason;
} S2;
struct {TY213925* usedgenerics;
Tstrtable213794 tab;
} S3;
struct {Tsym213822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype213828* typ;
Tident188012* name;
Tlineinfo181337 info;
Tsym213822* owner;
NU32 flags;
Tnode213790* ast;
NU32 options;
NI position;
NI offset;
Tloc213804 loc;
Tlib213808* annex;
Tnode213790* constraint;
};
struct  Tident188012  {
  Tidobj188006 Sup;
NimStringDesc* s;
Tident188012* next;
NI h;
};
struct  Tnode213790  {
Ttype213828* typ;
Tlineinfo181337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym213822* sym;
} S4;
struct {Tident188012* ident;
} S5;
struct {Tnodeseq213784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tpasscontext260002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Intset210035  {
NI counter;
NI max;
Trunk210031* head;
Trunkseq210033* data;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
};
struct  Tidtable213840  {
NI counter;
Tidpairseq213838* data;
};
typedef N_NIMCALL_PTR(Tnode213790*, TY263071) (Tcontext263020* c, Tnode213790* n);
typedef N_NIMCALL_PTR(Tnode213790*, TY263076) (Tcontext263020* c, Tnode213790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode213790*, TY263084) (Tcontext263020* c, Tnode213790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode213790*, TY263092) (Tcontext263020* c, Tnode213790* n);
typedef N_NIMCALL_PTR(Tnode213790*, TY263097) (Tcontext263020* c, Tnode213790* n, NU16 flags);
typedef N_NIMCALL_PTR(Tnode213790*, TY263105) (Tcontext263020* c, Tnode213790* n);
typedef N_NIMCALL_PTR(Tnode213790*, TY263110) (Tcontext263020* c, Tnode213790* n, Tnode213790* norig, NU32 filter);
typedef N_NIMCALL_PTR(Ttype213828*, TY263117) (Tcontext263020* c, Tnode213790* n, Ttype213828* prev);
typedef struct {
N_NIMCALL_PTR(Tnode213790*, ClPrc) (Tcontext263020* c, Tidtable213840 pt, Tnode213790* n, void* ClEnv);
void* ClEnv;
} TY263123;
typedef struct {
N_NIMCALL_PTR(Tsym213822*, ClPrc) (Tcontext263020* c, Tsym213822* fn, Tidtable213840 pt, Tlineinfo181337 info, void* ClEnv);
void* ClEnv;
} TY263129;
typedef N_NIMCALL_PTR(Tsym213822*, TY263145) (Tcontext263020* c, Tsym213822* dc, Ttype213828* t, Tlineinfo181337 info, NU8 op);
struct  Tcontext263020  {
  Tpasscontext260002 Sup;
Tsym213822* module;
Tscope213816* currentscope;
Tscope213816* importtable;
Tscope213816* toplevelscope;
Tproccon263008* p;
Tsymseq213792* friendmodules;
NI instcounter;
Intset210035 ambiguoussymbols;
NI intypeclass;
NI ingenericcontext;
NI inunrolledcontext;
NI compilescontextid;
NI compilescontextidgenerator;
NI ingenericinst;
Tsymseq213792* converters;
Tsymseq213792* patterns;
Tlinkedlist135016 optionstack;
Tidtable213840 symmapping;
Tlinkedlist135016 libs;
TY263071 semconstexpr;
TY263076 semexpr;
TY263084 semtryexpr;
TY263092 semtryconstexpr;
TY263097 semoperand;
TY263105 semconstboolexpr;
TY263110 semoverloadedcall;
TY263117 semtypenode;
TY263123 seminferredlambda;
TY263129 semgenerateinstance;
Intset210035 includedfiles;
Tstrtable213794 userpragmas;
Tctx262036* evalcontext;
Intset210035 unknownidents;
TY263140* generics;
NI lastgenericidx;
NI hloloopdetector;
NI inparallelstmt;
TY263145 insttypeboundop;
};
struct  Gcstack50016  {
Gcstack50016* prev;
Gcstack50016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29818[16];
struct  Pagedesc47713  {
Pagedesc47713* next;
NI key;
TY29818 bits;
};
struct  Basechunk29837  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29839  {
  Basechunk29837 Sup;
Smallchunk29839* next;
Smallchunk29839* prev;
Freecell29829* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29881  {
NI size;
NI acc;
Llchunk29881* next;
};
struct  Bigchunk29841  {
  Basechunk29837 Sup;
Bigchunk29841* next;
Bigchunk29841* prev;
NI align;
NF data;
};
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29818 bits;
};
typedef Avlnode29885* TY29892[2];
struct  Avlnode29885  {
TY29892 link;
NI key;
NI upperbound;
NI level;
};
struct  Tscope213816  {
NI depthlevel;
Tstrtable213794 symbols;
Tnodeseq213784* usingsyms;
Tscope213816* parent;
};
struct  Ttype213828  {
  Tidobj188006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq213824* sons;
Tnode213790* n;
Tsym213822* owner;
Tsym213822* sym;
Tsym213822* destructor;
Tsym213822* deepcopy;
Tsym213822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc213804 loc;
};
struct  Ropeobj168006  {
  TNimObject Sup;
Ropeobj168006* left;
Ropeobj168006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib213808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj168006* name;
Tnode213790* path;
};
struct  Tproccon263008  {
Tsym213822* owner;
Tsym213822* resultsym;
NI nestedloopcounter;
NI nestedblockcounter;
NI intrystmt;
Tproccon263008* next;
NIM_BOOL wasforwarded;
Tnode213790* bracketexpr;
};
struct  Trunk210031  {
Trunk210031* next;
NI key;
TY29818 bits;
};
struct  Tidpair213836  {
Tidobj188006* key;
TNimObject* val;
};
struct  Tctx262036  {
  Tpasscontext260002 Sup;
TY262242* code;
TY182093* debug;
Tnode213790* globals;
Tnode213790* constants;
Ttypeseq213824* types;
Tnode213790* currentexceptiona;
Tnode213790* currentexceptionb;
NI exceptioninstr;
PprocHEX3Aobjecttype262221* prc;
Tsym213822* module;
Tnode213790* callsite;
NU8 mode;
NU8 features;
NIM_BOOL traceactive;
NI loopiterations;
Tlineinfo181337 comesfromheuristic;
TY262261* callbacks;
NimStringDesc* errorflag;
};
struct  Tinstantiationpair263010  {
Tsym213822* genericsym;
Tinstantiation213812* inst;
};
struct  Freecell29829  {
Freecell29829* next;
NI zerofield;
};
struct  Tinstantiation213812  {
Tsym213822* sym;
Ttypeseq213824* concretetypes;
TY213913* usedby;
NI compilesid;
};
struct TY262227 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY262227 TY262230[256];
struct  PprocHEX3Aobjecttype262221  {
TY262222* blocks;
Tsym213822* sym;
TY262230 slots;
NI maxslots;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Vmargs262030* args, void* ClEnv);
void* ClEnv;
} Vmcallback262032;
struct TY262262 {
NimStringDesc* Field0;
Vmcallback262032 Field1;
};
struct  Tblock262018  {
Tsym213822* label;
TY262202* fixups;
};
struct  Vmargs262030  {
NI ra;
NI rb;
NI rc;
void* slots;
Tnode213790* currentexception;
};
struct Ttypeseq213824 {
  TGenericSeq Sup;
  Ttype213828* data[SEQ_DECL_SIZE];
};
struct TY213925 {
  TGenericSeq Sup;
  Tinstantiation213812* data[SEQ_DECL_SIZE];
};
struct Tsymseq213792 {
  TGenericSeq Sup;
  Tsym213822* data[SEQ_DECL_SIZE];
};
struct Tnodeseq213784 {
  TGenericSeq Sup;
  Tnode213790* data[SEQ_DECL_SIZE];
};
struct Trunkseq210033 {
  TGenericSeq Sup;
  Trunk210031* data[SEQ_DECL_SIZE];
};
struct Tidpairseq213838 {
  TGenericSeq Sup;
  Tidpair213836 data[SEQ_DECL_SIZE];
};
struct TY263140 {
  TGenericSeq Sup;
  Tinstantiationpair263010 data[SEQ_DECL_SIZE];
};
struct TY262242 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY182093 {
  TGenericSeq Sup;
  Tlineinfo181337 data[SEQ_DECL_SIZE];
};
struct TY262261 {
  TGenericSeq Sup;
  TY262262 data[SEQ_DECL_SIZE];
};
struct TY213913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY262222 {
  TGenericSeq Sup;
  Tblock262018 data[SEQ_DECL_SIZE];
};
struct TY262202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1043)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident188012*, getident_188441)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47705*, usrtocell_51640)(void* usr);
static N_INLINE(void, rtladdzct_53201)(Cell47705* c);
N_NOINLINE(void, addzct_51617)(Cellseq47721* s, Cell47705* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_54019)(Cell47705* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51658)(Cell47705* c);
static N_INLINE(void, rtladdcycleroot_52420)(Cell47705* c);
N_NOINLINE(void, incl_48447)(Cellset47717* s, Cell47705* cell);
static N_INLINE(void, decref_53601)(Cell47705* c);
N_NIMCALL(NIM_BOOL, pluginmatches_420017)(PluginHEX3Aobjecttype420010* p, Tsym213822* s);
N_NIMCALL(Tsym213822*, skipgenericowner_218352)(Tsym213822* s);
PluginHEX3Aobjecttype420010* head_420071;
TNimType NTI420010; /* Plugin:ObjectType */
extern TNimType NTI188010; /* PIdent */
TNimType NTI420004; /* Transformation */
TNimType NTI420006; /* Plugin */
extern Gcheap50018 gch_50059;
N_NIMCALL(void, TMP1043)(void* p, NI op) {
	PluginHEX3Aobjecttype420010* a;
	a = (PluginHEX3Aobjecttype420010*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
}

static N_INLINE(Cell47705*, usrtocell_51640)(void* usr) {
	Cell47705* result;
	result = 0;
	result = ((Cell47705*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47705))))));
	return result;
}

static N_INLINE(void, rtladdzct_53201)(Cell47705* c) {
	addzct_51617((&gch_50059.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47705* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51640(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47705* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51640((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53201(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51658)(Cell47705* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52420)(Cell47705* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48447((&gch_50059.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_54019)(Cell47705* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51658(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52420(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_53601)(Cell47705* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51658(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52420(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47705* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51640(src);
		incref_54019(LOC5);
	}
	LA3: ;
	{
		Cell47705* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51640((*dest));
		decref_53601(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, registerplugin_420091)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation420004 t) {
	PluginHEX3Aobjecttype420010* oldhead;
	PluginHEX3Aobjecttype420010* LOC1;
	oldhead = head_420071;
	LOC1 = 0;
	LOC1 = (PluginHEX3Aobjecttype420010*) newObj((&NTI420006), sizeof(PluginHEX3Aobjecttype420010));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_188441(fn));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_188441(module));
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_188441(package));
	(*LOC1).t = t;
	asgnRef((void**) (&(*LOC1).next), oldhead);
	asgnRef((void**) (&head_420071), LOC1);
}

N_NIMCALL(NIM_BOOL, pluginmatches_420017)(PluginHEX3Aobjecttype420010* p, Tsym213822* s) {
	NIM_BOOL result;
	Tsym213822* module;
	Tsym213822* package;
{	result = 0;
	{
		if (!!(((*(*s).name).Sup.id == (*(*p).fn).Sup.id))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	module = skipgenericowner_218352(s);
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = (module == NIM_NIL);
		if (LOC8) goto LA9;
		LOC8 = !(((*module).kind == ((NU8) 6)));
		LA9: ;
		LOC7 = LOC8;
		if (LOC7) goto LA10;
		LOC7 = !(((*(*module).name).Sup.id == (*(*p).module).Sup.id));
		LA10: ;
		if (!LOC7) goto LA11;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA11: ;
	package = (*module).owner;
	{
		NIM_BOOL LOC15;
		NIM_BOOL LOC16;
		LOC15 = 0;
		LOC16 = 0;
		LOC16 = (package == NIM_NIL);
		if (LOC16) goto LA17;
		LOC16 = !(((*package).kind == ((NU8) 23)));
		LA17: ;
		LOC15 = LOC16;
		if (LOC15) goto LA18;
		LOC15 = !(((*(*package).name).Sup.id == (*(*p).package).Sup.id));
		LA18: ;
		if (!LOC15) goto LA19;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA19: ;
	result = NIM_TRUE;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Transformation420004, getplugin_420073)(Tsym213822* fn) {
	Transformation420004 result;
	PluginHEX3Aobjecttype420010* it;
{	result = 0;
	it = head_420071;
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = pluginmatches_420017(it, fn);
				if (!LOC5) goto LA6;
				result = (*it).t;
				goto BeforeRet;
			}
			LA6: ;
			it = (*it).next;
		} LA2: ;
	}
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_pluginsupportInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_pluginsupportDatInit000)(void) {
static TNimNode* TMP1042[5];
static TNimNode TMP1036[6];
NTI420010.size = sizeof(PluginHEX3Aobjecttype420010);
NTI420010.kind = 18;
NTI420010.base = 0;
TMP1042[0] = &TMP1036[1];
TMP1036[1].kind = 1;
TMP1036[1].offset = offsetof(PluginHEX3Aobjecttype420010, fn);
TMP1036[1].typ = (&NTI188010);
TMP1036[1].name = "fn";
TMP1042[1] = &TMP1036[2];
TMP1036[2].kind = 1;
TMP1036[2].offset = offsetof(PluginHEX3Aobjecttype420010, module);
TMP1036[2].typ = (&NTI188010);
TMP1036[2].name = "module";
TMP1042[2] = &TMP1036[3];
TMP1036[3].kind = 1;
TMP1036[3].offset = offsetof(PluginHEX3Aobjecttype420010, package);
TMP1036[3].typ = (&NTI188010);
TMP1036[3].name = "package";
TMP1042[3] = &TMP1036[4];
NTI420004.size = sizeof(Transformation420004);
NTI420004.kind = 25;
NTI420004.base = 0;
NTI420004.flags = 3;
TMP1036[4].kind = 1;
TMP1036[4].offset = offsetof(PluginHEX3Aobjecttype420010, t);
TMP1036[4].typ = (&NTI420004);
TMP1036[4].name = "t";
TMP1042[4] = &TMP1036[5];
TMP1036[5].kind = 1;
TMP1036[5].offset = offsetof(PluginHEX3Aobjecttype420010, next);
TMP1036[5].typ = (&NTI420006);
TMP1036[5].name = "next";
TMP1036[0].len = 5; TMP1036[0].kind = 2; TMP1036[0].sons = &TMP1042[0];
NTI420010.node = &TMP1036[0];
NTI420006.size = sizeof(PluginHEX3Aobjecttype420010*);
NTI420006.kind = 22;
NTI420006.base = (&NTI420010);
NTI420006.marker = TMP1043;
}

