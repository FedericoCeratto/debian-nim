/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tpasscontext241005 Tpasscontext241005;
typedef struct Tsym190843 Tsym190843;
typedef struct Tgen506016 Tgen506016;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tnode190813 Tnode190813;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tloc190827 Tloc190827;
typedef struct Tlib190831 Tlib190831;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
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
struct  Tpasscontext241005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tgen506016  {
  Tpasscontext241005 Sup;
Tsym190843* module;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Tlineinfo163338  {
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
typedef Ropeobj161009* TY490436[2];
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
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
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
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
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
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
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
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
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4954)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(NimStringDesc*, getmodulename_251018)(Tnode190813* n);
N_NIMCALL(void, adddependencyaux_506028)(NimStringDesc* importing, NimStringDesc* imported);
N_NIMCALL(void, addf_162635)(Ropeobj161009** c, NimStringDesc* frmt, Ropeobj161009** args, NI argsLen0);
N_NIMCALL(Ropeobj161009*, rope_161320)(NimStringDesc* s);
N_NIMCALL(Tnode190813*, adddotdependency_506041)(Tpasscontext241005* c, Tnode190813* n);
N_NIMCALL(void, writerope_162105)(Ropeobj161009* head, NimStringDesc* filename, NIM_BOOL usewarning);
N_NIMCALL(Ropeobj161009*, HEX25_162235)(NimStringDesc* frmt, Ropeobj161009** args, NI argsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
STRING_LITERAL(TMP4955, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP4956, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP4957, "", 0);
STRING_LITERAL(TMP4958, "dot", 3);
Ropeobj161009* gdotgraph_506023;
extern TNimType NTI241005; /* TPassContext */
TNimType NTI506016; /* TGen */
extern TNimType NTI190811; /* PSym */
TNimType NTI506018; /* PGen */
extern Tgcheap48216 gch_48244;
N_NIMCALL(void, TMP4954)(void* p, NI op) {
	Tgen506016* a;
	a = (Tgen506016*)p;
	nimGCvisit((void*)(*a).module, op);
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

N_NIMCALL(Tpasscontext241005*, myopen_506131)(Tsym190843* module) {
	Tpasscontext241005* result;
	Tgen506016* g;
	result = 0;
	g = 0;
	g = (Tgen506016*) newObj((&NTI506018), sizeof(Tgen506016));
	(*g).Sup.Sup.m_type = (&NTI506016);
	asgnRefNoCycle((void**) (&(*g).module), module);
	result = &g->Sup;
	return result;
}

N_NIMCALL(void, adddependencyaux_506028)(NimStringDesc* importing, NimStringDesc* imported) {
	TY490436 LOC1;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = rope_161320(importing);
	LOC1[1] = rope_161320(imported);
	addf_162635(&gdotgraph_506023, ((NimStringDesc*) &TMP4955), LOC1, 2);
}

N_NIMCALL(Tnode190813*, adddotdependency_506041)(Tpasscontext241005* c, Tnode190813* n) {
	Tnode190813* result;
	Tgen506016* g;
	result = 0;
	result = n;
	g = ((Tgen506016*) (c));
	switch ((*n).kind) {
	case ((NU8) 116):
	{
		{
			NI i_506059;
			NI HEX3Atmp_506081;
			NI LOC3;
			NI res_506084;
			i_506059 = 0;
			HEX3Atmp_506081 = 0;
			LOC3 = 0;
			LOC3 = sonslen_193403(n);
			HEX3Atmp_506081 = (NI)(LOC3 - ((NI) 1));
			res_506084 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* imported;
					if (!(res_506084 <= HEX3Atmp_506081)) goto LA5;
					i_506059 = res_506084;
					imported = getmodulename_251018((*n).kindU.S6.sons->data[i_506059]);
					adddependencyaux_506028((*(*(*g).module).name).s, imported);
					res_506084 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 120):
	case ((NU8) 117):
	{
		NimStringDesc* imported;
		imported = getmodulename_251018((*n).kindU.S6.sons->data[((NI) 0)]);
		adddependencyaux_506028((*(*(*g).module).name).s, imported);
	}
	break;
	case ((NU8) 115):
	case ((NU8) 112):
	case ((NU8) 126):
	case ((NU8) 127):
	{
		{
			NI i_506078;
			NI HEX3Atmp_506089;
			NI LOC9;
			NI res_506092;
			i_506078 = 0;
			HEX3Atmp_506089 = 0;
			LOC9 = 0;
			LOC9 = sonslen_193403(n);
			HEX3Atmp_506089 = (NI)(LOC9 - ((NI) 1));
			res_506092 = ((NI) 0);
			{
				while (1) {
					Tnode190813* LOC12;
					if (!(res_506092 <= HEX3Atmp_506089)) goto LA11;
					i_506078 = res_506092;
					LOC12 = 0;
					LOC12 = adddotdependency_506041(c, (*n).kindU.S6.sons->data[i_506078]);
					res_506092 += ((NI) 1);
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

N_NIMCALL(void, generatedot_506009)(NimStringDesc* project) {
	TY490436 LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	Ropeobj161009* LOC4;
	NimStringDesc* LOC5;
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC2 = 0;
	LOC2 = nosextractFilename(project);
	LOC3 = 0;
	LOC3 = noschangeFileExt(LOC2, ((NimStringDesc*) &TMP4957));
	LOC1[0] = rope_161320(LOC3);
	LOC1[1] = gdotgraph_506023;
	LOC4 = 0;
	LOC4 = HEX25_162235(((NimStringDesc*) &TMP4956), LOC1, 2);
	LOC5 = 0;
	LOC5 = noschangeFileExt(project, ((NimStringDesc*) &TMP4958));
	writerope_162105(LOC4, LOC5, NIM_FALSE);
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_dependsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_dependsDatInit)(void) {
static TNimNode TMP1065[1];
NTI506016.size = sizeof(Tgen506016);
NTI506016.kind = 17;
NTI506016.base = (&NTI241005);
TMP1065[0].kind = 1;
TMP1065[0].offset = offsetof(Tgen506016, module);
TMP1065[0].typ = (&NTI190811);
TMP1065[0].name = "module";
NTI506016.node = &TMP1065[0];
NTI506018.size = sizeof(Tgen506016*);
NTI506018.kind = 22;
NTI506018.base = (&NTI506016);
NTI506018.marker = TMP4954;
}
