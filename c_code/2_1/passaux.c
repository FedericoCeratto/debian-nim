/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tpasscontext287005 tpasscontext287005;
typedef struct tsym226846 tsym226846;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct ttype226852 ttype226852;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tident201021 tident201021;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tnode226816 tnode226816;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tlib226834 tlib226834;
typedef struct tnodeseq226810 tnodeseq226810;
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
typedef struct TY226936 TY226936;
typedef struct tlistentry127022 tlistentry127022;
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
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable226820  {
NI Counter;
tsymseq226818* Data;
};
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc226830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype226852* T;
trope178009* R;
trope178009* Heaproot;
};
struct  tsym226846  {
  tidobj201015 Sup;
NU8 Kind;
union {
struct {ttypeseq226848* Typeinstcache;
tscope226840* Typscope;
} S1;
struct {TY226947* Procinstcache;
tscope226840* Scope;
} S2;
struct {TY226947* Usedgenerics;
tstrtable226820 Tab;
} S3;
struct {tsym226846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype226852* Typ;
tident201021* Name;
tlineinfo196539 Info;
tsym226846* Owner;
NU32 Flags;
tnode226816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc226830 Loc;
tlib226834* Annex;
tnode226816* Constraint;
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
struct  tnode226816  {
ttype226852* Typ;
tlineinfo196539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym226846* Sym;
} S4;
struct {tident201021* Ident;
} S5;
struct {tnodeseq226810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
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
struct  tpasscontext287005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  ttype226852  {
  tidobj201015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq226848* Sons;
tnode226816* N;
tsym226846* Owner;
tsym226846* Sym;
tsym226846* Destructor;
tsym226846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc226830 Loc;
};
struct  tscope226840  {
NI Depthlevel;
tstrtable226820 Symbols;
tnodeseq226810* Usingsyms;
tscope226840* Parent;
};
struct  tinstantiation226836  {
tsym226846* Sym;
ttypeseq226848* Concretetypes;
TY226936* Usedby;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib226834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode226816* Path;
};
typedef NI TY26420[16];
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
struct ttypeseq226848 {
  TGenericSeq Sup;
  ttype226852* data[SEQ_DECL_SIZE];
};
struct TY226947 {
  TGenericSeq Sup;
  tinstantiation226836* data[SEQ_DECL_SIZE];
};
struct tsymseq226818 {
  TGenericSeq Sup;
  tsym226846* data[SEQ_DECL_SIZE];
};
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, rawmessage_198733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, internalerror_199006)(NimStringDesc* errmsg);
N_NIMCALL(void, message_198976)(tlineinfo196539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NI, sonslen_227249)(tnode226816* n);
N_NIMCALL(tnode226816*, cleanup_608077)(tpasscontext287005* c, tnode226816* n);
N_NIMCALL(tsym226846*, getmodule_236243)(tsym226846* s);
N_NIMCALL(NIM_BOOL, astneeded_287094)(tsym226846* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
STRING_LITERAL(TMP1945, "logpass: context is not nil", 27);
extern NI gverbosity_170127;
extern NU64 gnotes_197305;
extern NI gbackendid_225013;
extern NU32 gglobaloptions_170118;
extern tnode226816* emptynode_227738;
extern tgcheap47016 gch_47044;

N_NIMCALL(tpasscontext287005*, verboseopen_608012)(tsym226846* s) {
	tpasscontext287005* result;
	result = 0;
	result = NIM_NIL;
	{
		if (!(0 < gverbosity_170127)) goto LA3;
		rawmessage_198733(((NU16) 267), (*(*s).Name).S);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tnode226816*, verboseprocess_608023)(tpasscontext287005* context, tnode226816* n) {
	tnode226816* result;
	result = 0;
	result = n;
	{
		if (!!((context == NIM_NIL))) goto LA3;
		internalerror_199006(((NimStringDesc*) &TMP1945));
	}
	LA3: ;
	{
		NimStringDesc* LOC9;
		if (!(gverbosity_170127 == 3)) goto LA7;
		gnotes_197305 |= ((NI64)1)<<(((((NU16) 267)- 230))%(sizeof(NI64)*8));
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_225013);
		message_198976((*n).Info, ((NU16) 267), LOC9);
	}
	LA7: ;
	return result;
}

static N_INLINE(NI, sonslen_227249)(tnode226816* n) {
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

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44935))))));
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode226816*, cleanup_608077)(tpasscontext287005* c, tnode226816* n) {
	tnode226816* result;
	result = 0;
	result = n;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((gglobaloptions_170118 &(1<<((((NU8) 2))&31)))!=0);
		if (LOC3) goto LA4;
		LOC3 = (n == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		{
			NI i_608124;
			NI HEX3Atmp_608219;
			NI LOC9;
			NI res_608222;
			i_608124 = 0;
			HEX3Atmp_608219 = 0;
			LOC9 = 0;
			LOC9 = sonslen_227249(n);
			HEX3Atmp_608219 = (NI32)(LOC9 - 1);
			res_608222 = 0;
			{
				while (1) {
					tnode226816* LOC12;
					if (!(res_608222 <= HEX3Atmp_608219)) goto LA11;
					i_608124 = res_608222;
					LOC12 = 0;
					LOC12 = cleanup_608077(c, (*n).kindU.S6.Sons->data[i_608124]);
					res_608222 += 1;
				} LA11: ;
			}
		}
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		{
			tsym226846* s;
			if (!((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA16;
			s = (*(*n).kindU.S6.Sons->data[0]).kindU.S4.Sym;
			{
				NIM_BOOL LOC20;
				tsym226846* LOC21;
				NIM_BOOL LOC23;
				LOC20 = 0;
				LOC21 = 0;
				LOC21 = getmodule_236243(s);
				LOC20 = !((((*LOC21).Flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC20)) goto LA22;
				LOC23 = 0;
				LOC23 = astneeded_287094(s);
				LOC20 = !(LOC23);
				LA22: ;
				if (!LOC20) goto LA24;
				asgnRefNoCycle((void**) (&(*(*s).Ast).kindU.S6.Sons->data[6]), emptynode_227738);
			}
			LA24: ;
		}
		LA16: ;
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_passauxInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_passauxDatInit)(void) {
}

