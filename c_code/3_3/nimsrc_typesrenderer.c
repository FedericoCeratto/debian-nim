/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode190813 Tnode190813;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY122208 TY122208;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct Tcell46546 Tcell46546;
typedef struct Tcellseq46562 Tcellseq46562;
typedef struct Tgcheap48416 Tgcheap48416;
typedef struct Tcellset46558 Tcellset46558;
typedef struct Tpagedesc46554 Tpagedesc46554;
typedef struct Tmemregion28410 Tmemregion28410;
typedef struct Tsmallchunk27640 Tsmallchunk27640;
typedef struct Tllchunk28404 Tllchunk28404;
typedef struct Tbigchunk27642 Tbigchunk27642;
typedef struct Tintset27617 Tintset27617;
typedef struct Ttrunk27613 Ttrunk27613;
typedef struct Tavlnode28408 Tavlnode28408;
typedef struct Tgcstat48414 Tgcstat48414;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
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
struct  Tcell46546  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46562  {
NI len;
NI cap;
Tcell46546** d;
};
struct  Tcellset46558  {
NI counter;
NI max;
Tpagedesc46554* head;
Tpagedesc46554** data;
};
typedef Tsmallchunk27640* TY28422[512];
typedef Ttrunk27613* Ttrunkbuckets27615[256];
struct  Tintset27617  {
Ttrunkbuckets27615 data;
};
struct  Tmemregion28410  {
NI minlargeobj;
NI maxlargeobj;
TY28422 freesmallchunks;
Tllchunk28404* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27642* freechunkslist;
Tintset27617 chunkstarts;
Tavlnode28408* root;
Tavlnode28408* deleted;
Tavlnode28408* last;
Tavlnode28408* freeavlnodes;
};
struct  Tgcstat48414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48416  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46562 zct;
Tcellseq46562 decstack;
Tcellset46558 cycleroots;
Tcellseq46562 tempstack;
NI recgclock;
Tmemregion28410 region;
Tgcstat48414 stat;
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
typedef NI TY27620[8];
struct  Tpagedesc46554  {
Tpagedesc46554* next;
NI key;
TY27620 bits;
};
struct  Tbasechunk27638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27640  {
  Tbasechunk27638 Sup;
Tsmallchunk27640* next;
Tsmallchunk27640* prev;
Tfreecell27630* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28404  {
NI size;
NI acc;
Tllchunk28404* next;
};
struct  Tbigchunk27642  {
  Tbasechunk27638 Sup;
Tbigchunk27642* next;
Tbigchunk27642* prev;
NI align;
NF data;
};
struct  Ttrunk27613  {
Ttrunk27613* next;
NI key;
TY27620 bits;
};
typedef Tavlnode28408* TY28414[2];
struct  Tavlnode28408  {
TY28414 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
struct TY122208 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, len_191097)(Tnode190813* n);
N_NIMCALL(NimStringDesc*, renderplainsymbolname_337013)(Tnode190813* n);
static N_INLINE(Tnode190813*, HEX5BHEX5D_191244)(Tnode190813* n, NI i);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, renderdefinitionname_212154)(Tsym190843* s, NIM_BOOL noquotes);
N_NIMCALL(void, internalerror_165199)(Tlineinfo163338 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_82729, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, renderparamtypes_339275)(TY122208** found, Tnode190813* n);
N_NIMCALL(NimStringDesc*, rendertype_337224)(Tnode190813* n);
N_NIMCALL(NimStringDesc*, typetostring_220032)(Ttype190849* typ, NU8 prefer);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46546*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46546* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46562* s, Tcell46546* c);
N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen0, NimStringDesc* sep);
STRING_LITERAL(TMP4795, "", 0);
STRING_LITERAL(TMP4796, "*", 1);
STRING_LITERAL(TMP4797, "renderPlainSymbolName() with ", 29);
STRING_LITERAL(TMP4804, "ref.", 4);
STRING_LITERAL(TMP4805, "ptr.", 4);
STRING_LITERAL(TMP4806, "proc(", 5);
STRING_LITERAL(TMP4807, "tuple[", 6);
STRING_LITERAL(TMP4808, "renderParamTypes(found,n) with ", 31);
extern TNimType NTI190029; /* TNodeKind */
extern TNimType NTI122208; /* seq[string] */
extern Tgcheap48416 gch_48444;

static N_INLINE(NI, len_191097)(Tnode190813* n) {
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

static N_INLINE(Tnode190813*, HEX5BHEX5D_191244)(Tnode190813* n, NI i) {
	Tnode190813* result;
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

N_NIMCALL(NimStringDesc*, renderplainsymbolname_337013)(Tnode190813* n) {
	NimStringDesc* result;
{	result = 0;
	result = copyString(((NimStringDesc*) &TMP4795));
	switch ((*n).kind) {
	case ((NU8) 31):
	{
		{
			NI i_337036;
			NI HEX3Atmp_337202;
			NI LOC3;
			NI res_337205;
			i_337036 = 0;
			HEX3Atmp_337202 = 0;
			LOC3 = 0;
			LOC3 = len_191097(n);
			HEX3Atmp_337202 = (LOC3 - 1);
			res_337205 = ((NI) 0);
			{
				while (1) {
					NI LOC6;
					Tnode190813* LOC7;
					if (!(res_337205 <= HEX3Atmp_337202)) goto LA5;
					i_337036 = res_337205;
					LOC6 = 0;
					LOC6 = len_191097(n);
					LOC7 = 0;
					LOC7 = HEX5BHEX5D_191244(n, (LOC6 - 1));
					result = renderplainsymbolname_337013(LOC7);
					{
						if (!(((NI) 0) < (result ? result->Sup.len : 0))) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					res_337205 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 2):
	{
		{
			if (!!(eqStrings((*(*n).kindU.S5.ident).s, ((NimStringDesc*) &TMP4796)))) goto LA15;
			result = copyString((*(*n).kindU.S5.ident).s);
		}
		LA15: ;
	}
	break;
	case ((NU8) 3):
	{
		result = renderdefinitionname_212154((*n).kindU.S4.sym, NIM_TRUE);
	}
	break;
	case ((NU8) 43):
	{
		Tnode190813* LOC19;
		LOC19 = 0;
		LOC19 = HEX5BHEX5D_191244(n, ((NI) 0));
		result = renderplainsymbolname_337013(LOC19);
	}
	break;
	case ((NU8) 53):
	{
		NI LOC21;
		Tnode190813* LOC22;
		LOC21 = 0;
		LOC21 = len_191097(n);
		LOC22 = 0;
		LOC22 = HEX5BHEX5D_191244(n, (LOC21 - 1));
		result = renderplainsymbolname_337013(LOC22);
	}
	break;
	default:
	{
		NimStringDesc* LOC24;
		LOC24 = 0;
		LOC24 = rawNewString(reprEnum((*n).kind, (&NTI190029))->Sup.len + 29);
appendString(LOC24, ((NimStringDesc*) &TMP4797));
appendString(LOC24, reprEnum((*n).kind, (&NTI190029)));
		internalerror_165199((*n).info, LOC24);
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

N_NIMCALL(NimStringDesc*, rendertype_337224)(Tnode190813* n) {
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
		result = typetostring_220032((*(*n).kindU.S4.sym).typ, ((NU8) 0));
	}
	break;
	case ((NU8) 143):
	{
		Tnode190813* LOC4;
		LOC4 = 0;
		LOC4 = HEX5BHEX5D_191244(n, ((NI) 0));
		result = rendertype_337224(LOC4);
	}
	break;
	case ((NU8) 141):
	{
		NimStringDesc* LOC6;
		Tnode190813* LOC7;
		NimStringDesc* LOC8;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = HEX5BHEX5D_191244(n, ((NI) 0));
		LOC8 = 0;
		LOC8 = rendertype_337224(LOC7);
		LOC6 = rawNewString(LOC8->Sup.len + 4);
appendString(LOC6, ((NimStringDesc*) &TMP4804));
appendString(LOC6, LOC8);
		result = LOC6;
	}
	break;
	case ((NU8) 142):
	{
		NimStringDesc* LOC10;
		Tnode190813* LOC11;
		NimStringDesc* LOC12;
		LOC10 = 0;
		LOC11 = 0;
		LOC11 = HEX5BHEX5D_191244(n, ((NI) 0));
		LOC12 = 0;
		LOC12 = rendertype_337224(LOC11);
		LOC10 = rawNewString(LOC12->Sup.len + 4);
appendString(LOC10, ((NimStringDesc*) &TMP4805));
appendString(LOC10, LOC12);
		result = LOC10;
	}
	break;
	case ((NU8) 147):
	{
		Tnode190813* params;
		params = HEX5BHEX5D_191244(n, ((NI) 0));
		result = copyString(((NimStringDesc*) &TMP4806));
		{
			NI i_338419;
			NI HEX3Atmp_339202;
			NI LOC15;
			NI res_339205;
			i_338419 = 0;
			HEX3Atmp_339202 = 0;
			LOC15 = 0;
			LOC15 = len_191097(params);
			HEX3Atmp_339202 = (LOC15 - 1);
			res_339205 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC18;
					Tnode190813* LOC19;
					NimStringDesc* LOC20;
					if (!(res_339205 <= HEX3Atmp_339202)) goto LA17;
					i_338419 = res_339205;
					LOC18 = 0;
					LOC19 = 0;
					LOC19 = HEX5BHEX5D_191244(params, i_338419);
					LOC20 = 0;
					LOC20 = rendertype_337224(LOC19);
					LOC18 = rawNewString(LOC20->Sup.len + 1);
appendString(LOC18, LOC20);
appendChar(LOC18, 44);
					result = resizeString(result, LOC18->Sup.len + 0);
appendString(result, LOC18);
					res_339205 += ((NI) 1);
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
		Tnode190813* LOC23;
		LOC22 = 0;
		LOC22 = len_191097(n);
		typepos = (NI)(LOC22 - ((NI) 2));
		LOC23 = 0;
		LOC23 = HEX5BHEX5D_191244(n, typepos);
		typestr = rendertype_337224(LOC23);
		result = copyString(typestr);
		{
			NI i_338621;
			NI HEX3Atmp_339210;
			NI res_339213;
			i_338621 = 0;
			HEX3Atmp_339210 = 0;
			HEX3Atmp_339210 = (typepos - 1);
			res_339213 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC27;
					if (!(res_339213 <= HEX3Atmp_339210)) goto LA26;
					i_338621 = res_339213;
					LOC27 = 0;
					LOC27 = rawNewString(typestr->Sup.len + 1);
appendChar(LOC27, 44);
appendString(LOC27, typestr);
					result = resizeString(result, LOC27->Sup.len + 0);
appendString(result, LOC27);
					res_339213 += ((NI) 1);
				} LA26: ;
			}
		}
	}
	break;
	case ((NU8) 134):
	{
		result = copyString(((NimStringDesc*) &TMP4807));
		{
			NI i_338819;
			NI HEX3Atmp_339218;
			NI LOC30;
			NI res_339221;
			i_338819 = 0;
			HEX3Atmp_339218 = 0;
			LOC30 = 0;
			LOC30 = len_191097(n);
			HEX3Atmp_339218 = (LOC30 - 1);
			res_339221 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC33;
					Tnode190813* LOC34;
					NimStringDesc* LOC35;
					if (!(res_339221 <= HEX3Atmp_339218)) goto LA32;
					i_338819 = res_339221;
					LOC33 = 0;
					LOC34 = 0;
					LOC34 = HEX5BHEX5D_191244(n, i_338819);
					LOC35 = 0;
					LOC35 = rendertype_337224(LOC34);
					LOC33 = rawNewString(LOC35->Sup.len + 1);
appendString(LOC33, LOC35);
appendChar(LOC33, 44);
					result = resizeString(result, LOC33->Sup.len + 0);
appendString(result, LOC33);
					res_339221 += ((NI) 1);
				} LA32: ;
			}
		}
		result->data[((result ? result->Sup.len : 0) - 1)] = 93;
	}
	break;
	case ((NU8) 42):
	{
		NimStringDesc* LOC37;
		Tnode190813* LOC38;
		NimStringDesc* LOC39;
		LOC37 = 0;
		LOC38 = 0;
		LOC38 = HEX5BHEX5D_191244(n, ((NI) 0));
		LOC39 = 0;
		LOC39 = rendertype_337224(LOC38);
		LOC37 = rawNewString(LOC39->Sup.len + 1);
appendString(LOC37, LOC39);
appendChar(LOC37, 91);
		result = LOC37;
		{
			NI i_339019;
			NI HEX3Atmp_339226;
			NI LOC41;
			NI res_339229;
			i_339019 = 0;
			HEX3Atmp_339226 = 0;
			LOC41 = 0;
			LOC41 = len_191097(n);
			HEX3Atmp_339226 = (LOC41 - 1);
			res_339229 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC44;
					Tnode190813* LOC45;
					NimStringDesc* LOC46;
					if (!(res_339229 <= HEX3Atmp_339226)) goto LA43;
					i_339019 = res_339229;
					LOC44 = 0;
					LOC45 = 0;
					LOC45 = HEX5BHEX5D_191244(n, i_339019);
					LOC46 = 0;
					LOC46 = rendertype_337224(LOC45);
					LOC44 = rawNewString(LOC46->Sup.len + 1);
appendString(LOC44, LOC46);
appendChar(LOC44, 44);
					result = resizeString(result, LOC44->Sup.len + 0);
appendString(result, LOC44);
					res_339229 += ((NI) 1);
				} LA43: ;
			}
		}
		result->data[((result ? result->Sup.len : 0) - 1)] = 93;
	}
	break;
	default:
	{
		result = copyString(((NimStringDesc*) &TMP4795));
	}
	break;
	}
	return result;
}

static N_INLINE(Tcell46546*, usrtocell_50046)(void* usr) {
	Tcell46546* result;
	result = 0;
	result = ((Tcell46546*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46546))))));
	return result;
}

static N_INLINE(void, rtladdzct_51604)(Tcell46546* c) {
	addzct_50017((&gch_48444.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46546* c;
	c = usrtocell_50046(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51604(c);
	}
	LA3: ;
}

N_NIMCALL(void, renderparamtypes_339275)(TY122208** found, Tnode190813* n) {
{	switch ((*n).kind) {
	case ((NU8) 76):
	{
		{
			NI i_339299;
			NI HEX3Atmp_339619;
			NI LOC3;
			NI res_339622;
			i_339299 = 0;
			HEX3Atmp_339619 = 0;
			LOC3 = 0;
			LOC3 = len_191097(n);
			HEX3Atmp_339619 = (LOC3 - 1);
			res_339622 = ((NI) 1);
			{
				while (1) {
					Tnode190813* LOC6;
					if (!(res_339622 <= HEX3Atmp_339619)) goto LA5;
					i_339299 = res_339622;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_191244(n, i_339299);
					renderparamtypes_339275(found, LOC6);
					res_339622 += ((NI) 1);
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
		Tnode190813* LOC9;
		LOC8 = 0;
		LOC8 = len_191097(n);
		typepos = (NI)(LOC8 - ((NI) 2));
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_191244(n, typepos);
		typestr = rendertype_337224(LOC9);
		{
			NIM_BOOL LOC12;
			Tnode190813* LOC14;
			Ttype190849* typ;
			Tnode190813* LOC17;
			LOC12 = 0;
			LOC12 = ((typestr ? typestr->Sup.len : 0) < ((NI) 1));
			if (!(LOC12)) goto LA13;
			LOC14 = 0;
			LOC14 = HEX5BHEX5D_191244(n, (NI)(typepos + ((NI) 1)));
			LOC12 = !(((*LOC14).kind == ((NU8) 1)));
			LA13: ;
			if (!LOC12) goto LA15;
			LOC17 = 0;
			LOC17 = HEX5BHEX5D_191244(n, (NI)(typepos + ((NI) 1)));
			typ = (*LOC17).typ;
			{
				if (!!(typ == 0)) goto LA20;
				typestr = typetostring_220032(typ, ((NU8) 2));
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
			NI i_339438;
			NI HEX3Atmp_339627;
			NI res_339630;
			i_339438 = 0;
			HEX3Atmp_339627 = 0;
			HEX3Atmp_339627 = (typepos - 1);
			res_339630 = ((NI) 0);
			{
				while (1) {
					NimStringDesc* LOC29;
					if (!(res_339630 <= HEX3Atmp_339627)) goto LA28;
					i_339438 = res_339630;
					(*found) = (TY122208*) incrSeq(&((*found))->Sup, sizeof(NimStringDesc*));
					LOC29 = 0;
					LOC29 = (*found)->data[(*found)->Sup.len-1]; (*found)->data[(*found)->Sup.len-1] = copyStringRC1(typestr);
					if (LOC29) nimGCunrefNoCycle(LOC29);
					res_339630 += ((NI) 1);
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
		NimStringDesc* LOC31;
		LOC31 = 0;
		LOC31 = rawNewString(reprEnum((*n).kind, (&NTI190029))->Sup.len + 31);
appendString(LOC31, ((NimStringDesc*) &TMP4808));
appendString(LOC31, reprEnum((*n).kind, (&NTI190029)));
		internalerror_165199((*n).info, LOC31);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, renderparamtypes_339658)(Tnode190813* n, NimStringDesc* sep) {
	NimStringDesc* result;
	TY122208* found;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP4795));
	found = (TY122208*) newSeq((&NTI122208), 0);
	renderparamtypes_339275((&found), n);
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

