/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct trope177009 trope177009;
typedef struct TY549150 TY549150;
typedef struct tcgen549035 tcgen549035;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext286005 tpasscontext286005;
typedef struct TNimObject TNimObject;
typedef struct tsym225846 tsym225846;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable225864 tidtable225864;
typedef struct tidpairseq225862 tidpairseq225862;
typedef struct tidpair225860 tidpair225860;
typedef struct tidobj200015 tidobj200015;
typedef struct intset222056 intset222056;
typedef struct ttrunk222052 ttrunk222052;
typedef struct ttrunkseq222054 ttrunkseq222054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tcproc549031 tcproc549031;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct ttype225852 ttype225852;
typedef struct tnodetable225876 tnodetable225876;
typedef struct tnodepairseq225874 tnodepairseq225874;
typedef struct tnodepair225872 tnodepair225872;
typedef struct tnode225816 tnode225816;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct TY195552 TY195552;
typedef struct TY549102 TY549102;
typedef struct tblock549029 tblock549029;
typedef struct tcell45135 tcell45135;
typedef struct tcellseq45151 tcellseq45151;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45147 tcellset45147;
typedef struct tpagedesc45143 tpagedesc45143;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tident200021 tident200021;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tloc225830 tloc225830;
typedef struct tlib225834 tlib225834;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
typedef struct TY225936 TY225936;
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
struct  tpasscontext286005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope177009* tcfilesections549019[18];
struct  tidpair225860  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable225864  {
NI Counter;
tidpairseq225862* Data;
};
struct  intset222056  {
NI Counter;
NI Max;
ttrunk222052* Head;
ttrunkseq222054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair225872  {
NI H;
tnode225816* Key;
NI Val;
};
struct  tnodetable225876  {
NI Counter;
tnodepairseq225874* Data;
};
typedef trope177009* TY549138[10];
struct  tcgen549035  {
  tpasscontext286005 Sup;
tsym225846* Module;
NimStringDesc* Filename;
tcfilesections549019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable225864 Typecache;
tidtable225864 Forwtypecache;
intset222056 Declaredthings;
intset222056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset222056 Typeinfomarker;
tcproc549031* Initproc;
tcproc549031* Postinitproc;
tcproc549031* Preinitproc;
ttypeseq225848* Typestack;
tnodetable225876 Datacache;
tsymseq225818* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope177009* Typenodesname;
trope177009* Nimtypesname;
NI Labels;
TY549138 Extensionloaders;
trope177009* Injectstmt;
};
typedef trope177009* tcprocsections549023[3];
struct  tblock549029  {
NI Id;
trope177009* Label;
tcprocsections549023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc549031  {
tsym225846* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq225810* Nestedtrystmts;
NI Inexceptblock;
TY195552* Finallysafepoints;
NI Labels;
TY549102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen549035* Module;
NI Withinloop;
NI Gcframeid;
trope177009* Gcframetype;
};
struct  tcell45135  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45151  {
NI Len;
NI Cap;
tcell45135** D;
};
struct  tcellset45147  {
NI Counter;
NI Max;
tpagedesc45143* Head;
tpagedesc45143** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
};
struct  tgcstat47214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45151 Zct;
tcellseq45151 Decstack;
tcellset45147 Cycleroots;
tcellseq45151 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym225846  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq225848* Typeinstcache;
tscope225840* Typscope;
} S1;
struct {TY225947* Procinstcache;
tscope225840* Scope;
} S2;
struct {TY225947* Usedgenerics;
tstrtable225820 Tab;
} S3;
struct {tsym225846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225852* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym225846* Owner;
NU32 Flags;
tnode225816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225830 Loc;
tlib225834* Annex;
tnode225816* Constraint;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26620[8];
struct  ttrunk222052  {
ttrunk222052* Next;
NI Key;
TY26620 Bits;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  ttype225852  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225848* Sons;
tnode225816* N;
tsym225846* Owner;
tsym225846* Sym;
tsym225846* Destructor;
tsym225846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225830 Loc;
};
struct  tnode225816  {
ttype225852* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225846* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq225810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  tpagedesc45143  {
tpagedesc45143* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tscope225840  {
NI Depthlevel;
tstrtable225820 Symbols;
tnodeseq225810* Usingsyms;
tscope225840* Parent;
};
struct  tinstantiation225836  {
tsym225846* Sym;
ttypeseq225848* Concretetypes;
TY225936* Usedby;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  tlib225834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode225816* Path;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
struct TY549150 {
  TGenericSeq Sup;
  tcgen549035* data[SEQ_DECL_SIZE];
};
struct tidpairseq225862 {
  TGenericSeq Sup;
  tidpair225860 data[SEQ_DECL_SIZE];
};
struct ttrunkseq222054 {
  TGenericSeq Sup;
  ttrunk222052* data[SEQ_DECL_SIZE];
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct tnodepairseq225874 {
  TGenericSeq Sup;
  tnodepair225872 data[SEQ_DECL_SIZE];
};
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct TY195552 {
  TGenericSeq Sup;
  trope177009* data[SEQ_DECL_SIZE];
};
struct TY549102 {
  TGenericSeq Sup;
  tblock549029 data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP971)(void* p, NI op);
N_NIMCALL(void, TMP972)(void* p, NI op);
N_NIMCALL(void, TMP976)(void* p, NI op);
N_NIMCALL(void, TMP977)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_50804)(tcell45135* c);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48867)(tcell45135* c);
static N_INLINE(void, rtladdcycleroot_49629)(tcell45135* c);
N_NOINLINE(void, incl_45871)(tcellset45147* s, tcell45135* cell);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51225)(tcell45135* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
trope177009* mainmodprocs_549145;
trope177009* mainmodinit_549146;
trope177009* othermodsinit_549147;
trope177009* maindatinit_549148;
trope177009* gmapping_549149;
TY549150* gmodules_549171;
extern TNimType NTI286005; /* TPassContext */
TNimType NTI549035; /* TCGen */
extern TNimType NTI225814; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI177007; /* PRope */
TNimType NTI549019; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI225864; /* TIdTable */
extern TNimType NTI222056; /* IntSet */
extern TNimType NTI127028; /* TLinkedList */
TNimType NTI549031; /* TCProc */
extern TNimType NTI225810; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI195552; /* seq[PRope] */
extern TNimType NTI3207; /* Natural */
TNimType NTI549029; /* TBlock */
TNimType NTI549023; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI549102; /* seq[TBlock] */
extern TNimType NTI169016; /* TOptions */
TNimType NTI549027; /* BProc */
extern TNimType NTI225848; /* TTypeSeq */
extern TNimType NTI225876; /* TNodeTable */
extern TNimType NTI225818; /* TSymSeq */
TNimType NTI549138; /* array[48..57, PRope] */
TNimType NTI549025; /* BModule */
TNimType NTI549150; /* seq[BModule] */
extern tgcheap47216 gch_47244;
NI gforwardedprocscounter_549172;
extern NU32 goptions_169116;
N_NIMCALL(void, TMP971)(void* p, NI op) {
	TY549102* a;
	NI LOC1;
	NI LOC2;
	a = (TY549102*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP972)(void* p, NI op) {
	tcproc549031* a;
	a = (tcproc549031*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Finallysafepoints, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP976)(void* p, NI op) {
	tcgen549035* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen549035*)p;
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
N_NIMCALL(void, TMP977)(void* p, NI op) {
	TY549150* a;
	NI LOC1;
	a = (TY549150*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, rtladdzct_50404)(tcell45135* c) {
	addzct_48817((&gch_47244.Zct), c);
}

static N_INLINE(NIM_BOOL, canbecycleroot_48867)(tcell45135* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49629)(tcell45135* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45871((&gch_47244.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, decref_50804)(tcell45135* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49629(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(tcell45135*, usrtocell_48846)(void* usr) {
	tcell45135* result;
	result = 0;
	result = ((tcell45135*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45135))))));
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	tcell45135* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_48846(p);
	decref_50804(LOC1);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45135* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48846(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45135* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48846((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, incref_51225)(tcell45135* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49629(c);
	}
	LA4: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell45135* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48846(src);
		incref_51225(LOC5);
	}
	LA3: ;
	{
		tcell45135* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48846((*dest));
		decref_50804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45135* c;
	c = usrtocell_48846(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	LA3: ;
}

N_NIMCALL(tcproc549031*, newproc_549230)(tsym225846* prc, tcgen549035* module) {
	tcproc549031* result;
	result = 0;
	result = (tcproc549031*) newObj((&NTI549027), sizeof(tcproc549031));
	asgnRefNoCycle((void**) (&(*result).Prc), prc);
	asgnRef((void**) (&(*result).Module), module);
	{
		if (!!((prc == NIM_NIL))) goto LA3;
		(*result).Options = (*prc).Options;
	}
	goto LA1;
	LA3: ;
	{
		(*result).Options = goptions_169116;
	}
	LA1: ;
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY549102*) newSeqRC1((&NTI549102), 1);
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq225810*) newSeqRC1((&NTI225810), 0);
	if ((*result).Finallysafepoints) nimGCunrefNoCycle((*result).Finallysafepoints);
	(*result).Finallysafepoints = (TY195552*) newSeqRC1((&NTI195552), 0);
	return result;
}

N_NIMCALL(tcgen549035*, bmod_549220)(tsym225846* module) {
	tcgen549035* result;
	result = 0;
	result = gmodules_549171->data[(*module).Position];
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_cgendataInit)(void) {
	if (gmodules_549171) nimGCunref(gmodules_549171);
	gmodules_549171 = (TY549150*) newSeqRC1((&NTI549150), 0);
	gforwardedprocscounter_549172 = 0;
}

NIM_EXTERNC N_NOINLINE(void, HEX00_cgendataDatInit)(void) {
static TNimNode* TMP963[29];
static TNimNode* TMP969[15];
static TNimNode* TMP970[7];
static TNimNode TMP961[54];
NTI549035.size = sizeof(tcgen549035);
NTI549035.kind = 17;
NTI549035.base = (&NTI286005);
TMP963[0] = &TMP961[1];
TMP961[1].kind = 1;
TMP961[1].offset = offsetof(tcgen549035, Module);
TMP961[1].typ = (&NTI225814);
TMP961[1].name = "module";
TMP963[1] = &TMP961[2];
TMP961[2].kind = 1;
TMP961[2].offset = offsetof(tcgen549035, Filename);
TMP961[2].typ = (&NTI149);
TMP961[2].name = "filename";
TMP963[2] = &TMP961[3];
NTI549019.size = sizeof(tcfilesections549019);
NTI549019.kind = 16;
NTI549019.base = (&NTI177007);
NTI549019.flags = 2;
TMP961[3].kind = 1;
TMP961[3].offset = offsetof(tcgen549035, S);
TMP961[3].typ = (&NTI549019);
TMP961[3].name = "s";
TMP963[3] = &TMP961[4];
TMP961[4].kind = 1;
TMP961[4].offset = offsetof(tcgen549035, Preventstacktrace);
TMP961[4].typ = (&NTI138);
TMP961[4].name = "preventStackTrace";
TMP963[4] = &TMP961[5];
TMP961[5].kind = 1;
TMP961[5].offset = offsetof(tcgen549035, Usesthreadvars);
TMP961[5].typ = (&NTI138);
TMP961[5].name = "usesThreadVars";
TMP963[5] = &TMP961[6];
TMP961[6].kind = 1;
TMP961[6].offset = offsetof(tcgen549035, Framedeclared);
TMP961[6].typ = (&NTI138);
TMP961[6].name = "frameDeclared";
TMP963[6] = &TMP961[7];
TMP961[7].kind = 1;
TMP961[7].offset = offsetof(tcgen549035, Isheaderfile);
TMP961[7].typ = (&NTI138);
TMP961[7].name = "isHeaderFile";
TMP963[7] = &TMP961[8];
TMP961[8].kind = 1;
TMP961[8].offset = offsetof(tcgen549035, Includesstringh);
TMP961[8].typ = (&NTI138);
TMP961[8].name = "includesStringh";
TMP963[8] = &TMP961[9];
TMP961[9].kind = 1;
TMP961[9].offset = offsetof(tcgen549035, Objhaskidsvalid);
TMP961[9].typ = (&NTI138);
TMP961[9].name = "objHasKidsValid";
TMP963[9] = &TMP961[10];
TMP961[10].kind = 1;
TMP961[10].offset = offsetof(tcgen549035, Cfilename);
TMP961[10].typ = (&NTI149);
TMP961[10].name = "cfilename";
TMP963[10] = &TMP961[11];
TMP961[11].kind = 1;
TMP961[11].offset = offsetof(tcgen549035, Typecache);
TMP961[11].typ = (&NTI225864);
TMP961[11].name = "typeCache";
TMP963[11] = &TMP961[12];
TMP961[12].kind = 1;
TMP961[12].offset = offsetof(tcgen549035, Forwtypecache);
TMP961[12].typ = (&NTI225864);
TMP961[12].name = "forwTypeCache";
TMP963[12] = &TMP961[13];
TMP961[13].kind = 1;
TMP961[13].offset = offsetof(tcgen549035, Declaredthings);
TMP961[13].typ = (&NTI222056);
TMP961[13].name = "declaredThings";
TMP963[13] = &TMP961[14];
TMP961[14].kind = 1;
TMP961[14].offset = offsetof(tcgen549035, Declaredprotos);
TMP961[14].typ = (&NTI222056);
TMP961[14].name = "declaredProtos";
TMP963[14] = &TMP961[15];
TMP961[15].kind = 1;
TMP961[15].offset = offsetof(tcgen549035, Headerfiles);
TMP961[15].typ = (&NTI127028);
TMP961[15].name = "headerFiles";
TMP963[15] = &TMP961[16];
TMP961[16].kind = 1;
TMP961[16].offset = offsetof(tcgen549035, Typeinfomarker);
TMP961[16].typ = (&NTI222056);
TMP961[16].name = "typeInfoMarker";
TMP963[16] = &TMP961[17];
NTI549031.size = sizeof(tcproc549031);
NTI549031.kind = 18;
NTI549031.base = 0;
TMP969[0] = &TMP961[19];
TMP961[19].kind = 1;
TMP961[19].offset = offsetof(tcproc549031, Prc);
TMP961[19].typ = (&NTI225814);
TMP961[19].name = "prc";
TMP969[1] = &TMP961[20];
TMP961[20].kind = 1;
TMP961[20].offset = offsetof(tcproc549031, Beforeretneeded);
TMP961[20].typ = (&NTI138);
TMP961[20].name = "beforeRetNeeded";
TMP969[2] = &TMP961[21];
TMP961[21].kind = 1;
TMP961[21].offset = offsetof(tcproc549031, Threadvaraccessed);
TMP961[21].typ = (&NTI138);
TMP961[21].name = "threadVarAccessed";
TMP969[3] = &TMP961[22];
TMP961[22].kind = 1;
TMP961[22].offset = offsetof(tcproc549031, Nestedtrystmts);
TMP961[22].typ = (&NTI225810);
TMP961[22].name = "nestedTryStmts";
TMP969[4] = &TMP961[23];
TMP961[23].kind = 1;
TMP961[23].offset = offsetof(tcproc549031, Inexceptblock);
TMP961[23].typ = (&NTI108);
TMP961[23].name = "inExceptBlock";
TMP969[5] = &TMP961[24];
TMP961[24].kind = 1;
TMP961[24].offset = offsetof(tcproc549031, Finallysafepoints);
TMP961[24].typ = (&NTI195552);
TMP961[24].name = "finallySafePoints";
TMP969[6] = &TMP961[25];
TMP961[25].kind = 1;
TMP961[25].offset = offsetof(tcproc549031, Labels);
TMP961[25].typ = (&NTI3207);
TMP961[25].name = "labels";
TMP969[7] = &TMP961[26];
NTI549029.size = sizeof(tblock549029);
NTI549029.kind = 18;
NTI549029.base = 0;
NTI549029.flags = 2;
TMP970[0] = &TMP961[28];
TMP961[28].kind = 1;
TMP961[28].offset = offsetof(tblock549029, Id);
TMP961[28].typ = (&NTI108);
TMP961[28].name = "id";
TMP970[1] = &TMP961[29];
TMP961[29].kind = 1;
TMP961[29].offset = offsetof(tblock549029, Label);
TMP961[29].typ = (&NTI177007);
TMP961[29].name = "label";
TMP970[2] = &TMP961[30];
NTI549023.size = sizeof(tcprocsections549023);
NTI549023.kind = 16;
NTI549023.base = (&NTI177007);
NTI549023.flags = 2;
TMP961[30].kind = 1;
TMP961[30].offset = offsetof(tblock549029, Sections);
TMP961[30].typ = (&NTI549023);
TMP961[30].name = "sections";
TMP970[3] = &TMP961[31];
TMP961[31].kind = 1;
TMP961[31].offset = offsetof(tblock549029, Isloop);
TMP961[31].typ = (&NTI138);
TMP961[31].name = "isLoop";
TMP970[4] = &TMP961[32];
TMP961[32].kind = 1;
TMP961[32].offset = offsetof(tblock549029, Nestedtrystmts);
TMP961[32].typ = (&NTI112);
TMP961[32].name = "nestedTryStmts";
TMP970[5] = &TMP961[33];
TMP961[33].kind = 1;
TMP961[33].offset = offsetof(tblock549029, Nestedexceptstmts);
TMP961[33].typ = (&NTI112);
TMP961[33].name = "nestedExceptStmts";
TMP970[6] = &TMP961[34];
TMP961[34].kind = 1;
TMP961[34].offset = offsetof(tblock549029, Framelen);
TMP961[34].typ = (&NTI112);
TMP961[34].name = "frameLen";
TMP961[27].len = 7; TMP961[27].kind = 2; TMP961[27].sons = &TMP970[0];
NTI549029.node = &TMP961[27];
NTI549102.size = sizeof(TY549102*);
NTI549102.kind = 24;
NTI549102.base = (&NTI549029);
NTI549102.flags = 2;
NTI549102.marker = TMP971;
TMP961[26].kind = 1;
TMP961[26].offset = offsetof(tcproc549031, Blocks);
TMP961[26].typ = (&NTI549102);
TMP961[26].name = "blocks";
TMP969[8] = &TMP961[35];
TMP961[35].kind = 1;
TMP961[35].offset = offsetof(tcproc549031, Breakidx);
TMP961[35].typ = (&NTI108);
TMP961[35].name = "breakIdx";
TMP969[9] = &TMP961[36];
TMP961[36].kind = 1;
TMP961[36].offset = offsetof(tcproc549031, Options);
TMP961[36].typ = (&NTI169016);
TMP961[36].name = "options";
TMP969[10] = &TMP961[37];
TMP961[37].kind = 1;
TMP961[37].offset = offsetof(tcproc549031, Maxframelen);
TMP961[37].typ = (&NTI108);
TMP961[37].name = "maxFrameLen";
TMP969[11] = &TMP961[38];
TMP961[38].kind = 1;
TMP961[38].offset = offsetof(tcproc549031, Module);
TMP961[38].typ = (&NTI549025);
TMP961[38].name = "module";
TMP969[12] = &TMP961[39];
TMP961[39].kind = 1;
TMP961[39].offset = offsetof(tcproc549031, Withinloop);
TMP961[39].typ = (&NTI108);
TMP961[39].name = "withinLoop";
TMP969[13] = &TMP961[40];
TMP961[40].kind = 1;
TMP961[40].offset = offsetof(tcproc549031, Gcframeid);
TMP961[40].typ = (&NTI3207);
TMP961[40].name = "gcFrameId";
TMP969[14] = &TMP961[41];
TMP961[41].kind = 1;
TMP961[41].offset = offsetof(tcproc549031, Gcframetype);
TMP961[41].typ = (&NTI177007);
TMP961[41].name = "gcFrameType";
TMP961[18].len = 15; TMP961[18].kind = 2; TMP961[18].sons = &TMP969[0];
NTI549031.node = &TMP961[18];
NTI549027.size = sizeof(tcproc549031*);
NTI549027.kind = 22;
NTI549027.base = (&NTI549031);
NTI549027.marker = TMP972;
TMP961[17].kind = 1;
TMP961[17].offset = offsetof(tcgen549035, Initproc);
TMP961[17].typ = (&NTI549027);
TMP961[17].name = "initProc";
TMP963[17] = &TMP961[42];
TMP961[42].kind = 1;
TMP961[42].offset = offsetof(tcgen549035, Postinitproc);
TMP961[42].typ = (&NTI549027);
TMP961[42].name = "postInitProc";
TMP963[18] = &TMP961[43];
TMP961[43].kind = 1;
TMP961[43].offset = offsetof(tcgen549035, Preinitproc);
TMP961[43].typ = (&NTI549027);
TMP961[43].name = "preInitProc";
TMP963[19] = &TMP961[44];
TMP961[44].kind = 1;
TMP961[44].offset = offsetof(tcgen549035, Typestack);
TMP961[44].typ = (&NTI225848);
TMP961[44].name = "typeStack";
TMP963[20] = &TMP961[45];
TMP961[45].kind = 1;
TMP961[45].offset = offsetof(tcgen549035, Datacache);
TMP961[45].typ = (&NTI225876);
TMP961[45].name = "dataCache";
TMP963[21] = &TMP961[46];
TMP961[46].kind = 1;
TMP961[46].offset = offsetof(tcgen549035, Forwardedprocs);
TMP961[46].typ = (&NTI225818);
TMP961[46].name = "forwardedProcs";
TMP963[22] = &TMP961[47];
TMP961[47].kind = 1;
TMP961[47].offset = offsetof(tcgen549035, Typenodes);
TMP961[47].typ = (&NTI108);
TMP961[47].name = "typeNodes";
TMP963[23] = &TMP961[48];
TMP961[48].kind = 1;
TMP961[48].offset = offsetof(tcgen549035, Nimtypes);
TMP961[48].typ = (&NTI108);
TMP961[48].name = "nimTypes";
TMP963[24] = &TMP961[49];
TMP961[49].kind = 1;
TMP961[49].offset = offsetof(tcgen549035, Typenodesname);
TMP961[49].typ = (&NTI177007);
TMP961[49].name = "typeNodesName";
TMP963[25] = &TMP961[50];
TMP961[50].kind = 1;
TMP961[50].offset = offsetof(tcgen549035, Nimtypesname);
TMP961[50].typ = (&NTI177007);
TMP961[50].name = "nimTypesName";
TMP963[26] = &TMP961[51];
TMP961[51].kind = 1;
TMP961[51].offset = offsetof(tcgen549035, Labels);
TMP961[51].typ = (&NTI3207);
TMP961[51].name = "labels";
TMP963[27] = &TMP961[52];
NTI549138.size = sizeof(TY549138);
NTI549138.kind = 16;
NTI549138.base = (&NTI177007);
NTI549138.flags = 2;
TMP961[52].kind = 1;
TMP961[52].offset = offsetof(tcgen549035, Extensionloaders);
TMP961[52].typ = (&NTI549138);
TMP961[52].name = "extensionLoaders";
TMP963[28] = &TMP961[53];
TMP961[53].kind = 1;
TMP961[53].offset = offsetof(tcgen549035, Injectstmt);
TMP961[53].typ = (&NTI177007);
TMP961[53].name = "injectStmt";
TMP961[0].len = 29; TMP961[0].kind = 2; TMP961[0].sons = &TMP963[0];
NTI549035.node = &TMP961[0];
NTI549025.size = sizeof(tcgen549035*);
NTI549025.kind = 22;
NTI549025.base = (&NTI549035);
NTI549025.marker = TMP976;
NTI549150.size = sizeof(TY549150*);
NTI549150.kind = 24;
NTI549150.base = (&NTI549025);
NTI549150.marker = TMP977;
}

