/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode191813 Tnode191813;
typedef struct Tsym191843 Tsym191843;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype191849 Ttype191849;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib191831 Tlib191831;
typedef struct Templctx384019 Templctx384019;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct TY86345 TY86345;
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
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tidpair191857 Tidpair191857;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct TY191933 TY191933;
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
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
struct  Templctx384019  {
Tsym191843* owner;
Tsym191843* gensymowner;
NIM_BOOL instlines;
Tidtable191861 mapping;
};
struct TY86345 {
NimStringDesc* Field0;
NI Field1;
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
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
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
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
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
struct  Tidpair191857  {
Tidobj168015* key;
TNimObject* val;
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
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
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
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_166134)(Tlineinfo164338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode191813*, evaltemplateargs_384184)(Tnode191813* n, Tsym191843* s);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
N_NIMCALL(NI, sonslen_194351)(Ttype191849* n);
N_NIMCALL(Tnode191813*, newnodei_193351)(NU8 kind, Tlineinfo164338 info);
N_NIMCALL(Tnode191813*, copytree_196028)(Tnode191813* src);
N_NIMCALL(void, localerror_166155)(Tlineinfo164338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_193819)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(void, initidtable_195057)(Tidtable191861* x);
N_NIMCALL(Tnode191813*, getbody_236648)(Tsym191843* s);
static N_INLINE(NIM_BOOL, isatom_196905)(Tnode191813* n);
N_NIMCALL(void, evaltemplateaux_384039)(Tnode191813* templ, Tnode191813* actual, Templctx384019* c, Tnode191813* result);
static N_INLINE(NI, len_192097)(Tnode191813* n);
N_NIMCALL(void, add_192164)(Tnode191813* father, Tnode191813* son);
N_NIMCALL(void, internalerror_166218)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_166306)(TY86345 x);
N_NIMCALL(TNimObject*, idtableget_199182)(Tidtable191861 t, Tidobj168015* key);
N_NIMCALL(Tsym191843*, copysym_194607)(Tsym191843* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void, idtableput_199196)(Tidtable191861* t, Tidobj168015* key, TNimObject* val);
N_NIMCALL(Tnode191813*, newsymnode_193338)(Tsym191843* sym, Tlineinfo164338 info);
N_NIMCALL(Tnode191813*, copynode_384027)(Templctx384019* ctx, Tnode191813* a, Tnode191813* b);
N_NIMCALL(Tnode191813*, copynode_195640)(Tnode191813* src);
N_NIMCALL(NimStringDesc*, rendertree_213058)(Tnode191813* n, NU8 renderflags);
static N_INLINE(NI, safelen_192125)(Tnode191813* n);
STRING_LITERAL(TMP2820, "", 0);
STRING_LITERAL(TMP2822, "evaltempl.nim", 13);
NIM_CONST TY86345 TMP2821 = {((NimStringDesc*) &TMP2822),
((NI) 39)}
;
NI evaltemplatecounter_384256;
extern Tgcheap48216 gch_48244;

N_NIMCALL(Tnode191813*, evaltemplateargs_384184)(Tnode191813* n, Tsym191843* s) {
	Tnode191813* result;
	NI a;
	NI f;
	result = 0;
	a = 0;
	switch ((*n).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		a = sonslen_194403(n);
	}
	break;
	default:
	{
		a = ((NI) 0);
	}
	break;
	}
	f = sonslen_194351((*s).typ);
	{
		if (!(f < a)) goto LA5;
		globalerror_166134((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP2820));
	}
	LA5: ;
	result = newnodei_193351(((NU8) 152), (*n).info);
	{
		NI i_384204;
		NI HEX3Atmp_384234;
		NI res_384237;
		i_384204 = 0;
		HEX3Atmp_384234 = 0;
		HEX3Atmp_384234 = (NI)(f - ((NI) 1));
		res_384237 = ((NI) 1);
		{
			while (1) {
				Tnode191813* arg;
				if (!(res_384237 <= HEX3Atmp_384234)) goto LA9;
				i_384204 = res_384237;
				{
					if (!(i_384204 < a)) goto LA12;
					arg = (*n).kindU.S6.sons->data[i_384204];
				}
				goto LA10;
				LA12: ;
				{
					arg = copytree_196028((*(*(*(*(*s).typ).n).kindU.S6.sons->data[i_384204]).kindU.S4.sym).ast);
				}
				LA10: ;
				{
					NIM_BOOL LOC17;
					LOC17 = 0;
					LOC17 = (arg == NIM_NIL);
					if (LOC17) goto LA18;
					LOC17 = ((*arg).kind == ((NU8) 1));
					LA18: ;
					if (!LOC17) goto LA19;
					localerror_166155((*n).info, ((NU16) 133), ((NimStringDesc*) &TMP2820));
				}
				LA19: ;
				addson_193819(result, arg);
				res_384237 += ((NI) 1);
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_196905)(Tnode191813* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, len_192097)(Tnode191813* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
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

N_NIMCALL(Tnode191813*, copynode_384027)(Templctx384019* ctx, Tnode191813* a, Tnode191813* b) {
	Tnode191813* result;
	result = 0;
	result = copynode_195640(a);
	{
		if (!(*ctx).instlines) goto LA3;
		(*result).info = (*b).info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_384039)(Tnode191813* templ, Tnode191813* actual, Templctx384019* c, Tnode191813* result) {
	switch ((*templ).kind) {
	case ((NU8) 3):
	{
		Tsym191843* s;
		s = (*templ).kindU.S4.sym;
		{
			if (!((*(*s).owner).Sup.id == (*(*c).owner).Sup.id)) goto LA4;
			{
				NIM_BOOL LOC8;
				Tnode191813* x;
				LOC8 = 0;
				LOC8 = ((*s).kind == ((NU8) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s).flags &(1<<((((NU8) 31))&31)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x = (*actual).kindU.S6.sons->data[(*s).position];
				{
					if (!((*x).kind == ((NU8) 152))) goto LA14;
					{
						Tnode191813* y_384083;
						y_384083 = 0;
						{
							NI i_384142;
							NI HEX3Atmp_384144;
							NI LOC18;
							NI res_384146;
							i_384142 = 0;
							HEX3Atmp_384144 = 0;
							LOC18 = 0;
							LOC18 = len_192097(x);
							HEX3Atmp_384144 = (LOC18 - 1);
							res_384146 = ((NI) 0);
							{
								while (1) {
									if (!(res_384146 <= HEX3Atmp_384144)) goto LA20;
									i_384142 = res_384146;
									y_384083 = (*x).kindU.S6.sons->data[i_384142];
									add_192164(result, y_384083);
									res_384146 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode191813* LOC22;
					LOC22 = 0;
					LOC22 = copytree_196028(x);
					add_192164(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				Tsym191843* x;
				Tidobj168015* LOC29;
				TNimObject* LOC30;
				Tlineinfo164338 LOC37;
				Tnode191813* LOC43;
				{
					NimStringDesc* LOC28;
					if (!!((((*s).flags &(1<<((((NU8) 31))&31)))!=0))) goto LA26;
					LOC28 = 0;
					LOC28 = HEX24_166306(TMP2821);
					internalerror_166218(LOC28);
				}
				LA26: ;
				LOC29 = 0;
				LOC29 = &s->Sup;
				LOC30 = 0;
				LOC30 = idtableget_199182((*c).mapping, LOC29);
				x = ((Tsym191843*) (LOC30));
				{
					Tidobj168015* LOC35;
					TNimObject* LOC36;
					if (!(x == NIM_NIL)) goto LA33;
					x = copysym_194607(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).owner), (*c).gensymowner);
					LOC35 = 0;
					LOC35 = &s->Sup;
					LOC36 = 0;
					LOC36 = &x->Sup.Sup;
					idtableput_199196((&(*c).mapping), LOC35, LOC36);
				}
				LA33: ;
				{
					if (!(*c).instlines) goto LA40;
					LOC37 = (*actual).info;
				}
				goto LA38;
				LA40: ;
				{
					LOC37 = (*templ).info;
				}
				LA38: ;
				LOC43 = 0;
				LOC43 = newsymnode_193338(x, LOC37);
				add_192164(result, LOC43);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode191813* LOC45;
			LOC45 = 0;
			LOC45 = copynode_384027((&(*c)), templ, actual);
			add_192164(result, LOC45);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		Tnode191813* LOC47;
		LOC47 = 0;
		LOC47 = copynode_384027((&(*c)), templ, actual);
		add_192164(result, LOC47);
	}
	break;
	default:
	{
		Tnode191813* res;
		res = copynode_384027((&(*c)), templ, actual);
		{
			NI i_384135;
			NI HEX3Atmp_384150;
			NI LOC50;
			NI res_384153;
			i_384135 = 0;
			HEX3Atmp_384150 = 0;
			LOC50 = 0;
			LOC50 = sonslen_194403(templ);
			HEX3Atmp_384150 = (NI)(LOC50 - ((NI) 1));
			res_384153 = ((NI) 0);
			{
				while (1) {
					if (!(res_384153 <= HEX3Atmp_384150)) goto LA52;
					i_384135 = res_384153;
					evaltemplateaux_384039((*templ).kindU.S6.sons->data[i_384135], actual, c, res);
					res_384153 += ((NI) 1);
				} LA52: ;
			}
		}
		add_192164(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_192125)(Tnode191813* n) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind >= ((NU8) 0) && (*n).kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode191813*, evaltemplate_384260)(Tnode191813* n, Tsym191843* tmpl, Tsym191843* gensymowner) {
	Tnode191813* result;
	Tnode191813* args;
	Templctx384019 ctx;
	Tnode191813* body;
	result = 0;
	evaltemplatecounter_384256 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_384256)) goto LA3;
		globalerror_166134((*n).info, ((NU16) 183), ((NimStringDesc*) &TMP2820));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_384184(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.owner = tmpl;
	ctx.gensymowner = gensymowner;
	initidtable_195057((&ctx.mapping));
	body = getbody_236648(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_196905(body);
		if (!LOC7) goto LA8;
		result = newnodei_193351(((NU8) 37), (*body).info);
		evaltemplateaux_384039(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_192097(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result = (*result).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_213058(result, 4);
			localerror_166155((*result).info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_195640(body);
		ctx.instlines = !(((*body).kind == ((NU8) 115) || (*body).kind == ((NU8) 126) || (*body).kind == ((NU8) 112) || (*body).kind == ((NU8) 127)));
		{
			if (!ctx.instlines) goto LA20;
			(*result).info = (*n).info;
		}
		LA20: ;
		{
			NI i_384308;
			NI HEX3Atmp_384322;
			NI LOC23;
			NI res_384325;
			i_384308 = 0;
			HEX3Atmp_384322 = 0;
			LOC23 = 0;
			LOC23 = safelen_192125(body);
			HEX3Atmp_384322 = (NI)(LOC23 - ((NI) 1));
			res_384325 = ((NI) 0);
			{
				while (1) {
					if (!(res_384325 <= HEX3Atmp_384322)) goto LA25;
					i_384308 = res_384325;
					evaltemplateaux_384039((*body).kindU.S6.sons->data[i_384308], args, (&ctx), result);
					res_384325 += ((NI) 1);
				} LA25: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_384256 -= ((NI) 1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_evaltemplInit)(void) {
	evaltemplatecounter_384256 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_evaltemplDatInit)(void) {
}
