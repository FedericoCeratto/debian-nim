/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct PluginHEX3Aobjecttype421010 PluginHEX3Aobjecttype421010;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode214790 Tnode214790;
typedef struct Tcontext264020 Tcontext264020;
typedef struct Tident189012 Tident189012;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tsym214822 Tsym214822;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Ttype214828 Ttype214828;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct Tlib214808 Tlib214808;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Tpasscontext261002 Tpasscontext261002;
typedef struct Tproccon264008 Tproccon264008;
typedef struct Intset211035 Intset211035;
typedef struct Trunk211031 Trunk211031;
typedef struct Trunkseq211033 Trunkseq211033;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tidtable214840 Tidtable214840;
typedef struct Tidpairseq214838 Tidpairseq214838;
typedef struct Tctx263036 Tctx263036;
typedef struct TY264140 TY264140;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tidpair214836 Tidpair214836;
typedef struct TY263242 TY263242;
typedef struct TY183093 TY183093;
typedef struct PprocHEX3Aobjecttype263221 PprocHEX3Aobjecttype263221;
typedef struct TY263261 TY263261;
typedef struct Tinstantiationpair264010 Tinstantiationpair264010;
typedef struct TY214913 TY214913;
typedef struct TY263222 TY263222;
typedef struct TY263227 TY263227;
typedef struct TY263262 TY263262;
typedef struct Vmargs263030 Vmargs263030;
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
struct  PluginHEX3Aobjecttype421010  {
Tident189012* fn;
Tident189012* module;
Tident189012* package;
Transformation421004 t;
PluginHEX3Aobjecttype421010* next;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable214794  {
NI counter;
Tsymseq214792* data;
};
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc214804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype214828* t;
Ropeobj169006* r;
Ropeobj169006* heaproot;
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
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
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
struct  Ropeobj169006  {
  TNimObject Sup;
Ropeobj169006* left;
Ropeobj169006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib214808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj169006* name;
Tnode214790* path;
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
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
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
struct Ttypeseq214824 {
  TGenericSeq Sup;
  Ttype214828* data[SEQ_DECL_SIZE];
};
struct TY214925 {
  TGenericSeq Sup;
  Tinstantiation214812* data[SEQ_DECL_SIZE];
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
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
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY263222 {
  TGenericSeq Sup;
  Tblock263018 data[SEQ_DECL_SIZE];
};
struct TY263202 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1043)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident189012*, getident_189441)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47504*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47504* c);
N_NOINLINE(void, addzct_51417)(Cellseq47520* s, Cell47504* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47504* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47504* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47504* c);
N_NOINLINE(void, incl_48247)(Cellset47516* s, Cell47504* cell);
static N_INLINE(void, decref_53401)(Cell47504* c);
N_NIMCALL(NIM_BOOL, pluginmatches_421017)(PluginHEX3Aobjecttype421010* p, Tsym214822* s);
N_NIMCALL(Tsym214822*, skipgenericowner_219352)(Tsym214822* s);
PluginHEX3Aobjecttype421010* head_421071;
TNimType NTI421010; /* Plugin:ObjectType */
extern TNimType NTI189010; /* PIdent */
TNimType NTI421004; /* Transformation */
TNimType NTI421006; /* Plugin */
extern Gcheap49818 gch_49859;
N_NIMCALL(void, TMP1043)(void* p, NI op) {
	PluginHEX3Aobjecttype421010* a;
	a = (PluginHEX3Aobjecttype421010*)p;
	nimGCvisit((void*)(*a).fn, op);
	nimGCvisit((void*)(*a).module, op);
	nimGCvisit((void*)(*a).package, op);
	nimGCvisit((void*)(*a).next, op);
}

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

static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47504* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52220)(Cell47504* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48247((&gch_49859.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_53819)(Cell47504* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51458(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52220(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_53401)(Cell47504* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51458(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52220(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47504* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51440(src);
		incref_53819(LOC5);
	}
	LA3: ;
	{
		Cell47504* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51440((*dest));
		decref_53401(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, registerplugin_421091)(NimStringDesc* package, NimStringDesc* module, NimStringDesc* fn, Transformation421004 t) {
	PluginHEX3Aobjecttype421010* oldhead;
	PluginHEX3Aobjecttype421010* LOC1;
	oldhead = head_421071;
	LOC1 = 0;
	LOC1 = (PluginHEX3Aobjecttype421010*) newObj((&NTI421006), sizeof(PluginHEX3Aobjecttype421010));
	asgnRefNoCycle((void**) (&(*LOC1).fn), getident_189441(fn));
	asgnRefNoCycle((void**) (&(*LOC1).module), getident_189441(module));
	asgnRefNoCycle((void**) (&(*LOC1).package), getident_189441(package));
	(*LOC1).t = t;
	asgnRef((void**) (&(*LOC1).next), oldhead);
	asgnRef((void**) (&head_421071), LOC1);
}

N_NIMCALL(NIM_BOOL, pluginmatches_421017)(PluginHEX3Aobjecttype421010* p, Tsym214822* s) {
	NIM_BOOL result;
	Tsym214822* module;
	Tsym214822* package;
{	result = 0;
	{
		if (!!(((*(*s).name).Sup.id == (*(*p).fn).Sup.id))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	module = skipgenericowner_219352(s);
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

N_NIMCALL(Transformation421004, getplugin_421073)(Tsym214822* fn) {
	Transformation421004 result;
	PluginHEX3Aobjecttype421010* it;
{	result = 0;
	it = head_421071;
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = pluginmatches_421017(it, fn);
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
NTI421010.size = sizeof(PluginHEX3Aobjecttype421010);
NTI421010.kind = 18;
NTI421010.base = 0;
TMP1042[0] = &TMP1036[1];
TMP1036[1].kind = 1;
TMP1036[1].offset = offsetof(PluginHEX3Aobjecttype421010, fn);
TMP1036[1].typ = (&NTI189010);
TMP1036[1].name = "fn";
TMP1042[1] = &TMP1036[2];
TMP1036[2].kind = 1;
TMP1036[2].offset = offsetof(PluginHEX3Aobjecttype421010, module);
TMP1036[2].typ = (&NTI189010);
TMP1036[2].name = "module";
TMP1042[2] = &TMP1036[3];
TMP1036[3].kind = 1;
TMP1036[3].offset = offsetof(PluginHEX3Aobjecttype421010, package);
TMP1036[3].typ = (&NTI189010);
TMP1036[3].name = "package";
TMP1042[3] = &TMP1036[4];
NTI421004.size = sizeof(Transformation421004);
NTI421004.kind = 25;
NTI421004.base = 0;
NTI421004.flags = 3;
TMP1036[4].kind = 1;
TMP1036[4].offset = offsetof(PluginHEX3Aobjecttype421010, t);
TMP1036[4].typ = (&NTI421004);
TMP1036[4].name = "t";
TMP1042[4] = &TMP1036[5];
TMP1036[5].kind = 1;
TMP1036[5].offset = offsetof(PluginHEX3Aobjecttype421010, next);
TMP1036[5].typ = (&NTI421006);
TMP1036[5].name = "next";
TMP1036[0].len = 5; TMP1036[0].kind = 2; TMP1036[0].sons = &TMP1042[0];
NTI421010.node = &TMP1036[0];
NTI421006.size = sizeof(PluginHEX3Aobjecttype421010*);
NTI421006.kind = 22;
NTI421006.base = (&NTI421010);
NTI421006.marker = TMP1043;
}

