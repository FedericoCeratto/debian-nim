/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <setjmp.h>
typedef struct Tpasscontext343002 Tpasscontext343002;
typedef struct Tsym294834 Tsym294834;
typedef struct Tgen578003 Tgen578003;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tdocumentor417004 Tdocumentor417004;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29485 Memregion29485;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29479 Llchunk29479;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29483 Avlnode29483;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Stringtableobj153608 Stringtableobj153608;
typedef struct Tidobj201004 Tidobj201004;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Ttype294840 Ttype294840;
typedef struct Tident201010 Tident201010;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct Tnode294802 Tnode294802;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
typedef struct Rstgenerator385010 Rstgenerator385010;
typedef struct TY385029 TY385029;
typedef struct Table385047 Table385047;
typedef struct Keyvaluepairseq385050 Keyvaluepairseq385050;
typedef struct Jsonnodeobj263833 Jsonnodeobj263833;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct Keyvaluepairseq153606 Keyvaluepairseq153606;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct TY294960 TY294960;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct Tocentry385006 Tocentry385006;
typedef struct Rstnode369011 Rstnode369011;
typedef struct Keyvaluepair385053 Keyvaluepair385053;
typedef struct Orderedtable263853 Orderedtable263853;
typedef struct Orderedkeyvaluepairseq263856 Orderedkeyvaluepairseq263856;
typedef struct TY263878 TY263878;
typedef struct Keyvaluepair153604 Keyvaluepair153604;
typedef struct TY294961 TY294961;
typedef struct Rstnodeseq369009 Rstnodeseq369009;
typedef struct Orderedkeyvaluepair263859 Orderedkeyvaluepair263859;
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
struct  Tpasscontext343002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen578003  {
  Tpasscontext343002 Sup;
Tdocumentor417004* doc;
Tsym294834* module;
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
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
};
typedef Smallchunk29439* TY29500[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29485  {
NI minlargeobj;
NI maxlargeobj;
TY29500 freesmallchunks;
Llchunk29479* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29483* root;
Avlnode29483* deleted;
Avlnode29483* last;
Avlnode29483* freeavlnodes;
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
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellseq47320 tempstack;
NI recgclock;
Memregion29485 region;
Gcstat49814 stat;
Cellset47316 marked;
Cellseq47320 additionalroots;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
typedef NU8 Tlockind294808;
typedef NU8 Tstorageloc294812;
typedef NU16 Tlocflag294810Set;
struct  Tloc294816  {
Tlockind294808 k;
Tstorageloc294812 s;
Tlocflag294810Set flags;
Ttype294840* t;
Ropeobj180006* r;
};
struct  Tsym294834  {
  Tidobj201004 Sup;
Tsymkind294435 kind;
union{
struct {Ttypeseq294836* typeinstcache;
} S1;
struct {TY294929* procinstcache;
Tsym294834* gcunsafetyreason;
} S2;
struct {TY294929* usedgenerics;
Tstrtable294806 tab;
} S3;
struct {Tsym294834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic294524 magic;
Ttype294840* typ;
Tident201010* name;
Tlineinfo193336 info;
Tsym294834* owner;
Tsymflag294184Set flags;
Tnode294802* ast;
Toption171009Set options;
NI position;
NI offset;
Tloc294816 loc;
Tlib294820* annex;
Tnode294802* constraint;
};
typedef NU8 Outputtarget385004;
typedef NU8 Rstparseoption370003Set;
typedef N_NIMCALL_PTR(NimStringDesc*, Findfilehandler370013) (NimStringDesc* filename0);
typedef NU8 Msgkind370009;
typedef N_NIMCALL_PTR(void, Msghandler370011) (NimStringDesc* filename0, NI line0, NI col0, Msgkind370009 msgkind0, NimStringDesc* arg0);
typedef NimStringDesc* TY385039[5];
struct  Table385047  {
Keyvaluepairseq385050* data;
NI counter;
};
struct  Rstgenerator385010  {
  TNimObject Sup;
Outputtarget385004 target;
Stringtableobj153608* config;
NI splitafter;
NI listingcounter;
TY385029* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
Rstparseoption370003Set options;
Findfilehandler370013 findfile;
Msghandler370011 msghandler;
NimStringDesc* filename;
TY385039 meta;
NimStringDesc* currentsection;
Table385047 seenindexterms;
};
typedef Ropeobj180006* Tsections417002[25];
struct  Tdocumentor417004  {
  Rstgenerator385010 Sup;
Ropeobj180006* moddesc;
NI id;
Tsections417002 toc;
Tsections417002 section;
NimStringDesc* indexvalfilename;
NimStringDesc* analytics;
Stringtableobj153608* seensymbols;
Jsonnodeobj263833* jarray;
Tstrtable294806 types;
NIM_BOOL ispurerst;
};
typedef NU8 Tsymflag294184;
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY17211;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17211 raiseAction;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29479  {
NI size;
NI acc;
Llchunk29479* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
typedef NI TY29418[16];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29483* TY29490[2];
struct  Avlnode29483  {
TY29490 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29418 bits;
};
typedef NU8 Stringtablemode153602;
struct  Stringtableobj153608  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq153606* data;
Stringtablemode153602 mode;
};
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
struct  Ttype294840  {
  Tidobj201004 Sup;
Ttypekind294244 kind;
Tcallingconvention294002 callconv;
Ttypeflag294431Set flags;
Ttypeseq294836* sons;
Tnode294802* n;
Tsym294834* owner;
Tsym294834* sym;
Tsym294834* destructor;
Tsym294834* deepcopy;
Tsym294834* assignment;
TY294960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc294816 loc;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
};
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
struct  Tnode294802  {
Ttype294840* typ;
Tlineinfo193336 info;
Tnodeflag294427Set flags;
Tnodekind294020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym294834* sym;
} S4;
struct {Tident201010* ident;
} S5;
struct {Tnodeseq294796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
};
typedef NU8 Tlibkind294818;
struct  Tlib294820  {
  Tlistentry148007 Sup;
Tlibkind294818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj180006* name;
Tnode294802* path;
};
struct  Tocentry385006  {
Rstnode369011* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair385053 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
typedef NU8 Jsonnodekind263829;
struct  Orderedtable263853  {
Orderedkeyvaluepairseq263856* data;
NI counter;
NI first;
NI last;
};
struct  Jsonnodeobj263833  {
Jsonnodekind263829 kind;
union{
struct {NimStringDesc* str;
} S1;
struct {NI64 num;
} S2;
struct {NF fnum;
} S3;
struct {NIM_BOOL bval;
} S4;
struct {Orderedtable263853 fields;
} S6;
struct {TY263878* elems;
} S7;
} kindU;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct Keyvaluepair153604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
typedef NU8 Rstnodekind369005;
struct  Rstnode369011  {
Rstnodekind369005 kind;
NimStringDesc* text;
NI level;
Rstnodeseq369009* sons;
};
struct Orderedkeyvaluepair263859 {
NI Field0;
NI Field1;
NimStringDesc* Field2;
Jsonnodeobj263833* Field3;
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
struct TY385029 {
  TGenericSeq Sup;
  Tocentry385006 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq385050 {
  TGenericSeq Sup;
  Keyvaluepair385053 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq153606 {
  TGenericSeq Sup;
  Keyvaluepair153604 data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct Orderedkeyvaluepairseq263856 {
  TGenericSeq Sup;
  Orderedkeyvaluepair263859 data[SEQ_DECL_SIZE];
};
struct TY263878 {
  TGenericSeq Sup;
  Jsonnodeobj263833* data[SEQ_DECL_SIZE];
};
struct Rstnodeseq369009 {
  TGenericSeq Sup;
  Rstnode369011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T1824627595_3)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(Tdocumentor417004*, newdocumentor_417162_1256521319)(NimStringDesc* filename0, Stringtableobj153608* config0);
N_NIMCALL(NimStringDesc*, tofilename_194260_155036129)(NI32 fileidx0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0);
static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0);
N_NIMCALL(void, generatejson_419113_1256521319)(Tdocumentor417004* d0, Tnode294802* n0);
N_NIMCALL(void, writeoutputjson_420121_1256521319)(Tdocumentor417004* d0, NimStringDesc* filename0, NimStringDesc* outext0, NIM_BOOL usewarning0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(void, generateindex_420084_1256521319)(Tdocumentor417004* d0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj0, TNimType* subclass0);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, generatedoc_418253_1256521319)(Tdocumentor417004* d0, Tnode294802* n0);
N_NIMCALL(void, writeoutput_420104_1256521319)(Tdocumentor417004* d0, NimStringDesc* filename0, NimStringDesc* outext0, NIM_BOOL usewarning0);
STRING_LITERAL(T1824627595_4, ".json", 5);
STRING_LITERAL(T1824627595_6, "html", 4);
extern TNimType NTI343002; /* TPassContext */
TNimType NTI578003; /* TGen */
extern TNimType NTI417006; /* PDoc */
extern TNimType NTI294800; /* PSym */
TNimType NTI578005; /* PGen */
extern Gcheap49818 gch_49858_1689653243;
extern Stringtableobj153608* gconfigvars_171204_2607990831;
extern NI gmainpackageid_295062_850551059;
extern NIM_BOOL gwholeproject_171141_2607990831;
extern TSafePoint* exchandler_18837_1689653243;
extern TNimType NTI3628; /* IOError */
extern Exception* currexception_18839_1689653243;
N_NIMCALL(void, T1824627595_3)(void* p, NI op) {
	Tgen578003* a;
	a = (Tgen578003*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
}

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47304))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47304* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47304* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51440_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(void, incref_53419_1689653243)(Cell47304* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_53001_1689653243)(Cell47304* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47304* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47304*)0;
		LOC5 = usrtocell_51440_1689653243(src0);
		incref_53419_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47304* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47304*)0;
		LOC10 = usrtocell_51440_1689653243((*dest0));
		decref_53001_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(Tpasscontext343002*, myopen_578095_1824627595)(Tsym294834* module0) {
	Tpasscontext343002* result0;
	Tgen578003* g0;
	Tdocumentor417004* d0;
	NimStringDesc* LOC1;
	result0 = (Tpasscontext343002*)0;
	g0 = (Tgen578003*)0;
	g0 = (Tgen578003*) newObj((&NTI578005), sizeof(Tgen578003));
	(*g0).Sup.Sup.m_type = (&NTI578003);
	asgnRefNoCycle((void**) (&(*g0).module), module0);
	LOC1 = (NimStringDesc*)0;
	LOC1 = tofilename_194260_155036129(((NI32) ((*module0).position)));
	d0 = newdocumentor_417162_1256521319(LOC1, gconfigvars_171204_2607990831);
	(*d0).Sup.hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g0).doc), d0);
	result0 = &g0->Sup;
	return result0;
}

N_NIMCALL(Tnode294802*, processnodejson_578089_1824627595)(Tpasscontext343002* c0, Tnode294802* n0) {
	Tnode294802* result0;
	Tgen578003* g0;
	result0 = (Tnode294802*)0;
	result0 = n0;
	g0 = ((Tgen578003*) (c0));
	generatejson_419113_1256521319((*g0).doc, n0);
	return result0;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18837_1689653243;
	exchandler_18837_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837_1689653243 = (*exchandler_18837_1689653243).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result0;
	result0 = (Exception*)0;
	result0 = currexception_18839_1689653243;
	return result0;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_18839_1689653243), NIM_NIL);
}

N_NIMCALL(Tnode294802*, closejson_578048_1824627595)(Tpasscontext343002* p0, Tnode294802* n0) {
	Tnode294802* result0;
	Tgen578003* g0;
	NIM_BOOL usewarning0;
	result0 = (Tnode294802*)0;
	g0 = ((Tgen578003*) (p0));
	usewarning0 = !((((*(*g0).module).flags &(1U<<((NU)(((Tsymflag294184) 12))&31U)))!=0));
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* LOC9;
		TSafePoint T1824627595_5;
		LOC3 = (NIM_BOOL)0;
		LOC4 = (NIM_BOOL)0;
		LOC4 = ((*(*(*g0).module).owner).Sup.id == gmainpackageid_295062_850551059);
		if (!(LOC4)) goto LA5;
		LOC4 = gwholeproject_171141_2607990831;
		LA5: ;
		LOC3 = LOC4;
		if (LOC3) goto LA6;
		LOC3 = (((*(*g0).module).flags &(1U<<((NU)(((Tsymflag294184) 12))&31U)))!=0);
		LA6: ;
		if (!LOC3) goto LA7;
		LOC9 = (NimStringDesc*)0;
		LOC9 = tofilename_194260_155036129(((NI32) ((*(*g0).module).position)));
		writeoutputjson_420121_1256521319((*g0).doc, LOC9, ((NimStringDesc*) &T1824627595_4), usewarning0);
		pushSafePoint(&T1824627595_5);
		T1824627595_5.status = setjmp(T1824627595_5.context);
		if (T1824627595_5.status == 0) {
			generateindex_420084_1256521319((*g0).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))) {
				T1824627595_5.status = 0;
				popCurrentException();
			}
		}
		if (T1824627595_5.status != 0) reraiseException();
	}
	LA7: ;
	return result0;
}

N_NIMCALL(Tnode294802*, processnode_578083_1824627595)(Tpasscontext343002* c0, Tnode294802* n0) {
	Tnode294802* result0;
	Tgen578003* g0;
	result0 = (Tnode294802*)0;
	result0 = n0;
	g0 = ((Tgen578003*) (c0));
	generatedoc_418253_1256521319((*g0).doc, n0);
	return result0;
}

N_NIMCALL(Tnode294802*, close_578013_1824627595)(Tpasscontext343002* p0, Tnode294802* n0) {
	Tnode294802* result0;
	Tgen578003* g0;
	NIM_BOOL usewarning0;
	result0 = (Tnode294802*)0;
	g0 = ((Tgen578003*) (p0));
	usewarning0 = !((((*(*g0).module).flags &(1U<<((NU)(((Tsymflag294184) 12))&31U)))!=0));
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* LOC9;
		TSafePoint T1824627595_7;
		LOC3 = (NIM_BOOL)0;
		LOC4 = (NIM_BOOL)0;
		LOC4 = ((*(*(*g0).module).owner).Sup.id == gmainpackageid_295062_850551059);
		if (!(LOC4)) goto LA5;
		LOC4 = gwholeproject_171141_2607990831;
		LA5: ;
		LOC3 = LOC4;
		if (LOC3) goto LA6;
		LOC3 = (((*(*g0).module).flags &(1U<<((NU)(((Tsymflag294184) 12))&31U)))!=0);
		LA6: ;
		if (!LOC3) goto LA7;
		LOC9 = (NimStringDesc*)0;
		LOC9 = tofilename_194260_155036129(((NI32) ((*(*g0).module).position)));
		writeoutput_420104_1256521319((*g0).doc, LOC9, ((NimStringDesc*) &T1824627595_6), usewarning0);
		pushSafePoint(&T1824627595_7);
		T1824627595_7.status = setjmp(T1824627595_7.context);
		if (T1824627595_7.status == 0) {
			generateindex_420084_1256521319((*g0).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))) {
				T1824627595_7.status = 0;
				popCurrentException();
			}
		}
		if (T1824627595_7.status != 0) reraiseException();
	}
	LA7: ;
	return result0;
}

N_NIMCALL(void, finishdoc2pass_578117_1824627595)(NimStringDesc* project0) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit000)(void) {
static TNimNode* T1824627595_2[2];
static TNimNode T1824627595_0[3];
NTI578003.size = sizeof(Tgen578003);
NTI578003.kind = 17;
NTI578003.base = (&NTI343002);
T1824627595_2[0] = &T1824627595_0[1];
T1824627595_0[1].kind = 1;
T1824627595_0[1].offset = offsetof(Tgen578003, doc);
T1824627595_0[1].typ = (&NTI417006);
T1824627595_0[1].name = "doc";
T1824627595_2[1] = &T1824627595_0[2];
T1824627595_0[2].kind = 1;
T1824627595_0[2].offset = offsetof(Tgen578003, module);
T1824627595_0[2].typ = (&NTI294800);
T1824627595_0[2].name = "module";
T1824627595_0[0].len = 2; T1824627595_0[0].kind = 2; T1824627595_0[0].sons = &T1824627595_2[0];
NTI578003.node = &T1824627595_0[0];
NTI578005.size = sizeof(Tgen578003*);
NTI578005.kind = 22;
NTI578005.base = (&NTI578003);
NTI578005.marker = T1824627595_3;
}

