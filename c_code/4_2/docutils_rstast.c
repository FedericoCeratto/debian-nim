/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct trstnode342011 trstnode342011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct trstnodeseq342009 trstnodeseq342009;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44935 tcell44935;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44947 tcellset44947;
typedef struct tpagedesc44943 tpagedesc44943;
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
struct  trstnode342011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq342009* Sons;
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
struct  tcell44935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44951  {
NI Len;
NI Cap;
tcell44935** D;
};
struct  tcellset44947  {
NI Counter;
NI Max;
tpagedesc44943* Head;
tpagedesc44943** Data;
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
tcellseq44951 Zct;
tcellseq44951 Decstack;
tcellset44947 Cycleroots;
tcellseq44951 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
typedef NI TY26420[8];
struct  tpagedesc44943  {
tpagedesc44943* Next;
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
struct trstnodeseq342009 {
  TGenericSeq Sup;
  trstnode342011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2470)(void* p, NI op);
N_NIMCALL(void, TMP2471)(void* p, NI op);
N_NIMCALL(trstnode342011*, newrstnode_342105)(NU8 kind);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, add_342183)(trstnode342011* father, trstnode342011* son);
TNimType NTI342011; /* TRstNode */
TNimType NTI342005; /* TRstNodeKind */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI342009; /* TRstNodeSeq */
TNimType NTI342007; /* PRstNode */
extern tgcheap47016 gch_47044;

N_NIMCALL(NI, len_342084)(trstnode342011* n) {
	NI result;
	result = 0;
	result = (*n).Sons->Sup.len;
	return result;
}

N_NIMCALL(trstnode342011*, lastson_342162)(trstnode342011* n) {
	trstnode342011* result;
	result = 0;
	result = (*n).Sons->data[(NI64)((*n).Sons->Sup.len - 1)];
	return result;
}
N_NIMCALL(void, TMP2470)(void* p, NI op) {
	trstnodeseq342009* a;
	NI LOC1;
	a = (trstnodeseq342009*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}
N_NIMCALL(void, TMP2471)(void* p, NI op) {
	trstnode342011* a;
	a = (trstnode342011*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
}

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44935* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
}

N_NIMCALL(trstnode342011*, newrstnode_342105)(NU8 kind) {
	trstnode342011* result;
	result = 0;
	result = (trstnode342011*) newObj((&NTI342007), sizeof(trstnode342011));
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (trstnodeseq342009*) newSeqRC1((&NTI342009), 0);
	(*result).Kind = kind;
	return result;
}

N_NIMCALL(trstnode342011*, newrstnode_342151)(NU8 kind, NimStringDesc* s) {
	trstnode342011* result;
	NimStringDesc* LOC1;
	result = 0;
	result = newrstnode_342105(kind);
	LOC1 = 0;
	LOC1 = (*result).Text; (*result).Text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44935* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44935* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, add_342183)(trstnode342011* father, trstnode342011* son) {
	(*father).Sons = (trstnodeseq342009*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode342011*));
	asgnRefNoCycle((void**) (&(*father).Sons->data[(*father).Sons->Sup.len-1]), son);
}

N_NIMCALL(void, addifnotnil_342211)(trstnode342011* father, trstnode342011* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3;
		add_342183(father, son);
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, docutils_rstastInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, docutils_rstastDatInit)(void) {
static TNimNode* TMP2466[4];
static TNimNode* TMP2467[65];
NI TMP2469;
static char* NIM_CONST TMP2468[65] = {
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
static TNimNode TMP878[71];
NTI342011.size = sizeof(trstnode342011);
NTI342011.kind = 18;
NTI342011.base = 0;
NTI342011.flags = 2;
TMP2466[0] = &TMP878[1];
NTI342005.size = sizeof(NU8);
NTI342005.kind = 14;
NTI342005.base = 0;
NTI342005.flags = 3;
for (TMP2469 = 0; TMP2469 < 65; TMP2469++) {
TMP878[TMP2469+2].kind = 1;
TMP878[TMP2469+2].offset = TMP2469;
TMP878[TMP2469+2].name = TMP2468[TMP2469];
TMP2467[TMP2469] = &TMP878[TMP2469+2];
}
TMP878[67].len = 65; TMP878[67].kind = 2; TMP878[67].sons = &TMP2467[0];
NTI342005.node = &TMP878[67];
TMP878[1].kind = 1;
TMP878[1].offset = offsetof(trstnode342011, Kind);
TMP878[1].typ = (&NTI342005);
TMP878[1].name = "kind";
TMP2466[1] = &TMP878[68];
TMP878[68].kind = 1;
TMP878[68].offset = offsetof(trstnode342011, Text);
TMP878[68].typ = (&NTI149);
TMP878[68].name = "text";
TMP2466[2] = &TMP878[69];
TMP878[69].kind = 1;
TMP878[69].offset = offsetof(trstnode342011, Level);
TMP878[69].typ = (&NTI108);
TMP878[69].name = "level";
TMP2466[3] = &TMP878[70];
NTI342009.size = sizeof(trstnodeseq342009*);
NTI342009.kind = 24;
NTI342009.base = (&NTI342007);
NTI342009.flags = 2;
NTI342009.marker = TMP2470;
TMP878[70].kind = 1;
TMP878[70].offset = offsetof(trstnode342011, Sons);
TMP878[70].typ = (&NTI342009);
TMP878[70].name = "sons";
TMP878[0].len = 4; TMP878[0].kind = 2; TMP878[0].sons = &TMP2466[0];
NTI342011.node = &TMP878[0];
NTI342007.size = sizeof(trstnode342011*);
NTI342007.kind = 22;
NTI342007.base = (&NTI342011);
NTI342007.flags = 2;
NTI342007.marker = TMP2471;
}

