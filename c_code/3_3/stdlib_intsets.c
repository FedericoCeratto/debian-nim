/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Intset210035 Intset210035;
typedef struct Trunk210031 Trunk210031;
typedef struct Trunkseq210033 Trunkseq210033;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47704 Cell47704;
typedef struct Cellset47716 Cellset47716;
typedef struct Gcheap50018 Gcheap50018;
typedef struct Gcstack50016 Gcstack50016;
typedef struct Cellseq47720 Cellseq47720;
typedef struct Pagedesc47712 Pagedesc47712;
typedef struct Memregion29888 Memregion29888;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29882 Llchunk29882;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29886 Avlnode29886;
typedef struct Gcstat50014 Gcstat50014;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
struct  Intset210035  {
NI counter;
NI max;
Trunk210031* head;
Trunkseq210033* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NI TY29819[8];
struct  Trunk210031  {
Trunk210031* next;
NI key;
TY29819 bits;
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
struct  Cell47704  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47720  {
NI len;
NI cap;
Cell47704** d;
};
struct  Cellset47716  {
NI counter;
NI max;
Pagedesc47712* head;
Pagedesc47712** data;
};
typedef Smallchunk29840* TY29903[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29888  {
NI minlargeobj;
NI maxlargeobj;
TY29903 freesmallchunks;
Llchunk29882* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29886* root;
Avlnode29886* deleted;
Avlnode29886* last;
Avlnode29886* freeavlnodes;
};
struct  Gcstat50014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap50018  {
Gcstack50016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47720 zct;
Cellseq47720 decstack;
Cellset47716 cycleroots;
Cellseq47720 tempstack;
NI recgclock;
Memregion29888 region;
Gcstat50014 stat;
};
struct  Gcstack50016  {
Gcstack50016* prev;
Gcstack50016* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Pagedesc47712  {
Pagedesc47712* next;
NI key;
TY29819 bits;
};
struct  Basechunk29838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29840  {
  Basechunk29838 Sup;
Smallchunk29840* next;
Smallchunk29840* prev;
Freecell29830* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29882  {
NI size;
NI acc;
Llchunk29882* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29886* TY29893[2];
struct  Avlnode29886  {
TY29893 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct Trunkseq210033 {
  TGenericSeq Sup;
  Trunk210031* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1122)(void* p, NI op);
N_NIMCALL(void, TMP1123)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Trunk210031*, intsetput_210661)(Intset210035* t, NI key);
static N_INLINE(NI, nexttry_210201)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_210048)(NI length, NI counter);
N_NIMCALL(void, intsetenlarge_210602)(Intset210035* t);
N_NIMCALL(void, intsetrawinsert_210225)(Intset210035* t, Trunkseq210033** data, Trunk210031* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_54019)(Cell47704* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51658)(Cell47704* c);
static N_INLINE(void, rtladdcycleroot_52420)(Cell47704* c);
N_NOINLINE(void, incl_48447)(Cellset47716* s, Cell47704* cell);
static N_INLINE(Cell47704*, usrtocell_51640)(void* usr);
static N_INLINE(void, decref_53601)(Cell47704* c);
static N_INLINE(void, rtladdzct_53201)(Cell47704* c);
N_NOINLINE(void, addzct_51617)(Cellseq47720* s, Cell47704* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Trunk210031*, intsetget_210206)(Intset210035* t, NI key);
N_NIMCALL(void, incl_210832)(Intset210035* s, NI key);
TNimType NTI210031; /* Trunk */
extern TNimType NTI104; /* int */
extern TNimType NTI29819; /* array[0..7, int] */
TNimType NTI210029; /* PTrunk */
TNimType NTI210033; /* TrunkSeq */
extern Gcheap50018 gch_50059;
TNimType NTI210035; /* IntSet */
N_NIMCALL(void, TMP1122)(void* p, NI op) {
	Trunk210031* a;
	NI LOC1;
	a = (Trunk210031*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
N_NIMCALL(void, TMP1123)(void* p, NI op) {
	Trunkseq210033* a;
	NI LOC1;
	a = (Trunkseq210033*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_210885)(Intset210035* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (Trunkseq210033*) newSeq((&NTI210033), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nexttry_210201)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_210048)(NI length, NI counter) {
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

static N_INLINE(NIM_BOOL, canbecycleroot_51658)(Cell47704* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52420)(Cell47704* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48447((&gch_50059.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_54019)(Cell47704* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51658(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52420(c);
	}
	LA4: ;
}

static N_INLINE(Cell47704*, usrtocell_51640)(void* usr) {
	Cell47704* result;
	result = 0;
	result = ((Cell47704*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47704))))));
	return result;
}

static N_INLINE(void, rtladdzct_53201)(Cell47704* c) {
	addzct_51617((&gch_50059.zct), c);
}

static N_INLINE(void, decref_53601)(Cell47704* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51658(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52420(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47704* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51640(src);
		incref_54019(LOC5);
	}
	LA3: ;
	{
		Cell47704* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51640((*dest));
		decref_53601(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, intsetrawinsert_210225)(Intset210035* t, Trunkseq210033** data, Trunk210031* desc) {
	NI h;
	h = (NI)((*desc).key & (*t).max);
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nexttry_210201(h, (*t).max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h]), desc);
}

N_NIMCALL(void, intsetenlarge_210602)(Intset210035* t) {
	Trunkseq210033* n;
	NI oldmax;
	Trunkseq210033* LOC8;
	n = 0;
	oldmax = (*t).max;
	(*t).max = (NI)((NI)((NI)((*t).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (Trunkseq210033*) newSeq((&NTI210033), ((NI) ((NI)((*t).max + ((NI) 1)))));
	{
		NI i_210629;
		NI res_210657;
		i_210629 = 0;
		res_210657 = ((NI) 0);
		{
			while (1) {
				if (!(res_210657 <= oldmax)) goto LA3;
				i_210629 = res_210657;
				{
					if (!!(((*t).data->data[i_210629] == NIM_NIL))) goto LA6;
					intsetrawinsert_210225((&(*t)), (&n), (*t).data->data[i_210629]);
				}
				LA6: ;
				res_210657 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC8;
}

N_NIMCALL(Trunk210031*, intsetput_210661)(Intset210035* t, NI key) {
	Trunk210031* result;
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
			h = nexttry_210201(h, (*t).max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = mustrehash_210048((NI)((*t).max + ((NI) 1)), (*t).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_210602(t);
	}
	LA10: ;
	(*t).counter += ((NI) 1);
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nexttry_210201(h, (*t).max);
		} LA13: ;
	}
	result = (Trunk210031*) newObj((&NTI210029), sizeof(Trunk210031));
	asgnRef((void**) (&(*result).next), (*t).head);
	(*result).key = key;
	unsureAsgnRef((void**) (&(*t).head), result);
	asgnRef((void**) (&(*t).data->data[h]), result);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, incl_210832)(Intset210035* s, NI key) {
	Trunk210031* t;
	NI u;
	t = intsetput_210661(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
}

N_NIMCALL(Trunk210031*, intsetget_210206)(Intset210035* t, NI key) {
	Trunk210031* result;
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
			h = nexttry_210201(h, (*t).max);
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsorincl_210862)(Intset210035* s, NI key) {
	NIM_BOOL result;
	Trunk210031* t;
	result = 0;
	t = intsetget_210206((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
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
		incl_210832(s, key);
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_210811)(Intset210035* s, NI key) {
	NIM_BOOL result;
	Trunk210031* t;
	result = 0;
	t = intsetget_210206(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
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

N_NIMCALL(void, assign_210910)(Intset210035* dest, Intset210035* src) {
	Trunk210031* it;
	(*dest).counter = (*src).counter;
	(*dest).max = (*src).max;
	unsureAsgnRef((void**) (&(*dest).data), (Trunkseq210033*) newSeq((&NTI210033), ((NI) (((*src).data ? (*src).data->Sup.len : 0)))));
	it = (*src).head;
	{
		while (1) {
			NI h;
			Trunk210031* n;
			if (!!((it == NIM_NIL))) goto LA2;
			h = (NI)((*it).key & (*dest).max);
			{
				while (1) {
					if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA4;
					h = nexttry_210201(h, (*dest).max);
				} LA4: ;
			}
			n = 0;
			n = (Trunk210031*) newObj((&NTI210029), sizeof(Trunk210031));
			asgnRef((void**) (&(*n).next), (*dest).head);
			(*n).key = (*it).key;
			memcpy((void*)(*n).bits, (NIM_CONST void*)(*it).bits, sizeof(TY29819));
			unsureAsgnRef((void**) (&(*dest).head), n);
			asgnRef((void**) (&(*dest).data->data[h]), n);
			it = (*it).next;
		} LA2: ;
	}
}

N_NIMCALL(void, excl_210841)(Intset210035* s, NI key) {
	Trunk210031* t;
	t = intsetget_210206((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
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
static TNimNode* TMP1121[3];
static TNimNode* TMP1165[4];
static TNimNode TMP805[9];
NTI210031.size = sizeof(Trunk210031);
NTI210031.kind = 18;
NTI210031.base = 0;
TMP1121[0] = &TMP805[1];
TMP805[1].kind = 1;
TMP805[1].offset = offsetof(Trunk210031, next);
TMP805[1].typ = (&NTI210029);
TMP805[1].name = "next";
TMP1121[1] = &TMP805[2];
TMP805[2].kind = 1;
TMP805[2].offset = offsetof(Trunk210031, key);
TMP805[2].typ = (&NTI104);
TMP805[2].name = "key";
TMP1121[2] = &TMP805[3];
TMP805[3].kind = 1;
TMP805[3].offset = offsetof(Trunk210031, bits);
TMP805[3].typ = (&NTI29819);
TMP805[3].name = "bits";
TMP805[0].len = 3; TMP805[0].kind = 2; TMP805[0].sons = &TMP1121[0];
NTI210031.node = &TMP805[0];
NTI210029.size = sizeof(Trunk210031*);
NTI210029.kind = 22;
NTI210029.base = (&NTI210031);
NTI210029.marker = TMP1122;
NTI210033.size = sizeof(Trunkseq210033*);
NTI210033.kind = 24;
NTI210033.base = (&NTI210029);
NTI210033.flags = 2;
NTI210033.marker = TMP1123;
NTI210035.size = sizeof(Intset210035);
NTI210035.kind = 18;
NTI210035.base = 0;
NTI210035.flags = 2;
TMP1165[0] = &TMP805[5];
TMP805[5].kind = 1;
TMP805[5].offset = offsetof(Intset210035, counter);
TMP805[5].typ = (&NTI104);
TMP805[5].name = "counter";
TMP1165[1] = &TMP805[6];
TMP805[6].kind = 1;
TMP805[6].offset = offsetof(Intset210035, max);
TMP805[6].typ = (&NTI104);
TMP805[6].name = "max";
TMP1165[2] = &TMP805[7];
TMP805[7].kind = 1;
TMP805[7].offset = offsetof(Intset210035, head);
TMP805[7].typ = (&NTI210029);
TMP805[7].name = "head";
TMP1165[3] = &TMP805[8];
TMP805[8].kind = 1;
TMP805[8].offset = offsetof(Intset210035, data);
TMP805[8].typ = (&NTI210033);
TMP805[8].name = "data";
TMP805[4].len = 4; TMP805[4].kind = 2; TMP805[4].sons = &TMP1165[0];
NTI210035.node = &TMP805[4];
}

