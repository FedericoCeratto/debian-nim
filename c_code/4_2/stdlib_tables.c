/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Table163376 Table163376;
typedef struct Keyvaluepairseq163379 Keyvaluepairseq163379;
typedef struct Keyvaluepair163382 Keyvaluepair163382;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct Table311052 Table311052;
typedef struct Keyvaluepairseq311055 Keyvaluepairseq311055;
typedef struct Keyvaluepair311058 Keyvaluepair311058;
typedef struct Table381650 Table381650;
typedef struct Keyvaluepairseq381653 Keyvaluepairseq381653;
typedef struct Keyvaluepair381656 Keyvaluepair381656;
typedef struct Tnode190813 Tnode190813;
typedef struct Table312409 Table312409;
typedef struct Keyvaluepairseq312412 Keyvaluepairseq312412;
typedef struct Keyvaluepair312415 Keyvaluepair312415;
typedef struct Tindexentry312396 Tindexentry312396;
typedef struct TY314702 TY314702;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
struct  Table163376  {
Keyvaluepairseq163379* data;
NI counter;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Keyvaluepair163382 {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
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
struct  Table311052  {
Keyvaluepairseq311055* data;
NI counter;
};
struct Keyvaluepair311058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Table381650  {
Keyvaluepairseq381653* data;
NI counter;
};
struct Keyvaluepair381656 {
NI Field0;
NI64 Field1;
Tnode190813* Field2;
};
struct  Table312409  {
Keyvaluepairseq312412* data;
NI counter;
};
struct  Tindexentry312396  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linktitle;
NimStringDesc* linkdesc;
};
struct Keyvaluepair312415 {
NI Field0;
Tindexentry312396 Field1;
TY314702* Field2;
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
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
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
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
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
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Keyvaluepairseq163379 {
  TGenericSeq Sup;
  Keyvaluepair163382 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq311055 {
  TGenericSeq Sup;
  Keyvaluepair311058 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq381653 {
  TGenericSeq Sup;
  Keyvaluepair381656 data[SEQ_DECL_SIZE];
};
struct TY314702 {
  TGenericSeq Sup;
  Tindexentry312396 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq312412 {
  TGenericSeq Sup;
  Keyvaluepair312415 data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, TMP127)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, rawget_163555)(Table163376 t, NimStringDesc* key, NI* hc);
N_NIMCALL(NI, hash_131839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, isfilled_156211)(NI hcode);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_156420)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_156313)(NI length, NI counter);
N_NIMCALL(void, enlarge_163672)(Table163376* t);
static N_INLINE(NI, rawgetknownhc_163726)(Table163376 t, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawinsert_163752)(Table163376* t, Keyvaluepairseq163379** data, NimStringDesc* key, NI32 val, NI hc, NI h);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
static N_INLINE(NI, rawget_312086)(Table311052 t, NimStringDesc* key, NI* hc);
N_NIMCALL(void, enlarge_312185)(Table311052* t);
N_NIMCALL(void, TMP2431)(void* p, NI op);
static N_INLINE(NI, rawgetknownhc_312239)(Table311052 t, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawinsert_312265)(Table311052* t, Keyvaluepairseq311055** data, NimStringDesc* key, NI val, NI hc, NI h);
N_NIMCALL(void, TMP2917)(void* p, NI op);
static N_INLINE(NI, rawget_382110)(Table381650 t, NI64 key, NI* hc);
static N_INLINE(NI, hash_131811)(NI64 x);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, enlarge_382198)(Table381650* t);
static N_INLINE(NI, rawgetknownhc_382252)(Table381650 t, NI64 key, NI hc);
N_NIMCALL(void, rawinsert_382278)(Table381650* t, Keyvaluepairseq381653** data, NI64 key, Tnode190813* val, NI hc, NI h);
N_NIMCALL(void, TMP4916)(void* p, NI op);
static N_INLINE(NI, rawget_314294)(Table312409 t, Tindexentry312396* key, NI* hc);
N_NIMCALL(NI, hash_312441)(Tindexentry312396* x);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_314309)(Tindexentry312396* x, Tindexentry312396* y);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_81204, TNimType* mt);
N_NIMCALL(void, enlarge_315109)(Table312409* t);
static N_INLINE(NI, rawgetknownhc_315163)(Table312409 t, Tindexentry312396* key, NI hc);
N_NIMCALL(void, rawinsert_315198)(Table312409* t, Keyvaluepairseq312412** data, Tindexentry312396* key, TY314702* val, NI hc, NI h);
TNimType NTI163382; /* KeyValuePair */
extern TNimType NTI131021; /* THash */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI163379; /* KeyValuePairSeq */
TNimType NTI163376; /* Table */
extern TNimType NTI108; /* int */
extern Tgcheap48216 gch_48244;
TNimType NTI311058; /* KeyValuePair */
TNimType NTI311055; /* KeyValuePairSeq */
TNimType NTI381656; /* KeyValuePair */
extern TNimType NTI5710; /* BiggestInt */
extern TNimType NTI190805; /* PNode */
TNimType NTI381653; /* KeyValuePairSeq */
TNimType NTI311052; /* Table */
TNimType NTI312415; /* KeyValuePair */
extern TNimType NTI312396; /* TIndexEntry */
extern TNimType NTI314702; /* seq[TIndexEntry] */
TNimType NTI312412; /* KeyValuePairSeq */
N_NIMCALL(void, TMP127)(void* p, NI op) {
	Keyvaluepairseq163379* a;
	NI LOC1;
	a = (Keyvaluepairseq163379*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_163368)(NI initialsize, Table163376* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq163379*) newSeq((&NTI163379), ((NI) (initialsize))));
}

static N_INLINE(NIM_BOOL, isfilled_156211)(NI hcode) {
	NIM_BOOL result;
	result = 0;
	result = !((hcode == ((NI) 0)));
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

static N_INLINE(NI, nexttry_156420)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)(h + ((NI) 1)) & maxhash);
	return result;
}

static N_INLINE(NI, rawget_163555)(Table163376 t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_131839(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_156211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = eqStrings(t.data->data[h].Field1, key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_163543)(Table163376 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI LOC1;
	result = 0;
	hc = 0;
	LOC1 = 0;
	LOC1 = rawget_163555(t, key, (&hc));
	result = (((NI) 0) <= LOC1);
	return result;
}

N_NIMCALL(NI32, HEX5BHEX5D_163586)(Table163376 t, NimStringDesc* key) {
	NI32 result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_163555(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_156313)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI)(length - counter) < ((NI) 4));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, rawgetknownhc_163726)(Table163376 t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_156211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = eqStrings(t.data->data[h].Field1, key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
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

N_NIMCALL(void, rawinsert_163752)(Table163376* t, Keyvaluepairseq163379** data, NimStringDesc* key, NI32 val, NI hc, NI h) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*data)->data[h].Field2 = val;
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_163672)(Table163376* t) {
	Keyvaluepairseq163379* n;
	Keyvaluepairseq163379* LOC1;
	n = 0;
	n = (Keyvaluepairseq163379*) newSeq((&NTI163379), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_163724;
		NI HEX3Atmp_163778;
		NI res_163781;
		i_163724 = 0;
		HEX3Atmp_163778 = 0;
		HEX3Atmp_163778 = (n ? (n->Sup.len-1) : -1);
		res_163781 = ((NI) 0);
		{
			while (1) {
				if (!(res_163781 <= HEX3Atmp_163778)) goto LA4;
				i_163724 = res_163781;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_156211(n->data[i_163724].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_163726((*t), n->data[i_163724].Field1, n->data[i_163724].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_163752(t, (&(*t).data), n->data[i_163724].Field1, n->data[i_163724].Field2, n->data[i_163724].Field0, j);
				}
				LA8: ;
				res_163781 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_163635)(Table163376* t, NimStringDesc* key, NI32 val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_163555((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		(*t).data->data[index].Field2 = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_156313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_163672(t);
			index = rawgetknownhc_163726((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_163752(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

static N_INLINE(NI, rawget_312086)(Table311052 t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_131839(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_156211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = eqStrings(t.data->data[h].Field1, key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_312074)(Table311052 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI LOC1;
	result = 0;
	hc = 0;
	LOC1 = 0;
	LOC1 = rawget_312086(t, key, (&hc));
	result = (((NI) 0) <= LOC1);
	return result;
}
N_NIMCALL(void, TMP2431)(void* p, NI op) {
	Keyvaluepairseq311055* a;
	NI LOC1;
	a = (Keyvaluepairseq311055*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

static N_INLINE(NI, rawgetknownhc_312239)(Table311052 t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_156211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = eqStrings(t.data->data[h].Field1, key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_312265)(Table311052* t, Keyvaluepairseq311055** data, NimStringDesc* key, NI val, NI hc, NI h) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*data)->data[h].Field2 = val;
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_312185)(Table311052* t) {
	Keyvaluepairseq311055* n;
	Keyvaluepairseq311055* LOC1;
	n = 0;
	n = (Keyvaluepairseq311055*) newSeq((&NTI311055), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_312237;
		NI HEX3Atmp_312291;
		NI res_312294;
		i_312237 = 0;
		HEX3Atmp_312291 = 0;
		HEX3Atmp_312291 = (n ? (n->Sup.len-1) : -1);
		res_312294 = ((NI) 0);
		{
			while (1) {
				if (!(res_312294 <= HEX3Atmp_312291)) goto LA4;
				i_312237 = res_312294;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_156211(n->data[i_312237].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_312239((*t), n->data[i_312237].Field1, n->data[i_312237].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_312265(t, (&(*t).data), n->data[i_312237].Field1, n->data[i_312237].Field2, n->data[i_312237].Field0, j);
				}
				LA8: ;
				res_312294 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_312148)(Table311052* t, NimStringDesc* key, NI val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_312086((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		(*t).data->data[index].Field2 = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_156313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_312185(t);
			index = rawgetknownhc_312239((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_312265(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(NI, HEX5BHEX5D_312117)(Table311052 t, NimStringDesc* key) {
	NI result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_312086(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
}
N_NIMCALL(void, TMP2917)(void* p, NI op) {
	Keyvaluepairseq381653* a;
	NI LOC1;
	a = (Keyvaluepairseq381653*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_382469)(NI initialsize, Table381650* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq381653*) newSeq((&NTI381653), ((NI) (initialsize))));
}

static N_INLINE(NI, hash_131811)(NI64 x) {
	NI result;
	result = 0;
	result = ((NI) (((NI32)(NU32)(NU64)(x))));
	return result;
}

static N_INLINE(NI, rawget_382110)(Table381650 t, NI64 key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_131811(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_156211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = (t.data->data[h].Field1 == key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tnode190813*, HEX5BHEX5D_382098)(Table381650 t, NI64 key) {
	Tnode190813* result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_382110(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
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

static N_INLINE(NI, rawgetknownhc_382252)(Table381650 t, NI64 key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_156211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = (t.data->data[h].Field1 == key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_382278)(Table381650* t, Keyvaluepairseq381653** data, NI64 key, Tnode190813* val, NI hc, NI h) {
	(*data)->data[h].Field1 = key;
	asgnRefNoCycle((void**) (&(*data)->data[h].Field2), val);
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_382198)(Table381650* t) {
	Keyvaluepairseq381653* n;
	Keyvaluepairseq381653* LOC1;
	n = 0;
	n = (Keyvaluepairseq381653*) newSeq((&NTI381653), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_382250;
		NI HEX3Atmp_382304;
		NI res_382307;
		i_382250 = 0;
		HEX3Atmp_382304 = 0;
		HEX3Atmp_382304 = (n ? (n->Sup.len-1) : -1);
		res_382307 = ((NI) 0);
		{
			while (1) {
				if (!(res_382307 <= HEX3Atmp_382304)) goto LA4;
				i_382250 = res_382307;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_156211(n->data[i_382250].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_382252((*t), n->data[i_382250].Field1, n->data[i_382250].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_382278(t, (&(*t).data), n->data[i_382250].Field1, n->data[i_382250].Field2, n->data[i_382250].Field0, j);
				}
				LA8: ;
				res_382307 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_382161)(Table381650* t, NI64 key, Tnode190813* val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_382110((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		asgnRefNoCycle((void**) (&(*t).data->data[index].Field2), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_156313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_382198(t);
			index = rawgetknownhc_382252((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_382278(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(void, inittable_311116)(NI initialsize, Table311052* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq311055*) newSeq((&NTI311055), ((NI) (initialsize))));
}
N_NIMCALL(void, TMP4916)(void* p, NI op) {
	Keyvaluepairseq312412* a;
	NI LOC1;
	a = (Keyvaluepairseq312412*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.keyword, op);
	nimGCvisit((void*)a->data[LOC1].Field1.link, op);
	nimGCvisit((void*)a->data[LOC1].Field1.linktitle, op);
	nimGCvisit((void*)a->data[LOC1].Field1.linkdesc, op);
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_314724)(NI initialsize, Table312409* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq312412*) newSeq((&NTI312412), ((NI) (initialsize))));
}

N_NIMCALL(NI, len_315060)(Table312409 t) {
	NI result;
	result = 0;
	result = t.counter;
	return result;
}

static N_INLINE(NI, rawget_314294)(Table312409 t, Tindexentry312396* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_312441(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_156211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = HEX3DHEX3D_314309((&t.data->data[h].Field1), key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, rawgetknownhc_315163)(Table312409 t, Tindexentry312396* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_156211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = HEX3DHEX3D_314309((&t.data->data[h].Field1), key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_156420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_315198)(Table312409* t, Keyvaluepairseq312412** data, Tindexentry312396* key, TY314702* val, NI hc, NI h) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1.keyword; (*data)->data[h].Field1.keyword = copyStringRC1((*key).keyword);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = (*data)->data[h].Field1.link; (*data)->data[h].Field1.link = copyStringRC1((*key).link);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = (*data)->data[h].Field1.linktitle; (*data)->data[h].Field1.linktitle = copyStringRC1((*key).linktitle);
	if (LOC3) nimGCunrefNoCycle(LOC3);
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field1.linkdesc; (*data)->data[h].Field1.linkdesc = copyStringRC1((*key).linkdesc);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	genericSeqAssign((&(*data)->data[h].Field2), val, (&NTI314702));
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_315109)(Table312409* t) {
	Keyvaluepairseq312412* n;
	Keyvaluepairseq312412* LOC1;
	n = 0;
	n = (Keyvaluepairseq312412*) newSeq((&NTI312412), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_315161;
		NI HEX3Atmp_315224;
		NI res_315227;
		i_315161 = 0;
		HEX3Atmp_315224 = 0;
		HEX3Atmp_315224 = (n ? (n->Sup.len-1) : -1);
		res_315227 = ((NI) 0);
		{
			while (1) {
				if (!(res_315227 <= HEX3Atmp_315224)) goto LA4;
				i_315161 = res_315227;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_156211(n->data[i_315161].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_315163((*t), (&n->data[i_315161].Field1), n->data[i_315161].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_315198(t, (&(*t).data), (&n->data[i_315161].Field1), n->data[i_315161].Field2, n->data[i_315161].Field0, j);
				}
				LA8: ;
				res_315227 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_315072)(Table312409* t, Tindexentry312396* key, TY314702* val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_314294((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		genericSeqAssign((&(*t).data->data[index].Field2), val, (&NTI314702));
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_156313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_315109(t);
			index = rawgetknownhc_315163((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_315198(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(TY314702*, HEX5BHEX5D_314282)(Table312409 t, Tindexentry312396* key) {
	TY314702* result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_314294(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		genericSeqAssign((&result), t.data->data[index].Field2, (&NTI314702));
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void) {
static TNimNode* TMP126[3];
static TNimNode* TMP130[2];
static TNimNode* TMP2430[3];
static TNimNode* TMP2916[3];
static TNimNode* TMP4763[2];
static TNimNode* TMP4913[3];
static TNimNode TMP53[22];
NTI163382.size = sizeof(Keyvaluepair163382);
NTI163382.kind = 18;
NTI163382.base = 0;
NTI163382.flags = 2;
TMP126[0] = &TMP53[1];
TMP53[1].kind = 1;
TMP53[1].offset = offsetof(Keyvaluepair163382, Field0);
TMP53[1].typ = (&NTI131021);
TMP53[1].name = "Field0";
TMP126[1] = &TMP53[2];
TMP53[2].kind = 1;
TMP53[2].offset = offsetof(Keyvaluepair163382, Field1);
TMP53[2].typ = (&NTI149);
TMP53[2].name = "Field1";
TMP126[2] = &TMP53[3];
TMP53[3].kind = 1;
TMP53[3].offset = offsetof(Keyvaluepair163382, Field2);
TMP53[3].typ = (&NTI114);
TMP53[3].name = "Field2";
TMP53[0].len = 3; TMP53[0].kind = 2; TMP53[0].sons = &TMP126[0];
NTI163382.node = &TMP53[0];
NTI163379.size = sizeof(Keyvaluepairseq163379*);
NTI163379.kind = 24;
NTI163379.base = (&NTI163382);
NTI163379.flags = 2;
NTI163379.marker = TMP127;
NTI163376.size = sizeof(Table163376);
NTI163376.kind = 18;
NTI163376.base = 0;
NTI163376.flags = 2;
TMP130[0] = &TMP53[5];
TMP53[5].kind = 1;
TMP53[5].offset = offsetof(Table163376, data);
TMP53[5].typ = (&NTI163379);
TMP53[5].name = "data";
TMP130[1] = &TMP53[6];
TMP53[6].kind = 1;
TMP53[6].offset = offsetof(Table163376, counter);
TMP53[6].typ = (&NTI108);
TMP53[6].name = "counter";
TMP53[4].len = 2; TMP53[4].kind = 2; TMP53[4].sons = &TMP130[0];
NTI163376.node = &TMP53[4];
NTI311058.size = sizeof(Keyvaluepair311058);
NTI311058.kind = 18;
NTI311058.base = 0;
NTI311058.flags = 2;
TMP2430[0] = &TMP53[8];
TMP53[8].kind = 1;
TMP53[8].offset = offsetof(Keyvaluepair311058, Field0);
TMP53[8].typ = (&NTI131021);
TMP53[8].name = "Field0";
TMP2430[1] = &TMP53[9];
TMP53[9].kind = 1;
TMP53[9].offset = offsetof(Keyvaluepair311058, Field1);
TMP53[9].typ = (&NTI149);
TMP53[9].name = "Field1";
TMP2430[2] = &TMP53[10];
TMP53[10].kind = 1;
TMP53[10].offset = offsetof(Keyvaluepair311058, Field2);
TMP53[10].typ = (&NTI108);
TMP53[10].name = "Field2";
TMP53[7].len = 3; TMP53[7].kind = 2; TMP53[7].sons = &TMP2430[0];
NTI311058.node = &TMP53[7];
NTI311055.size = sizeof(Keyvaluepairseq311055*);
NTI311055.kind = 24;
NTI311055.base = (&NTI311058);
NTI311055.flags = 2;
NTI311055.marker = TMP2431;
NTI381656.size = sizeof(Keyvaluepair381656);
NTI381656.kind = 18;
NTI381656.base = 0;
NTI381656.flags = 2;
TMP2916[0] = &TMP53[12];
TMP53[12].kind = 1;
TMP53[12].offset = offsetof(Keyvaluepair381656, Field0);
TMP53[12].typ = (&NTI131021);
TMP53[12].name = "Field0";
TMP2916[1] = &TMP53[13];
TMP53[13].kind = 1;
TMP53[13].offset = offsetof(Keyvaluepair381656, Field1);
TMP53[13].typ = (&NTI5710);
TMP53[13].name = "Field1";
TMP2916[2] = &TMP53[14];
TMP53[14].kind = 1;
TMP53[14].offset = offsetof(Keyvaluepair381656, Field2);
TMP53[14].typ = (&NTI190805);
TMP53[14].name = "Field2";
TMP53[11].len = 3; TMP53[11].kind = 2; TMP53[11].sons = &TMP2916[0];
NTI381656.node = &TMP53[11];
NTI381653.size = sizeof(Keyvaluepairseq381653*);
NTI381653.kind = 24;
NTI381653.base = (&NTI381656);
NTI381653.flags = 2;
NTI381653.marker = TMP2917;
NTI311052.size = sizeof(Table311052);
NTI311052.kind = 18;
NTI311052.base = 0;
NTI311052.flags = 2;
TMP4763[0] = &TMP53[16];
TMP53[16].kind = 1;
TMP53[16].offset = offsetof(Table311052, data);
TMP53[16].typ = (&NTI311055);
TMP53[16].name = "data";
TMP4763[1] = &TMP53[17];
TMP53[17].kind = 1;
TMP53[17].offset = offsetof(Table311052, counter);
TMP53[17].typ = (&NTI108);
TMP53[17].name = "counter";
TMP53[15].len = 2; TMP53[15].kind = 2; TMP53[15].sons = &TMP4763[0];
NTI311052.node = &TMP53[15];
NTI312415.size = sizeof(Keyvaluepair312415);
NTI312415.kind = 18;
NTI312415.base = 0;
NTI312415.flags = 2;
TMP4913[0] = &TMP53[19];
TMP53[19].kind = 1;
TMP53[19].offset = offsetof(Keyvaluepair312415, Field0);
TMP53[19].typ = (&NTI131021);
TMP53[19].name = "Field0";
TMP4913[1] = &TMP53[20];
TMP53[20].kind = 1;
TMP53[20].offset = offsetof(Keyvaluepair312415, Field1);
TMP53[20].typ = (&NTI312396);
TMP53[20].name = "Field1";
TMP4913[2] = &TMP53[21];
TMP53[21].kind = 1;
TMP53[21].offset = offsetof(Keyvaluepair312415, Field2);
TMP53[21].typ = (&NTI314702);
TMP53[21].name = "Field2";
TMP53[18].len = 3; TMP53[18].kind = 2; TMP53[18].sons = &TMP4913[0];
NTI312415.node = &TMP53[18];
NTI312412.size = sizeof(Keyvaluepairseq312412*);
NTI312412.kind = 24;
NTI312412.base = (&NTI312415);
NTI312412.flags = 2;
NTI312412.marker = TMP4916;
}

