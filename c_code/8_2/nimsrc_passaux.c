/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tsym190843 Tsym190843;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident167021 Tident167021;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym190843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Ttype190849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode190813* path;
};
typedef NI TY27420[8];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, rawmessage_164960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, internalerror_165218)(NimStringDesc* errmsg);
N_NIMCALL(void, message_165188)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(Tnode190813*, cleanup_505066)(Tpasscontext241005* c, Tnode190813* n);
N_NIMCALL(Tsym190843*, getmodule_198243)(Tsym190843* s);
N_NIMCALL(NIM_BOOL, astneeded_241093)(Tsym190843* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
STRING_LITERAL(TMP1926, "logpass: context is not nil", 27);
extern NI gverbosity_154137;
extern NU64 gnotes_164011;
extern NI gbackendid_189013;
extern NU32 gglobaloptions_154128;
extern Tnode190813* emptynode_191807;
extern Tgcheap48216 gch_48244;

N_NIMCALL(Tpasscontext241005*, verboseopen_505012)(Tsym190843* s) {
	Tpasscontext241005* result;
	result = 0;
	result = NIM_NIL;
	{
		if (!(((NI) 0) < gverbosity_154137)) goto LA3;
		rawmessage_164960(((NU16) 269), (*(*s).name).s);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tnode190813*, verboseprocess_505023)(Tpasscontext241005* context, Tnode190813* n) {
	Tnode190813* result;
	result = 0;
	result = n;
	{
		if (!!((context == NIM_NIL))) goto LA3;
		internalerror_165218(((NimStringDesc*) &TMP1926));
	}
	LA3: ;
	{
		NimStringDesc* LOC9;
		if (!(gverbosity_154137 == ((NI) 3))) goto LA7;
		gnotes_164011 |= ((NI64)1)<<(((((NU16) 269)- 230))%(sizeof(NI64)*8));
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_189013);
		message_165188((*n).info, ((NU16) 269), LOC9);
	}
	LA7: ;
	return result;
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46347* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46347* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode190813*, cleanup_505066)(Tpasscontext241005* c, Tnode190813* n) {
	Tnode190813* result;
{	result = 0;
	result = n;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((gglobaloptions_154128 &(1<<((((NU8) 2))&31)))!=0);
		if (LOC3) goto LA4;
		LOC3 = (n == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	switch ((*n).kind) {
	case ((NU8) 115):
	{
		{
			NI i_505105;
			NI HEX3Atmp_505134;
			NI LOC9;
			NI res_505137;
			i_505105 = 0;
			HEX3Atmp_505134 = 0;
			LOC9 = 0;
			LOC9 = sonslen_193403(n);
			HEX3Atmp_505134 = (NI)(LOC9 - ((NI) 1));
			res_505137 = ((NI) 0);
			{
				while (1) {
					Tnode190813* LOC12;
					if (!(res_505137 <= HEX3Atmp_505134)) goto LA11;
					i_505105 = res_505137;
					LOC12 = 0;
					LOC12 = cleanup_505066(c, (*n).kindU.S6.sons->data[i_505105]);
					res_505137 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		{
			Tsym190843* s;
			if (!((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 3))) goto LA16;
			s = (*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym;
			{
				NIM_BOOL LOC20;
				Tsym190843* LOC21;
				NIM_BOOL LOC23;
				LOC20 = 0;
				LOC21 = 0;
				LOC21 = getmodule_198243(s);
				LOC20 = !((((*LOC21).flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC20)) goto LA22;
				LOC23 = 0;
				LOC23 = astneeded_241093(s);
				LOC20 = !(LOC23);
				LA22: ;
				if (!LOC20) goto LA24;
				asgnRefNoCycle((void**) (&(*(*s).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_191807);
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
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_passauxInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_passauxDatInit)(void) {
}

