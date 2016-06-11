/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Rstnode337012 Rstnode337012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Rstnodeseq337010 Rstnodeseq337010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47904 Cell47904;
typedef struct Cellseq47920 Cellseq47920;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30085 Memregion30085;
typedef struct Smallchunk30039 Smallchunk30039;
typedef struct Llchunk30079 Llchunk30079;
typedef struct Bigchunk30041 Bigchunk30041;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30083 Avlnode30083;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47916 Cellset47916;
typedef struct Pagedesc47912 Pagedesc47912;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef NU8 Rstnodekind337006;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Rstnode337012  {
Rstnodekind337006 kind;
NimStringDesc* text;
NI level;
Rstnodeseq337010* sons;
};
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47904  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47920  {
NI len;
NI cap;
Cell47904** d;
};
typedef Smallchunk30039* TY30100[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30085  {
NI minlargeobj;
NI maxlargeobj;
TY30100 freesmallchunks;
Llchunk30079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30041* freechunkslist;
Intset30014 chunkstarts;
Avlnode30083* root;
Avlnode30083* deleted;
Avlnode30083* last;
Avlnode30083* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47916  {
NI counter;
NI max;
Pagedesc47912* head;
Pagedesc47912** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47920 zct;
Cellseq47920 decstack;
Cellseq47920 tempstack;
NI recgclock;
Memregion30085 region;
Gcstat50414 stat;
Cellset47916 marked;
Cellseq47920 additionalroots;
};
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30039  {
  Basechunk30037 Sup;
Smallchunk30039* next;
Smallchunk30039* prev;
Freecell30029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30079  {
NI size;
NI acc;
Llchunk30079* next;
};
struct  Bigchunk30041  {
  Basechunk30037 Sup;
Bigchunk30041* next;
Bigchunk30041* prev;
NI align;
NF data;
};
typedef NI TY30018[16];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30018 bits;
};
typedef Avlnode30083* TY30090[2];
struct  Avlnode30083  {
TY30090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47912  {
Pagedesc47912* next;
NI key;
TY30018 bits;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct Rstnodeseq337010 {
  TGenericSeq Sup;
  Rstnode337012* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP2754)(void* p, NI op);
N_NIMCALL(void, TMP2755)(void* p, NI op);
N_NIMCALL(Rstnode337012*, newrstnode_337099_4150536388)(Rstnodekind337006 kind0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47904*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47904* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47920* s0, Cell47904* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(void, add_337144_4150536388)(Rstnode337012* father0, Rstnode337012* son0);
TNimType NTI337012; /* RstNode */
TNimType NTI337006; /* RstNodeKind */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
TNimType NTI337010; /* RstNodeSeq */
TNimType NTI337008; /* PRstNode */
extern Gcheap50418 gch_50458_1689653243;

N_NIMCALL(NI, len_337087_4150536388)(Rstnode337012* n0) {
	NI result0;
	result0 = (NI)0;
	result0 = ((*n0).sons ? (*n0).sons->Sup.len : 0);
	return result0;
}

N_NIMCALL(Rstnode337012*, lastson_337132_4150536388)(Rstnode337012* n0) {
	Rstnode337012* result0;
	result0 = (Rstnode337012*)0;
	result0 = (*n0).sons->data[(NI)(((*n0).sons ? (*n0).sons->Sup.len : 0) - ((NI) 1))];
	return result0;
}
N_NIMCALL(void, TMP2754)(void* p, NI op) {
	Rstnodeseq337010* a;
	NI LOC1;
	a = (Rstnodeseq337010*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP2755)(void* p, NI op) {
	Rstnode337012* a;
	a = (Rstnode337012*)p;
	nimGCvisit((void*)(*a).text, op);
	nimGCvisit((void*)(*a).sons, op);
}

static N_INLINE(Cell47904*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47904* result0;
	result0 = (Cell47904*)0;
	result0 = ((Cell47904*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47904))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47904* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47904* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Rstnode337012*, newrstnode_337099_4150536388)(Rstnodekind337006 kind0) {
	Rstnode337012* result0;
	result0 = (Rstnode337012*)0;
	result0 = (Rstnode337012*) newObj((&NTI337008), sizeof(Rstnode337012));
	if ((*result0).sons) nimGCunrefNoCycle((*result0).sons);
	(*result0).sons = (Rstnodeseq337010*) newSeqRC1((&NTI337010), 0);
	(*result0).kind = kind0;
	return result0;
}

N_NIMCALL(Rstnode337012*, newrstnode_337127_4150536388)(Rstnodekind337006 kind0, NimStringDesc* s0) {
	Rstnode337012* result0;
	NimStringDesc* LOC1;
	result0 = (Rstnode337012*)0;
	result0 = newrstnode_337099_4150536388(kind0);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).text; (*result0).text = copyStringRC1(s0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result0;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47904* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47904* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(void, add_337144_4150536388)(Rstnode337012* father0, Rstnode337012* son0) {
	(*father0).sons = (Rstnodeseq337010*) incrSeqV2(&((*father0).sons)->Sup, sizeof(Rstnode337012*));
	asgnRefNoCycle((void**) (&(*father0).sons->data[(*father0).sons->Sup.len]), son0);
	++(*father0).sons->Sup.len;
}

N_NIMCALL(void, addifnotnil_337158_4150536388)(Rstnode337012* father0, Rstnode337012* son0) {
	{
		if (!!((son0 == NIM_NIL))) goto LA3;
		add_337144_4150536388(father0, son0);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit000)(void) {
static TNimNode* TMP2750[4];
static TNimNode* TMP2751[65];
NI TMP2753;
static char* NIM_CONST TMP2752[65] = {
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
static TNimNode TMP1049[71];
NTI337012.size = sizeof(Rstnode337012);
NTI337012.kind = 18;
NTI337012.base = 0;
NTI337012.flags = 2;
TMP2750[0] = &TMP1049[1];
NTI337006.size = sizeof(Rstnodekind337006);
NTI337006.kind = 14;
NTI337006.base = 0;
NTI337006.flags = 3;
for (TMP2753 = 0; TMP2753 < 65; TMP2753++) {
TMP1049[TMP2753+2].kind = 1;
TMP1049[TMP2753+2].offset = TMP2753;
TMP1049[TMP2753+2].name = TMP2752[TMP2753];
TMP2751[TMP2753] = &TMP1049[TMP2753+2];
}
TMP1049[67].len = 65; TMP1049[67].kind = 2; TMP1049[67].sons = &TMP2751[0];
NTI337006.node = &TMP1049[67];
TMP1049[1].kind = 1;
TMP1049[1].offset = offsetof(Rstnode337012, kind);
TMP1049[1].typ = (&NTI337006);
TMP1049[1].name = "kind";
TMP2750[1] = &TMP1049[68];
TMP1049[68].kind = 1;
TMP1049[68].offset = offsetof(Rstnode337012, text);
TMP1049[68].typ = (&NTI138);
TMP1049[68].name = "text";
TMP2750[2] = &TMP1049[69];
TMP1049[69].kind = 1;
TMP1049[69].offset = offsetof(Rstnode337012, level);
TMP1049[69].typ = (&NTI104);
TMP1049[69].name = "level";
TMP2750[3] = &TMP1049[70];
NTI337010.size = sizeof(Rstnodeseq337010*);
NTI337010.kind = 24;
NTI337010.base = (&NTI337008);
NTI337010.flags = 2;
NTI337010.marker = TMP2754;
TMP1049[70].kind = 1;
TMP1049[70].offset = offsetof(Rstnode337012, sons);
TMP1049[70].typ = (&NTI337010);
TMP1049[70].name = "sons";
TMP1049[0].len = 4; TMP1049[0].kind = 2; TMP1049[0].sons = &TMP2750[0];
NTI337012.node = &TMP1049[0];
NTI337008.size = sizeof(Rstnode337012*);
NTI337008.kind = 22;
NTI337008.base = (&NTI337012);
NTI337008.flags = 2;
NTI337008.marker = TMP2755;
}

