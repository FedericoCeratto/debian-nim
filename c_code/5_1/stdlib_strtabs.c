/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Stringtableobj140209 Stringtableobj140209;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq140207 Keyvaluepairseq140207;
typedef struct Keyvaluepair140205 Keyvaluepair140205;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Keyerror3648 Keyerror3648;
typedef struct Valueerror3646 Valueerror3646;
typedef struct Exception Exception;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Stringtableobj140209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq140207* data;
NU8 mode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Keyvaluepair140205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29639* TY29702[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29687  {
NI minlargeobj;
NI maxlargeobj;
TY29702 freesmallchunks;
Llchunk29681* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29641* freechunkslist;
Intset29614 chunkstarts;
Avlnode29685* root;
Avlnode29685* deleted;
Avlnode29685* last;
Avlnode29685* freeavlnodes;
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
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29687 region;
Gcstat49814 stat;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Valueerror3646  {
  Exception Sup;
};
struct  Keyerror3648  {
  Valueerror3646 Sup;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29618[16];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29618 bits;
};
struct  Basechunk29637  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29639  {
  Basechunk29637 Sup;
Smallchunk29639* next;
Smallchunk29639* prev;
Freecell29629* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29681  {
NI size;
NI acc;
Llchunk29681* next;
};
struct  Bigchunk29641  {
  Basechunk29637 Sup;
Bigchunk29641* next;
Bigchunk29641* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29618 bits;
};
typedef Avlnode29685* TY29692[2];
struct  Avlnode29685  {
TY29692 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct Keyvaluepairseq140207 {
  TGenericSeq Sup;
  Keyvaluepair140205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP44)(void* p, NI op);
N_NIMCALL(void, TMP48)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NI, rawget_140406)(Stringtableobj140209* t, NimStringDesc* key);
N_NIMCALL(NI, myhash_140302)(Stringtableobj140209* t, NimStringDesc* key);
N_NIMCALL(NI, hash_137827)(NimStringDesc* x);
N_NIMCALL(NI, hashignorecase_138059)(NimStringDesc* x);
N_NIMCALL(NI, hashignorestyle_137892)(NimStringDesc* x);
N_NIMCALL(NIM_BOOL, mycmp_140309)(Stringtableobj140209* t, NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, cmp_5680)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_140401)(NI h, NI maxhash);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, mustrehash_140315)(NI length, NI counter);
N_NIMCALL(void, enlarge_140835)(Stringtableobj140209* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, rawinsert_140825)(Stringtableobj140209* t, Keyvaluepairseq140207** data, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, getvalue_140927)(Stringtableobj140209* t, NU8 flags, NimStringDesc* key);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj140209* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, getordefault_140814)(Stringtableobj140209* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, getenv_125825)(NimStringDesc* key);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(void, raiseformatexception_140913)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_79810, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
STRING_LITERAL(TMP1556, "key not found: ", 15);
STRING_LITERAL(TMP1798, "", 0);
STRING_LITERAL(TMP2041, "format string: key not found: ", 30);
extern TNimType NTI3608; /* RootObj */
TNimType NTI140209; /* StringTableObj */
extern TNimType NTI104; /* int */
TNimType NTI140205; /* KeyValuePair */
extern TNimType NTI138; /* string */
TNimType NTI140207; /* KeyValuePairSeq */
TNimType NTI140203; /* StringTableMode */
TNimType NTI140211; /* StringTableRef */
extern Gcheap49818 gch_49859;
extern TNimType NTI182804; /* ref KeyError */
extern TNimType NTI3648; /* KeyError */
extern TNimType NTI23625; /* ref ValueError */
extern TNimType NTI3646; /* ValueError */
N_NIMCALL(void, TMP44)(void* p, NI op) {
	Keyvaluepairseq140207* a;
	NI LOC1;
	a = (Keyvaluepairseq140207*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP48)(void* p, NI op) {
	Stringtableobj140209* a;
	a = (Stringtableobj140209*)p;
	nimGCvisit((void*)(*a).data, op);
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47505* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	LA3: ;
}

N_NIMCALL(Stringtableobj140209*, nstnewStringTable)(NU8 mode) {
	Stringtableobj140209* result;
	result = 0;
	result = (Stringtableobj140209*) newObj((&NTI140211), sizeof(Stringtableobj140209));
	(*result).Sup.m_type = (&NTI140209);
	(*result).mode = mode;
	(*result).counter = ((NI) 0);
	if ((*result).data) nimGCunrefNoCycle((*result).data);
	(*result).data = (Keyvaluepairseq140207*) newSeqRC1((&NTI140207), ((NI) 64));
	return result;
}

N_NIMCALL(NI, myhash_140302)(Stringtableobj140209* t, NimStringDesc* key) {
	NI result;
	result = 0;
	switch ((*t).mode) {
	case ((NU8) 0):
	{
		result = hash_137827(key);
	}
	break;
	case ((NU8) 1):
	{
		result = hashignorecase_138059(key);
	}
	break;
	case ((NU8) 2):
	{
		result = hashignorestyle_137892(key);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, mycmp_140309)(Stringtableobj140209* t, NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = 0;
	switch ((*t).mode) {
	case ((NU8) 0):
	{
		NI LOC2;
		LOC2 = 0;
		LOC2 = cmp_5680(a, b);
		result = (LOC2 == ((NI) 0));
	}
	break;
	case ((NU8) 1):
	{
		NI LOC4;
		LOC4 = 0;
		LOC4 = nsuCmpIgnoreCase(a, b);
		result = (LOC4 == ((NI) 0));
	}
	break;
	case ((NU8) 2):
	{
		NI LOC6;
		LOC6 = 0;
		LOC6 = nsuCmpIgnoreStyle(a, b);
		result = (LOC6 == ((NI) 0));
	}
	break;
	}
	return result;
}

static N_INLINE(NI, nexttry_140401)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(NI, rawget_140406)(Stringtableobj140209* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = myhash_140302(t, key);
	h = (NI)(LOC1 & ((*t).data ? ((*t).data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*t).data->data[h].Field0 == 0)) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = mycmp_140309(t, (*t).data->data[h].Field0, key);
				if (!LOC6) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_140401(h, ((*t).data ? ((*t).data->Sup.len-1) : -1));
		} LA3: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj140209* t, NimStringDesc* key) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_140406(t, key);
	result = (((NI) 0) <= LOC1);
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47505* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47505* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(NimStringDesc**, nstTake)(Stringtableobj140209* t, NimStringDesc* key) {
	NimStringDesc** result;
	NI index_140432;
	result = 0;
	index_140432 = rawget_140406(t, key);
	{
		if (!(((NI) 0) <= index_140432)) goto LA3;
		result = (&(*t).data->data[index_140432].Field1);
	}
	goto LA1;
	LA3: ;
	{
		Keyerror3648* e_140603;
		NimStringDesc* LOC6;
		e_140603 = 0;
		e_140603 = (Keyerror3648*) newObj((&NTI182804), sizeof(Keyerror3648));
		(*e_140603).Sup.Sup.Sup.m_type = (&NTI3648);
		LOC6 = 0;
		LOC6 = rawNewString(key->Sup.len + 15);
appendString(LOC6, ((NimStringDesc*) &TMP1556));
appendString(LOC6, key);
		asgnRefNoCycle((void**) (&(*e_140603).Sup.Sup.message), LOC6);
		raiseException((Exception*)e_140603, "KeyError");
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, mustrehash_140315)(NI length, NI counter) {
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

N_NIMCALL(void, rawinsert_140825)(Stringtableobj140209* t, Keyvaluepairseq140207** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	LOC1 = 0;
	LOC1 = myhash_140302(t, key);
	h = (NI)(LOC1 & ((*data) ? ((*data)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*data)->data[h].Field0 == 0)) goto LA3;
			h = nexttry_140401(h, ((*data) ? ((*data)->Sup.len-1) : -1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field0; (*data)->data[h].Field0 = copyStringRC1(key);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	LOC5 = 0;
	LOC5 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(val);
	if (LOC5) nimGCunrefNoCycle(LOC5);
}

N_NIMCALL(void, enlarge_140835)(Stringtableobj140209* t) {
	Keyvaluepairseq140207* n;
	Keyvaluepairseq140207* LOC8;
	n = 0;
	n = (Keyvaluepairseq140207*) newSeq((&NTI140207), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	{
		NI i_140868;
		NI HEX3Atmp_140882;
		NI res_140885;
		i_140868 = 0;
		HEX3Atmp_140882 = 0;
		HEX3Atmp_140882 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
		res_140885 = ((NI) 0);
		{
			while (1) {
				if (!(res_140885 <= HEX3Atmp_140882)) goto LA3;
				i_140868 = res_140885;
				{
					if (!!((*t).data->data[i_140868].Field0 == 0)) goto LA6;
					rawinsert_140825(t, (&n), (*t).data->data[i_140868].Field0, (*t).data->data[i_140868].Field1);
				}
				LA6: ;
				res_140885 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).data;
	asgnRefNoCycle((void**) (&(*t).data), n);
	n = LOC8;
}

N_NIMCALL(void, nstPut)(Stringtableobj140209* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	index = rawget_140406(t, key);
	{
		NimStringDesc* LOC5;
		if (!(((NI) 0) <= index)) goto LA3;
		LOC5 = 0;
		LOC5 = (*t).data->data[index].Field1; (*t).data->data[index].Field1 = copyStringRC1(val);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC9;
			LOC9 = 0;
			LOC9 = mustrehash_140315(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC9) goto LA10;
			enlarge_140835(t);
		}
		LA10: ;
		rawinsert_140825(t, (&(*t).data), key, val);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, getordefault_140814)(Stringtableobj140209* t, NimStringDesc* key) {
	NimStringDesc* result;
	NI index;
	result = 0;
	index = rawget_140406(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = copyString((*t).data->data[index].Field1);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP1798));
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, raiseformatexception_140913)(NimStringDesc* s) {
	Valueerror3646* e;
	NimStringDesc* LOC1;
	e = 0;
	e = (Valueerror3646*) newObj((&NTI23625), sizeof(Valueerror3646));
	(*e).Sup.Sup.m_type = (&NTI3646);
	LOC1 = 0;
	LOC1 = rawNewString(s->Sup.len + 30);
appendString(LOC1, ((NimStringDesc*) &TMP2041));
appendString(LOC1, s);
	asgnRefNoCycle((void**) (&(*e).Sup.message), LOC1);
	raiseException((Exception*)e, "ValueError");
}

N_NIMCALL(NimStringDesc*, getvalue_140927)(Stringtableobj140209* t, NU8 flags, NimStringDesc* key) {
	NimStringDesc* result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsthasKey(t, key);
		if (!LOC3) goto LA4;
		result = getordefault_140814(t, key);
		goto BeforeRet;
	}
	LA4: ;
	{
		if (!((flags &(1U<<((NU)(((NU8) 0))&7U)))!=0)) goto LA8;
		result = getenv_125825(key);
	}
	goto LA6;
	LA8: ;
	{
		result = copyString(((NimStringDesc*) &TMP1798));
	}
	LA6: ;
	{
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA13;
		{
			NimStringDesc* LOC19;
			if (!((flags &(1U<<((NU)(((NU8) 2))&7U)))!=0)) goto LA17;
			LOC19 = 0;
			LOC19 = rawNewString(key->Sup.len + 1);
appendChar(LOC19, 36);
appendString(LOC19, key);
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			if (!!(((flags &(1U<<((NU)(((NU8) 1))&7U)))!=0))) goto LA21;
			raiseformatexception_140913(key);
		}
		goto LA15;
		LA21: ;
		LA15: ;
	}
	LA13: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj140209* t, NU8 flags) {
	NimStringDesc* result;
	NI i;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP1798));
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (f ? f->Sup.len : 0))) goto LA2;
			{
				if (!((NU8)(f->data[i]) == (NU8)(36))) goto LA5;
				switch (((NU8)(f->data[(NI)(i + ((NI) 1))]))) {
				case 36:
				{
					result = addChar(result, 36);
					i += ((NI) 2);
				}
				break;
				case 123:
				{
					NI j;
					NimStringDesc* LOC13;
					NimStringDesc* LOC14;
					j = (NI)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL LOC11;
							LOC11 = 0;
							LOC11 = (j < (f ? f->Sup.len : 0));
							if (!(LOC11)) goto LA12;
							LOC11 = !(((NU8)(f->data[j]) == (NU8)(125)));
							LA12: ;
							if (!LOC11) goto LA10;
							j += ((NI) 1);
						} LA10: ;
					}
					LOC13 = 0;
					LOC13 = copyStrLast(f, (NI)(i + ((NI) 2)), (NI)(j - ((NI) 1)));
					LOC14 = 0;
					LOC14 = getvalue_140927(t, flags, LOC13);
					result = resizeString(result, LOC14->Sup.len + 0);
appendString(result, LOC14);
					i = (NI)(j + ((NI) 1));
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NI j;
					NimStringDesc* LOC20;
					NimStringDesc* LOC21;
					j = (NI)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL LOC18;
							LOC18 = 0;
							LOC18 = (j < (f ? f->Sup.len : 0));
							if (!(LOC18)) goto LA19;
							LOC18 = (((NU8)(f->data[j])) >= ((NU8)(97)) && ((NU8)(f->data[j])) <= ((NU8)(122)) || ((NU8)(f->data[j])) >= ((NU8)(65)) && ((NU8)(f->data[j])) <= ((NU8)(90)) || ((NU8)(f->data[j])) >= ((NU8)(48)) && ((NU8)(f->data[j])) <= ((NU8)(57)) || ((NU8)(f->data[j])) == ((NU8)(95)) || ((NU8)(f->data[j])) >= ((NU8)(128)) && ((NU8)(f->data[j])) <= ((NU8)(255)));
							LA19: ;
							if (!LOC18) goto LA17;
							j += ((NI) 1);
						} LA17: ;
					}
					LOC20 = 0;
					LOC20 = copyStrLast(f, (NI)(i + ((NI) 1)), (NI)(j - ((NI) 1)));
					LOC21 = 0;
					LOC21 = getvalue_140927(t, flags, LOC20);
					result = resizeString(result, LOC21->Sup.len + 0);
appendString(result, LOC21);
					i = j;
				}
				break;
				default:
				{
					result = addChar(result, f->data[i]);
					i += ((NI) 1);
				}
				break;
				}
			}
			goto LA3;
			LA5: ;
			{
				result = addChar(result, f->data[i]);
				i += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NI, nstlen)(Stringtableobj140209* t) {
	NI result;
	result = 0;
	result = (*t).counter;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit000)(void) {
static TNimNode* TMP42[3];
static TNimNode* TMP43[2];
static TNimNode* TMP45[3];
NI TMP47;
static char* NIM_CONST TMP46[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TMP25[11];
NTI140209.size = sizeof(Stringtableobj140209);
NTI140209.kind = 17;
NTI140209.base = (&NTI3608);
TMP42[0] = &TMP25[1];
TMP25[1].kind = 1;
TMP25[1].offset = offsetof(Stringtableobj140209, counter);
TMP25[1].typ = (&NTI104);
TMP25[1].name = "counter";
TMP42[1] = &TMP25[2];
NTI140205.size = sizeof(Keyvaluepair140205);
NTI140205.kind = 18;
NTI140205.base = 0;
NTI140205.flags = 2;
TMP43[0] = &TMP25[4];
TMP25[4].kind = 1;
TMP25[4].offset = offsetof(Keyvaluepair140205, Field0);
TMP25[4].typ = (&NTI138);
TMP25[4].name = "Field0";
TMP43[1] = &TMP25[5];
TMP25[5].kind = 1;
TMP25[5].offset = offsetof(Keyvaluepair140205, Field1);
TMP25[5].typ = (&NTI138);
TMP25[5].name = "Field1";
TMP25[3].len = 2; TMP25[3].kind = 2; TMP25[3].sons = &TMP43[0];
NTI140205.node = &TMP25[3];
NTI140207.size = sizeof(Keyvaluepairseq140207*);
NTI140207.kind = 24;
NTI140207.base = (&NTI140205);
NTI140207.flags = 2;
NTI140207.marker = TMP44;
TMP25[2].kind = 1;
TMP25[2].offset = offsetof(Stringtableobj140209, data);
TMP25[2].typ = (&NTI140207);
TMP25[2].name = "data";
TMP42[2] = &TMP25[6];
NTI140203.size = sizeof(NU8);
NTI140203.kind = 14;
NTI140203.base = 0;
NTI140203.flags = 3;
for (TMP47 = 0; TMP47 < 3; TMP47++) {
TMP25[TMP47+7].kind = 1;
TMP25[TMP47+7].offset = TMP47;
TMP25[TMP47+7].name = TMP46[TMP47];
TMP45[TMP47] = &TMP25[TMP47+7];
}
TMP25[10].len = 3; TMP25[10].kind = 2; TMP25[10].sons = &TMP45[0];
NTI140203.node = &TMP25[10];
TMP25[6].kind = 1;
TMP25[6].offset = offsetof(Stringtableobj140209, mode);
TMP25[6].typ = (&NTI140203);
TMP25[6].name = "mode";
TMP25[0].len = 3; TMP25[0].kind = 2; TMP25[0].sons = &TMP42[0];
NTI140209.node = &TMP25[0];
NTI140211.size = sizeof(Stringtableobj140209*);
NTI140211.kind = 22;
NTI140211.base = (&NTI140209);
NTI140211.marker = TMP48;
}

