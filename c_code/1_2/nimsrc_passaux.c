/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tsym191843 Tsym191843;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident168021 Tident168021;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tnode191813 Tnode191813;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib191831 Tlib191831;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct TY191933 TY191933;
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
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Tsym191843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
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
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  Tpasscontext242005  {
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
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Ttype191849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry132022  {
  TNimObject Sup;
Tlistentry132022* prev;
Tlistentry132022* next;
};
struct  Tlib191831  {
  Tlistentry132022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode191813* path;
};
typedef NI TY27420[8];
struct  Tpagedesc46354  {
Tpagedesc46354* next;
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
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, rawmessage_165960)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, internalerror_166218)(NimStringDesc* errmsg);
N_NIMCALL(void, message_166188)(Tlineinfo164338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
N_NIMCALL(Tnode191813*, cleanup_506066)(Tpasscontext242005* c, Tnode191813* n);
N_NIMCALL(Tsym191843*, getmodule_199243)(Tsym191843* s);
N_NIMCALL(NIM_BOOL, astneeded_242093)(Tsym191843* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
STRING_LITERAL(TMP1930, "logpass: context is not nil", 27);
extern NI gverbosity_155137;
extern NU64 gnotes_165011;
extern NI gbackendid_190013;
extern NU32 gglobaloptions_155128;
extern Tnode191813* emptynode_192807;
extern Tgcheap48216 gch_48244;

N_NIMCALL(Tpasscontext242005*, verboseopen_506012)(Tsym191843* s) {
	Tpasscontext242005* result;
	result = 0;
	result = NIM_NIL;
	{
		if (!(((NI) 0) < gverbosity_155137)) goto LA3;
		rawmessage_165960(((NU16) 269), (*(*s).name).s);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tnode191813*, verboseprocess_506023)(Tpasscontext242005* context, Tnode191813* n) {
	Tnode191813* result;
	result = 0;
	result = n;
	{
		if (!!((context == NIM_NIL))) goto LA3;
		internalerror_166218(((NimStringDesc*) &TMP1930));
	}
	LA3: ;
	{
		NimStringDesc* LOC9;
		if (!(gverbosity_155137 == ((NI) 3))) goto LA7;
		gnotes_165011 |= ((NI64)1)<<(((((NU16) 269)- 230))%(sizeof(NI64)*8));
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_190013);
		message_166188((*n).info, ((NU16) 269), LOC9);
	}
	LA7: ;
	return result;
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46346* c;
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

N_NIMCALL(Tnode191813*, cleanup_506066)(Tpasscontext242005* c, Tnode191813* n) {
	Tnode191813* result;
{	result = 0;
	result = n;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((gglobaloptions_155128 &(1<<((((NU8) 2))&31)))!=0);
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
			NI i_506105;
			NI HEX3Atmp_506134;
			NI LOC9;
			NI res_506137;
			i_506105 = 0;
			HEX3Atmp_506134 = 0;
			LOC9 = 0;
			LOC9 = sonslen_194403(n);
			HEX3Atmp_506134 = (NI)(LOC9 - ((NI) 1));
			res_506137 = ((NI) 0);
			{
				while (1) {
					Tnode191813* LOC12;
					if (!(res_506137 <= HEX3Atmp_506134)) goto LA11;
					i_506105 = res_506137;
					LOC12 = 0;
					LOC12 = cleanup_506066(c, (*n).kindU.S6.sons->data[i_506105]);
					res_506137 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		{
			Tsym191843* s;
			if (!((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 3))) goto LA16;
			s = (*(*n).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym;
			{
				NIM_BOOL LOC20;
				Tsym191843* LOC21;
				NIM_BOOL LOC23;
				LOC20 = 0;
				LOC21 = 0;
				LOC21 = getmodule_199243(s);
				LOC20 = !((((*LOC21).flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC20)) goto LA22;
				LOC23 = 0;
				LOC23 = astneeded_242093(s);
				LOC20 = !(LOC23);
				LA22: ;
				if (!LOC20) goto LA24;
				asgnRefNoCycle((void**) (&(*(*s).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_192807);
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

