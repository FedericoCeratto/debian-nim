/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct trope178009 trope178009;
typedef struct TY550150 TY550150;
typedef struct tcgen550035 tcgen550035;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext287005 tpasscontext287005;
typedef struct TNimObject TNimObject;
typedef struct tsym226846 tsym226846;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable226864 tidtable226864;
typedef struct tidpairseq226862 tidpairseq226862;
typedef struct tidpair226860 tidpair226860;
typedef struct tidobj201015 tidobj201015;
typedef struct intset223056 intset223056;
typedef struct ttrunk223052 ttrunk223052;
typedef struct ttrunkseq223054 ttrunkseq223054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tcproc550031 tcproc550031;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct ttype226852 ttype226852;
typedef struct tnodetable226876 tnodetable226876;
typedef struct tnodepairseq226874 tnodepairseq226874;
typedef struct tnodepair226872 tnodepair226872;
typedef struct tnode226816 tnode226816;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct TY196552 TY196552;
typedef struct TY550102 TY550102;
typedef struct tblock550029 tblock550029;
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
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tident201021 tident201021;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tloc226830 tloc226830;
typedef struct tlib226834 tlib226834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY226936 TY226936;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext287005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope178009* tcfilesections550019[18];
struct  tidpair226860  {
tidobj201015* Key;
TNimObject* Val;
};
struct  tidtable226864  {
NI Counter;
tidpairseq226862* Data;
};
struct  intset223056  {
NI Counter;
NI Max;
ttrunk223052* Head;
ttrunkseq223054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair226872  {
NI H;
tnode226816* Key;
NI Val;
};
struct  tnodetable226876  {
NI Counter;
tnodepairseq226874* Data;
};
typedef trope178009* TY550138[10];
struct  tcgen550035  {
  tpasscontext287005 Sup;
tsym226846* Module;
NimStringDesc* Filename;
tcfilesections550019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable226864 Typecache;
tidtable226864 Forwtypecache;
intset223056 Declaredthings;
intset223056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset223056 Typeinfomarker;
tcproc550031* Initproc;
tcproc550031* Postinitproc;
tcproc550031* Preinitproc;
ttypeseq226848* Typestack;
tnodetable226876 Datacache;
tsymseq226818* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope178009* Typenodesname;
trope178009* Nimtypesname;
NI Labels;
TY550138 Extensionloaders;
trope178009* Injectstmt;
};
typedef trope178009* tcprocsections550023[3];
struct  tblock550029  {
NI Id;
trope178009* Label;
tcprocsections550023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc550031  {
tsym226846* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq226810* Nestedtrystmts;
NI Inexceptblock;
TY196552* Finallysafepoints;
NI Labels;
TY550102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen550035* Module;
NI Withinloop;
NI Gcframeid;
trope178009* Gcframetype;
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26420[8];
struct  ttrunk223052  {
ttrunk223052* Next;
NI Key;
TY26420 Bits;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
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
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
struct  tlib226834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode226816* Path;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct TY550150 {
  TGenericSeq Sup;
  tcgen550035* data[SEQ_DECL_SIZE];
};
struct tidpairseq226862 {
  TGenericSeq Sup;
  tidpair226860 data[SEQ_DECL_SIZE];
};
struct ttrunkseq223054 {
  TGenericSeq Sup;
  ttrunk223052* data[SEQ_DECL_SIZE];
};
struct ttypeseq226848 {
  TGenericSeq Sup;
  ttype226852* data[SEQ_DECL_SIZE];
};
struct tnodepairseq226874 {
  TGenericSeq Sup;
  tnodepair226872 data[SEQ_DECL_SIZE];
};
struct tsymseq226818 {
  TGenericSeq Sup;
  tsym226846* data[SEQ_DECL_SIZE];
};
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct TY196552 {
  TGenericSeq Sup;
  trope178009* data[SEQ_DECL_SIZE];
};
struct TY550102 {
  TGenericSeq Sup;
  tblock550029 data[SEQ_DECL_SIZE];
};
struct TY226947 {
  TGenericSeq Sup;
  tinstantiation226836* data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP973)(void* p, NI op);
N_NIMCALL(void, TMP974)(void* p, NI op);
N_NIMCALL(void, TMP978)(void* p, NI op);
N_NIMCALL(void, TMP979)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_50604)(tcell44935* c);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c);
N_NOINLINE(void, incl_45671)(tcellset44947* s, tcell44935* cell);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44935* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
trope178009* mainmodprocs_550145;
trope178009* mainmodinit_550146;
trope178009* othermodsinit_550147;
trope178009* maindatinit_550148;
trope178009* gmapping_550149;
TY550150* gmodules_550171;
extern TNimType NTI287005; /* TPassContext */
TNimType NTI550035; /* TCGen */
extern TNimType NTI226814; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI178007; /* PRope */
TNimType NTI550019; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI226864; /* TIdTable */
extern TNimType NTI223056; /* IntSet */
extern TNimType NTI127028; /* TLinkedList */
TNimType NTI550031; /* TCProc */
extern TNimType NTI226810; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI196552; /* seq[PRope] */
extern TNimType NTI3207; /* Natural */
TNimType NTI550029; /* TBlock */
TNimType NTI550023; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI550102; /* seq[TBlock] */
extern TNimType NTI170016; /* TOptions */
TNimType NTI550027; /* BProc */
extern TNimType NTI226848; /* TTypeSeq */
extern TNimType NTI226876; /* TNodeTable */
extern TNimType NTI226818; /* TSymSeq */
TNimType NTI550138; /* array[48..57, PRope] */
TNimType NTI550025; /* BModule */
TNimType NTI550150; /* seq[BModule] */
extern tgcheap47016 gch_47044;
NI gforwardedprocscounter_550172;
extern NU32 goptions_170116;
N_NIMCALL(void, TMP973)(void* p, NI op) {
	TY550102* a;
	NI LOC1;
	NI LOC2;
	a = (TY550102*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP974)(void* p, NI op) {
	tcproc550031* a;
	a = (tcproc550031*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Finallysafepoints, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP978)(void* p, NI op) {
	tcgen550035* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen550035*)p;
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Filename, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).S[LOC1], op);
	}
	nimGCvisit((void*)(*a).Cfilename, op);
	nimGCvisit((void*)(*a).Typecache.Data, op);
	nimGCvisit((void*)(*a).Forwtypecache.Data, op);
	nimGCvisit((void*)(*a).Declaredthings.Head, op);
	nimGCvisit((void*)(*a).Declaredthings.Data, op);
	nimGCvisit((void*)(*a).Declaredprotos.Head, op);
	nimGCvisit((void*)(*a).Declaredprotos.Data, op);
	nimGCvisit((void*)(*a).Headerfiles.Head, op);
	nimGCvisit((void*)(*a).Headerfiles.Tail, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Head, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Data, op);
	nimGCvisit((void*)(*a).Initproc, op);
	nimGCvisit((void*)(*a).Postinitproc, op);
	nimGCvisit((void*)(*a).Preinitproc, op);
	nimGCvisit((void*)(*a).Typestack, op);
	nimGCvisit((void*)(*a).Datacache.Data, op);
	nimGCvisit((void*)(*a).Forwardedprocs, op);
	nimGCvisit((void*)(*a).Typenodesname, op);
	nimGCvisit((void*)(*a).Nimtypesname, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).Extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).Injectstmt, op);
}
N_NIMCALL(void, TMP979)(void* p, NI op) {
	TY550150* a;
	NI LOC1;
	a = (TY550150*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45671((&gch_47044.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, decref_50604)(tcell44935* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49429(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	tcell44935* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_48646(p);
	decref_50604(LOC1);
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

static N_INLINE(void, incref_51025)(tcell44935* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49429(c);
	}
	LA4: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44935* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48646(src);
		incref_51025(LOC5);
	}
	LA3: ;
	{
		tcell44935* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48646((*dest));
		decref_50604(LOC10);
	}
	LA8: ;
	(*dest) = src;
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

N_NIMCALL(tcproc550031*, newproc_550230)(tsym226846* prc, tcgen550035* module) {
	tcproc550031* result;
	result = 0;
	result = (tcproc550031*) newObj((&NTI550027), sizeof(tcproc550031));
	asgnRefNoCycle((void**) (&(*result).Prc), prc);
	asgnRef((void**) (&(*result).Module), module);
	{
		if (!!((prc == NIM_NIL))) goto LA3;
		(*result).Options = (*prc).Options;
	}
	goto LA1;
	LA3: ;
	{
		(*result).Options = goptions_170116;
	}
	LA1: ;
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY550102*) newSeqRC1((&NTI550102), 1);
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq226810*) newSeqRC1((&NTI226810), 0);
	if ((*result).Finallysafepoints) nimGCunrefNoCycle((*result).Finallysafepoints);
	(*result).Finallysafepoints = (TY196552*) newSeqRC1((&NTI196552), 0);
	return result;
}

N_NIMCALL(tcgen550035*, bmod_550220)(tsym226846* module) {
	tcgen550035* result;
	result = 0;
	result = gmodules_550171->data[(*module).Position];
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_cgendataInit)(void) {
	if (gmodules_550171) nimGCunref(gmodules_550171);
	gmodules_550171 = (TY550150*) newSeqRC1((&NTI550150), 0);
	gforwardedprocscounter_550172 = 0;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_cgendataDatInit)(void) {
static TNimNode* TMP965[29];
static TNimNode* TMP971[15];
static TNimNode* TMP972[7];
static TNimNode TMP963[54];
NTI550035.size = sizeof(tcgen550035);
NTI550035.kind = 17;
NTI550035.base = (&NTI287005);
TMP965[0] = &TMP963[1];
TMP963[1].kind = 1;
TMP963[1].offset = offsetof(tcgen550035, Module);
TMP963[1].typ = (&NTI226814);
TMP963[1].name = "module";
TMP965[1] = &TMP963[2];
TMP963[2].kind = 1;
TMP963[2].offset = offsetof(tcgen550035, Filename);
TMP963[2].typ = (&NTI149);
TMP963[2].name = "filename";
TMP965[2] = &TMP963[3];
NTI550019.size = sizeof(tcfilesections550019);
NTI550019.kind = 16;
NTI550019.base = (&NTI178007);
NTI550019.flags = 2;
TMP963[3].kind = 1;
TMP963[3].offset = offsetof(tcgen550035, S);
TMP963[3].typ = (&NTI550019);
TMP963[3].name = "s";
TMP965[3] = &TMP963[4];
TMP963[4].kind = 1;
TMP963[4].offset = offsetof(tcgen550035, Preventstacktrace);
TMP963[4].typ = (&NTI138);
TMP963[4].name = "preventStackTrace";
TMP965[4] = &TMP963[5];
TMP963[5].kind = 1;
TMP963[5].offset = offsetof(tcgen550035, Usesthreadvars);
TMP963[5].typ = (&NTI138);
TMP963[5].name = "usesThreadVars";
TMP965[5] = &TMP963[6];
TMP963[6].kind = 1;
TMP963[6].offset = offsetof(tcgen550035, Framedeclared);
TMP963[6].typ = (&NTI138);
TMP963[6].name = "frameDeclared";
TMP965[6] = &TMP963[7];
TMP963[7].kind = 1;
TMP963[7].offset = offsetof(tcgen550035, Isheaderfile);
TMP963[7].typ = (&NTI138);
TMP963[7].name = "isHeaderFile";
TMP965[7] = &TMP963[8];
TMP963[8].kind = 1;
TMP963[8].offset = offsetof(tcgen550035, Includesstringh);
TMP963[8].typ = (&NTI138);
TMP963[8].name = "includesStringh";
TMP965[8] = &TMP963[9];
TMP963[9].kind = 1;
TMP963[9].offset = offsetof(tcgen550035, Objhaskidsvalid);
TMP963[9].typ = (&NTI138);
TMP963[9].name = "objHasKidsValid";
TMP965[9] = &TMP963[10];
TMP963[10].kind = 1;
TMP963[10].offset = offsetof(tcgen550035, Cfilename);
TMP963[10].typ = (&NTI149);
TMP963[10].name = "cfilename";
TMP965[10] = &TMP963[11];
TMP963[11].kind = 1;
TMP963[11].offset = offsetof(tcgen550035, Typecache);
TMP963[11].typ = (&NTI226864);
TMP963[11].name = "typeCache";
TMP965[11] = &TMP963[12];
TMP963[12].kind = 1;
TMP963[12].offset = offsetof(tcgen550035, Forwtypecache);
TMP963[12].typ = (&NTI226864);
TMP963[12].name = "forwTypeCache";
TMP965[12] = &TMP963[13];
TMP963[13].kind = 1;
TMP963[13].offset = offsetof(tcgen550035, Declaredthings);
TMP963[13].typ = (&NTI223056);
TMP963[13].name = "declaredThings";
TMP965[13] = &TMP963[14];
TMP963[14].kind = 1;
TMP963[14].offset = offsetof(tcgen550035, Declaredprotos);
TMP963[14].typ = (&NTI223056);
TMP963[14].name = "declaredProtos";
TMP965[14] = &TMP963[15];
TMP963[15].kind = 1;
TMP963[15].offset = offsetof(tcgen550035, Headerfiles);
TMP963[15].typ = (&NTI127028);
TMP963[15].name = "headerFiles";
TMP965[15] = &TMP963[16];
TMP963[16].kind = 1;
TMP963[16].offset = offsetof(tcgen550035, Typeinfomarker);
TMP963[16].typ = (&NTI223056);
TMP963[16].name = "typeInfoMarker";
TMP965[16] = &TMP963[17];
NTI550031.size = sizeof(tcproc550031);
NTI550031.kind = 18;
NTI550031.base = 0;
TMP971[0] = &TMP963[19];
TMP963[19].kind = 1;
TMP963[19].offset = offsetof(tcproc550031, Prc);
TMP963[19].typ = (&NTI226814);
TMP963[19].name = "prc";
TMP971[1] = &TMP963[20];
TMP963[20].kind = 1;
TMP963[20].offset = offsetof(tcproc550031, Beforeretneeded);
TMP963[20].typ = (&NTI138);
TMP963[20].name = "beforeRetNeeded";
TMP971[2] = &TMP963[21];
TMP963[21].kind = 1;
TMP963[21].offset = offsetof(tcproc550031, Threadvaraccessed);
TMP963[21].typ = (&NTI138);
TMP963[21].name = "threadVarAccessed";
TMP971[3] = &TMP963[22];
TMP963[22].kind = 1;
TMP963[22].offset = offsetof(tcproc550031, Nestedtrystmts);
TMP963[22].typ = (&NTI226810);
TMP963[22].name = "nestedTryStmts";
TMP971[4] = &TMP963[23];
TMP963[23].kind = 1;
TMP963[23].offset = offsetof(tcproc550031, Inexceptblock);
TMP963[23].typ = (&NTI108);
TMP963[23].name = "inExceptBlock";
TMP971[5] = &TMP963[24];
TMP963[24].kind = 1;
TMP963[24].offset = offsetof(tcproc550031, Finallysafepoints);
TMP963[24].typ = (&NTI196552);
TMP963[24].name = "finallySafePoints";
TMP971[6] = &TMP963[25];
TMP963[25].kind = 1;
TMP963[25].offset = offsetof(tcproc550031, Labels);
TMP963[25].typ = (&NTI3207);
TMP963[25].name = "labels";
TMP971[7] = &TMP963[26];
NTI550029.size = sizeof(tblock550029);
NTI550029.kind = 18;
NTI550029.base = 0;
NTI550029.flags = 2;
TMP972[0] = &TMP963[28];
TMP963[28].kind = 1;
TMP963[28].offset = offsetof(tblock550029, Id);
TMP963[28].typ = (&NTI108);
TMP963[28].name = "id";
TMP972[1] = &TMP963[29];
TMP963[29].kind = 1;
TMP963[29].offset = offsetof(tblock550029, Label);
TMP963[29].typ = (&NTI178007);
TMP963[29].name = "label";
TMP972[2] = &TMP963[30];
NTI550023.size = sizeof(tcprocsections550023);
NTI550023.kind = 16;
NTI550023.base = (&NTI178007);
NTI550023.flags = 2;
TMP963[30].kind = 1;
TMP963[30].offset = offsetof(tblock550029, Sections);
TMP963[30].typ = (&NTI550023);
TMP963[30].name = "sections";
TMP972[3] = &TMP963[31];
TMP963[31].kind = 1;
TMP963[31].offset = offsetof(tblock550029, Isloop);
TMP963[31].typ = (&NTI138);
TMP963[31].name = "isLoop";
TMP972[4] = &TMP963[32];
TMP963[32].kind = 1;
TMP963[32].offset = offsetof(tblock550029, Nestedtrystmts);
TMP963[32].typ = (&NTI112);
TMP963[32].name = "nestedTryStmts";
TMP972[5] = &TMP963[33];
TMP963[33].kind = 1;
TMP963[33].offset = offsetof(tblock550029, Nestedexceptstmts);
TMP963[33].typ = (&NTI112);
TMP963[33].name = "nestedExceptStmts";
TMP972[6] = &TMP963[34];
TMP963[34].kind = 1;
TMP963[34].offset = offsetof(tblock550029, Framelen);
TMP963[34].typ = (&NTI112);
TMP963[34].name = "frameLen";
TMP963[27].len = 7; TMP963[27].kind = 2; TMP963[27].sons = &TMP972[0];
NTI550029.node = &TMP963[27];
NTI550102.size = sizeof(TY550102*);
NTI550102.kind = 24;
NTI550102.base = (&NTI550029);
NTI550102.flags = 2;
NTI550102.marker = TMP973;
TMP963[26].kind = 1;
TMP963[26].offset = offsetof(tcproc550031, Blocks);
TMP963[26].typ = (&NTI550102);
TMP963[26].name = "blocks";
TMP971[8] = &TMP963[35];
TMP963[35].kind = 1;
TMP963[35].offset = offsetof(tcproc550031, Breakidx);
TMP963[35].typ = (&NTI108);
TMP963[35].name = "breakIdx";
TMP971[9] = &TMP963[36];
TMP963[36].kind = 1;
TMP963[36].offset = offsetof(tcproc550031, Options);
TMP963[36].typ = (&NTI170016);
TMP963[36].name = "options";
TMP971[10] = &TMP963[37];
TMP963[37].kind = 1;
TMP963[37].offset = offsetof(tcproc550031, Maxframelen);
TMP963[37].typ = (&NTI108);
TMP963[37].name = "maxFrameLen";
TMP971[11] = &TMP963[38];
TMP963[38].kind = 1;
TMP963[38].offset = offsetof(tcproc550031, Module);
TMP963[38].typ = (&NTI550025);
TMP963[38].name = "module";
TMP971[12] = &TMP963[39];
TMP963[39].kind = 1;
TMP963[39].offset = offsetof(tcproc550031, Withinloop);
TMP963[39].typ = (&NTI108);
TMP963[39].name = "withinLoop";
TMP971[13] = &TMP963[40];
TMP963[40].kind = 1;
TMP963[40].offset = offsetof(tcproc550031, Gcframeid);
TMP963[40].typ = (&NTI3207);
TMP963[40].name = "gcFrameId";
TMP971[14] = &TMP963[41];
TMP963[41].kind = 1;
TMP963[41].offset = offsetof(tcproc550031, Gcframetype);
TMP963[41].typ = (&NTI178007);
TMP963[41].name = "gcFrameType";
TMP963[18].len = 15; TMP963[18].kind = 2; TMP963[18].sons = &TMP971[0];
NTI550031.node = &TMP963[18];
NTI550027.size = sizeof(tcproc550031*);
NTI550027.kind = 22;
NTI550027.base = (&NTI550031);
NTI550027.marker = TMP974;
TMP963[17].kind = 1;
TMP963[17].offset = offsetof(tcgen550035, Initproc);
TMP963[17].typ = (&NTI550027);
TMP963[17].name = "initProc";
TMP965[17] = &TMP963[42];
TMP963[42].kind = 1;
TMP963[42].offset = offsetof(tcgen550035, Postinitproc);
TMP963[42].typ = (&NTI550027);
TMP963[42].name = "postInitProc";
TMP965[18] = &TMP963[43];
TMP963[43].kind = 1;
TMP963[43].offset = offsetof(tcgen550035, Preinitproc);
TMP963[43].typ = (&NTI550027);
TMP963[43].name = "preInitProc";
TMP965[19] = &TMP963[44];
TMP963[44].kind = 1;
TMP963[44].offset = offsetof(tcgen550035, Typestack);
TMP963[44].typ = (&NTI226848);
TMP963[44].name = "typeStack";
TMP965[20] = &TMP963[45];
TMP963[45].kind = 1;
TMP963[45].offset = offsetof(tcgen550035, Datacache);
TMP963[45].typ = (&NTI226876);
TMP963[45].name = "dataCache";
TMP965[21] = &TMP963[46];
TMP963[46].kind = 1;
TMP963[46].offset = offsetof(tcgen550035, Forwardedprocs);
TMP963[46].typ = (&NTI226818);
TMP963[46].name = "forwardedProcs";
TMP965[22] = &TMP963[47];
TMP963[47].kind = 1;
TMP963[47].offset = offsetof(tcgen550035, Typenodes);
TMP963[47].typ = (&NTI108);
TMP963[47].name = "typeNodes";
TMP965[23] = &TMP963[48];
TMP963[48].kind = 1;
TMP963[48].offset = offsetof(tcgen550035, Nimtypes);
TMP963[48].typ = (&NTI108);
TMP963[48].name = "nimTypes";
TMP965[24] = &TMP963[49];
TMP963[49].kind = 1;
TMP963[49].offset = offsetof(tcgen550035, Typenodesname);
TMP963[49].typ = (&NTI178007);
TMP963[49].name = "typeNodesName";
TMP965[25] = &TMP963[50];
TMP963[50].kind = 1;
TMP963[50].offset = offsetof(tcgen550035, Nimtypesname);
TMP963[50].typ = (&NTI178007);
TMP963[50].name = "nimTypesName";
TMP965[26] = &TMP963[51];
TMP963[51].kind = 1;
TMP963[51].offset = offsetof(tcgen550035, Labels);
TMP963[51].typ = (&NTI3207);
TMP963[51].name = "labels";
TMP965[27] = &TMP963[52];
NTI550138.size = sizeof(TY550138);
NTI550138.kind = 16;
NTI550138.base = (&NTI178007);
NTI550138.flags = 2;
TMP963[52].kind = 1;
TMP963[52].offset = offsetof(tcgen550035, Extensionloaders);
TMP963[52].typ = (&NTI550138);
TMP963[52].name = "extensionLoaders";
TMP965[28] = &TMP963[53];
TMP963[53].kind = 1;
TMP963[53].offset = offsetof(tcgen550035, Injectstmt);
TMP963[53].typ = (&NTI178007);
TMP963[53].name = "injectStmt";
TMP963[0].len = 29; TMP963[0].kind = 2; TMP963[0].sons = &TMP965[0];
NTI550035.node = &TMP963[0];
NTI550025.size = sizeof(tcgen550035*);
NTI550025.kind = 22;
NTI550025.base = (&NTI550035);
NTI550025.marker = TMP978;
NTI550150.size = sizeof(TY550150*);
NTI550150.kind = 24;
NTI550150.base = (&NTI550025);
NTI550150.marker = TMP979;
}

