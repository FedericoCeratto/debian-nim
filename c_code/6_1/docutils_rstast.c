/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Trstnode296011 Trstnode296011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Trstnodeseq296009 Trstnodeseq296009;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Trstnode296011  {
NU8 kind;
NimStringDesc* text;
NI level;
Trstnodeseq296009* sons;
};
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
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
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
typedef NI TY27420[16];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
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
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct Trstnodeseq296009 {
  TGenericSeq Sup;
  Trstnode296011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2453)(void* p, NI op);
N_NIMCALL(void, TMP2454)(void* p, NI op);
N_NIMCALL(Trstnode296011*, newrstnode_296102)(NU8 kind);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, add_296165)(Trstnode296011* father, Trstnode296011* son);
TNimType NTI296011; /* TRstNode */
TNimType NTI296005; /* TRstNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI296009; /* TRstNodeSeq */
TNimType NTI296007; /* PRstNode */
extern Tgcheap48216 gch_48244;

N_NIMCALL(NI, len_296084)(Trstnode296011* n) {
	NI result;
	result = 0;
	result = ((*n).sons ? (*n).sons->Sup.len : 0);
	return result;
}

N_NIMCALL(Trstnode296011*, lastson_296147)(Trstnode296011* n) {
	Trstnode296011* result;
	result = 0;
	result = (*n).sons->data[(NI)(((*n).sons ? (*n).sons->Sup.len : 0) - ((NI) 1))];
	return result;
}
N_NIMCALL(void, TMP2453)(void* p, NI op) {
	Trstnodeseq296009* a;
	NI LOC1;
	a = (Trstnodeseq296009*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP2454)(void* p, NI op) {
	Trstnode296011* a;
	a = (Trstnode296011*)p;
	nimGCvisit((void*)(*a).text, op);
	nimGCvisit((void*)(*a).sons, op);
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(Trstnode296011*, newrstnode_296102)(NU8 kind) {
	Trstnode296011* result;
	result = 0;
	result = (Trstnode296011*) newObj((&NTI296007), sizeof(Trstnode296011));
	if ((*result).sons) nimGCunrefNoCycle((*result).sons);
	(*result).sons = (Trstnodeseq296009*) newSeqRC1((&NTI296009), 0);
	(*result).kind = kind;
	return result;
}

N_NIMCALL(Trstnode296011*, newrstnode_296136)(NU8 kind, NimStringDesc* s) {
	Trstnode296011* result;
	NimStringDesc* LOC1;
	result = 0;
	result = newrstnode_296102(kind);
	LOC1 = 0;
	LOC1 = (*result).text; (*result).text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46347* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46347* c;
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

N_NIMCALL(void, add_296165)(Trstnode296011* father, Trstnode296011* son) {
	(*father).sons = (Trstnodeseq296009*) incrSeq(&((*father).sons)->Sup, sizeof(Trstnode296011*));
	asgnRefNoCycle((void**) (&(*father).sons->data[(*father).sons->Sup.len-1]), son);
}

N_NIMCALL(void, addifnotnil_296185)(Trstnode296011* father, Trstnode296011* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_296165(father, son);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void) {
static TNimNode* TMP2449[4];
static TNimNode* TMP2450[65];
NI TMP2452;
static char* NIM_CONST TMP2451[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP880[71];
NTI296011.size = sizeof(Trstnode296011);
NTI296011.kind = 18;
NTI296011.base = 0;
NTI296011.flags = 2;
TMP2449[0] = &TMP880[1];
NTI296005.size = sizeof(NU8);
NTI296005.kind = 14;
NTI296005.base = 0;
NTI296005.flags = 3;
for (TMP2452 = 0; TMP2452 < 65; TMP2452++) {
TMP880[TMP2452+2].kind = 1;
TMP880[TMP2452+2].offset = TMP2452;
TMP880[TMP2452+2].name = TMP2451[TMP2452];
TMP2450[TMP2452] = &TMP880[TMP2452+2];
}
TMP880[67].len = 65; TMP880[67].kind = 2; TMP880[67].sons = &TMP2450[0];
NTI296005.node = &TMP880[67];
TMP880[1].kind = 1;
TMP880[1].offset = offsetof(Trstnode296011, kind);
TMP880[1].typ = (&NTI296005);
TMP880[1].name = "kind";
TMP2449[1] = &TMP880[68];
TMP880[68].kind = 1;
TMP880[68].offset = offsetof(Trstnode296011, text);
TMP880[68].typ = (&NTI149);
TMP880[68].name = "text";
TMP2449[2] = &TMP880[69];
TMP880[69].kind = 1;
TMP880[69].offset = offsetof(Trstnode296011, level);
TMP880[69].typ = (&NTI108);
TMP880[69].name = "level";
TMP2449[3] = &TMP880[70];
NTI296009.size = sizeof(Trstnodeseq296009*);
NTI296009.kind = 24;
NTI296009.base = (&NTI296007);
NTI296009.flags = 2;
NTI296009.marker = TMP2453;
TMP880[70].kind = 1;
TMP880[70].offset = offsetof(Trstnode296011, sons);
TMP880[70].typ = (&NTI296009);
TMP880[70].name = "sons";
TMP880[0].len = 4; TMP880[0].kind = 2; TMP880[0].sons = &TMP2449[0];
NTI296011.node = &TMP880[0];
NTI296007.size = sizeof(Trstnode296011*);
NTI296007.kind = 22;
NTI296007.base = (&NTI296011);
NTI296007.flags = 2;
NTI296007.marker = TMP2454;
}

