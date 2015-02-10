/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <setjmp.h>

#include <string.h>

#include <sys/types.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct tsym224846 tsym224846;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct tnode224816 tnode224816;
typedef struct tnodeseq224810 tnodeseq224810;
typedef struct ttype224852 ttype224852;
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
typedef struct processobj139402 processobj139402;
typedef struct streamobj134035 streamobj134035;
typedef struct tidobj199015 tidobj199015;
typedef struct ttypeseq224848 ttypeseq224848;
typedef struct tscope224840 tscope224840;
typedef struct TY224947 TY224947;
typedef struct tinstantiation224836 tinstantiation224836;
typedef struct tstrtable224820 tstrtable224820;
typedef struct tsymseq224818 tsymseq224818;
typedef struct tident199021 tident199021;
typedef struct tloc224830 tloc224830;
typedef struct trope176009 trope176009;
typedef struct tlib224834 tlib224834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY224936 TY224936;
typedef struct tlistentry126022 tlistentry126022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo194539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY14809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY14809 raiseAction;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tnode224816* TY245892[1];
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
struct  processobj139402  {
  TNimObject Sup;
int Inhandle;
int Outhandle;
int Errhandle;
streamobj134035* Instream;
streamobj134035* Outstream;
streamobj134035* Errstream;
pid_t Id;
int Exitcode;
};
typedef N_NIMCALL_PTR(void, TY134036) (streamobj134035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY134040) (streamobj134035* s);
typedef N_NIMCALL_PTR(void, TY134044) (streamobj134035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY134049) (streamobj134035* s);
typedef N_NIMCALL_PTR(NI, TY134053) (streamobj134035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY134059) (streamobj134035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY134065) (streamobj134035* s);
struct  streamobj134035  {
  TNimObject Sup;
TY134036 Closeimpl;
TY134040 Atendimpl;
TY134044 Setpositionimpl;
TY134049 Getpositionimpl;
TY134053 Readdataimpl;
TY134059 Writedataimpl;
TY134065 Flushimpl;
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
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, findfile_169356)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_12842)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_225851)(tsym224846* m, tnode224816* n);
N_NIMCALL(tnode224816*, newnode_227207)(NU8 kind, tlineinfo194539 info, tnodeseq224810* sons, ttype224852* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(tnode224816*, newstrnode_225118)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_196955)(tlineinfo194539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44935* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44935* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44935* c);
N_NOINLINE(void, incl_45671)(tcellset44947* s, tcell44935* cell);
static N_INLINE(void, decref_50604)(tcell44935* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(processobj139402*, startcmd_139644)(NimStringDesc* command, NU8 options);
N_NIMCALL(void, write_134241)(streamobj134035* s, NimStringDesc* x);
N_NIMCALL(streamobj134035*, nospinputStream)(processobj139402* p);
N_NIMCALL(void, close_134093)(streamobj134035* s);
N_NIMCALL(NimStringDesc*, readoutput_453009)(processobj139402* p);
N_NIMCALL(streamobj134035*, nospoutputStream)(processobj139402* p);
N_NIMCALL(NIM_BOOL, atend_134119)(streamobj134035* s);
N_NIMCALL(NimStringDesc*, readline_134564)(streamobj134035* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, nospwaitForExit)(processobj139402* p, NI timeout);
STRING_LITERAL(TMP2857, "", 0);
STRING_LITERAL(TMP2869, "\012", 1);
extern TSafePoint* exchandler_16243;
extern TNimType NTI224810; /* TNodeSeq */
extern tgcheap47016 gch_47044;
extern TNimType NTI3231; /* IOError */
extern Exception* currexception_16245;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16243;
	exchandler_16243 = s;
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

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16243 = (*exchandler_16243).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_16245;
	return result;
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_16245), (*currexception_16245).parent);
}

N_NIMCALL(NimStringDesc*, opslurp_453039)(NimStringDesc* file, tlineinfo194539 info, tsym224846* module) {
	NimStringDesc* volatile result;
	TSafePoint TMP2856;
	result = 0;
	pushSafePoint(&TMP2856);
	TMP2856.status = setjmp(TMP2856.context);
	if (TMP2856.status == 0) {
		NimStringDesc* filename;
		tnodeseq224810* LOC2;
		TY245892 LOC3;
		tnode224816* LOC4;
		filename = findfile_169356(file);
		result = readfile_12842(filename);
		LOC2 = 0;
		LOC2 = (tnodeseq224810*) newSeq((&NTI224810), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		LOC3[0] = newstrnode_225118(((NU8) 20), filename);
		asgnRefNoCycle((void**) (&LOC2->data[0]), LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_227207(((NU8) 121), info, LOC2, NIM_NIL);
		appendtomodule_225851(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3231))) {
			TMP2856.status = 0;
			localerror_196955(info, ((NU16) 3), file);
			result = copyString(((NimStringDesc*) &TMP2857));
			popCurrentException();
		}
	}
	if (TMP2856.status != 0) reraiseException();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, readoutput_453009)(processobj139402* p) {
	NimStringDesc* result;
	streamobj134035* output;
	NI LOC5;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2857));
	output = nospoutputStream(p);
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* LOC4;
			LOC3 = 0;
			LOC3 = atend_134119(output);
			if (!!(LOC3)) goto LA2;
			LOC4 = 0;
			LOC4 = readline_134564(output);
			result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP2869));
		} LA2: ;
	}
	result = setLengthStr(result, (NI64)(result->Sup.len - 1));
	LOC5 = 0;
	LOC5 = nospwaitForExit(p, -1);
	return result;
}

N_NIMCALL(NimStringDesc*, opgorge_453027)(NimStringDesc* cmd, NimStringDesc* input) {
	NimStringDesc* result;
	processobj139402* p;
	result = 0;
	p = startcmd_139644(cmd, 10);
	{
		streamobj134035* LOC5;
		streamobj134035* LOC6;
		if (!!((input->Sup.len == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = nospinputStream(p);
		write_134241(LOC5, input);
		LOC6 = 0;
		LOC6 = nospinputStream(p);
		close_134093(LOC6);
	}
	LA3: ;
	result = readoutput_453009(p);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_vmdepsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_vmdepsDatInit)(void) {
}

