/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tsym190843 Tsym190843;
typedef struct Tgen507010 Tgen507010;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tdocumentor340007 Tdocumentor340007;
typedef struct Tcell46547 Tcell46547;
typedef struct Tcellseq46563 Tcellseq46563;
typedef struct Tgcheap48416 Tgcheap48416;
typedef struct Tcellset46559 Tcellset46559;
typedef struct Tpagedesc46555 Tpagedesc46555;
typedef struct Tmemregion28410 Tmemregion28410;
typedef struct Tsmallchunk27640 Tsmallchunk27640;
typedef struct Tllchunk28404 Tllchunk28404;
typedef struct Tbigchunk27642 Tbigchunk27642;
typedef struct Tintset27617 Tintset27617;
typedef struct Ttrunk27613 Ttrunk27613;
typedef struct Tavlnode28408 Tavlnode28408;
typedef struct Tgcstat48414 Tgcstat48414;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident167021 Tident167021;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct Trstgenerator311016 Trstgenerator311016;
typedef struct TY311034 TY311034;
typedef struct Table311052 Table311052;
typedef struct Keyvaluepairseq311055 Keyvaluepairseq311055;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Ttocentry311012 Ttocentry311012;
typedef struct Trstnode296011 Trstnode296011;
typedef struct Keyvaluepair311058 Keyvaluepair311058;
typedef struct Keyvaluepair134008 Keyvaluepair134008;
typedef struct TY190933 TY190933;
typedef struct Trstnodeseq296009 Trstnodeseq296009;
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
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen507010  {
  Tpasscontext241005 Sup;
Tdocumentor340007* doc;
Tsym190843* module;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46547  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46563  {
NI len;
NI cap;
Tcell46547** d;
};
struct  Tcellset46559  {
NI counter;
NI max;
Tpagedesc46555* head;
Tpagedesc46555** data;
};
typedef Tsmallchunk27640* TY28422[512];
typedef Ttrunk27613* Ttrunkbuckets27615[256];
struct  Tintset27617  {
Ttrunkbuckets27615 data;
};
struct  Tmemregion28410  {
NI minlargeobj;
NI maxlargeobj;
TY28422 freesmallchunks;
Tllchunk28404* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27642* freechunkslist;
Tintset27617 chunkstarts;
Tavlnode28408* root;
Tavlnode28408* deleted;
Tavlnode28408* last;
Tavlnode28408* freeavlnodes;
};
struct  Tgcstat48414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48416  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46563 zct;
Tcellseq46563 decstack;
Tcellset46559 cycleroots;
Tcellseq46563 tempstack;
NI recgclock;
Tmemregion28410 region;
Tgcstat48414 stat;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym190843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
typedef N_NIMCALL_PTR(NimStringDesc*, Tfindfilehandler297023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, Tmsghandler297021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY311042[5];
struct  Table311052  {
Keyvaluepairseq311055* data;
NI counter;
};
struct  Trstgenerator311016  {
  TNimObject Sup;
NU8 target;
Stringtableobj134012* config;
NI splitafter;
TY311034* tocpart;
NIM_BOOL hastoc;
NimStringDesc* theindex;
NU8 options;
Tfindfilehandler297023 findfile;
Tmsghandler297021 msghandler;
NimStringDesc* filename;
TY311042 meta;
NimStringDesc* currentsection;
Table311052 seenindexterms;
};
typedef Ropeobj161009* Tsections340005[26];
struct  Tdocumentor340007  {
  Trstgenerator311016 Sup;
Ropeobj161009* moddesc;
NI id;
Tsections340005 toc;
Tsections340005 section;
NimStringDesc* indexvalfilename;
NimStringDesc* analytics;
Stringtableobj134012* seensymbols;
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
} TY15809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15809 raiseAction;
};
typedef NI TY27620[8];
struct  Tpagedesc46555  {
Tpagedesc46555* next;
NI key;
TY27620 bits;
};
struct  Tbasechunk27638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27640  {
  Tbasechunk27638 Sup;
Tsmallchunk27640* next;
Tsmallchunk27640* prev;
Tfreecell27630* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28404  {
NI size;
NI acc;
Tllchunk28404* next;
};
struct  Tbigchunk27642  {
  Tbasechunk27638 Sup;
Tbigchunk27642* next;
Tbigchunk27642* prev;
NI align;
NF data;
};
struct  Ttrunk27613  {
Ttrunk27613* next;
NI key;
TY27620 bits;
};
typedef Tavlnode28408* TY28414[2];
struct  Tavlnode28408  {
TY28414 link;
NI key;
NI upperbound;
NI level;
};
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Ttype190849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode190813* path;
};
struct  Ttocentry311012  {
Trstnode296011* n;
NimStringDesc* refname;
NimStringDesc* header;
};
struct Keyvaluepair311058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
struct Keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Trstnode296011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq296009* sons;
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY311034 {
  TGenericSeq Sup;
  Ttocentry311012 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq311055 {
  TGenericSeq Sup;
  Keyvaluepair311058 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  Keyvaluepair134008 data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Trstnodeseq296009 {
  TGenericSeq Sup;
  Trstnode296011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4882)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46547* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46563* s, Tcell46547* c);
N_NIMCALL(Tdocumentor340007*, newdocumentor_340065)(NimStringDesc* filename, Stringtableobj134012* config);
N_NIMCALL(NimStringDesc*, tofilename_164263)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52422)(Tcell46547* c);
static N_INLINE(NIM_BOOL, canbecycleroot_50067)(Tcell46547* c);
static N_INLINE(void, rtladdcycleroot_50823)(Tcell46547* c);
N_NOINLINE(void, incl_47265)(Tcellset46559* s, Tcell46547* cell);
static N_INLINE(void, decref_52004)(Tcell46547* c);
N_NIMCALL(void, generatedoc_341218)(Tdocumentor340007* d, Tnode190813* n);
N_NIMCALL(void, writeoutput_343337)(Tdocumentor340007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_343318)(Tdocumentor340007* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP4883, "html", 4);
extern TNimType NTI241005; /* TPassContext */
TNimType NTI507010; /* TGen */
extern TNimType NTI340009; /* PDoc */
extern TNimType NTI190811; /* PSym */
TNimType NTI507012; /* PGen */
extern Tgcheap48416 gch_48444;
extern Stringtableobj134012* gconfigvars_154231;
extern NIM_BOOL gwholeproject_154139;
extern TSafePoint* exchandler_17243;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_17245;
N_NIMCALL(void, TMP4882)(void* p, NI op) {
	Tgen507010* a;
	a = (Tgen507010*)p;
	nimGCvisit((void*)(*a).doc, op);
	nimGCvisit((void*)(*a).module, op);
}

static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr) {
	Tcell46547* result;
	result = 0;
	result = ((Tcell46547*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46547))))));
	return result;
}

static N_INLINE(void, rtladdzct_51604)(Tcell46547* c) {
	addzct_50017((&gch_48444.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46547* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_50046(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46547* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_50046((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51604(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, canbecycleroot_50067)(Tcell46547* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50823)(Tcell46547* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47265((&gch_48444.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52422)(Tcell46547* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_50067(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50823(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_52004)(Tcell46547* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51604(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_50067(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50823(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46547* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_50046(src);
		incref_52422(LOC5);
	}
	LA3: ;
	{
		Tcell46547* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_50046((*dest));
		decref_52004(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(Tpasscontext241005*, myopen_507068)(Tsym190843* module) {
	Tpasscontext241005* result;
	Tgen507010* g;
	Tdocumentor340007* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (Tgen507010*) newObj((&NTI507012), sizeof(Tgen507010));
	(*g).Sup.Sup.m_type = (&NTI507010);
	asgnRefNoCycle((void**) (&(*g).module), module);
	LOC1 = 0;
	LOC1 = tofilename_164263(((NI32) ((*module).position)));
	d = newdocumentor_340065(LOC1, gconfigvars_154231);
	(*d).Sup.hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g).doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(Tnode190813*, processnode_507056)(Tpasscontext241005* c, Tnode190813* n) {
	Tnode190813* result;
	Tgen507010* g;
	result = 0;
	result = n;
	g = ((Tgen507010*) (c));
	generatedoc_341218((*g).doc, n);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17243;
	exchandler_17243 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17243 = (*exchandler_17243).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_17245;
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17245), (*currexception_17245).parent);
}

N_NIMCALL(Tnode190813*, close_507018)(Tpasscontext241005* p, Tnode190813* n) {
	Tnode190813* result;
	Tgen507010* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((Tgen507010*) (p));
	usewarning = !((((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP4884;
		LOC3 = 0;
		LOC3 = gwholeproject_154139;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).module).flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_164263(((NI32) ((*(*g).module).position)));
		writeoutput_343337((*g).doc, LOC7, ((NimStringDesc*) &TMP4883), usewarning);
		pushSafePoint(&TMP4884);
		TMP4884.status = _setjmp(TMP4884.context);
		if (TMP4884.status == 0) {
			generateindex_343318((*g).doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
				TMP4884.status = 0;
				popCurrentException();
			}
		}
		if (TMP4884.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_507106)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_docgen2Init)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_docgen2DatInit)(void) {
static TNimNode* TMP4881[2];
static TNimNode TMP1067[3];
NTI507010.size = sizeof(Tgen507010);
NTI507010.kind = 17;
NTI507010.base = (&NTI241005);
TMP4881[0] = &TMP1067[1];
TMP1067[1].kind = 1;
TMP1067[1].offset = offsetof(Tgen507010, doc);
TMP1067[1].typ = (&NTI340009);
TMP1067[1].name = "doc";
TMP4881[1] = &TMP1067[2];
TMP1067[2].kind = 1;
TMP1067[2].offset = offsetof(Tgen507010, module);
TMP1067[2].typ = (&NTI190811);
TMP1067[2].name = "module";
TMP1067[0].len = 2; TMP1067[0].kind = 2; TMP1067[0].sons = &TMP4881[0];
NTI507010.node = &TMP1067[0];
NTI507012.size = sizeof(Tgen507010*);
NTI507012.kind = 22;
NTI507012.base = (&NTI507010);
NTI507012.marker = TMP4882;
}

