/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct trope176009 trope176009;
typedef struct tpasscontext285005 tpasscontext285005;
typedef struct tsym224846 tsym224846;
typedef struct tgen607016 tgen607016;
typedef struct TNimObject TNimObject;
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
typedef struct tnode224816 tnode224816;
typedef struct ttype224852 ttype224852;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident199021 tident199021;
typedef struct tnodeseq224810 tnodeseq224810;
typedef struct tidobj199015 tidobj199015;
typedef struct ttypeseq224848 ttypeseq224848;
typedef struct tscope224840 tscope224840;
typedef struct TY224947 TY224947;
typedef struct tinstantiation224836 tinstantiation224836;
typedef struct tstrtable224820 tstrtable224820;
typedef struct tsymseq224818 tsymseq224818;
typedef struct tloc224830 tloc224830;
typedef struct tlib224834 tlib224834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY224936 TY224936;
typedef struct tlistentry126022 tlistentry126022;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext285005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen607016  {
  tpasscontext285005 Sup;
tsym224846* Module;
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
struct  tlineinfo194539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode224816  {
ttype224852* Typ;
tlineinfo194539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym224846* Sym;
} S4;
struct {tident199021* Ident;
} S5;
struct {tnodeseq224810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef trope176009* TY587896[2];
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable224820  {
NI Counter;
tsymseq224818* Data;
};
struct  tloc224830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224852* T;
trope176009* R;
trope176009* Heaproot;
};
struct  tsym224846  {
  tidobj199015 Sup;
NU8 Kind;
union {
struct {ttypeseq224848* Typeinstcache;
tscope224840* Typscope;
} S1;
struct {TY224947* Procinstcache;
tscope224840* Scope;
} S2;
struct {TY224947* Usedgenerics;
tstrtable224820 Tab;
} S3;
struct {tsym224846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype224852* Typ;
tident199021* Name;
tlineinfo194539 Info;
tsym224846* Owner;
NU32 Flags;
tnode224816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc224830 Loc;
tlib224834* Annex;
tnode224816* Constraint;
};
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
NI H;
};
struct  trope176009  {
  TNimObject Sup;
trope176009* Left;
trope176009* Right;
NI Length;
NimStringDesc* Data;
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
struct  ttype224852  {
  tidobj199015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq224848* Sons;
tnode224816* N;
tsym224846* Owner;
tsym224846* Sym;
tsym224846* Destructor;
tsym224846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc224830 Loc;
};
struct  tscope224840  {
NI Depthlevel;
tstrtable224820 Symbols;
tnodeseq224810* Usingsyms;
tscope224840* Parent;
};
struct  tinstantiation224836  {
tsym224846* Sym;
ttypeseq224848* Concretetypes;
TY224936* Usedby;
};
struct  tlistentry126022  {
  TNimObject Sup;
tlistentry126022* Prev;
tlistentry126022* Next;
};
struct  tlib224834  {
  tlistentry126022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope176009* Name;
tnode224816* Path;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct tnodeseq224810 {
  TGenericSeq Sup;
  tnode224816* data[SEQ_DECL_SIZE];
};
struct ttypeseq224848 {
  TGenericSeq Sup;
  ttype224852* data[SEQ_DECL_SIZE];
};
struct TY224947 {
  TGenericSeq Sup;
  tinstantiation224836* data[SEQ_DECL_SIZE];
};
struct tsymseq224818 {
  TGenericSeq Sup;
  tsym224846* data[SEQ_DECL_SIZE];
};
struct TY224936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4825)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
static N_INLINE(NI, sonslen_225249)(tnode224816* n);
N_NIMCALL(NimStringDesc*, getmodulename_297018)(tnode224816* n);
N_NIMCALL(void, adddependencyaux_607028)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, appf_176115)(trope176009** c, NimStringDesc* frmt, trope176009** args, NI argsLen0);
N_NIMCALL(trope176009*, torope_176076)(NimStringDesc* s);
N_NIMCALL(tnode224816*, adddotdependency_607043)(tpasscontext285005* c, tnode224816* n);
N_NIMCALL(void, writerope_177423)(trope176009* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(trope176009*, ropef_176107)(NimStringDesc* frmt, trope176009** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
STRING_LITERAL(TMP4826, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP4827, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP4828, "", 0);
STRING_LITERAL(TMP4829, "dot", 3);
trope176009* gdotgraph_607023;
extern TNimType NTI285005; /* TPassContext */
TNimType NTI607016; /* TGen */
extern TNimType NTI224814; /* PSym */
TNimType NTI607018; /* PGen */
extern tgcheap47016 gch_47044;
N_NIMCALL(void, TMP4825)(void* p, NI op) {
	tgen607016* a;
	a = (tgen607016*)p;
	nimGCvisit((void*)(*a).Module, op);
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

N_NIMCALL(tpasscontext285005*, myopen_607168)(tsym224846* module) {
	tpasscontext285005* result;
	tgen607016* g;
	result = 0;
	g = 0;
	g = (tgen607016*) newObj((&NTI607018), sizeof(tgen607016));
	(*g).Sup.Sup.m_type = (&NTI607016);
	asgnRefNoCycle((void**) (&(*g).Module), module);
	result = &g->Sup;
	return result;
}

static N_INLINE(NI, sonslen_225249)(tnode224816* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, adddependencyaux_607028)(NimStringDesc* importing, NimStringDesc* imported) {
	TY587896 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = torope_176076(importing);
	LOC1[1] = torope_176076(imported);
	appf_176115(&gdotgraph_607023, ((NimStringDesc*) &TMP4826), LOC1, 2);
}

N_NIMCALL(tnode224816*, adddotdependency_607043)(tpasscontext285005* c, tnode224816* n) {
	tnode224816* result;
	tgen607016* g;
	result = 0;
	result = n;
	g = ((tgen607016*) (c));
	switch ((*n).Kind) {
	case ((NU8) 116):
	{
		{
			NI i_607061;
			NI HEX3Atmp_607120;
			NI LOC3;
			NI res_607123;
			i_607061 = 0;
			HEX3Atmp_607120 = 0;
			LOC3 = 0;
			LOC3 = sonslen_225249(n);
			HEX3Atmp_607120 = (NI64)(LOC3 - 1);
			res_607123 = 0;
			{
				while (1) {
					NimStringDesc* imported;
					if (!(res_607123 <= HEX3Atmp_607120)) goto LA5;
					i_607061 = res_607123;
					imported = getmodulename_297018((*n).kindU.S6.Sons->data[i_607061]);
					adddependencyaux_607028((*(*(*g).Module).Name).S, imported);
					res_607123 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 120):
	case ((NU8) 117):
	{
		NimStringDesc* imported;
		imported = getmodulename_297018((*n).kindU.S6.Sons->data[0]);
		adddependencyaux_607028((*(*(*g).Module).Name).S, imported);
	}
	break;
	case ((NU8) 115):
	case ((NU8) 112):
	case ((NU8) 126):
	case ((NU8) 127):
	{
		{
			NI i_607104;
			NI HEX3Atmp_607126;
			NI LOC9;
			NI res_607129;
			i_607104 = 0;
			HEX3Atmp_607126 = 0;
			LOC9 = 0;
			LOC9 = sonslen_225249(n);
			HEX3Atmp_607126 = (NI64)(LOC9 - 1);
			res_607129 = 0;
			{
				while (1) {
					tnode224816* LOC12;
					if (!(res_607129 <= HEX3Atmp_607126)) goto LA11;
					i_607104 = res_607129;
					LOC12 = 0;
					LOC12 = adddotdependency_607043(c, (*n).kindU.S6.Sons->data[i_607104]);
					res_607129 += 1;
				} LA11: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(void, generatedot_607009)(NimStringDesc* project) {
	TY587896 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	trope176009* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP4828));
	LOC1[0] = torope_176076(LOC3);
	LOC1[1] = gdotgraph_607023;
	LOC4 = 0;
	LOC4 = ropef_176107(((NimStringDesc*) &TMP4827), LOC1, 2);
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP4829));
	writerope_177423(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_dependsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_dependsDatInit)(void) {
static TNimNode TMP985[1];
NTI607016.size = sizeof(tgen607016);
NTI607016.kind = 17;
NTI607016.base = (&NTI285005);
TMP985[0].kind = 1;
TMP985[0].offset = offsetof(tgen607016, Module);
TMP985[0].typ = (&NTI224814);
TMP985[0].name = "module";
NTI607016.node = &TMP985[0];
NTI607018.size = sizeof(tgen607016*);
NTI607018.kind = 22;
NTI607018.base = (&NTI607016);
NTI607018.marker = TMP4825;
}

