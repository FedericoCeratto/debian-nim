/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Intset222056 Intset222056;
typedef struct Trunk222052 Trunk222052;
typedef struct Trunkseq222054 Trunkseq222054;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell48946 Cell48946;
typedef struct Cellset48958 Cellset48958;
typedef struct Gcheap51018 Gcheap51018;
typedef struct Gcstack51016 Gcstack51016;
typedef struct Cellseq48962 Cellseq48962;
typedef struct Pagedesc48954 Pagedesc48954;
typedef struct Memregion30891 Memregion30891;
typedef struct Smallchunk30843 Smallchunk30843;
typedef struct Llchunk30885 Llchunk30885;
typedef struct Bigchunk30845 Bigchunk30845;
typedef struct Intset30817 Intset30817;
typedef struct Trunk30813 Trunk30813;
typedef struct Avlnode30889 Avlnode30889;
typedef struct Gcstat51014 Gcstat51014;
typedef struct Basechunk30841 Basechunk30841;
typedef struct Freecell30833 Freecell30833;
struct  Intset222056  {
NI counter;
NI max;
Trunk222052* head;
Trunkseq222054* data;
};
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY30822[8];
struct  Trunk222052  {
Trunk222052* next;
NI key;
TY30822 bits;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  Cell48946  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48962  {
NI len;
NI cap;
Cell48946** d;
};
struct  Cellset48958  {
NI counter;
NI max;
Pagedesc48954* head;
Pagedesc48954** data;
};
typedef Smallchunk30843* TY30906[512];
typedef Trunk30813* Trunkbuckets30815[256];
struct  Intset30817  {
Trunkbuckets30815 data;
};
struct  Memregion30891  {
NI minlargeobj;
NI maxlargeobj;
TY30906 freesmallchunks;
Llchunk30885* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30845* freechunkslist;
Intset30817 chunkstarts;
Avlnode30889* root;
Avlnode30889* deleted;
Avlnode30889* last;
Avlnode30889* freeavlnodes;
};
struct  Gcstat51014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap51018  {
Gcstack51016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48962 zct;
Cellseq48962 decstack;
Cellset48958 cycleroots;
Cellseq48962 tempstack;
NI recgclock;
Memregion30891 region;
Gcstat51014 stat;
};
struct  Gcstack51016  {
Gcstack51016* prev;
Gcstack51016* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Pagedesc48954  {
Pagedesc48954* next;
NI key;
TY30822 bits;
};
struct  Basechunk30841  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30843  {
  Basechunk30841 Sup;
Smallchunk30843* next;
Smallchunk30843* prev;
Freecell30833* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30885  {
NI size;
NI acc;
Llchunk30885* next;
};
struct  Bigchunk30845  {
  Basechunk30841 Sup;
Bigchunk30845* next;
Bigchunk30845* prev;
NI align;
NF data;
};
struct  Trunk30813  {
Trunk30813* next;
NI key;
TY30822 bits;
};
typedef Avlnode30889* TY30896[2];
struct  Avlnode30889  {
TY30896 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell30833  {
Freecell30833* next;
NI zerofield;
};
struct Trunkseq222054 {
  TGenericSeq Sup;
  Trunk222052* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1129)(void* p, NI op);
N_NIMCALL(void, TMP1130)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Trunk222052*, intsetget_222218)(Intset222056* t, NI key);
static N_INLINE(NI, nexttry_222207)(NI h, NI maxhash);
N_NIMCALL(void, incl_222856)(Intset222056* s, NI key);
N_NIMCALL(Trunk222052*, intsetput_222689)(Intset222056* t, NI key);
static N_INLINE(NIM_BOOL, mustrehash_222075)(NI length, NI counter);
N_NIMCALL(void, intsetenlarge_222614)(Intset222056* t);
N_NIMCALL(void, intsetrawinsert_222249)(Intset222056* t, Trunkseq222054** data, Trunk222052* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_55022)(Cell48946* c);
static N_INLINE(NIM_BOOL, canbecycleroot_52667)(Cell48946* c);
static N_INLINE(void, rtladdcycleroot_53423)(Cell48946* c);
N_NOINLINE(void, incl_49665)(Cellset48958* s, Cell48946* cell);
static N_INLINE(Cell48946*, usrtocell_52646)(void* usr);
static N_INLINE(void, decref_54604)(Cell48946* c);
static N_INLINE(void, rtladdzct_54204)(Cell48946* c);
N_NOINLINE(void, addzct_52617)(Cellseq48962* s, Cell48946* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
TNimType NTI222056; /* IntSet */
extern TNimType NTI108; /* int */
TNimType NTI222052; /* Trunk */
extern TNimType NTI30822; /* array[0..7, int] */
TNimType NTI222050; /* PTrunk */
TNimType NTI222054; /* TrunkSeq */
extern Gcheap51018 gch_51059;
N_NIMCALL(void, TMP1129)(void* p, NI op) {
	Trunk222052* a;
	NI LOC1;
	a = (Trunk222052*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP1130)(void* p, NI op) {
	Trunkseq222054* a;
	NI LOC1;
	a = (Trunkseq222054*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_222927)(Intset222056* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (Trunkseq222054*) newSeq((&NTI222054), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nexttry_222207)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(Trunk222052*, intsetget_222218)(Intset222056* t, NI key) {
	Trunk222052* result;
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
			h = nexttry_222207(h, (*t).max);
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_222075)(NI length, NI counter) {
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

static N_INLINE(NIM_BOOL, canbecycleroot_52667)(Cell48946* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_53423)(Cell48946* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_49665((&gch_51059.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_55022)(Cell48946* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_52667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_53423(c);
	}
	LA4: ;
}

static N_INLINE(Cell48946*, usrtocell_52646)(void* usr) {
	Cell48946* result;
	result = 0;
	result = ((Cell48946*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell48946))))));
	return result;
}

static N_INLINE(void, rtladdzct_54204)(Cell48946* c) {
	addzct_52617((&gch_51059.zct), c);
}

static N_INLINE(void, decref_54604)(Cell48946* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_54204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_52667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_53423(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell48946* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_52646(src);
		incref_55022(LOC5);
	}
	LA3: ;
	{
		Cell48946* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_52646((*dest));
		decref_54604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, intsetrawinsert_222249)(Intset222056* t, Trunkseq222054** data, Trunk222052* desc) {
	NI h;
	h = (NI)((*desc).key & (*t).max);
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nexttry_222207(h, (*t).max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h]), desc);
}

N_NIMCALL(void, intsetenlarge_222614)(Intset222056* t) {
	Trunkseq222054* n;
	NI oldmax;
	Trunkseq222054* LOC8;
	n = 0;
	oldmax = (*t).max;
	(*t).max = (NI)((NI)((NI)((*t).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (Trunkseq222054*) newSeq((&NTI222054), ((NI) ((NI)((*t).max + ((NI) 1)))));
	{
		NI i_222642;
		NI res_222670;
		i_222642 = 0;
		res_222670 = ((NI) 0);
		{
			while (1) {
				if (!(res_222670 <= oldmax)) goto LA3;
				i_222642 = res_222670;
				{
					if (!!(((*t).data->data[i_222642] == NIM_NIL))) goto LA6;
					intsetrawinsert_222249((&(*t)), (&n), (*t).data->data[i_222642]);
				}
				LA6: ;
				res_222670 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC8;
}

N_NIMCALL(Trunk222052*, intsetput_222689)(Intset222056* t, NI key) {
	Trunk222052* result;
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
			h = nexttry_222207(h, (*t).max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = mustrehash_222075((NI)((*t).max + ((NI) 1)), (*t).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_222614(t);
	}
	LA10: ;
	(*t).counter += ((NI) 1);
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_222207(h, (*t).max);
		} LA13: ;
	}
	result = (Trunk222052*) newObj((&NTI222050), sizeof(Trunk222052));
	asgnRef((void**) (&(*result).next), (*t).head);
	(*result).key = key;
	unsureAsgnRef((void**) (&(*t).head), result);
	asgnRef((void**) (&(*t).data->data[h]), result);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, incl_222856)(Intset222056* s, NI key) {
	Trunk222052* t;
	NI u;
	t = intsetput_222689(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
}

N_NIMCALL(NIM_BOOL, containsorincl_222898)(Intset222056* s, NI key) {
	NIM_BOOL result;
	Trunk222052* t;
	result = 0;
	t = intsetget_222218((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
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
		incl_222856(s, key);
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_222829)(Intset222056* s, NI key) {
	NIM_BOOL result;
	Trunk222052* t;
	result = 0;
	t = intsetget_222218(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
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

N_NIMCALL(void, excl_222871)(Intset222056* s, NI key) {
	Trunk222052* t;
	t = intsetget_222218((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3;
		u = (NI)(key & ((NI) 511));
		(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64) ~((NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))))));
	}
	LA3: ;
}

N_NIMCALL(void, assign_222964)(Intset222056* dest, Intset222056* src) {
	Trunk222052* it;
	(*dest).counter = (*src).counter;
	(*dest).max = (*src).max;
	unsureAsgnRef((void**) (&(*dest).data), (Trunkseq222054*) newSeq((&NTI222054), ((NI) (((*src).data ? (*src).data->Sup.len : 0)))));
	it = (*src).head;
	{
		while (1) {
			NI h;
			Trunk222052* n;
			if (!!((it == NIM_NIL))) goto LA2;
			h = (NI)((*it).key & (*dest).max);
			{
				while (1) {
					if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_222207(h, (*dest).max);
				} LA4: ;
			}
			n = 0;
			n = (Trunk222052*) newObj((&NTI222050), sizeof(Trunk222052));
			asgnRef((void**) (&(*n).next), (*dest).head);
			(*n).key = (*it).key;
			memcpy((void*)(*n).bits, (NIM_CONST void*)(*it).bits, sizeof(TY30822));
			unsureAsgnRef((void**) (&(*dest).head), n);
			asgnRef((void**) (&(*dest).data->data[h]), n);
			it = (*it).next;
		} LA2: ;
	}
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit000)(void) {
static TNimNode* TMP1127[4];
static TNimNode* TMP1128[3];
static TNimNode TMP803[9];
NTI222056.size = sizeof(Intset222056);
NTI222056.kind = 18;
NTI222056.base = 0;
NTI222056.flags = 2;
TMP1127[0] = &TMP803[1];
TMP803[1].kind = 1;
TMP803[1].offset = offsetof(Intset222056, counter);
TMP803[1].typ = (&NTI108);
TMP803[1].name = "counter";
TMP1127[1] = &TMP803[2];
TMP803[2].kind = 1;
TMP803[2].offset = offsetof(Intset222056, max);
TMP803[2].typ = (&NTI108);
TMP803[2].name = "max";
TMP1127[2] = &TMP803[3];
NTI222052.size = sizeof(Trunk222052);
NTI222052.kind = 18;
NTI222052.base = 0;
TMP1128[0] = &TMP803[5];
TMP803[5].kind = 1;
TMP803[5].offset = offsetof(Trunk222052, next);
TMP803[5].typ = (&NTI222050);
TMP803[5].name = "next";
TMP1128[1] = &TMP803[6];
TMP803[6].kind = 1;
TMP803[6].offset = offsetof(Trunk222052, key);
TMP803[6].typ = (&NTI108);
TMP803[6].name = "key";
TMP1128[2] = &TMP803[7];
TMP803[7].kind = 1;
TMP803[7].offset = offsetof(Trunk222052, bits);
TMP803[7].typ = (&NTI30822);
TMP803[7].name = "bits";
TMP803[4].len = 3; TMP803[4].kind = 2; TMP803[4].sons = &TMP1128[0];
NTI222052.node = &TMP803[4];
NTI222050.size = sizeof(Trunk222052*);
NTI222050.kind = 22;
NTI222050.base = (&NTI222052);
NTI222050.marker = TMP1129;
TMP803[3].kind = 1;
TMP803[3].offset = offsetof(Intset222056, head);
TMP803[3].typ = (&NTI222050);
TMP803[3].name = "head";
TMP1127[3] = &TMP803[8];
NTI222054.size = sizeof(Trunkseq222054*);
NTI222054.kind = 24;
NTI222054.base = (&NTI222050);
NTI222054.flags = 2;
NTI222054.marker = TMP1130;
TMP803[8].kind = 1;
TMP803[8].offset = offsetof(Intset222056, data);
TMP803[8].typ = (&NTI222054);
TMP803[8].name = "data";
TMP803[0].len = 4; TMP803[0].kind = 2; TMP803[0].sons = &TMP1127[0];
NTI222056.node = &TMP803[0];
}
