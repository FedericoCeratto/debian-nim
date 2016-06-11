/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Stringtableobj146209 Stringtableobj146209;
typedef struct TNimObject TNimObject;
typedef struct Keyvaluepairseq146207 Keyvaluepairseq146207;
typedef struct Keyvaluepair146205 Keyvaluepair146205;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct Keyerror3448 Keyerror3448;
typedef struct Valueerror3446 Valueerror3446;
typedef struct Exception Exception;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
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
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Stringtablemode146203;
struct  Stringtableobj146209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq146207* data;
Stringtablemode146203 mode;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Keyvaluepair146205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Valueerror3446  {
  Exception Sup;
};
struct  Keyerror3448  {
  Valueerror3446 Sup;
};
typedef NU8 Formatflag146300Set;
typedef NU8 Formatflag146300;
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
typedef NI TY30018[16];
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
struct Keyvaluepairseq146207 {
  TGenericSeq Sup;
  Keyvaluepair146205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP57)(void* p, NI op);
N_NIMCALL(void, TMP61)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ0, NI len0);
N_NIMCALL(NI, rawget_146406_603679043)(Stringtableobj146209* t0, NimStringDesc* key0);
N_NIMCALL(NI, myhash_146307_603679043)(Stringtableobj146209* t0, NimStringDesc* key0);
N_NIMCALL(NI, hash_143827_213663784)(NimStringDesc* x0);
N_NIMCALL(NI, hashignorecase_144059_213663784)(NimStringDesc* x0);
N_NIMCALL(NI, hashignorestyle_143892_213663784)(NimStringDesc* x0);
N_NIMCALL(NIM_BOOL, mycmp_146314_603679043)(Stringtableobj146209* t0, NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NI, cmp_5483_1689653243)(NimStringDesc* x0, NimStringDesc* y0);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NI, nexttry_146401_603679043)(NI h0, NI maxhash0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
N_NIMCALL(NIM_BOOL, mustrehash_146320_603679043)(NI length0, NI counter0);
N_NIMCALL(void, enlarge_146835_603679043)(Stringtableobj146209* t0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, rawinsert_146825_603679043)(Stringtableobj146209* t0, Keyvaluepairseq146207** data0, NimStringDesc* key0, NimStringDesc* val0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, getvalue_146927_603679043)(Stringtableobj146209* t0, Formatflag146300Set flags0, NimStringDesc* key0);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj146209* t0, NimStringDesc* key0);
N_NIMCALL(NimStringDesc*, getordefault_146814_603679043)(Stringtableobj146209* t0, NimStringDesc* key0);
N_NIMCALL(NimStringDesc*, getenv_132025_2125978480)(NimStringDesc* key0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(void, raiseformatexception_146913_603679043)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79610_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
STRING_LITERAL(TMP1712, "key not found: ", 15);
STRING_LITERAL(TMP1961, "", 0);
STRING_LITERAL(TMP2206, "format string: key not found: ", 30);
extern TNimType NTI3408; /* RootObj */
TNimType NTI146209; /* StringTableObj */
extern TNimType NTI104; /* int */
TNimType NTI146205; /* KeyValuePair */
extern TNimType NTI138; /* string */
TNimType NTI146207; /* KeyValuePairSeq */
TNimType NTI146203; /* StringTableMode */
TNimType NTI146211; /* StringTableRef */
extern Gcheap50418 gch_50458_1689653243;
extern TNimType NTI185804; /* ref KeyError */
extern TNimType NTI3448; /* KeyError */
extern TNimType NTI23825; /* ref ValueError */
extern TNimType NTI3446; /* ValueError */
N_NIMCALL(void, TMP57)(void* p, NI op) {
	Keyvaluepairseq146207* a;
	NI LOC1;
	a = (Keyvaluepairseq146207*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP61)(void* p, NI op) {
	Stringtableobj146209* a;
	a = (Stringtableobj146209*)p;
	nimGCvisit((void*)(*a).data, op);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47905* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Stringtableobj146209*, nstnewStringTable)(Stringtablemode146203 mode0) {
	Stringtableobj146209* result0;
	result0 = (Stringtableobj146209*)0;
	result0 = (Stringtableobj146209*) newObj((&NTI146211), sizeof(Stringtableobj146209));
	(*result0).Sup.m_type = (&NTI146209);
	(*result0).mode = mode0;
	(*result0).counter = ((NI) 0);
	if ((*result0).data) nimGCunrefNoCycle((*result0).data);
	(*result0).data = (Keyvaluepairseq146207*) newSeqRC1((&NTI146207), ((NI) 64));
	return result0;
}

N_NIMCALL(NI, myhash_146307_603679043)(Stringtableobj146209* t0, NimStringDesc* key0) {
	NI result0;
	result0 = (NI)0;
	switch ((*t0).mode) {
	case ((Stringtablemode146203) 0):
	{
		result0 = hash_143827_213663784(key0);
	}
	break;
	case ((Stringtablemode146203) 1):
	{
		result0 = hashignorecase_144059_213663784(key0);
	}
	break;
	case ((Stringtablemode146203) 2):
	{
		result0 = hashignorestyle_143892_213663784(key0);
	}
	break;
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, mycmp_146314_603679043)(Stringtableobj146209* t0, NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	switch ((*t0).mode) {
	case ((Stringtablemode146203) 0):
	{
		NI LOC2;
		LOC2 = (NI)0;
		LOC2 = cmp_5483_1689653243(a0, b0);
		result0 = (LOC2 == ((NI) 0));
	}
	break;
	case ((Stringtablemode146203) 1):
	{
		NI LOC4;
		LOC4 = (NI)0;
		LOC4 = nsuCmpIgnoreCase(a0, b0);
		result0 = (LOC4 == ((NI) 0));
	}
	break;
	case ((Stringtablemode146203) 2):
	{
		NI LOC6;
		LOC6 = (NI)0;
		LOC6 = nsuCmpIgnoreStyle(a0, b0);
		result0 = (LOC6 == ((NI) 0));
	}
	break;
	}
	return result0;
}

static N_INLINE(NI, nexttry_146401_603679043)(NI h0, NI maxhash0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NI)((NI)(((NI) 5) * h0) + ((NI) 1)) & maxhash0);
	return result0;
}

N_NIMCALL(NI, rawget_146406_603679043)(Stringtableobj146209* t0, NimStringDesc* key0) {
	NI result0;
	NI h0;
	NI LOC1;
{	result0 = (NI)0;
	LOC1 = (NI)0;
	LOC1 = myhash_146307_603679043(t0, key0);
	h0 = (NI)(LOC1 & ((*t0).data ? ((*t0).data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*t0).data->data[h0].Field0 == 0)) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = (NIM_BOOL)0;
				LOC6 = mycmp_146314_603679043(t0, (*t0).data->data[h0].Field0, key0);
				if (!LOC6) goto LA7;
				result0 = h0;
				goto BeforeRet;
			}
			LA7: ;
			h0 = nexttry_146401_603679043(h0, ((*t0).data ? ((*t0).data->Sup.len-1) : -1));
		} LA3: ;
	}
	result0 = ((NI) -1);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj146209* t0, NimStringDesc* key0) {
	NIM_BOOL result0;
	NI LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NI)0;
	LOC1 = rawget_146406_603679043(t0, key0);
	result0 = (((NI) 0) <= LOC1);
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47905* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47905* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(NimStringDesc**, nstTake)(Stringtableobj146209* t0, NimStringDesc* key0) {
	NimStringDesc** result0;
	NI index_146432_603679043;
	result0 = (NimStringDesc**)0;
	index_146432_603679043 = rawget_146406_603679043(t0, key0);
	{
		if (!(((NI) 0) <= index_146432_603679043)) goto LA3;
		result0 = (&(*t0).data->data[index_146432_603679043].Field1);
	}
	goto LA1;
	LA3: ;
	{
		Keyerror3448* e_146603_603679043;
		NimStringDesc* LOC6;
		e_146603_603679043 = (Keyerror3448*)0;
		e_146603_603679043 = (Keyerror3448*) newObj((&NTI185804), sizeof(Keyerror3448));
		(*e_146603_603679043).Sup.Sup.Sup.m_type = (&NTI3448);
		LOC6 = (NimStringDesc*)0;
		LOC6 = rawNewString(key0->Sup.len + 15);
appendString(LOC6, ((NimStringDesc*) &TMP1712));
appendString(LOC6, key0);
		asgnRefNoCycle((void**) (&(*e_146603_603679043).Sup.Sup.message), LOC6);
		raiseException((Exception*)e_146603_603679043, "KeyError");
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, mustrehash_146320_603679043)(NI length0, NI counter0) {
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

N_NIMCALL(void, rawinsert_146825_603679043)(Stringtableobj146209* t0, Keyvaluepairseq146207** data0, NimStringDesc* key0, NimStringDesc* val0) {
	NI h0;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	LOC1 = (NI)0;
	LOC1 = myhash_146307_603679043(t0, key0);
	h0 = (NI)(LOC1 & ((*data0) ? ((*data0)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*data0)->data[h0].Field0 == 0)) goto LA3;
			h0 = nexttry_146401_603679043(h0, ((*data0) ? ((*data0)->Sup.len-1) : -1));
		} LA3: ;
	}
	LOC4 = (NimStringDesc*)0;
	LOC4 = (*data0)->data[h0].Field0; (*data0)->data[h0].Field0 = copyStringRC1(key0);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	LOC5 = (NimStringDesc*)0;
	LOC5 = (*data0)->data[h0].Field1; (*data0)->data[h0].Field1 = copyStringRC1(val0);
	if (LOC5) nimGCunrefNoCycle(LOC5);
}

N_NIMCALL(void, enlarge_146835_603679043)(Stringtableobj146209* t0) {
	Keyvaluepairseq146207* n0;
	Keyvaluepairseq146207* LOC8;
	n0 = (Keyvaluepairseq146207*)0;
	n0 = (Keyvaluepairseq146207*) newSeq((&NTI146207), ((NI) ((NI)(((*t0).data ? (*t0).data->Sup.len : 0) * ((NI) 2)))));
	{
		NI i_146868_603679043;
		NI HEX3Atmp_146882_603679043;
		NI res_146885_603679043;
		i_146868_603679043 = (NI)0;
		HEX3Atmp_146882_603679043 = (NI)0;
		HEX3Atmp_146882_603679043 = ((*t0).data ? ((*t0).data->Sup.len-1) : -1);
		res_146885_603679043 = ((NI) 0);
		{
			while (1) {
				if (!(res_146885_603679043 <= HEX3Atmp_146882_603679043)) goto LA3;
				i_146868_603679043 = res_146885_603679043;
				{
					if (!!((*t0).data->data[i_146868_603679043].Field0 == 0)) goto LA6;
					rawinsert_146825_603679043(t0, (&n0), (*t0).data->data[i_146868_603679043].Field0, (*t0).data->data[i_146868_603679043].Field1);
				}
				LA6: ;
				res_146885_603679043 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = (Keyvaluepairseq146207*)0;
	LOC8 = (*t0).data;
	asgnRefNoCycle((void**) (&(*t0).data), n0);
	n0 = LOC8;
}

N_NIMCALL(void, nstPut)(Stringtableobj146209* t0, NimStringDesc* key0, NimStringDesc* val0) {
	NI index0;
	index0 = rawget_146406_603679043(t0, key0);
	{
		NimStringDesc* LOC5;
		if (!(((NI) 0) <= index0)) goto LA3;
		LOC5 = (NimStringDesc*)0;
		LOC5 = (*t0).data->data[index0].Field1; (*t0).data->data[index0].Field1 = copyStringRC1(val0);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC9;
			LOC9 = (NIM_BOOL)0;
			LOC9 = mustrehash_146320_603679043(((*t0).data ? (*t0).data->Sup.len : 0), (*t0).counter);
			if (!LOC9) goto LA10;
			enlarge_146835_603679043(t0);
		}
		LA10: ;
		rawinsert_146825_603679043(t0, (&(*t0).data), key0, val0);
		(*t0).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, getordefault_146814_603679043)(Stringtableobj146209* t0, NimStringDesc* key0) {
	NimStringDesc* result0;
	NI index0;
	result0 = (NimStringDesc*)0;
	index0 = rawget_146406_603679043(t0, key0);
	{
		if (!(((NI) 0) <= index0)) goto LA3;
		result0 = copyString((*t0).data->data[index0].Field1);
	}
	goto LA1;
	LA3: ;
	{
		result0 = copyString(((NimStringDesc*) &TMP1961));
	}
	LA1: ;
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, raiseformatexception_146913_603679043)(NimStringDesc* s0) {
	Valueerror3446* e0;
	NimStringDesc* LOC1;
	e0 = (Valueerror3446*)0;
	e0 = (Valueerror3446*) newObj((&NTI23825), sizeof(Valueerror3446));
	(*e0).Sup.Sup.m_type = (&NTI3446);
	LOC1 = (NimStringDesc*)0;
	LOC1 = rawNewString(s0->Sup.len + 30);
appendString(LOC1, ((NimStringDesc*) &TMP2206));
appendString(LOC1, s0);
	asgnRefNoCycle((void**) (&(*e0).Sup.message), LOC1);
	raiseException((Exception*)e0, "ValueError");
}

N_NIMCALL(NimStringDesc*, getvalue_146927_603679043)(Stringtableobj146209* t0, Formatflag146300Set flags0, NimStringDesc* key0) {
	NimStringDesc* result0;
{	result0 = (NimStringDesc*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = nsthasKey(t0, key0);
		if (!LOC3) goto LA4;
		result0 = getordefault_146814_603679043(t0, key0);
		goto BeforeRet;
	}
	LA4: ;
	{
		if (!((flags0 &(1U<<((NU)(((Formatflag146300) 0))&7U)))!=0)) goto LA8;
		result0 = getenv_132025_2125978480(key0);
	}
	goto LA6;
	LA8: ;
	{
		result0 = copyString(((NimStringDesc*) &TMP1961));
	}
	LA6: ;
	{
		if (!((result0 ? result0->Sup.len : 0) == ((NI) 0))) goto LA13;
		{
			NimStringDesc* LOC19;
			if (!((flags0 &(1U<<((NU)(((Formatflag146300) 2))&7U)))!=0)) goto LA17;
			LOC19 = (NimStringDesc*)0;
			LOC19 = rawNewString(key0->Sup.len + 1);
appendChar(LOC19, 36);
appendString(LOC19, key0);
			result0 = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			if (!!(((flags0 &(1U<<((NU)(((Formatflag146300) 1))&7U)))!=0))) goto LA21;
			raiseformatexception_146913_603679043(key0);
		}
		goto LA15;
		LA21: ;
		LA15: ;
	}
	LA13: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f0, Stringtableobj146209* t0, Formatflag146300Set flags0) {
	NimStringDesc* result0;
	NI i0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &TMP1961));
	i0 = ((NI) 0);
	{
		while (1) {
			if (!(i0 < (f0 ? f0->Sup.len : 0))) goto LA2;
			{
				if (!((NU8)(f0->data[i0]) == (NU8)(36))) goto LA5;
				switch (((NU8)(f0->data[(NI)(i0 + ((NI) 1))]))) {
				case 36:
				{
					result0 = addChar(result0, 36);
					i0 += ((NI) 2);
				}
				break;
				case 123:
				{
					NI j0;
					NimStringDesc* LOC13;
					NimStringDesc* LOC14;
					j0 = (NI)(i0 + ((NI) 1));
					{
						while (1) {
							NIM_BOOL LOC11;
							LOC11 = (NIM_BOOL)0;
							LOC11 = (j0 < (f0 ? f0->Sup.len : 0));
							if (!(LOC11)) goto LA12;
							LOC11 = !(((NU8)(f0->data[j0]) == (NU8)(125)));
							LA12: ;
							if (!LOC11) goto LA10;
							j0 += ((NI) 1);
						} LA10: ;
					}
					LOC13 = (NimStringDesc*)0;
					LOC13 = copyStrLast(f0, (NI)(i0 + ((NI) 2)), (NI)(j0 - ((NI) 1)));
					LOC14 = (NimStringDesc*)0;
					LOC14 = getvalue_146927_603679043(t0, flags0, LOC13);
					result0 = resizeString(result0, LOC14->Sup.len + 0);
appendString(result0, LOC14);
					i0 = (NI)(j0 + ((NI) 1));
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NI j0;
					NimStringDesc* LOC20;
					NimStringDesc* LOC21;
					j0 = (NI)(i0 + ((NI) 1));
					{
						while (1) {
							NIM_BOOL LOC18;
							LOC18 = (NIM_BOOL)0;
							LOC18 = (j0 < (f0 ? f0->Sup.len : 0));
							if (!(LOC18)) goto LA19;
							LOC18 = (((NU8)(f0->data[j0])) >= ((NU8)(97)) && ((NU8)(f0->data[j0])) <= ((NU8)(122)) || ((NU8)(f0->data[j0])) >= ((NU8)(65)) && ((NU8)(f0->data[j0])) <= ((NU8)(90)) || ((NU8)(f0->data[j0])) >= ((NU8)(48)) && ((NU8)(f0->data[j0])) <= ((NU8)(57)) || ((NU8)(f0->data[j0])) == ((NU8)(95)) || ((NU8)(f0->data[j0])) >= ((NU8)(128)) && ((NU8)(f0->data[j0])) <= ((NU8)(255)));
							LA19: ;
							if (!LOC18) goto LA17;
							j0 += ((NI) 1);
						} LA17: ;
					}
					LOC20 = (NimStringDesc*)0;
					LOC20 = copyStrLast(f0, (NI)(i0 + ((NI) 1)), (NI)(j0 - ((NI) 1)));
					LOC21 = (NimStringDesc*)0;
					LOC21 = getvalue_146927_603679043(t0, flags0, LOC20);
					result0 = resizeString(result0, LOC21->Sup.len + 0);
appendString(result0, LOC21);
					i0 = j0;
				}
				break;
				default:
				{
					result0 = addChar(result0, f0->data[i0]);
					i0 += ((NI) 1);
				}
				break;
				}
			}
			goto LA3;
			LA5: ;
			{
				result0 = addChar(result0, f0->data[i0]);
				i0 += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	return result0;
}

N_NIMCALL(NI, nstlen)(Stringtableobj146209* t0) {
	NI result0;
	result0 = (NI)0;
	result0 = (*t0).counter;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit000)(void) {
static TNimNode* TMP55[3];
static TNimNode* TMP56[2];
static TNimNode* TMP58[3];
NI TMP60;
static char* NIM_CONST TMP59[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TMP31[11];
NTI146209.size = sizeof(Stringtableobj146209);
NTI146209.kind = 17;
NTI146209.base = (&NTI3408);
TMP55[0] = &TMP31[1];
TMP31[1].kind = 1;
TMP31[1].offset = offsetof(Stringtableobj146209, counter);
TMP31[1].typ = (&NTI104);
TMP31[1].name = "counter";
TMP55[1] = &TMP31[2];
NTI146205.size = sizeof(Keyvaluepair146205);
NTI146205.kind = 18;
NTI146205.base = 0;
NTI146205.flags = 2;
TMP56[0] = &TMP31[4];
TMP31[4].kind = 1;
TMP31[4].offset = offsetof(Keyvaluepair146205, Field0);
TMP31[4].typ = (&NTI138);
TMP31[4].name = "Field0";
TMP56[1] = &TMP31[5];
TMP31[5].kind = 1;
TMP31[5].offset = offsetof(Keyvaluepair146205, Field1);
TMP31[5].typ = (&NTI138);
TMP31[5].name = "Field1";
TMP31[3].len = 2; TMP31[3].kind = 2; TMP31[3].sons = &TMP56[0];
NTI146205.node = &TMP31[3];
NTI146207.size = sizeof(Keyvaluepairseq146207*);
NTI146207.kind = 24;
NTI146207.base = (&NTI146205);
NTI146207.flags = 2;
NTI146207.marker = TMP57;
TMP31[2].kind = 1;
TMP31[2].offset = offsetof(Stringtableobj146209, data);
TMP31[2].typ = (&NTI146207);
TMP31[2].name = "data";
TMP55[2] = &TMP31[6];
NTI146203.size = sizeof(Stringtablemode146203);
NTI146203.kind = 14;
NTI146203.base = 0;
NTI146203.flags = 3;
for (TMP60 = 0; TMP60 < 3; TMP60++) {
TMP31[TMP60+7].kind = 1;
TMP31[TMP60+7].offset = TMP60;
TMP31[TMP60+7].name = TMP59[TMP60];
TMP58[TMP60] = &TMP31[TMP60+7];
}
TMP31[10].len = 3; TMP31[10].kind = 2; TMP31[10].sons = &TMP58[0];
NTI146203.node = &TMP31[10];
TMP31[6].kind = 1;
TMP31[6].offset = offsetof(Stringtableobj146209, mode);
TMP31[6].typ = (&NTI146203);
TMP31[6].name = "mode";
TMP31[0].len = 3; TMP31[0].kind = 2; TMP31[0].sons = &TMP55[0];
NTI146209.node = &TMP31[0];
NTI146211.size = sizeof(Stringtableobj146209*);
NTI146211.kind = 22;
NTI146211.base = (&NTI146209);
NTI146211.marker = TMP61;
}

