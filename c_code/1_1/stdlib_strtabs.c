/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Stringtableobj136012 Stringtableobj136012;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq136010 Keyvaluepairseq136010;
typedef struct Keyvaluepair136008 Keyvaluepair136008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  Stringtableobj136012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq136010* data;
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
struct Keyvaluepair136008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct Keyvaluepairseq136010 {
  TGenericSeq Sup;
  Keyvaluepair136008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP44)(void* p, NI op);
N_NIMCALL(void, TMP48)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NI, rawget_136418)(Stringtableobj136012* t, NimStringDesc* key);
N_NIMCALL(NI, myhash_136177)(Stringtableobj136012* t, NimStringDesc* key);
N_NIMCALL(NI, hash_133839)(NimStringDesc* x);
N_NIMCALL(NI, hashignorecase_133978)(NimStringDesc* x);
N_NIMCALL(NI, hashignorestyle_133887)(NimStringDesc* x);
N_NIMCALL(NIM_BOOL, mycmp_136188)(Stringtableobj136012* t, NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, cmp_4717)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_136407)(NI h, NI maxhash);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, mustrehash_136200)(NI length, NI counter);
N_NIMCALL(void, enlarge_136510)(Stringtableobj136012* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, rawinsert_136488)(Stringtableobj136012* t, Keyvaluepairseq136010** data, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, getvalue_136630)(Stringtableobj136012* t, NU8 flags, NimStringDesc* key);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj136012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj136012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, getenv_123843)(NimStringDesc* key);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, raiseformatexception_136610)(NimStringDesc* s);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76243, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
STRING_LITERAL(TMP1440, "", 0);
STRING_LITERAL(TMP1887, "format string: key not found: ", 30);
extern TNimType NTI3411; /* RootObj */
TNimType NTI136012; /* StringTableObj */
extern TNimType NTI108; /* int */
TNimType NTI136008; /* KeyValuePair */
extern TNimType NTI149; /* string */
TNimType NTI136010; /* KeyValuePairSeq */
TNimType NTI136006; /* StringTableMode */
TNimType NTI136014; /* StringTableRef */
extern Tgcheap48216 gch_48244;
extern TNimType NTI22401; /* ref ValueError */
extern TNimType NTI3449; /* ValueError */
N_NIMCALL(void, TMP44)(void* p, NI op) {
	Keyvaluepairseq136010* a;
	NI LOC1;
	a = (Keyvaluepairseq136010*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP48)(void* p, NI op) {
	Stringtableobj136012* a;
	a = (Stringtableobj136012*)p;
	nimGCvisit((void*)(*a).data, op);
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46346* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(Stringtableobj136012*, nstnewStringTable)(NU8 mode) {
	Stringtableobj136012* result;
	result = 0;
	result = (Stringtableobj136012*) newObj((&NTI136014), sizeof(Stringtableobj136012));
	(*result).Sup.m_type = (&NTI136012);
	(*result).mode = mode;
	(*result).counter = ((NI) 0);
	if ((*result).data) nimGCunrefNoCycle((*result).data);
	(*result).data = (Keyvaluepairseq136010*) newSeqRC1((&NTI136010), ((NI) 64));
	return result;
}

N_NIMCALL(NI, myhash_136177)(Stringtableobj136012* t, NimStringDesc* key) {
	NI result;
	result = 0;
	switch ((*t).mode) {
	case ((NU8) 0):
	{
		result = hash_133839(key);
	}
	break;
	case ((NU8) 1):
	{
		result = hashignorecase_133978(key);
	}
	break;
	case ((NU8) 2):
	{
		result = hashignorestyle_133887(key);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, mycmp_136188)(Stringtableobj136012* t, NimStringDesc* a, NimStringDesc* b) {
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

static N_INLINE(NI, nexttry_136407)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxhash);
	return result;
}

N_NIMCALL(NI, rawget_136418)(Stringtableobj136012* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = myhash_136177(t, key);
	h = (NI)(LOC1 & ((*t).data ? ((*t).data->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*t).data->data[h].Field0 == 0)) goto LA3;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = mycmp_136188(t, (*t).data->data[h].Field0, key);
				if (!LOC6) goto LA7;
				result = h;
				goto BeforeRet;
			}
			LA7: ;
			h = nexttry_136407(h, ((*t).data ? ((*t).data->Sup.len-1) : -1));
		} LA3: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj136012* t, NimStringDesc* key) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rawget_136418(t, key);
	result = (((NI) 0) <= LOC1);
	return result;
}

N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj136012* t, NimStringDesc* key) {
	NimStringDesc* result;
	NI index;
	result = 0;
	index = rawget_136418(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = copyString((*t).data->data[index].Field1);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP1440));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, mustrehash_136200)(NI length, NI counter) {
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

N_NIMCALL(void, rawinsert_136488)(Stringtableobj136012* t, Keyvaluepairseq136010** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	LOC1 = 0;
	LOC1 = myhash_136177(t, key);
	h = (NI)(LOC1 & ((*data) ? ((*data)->Sup.len-1) : -1));
	{
		while (1) {
			if (!!((*data)->data[h].Field0 == 0)) goto LA3;
			h = nexttry_136407(h, ((*data) ? ((*data)->Sup.len-1) : -1));
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

N_NIMCALL(void, enlarge_136510)(Stringtableobj136012* t) {
	Keyvaluepairseq136010* n;
	Keyvaluepairseq136010* LOC8;
	n = 0;
	n = (Keyvaluepairseq136010*) newSeq((&NTI136010), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	{
		NI i_136544;
		NI HEX3Atmp_136558;
		NI res_136561;
		i_136544 = 0;
		HEX3Atmp_136558 = 0;
		HEX3Atmp_136558 = ((*t).data ? ((*t).data->Sup.len-1) : -1);
		res_136561 = ((NI) 0);
		{
			while (1) {
				if (!(res_136561 <= HEX3Atmp_136558)) goto LA3;
				i_136544 = res_136561;
				{
					if (!!((*t).data->data[i_136544].Field0 == 0)) goto LA6;
					rawinsert_136488(t, (&n), (*t).data->data[i_136544].Field0, (*t).data->data[i_136544].Field1);
				}
				LA6: ;
				res_136561 += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = 0;
	LOC8 = (*t).data;
	asgnRefNoCycle((void**) (&(*t).data), n);
	n = LOC8;
}

N_NIMCALL(void, nstPut)(Stringtableobj136012* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	index = rawget_136418(t, key);
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
			LOC9 = mustrehash_136200(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC9) goto LA10;
			enlarge_136510(t);
		}
		LA10: ;
		rawinsert_136488(t, (&(*t).data), key, val);
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

N_NIMCALL(void, raiseformatexception_136610)(NimStringDesc* s) {
	Valueerror3449* e;
	NimStringDesc* LOC1;
	e = 0;
	e = (Valueerror3449*) newObj((&NTI22401), sizeof(Valueerror3449));
	(*e).Sup.Sup.m_type = (&NTI3449);
	LOC1 = 0;
	LOC1 = rawNewString(s->Sup.len + 30);
appendString(LOC1, ((NimStringDesc*) &TMP1887));
appendString(LOC1, s);
	asgnRefNoCycle((void**) (&(*e).Sup.message), LOC1);
	raiseException((Exception*)e, "ValueError");
}

N_NIMCALL(NimStringDesc*, getvalue_136630)(Stringtableobj136012* t, NU8 flags, NimStringDesc* key) {
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
		result = getenv_123843(key);
	}
	goto LA6;
	LA8: ;
	{
		result = copyString(((NimStringDesc*) &TMP1440));
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
			raiseformatexception_136610(key);
		}
		goto LA15;
		LA21: ;
		LA15: ;
	}
	LA13: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj136012* t, NU8 flags) {
	NimStringDesc* result;
	NI i;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP1440));
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
					LOC14 = getvalue_136630(t, flags, LOC13);
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
					LOC21 = getvalue_136630(t, flags, LOC20);
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
NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strtabsDatInit)(void) {
static TNimNode* TMP42[3];
static TNimNode* TMP43[2];
static TNimNode* TMP45[3];
NI TMP47;
static char* NIM_CONST TMP46[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TMP27[11];
NTI136012.size = sizeof(Stringtableobj136012);
NTI136012.kind = 17;
NTI136012.base = (&NTI3411);
TMP42[0] = &TMP27[1];
TMP27[1].kind = 1;
TMP27[1].offset = offsetof(Stringtableobj136012, counter);
TMP27[1].typ = (&NTI108);
TMP27[1].name = "counter";
TMP42[1] = &TMP27[2];
NTI136008.size = sizeof(Keyvaluepair136008);
NTI136008.kind = 18;
NTI136008.base = 0;
NTI136008.flags = 2;
TMP43[0] = &TMP27[4];
TMP27[4].kind = 1;
TMP27[4].offset = offsetof(Keyvaluepair136008, Field0);
TMP27[4].typ = (&NTI149);
TMP27[4].name = "Field0";
TMP43[1] = &TMP27[5];
TMP27[5].kind = 1;
TMP27[5].offset = offsetof(Keyvaluepair136008, Field1);
TMP27[5].typ = (&NTI149);
TMP27[5].name = "Field1";
TMP27[3].len = 2; TMP27[3].kind = 2; TMP27[3].sons = &TMP43[0];
NTI136008.node = &TMP27[3];
NTI136010.size = sizeof(Keyvaluepairseq136010*);
NTI136010.kind = 24;
NTI136010.base = (&NTI136008);
NTI136010.flags = 2;
NTI136010.marker = TMP44;
TMP27[2].kind = 1;
TMP27[2].offset = offsetof(Stringtableobj136012, data);
TMP27[2].typ = (&NTI136010);
TMP27[2].name = "data";
TMP42[2] = &TMP27[6];
NTI136006.size = sizeof(NU8);
NTI136006.kind = 14;
NTI136006.base = 0;
NTI136006.flags = 3;
for (TMP47 = 0; TMP47 < 3; TMP47++) {
TMP27[TMP47+7].kind = 1;
TMP27[TMP47+7].offset = TMP47;
TMP27[TMP47+7].name = TMP46[TMP47];
TMP45[TMP47] = &TMP27[TMP47+7];
}
TMP27[10].len = 3; TMP27[10].kind = 2; TMP27[10].sons = &TMP45[0];
NTI136006.node = &TMP27[10];
TMP27[6].kind = 1;
TMP27[6].offset = offsetof(Stringtableobj136012, mode);
TMP27[6].typ = (&NTI136006);
TMP27[6].name = "mode";
TMP27[0].len = 3; TMP27[0].kind = 2; TMP27[0].sons = &TMP42[0];
NTI136012.node = &TMP27[0];
NTI136014.size = sizeof(Stringtableobj136012*);
NTI136014.kind = 22;
NTI136014.base = (&NTI136012);
NTI136014.marker = TMP48;
}

