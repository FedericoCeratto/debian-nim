/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tctx288048 tctx288048;
typedef struct tpasscontext285005 tpasscontext285005;
typedef struct TNimObject TNimObject;
typedef struct TY288250 TY288250;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY195414 TY195414;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct tnode224816 tnode224816;
typedef struct ttypeseq224848 ttypeseq224848;
typedef struct ttype224852 ttype224852;
typedef struct pprocHEX3Aobjecttype288230 pprocHEX3Aobjecttype288230;
typedef struct tsym224846 tsym224846;
typedef struct TY288269 TY288269;
typedef struct TY288270 TY288270;
typedef struct NimStringDesc NimStringDesc;
typedef struct vmargs288042 vmargs288042;
typedef struct TY288231 TY288231;
typedef struct tblock288030 tblock288030;
typedef struct TY288211 TY288211;
typedef struct TY288237 TY288237;
typedef struct TY611034 TY611034;
typedef struct TY611037 TY611037;
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
typedef struct tident199021 tident199021;
typedef struct tnodeseq224810 tnodeseq224810;
typedef struct tidobj199015 tidobj199015;
typedef struct tloc224830 tloc224830;
typedef struct trope176009 trope176009;
typedef struct tscope224840 tscope224840;
typedef struct TY224947 TY224947;
typedef struct tinstantiation224836 tinstantiation224836;
typedef struct tstrtable224820 tstrtable224820;
typedef struct tsymseq224818 tsymseq224818;
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
struct  tpasscontext285005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tlineinfo194539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  vmargs288042  {
NI Ra;
NI Rb;
NI Rc;
void* Slots;
tnode224816* Currentexception;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (vmargs288042* args, void* ClEnv);
void* ClEnv;
} vmcallback288044;
struct TY288270 {
NimStringDesc* Field0;
vmcallback288044 Field1;
};
struct  tctx288048  {
  tpasscontext285005 Sup;
TY288250* Code;
TY195414* Debug;
tnode224816* Globals;
tnode224816* Constants;
ttypeseq224848* Types;
tnode224816* Currentexceptiona;
tnode224816* Currentexceptionb;
NI Exceptioninstr;
pprocHEX3Aobjecttype288230* Prc;
tsym224846* Module;
tnode224816* Callsite;
NU8 Mode;
NU8 Features;
NIM_BOOL Traceactive;
NI Loopiterations;
tlineinfo194539 Comesfromheuristic;
TY288269* Callbacks;
NimStringDesc* Errorflag;
};
struct  tblock288030  {
tsym224846* Label;
TY288211* Fixups;
};
struct TY288237 {
NIM_BOOL Field0;
NU8 Field1;
};
typedef TY288237 TY288234[256];
struct  pprocHEX3Aobjecttype288230  {
TY288231* Blocks;
tsym224846* Sym;
TY288234 Slots;
NI Maxslots;
};
struct TY611034 {
void* Field0;
TY611037* Field1;
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
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tloc224830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype224852* T;
trope176009* R;
trope176009* Heaproot;
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
struct  tstrtable224820  {
NI Counter;
tsymseq224818* Data;
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
struct TY611037 {
char dummy;
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
struct TY288250 {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
struct TY195414 {
  TGenericSeq Sup;
  tlineinfo194539 data[SEQ_DECL_SIZE];
};
struct ttypeseq224848 {
  TGenericSeq Sup;
  ttype224852* data[SEQ_DECL_SIZE];
};
struct TY288269 {
  TGenericSeq Sup;
  TY288270 data[SEQ_DECL_SIZE];
};
struct TY288211 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY288231 {
  TGenericSeq Sup;
  tblock288030 data[SEQ_DECL_SIZE];
};
struct tnodeseq224810 {
  TGenericSeq Sup;
  tnode224816* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, TMP1950)(void* p, NI op);
N_NIMCALL(void, TMP1953)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1954)(void* p, NI op);
N_NIMCALL(void, TMP1959)(void* p, NI op);
N_NIMCALL(void, TMP1968)(void* p, NI op);
N_NIMCALL(void, TMP1969)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(tnode224816*, newnode_225090)(NU8 kind);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tlineinfo194539, unknownlineinfo_195405)(void);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_50604)(tcell44935* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c);
N_NOINLINE(void, incl_45671)(tcellset44947* s, tcell44935* cell);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44935* c);
STRING_LITERAL(TMP2724, "", 0);
extern TNimType NTI285005; /* TPassContext */
TNimType NTI288048; /* TCtx */
extern TNimType NTI124; /* uint32 */
TNimType NTI288250; /* seq[TInstr] */
extern TNimType NTI195414; /* seq[TLineInfo] */
extern TNimType NTI224808; /* PNode */
extern TNimType NTI224848; /* TTypeSeq */
extern TNimType NTI108; /* int */
TNimType NTI288230; /* PProc:ObjectType */
TNimType NTI288030; /* TBlock */
extern TNimType NTI224814; /* PSym */
TNimType NTI288211; /* seq[TPosition] */
TNimType NTI288231; /* seq[TBlock] */
TNimType NTI288237; /* tuple[inUse: bool, kind: TSlotKind] */
extern TNimType NTI138; /* bool */
TNimType NTI288038; /* TSlotKind */
TNimType NTI288234; /* array[0..255, tuple[inUse: bool, kind: TSlotKind]] */
TNimType NTI288040; /* PProc */
TNimType NTI288032; /* TEvalMode */
TNimType NTI288034; /* TSandboxFlag */
TNimType NTI288036; /* TSandboxFlags */
extern TNimType NTI194539; /* TLineInfo */
TNimType NTI288270; /* tuple[key: string, value: VmCallback] */
extern TNimType NTI149; /* string */
TNimType NTI288044; /* tuple[pointer, ref tuple[]] */
extern TNimType NTI153; /* pointer */
extern TNimType NTI611036; /* ref tuple[] */
TNimType NTI288269; /* seq[tuple[key: string, value: VmCallback]] */
TNimType NTI288046; /* PCtx */
extern tgcheap47016 gch_47044;
TNimType NTI288028; /* TOpcode */
N_NIMCALL(void, TMP1950)(void* p, NI op) {
	TY288250* a;
	NI LOC1;
	a = (TY288250*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1953)(void* p, NI op) {
	TY288211* a;
	NI LOC1;
	a = (TY288211*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP1954)(void* p, NI op) {
	TY288231* a;
	NI LOC1;
	a = (TY288231*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	nimGCvisit((void*)a->data[LOC1].Fixups, op);
	}
}
N_NIMCALL(void, TMP1959)(void* p, NI op) {
	pprocHEX3Aobjecttype288230* a;
	NI LOC1;
	a = (pprocHEX3Aobjecttype288230*)p;
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Sym, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 256; LOC1++) {
	}
}
N_NIMCALL(void, TMP1968)(void* p, NI op) {
	TY288269* a;
	NI LOC1;
	a = (TY288269*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1.ClEnv, op);
	}
}
N_NIMCALL(void, TMP1969)(void* p, NI op) {
	tctx288048* a;
	a = (tctx288048*)p;
	nimGCvisit((void*)(*a).Code, op);
	nimGCvisit((void*)(*a).Debug, op);
	nimGCvisit((void*)(*a).Globals, op);
	nimGCvisit((void*)(*a).Constants, op);
	nimGCvisit((void*)(*a).Types, op);
	nimGCvisit((void*)(*a).Currentexceptiona, op);
	nimGCvisit((void*)(*a).Currentexceptionb, op);
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Callsite, op);
	nimGCvisit((void*)(*a).Callbacks, op);
	nimGCvisit((void*)(*a).Errorflag, op);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44935* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
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
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
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

static N_INLINE(void, nimGCunref)(void* p) {
	tcell44935* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_48646(p);
	decref_50604(LOC1);
}

N_NIMCALL(tctx288048*, newctx_288279)(tsym224846* module) {
	tctx288048* result;
	tctx288048* LOC1;
	pprocHEX3Aobjecttype288230* LOC2;
	NimStringDesc* LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = (tctx288048*) newObj((&NTI288046), sizeof(tctx288048));
	(*LOC1).Sup.Sup.m_type = (&NTI288048);
	if ((*LOC1).Code) nimGCunrefNoCycle((*LOC1).Code);
	(*LOC1).Code = (TY288250*) newSeqRC1((&NTI288250), 0);
	if ((*LOC1).Debug) nimGCunrefNoCycle((*LOC1).Debug);
	(*LOC1).Debug = (TY195414*) newSeqRC1((&NTI195414), 0);
	asgnRefNoCycle((void**) (&(*LOC1).Globals), newnode_225090(((NU8) 126)));
	asgnRefNoCycle((void**) (&(*LOC1).Constants), newnode_225090(((NU8) 115)));
	if ((*LOC1).Types) nimGCunrefNoCycle((*LOC1).Types);
	(*LOC1).Types = (ttypeseq224848*) newSeqRC1((&NTI224848), 0);
	LOC2 = 0;
	LOC2 = (pprocHEX3Aobjecttype288230*) newObj((&NTI288040), sizeof(pprocHEX3Aobjecttype288230));
	if ((*LOC2).Blocks) nimGCunrefNoCycle((*LOC2).Blocks);
	(*LOC2).Blocks = (TY288231*) newSeqRC1((&NTI288231), 0);
	asgnRefNoCycle((void**) (&(*LOC1).Prc), LOC2);
	asgnRefNoCycle((void**) (&(*LOC1).Module), module);
	(*LOC1).Loopiterations = 500000;
	(*LOC1).Comesfromheuristic = unknownlineinfo_195405();
	if ((*LOC1).Callbacks) nimGCunref((*LOC1).Callbacks);
	(*LOC1).Callbacks = (TY288269*) newSeqRC1((&NTI288269), 0);
	LOC3 = 0;
	LOC3 = (*LOC1).Errorflag; (*LOC1).Errorflag = copyStringRC1(((NimStringDesc*) &TMP2724));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	result = LOC1;
	return result;
}

N_NIMCALL(void, refresh_288391)(tctx288048* c, tsym224846* module) {
	pprocHEX3Aobjecttype288230* LOC1;
	asgnRefNoCycle((void**) (&(*c).Module), module);
	LOC1 = 0;
	LOC1 = (pprocHEX3Aobjecttype288230*) newObj((&NTI288040), sizeof(pprocHEX3Aobjecttype288230));
	if ((*LOC1).Blocks) nimGCunrefNoCycle((*LOC1).Blocks);
	(*LOC1).Blocks = (TY288231*) newSeqRC1((&NTI288231), 0);
	asgnRefNoCycle((void**) (&(*c).Prc), LOC1);
}

static N_INLINE(void, incref_51025)(tcell44935* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
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

N_NIMCALL(void, registercallback_288422)(tctx288048* c, NimStringDesc* name, vmcallback288044 callback) {
	TY288270 LOC1;
	NimStringDesc* LOC2;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Field0 = copyString(name);
	LOC1.Field1.ClEnv = callback.ClEnv;
	LOC1.Field1.ClPrc = callback.ClPrc;
	(*c).Callbacks = (TY288269*) incrSeq(&((*c).Callbacks)->Sup, sizeof(TY288270));
	LOC2 = 0;
	LOC2 = (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0; (*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field0 = copyStringRC1(LOC1.Field0);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	asgnRef((void**) (&(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClEnv), LOC1.Field1.ClEnv);
	(*c).Callbacks->data[(*c).Callbacks->Sup.len-1].Field1.ClPrc = LOC1.Field1.ClPrc;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_vmdefInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_vmdefDatInit)(void) {
static TNimNode* TMP1949[18];
static TNimNode* TMP1951[4];
static TNimNode* TMP1952[2];
static TNimNode* TMP1955[2];
static TNimNode* TMP1956[9];
NI TMP1958;
static char* NIM_CONST TMP1957[9] = {
"slotEmpty", 
"slotFixedVar", 
"slotFixedLet", 
"slotTempUnknown", 
"slotTempInt", 
"slotTempFloat", 
"slotTempStr", 
"slotTempComplex", 
"slotTempPerm"};
static TNimNode* TMP1960[5];
NI TMP1962;
static char* NIM_CONST TMP1961[5] = {
"emRepl", 
"emConst", 
"emOptimize", 
"emStaticExpr", 
"emStaticStmt"};
static TNimNode* TMP1963[3];
NI TMP1965;
static char* NIM_CONST TMP1964[3] = {
"allowCast", 
"allowFFI", 
"allowInfiniteLoops"};
static TNimNode* TMP1966[2];
static TNimNode* TMP1967[2];
static TNimNode* TMP2852[155];
NI TMP2854;
static char* NIM_CONST TMP2853[155] = {
"opcEof", 
"opcRet", 
"opcYldYoid", 
"opcYldVal", 
"opcAsgnInt", 
"opcAsgnStr", 
"opcAsgnFloat", 
"opcAsgnRef", 
"opcAsgnComplex", 
"opcRegToNode", 
"opcNodeToReg", 
"opcLdArr", 
"opcWrArr", 
"opcLdObj", 
"opcWrObj", 
"opcAddrReg", 
"opcAddrNode", 
"opcLdDeref", 
"opcWrDeref", 
"opcWrStrIdx", 
"opcLdStrIdx", 
"opcAddInt", 
"opcAddImmInt", 
"opcSubInt", 
"opcSubImmInt", 
"opcLenSeq", 
"opcLenStr", 
"opcIncl", 
"opcInclRange", 
"opcExcl", 
"opcCard", 
"opcMulInt", 
"opcDivInt", 
"opcModInt", 
"opcAddFloat", 
"opcSubFloat", 
"opcMulFloat", 
"opcDivFloat", 
"opcShrInt", 
"opcShlInt", 
"opcBitandInt", 
"opcBitorInt", 
"opcBitxorInt", 
"opcAddu", 
"opcSubu", 
"opcMulu", 
"opcDivu", 
"opcModu", 
"opcEqInt", 
"opcLeInt", 
"opcLtInt", 
"opcEqFloat", 
"opcLeFloat", 
"opcLtFloat", 
"opcLeu", 
"opcLtu", 
"opcEqRef", 
"opcEqNimrodNode", 
"opcXor", 
"opcNot", 
"opcUnaryMinusInt", 
"opcUnaryMinusFloat", 
"opcBitnotInt", 
"opcEqStr", 
"opcLeStr", 
"opcLtStr", 
"opcEqSet", 
"opcLeSet", 
"opcLtSet", 
"opcMulSet", 
"opcPlusSet", 
"opcMinusSet", 
"opcSymdiffSet", 
"opcConcatStr", 
"opcContainsSet", 
"opcRepr", 
"opcSetLenStr", 
"opcSetLenSeq", 
"opcSwap", 
"opcIsNil", 
"opcOf", 
"opcIs", 
"opcSubStr", 
"opcParseFloat", 
"opcConv", 
"opcCast", 
"opcQuit", 
"opcReset", 
"opcNarrowS", 
"opcNarrowU", 
"opcAddStrCh", 
"opcAddStrStr", 
"opcAddSeqElem", 
"opcRangeChck", 
"opcNAdd", 
"opcNAddMultiple", 
"opcNKind", 
"opcNIntVal", 
"opcNFloatVal", 
"opcNSymbol", 
"opcNIdent", 
"opcNGetType", 
"opcNStrVal", 
"opcNSetIntVal", 
"opcNSetFloatVal", 
"opcNSetSymbol", 
"opcNSetIdent", 
"opcNSetType", 
"opcNSetStrVal", 
"opcNNewNimNode", 
"opcNCopyNimNode", 
"opcNCopyNimTree", 
"opcNDel", 
"opcGenSym", 
"opcSlurp", 
"opcGorge", 
"opcParseExprToAst", 
"opcParseStmtToAst", 
"opcQueryErrorFlag", 
"opcNError", 
"opcNWarning", 
"opcNHint", 
"opcNLineInfo", 
"opcEqIdent", 
"opcStrToIdent", 
"opcIdentToStr", 
"opcEcho", 
"opcIndCall", 
"opcIndCallAsgn", 
"opcRaise", 
"opcNChild", 
"opcNSetChild", 
"opcCallSite", 
"opcNewStr", 
"opcTJmp", 
"opcFJmp", 
"opcJmp", 
"opcJmpBack", 
"opcBranch", 
"opcTry", 
"opcExcept", 
"opcFinally", 
"opcFinallyEnd", 
"opcNew", 
"opcNewSeq", 
"opcLdNull", 
"opcLdNullReg", 
"opcLdConst", 
"opcAsgnConst", 
"opcLdGlobal", 
"opcLdGlobalAddr", 
"opcLdImmInt", 
"opcNBindSym", 
"opcSetType", 
"opcTypeTrait"};
static TNimNode TMP850[213];
NTI288048.size = sizeof(tctx288048);
NTI288048.kind = 17;
NTI288048.base = (&NTI285005);
TMP1949[0] = &TMP850[1];
NTI288250.size = sizeof(TY288250*);
NTI288250.kind = 24;
NTI288250.base = (&NTI124);
NTI288250.flags = 2;
NTI288250.marker = TMP1950;
TMP850[1].kind = 1;
TMP850[1].offset = offsetof(tctx288048, Code);
TMP850[1].typ = (&NTI288250);
TMP850[1].name = "code";
TMP1949[1] = &TMP850[2];
TMP850[2].kind = 1;
TMP850[2].offset = offsetof(tctx288048, Debug);
TMP850[2].typ = (&NTI195414);
TMP850[2].name = "debug";
TMP1949[2] = &TMP850[3];
TMP850[3].kind = 1;
TMP850[3].offset = offsetof(tctx288048, Globals);
TMP850[3].typ = (&NTI224808);
TMP850[3].name = "globals";
TMP1949[3] = &TMP850[4];
TMP850[4].kind = 1;
TMP850[4].offset = offsetof(tctx288048, Constants);
TMP850[4].typ = (&NTI224808);
TMP850[4].name = "constants";
TMP1949[4] = &TMP850[5];
TMP850[5].kind = 1;
TMP850[5].offset = offsetof(tctx288048, Types);
TMP850[5].typ = (&NTI224848);
TMP850[5].name = "types";
TMP1949[5] = &TMP850[6];
TMP850[6].kind = 1;
TMP850[6].offset = offsetof(tctx288048, Currentexceptiona);
TMP850[6].typ = (&NTI224808);
TMP850[6].name = "currentExceptionA";
TMP1949[6] = &TMP850[7];
TMP850[7].kind = 1;
TMP850[7].offset = offsetof(tctx288048, Currentexceptionb);
TMP850[7].typ = (&NTI224808);
TMP850[7].name = "currentExceptionB";
TMP1949[7] = &TMP850[8];
TMP850[8].kind = 1;
TMP850[8].offset = offsetof(tctx288048, Exceptioninstr);
TMP850[8].typ = (&NTI108);
TMP850[8].name = "exceptionInstr";
TMP1949[8] = &TMP850[9];
NTI288230.size = sizeof(pprocHEX3Aobjecttype288230);
NTI288230.kind = 18;
NTI288230.base = 0;
NTI288230.flags = 2;
TMP1951[0] = &TMP850[11];
NTI288030.size = sizeof(tblock288030);
NTI288030.kind = 18;
NTI288030.base = 0;
NTI288030.flags = 2;
TMP1952[0] = &TMP850[13];
TMP850[13].kind = 1;
TMP850[13].offset = offsetof(tblock288030, Label);
TMP850[13].typ = (&NTI224814);
TMP850[13].name = "label";
TMP1952[1] = &TMP850[14];
NTI288211.size = sizeof(TY288211*);
NTI288211.kind = 24;
NTI288211.base = (&NTI108);
NTI288211.flags = 2;
NTI288211.marker = TMP1953;
TMP850[14].kind = 1;
TMP850[14].offset = offsetof(tblock288030, Fixups);
TMP850[14].typ = (&NTI288211);
TMP850[14].name = "fixups";
TMP850[12].len = 2; TMP850[12].kind = 2; TMP850[12].sons = &TMP1952[0];
NTI288030.node = &TMP850[12];
NTI288231.size = sizeof(TY288231*);
NTI288231.kind = 24;
NTI288231.base = (&NTI288030);
NTI288231.flags = 2;
NTI288231.marker = TMP1954;
TMP850[11].kind = 1;
TMP850[11].offset = offsetof(pprocHEX3Aobjecttype288230, Blocks);
TMP850[11].typ = (&NTI288231);
TMP850[11].name = "blocks";
TMP1951[1] = &TMP850[15];
TMP850[15].kind = 1;
TMP850[15].offset = offsetof(pprocHEX3Aobjecttype288230, Sym);
TMP850[15].typ = (&NTI224814);
TMP850[15].name = "sym";
TMP1951[2] = &TMP850[16];
NTI288237.size = sizeof(TY288237);
NTI288237.kind = 18;
NTI288237.base = 0;
NTI288237.flags = 3;
TMP1955[0] = &TMP850[18];
TMP850[18].kind = 1;
TMP850[18].offset = offsetof(TY288237, Field0);
TMP850[18].typ = (&NTI138);
TMP850[18].name = "Field0";
TMP1955[1] = &TMP850[19];
NTI288038.size = sizeof(NU8);
NTI288038.kind = 14;
NTI288038.base = 0;
NTI288038.flags = 3;
for (TMP1958 = 0; TMP1958 < 9; TMP1958++) {
TMP850[TMP1958+20].kind = 1;
TMP850[TMP1958+20].offset = TMP1958;
TMP850[TMP1958+20].name = TMP1957[TMP1958];
TMP1956[TMP1958] = &TMP850[TMP1958+20];
}
TMP850[29].len = 9; TMP850[29].kind = 2; TMP850[29].sons = &TMP1956[0];
NTI288038.node = &TMP850[29];
TMP850[19].kind = 1;
TMP850[19].offset = offsetof(TY288237, Field1);
TMP850[19].typ = (&NTI288038);
TMP850[19].name = "Field1";
TMP850[17].len = 2; TMP850[17].kind = 2; TMP850[17].sons = &TMP1955[0];
NTI288237.node = &TMP850[17];
NTI288234.size = sizeof(TY288234);
NTI288234.kind = 16;
NTI288234.base = (&NTI288237);
NTI288234.flags = 3;
TMP850[16].kind = 1;
TMP850[16].offset = offsetof(pprocHEX3Aobjecttype288230, Slots);
TMP850[16].typ = (&NTI288234);
TMP850[16].name = "slots";
TMP1951[3] = &TMP850[30];
TMP850[30].kind = 1;
TMP850[30].offset = offsetof(pprocHEX3Aobjecttype288230, Maxslots);
TMP850[30].typ = (&NTI108);
TMP850[30].name = "maxSlots";
TMP850[10].len = 4; TMP850[10].kind = 2; TMP850[10].sons = &TMP1951[0];
NTI288230.node = &TMP850[10];
NTI288040.size = sizeof(pprocHEX3Aobjecttype288230*);
NTI288040.kind = 22;
NTI288040.base = (&NTI288230);
NTI288040.flags = 2;
NTI288040.marker = TMP1959;
TMP850[9].kind = 1;
TMP850[9].offset = offsetof(tctx288048, Prc);
TMP850[9].typ = (&NTI288040);
TMP850[9].name = "prc";
TMP1949[9] = &TMP850[31];
TMP850[31].kind = 1;
TMP850[31].offset = offsetof(tctx288048, Module);
TMP850[31].typ = (&NTI224814);
TMP850[31].name = "module";
TMP1949[10] = &TMP850[32];
TMP850[32].kind = 1;
TMP850[32].offset = offsetof(tctx288048, Callsite);
TMP850[32].typ = (&NTI224808);
TMP850[32].name = "callsite";
TMP1949[11] = &TMP850[33];
NTI288032.size = sizeof(NU8);
NTI288032.kind = 14;
NTI288032.base = 0;
NTI288032.flags = 3;
for (TMP1962 = 0; TMP1962 < 5; TMP1962++) {
TMP850[TMP1962+34].kind = 1;
TMP850[TMP1962+34].offset = TMP1962;
TMP850[TMP1962+34].name = TMP1961[TMP1962];
TMP1960[TMP1962] = &TMP850[TMP1962+34];
}
TMP850[39].len = 5; TMP850[39].kind = 2; TMP850[39].sons = &TMP1960[0];
NTI288032.node = &TMP850[39];
TMP850[33].kind = 1;
TMP850[33].offset = offsetof(tctx288048, Mode);
TMP850[33].typ = (&NTI288032);
TMP850[33].name = "mode";
TMP1949[12] = &TMP850[40];
NTI288034.size = sizeof(NU8);
NTI288034.kind = 14;
NTI288034.base = 0;
NTI288034.flags = 3;
for (TMP1965 = 0; TMP1965 < 3; TMP1965++) {
TMP850[TMP1965+41].kind = 1;
TMP850[TMP1965+41].offset = TMP1965;
TMP850[TMP1965+41].name = TMP1964[TMP1965];
TMP1963[TMP1965] = &TMP850[TMP1965+41];
}
TMP850[44].len = 3; TMP850[44].kind = 2; TMP850[44].sons = &TMP1963[0];
NTI288034.node = &TMP850[44];
NTI288036.size = sizeof(NU8);
NTI288036.kind = 19;
NTI288036.base = (&NTI288034);
NTI288036.flags = 3;
TMP850[45].len = 0; TMP850[45].kind = 0;
NTI288036.node = &TMP850[45];
TMP850[40].kind = 1;
TMP850[40].offset = offsetof(tctx288048, Features);
TMP850[40].typ = (&NTI288036);
TMP850[40].name = "features";
TMP1949[13] = &TMP850[46];
TMP850[46].kind = 1;
TMP850[46].offset = offsetof(tctx288048, Traceactive);
TMP850[46].typ = (&NTI138);
TMP850[46].name = "traceActive";
TMP1949[14] = &TMP850[47];
TMP850[47].kind = 1;
TMP850[47].offset = offsetof(tctx288048, Loopiterations);
TMP850[47].typ = (&NTI108);
TMP850[47].name = "loopIterations";
TMP1949[15] = &TMP850[48];
TMP850[48].kind = 1;
TMP850[48].offset = offsetof(tctx288048, Comesfromheuristic);
TMP850[48].typ = (&NTI194539);
TMP850[48].name = "comesFromHeuristic";
TMP1949[16] = &TMP850[49];
NTI288270.size = sizeof(TY288270);
NTI288270.kind = 18;
NTI288270.base = 0;
TMP1966[0] = &TMP850[51];
TMP850[51].kind = 1;
TMP850[51].offset = offsetof(TY288270, Field0);
TMP850[51].typ = (&NTI149);
TMP850[51].name = "Field0";
TMP1966[1] = &TMP850[52];
NTI288044.size = sizeof(TY611034);
NTI288044.kind = 18;
NTI288044.base = 0;
NTI288044.flags = 2;
TMP1967[0] = &TMP850[54];
TMP850[54].kind = 1;
TMP850[54].offset = offsetof(TY611034, Field0);
TMP850[54].typ = (&NTI153);
TMP850[54].name = "Field0";
TMP1967[1] = &TMP850[55];
TMP850[55].kind = 1;
TMP850[55].offset = offsetof(TY611034, Field1);
TMP850[55].typ = (&NTI611036);
TMP850[55].name = "Field1";
TMP850[53].len = 2; TMP850[53].kind = 2; TMP850[53].sons = &TMP1967[0];
NTI288044.node = &TMP850[53];
TMP850[52].kind = 1;
TMP850[52].offset = offsetof(TY288270, Field1);
TMP850[52].typ = (&NTI288044);
TMP850[52].name = "Field1";
TMP850[50].len = 2; TMP850[50].kind = 2; TMP850[50].sons = &TMP1966[0];
NTI288270.node = &TMP850[50];
NTI288269.size = sizeof(TY288269*);
NTI288269.kind = 24;
NTI288269.base = (&NTI288270);
NTI288269.marker = TMP1968;
TMP850[49].kind = 1;
TMP850[49].offset = offsetof(tctx288048, Callbacks);
TMP850[49].typ = (&NTI288269);
TMP850[49].name = "callbacks";
TMP1949[17] = &TMP850[56];
TMP850[56].kind = 1;
TMP850[56].offset = offsetof(tctx288048, Errorflag);
TMP850[56].typ = (&NTI149);
TMP850[56].name = "errorFlag";
TMP850[0].len = 18; TMP850[0].kind = 2; TMP850[0].sons = &TMP1949[0];
NTI288048.node = &TMP850[0];
NTI288046.size = sizeof(tctx288048*);
NTI288046.kind = 22;
NTI288046.base = (&NTI288048);
NTI288046.marker = TMP1969;
NTI288028.size = sizeof(NU8);
NTI288028.kind = 14;
NTI288028.base = 0;
NTI288028.flags = 3;
for (TMP2854 = 0; TMP2854 < 155; TMP2854++) {
TMP850[TMP2854+57].kind = 1;
TMP850[TMP2854+57].offset = TMP2854;
TMP850[TMP2854+57].name = TMP2853[TMP2854];
TMP2852[TMP2854] = &TMP850[TMP2854+57];
}
TMP850[212].len = 155; TMP850[212].kind = 2; TMP850[212].sons = &TMP2852[0];
NTI288028.node = &TMP850[212];
}

