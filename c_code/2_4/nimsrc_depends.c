/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tsym191843 Tsym191843;
typedef struct Tgen507016 Tgen507016;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tnode191813 Tnode191813;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tloc191827 Tloc191827;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY191933 TY191933;
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
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen507016  {
  Tpasscontext242005 Sup;
Tsym191843* module;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef Ropeobj162009* TY491436[2];
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
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
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
typedef NI TY27420[16];
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
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib191831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode191813* path;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
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
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4956)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
N_NIMCALL(NimStringDesc*, getmodulename_252018)(Tnode191813* n);
N_NIMCALL(void, adddependencyaux_507028)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, addf_163635)(Ropeobj162009** c, NimStringDesc* frmt, Ropeobj162009** args, NI argsLen0);
N_NIMCALL(Ropeobj162009*, rope_162320)(NimStringDesc* s);
N_NIMCALL(Tnode191813*, adddotdependency_507041)(Tpasscontext242005* c, Tnode191813* n);
N_NIMCALL(void, writerope_163105)(Ropeobj162009* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(Ropeobj162009*, HEX25_163235)(NimStringDesc* frmt, Ropeobj162009** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
STRING_LITERAL(TMP4957, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP4958, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP4959, "", 0);
STRING_LITERAL(TMP4960, "dot", 3);
Ropeobj162009* gdotgraph_507023;
extern TNimType NTI242005; /* TPassContext */
TNimType NTI507016; /* TGen */
extern TNimType NTI191811; /* PSym */
TNimType NTI507018; /* PGen */
extern Tgcheap48216 gch_48244;
N_NIMCALL(void, TMP4956)(void* p, NI op) {
	Tgen507016* a;
	a = (Tgen507016*)p;
	nimGCvisit((void*)(*a).module, op);
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46346))))));
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
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tpasscontext242005*, myopen_507131)(Tsym191843* module) {
	Tpasscontext242005* result;
	Tgen507016* g;
	result = 0;
	g = 0;
	g = (Tgen507016*) newObj((&NTI507018), sizeof(Tgen507016));
	(*g).Sup.Sup.m_type = (&NTI507016);
	asgnRefNoCycle((void**) (&(*g).module), module);
	result = &g->Sup;
	return result;
}

N_NIMCALL(void, adddependencyaux_507028)(NimStringDesc* importing, NimStringDesc* imported) {
	TY491436 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = rope_162320(importing);
	LOC1[1] = rope_162320(imported);
	addf_163635(&gdotgraph_507023, ((NimStringDesc*) &TMP4957), LOC1, 2);
}

N_NIMCALL(Tnode191813*, adddotdependency_507041)(Tpasscontext242005* c, Tnode191813* n) {
	Tnode191813* result;
	Tgen507016* g;
	result = 0;
	result = n;
	g = ((Tgen507016*) (c));
	switch ((*n).kind) {
	case ((NU8) 116):
	{
		{
			NI i_507059;
			NI HEX3Atmp_507081;
			NI LOC3;
			NI res_507084;
			i_507059 = 0;
			HEX3Atmp_507081 = 0;
			LOC3 = 0;
			LOC3 = sonslen_194403(n);
			HEX3Atmp_507081 = (NI)(LOC3 - ((NI) 1));
			res_507084 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* imported;
					if (!(res_507084 <= HEX3Atmp_507081)) goto LA5;
					i_507059 = res_507084;
					imported = getmodulename_252018((*n).kindU.S6.sons->data[i_507059]);
					adddependencyaux_507028((*(*(*g).module).name).s, imported);
					res_507084 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 120):
	case ((NU8) 117):
	{
		NimStringDesc* imported;
		imported = getmodulename_252018((*n).kindU.S6.sons->data[((NI) 0)]);
		adddependencyaux_507028((*(*(*g).module).name).s, imported);
	}
	break;
	case ((NU8) 115):
	case ((NU8) 112):
	case ((NU8) 126):
	case ((NU8) 127):
	{
		{
			NI i_507078;
			NI HEX3Atmp_507089;
			NI LOC9;
			NI res_507092;
			i_507078 = 0;
			HEX3Atmp_507089 = 0;
			LOC9 = 0;
			LOC9 = sonslen_194403(n);
			HEX3Atmp_507089 = (NI)(LOC9 - ((NI) 1));
			res_507092 = ((NI) 0);
			{
				while (1) {
					Tnode191813* LOC12;
					if (!(res_507092 <= HEX3Atmp_507089)) goto LA11;
					i_507078 = res_507092;
					LOC12 = 0;
					LOC12 = adddotdependency_507041(c, (*n).kindU.S6.sons->data[i_507078]);
					res_507092 += ((NI) 1);
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

N_NIMCALL(void, generatedot_507009)(NimStringDesc* project) {
	TY491436 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	Ropeobj162009* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP4959));
	LOC1[0] = rope_162320(LOC3);
	LOC1[1] = gdotgraph_507023;
	LOC4 = 0;
	LOC4 = HEX25_163235(((NimStringDesc*) &TMP4958), LOC1, 2);
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP4960));
	writerope_163105(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_dependsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_dependsDatInit)(void) {
static TNimNode TMP1067[1];
NTI507016.size = sizeof(Tgen507016);
NTI507016.kind = 17;
NTI507016.base = (&NTI242005);
TMP1067[0].kind = 1;
TMP1067[0].offset = offsetof(Tgen507016, module);
TMP1067[0].typ = (&NTI191811);
TMP1067[0].name = "module";
NTI507016.node = &TMP1067[0];
NTI507018.size = sizeof(Tgen507016*);
NTI507018.kind = 22;
NTI507018.base = (&NTI507016);
NTI507018.marker = TMP4956;
}

