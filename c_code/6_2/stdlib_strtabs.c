/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct Keyvaluepair134008 Keyvaluepair134008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct Valueerror3449 Valueerror3449;
typedef struct Exception Exception;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
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
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
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
struct Keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Valueerror3449  {
  Exception Sup;
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
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  Keyvaluepair134008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP42)(void* p, NI op);
N_NIMCALL(void, TMP46)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NI, rawget_134418)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(NI, myhash_134177)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(NI, hash_131839)(NimStringDesc* x);
N_NIMCALL(NI, hashignorecase_131978)(NimStringDesc* x);
N_NIMCALL(NI, hashignorestyle_131887)(NimStringDesc* x);
N_NIMCALL(NIM_BOOL, mycmp_134188)(Stringtableobj134012* t, NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, cmp_4717)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_134407)(NI h, NI maxhash);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, mustrehash_134200)(NI length, NI counter);
N_NIMCALL(void, enlarge_134510)(Stringtableobj134012* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, rawinsert_134488)(Stringtableobj134012* t, Keyvaluepairseq134010** data, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, getvalue_134630)(Stringtableobj134012* t, NU8 flags, NimStringDesc* key);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, getenv_122644)(NimStringDesc* key);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, raiseformatexception_134610)(NimStringDesc* s);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76243, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
STRING_LITERAL(TMP1432, "", 0);
STRING_LITERAL(TMP1881, "format string: key not found: ", 30);
extern TNimType NTI3411; /* RootObj */
TNimType NTI134012; /* StringTableObj */
extern TNimType NTI108; /* int */
TNimType NTI134008; /* KeyValuePair */
extern TNimType NTI149; /* string */
TNimType NTI134010; /* KeyValuePairSeq */
TNimType NTI134006; /* StringTableMode */
TNimType NTI134014; /* StringTableRef */
extern Tgcheap48216 gch_48244;
extern TNimType NTI22401; /* ref ValueError */
extern TNimType NTI3449; /* ValueError */
N_NIMCALL(void, TMP42)(void* p, NI op) {
	Keyvaluepairseq134010* a;
	NI LOC1;
	a = (Keyvaluepairseq134010*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP46)(void* p, NI op) {
	Stringtableobj134012* a;
	a = (Stringtableobj134012*)p;
	nimGCvisit((void*)(*a).data, op);
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

N_NIMCALL(Stringtableobj134012*, nstnewStringTable)(NU8 mode) {
	Stringtableobj134012* result;
	result = 0;
	result = (Stringtableobj134012*) newObj((&NTI134014), sizeof(Stringtableobj134012));
	(*result).Sup.m_type = (&NTI134012);
	(*result).mode = mode;
	(*result).counter = ((NI) 0);
	if ((*result).data) nimGCunrefNoCycle((*result).data);
	(*result).data = (Keyvaluepairseq134010*) newSeqRC1((&NTI134010), ((NI) 64));
	return result;
}

N_NIMCALL(NI, myhash_134177)(Stringtableobj134012* t, NimStringDesc* key) {
	NI result;
	result = 0;
	switch ((*t).mode) {
	case ((NU8) 0):
	{
		result = hash_131839(key);
	}
	break;
	case ((NU8) 1):
	{
		result = hashignorecase_131978(key);
	}
	break;
	case ((NU8) 2):
	{
		result = hashignorestyle_131887(key);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, mycmp_134188)(Stringtableobj134012* t, NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = 0;
	switch ((*t).mode) {
	case ((NU8) 0):
	{
		NI LOC2;
		LOC2 = 0;
		LOC2 = cmp_4717(a, b);
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

static N_INLINE(NI, nexttry_134407)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(NI, rawget_134418)(Stringtableobj134012* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = myhash_134177(t, key);
	h = (NI)(LOC1 & ((*t).data ? ((*t).data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*t).data->data[h].Field0 == 0)) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = mycmp_134188(t, (*t).data->data[h].Field0, key);
				if (!LOC6) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_134407(h, ((*t).data ? ((*t).data->Sup.len-1) : -1));
		} LA3: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj134012* t, NimStringDesc* key) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_134418(t, key);
	result = (((NI) 0) <= LOC1);
	return result;
}

N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj134012* t, NimStringDesc* key) {
	NimStringDesc* result;
	NI index;
	result = 0;
	index = rawget_134418(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = copyString((*t).data->data[index].Field1);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP1432));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, mustrehash_134200)(NI length, NI counter) {
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

N_NIMCALL(void, rawinsert_134488)(Stringtableobj134012* t, Keyvaluepairseq134010** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	LOC1 = 0;
	LOC1 = myhash_134177(t, key);
	h = (NI)(LOC1 & ((*data) ? ((*data)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*data)->data[h].Field0 == 0)) goto LA3;
			h = nexttry_134407(h, ((*data) ? ((*data)->Sup.len-1) : -1));
		} LA3: ;
	}
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field0; (*data)->data[h].Field0 = copyStringRC1(key);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	LOC5 = 0;
	LOC5 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(val);
	if (LOC5) nimGCunrefNoCycle(LOC5);
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

N_NIMCALL(void, enlarge_134510)(Stringtableobj134012* t) {
	Keyvaluepairseq134010* n;
	Keyvaluepairseq134010* LOC8;
	n = 0;
	n = (Keyvaluepairseq134010*) newSeq((&NTI134010), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	{
		NI i_134544;
		NI HEX3Atmp_134558;
		NI res_134561;
		i_134544 = 0;
		HEX3Atmp_134558 = 0;
		HEX3Atmp_134558 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
		res_134561 = ((NI) 0);
		{
			while (1) {
				if (!(res_134561 <= HEX3Atmp_134558)) goto LA3;
				i_134544 = res_134561;
				{
					if (!!((*t).data->data[i_134544].Field0 == 0)) goto LA6;
					rawinsert_134488(t, (&n), (*t).data->data[i_134544].Field0, (*t).data->data[i_134544].Field1);
				}
				LA6: ;
				res_134561 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).data;
	asgnRefNoCycle((void**) (&(*t).data), n);
	n = LOC8;
}

N_NIMCALL(void, nstPut)(Stringtableobj134012* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	index = rawget_134418(t, key);
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
			LOC9 = mustrehash_134200(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC9) goto LA10;
			enlarge_134510(t);
		}
		LA10: ;
		rawinsert_134488(t, (&(*t).data), key, val);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, raiseformatexception_134610)(NimStringDesc* s) {
	Valueerror3449* e;
	NimStringDesc* LOC1;
	e = 0;
	e = (Valueerror3449*) newObj((&NTI22401), sizeof(Valueerror3449));
	(*e).Sup.Sup.m_type = (&NTI3449);
	LOC1 = 0;
	LOC1 = rawNewString(s->Sup.len + 30);
appendString(LOC1, ((NimStringDesc*) &TMP1881));
appendString(LOC1, s);
	asgnRefNoCycle((void**) (&(*e).Sup.message), LOC1);
	raiseException((Exception*)e, "ValueError");
}

N_NIMCALL(NimStringDesc*, getvalue_134630)(Stringtableobj134012* t, NU8 flags, NimStringDesc* key) {
	NimStringDesc* result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsthasKey(t, key);
		if (!LOC3) goto LA4;
		result = nstGet(t, key);
		goto BeforeRet;
	}
	LA4: ;
	{
		if (!((flags &(1<<((((NU8) 0))&7)))!=0)) goto LA8;
		result = getenv_122644(key);
	}
	goto LA6;
	LA8: ;
	{
		result = copyString(((NimStringDesc*) &TMP1432));
	}
	LA6: ;
	{
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA13;
		{
			NimStringDesc* LOC19;
			if (!((flags &(1<<((((NU8) 2))&7)))!=0)) goto LA17;
			LOC19 = 0;
			LOC19 = rawNewString(key->Sup.len + 1);
appendChar(LOC19, 36);
appendString(LOC19, key);
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			if (!!(((flags &(1<<((((NU8) 1))&7)))!=0))) goto LA21;
			raiseformatexception_134610(key);
		}
		goto LA15;
		LA21: ;
		LA15: ;
	}
	LA13: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj134012* t, NU8 flags) {
	NimStringDesc* result;
	NI i;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP1432));
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
					LOC14 = getvalue_134630(t, flags, LOC13);
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
					LOC21 = getvalue_134630(t, flags, LOC20);
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

N_NIMCALL(NI, nstlen)(Stringtableobj134012* t) {
	NI result;
	result = 0;
	result = (*t).counter;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void) {
static TNimNode* TMP40[3];
static TNimNode* TMP41[2];
static TNimNode* TMP43[3];
NI TMP45;
static char* NIM_CONST TMP44[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TMP25[11];
NTI134012.size = sizeof(Stringtableobj134012);
NTI134012.kind = 17;
NTI134012.base = (&NTI3411);
TMP40[0] = &TMP25[1];
TMP25[1].kind = 1;
TMP25[1].offset = offsetof(Stringtableobj134012, counter);
TMP25[1].typ = (&NTI108);
TMP25[1].name = "counter";
TMP40[1] = &TMP25[2];
NTI134008.size = sizeof(Keyvaluepair134008);
NTI134008.kind = 18;
NTI134008.base = 0;
NTI134008.flags = 2;
TMP41[0] = &TMP25[4];
TMP25[4].kind = 1;
TMP25[4].offset = offsetof(Keyvaluepair134008, Field0);
TMP25[4].typ = (&NTI149);
TMP25[4].name = "Field0";
TMP41[1] = &TMP25[5];
TMP25[5].kind = 1;
TMP25[5].offset = offsetof(Keyvaluepair134008, Field1);
TMP25[5].typ = (&NTI149);
TMP25[5].name = "Field1";
TMP25[3].len = 2; TMP25[3].kind = 2; TMP25[3].sons = &TMP41[0];
NTI134008.node = &TMP25[3];
NTI134010.size = sizeof(Keyvaluepairseq134010*);
NTI134010.kind = 24;
NTI134010.base = (&NTI134008);
NTI134010.flags = 2;
NTI134010.marker = TMP42;
TMP25[2].kind = 1;
TMP25[2].offset = offsetof(Stringtableobj134012, data);
TMP25[2].typ = (&NTI134010);
TMP25[2].name = "data";
TMP40[2] = &TMP25[6];
NTI134006.size = sizeof(NU8);
NTI134006.kind = 14;
NTI134006.base = 0;
NTI134006.flags = 3;
for (TMP45 = 0; TMP45 < 3; TMP45++) {
TMP25[TMP45+7].kind = 1;
TMP25[TMP45+7].offset = TMP45;
TMP25[TMP45+7].name = TMP44[TMP45];
TMP43[TMP45] = &TMP25[TMP45+7];
}
TMP25[10].len = 3; TMP25[10].kind = 2; TMP25[10].sons = &TMP43[0];
NTI134006.node = &TMP25[10];
TMP25[6].kind = 1;
TMP25[6].offset = offsetof(Stringtableobj134012, mode);
TMP25[6].typ = (&NTI134006);
TMP25[6].name = "mode";
TMP25[0].len = 3; TMP25[0].kind = 2; TMP25[0].sons = &TMP40[0];
NTI134012.node = &TMP25[0];
NTI134014.size = sizeof(Stringtableobj134012*);
NTI134014.kind = 22;
NTI134014.base = (&NTI134012);
NTI134014.marker = TMP46;
}

