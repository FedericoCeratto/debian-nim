/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Intset240031 Intset240031;
typedef struct Trunk240027 Trunk240027;
typedef struct Trunkseq240029 Trunkseq240029;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30085 Memregion30085;
typedef struct Smallchunk30039 Smallchunk30039;
typedef struct Llchunk30079 Llchunk30079;
typedef struct Bigchunk30041 Bigchunk30041;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30083 Avlnode30083;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
struct  Intset240031  {
NI counter;
NI max;
Trunk240027* head;
Trunkseq240029* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NI TY30018[16];
struct  Trunk240027  {
Trunk240027* next;
NI key;
TY30018 bits;
};
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
};
typedef Smallchunk30039* TY30100[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30085  {
NI minlargeobj;
NI maxlargeobj;
TY30100 freesmallchunks;
Llchunk30079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30041* freechunkslist;
Intset30014 chunkstarts;
Avlnode30083* root;
Avlnode30083* deleted;
Avlnode30083* last;
Avlnode30083* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellseq47921 tempstack;
NI recgclock;
Memregion30085 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30039  {
  Basechunk30037 Sup;
Smallchunk30039* next;
Smallchunk30039* prev;
Freecell30029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30079  {
NI size;
NI acc;
Llchunk30079* next;
};
struct  Bigchunk30041  {
  Basechunk30037 Sup;
Bigchunk30041* next;
Bigchunk30041* prev;
NI align;
NF data;
};
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30018 bits;
};
typedef Avlnode30083* TY30090[2];
struct  Avlnode30083  {
TY30090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30018 bits;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct Trunkseq240029 {
  TGenericSeq Sup;
  Trunk240027* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1242)(void* p, NI op);
N_NIMCALL(void, TMP1243)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(Trunk240027*, intsetput_240661_2627731572)(Intset240031* t0, NI key0);
static N_INLINE(NI, nexttry_240201_2627731572)(NI h0, NI maxhash0);
static N_INLINE(NIM_BOOL, mustrehash_240046_2627731572)(NI length0, NI counter0);
N_NIMCALL(void, intsetenlarge_240602_2627731572)(Intset240031* t0);
N_NIMCALL(void, intsetrawinsert_240225_2627731572)(Intset240031 t0, Trunkseq240029** data0, Trunk240027* desc0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_54019_1689653243)(Cell47905* c0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, decref_53601_1689653243)(Cell47905* c0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(Trunk240027*, intsetget_240206_2627731572)(Intset240031 t0, NI key0);
N_NIMCALL(void, incl_240832_2627731572)(Intset240031* s0, NI key0);
TNimType NTI240027; /* Trunk */
extern TNimType NTI104; /* int */
extern TNimType NTI30018; /* array[0..15, int] */
TNimType NTI240025; /* PTrunk */
TNimType NTI240029; /* TrunkSeq */
extern Gcheap50418 gch_50458_1689653243;
TNimType NTI240031; /* IntSet */
N_NIMCALL(void, TMP1242)(void* p, NI op) {
	Trunk240027* a;
	NI LOC1;
	a = (Trunk240027*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 16; LOC1++) {
	}
}
N_NIMCALL(void, TMP1243)(void* p, NI op) {
	Trunkseq240029* a;
	NI LOC1;
	a = (Trunkseq240029*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_240885_2627731572)(Intset240031* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (Trunkseq240029*) newSeq((&NTI240029), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nexttry_240201_2627731572)(NI h0, NI maxhash0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NI)((NI)(((NI) 5) * h0) + ((NI) 1)) & maxhash0);
	return result0;
}

static N_INLINE(NIM_BOOL, mustrehash_240046_2627731572)(NI length0, NI counter0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = ((NI)(length0 * ((NI) 2)) < (NI)(counter0 * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI)(length0 - counter0) < ((NI) 4));
	LA2: ;
	result0 = LOC1;
	return result0;
}

static N_INLINE(void, incref_54019_1689653243)(Cell47905* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, decref_53601_1689653243)(Cell47905* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47905* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47905*)0;
		LOC5 = usrtocell_52040_1689653243(src0);
		incref_54019_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47905* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47905*)0;
		LOC10 = usrtocell_52040_1689653243((*dest0));
		decref_53601_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, intsetrawinsert_240225_2627731572)(Intset240031 t0, Trunkseq240029** data0, Trunk240027* desc0) {
	NI h0;
	h0 = (NI)((*desc0).key & t0.max);
	{
		while (1) {
			if (!!(((*data0)->data[h0] == NIM_NIL))) goto LA2;
			h0 = nexttry_240201_2627731572(h0, t0.max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data0)->data[h0]), desc0);
}

N_NIMCALL(void, intsetenlarge_240602_2627731572)(Intset240031* t0) {
	Trunkseq240029* n0;
	NI oldmax0;
	Trunkseq240029* LOC8;
	n0 = (Trunkseq240029*)0;
	oldmax0 = (*t0).max;
	(*t0).max = (NI)((NI)((NI)((*t0).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n0 = (Trunkseq240029*) newSeq((&NTI240029), ((NI) ((NI)((*t0).max + ((NI) 1)))));
	{
		NI i_240629_2627731572;
		NI res_240657_2627731572;
		i_240629_2627731572 = (NI)0;
		res_240657_2627731572 = ((NI) 0);
		{
			while (1) {
				if (!(res_240657_2627731572 <= oldmax0)) goto LA3;
				i_240629_2627731572 = res_240657_2627731572;
				{
					if (!!(((*t0).data->data[i_240629_2627731572] == NIM_NIL))) goto LA6;
					intsetrawinsert_240225_2627731572((*t0), (&n0), (*t0).data->data[i_240629_2627731572]);
				}
				LA6: ;
				res_240657_2627731572 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = (Trunkseq240029*)0;
	LOC8 = (*t0).data;
	unsureAsgnRef((void**) (&(*t0).data), n0);
	n0 = LOC8;
}

N_NIMCALL(Trunk240027*, intsetput_240661_2627731572)(Intset240031* t0, NI key0) {
	Trunk240027* result0;
	NI h0;
{	result0 = (Trunk240027*)0;
	h0 = (NI)(key0 & (*t0).max);
	{
		while (1) {
			if (!!(((*t0).data->data[h0] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t0).data->data[h0]).key == key0)) goto LA5;
				result0 = (*t0).data->data[h0];
				goto BeforeRet;
			}
			LA5: ;
			h0 = nexttry_240201_2627731572(h0, (*t0).max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = (NIM_BOOL)0;
		LOC9 = mustrehash_240046_2627731572((NI)((*t0).max + ((NI) 1)), (*t0).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_240602_2627731572(t0);
	}
	LA10: ;
	(*t0).counter += ((NI) 1);
	h0 = (NI)(key0 & (*t0).max);
	{
		while (1) {
			if (!!(((*t0).data->data[h0] == NIM_NIL))) goto LA13;
			h0 = nexttry_240201_2627731572(h0, (*t0).max);
		} LA13: ;
	}
	result0 = (Trunk240027*) newObj((&NTI240025), sizeof(Trunk240027));
	asgnRef((void**) (&(*result0).next), (*t0).head);
	(*result0).key = key0;
	unsureAsgnRef((void**) (&(*t0).head), result0);
	asgnRef((void**) (&(*t0).data->data[h0]), result0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, incl_240832_2627731572)(Intset240031* s0, NI key0) {
	Trunk240027* t0;
	NI u0;
	t0 = intsetput_240661_2627731572(s0, (NI)((NU32)(key0) >> (NU32)(((NI) 9))));
	u0 = (NI)(key0 & ((NI) 511));
	(*t0).bits[((NI)((NU32)(((NI) (u0))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t0).bits[((NI)((NU32)(((NI) (u0))) >> (NU32)(((NI) 5))))- 0] | (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u0)) & ((NI) 31)))))));
}

N_NIMCALL(Trunk240027*, intsetget_240206_2627731572)(Intset240031 t0, NI key0) {
	Trunk240027* result0;
	NI h0;
{	result0 = (Trunk240027*)0;
	h0 = (NI)(key0 & t0.max);
	{
		while (1) {
			if (!!((t0.data->data[h0] == NIM_NIL))) goto LA2;
			{
				if (!((*t0.data->data[h0]).key == key0)) goto LA5;
				result0 = t0.data->data[h0];
				goto BeforeRet;
			}
			LA5: ;
			h0 = nexttry_240201_2627731572(h0, t0.max);
		} LA2: ;
	}
	result0 = NIM_NIL;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, containsorincl_240862_2627731572)(Intset240031* s0, NI key0) {
	NIM_BOOL result0;
	Trunk240027* t0;
	result0 = (NIM_BOOL)0;
	t0 = intsetget_240206_2627731572((*s0), (NI)((NU32)(key0) >> (NU32)(((NI) 9))));
	{
		NI u0;
		if (!!((t0 == NIM_NIL))) goto LA3;
		u0 = (NI)(key0 & ((NI) 511));
		result0 = !(((NI)((*t0).bits[((NI)((NU32)(((NI) (u0))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u0)) & ((NI) 31))))))) == ((NI) 0)));
		{
			if (!!(result0)) goto LA7;
			(*t0).bits[((NI)((NU32)(((NI) (u0))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t0).bits[((NI)((NU32)(((NI) (u0))) >> (NU32)(((NI) 5))))- 0] | (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u0)) & ((NI) 31)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		incl_240832_2627731572(s0, key0);
		result0 = NIM_FALSE;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, contains_240811_2627731572)(Intset240031 s0, NI key0) {
	NIM_BOOL result0;
	Trunk240027* t0;
	result0 = (NIM_BOOL)0;
	t0 = intsetget_240206_2627731572(s0, (NI)((NU32)(key0) >> (NU32)(((NI) 9))));
	{
		NI u0;
		if (!!((t0 == NIM_NIL))) goto LA3;
		u0 = (NI)(key0 & ((NI) 511));
		result0 = !(((NI)((*t0).bits[((NI)((NU32)(((NI) (u0))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u0)) & ((NI) 31))))))) == ((NI) 0)));
	}
	goto LA1;
	LA3: ;
	{
		result0 = NIM_FALSE;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, assign_240941_2627731572)(Intset240031* dest0, Intset240031 src0) {
	Trunk240027* it0;
	(*dest0).counter = src0.counter;
	(*dest0).max = src0.max;
	unsureAsgnRef((void**) (&(*dest0).data), (Trunkseq240029*) newSeq((&NTI240029), ((NI) ((src0.data ? src0.data->Sup.len : 0)))));
	it0 = src0.head;
	{
		while (1) {
			NI h0;
			Trunk240027* n0;
			if (!!((it0 == NIM_NIL))) goto LA2;
			h0 = (NI)((*it0).key & (*dest0).max);
			{
				while (1) {
					if (!!(((*dest0).data->data[h0] == NIM_NIL))) goto LA4;
					h0 = nexttry_240201_2627731572(h0, (*dest0).max);
				} LA4: ;
			}
			n0 = (Trunk240027*)0;
			n0 = (Trunk240027*) newObj((&NTI240025), sizeof(Trunk240027));
			asgnRef((void**) (&(*n0).next), (*dest0).head);
			(*n0).key = (*it0).key;
			memcpy((void*)(*n0).bits, (NIM_CONST void*)(*it0).bits, sizeof(TY30018));
			unsureAsgnRef((void**) (&(*dest0).head), n0);
			asgnRef((void**) (&(*dest0).data->data[h0]), n0);
			it0 = (*it0).next;
		} LA2: ;
	}
}

N_NIMCALL(void, excl_240841_2627731572)(Intset240031* s0, NI key0) {
	Trunk240027* t0;
	t0 = intsetget_240206_2627731572((*s0), (NI)((NU32)(key0) >> (NU32)(((NI) 9))));
	{
		NI u0;
		if (!!((t0 == NIM_NIL))) goto LA3;
		u0 = (NI)(key0 & ((NI) 511));
		(*t0).bits[((NI)((NU32)(((NI) (u0))) >> (NU32)(((NI) 5))))- 0] = (NI)((*t0).bits[((NI)((NU32)(((NI) (u0))) >> (NU32)(((NI) 5))))- 0] & (NI)((NU32) ~((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(((NI) (u0)) & ((NI) 31)))))))));
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit000)(void) {
static TNimNode* TMP1241[3];
static TNimNode* TMP1302[4];
static TNimNode TMP579[9];
NTI240027.size = sizeof(Trunk240027);
NTI240027.kind = 18;
NTI240027.base = 0;
TMP1241[0] = &TMP579[1];
TMP579[1].kind = 1;
TMP579[1].offset = offsetof(Trunk240027, next);
TMP579[1].typ = (&NTI240025);
TMP579[1].name = "next";
TMP1241[1] = &TMP579[2];
TMP579[2].kind = 1;
TMP579[2].offset = offsetof(Trunk240027, key);
TMP579[2].typ = (&NTI104);
TMP579[2].name = "key";
TMP1241[2] = &TMP579[3];
TMP579[3].kind = 1;
TMP579[3].offset = offsetof(Trunk240027, bits);
TMP579[3].typ = (&NTI30018);
TMP579[3].name = "bits";
TMP579[0].len = 3; TMP579[0].kind = 2; TMP579[0].sons = &TMP1241[0];
NTI240027.node = &TMP579[0];
NTI240025.size = sizeof(Trunk240027*);
NTI240025.kind = 22;
NTI240025.base = (&NTI240027);
NTI240025.marker = TMP1242;
NTI240029.size = sizeof(Trunkseq240029*);
NTI240029.kind = 24;
NTI240029.base = (&NTI240025);
NTI240029.flags = 2;
NTI240029.marker = TMP1243;
NTI240031.size = sizeof(Intset240031);
NTI240031.kind = 18;
NTI240031.base = 0;
NTI240031.flags = 2;
TMP1302[0] = &TMP579[5];
TMP579[5].kind = 1;
TMP579[5].offset = offsetof(Intset240031, counter);
TMP579[5].typ = (&NTI104);
TMP579[5].name = "counter";
TMP1302[1] = &TMP579[6];
TMP579[6].kind = 1;
TMP579[6].offset = offsetof(Intset240031, max);
TMP579[6].typ = (&NTI104);
TMP579[6].name = "max";
TMP1302[2] = &TMP579[7];
TMP579[7].kind = 1;
TMP579[7].offset = offsetof(Intset240031, head);
TMP579[7].typ = (&NTI240025);
TMP579[7].name = "head";
TMP1302[3] = &TMP579[8];
TMP579[8].kind = 1;
TMP579[8].offset = offsetof(Intset240031, data);
TMP579[8].typ = (&NTI240029);
TMP579[8].name = "data";
TMP579[4].len = 4; TMP579[4].kind = 2; TMP579[4].sons = &TMP1302[0];
NTI240031.node = &TMP579[4];
}

