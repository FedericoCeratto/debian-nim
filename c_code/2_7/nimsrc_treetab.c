/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnodetable191873 Tnodetable191873;
typedef struct Tnode191813 Tnode191813;
typedef struct Tnodepairseq191871 Tnodepairseq191871;
typedef struct Tnodepair191869 Tnodepair191869;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype191849 Ttype191849;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tsym191843 Tsym191843;
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
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct TY191933 TY191933;
struct  Tnodepair191869  {
NI h;
Tnode191813* key;
NI val;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
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
struct  Tnodetable191873  {
NI counter;
Tnodepairseq191871* data;
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
struct Tnodepairseq191871 {
  TGenericSeq Sup;
  Tnodepair191869 data[SEQ_DECL_SIZE];
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
N_NIMCALL(NI, hashtree_243027)(Tnode191813* n);
static N_INLINE(NI, HEX21HEX26_131025)(NI h, NI val);
N_NIMCALL(NI, hash_131839)(NimStringDesc* x);
N_NIMCALL(NI, sonslen_194403)(Tnode191813* n);
N_NIMCALL(NI, nodetablerawget_243210)(Tnodetable191873 t, NI k, Tnode191813* key);
N_NIMCALL(NIM_BOOL, treesequivalent_243111)(Tnode191813* a, Tnode191813* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, sametypeornil_226108)(Ttype191849* a, Ttype191849* b, NU8 flags);
static N_INLINE(NI, nexttry_199256)(NI h, NI maxhash);
N_NIMCALL(NIM_BOOL, mustrehash_199249)(NI length, NI counter);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, nodetablerawinsert_243258)(Tnodepairseq191871** data, NI k, Tnode191813* key, NI val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI191871; /* TNodePairSeq */
extern Tgcheap48216 gch_48244;

static N_INLINE(NI, HEX21HEX26_131025)(NI h, NI val) {
	NI result;
	result = 0;
	result = (NI)((NU32)(h) + (NU32)(val));
	result = (NI)((NU32)(result) + (NU32)((NI)((NU32)(result) << (NU32)(((NI) 10)))));
	result = (NI)(result ^ (NI)((NU32)(result) >> (NU32)(((NI) 6))));
	return result;
}

N_NIMCALL(NI, hashtree_243027)(Tnode191813* n) {
	NI result;
{	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	result = ((NI) ((*n).kind));
	switch ((*n).kind) {
	case ((NU8) 1):
	case ((NU8) 23):
	case ((NU8) 4):
	{
	}
	break;
	case ((NU8) 2):
	{
		result = HEX21HEX26_131025(result, (*(*n).kindU.S5.ident).h);
	}
	break;
	case ((NU8) 3):
	{
		result = HEX21HEX26_131025(result, (*(*(*n).kindU.S4.sym).name).h);
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			NIM_BOOL LOC11;
			LOC11 = 0;
			LOC11 = (IL64(-2147483648) <= (*n).kindU.S1.intval);
			if (!(LOC11)) goto LA12;
			LOC11 = ((*n).kindU.S1.intval <= IL64(2147483647));
			LA12: ;
			if (!LOC11) goto LA13;
			result = HEX21HEX26_131025(result, ((NI) ((*n).kindU.S1.intval)));
		}
		LA13: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 18):
	{
		{
			NIM_BOOL LOC18;
			LOC18 = 0;
			LOC18 = (-1.0000000000000000e+006 <= (*n).kindU.S2.floatval);
			if (!(LOC18)) goto LA19;
			LOC18 = ((*n).kindU.S2.floatval <= 1.0000000000000000e+006);
			LA19: ;
			if (!LOC18) goto LA20;
			result = HEX21HEX26_131025(result, float64ToInt32((*n).kindU.S2.floatval));
		}
		LA20: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			NI LOC27;
			if (!!((*n).kindU.S3.strval == 0)) goto LA25;
			LOC27 = 0;
			LOC27 = hash_131839((*n).kindU.S3.strval);
			result = HEX21HEX26_131025(result, LOC27);
		}
		LA25: ;
	}
	break;
	default:
	{
		{
			NI i_243082;
			NI HEX3Atmp_243089;
			NI LOC30;
			NI res_243092;
			i_243082 = 0;
			HEX3Atmp_243089 = 0;
			LOC30 = 0;
			LOC30 = sonslen_194403(n);
			HEX3Atmp_243089 = (NI)(LOC30 - ((NI) 1));
			res_243092 = ((NI) 0);
			{
				while (1) {
					NI LOC33;
					if (!(res_243092 <= HEX3Atmp_243089)) goto LA32;
					i_243082 = res_243092;
					LOC33 = 0;
					LOC33 = hashtree_243027((*n).kindU.S6.sons->data[i_243082]);
					result = HEX21HEX26_131025(result, LOC33);
					res_243092 += ((NI) 1);
				} LA32: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
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

N_NIMCALL(NIM_BOOL, treesequivalent_243111)(Tnode191813* a, Tnode191813* b) {
	NIM_BOOL result;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a).kind == (*b).kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).kind) {
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((NU8) 3):
		{
			result = ((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.ident).Sup.id == (*(*b).kindU.S5.ident).Sup.id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 15):
		{
			result = ((*a).kindU.S1.intval == (*b).kindU.S1.intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.floatval == (*b).kindU.S2.floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.strval, (*b).kindU.S3.strval);
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_194403(a);
				LOC22 = 0;
				LOC22 = sonslen_194403(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_243184;
					NI HEX3Atmp_243188;
					NI LOC26;
					NI res_243191;
					i_243184 = 0;
					HEX3Atmp_243188 = 0;
					LOC26 = 0;
					LOC26 = sonslen_194403(a);
					HEX3Atmp_243188 = (NI)(LOC26 - ((NI) 1));
					res_243191 = ((NI) 0);
					{
						while (1) {
							if (!(res_243191 <= HEX3Atmp_243188)) goto LA28;
							i_243184 = res_243191;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = treesequivalent_243111((*a).kindU.S6.sons->data[i_243184], (*b).kindU.S6.sons->data[i_243184]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_243191 += ((NI) 1);
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
		{
			if (!result) goto LA36;
			result = sametypeornil_226108((*a).typ, (*b).typ, 0);
		}
		LA36: ;
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_199256)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(NI, nodetablerawget_243210)(Tnodetable191873 t, NI k, Tnode191813* key) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(k & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((t.data->data[h].key == NIM_NIL))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = (t.data->data[h].h == k);
				if (!(LOC5)) goto LA6;
				LOC5 = treesequivalent_243111(t.data->data[h].key, key);
				LA6: ;
				if (!LOC5) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_199256(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
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

N_NIMCALL(void, nodetablerawinsert_243258)(Tnodepairseq191871** data, NI k, Tnode191813* key, NI val) {
	NI h;
	h = (NI)(k & ((*data) ? ((*data)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!(((*data)->data[h].key == NIM_NIL))) goto LA2;
			h = nexttry_199256(h, ((*data) ? ((*data)->Sup.len-1) : -1));
		} LA2: ;
	}
	(*data)->data[h].h = k;
	asgnRefNoCycle((void**) (&(*data)->data[h].key), key);
	(*data)->data[h].val = val;
}

N_NIMCALL(NI, nodetabletestorset_243698)(Tnodetable191873* t, Tnode191813* key, NI val) {
	NI result;
	Tnodepairseq191871* n;
	NI k;
	NI index;
	result = 0;
	n = 0;
	k = hashtree_243027(key);
	index = nodetablerawget_243210((*t), k, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = (*t).data->data[index].val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			Tnodepairseq191871* LOC18;
			LOC8 = 0;
			LOC8 = mustrehash_199249(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			n = (Tnodepairseq191871*) newSeq((&NTI191871), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
			{
				NI i_243839;
				NI HEX3Atmp_243876;
				NI res_243879;
				i_243839 = 0;
				HEX3Atmp_243876 = 0;
				HEX3Atmp_243876 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
				res_243879 = ((NI) 0);
				{
					while (1) {
						if (!(res_243879 <= HEX3Atmp_243876)) goto LA13;
						i_243839 = res_243879;
						{
							if (!!(((*t).data->data[i_243839].key == NIM_NIL))) goto LA16;
							nodetablerawinsert_243258((&n), (*t).data->data[i_243839].h, (*t).data->data[i_243839].key, (*t).data->data[i_243839].val);
						}
						LA16: ;
						res_243879 += ((NI) 1);
					} LA13: ;
				}
			}
			LOC18 = 0;
			LOC18 = (*t).data;
			unsureAsgnRef((void**) (&(*t).data), n);
			n = LOC18;
		}
		LA9: ;
		nodetablerawinsert_243258((&(*t).data), k, key, val);
		result = val;
		(*t).counter += ((NI) 1);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_treetabInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_treetabDatInit)(void) {
}
