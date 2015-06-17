/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct Tident168021 Tident168021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
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
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef Tident168021* TY168034[8192];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
N_NIMCALL(Tident168021*, getident_168463)(NimStringDesc* identifier);
N_NIMCALL(Tident168021*, getident_168248)(NCSTRING identifier, NI length, NI h);
N_NIMCALL(NI, cmpexact_168187)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(NI, cmpignorestyle_168044)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP439)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NI, hashignorestyle_131887)(NimStringDesc* x);
N_NIMCALL(void, TMP830)(void* p, NI op);
STRING_LITERAL(TMP440, ":anonymous", 10);
STRING_LITERAL(TMP441, ":delegator", 10);
NIM_BOOL firstchariscs_168029;
TY168034 buckets_168039;
NI wordcounter_168244;
Tident168021* idanon_168495;
extern Tgcheap48216 gch_48244;
extern TNimType NTI3411; /* RootObj */
TNimType NTI168015; /* TIdObj */
extern TNimType NTI108; /* int */
TNimType NTI168021; /* TIdent */
extern TNimType NTI149; /* string */
extern TNimType NTI131021; /* THash */
TNimType NTI168019; /* PIdent */
Tident168021* iddelegator_168550;
TNimType NTI168017; /* PIdObj */

N_NIMCALL(NI, cmpexact_168187)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	result = 0;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA2;
			aa = a[i];
			bb = b[j];
			result = (NI)(((NI) (((NU8)(aa)))) - ((NI) (((NU8)(bb)))));
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = !((result == ((NI) 0)));
				if (LOC5) goto LA6;
				LOC5 = ((NU8)(aa) == (NU8)(0));
				LA6: ;
				if (!LOC5) goto LA7;
				goto LA1;
			}
			LA7: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA2: ;
	} LA1: ;
	{
		if (!(result == ((NI) 0))) goto LA11;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA15;
			result = ((NI) 1);
		}
		LA15: ;
	}
	LA11: ;
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

N_NIMCALL(NI, cmpignorestyle_168044)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
{	result = 0;
	{
		if (!firstchariscs_168029) goto LA3;
		{
			if (!!(((NU8)(a[((NI) 0)]) == (NU8)(b[((NI) 0)])))) goto LA7;
			result = ((NI) 1);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA10;
			{
				while (1) {
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA12;
					i += ((NI) 1);
				} LA12: ;
			}
			{
				while (1) {
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA14;
					j += ((NI) 1);
				} LA14: ;
			}
			aa = a[i];
			bb = b[j];
			{
				NIM_BOOL LOC17;
				LOC17 = 0;
				LOC17 = ((NU8)(65) <= (NU8)(aa));
				if (!(LOC17)) goto LA18;
				LOC17 = ((NU8)(aa) <= (NU8)(90));
				LA18: ;
				if (!LOC17) goto LA19;
				aa = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(aa)))) + ((NI) 32))))));
			}
			LA19: ;
			{
				NIM_BOOL LOC23;
				LOC23 = 0;
				LOC23 = ((NU8)(65) <= (NU8)(bb));
				if (!(LOC23)) goto LA24;
				LOC23 = ((NU8)(bb) <= (NU8)(90));
				LA24: ;
				if (!LOC23) goto LA25;
				bb = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(bb)))) + ((NI) 32))))));
			}
			LA25: ;
			result = (NI)(((NI) (((NU8)(aa)))) - ((NI) (((NU8)(bb)))));
			{
				NIM_BOOL LOC29;
				LOC29 = 0;
				LOC29 = !((result == ((NI) 0)));
				if (LOC29) goto LA30;
				LOC29 = ((NU8)(aa) == (NU8)(0));
				LA30: ;
				if (!LOC29) goto LA31;
				goto LA9;
			}
			LA31: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA10: ;
	} LA9: ;
	{
		if (!(result == ((NI) 0))) goto LA35;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA39;
			result = ((NI) 1);
		}
		LA39: ;
	}
	LA35: ;
	}BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP439)(void* p, NI op) {
	Tident168021* a;
	a = (Tident168021*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}

N_NIMCALL(Tident168021*, getident_168248)(NCSTRING identifier, NI length, NI h) {
	Tident168021* result;
	NI idx;
	Tident168021* last;
	NI id;
{	result = 0;
	idx = (NI)(h & ((NI) 8191));
	result = buckets_168039[(idx)- 0];
	last = NIM_NIL;
	id = ((NI) 0);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NI LOC5;
				LOC5 = 0;
				LOC5 = cmpexact_168187((*result).s->data, identifier, length);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				{
					if (!!((last == NIM_NIL))) goto LA10;
					asgnRefNoCycle((void**) (&(*last).next), (*result).next);
					asgnRefNoCycle((void**) (&(*result).next), buckets_168039[(idx)- 0]);
					asgnRefNoCycle((void**) (&buckets_168039[(idx)- 0]), result);
				}
				LA10: ;
				goto BeforeRet;
			}
			goto LA3;
			LA6: ;
			{
				NI LOC13;
				LOC13 = 0;
				LOC13 = cmpignorestyle_168044((*result).s->data, identifier, length);
				if (!(LOC13 == ((NI) 0))) goto LA14;
				id = (*result).Sup.id;
			}
			goto LA3;
			LA14: ;
			LA3: ;
			last = result;
			result = (*result).next;
		} LA2: ;
	}
	result = (Tident168021*) newObj((&NTI168019), sizeof(Tident168021));
	(*result).Sup.Sup.m_type = (&NTI168021);
	(*result).h = h;
	asgnRefNoCycle((void**) (&(*result).s), mnewString(((NI) (length))));
	{
		NI i_168421;
		NI HEX3Atmp_168435;
		NI res_168438;
		i_168421 = 0;
		HEX3Atmp_168435 = 0;
		HEX3Atmp_168435 = (NI)(length - ((NI) 1));
		res_168438 = ((NI) 0);
		{
			while (1) {
				if (!(res_168438 <= HEX3Atmp_168435)) goto LA18;
				i_168421 = res_168438;
				(*result).s->data[i_168421] = identifier[i_168421];
				res_168438 += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRefNoCycle((void**) (&(*result).next), buckets_168039[(idx)- 0]);
	asgnRefNoCycle((void**) (&buckets_168039[(idx)- 0]), result);
	{
		if (!(id == ((NI) 0))) goto LA21;
		wordcounter_168244 += ((NI) 1);
		(*result).Sup.id = ((NI64)-(wordcounter_168244));
	}
	goto LA19;
	LA21: ;
	{
		(*result).Sup.id = id;
	}
	LA19: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tident168021*, getident_168463)(NimStringDesc* identifier) {
	Tident168021* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hashignorestyle_131887(identifier);
	result = getident_168248(identifier->data, (identifier ? identifier->Sup.len : 0), LOC1);
	return result;
}

N_NIMCALL(Tident168021*, getident_168473)(NimStringDesc* identifier, NI h) {
	Tident168021* result;
	result = 0;
	result = getident_168248(identifier->data, (identifier ? identifier->Sup.len : 0), h);
	return result;
}
N_NIMCALL(void, TMP830)(void* p, NI op) {
	Tidobj168015* a;
	a = (Tidobj168015*)p;
}

N_NIMCALL(NIM_BOOL, identeq_168484)(Tident168021* id, NimStringDesc* name) {
	NIM_BOOL result;
	Tident168021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_168463(name);
	result = ((*id).Sup.id == (*LOC1).Sup.id);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_identsInit)(void) {
	firstchariscs_168029 = NIM_TRUE;
	wordcounter_168244 = ((NI) 1);
	asgnRefNoCycle((void**) (&idanon_168495), getident_168463(((NimStringDesc*) &TMP440)));
	asgnRefNoCycle((void**) (&iddelegator_168550), getident_168463(((NimStringDesc*) &TMP441)));
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_identsDatInit)(void) {
static TNimNode* TMP438[3];
static TNimNode TMP436[5];
NTI168015.size = sizeof(Tidobj168015);
NTI168015.kind = 17;
NTI168015.base = (&NTI3411);
NTI168015.flags = 1;
TMP436[0].kind = 1;
TMP436[0].offset = offsetof(Tidobj168015, id);
TMP436[0].typ = (&NTI108);
TMP436[0].name = "id";
NTI168015.node = &TMP436[0];
NTI168021.size = sizeof(Tident168021);
NTI168021.kind = 17;
NTI168021.base = (&NTI168015);
NTI168021.flags = 2;
TMP438[0] = &TMP436[2];
TMP436[2].kind = 1;
TMP436[2].offset = offsetof(Tident168021, s);
TMP436[2].typ = (&NTI149);
TMP436[2].name = "s";
TMP438[1] = &TMP436[3];
TMP436[3].kind = 1;
TMP436[3].offset = offsetof(Tident168021, next);
TMP436[3].typ = (&NTI168019);
TMP436[3].name = "next";
TMP438[2] = &TMP436[4];
TMP436[4].kind = 1;
TMP436[4].offset = offsetof(Tident168021, h);
TMP436[4].typ = (&NTI131021);
TMP436[4].name = "h";
TMP436[1].len = 3; TMP436[1].kind = 2; TMP436[1].sons = &TMP438[0];
NTI168021.node = &TMP436[1];
NTI168019.size = sizeof(Tident168021*);
NTI168019.kind = 22;
NTI168019.base = (&NTI168021);
NTI168019.flags = 2;
NTI168019.marker = TMP439;
NTI168017.size = sizeof(Tidobj168015*);
NTI168017.kind = 22;
NTI168017.base = (&NTI168015);
NTI168017.marker = TMP830;
}

