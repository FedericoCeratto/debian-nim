/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tsym191843 Tsym191843;
typedef struct Tgen508010 Tgen508010;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tdocumentor341007 Tdocumentor341007;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Stringtableobj136012 Stringtableobj136012;
typedef struct Tidobj168015 Tidobj168015;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident168021 Tident168021;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tnode191813 Tnode191813;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib191831 Tlib191831;
typedef struct Trstgenerator312016 Trstgenerator312016;
typedef struct TY312034 TY312034;
typedef struct Table312052 Table312052;
typedef struct Keyvaluepairseq312055 Keyvaluepairseq312055;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Keyvaluepairseq136010 Keyvaluepairseq136010;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct Ttocentry312012 Ttocentry312012;
typedef struct Trstnode297011 Trstnode297011;
typedef struct Keyvaluepair312058 Keyvaluepair312058;
typedef struct Keyvaluepair136008 Keyvaluepair136008;
typedef struct TY191933 TY191933;
typedef struct Trstnodeseq297009 Trstnodeseq297009;
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen508010  {
  Tpasscontext242005 Sup;
Tdocumentor341007* doc;
Tsym191843* module;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Tsym191843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
typedef N_NIMCALL_PTR(NimStringDesc*, Tfindfilehandler298023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, Tmsghandler298021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY312042[5];
struct  Table312052  {
Keyvaluepairseq312055* data;
NI counter;
};
struct  Trstgenerator312016  {
  TNimObject Sup;
NU8 target;
Stringtableobj136012* config;
NI splitafter;
TY312034* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
NU8 options;
Tfindfilehandler298023 findfile;
Tmsghandler298021 msghandler;
NimStringDesc* filename;
TY312042 meta;
NimStringDesc* currentsection;
Table312052 seenindexterms;
};
typedef Ropeobj162009* Tsections341005[26];
struct  Tdocumentor341007  {
  Trstgenerator312016 Sup;
Ropeobj162009* moddesc;
NI id;
Tsections341005 toc;
Tsections341005 section;
NimStringDesc* indexvalfilename;
NimStringDesc* analytics;
Stringtableobj136012* seensymbols;
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
} TY15609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15609 raiseAction;
};
typedef NI TY27420[16];
struct  Tpagedesc46354  {
Tpagedesc46354* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Stringtableobj136012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq136010* data;
NU8 mode;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ttype191849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry132022  {
  TNimObject Sup;
Tlistentry132022* prev;
Tlistentry132022* next;
};
struct  Tlib191831  {
  Tlistentry132022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode191813* path;
};
struct  Ttocentry312012  {
Trstnode297011* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair312058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct Keyvaluepair136008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Trstnode297011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq297009* sons;
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY312034 {
  TGenericSeq Sup;
  Ttocentry312012 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq312055 {
  TGenericSeq Sup;
  Keyvaluepair312058 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq136010 {
  TGenericSeq Sup;
  Keyvaluepair136008 data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Trstnodeseq297009 {
  TGenericSeq Sup;
  Trstnode297011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4885)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(Tdocumentor341007*, newdocumentor_341065)(NimStringDesc* filename, Stringtableobj136012* config);
N_NIMCALL(NimStringDesc*, tofilename_165266)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46346* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46346* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46346* c);
N_NOINLINE(void, incl_47065)(Tcellset46358* s, Tcell46346* cell);
static N_INLINE(void, decref_51804)(Tcell46346* c);
N_NIMCALL(void, generatedoc_342218)(Tdocumentor341007* d, Tnode191813* n);
N_NIMCALL(void, writeoutput_344337)(Tdocumentor341007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_344318)(Tdocumentor341007* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP4886, "html", 4);
extern TNimType NTI242005; /* TPassContext */
TNimType NTI508010; /* TGen */
extern TNimType NTI341009; /* PDoc */
extern TNimType NTI191811; /* PSym */
TNimType NTI508012; /* PGen */
extern Tgcheap48216 gch_48244;
extern Stringtableobj136012* gconfigvars_155231;
extern NIM_BOOL gwholeproject_155139;
extern TSafePoint* exchandler_17043;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17045;
N_NIMCALL(void, TMP4885)(void* p, NI op) {
	Tgen508010* a;
	a = (Tgen508010*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46346* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50623)(Tcell46346* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47065((&gch_48244.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52222)(Tcell46346* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50623(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51804)(Tcell46346* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50623(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46346* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49846(src);
		incref_52222(LOC5);
	}
	LA3: ;
	{
		Tcell46346* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49846((*dest));
		decref_51804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(Tpasscontext242005*, myopen_508069)(Tsym191843* module) {
	Tpasscontext242005* result;
	Tgen508010* g;
	Tdocumentor341007* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (Tgen508010*) newObj((&NTI508012), sizeof(Tgen508010));
	(*g).Sup.Sup.m_type = (&NTI508010);
	asgnRefNoCycle((void**) (&(*g).module), module);
	LOC1 = 0;
	LOC1 = tofilename_165266(((NI32) ((*module).position)));
	d = newdocumentor_341065(LOC1, gconfigvars_155231);
	(*d).Sup.hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g).doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(Tnode191813*, processnode_508057)(Tpasscontext242005* c, Tnode191813* n) {
	Tnode191813* result;
	Tgen508010* g;
	result = 0;
	result = n;
	g = ((Tgen508010*) (c));
	generatedoc_342218((*g).doc, n);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_17045;
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(Tnode191813*, close_508018)(Tpasscontext242005* p, Tnode191813* n) {
	Tnode191813* result;
	Tgen508010* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((Tgen508010*) (p));
	usewarning = !((((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP4887;
		LOC3 = 0;
		LOC3 = gwholeproject_155139;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_165266(((NI32) ((*(*g).module).position)));
		writeoutput_344337((*g).doc, LOC7, ((NimStringDesc*) &TMP4886), usewarning);
		pushSafePoint(&TMP4887);
		TMP4887.status = setjmp(TMP4887.context);
		if (TMP4887.status == 0) {
			generateindex_344318((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
				TMP4887.status = 0;
				popCurrentException();
			}
		}
		if (TMP4887.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_508108)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_docgen2Init)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_docgen2DatInit)(void) {
static TNimNode* TMP4884[2];
static TNimNode TMP1070[3];
NTI508010.size = sizeof(Tgen508010);
NTI508010.kind = 17;
NTI508010.base = (&NTI242005);
TMP4884[0] = &TMP1070[1];
TMP1070[1].kind = 1;
TMP1070[1].offset = offsetof(Tgen508010, doc);
TMP1070[1].typ = (&NTI341009);
TMP1070[1].name = "doc";
TMP4884[1] = &TMP1070[2];
TMP1070[2].kind = 1;
TMP1070[2].offset = offsetof(Tgen508010, module);
TMP1070[2].typ = (&NTI191811);
TMP1070[2].name = "module";
TMP1070[0].len = 2; TMP1070[0].kind = 2; TMP1070[0].sons = &TMP4884[0];
NTI508010.node = &TMP1070[0];
NTI508012.size = sizeof(Tgen508010*);
NTI508012.kind = 22;
NTI508012.base = (&NTI508010);
NTI508012.marker = TMP4885;
}

