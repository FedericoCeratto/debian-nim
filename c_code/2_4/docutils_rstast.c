/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trstnode343011 trstnode343011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct trstnodeseq343009 trstnodeseq343009;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44933 tcell44933;
typedef struct tcellseq44949 tcellseq44949;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44945 tcellset44945;
typedef struct tpagedesc44941 tpagedesc44941;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  trstnode343011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq343009* Sons;
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell44933  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44949  {
NI Len;
NI Cap;
tcell44933** D;
};
struct  tcellset44945  {
NI Counter;
NI Max;
tpagedesc44941* Head;
tpagedesc44941** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44949 Zct;
tcellseq44949 Decstack;
tcellset44945 Cycleroots;
tcellseq44949 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
typedef NI TY26420[16];
struct  tpagedesc44941  {
tpagedesc44941* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct trstnodeseq343009 {
  TGenericSeq Sup;
  trstnode343011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2471)(void* p, NI op);
N_NIMCALL(void, TMP2472)(void* p, NI op);
N_NIMCALL(trstnode343011*, newrstnode_343105)(NU8 kind);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, add_343183)(trstnode343011* father, trstnode343011* son);
TNimType NTI343011; /* TRstNode */
TNimType NTI343005; /* TRstNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI343009; /* TRstNodeSeq */
TNimType NTI343007; /* PRstNode */
extern tgcheap47016 gch_47044;

N_NIMCALL(NI, len_343084)(trstnode343011* n) {
	NI result;
	result = 0;
	result = (*n).Sons->Sup.len;
	return result;
}

N_NIMCALL(trstnode343011*, lastson_343162)(trstnode343011* n) {
	trstnode343011* result;
	result = 0;
	result = (*n).Sons->data[(NI32)((*n).Sons->Sup.len - 1)];
	return result;
}
N_NIMCALL(void, TMP2471)(void* p, NI op) {
	trstnodeseq343009* a;
	NI LOC1;
	a = (trstnodeseq343009*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP2472)(void* p, NI op) {
	trstnode343011* a;
	a = (trstnode343011*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
}

static N_INLINE(tcell44933*, usrtocell_48646)(void* usr) {
	tcell44933* result;
	result = 0;
	result = ((tcell44933*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44933))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44933* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44933* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
}

N_NIMCALL(trstnode343011*, newrstnode_343105)(NU8 kind) {
	trstnode343011* result;
	result = 0;
	result = (trstnode343011*) newObj((&NTI343007), sizeof(trstnode343011));
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (trstnodeseq343009*) newSeqRC1((&NTI343009), 0);
	(*result).Kind = kind;
	return result;
}

N_NIMCALL(trstnode343011*, newrstnode_343151)(NU8 kind, NimStringDesc* s) {
	trstnode343011* result;
	NimStringDesc* LOC1;
	result = 0;
	result = newrstnode_343105(kind);
	LOC1 = 0;
	LOC1 = (*result).Text; (*result).Text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44933* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44933* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, add_343183)(trstnode343011* father, trstnode343011* son) {
	(*father).Sons = (trstnodeseq343009*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode343011*));
	asgnRefNoCycle((void**) (&(*father).Sons->data[(*father).Sons->Sup.len-1]), son);
}

N_NIMCALL(void, addifnotnil_343211)(trstnode343011* father, trstnode343011* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_343183(father, son);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void) {
static TNimNode* TMP2467[4];
static TNimNode* TMP2468[65];
NI TMP2470;
static char* NIM_CONST TMP2469[65] = {
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
NTI343011.size = sizeof(trstnode343011);
NTI343011.kind = 18;
NTI343011.base = 0;
NTI343011.flags = 2;
TMP2467[0] = &TMP880[1];
NTI343005.size = sizeof(NU8);
NTI343005.kind = 14;
NTI343005.base = 0;
NTI343005.flags = 3;
for (TMP2470 = 0; TMP2470 < 65; TMP2470++) {
TMP880[TMP2470+2].kind = 1;
TMP880[TMP2470+2].offset = TMP2470;
TMP880[TMP2470+2].name = TMP2469[TMP2470];
TMP2468[TMP2470] = &TMP880[TMP2470+2];
}
TMP880[67].len = 65; TMP880[67].kind = 2; TMP880[67].sons = &TMP2468[0];
NTI343005.node = &TMP880[67];
TMP880[1].kind = 1;
TMP880[1].offset = offsetof(trstnode343011, Kind);
TMP880[1].typ = (&NTI343005);
TMP880[1].name = "kind";
TMP2467[1] = &TMP880[68];
TMP880[68].kind = 1;
TMP880[68].offset = offsetof(trstnode343011, Text);
TMP880[68].typ = (&NTI149);
TMP880[68].name = "text";
TMP2467[2] = &TMP880[69];
TMP880[69].kind = 1;
TMP880[69].offset = offsetof(trstnode343011, Level);
TMP880[69].typ = (&NTI108);
TMP880[69].name = "level";
TMP2467[3] = &TMP880[70];
NTI343009.size = sizeof(trstnodeseq343009*);
NTI343009.kind = 24;
NTI343009.base = (&NTI343007);
NTI343009.flags = 2;
NTI343009.marker = TMP2471;
TMP880[70].kind = 1;
TMP880[70].offset = offsetof(trstnode343011, Sons);
TMP880[70].typ = (&NTI343009);
TMP880[70].name = "sons";
TMP880[0].len = 4; TMP880[0].kind = 2; TMP880[0].sons = &TMP2467[0];
NTI343011.node = &TMP880[0];
NTI343007.size = sizeof(trstnode343011*);
NTI343007.kind = 22;
NTI343007.base = (&NTI343011);
NTI343007.flags = 2;
NTI343007.marker = TMP2472;
}

