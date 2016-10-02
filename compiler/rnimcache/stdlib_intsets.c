/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/stdlib_intsets.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/stdlib_intsets.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Intset269031 Intset269031;
typedef struct Trunk269027 Trunk269027;
typedef struct Trunkseq269029 Trunkseq269029;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29480 Memregion29480;
typedef struct Smallchunk29437 Smallchunk29437;
typedef struct Llchunk29474 Llchunk29474;
typedef struct Bigchunk29439 Bigchunk29439;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29478 Avlnode29478;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
struct  Intset269031  {
NI counter;
NI max;
Trunk269027* head;
Trunkseq269029* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NI TY29419[8];
struct  Trunk269027  {
Trunk269027* next;
NI key;
TY29419 bits;
};
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29437* TY29495[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29480  {
NI minlargeobj;
NI maxlargeobj;
TY29495 freesmallchunks;
Llchunk29474* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29439* freechunkslist;
Intset29414 chunkstarts;
Avlnode29478* root;
Avlnode29478* deleted;
Avlnode29478* last;
Avlnode29478* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29480 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29435  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29437  {
  Basechunk29435 Sup;
Smallchunk29437* next;
Smallchunk29437* prev;
Freecell29427* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29474  {
NI size;
NI acc;
Llchunk29474* next;
};
struct  Bigchunk29439  {
  Basechunk29435 Sup;
Bigchunk29439* next;
Bigchunk29439* prev;
NI align;
NF data;
};
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29478* TY29485[2];
struct  Avlnode29478  {
TY29485 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
struct Trunkseq269029 {
  TGenericSeq Sup;
  Trunk269027* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1137)(void* p, NI op);
N_NIMCALL(void, TMP1138)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Trunk269027*, intsetput_269661)(Intset269031* t, NI key);
static N_INLINE(NI, nexttry_269201)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_269044)(NI length, NI counter);
N_NIMCALL(void, intsetenlarge_269602)(Intset269031* t);
N_NIMCALL(void, intsetrawinsert_269225)(Intset269031* t, Trunkseq269029** data, Trunk269027* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53419)(Cell47305* c);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, decref_53001)(Cell47305* c);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Trunk269027*, intsetget_269206)(Intset269031* t, NI key);
N_NIMCALL(void, incl_269832)(Intset269031* s, NI key);
TNimType NTI269027; /* Trunk */
extern TNimType NTI104; /* int */
extern TNimType NTI29419; /* array[0..7, int] */
TNimType NTI269025; /* PTrunk */
TNimType NTI269029; /* TrunkSeq */
extern Gcheap49818 gch_49855;
TNimType NTI269031; /* IntSet */
N_NIMCALL(void, TMP1137)(void* p, NI op) {
	Trunk269027* a;
	NI LOC1;
	a = (Trunk269027*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP1138)(void* p, NI op) {
	Trunkseq269029* a;
	NI LOC1;
	a = (Trunkseq269029*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_269885)(Intset269031* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (Trunkseq269029*) newSeq((&NTI269029), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nexttry_269201)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_269044)(NI length, NI counter) {
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

static N_INLINE(void, incref_53419)(Cell47305* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(Cell47305*, usrtocell_51440)(void* usr) {
	Cell47305* result;
	result = 0;
	result = ((Cell47305*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result;
}

static N_INLINE(void, rtladdzct_52601)(Cell47305* c) {
	addzct_51417((&gch_49855.zct), c);
}

static N_INLINE(void, decref_53001)(Cell47305* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47305* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51440(src);
		incref_53419(LOC5);
	}
	LA3: ;
	{
		Cell47305* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51440((*dest));
		decref_53001(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, intsetrawinsert_269225)(Intset269031* t, Trunkseq269029** data, Trunk269027* desc) {
	NI h;
	h = (NI)((*desc).key & (*t).max);
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nexttry_269201(h, (*t).max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h]), desc);
}

N_NIMCALL(void, intsetenlarge_269602)(Intset269031* t) {
	Trunkseq269029* n;
	NI oldmax;
	Trunkseq269029* LOC8;
	n = 0;
	oldmax = (*t).max;
	(*t).max = (NI)((NI)((NI)((*t).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (Trunkseq269029*) newSeq((&NTI269029), ((NI) ((NI)((*t).max + ((NI) 1)))));
	{
		NI i_269629;
		NI res_269657;
		i_269629 = 0;
		res_269657 = ((NI) 0);
		{
			while (1) {
				if (!(res_269657 <= oldmax)) goto LA3;
				i_269629 = res_269657;
				{
					if (!!(((*t).data->data[i_269629] == NIM_NIL))) goto LA6;
					intsetrawinsert_269225((&(*t)), (&n), (*t).data->data[i_269629]);
				}
				LA6: ;
				res_269657 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC8;
}

N_NIMCALL(Trunk269027*, intsetput_269661)(Intset269031* t, NI key) {
	Trunk269027* result;
	NI h;
{	result = 0;
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).data->data[h]).key == key)) goto LA5;
				result = (*t).data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_269201(h, (*t).max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = mustrehash_269044((NI)((*t).max + ((NI) 1)), (*t).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_269602(t);
	}
	LA10: ;
	(*t).counter += ((NI) 1);
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_269201(h, (*t).max);
		} LA13: ;
	}
	result = (Trunk269027*) newObj((&NTI269025), sizeof(Trunk269027));
	asgnRef((void**) (&(*result).next), (*t).head);
	(*result).key = key;
	unsureAsgnRef((void**) (&(*t).head), result);
	asgnRef((void**) (&(*t).data->data[h]), result);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, incl_269832)(Intset269031* s, NI key) {
	Trunk269027* t;
	NI u;
	t = intsetput_269661(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
}

N_NIMCALL(Trunk269027*, intsetget_269206)(Intset269031* t, NI key) {
	Trunk269027* result;
	NI h;
{	result = 0;
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).data->data[h]).key == key)) goto LA5;
				result = (*t).data->data[h];
				goto BeforeRet;
			}
			LA5: ;
			h = nexttry_269201(h, (*t).max);
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsorincl_269862)(Intset269031* s, NI key) {
	NIM_BOOL result;
	Trunk269027* t;
	result = 0;
	t = intsetget_269206((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63))))))) == ((NI) 0)));
		{
			if (!!(result)) goto LA7;
			(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		incl_269832(s, key);
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_269811)(Intset269031* s, NI key) {
	NIM_BOOL result;
	Trunk269027* t;
	result = 0;
	t = intsetget_269206(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63))))))) == ((NI) 0)));
	}
	goto LA1;
	LA3: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, assign_269941)(Intset269031* dest, Intset269031* src) {
	Trunk269027* it;
	(*dest).counter = (*src).counter;
	(*dest).max = (*src).max;
	unsureAsgnRef((void**) (&(*dest).data), (Trunkseq269029*) newSeq((&NTI269029), ((NI) (((*src).data ? (*src).data->Sup.len : 0)))));
	it = (*src).head;
	{
		while (1) {
			NI h;
			Trunk269027* n;
			if (!!((it == NIM_NIL))) goto LA2;
			h = (NI)((*it).key & (*dest).max);
			{
				while (1) {
					if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_269201(h, (*dest).max);
				} LA4: ;
			}
			n = 0;
			n = (Trunk269027*) newObj((&NTI269025), sizeof(Trunk269027));
			asgnRef((void**) (&(*n).next), (*dest).head);
			(*n).key = (*it).key;
			memcpy((void*)(*n).bits, (NIM_CONST void*)(*it).bits, sizeof(TY29419));
			unsureAsgnRef((void**) (&(*dest).head), n);
			asgnRef((void**) (&(*dest).data->data[h]), n);
			it = (*it).next;
		} LA2: ;
	}
}

N_NIMCALL(void, excl_269841)(Intset269031* s, NI key) {
	Trunk269027* t;
	t = intsetget_269206((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64) ~((NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))))));
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit000)(void) {
static TNimNode* TMP1136[3];
static TNimNode* TMP1183[4];
static TNimNode TMP541[9];
NTI269027.size = sizeof(Trunk269027);
NTI269027.kind = 18;
NTI269027.base = 0;
TMP1136[0] = &TMP541[1];
TMP541[1].kind = 1;
TMP541[1].offset = offsetof(Trunk269027, next);
TMP541[1].typ = (&NTI269025);
TMP541[1].name = "next";
TMP1136[1] = &TMP541[2];
TMP541[2].kind = 1;
TMP541[2].offset = offsetof(Trunk269027, key);
TMP541[2].typ = (&NTI104);
TMP541[2].name = "key";
TMP1136[2] = &TMP541[3];
TMP541[3].kind = 1;
TMP541[3].offset = offsetof(Trunk269027, bits);
TMP541[3].typ = (&NTI29419);
TMP541[3].name = "bits";
TMP541[0].len = 3; TMP541[0].kind = 2; TMP541[0].sons = &TMP1136[0];
NTI269027.node = &TMP541[0];
NTI269025.size = sizeof(Trunk269027*);
NTI269025.kind = 22;
NTI269025.base = (&NTI269027);
NTI269025.marker = TMP1137;
NTI269029.size = sizeof(Trunkseq269029*);
NTI269029.kind = 24;
NTI269029.base = (&NTI269025);
NTI269029.flags = 2;
NTI269029.marker = TMP1138;
NTI269031.size = sizeof(Intset269031);
NTI269031.kind = 18;
NTI269031.base = 0;
NTI269031.flags = 2;
TMP1183[0] = &TMP541[5];
TMP541[5].kind = 1;
TMP541[5].offset = offsetof(Intset269031, counter);
TMP541[5].typ = (&NTI104);
TMP541[5].name = "counter";
TMP1183[1] = &TMP541[6];
TMP541[6].kind = 1;
TMP541[6].offset = offsetof(Intset269031, max);
TMP541[6].typ = (&NTI104);
TMP541[6].name = "max";
TMP1183[2] = &TMP541[7];
TMP541[7].kind = 1;
TMP541[7].offset = offsetof(Intset269031, head);
TMP541[7].typ = (&NTI269025);
TMP541[7].name = "head";
TMP1183[3] = &TMP541[8];
TMP541[8].kind = 1;
TMP541[8].offset = offsetof(Intset269031, data);
TMP541[8].typ = (&NTI269029);
TMP541[8].name = "data";
TMP541[4].len = 4; TMP541[4].kind = 2; TMP541[4].sons = &TMP1183[0];
NTI269031.node = &TMP541[4];
}

