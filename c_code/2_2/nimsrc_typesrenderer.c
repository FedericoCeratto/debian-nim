/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode191813 Tnode191813;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tsym191843 Tsym191843;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY122008 TY122008;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib191831 Tlib191831;
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
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry130022 Tlistentry130022;
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
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct TY122008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, len_192097)(Tnode191813* n);
N_NIMCALL(NimStringDesc*, renderplainsymbolname_338013)(Tnode191813* n);
static N_INLINE(Tnode191813*, HEX5BHEX5D_192244)(Tnode191813* n, NI i);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, renderdefinitionname_213154)(Tsym191843* s, NIM_BOOL noquotes);
N_NIMCALL(void, internalerror_166199)(Tlineinfo164338 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_82529, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, renderparamtypes_340275)(TY122008** found, Tnode191813* n);
N_NIMCALL(NimStringDesc*, rendertype_338224)(Tnode191813* n);
N_NIMCALL(NimStringDesc*, typetostring_221032)(Ttype191849* typ, NU8 prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
STRING_LITERAL(TMP4800, "", 0);
STRING_LITERAL(TMP4801, "*", 1);
STRING_LITERAL(TMP4802, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP4809, "ref.", 4);
STRING_LITERAL(TMP4810, "ptr.", 4);
STRING_LITERAL(TMP4811, "proc(", 5);
STRING_LITERAL(TMP4812, "tuple[", 6);
STRING_LITERAL(TMP4813, "renderParamTypes(found,n) with ", 31);
extern TNimType NTI191029; /* TNodeKind */
extern TNimType NTI122008; /* seq[string] */
extern Tgcheap48216 gch_48244;

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

static N_INLINE(Tnode191813*, HEX5BHEX5D_192244)(Tnode191813* n, NI i) {
	Tnode191813* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, renderplainsymbolname_338013)(Tnode191813* n) {
	NimStringDesc* result;
{	result = 0;
	result = copyString(((NimStringDesc*) &TMP4800));
	switch ((*n).kind) {
	case ((NU8) 31):
	{
		{
			NI i_338036;
			NI HEX3Atmp_338202;
			NI LOC3;
			NI res_338205;
			i_338036 = 0;
			HEX3Atmp_338202 = 0;
			LOC3 = 0;
			LOC3 = len_192097(n);
			HEX3Atmp_338202 = (LOC3 - 1);
			res_338205 = ((NI) 0);
			{
				while (1) {
					NI LOC6;
					Tnode191813* LOC7;
					if (!(res_338205 <= HEX3Atmp_338202)) goto LA5;
					i_338036 = res_338205;
					LOC6 = 0;
					LOC6 = len_192097(n);
					LOC7 = 0;
					LOC7 = HEX5BHEX5D_192244(n, (LOC6 - 1));
					result = renderplainsymbolname_338013(LOC7);
					{
						if (!(((NI) 0) < (result ? result->Sup.len : 0))) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					res_338205 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 2):
	{
		{
			if (!!(eqStrings((*(*n).kindU.S5.ident).s, ((NimStringDesc*) &TMP4801)))) goto LA15;
			result = copyString((*(*n).kindU.S5.ident).s);
		}
		LA15: ;
	}
	break;
	case ((NU8) 3):
	{
		result = renderdefinitionname_213154((*n).kindU.S4.sym, NIM_TRUE);
	}
	break;
	case ((NU8) 43):
	{
		Tnode191813* LOC19;
		LOC19 = 0;
		LOC19 = HEX5BHEX5D_192244(n, ((NI) 0));
		result = renderplainsymbolname_338013(LOC19);
	}
	break;
	case ((NU8) 53):
	{
		NI LOC21;
		Tnode191813* LOC22;
		LOC21 = 0;
		LOC21 = len_192097(n);
		LOC22 = 0;
		LOC22 = HEX5BHEX5D_192244(n, (LOC21 - 1));
		result = renderplainsymbolname_338013(LOC22);
	}
	break;
	default:
	{
		NimStringDesc* LOC24;
		LOC24 = 0;
		LOC24 = rawNewString(reprEnum((*n).kind, (&NTI191029))->Sup.len + 29);
appendString(LOC24, ((NimStringDesc*) &TMP4802));
appendString(LOC24, reprEnum((*n).kind, (&NTI191029)));
		internalerror_166199((*n).info, LOC24);
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, rendertype_338224)(Tnode191813* n) {
	NimStringDesc* result;
	result = 0;
	switch ((*n).kind) {
	case ((NU8) 2):
	{
		result = copyString((*(*n).kindU.S5.ident).s);
	}
	break;
	case ((NU8) 3):
	{
		result = typetostring_221032((*(*n).kindU.S4.sym).typ, ((NU8) 0));
	}
	break;
	case ((NU8) 143):
	{
		Tnode191813* LOC4;
		LOC4 = 0;
		LOC4 = HEX5BHEX5D_192244(n, ((NI) 0));
		result = rendertype_338224(LOC4);
	}
	break;
	case ((NU8) 141):
	{
		NimStringDesc* LOC6;
		Tnode191813* LOC7;
		NimStringDesc* LOC8;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = HEX5BHEX5D_192244(n, ((NI) 0));
		LOC8 = 0;
		LOC8 = rendertype_338224(LOC7);
		LOC6 = rawNewString(LOC8->Sup.len + 4);
appendString(LOC6, ((NimStringDesc*) &TMP4809));
appendString(LOC6, LOC8);
		result = LOC6;
	}
	break;
	case ((NU8) 142):
	{
		NimStringDesc* LOC10;
		Tnode191813* LOC11;
		NimStringDesc* LOC12;
		LOC10 = 0;
		LOC11 = 0;
		LOC11 = HEX5BHEX5D_192244(n, ((NI) 0));
		LOC12 = 0;
		LOC12 = rendertype_338224(LOC11);
		LOC10 = rawNewString(LOC12->Sup.len + 4);
appendString(LOC10, ((NimStringDesc*) &TMP4810));
appendString(LOC10, LOC12);
		result = LOC10;
	}
	break;
	case ((NU8) 147):
	{
		Tnode191813* params;
		params = HEX5BHEX5D_192244(n, ((NI) 0));
		result = copyString(((NimStringDesc*) &TMP4811));
		{
			NI i_339419;
			NI HEX3Atmp_340202;
			NI LOC15;
			NI res_340205;
			i_339419 = 0;
			HEX3Atmp_340202 = 0;
			LOC15 = 0;
			LOC15 = len_192097(params);
			HEX3Atmp_340202 = (LOC15 - 1);
			res_340205 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC18;
					Tnode191813* LOC19;
					NimStringDesc* LOC20;
					if (!(res_340205 <= HEX3Atmp_340202)) goto LA17;
					i_339419 = res_340205;
					LOC18 = 0;
					LOC19 = 0;
					LOC19 = HEX5BHEX5D_192244(params, i_339419);
					LOC20 = 0;
					LOC20 = rendertype_338224(LOC19);
					LOC18 = rawNewString(LOC20->Sup.len + 1);
appendString(LOC18, LOC20);
appendChar(LOC18, 44);
					result = resizeString(result, LOC18->Sup.len + 0);
appendString(result, LOC18);
					res_340205 += ((NI) 1);
				} LA17: ;
			}
		}
		result->data[((result ? result->Sup.len : 0) - 1)] = 41;
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC22;
		NimStringDesc* typestr;
		Tnode191813* LOC23;
		LOC22 = 0;
		LOC22 = len_192097(n);
		typepos = (NI)(LOC22 - ((NI) 2));
		LOC23 = 0;
		LOC23 = HEX5BHEX5D_192244(n, typepos);
		typestr = rendertype_338224(LOC23);
		result = copyString(typestr);
		{
			NI i_339621;
			NI HEX3Atmp_340210;
			NI res_340213;
			i_339621 = 0;
			HEX3Atmp_340210 = 0;
			HEX3Atmp_340210 = (typepos - 1);
			res_340213 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC27;
					if (!(res_340213 <= HEX3Atmp_340210)) goto LA26;
					i_339621 = res_340213;
					LOC27 = 0;
					LOC27 = rawNewString(typestr->Sup.len + 1);
appendChar(LOC27, 44);
appendString(LOC27, typestr);
					result = resizeString(result, LOC27->Sup.len + 0);
appendString(result, LOC27);
					res_340213 += ((NI) 1);
				} LA26: ;
			}
		}
	}
	break;
	case ((NU8) 134):
	{
		result = copyString(((NimStringDesc*) &TMP4812));
		{
			NI i_339819;
			NI HEX3Atmp_340218;
			NI LOC30;
			NI res_340221;
			i_339819 = 0;
			HEX3Atmp_340218 = 0;
			LOC30 = 0;
			LOC30 = len_192097(n);
			HEX3Atmp_340218 = (LOC30 - 1);
			res_340221 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC33;
					Tnode191813* LOC34;
					NimStringDesc* LOC35;
					if (!(res_340221 <= HEX3Atmp_340218)) goto LA32;
					i_339819 = res_340221;
					LOC33 = 0;
					LOC34 = 0;
					LOC34 = HEX5BHEX5D_192244(n, i_339819);
					LOC35 = 0;
					LOC35 = rendertype_338224(LOC34);
					LOC33 = rawNewString(LOC35->Sup.len + 1);
appendString(LOC33, LOC35);
appendChar(LOC33, 44);
					result = resizeString(result, LOC33->Sup.len + 0);
appendString(result, LOC33);
					res_340221 += ((NI) 1);
				} LA32: ;
			}
		}
		result->data[((result ? result->Sup.len : 0) - 1)] = 93;
	}
	break;
	case ((NU8) 42):
	{
		NimStringDesc* LOC37;
		Tnode191813* LOC38;
		NimStringDesc* LOC39;
		LOC37 = 0;
		LOC38 = 0;
		LOC38 = HEX5BHEX5D_192244(n, ((NI) 0));
		LOC39 = 0;
		LOC39 = rendertype_338224(LOC38);
		LOC37 = rawNewString(LOC39->Sup.len + 1);
appendString(LOC37, LOC39);
appendChar(LOC37, 91);
		result = LOC37;
		{
			NI i_340019;
			NI HEX3Atmp_340226;
			NI LOC41;
			NI res_340229;
			i_340019 = 0;
			HEX3Atmp_340226 = 0;
			LOC41 = 0;
			LOC41 = len_192097(n);
			HEX3Atmp_340226 = (LOC41 - 1);
			res_340229 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC44;
					Tnode191813* LOC45;
					NimStringDesc* LOC46;
					if (!(res_340229 <= HEX3Atmp_340226)) goto LA43;
					i_340019 = res_340229;
					LOC44 = 0;
					LOC45 = 0;
					LOC45 = HEX5BHEX5D_192244(n, i_340019);
					LOC46 = 0;
					LOC46 = rendertype_338224(LOC45);
					LOC44 = rawNewString(LOC46->Sup.len + 1);
appendString(LOC44, LOC46);
appendChar(LOC44, 44);
					result = resizeString(result, LOC44->Sup.len + 0);
appendString(result, LOC44);
					res_340229 += ((NI) 1);
				} LA43: ;
			}
		}
		result->data[((result ? result->Sup.len : 0) - 1)] = 93;
	}
	break;
	default:
	{
		result = copyString(((NimStringDesc*) &TMP4800));
	}
	break;
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(void, renderparamtypes_340275)(TY122008** found, Tnode191813* n) {
{	switch ((*n).kind) {
	case ((NU8) 76):
	{
		{
			NI i_340299;
			NI HEX3Atmp_340619;
			NI LOC3;
			NI res_340622;
			i_340299 = 0;
			HEX3Atmp_340619 = 0;
			LOC3 = 0;
			LOC3 = len_192097(n);
			HEX3Atmp_340619 = (LOC3 - 1);
			res_340622 = ((NI) 1);
			{
				while (1) {
					Tnode191813* LOC6;
					if (!(res_340622 <= HEX3Atmp_340619)) goto LA5;
					i_340299 = res_340622;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_192244(n, i_340299);
					renderparamtypes_340275(found, LOC6);
					res_340622 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 35):
	{
		NI typepos;
		NI LOC8;
		NimStringDesc* typestr;
		Tnode191813* LOC9;
		LOC8 = 0;
		LOC8 = len_192097(n);
		typepos = (NI)(LOC8 - ((NI) 2));
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_192244(n, typepos);
		typestr = rendertype_338224(LOC9);
		{
			NIM_BOOL LOC12;
			Tnode191813* LOC14;
			Ttype191849* typ;
			Tnode191813* LOC17;
			LOC12 = 0;
			LOC12 = ((typestr ? typestr->Sup.len : 0) < ((NI) 1));
			if (!(LOC12)) goto LA13;
			LOC14 = 0;
			LOC14 = HEX5BHEX5D_192244(n, (NI)(typepos + ((NI) 1)));
			LOC12 = !(((*LOC14).kind == ((NU8) 1)));
			LA13: ;
			if (!LOC12) goto LA15;
			LOC17 = 0;
			LOC17 = HEX5BHEX5D_192244(n, (NI)(typepos + ((NI) 1)));
			typ = (*LOC17).typ;
			{
				if (!!(typ == 0)) goto LA20;
				typestr = typetostring_221032(typ, ((NU8) 2));
			}
			LA20: ;
			{
				if (!((typestr ? typestr->Sup.len : 0) < ((NI) 1))) goto LA24;
				goto BeforeRet;
			}
			LA24: ;
		}
		LA15: ;
		{
			NI i_340438;
			NI HEX3Atmp_340627;
			NI res_340630;
			i_340438 = 0;
			HEX3Atmp_340627 = 0;
			HEX3Atmp_340627 = (typepos - 1);
			res_340630 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC29;
					if (!(res_340630 <= HEX3Atmp_340627)) goto LA28;
					i_340438 = res_340630;
					(*found) = (TY122008*) incrSeq(&((*found))->Sup, sizeof(NimStringDesc*));
					LOC29 = 0;
					LOC29 = (*found)->data[(*found)->Sup.len-1]; (*found)->data[(*found)->Sup.len-1] = copyStringRC1(typestr);
					if (LOC29) nimGCunrefNoCycle(LOC29);
					res_340630 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
		NimStringDesc* LOC31;
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum((*n).kind, (&NTI191029))->Sup.len + 31);
appendString(LOC31, ((NimStringDesc*) &TMP4813));
appendString(LOC31, reprEnum((*n).kind, (&NTI191029)));
		internalerror_166199((*n).info, LOC31);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, renderparamtypes_340658)(Tnode191813* n, NimStringDesc* sep) {
	NimStringDesc* result;
	TY122008* found;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4800));
	found = (TY122008*) newSeq((&NTI122008), 0);
	renderparamtypes_340275((&found), n);
	{
		if (!(((NI) 0) < (found ? found->Sup.len : 0))) goto LA3;
		result = nsuJoinSep(found->data, found->Sup.len, sep);
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_typesrendererInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_typesrendererDatInit)(void) {
}

