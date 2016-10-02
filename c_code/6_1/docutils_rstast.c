/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Rstnode368011 Rstnode368011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Rstnodeseq368009 Rstnodeseq368009;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
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
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef NU8 Rstnodekind368005;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Rstnode368011  {
Rstnodekind368005 kind;
NimStringDesc* text;
NI level;
Rstnodeseq368009* sons;
};
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
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
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29485 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
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
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29418 bits;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct Rstnodeseq368009 {
  TGenericSeq Sup;
  Rstnode368011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T4150536388_6)(void* p, NI op);
N_NIMCALL(void, T4150536388_7)(void* p, NI op);
N_NIMCALL(Rstnode368011*, newrstnode_368101_4150536388)(Rstnodekind368005 kind0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(void, add_368146_4150536388)(Rstnode368011* father0, Rstnode368011* son0);
TNimType NTI368011; /* RstNode */
TNimType NTI368005; /* RstNodeKind */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
TNimType NTI368009; /* RstNodeSeq */
TNimType NTI368007; /* PRstNode */
extern Gcheap49818 gch_49858_1689653243;

N_NIMCALL(NI, len_368089_4150536388)(Rstnode368011* n0) {
	NI result0;
	result0 = (NI)0;
	result0 = ((*n0).sons ? (*n0).sons->Sup.len : 0);
	return result0;
}

N_NIMCALL(Rstnode368011*, lastson_368134_4150536388)(Rstnode368011* n0) {
	Rstnode368011* result0;
	result0 = (Rstnode368011*)0;
	result0 = (*n0).sons->data[(NI)(((*n0).sons ? (*n0).sons->Sup.len : 0) - ((NI) 1))];
	return result0;
}
N_NIMCALL(void, T4150536388_6)(void* p, NI op) {
	Rstnodeseq368009* a;
	NI LOC1;
	a = (Rstnodeseq368009*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, T4150536388_7)(void* p, NI op) {
	Rstnode368011* a;
	a = (Rstnode368011*)p;
	nimGCvisit((void*)(*a).text, op);
	nimGCvisit((void*)(*a).sons, op);
}

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47305))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47305* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Rstnode368011*, newrstnode_368101_4150536388)(Rstnodekind368005 kind0) {
	Rstnode368011* result0;
	result0 = (Rstnode368011*)0;
	result0 = (Rstnode368011*) newObj((&NTI368007), sizeof(Rstnode368011));
	if ((*result0).sons) nimGCunrefNoCycle((*result0).sons);
	(*result0).sons = (Rstnodeseq368009*) newSeqRC1((&NTI368009), 0);
	(*result0).kind = kind0;
	return result0;
}

N_NIMCALL(Rstnode368011*, newrstnode_368129_4150536388)(Rstnodekind368005 kind0, NimStringDesc* s0) {
	Rstnode368011* result0;
	NimStringDesc* LOC1;
	result0 = (Rstnode368011*)0;
	result0 = newrstnode_368101_4150536388(kind0);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).text; (*result0).text = copyStringRC1(s0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result0;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47305* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c0;
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

N_NIMCALL(void, add_368146_4150536388)(Rstnode368011* father0, Rstnode368011* son0) {
	(*father0).sons = (Rstnodeseq368009*) incrSeqV2(&((*father0).sons)->Sup, sizeof(Rstnode368011*));
	asgnRefNoCycle((void**) (&(*father0).sons->data[(*father0).sons->Sup.len]), son0);
	++(*father0).sons->Sup.len;
}

N_NIMCALL(void, addifnotnil_368160_4150536388)(Rstnode368011* father0, Rstnode368011* son0) {
	{
		if (!!((son0 == NIM_NIL))) goto LA3;
		add_368146_4150536388(father0, son0);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit000)(void) {
static TNimNode* T4150536388_2[4];
static TNimNode* T4150536388_3[65];
NI T4150536388_5;
static char* NIM_CONST T4150536388_4[65] = {
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
static TNimNode T4150536388_0[71];
NTI368011.size = sizeof(Rstnode368011);
NTI368011.kind = 18;
NTI368011.base = 0;
NTI368011.flags = 2;
T4150536388_2[0] = &T4150536388_0[1];
NTI368005.size = sizeof(Rstnodekind368005);
NTI368005.kind = 14;
NTI368005.base = 0;
NTI368005.flags = 3;
for (T4150536388_5 = 0; T4150536388_5 < 65; T4150536388_5++) {
T4150536388_0[T4150536388_5+2].kind = 1;
T4150536388_0[T4150536388_5+2].offset = T4150536388_5;
T4150536388_0[T4150536388_5+2].name = T4150536388_4[T4150536388_5];
T4150536388_3[T4150536388_5] = &T4150536388_0[T4150536388_5+2];
}
T4150536388_0[67].len = 65; T4150536388_0[67].kind = 2; T4150536388_0[67].sons = &T4150536388_3[0];
NTI368005.node = &T4150536388_0[67];
T4150536388_0[1].kind = 1;
T4150536388_0[1].offset = offsetof(Rstnode368011, kind);
T4150536388_0[1].typ = (&NTI368005);
T4150536388_0[1].name = "kind";
T4150536388_2[1] = &T4150536388_0[68];
T4150536388_0[68].kind = 1;
T4150536388_0[68].offset = offsetof(Rstnode368011, text);
T4150536388_0[68].typ = (&NTI138);
T4150536388_0[68].name = "text";
T4150536388_2[2] = &T4150536388_0[69];
T4150536388_0[69].kind = 1;
T4150536388_0[69].offset = offsetof(Rstnode368011, level);
T4150536388_0[69].typ = (&NTI104);
T4150536388_0[69].name = "level";
T4150536388_2[3] = &T4150536388_0[70];
NTI368009.size = sizeof(Rstnodeseq368009*);
NTI368009.kind = 24;
NTI368009.base = (&NTI368007);
NTI368009.flags = 2;
NTI368009.marker = T4150536388_6;
T4150536388_0[70].kind = 1;
T4150536388_0[70].offset = offsetof(Rstnode368011, sons);
T4150536388_0[70].typ = (&NTI368009);
T4150536388_0[70].name = "sons";
T4150536388_0[0].len = 4; T4150536388_0[0].kind = 2; T4150536388_0[0].sons = &T4150536388_2[0];
NTI368011.node = &T4150536388_0[0];
NTI368007.size = sizeof(Rstnode368011*);
NTI368007.kind = 22;
NTI368007.base = (&NTI368011);
NTI368007.flags = 2;
NTI368007.marker = T4150536388_7;
}

