/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <setjmp.h>
typedef struct Tpasscontext262002 Tpasscontext262002;
typedef struct Tsym215822 Tsym215822;
typedef struct Tgen516004 Tgen516004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tdocumentor360004 Tdocumentor360004;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Stringtableobj140209 Stringtableobj140209;
typedef struct Tidobj190006 Tidobj190006;
typedef struct Ttypeseq215824 Ttypeseq215824;
typedef struct Tscope215816 Tscope215816;
typedef struct TY215925 TY215925;
typedef struct Tstrtable215794 Tstrtable215794;
typedef struct Tsymseq215792 Tsymseq215792;
typedef struct Ttype215828 Ttype215828;
typedef struct Tident190012 Tident190012;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct Tnode215790 Tnode215790;
typedef struct Tloc215804 Tloc215804;
typedef struct Ropeobj170006 Ropeobj170006;
typedef struct Tlib215808 Tlib215808;
typedef struct Rstgenerator327010 Rstgenerator327010;
typedef struct TY327029 TY327029;
typedef struct Table327047 Table327047;
typedef struct Keyvaluepairseq327050 Keyvaluepairseq327050;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct Keyvaluepairseq140207 Keyvaluepairseq140207;
typedef struct Tnodeseq215784 Tnodeseq215784;
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tocentry327006 Tocentry327006;
typedef struct Rstnode314008 Rstnode314008;
typedef struct Keyvaluepair327053 Keyvaluepair327053;
typedef struct Keyvaluepair140205 Keyvaluepair140205;
typedef struct TY215913 TY215913;
typedef struct Rstnodeseq314006 Rstnodeseq314006;
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
struct  Tpasscontext262002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen516004  {
  Tpasscontext262002 Sup;
Tdocumentor360004* doc;
Tsym215822* module;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidobj190006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable215794  {
NI counter;
Tsymseq215792* data;
};
struct  Tlineinfo183337  {
NI16 line;
NI16 col;
NI32 fileindex;
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
typedef N_NIMCALL_PTR(NimStringDesc*, Findfilehandler315014) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, Msghandler315012) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY327039[5];
struct  Table327047  {
Keyvaluepairseq327050* data;
NI counter;
};
struct  Rstgenerator327010  {
  TNimObject Sup;
NU8 target;
Stringtableobj140209* config;
NI splitafter;
NI listingcounter;
TY327029* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
NU8 options;
Findfilehandler315014 findfile;
Msghandler315012 msghandler;
NimStringDesc* filename;
TY327039 meta;
NimStringDesc* currentsection;
Table327047 seenindexterms;
};
typedef Ropeobj170006* Tsections360002[25];
struct  Tdocumentor360004  {
  Rstgenerator327010 Sup;
Ropeobj170006* moddesc;
NI id;
Tsections360002 toc;
Tsections360002 section;
NimStringDesc* indexvalfilename;
NimStringDesc* analytics;
Stringtableobj140209* seensymbols;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY17811;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17811 raiseAction;
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
struct  Stringtableobj140209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq140207* data;
NU8 mode;
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
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
NI h;
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
struct  Tocentry327006  {
Rstnode314008* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair327053 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct Keyvaluepair140205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tinstantiation215812  {
Tsym215822* sym;
Ttypeseq215824* concretetypes;
TY215913* usedby;
NI compilesid;
};
struct  Rstnode314008  {
NU8 kind;
NimStringDesc* text;
NI level;
Rstnodeseq314006* sons;
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
struct TY327029 {
  TGenericSeq Sup;
  Tocentry327006 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq327050 {
  TGenericSeq Sup;
  Keyvaluepair327053 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq140207 {
  TGenericSeq Sup;
  Keyvaluepair140205 data[SEQ_DECL_SIZE];
};
struct Tnodeseq215784 {
  TGenericSeq Sup;
  Tnode215790* data[SEQ_DECL_SIZE];
};
struct TY215913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Rstnodeseq314006 {
  TGenericSeq Sup;
  Rstnode314008* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5163)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47504*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47504* c);
N_NOINLINE(void, addzct_51417)(Cellseq47520* s, Cell47504* c);
N_NIMCALL(Tdocumentor360004*, newdocumentor_360041)(NimStringDesc* filename, Stringtableobj140209* config);
N_NIMCALL(NimStringDesc*, tofilename_184265)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47504* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47504* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47504* c);
N_NOINLINE(void, incl_48247)(Cellset47516* s, Cell47504* cell);
static N_INLINE(void, decref_53401)(Cell47504* c);
N_NIMCALL(void, generatedoc_360976)(Tdocumentor360004* d, Tnode215790* n);
N_NIMCALL(void, writeoutput_362697)(Tdocumentor360004* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_362684)(Tdocumentor360004* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP5164, "html", 4);
extern TNimType NTI262002; /* TPassContext */
TNimType NTI516004; /* TGen */
extern TNimType NTI360006; /* PDoc */
extern TNimType NTI215788; /* PSym */
TNimType NTI516006; /* PGen */
extern Gcheap49818 gch_49859;
extern Stringtableobj140209* gconfigvars_161195;
extern NIM_BOOL gwholeproject_161132;
extern TSafePoint* exchandler_19437;
extern TNimType NTI3628; /* IOError */
extern Exception* currexception_19439;
N_NIMCALL(void, TMP5163)(void* p, NI op) {
	Tgen516004* a;
	a = (Tgen516004*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(Tpasscontext262002*, myopen_516048)(Tsym215822* module) {
	Tpasscontext262002* result;
	Tgen516004* g;
	Tdocumentor360004* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (Tgen516004*) newObj((&NTI516006), sizeof(Tgen516004));
	(*g).Sup.Sup.m_type = (&NTI516004);
	asgnRefNoCycle((void**) (&(*g).module), module);
	LOC1 = 0;
	LOC1 = tofilename_184265(((NI32) ((*module).position)));
	d = newdocumentor_360041(LOC1, gconfigvars_161195);
	(*d).Sup.hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g).doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(Tnode215790*, processnode_516042)(Tpasscontext262002* c, Tnode215790* n) {
	Tnode215790* result;
	Tgen516004* g;
	result = 0;
	result = n;
	g = ((Tgen516004*) (c));
	generatedoc_360976((*g).doc, n);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_19437;
	exchandler_19437 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19437 = (*exchandler_19437).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_19439;
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_19439), NIM_NIL);
}

N_NIMCALL(Tnode215790*, close_516009)(Tpasscontext262002* p, Tnode215790* n) {
	Tnode215790* result;
	Tgen516004* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((Tgen516004*) (p));
	usewarning = !((((*(*g).module).flags &(1U<<((NU)(((NU8) 12))&31U)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP5165;
		LOC3 = 0;
		LOC3 = gwholeproject_161132;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).module).flags &(1U<<((NU)(((NU8) 12))&31U)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_184265(((NI32) ((*(*g).module).position)));
		writeoutput_362697((*g).doc, LOC7, ((NimStringDesc*) &TMP5164), usewarning);
		pushSafePoint(&TMP5165);
		TMP5165.status = setjmp(TMP5165.context);
		if (TMP5165.status == 0) {
			generateindex_362684((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))) {
				TMP5165.status = 0;
				popCurrentException();
			}
		}
		if (TMP5165.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_516069)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit000)(void) {
static TNimNode* TMP5162[2];
static TNimNode TMP1187[3];
NTI516004.size = sizeof(Tgen516004);
NTI516004.kind = 17;
NTI516004.base = (&NTI262002);
TMP5162[0] = &TMP1187[1];
TMP1187[1].kind = 1;
TMP1187[1].offset = offsetof(Tgen516004, doc);
TMP1187[1].typ = (&NTI360006);
TMP1187[1].name = "doc";
TMP5162[1] = &TMP1187[2];
TMP1187[2].kind = 1;
TMP1187[2].offset = offsetof(Tgen516004, module);
TMP1187[2].typ = (&NTI215788);
TMP1187[2].name = "module";
TMP1187[0].len = 2; TMP1187[0].kind = 2; TMP1187[0].sons = &TMP5162[0];
NTI516004.node = &TMP1187[0];
NTI516006.size = sizeof(Tgen516004*);
NTI516006.kind = 22;
NTI516006.base = (&NTI516004);
NTI516006.marker = TMP5163;
}

