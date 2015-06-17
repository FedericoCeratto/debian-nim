/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct Tident167021 Tident167021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46547 Tcell46547;
typedef struct Tcellseq46563 Tcellseq46563;
typedef struct Tgcheap48416 Tgcheap48416;
typedef struct Tcellset46559 Tcellset46559;
typedef struct Tpagedesc46555 Tpagedesc46555;
typedef struct Tmemregion28410 Tmemregion28410;
typedef struct Tsmallchunk27640 Tsmallchunk27640;
typedef struct Tllchunk28404 Tllchunk28404;
typedef struct Tbigchunk27642 Tbigchunk27642;
typedef struct Tintset27617 Tintset27617;
typedef struct Ttrunk27613 Ttrunk27613;
typedef struct Tavlnode28408 Tavlnode28408;
typedef struct Tgcstat48414 Tgcstat48414;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
typedef Tident167021* TY167034[8192];
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
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Tcell46547  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46563  {
NI len;
NI cap;
Tcell46547** d;
};
struct  Tcellset46559  {
NI counter;
NI max;
Tpagedesc46555* head;
Tpagedesc46555** data;
};
typedef Tsmallchunk27640* TY28422[512];
typedef Ttrunk27613* Ttrunkbuckets27615[256];
struct  Tintset27617  {
Ttrunkbuckets27615 data;
};
struct  Tmemregion28410  {
NI minlargeobj;
NI maxlargeobj;
TY28422 freesmallchunks;
Tllchunk28404* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27642* freechunkslist;
Tintset27617 chunkstarts;
Tavlnode28408* root;
Tavlnode28408* deleted;
Tavlnode28408* last;
Tavlnode28408* freeavlnodes;
};
struct  Tgcstat48414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48416  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46563 zct;
Tcellseq46563 decstack;
Tcellset46559 cycleroots;
Tcellseq46563 tempstack;
NI recgclock;
Tmemregion28410 region;
Tgcstat48414 stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY27620[16];
struct  Tpagedesc46555  {
Tpagedesc46555* next;
NI key;
TY27620 bits;
};
struct  Tbasechunk27638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27640  {
  Tbasechunk27638 Sup;
Tsmallchunk27640* next;
Tsmallchunk27640* prev;
Tfreecell27630* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28404  {
NI size;
NI acc;
Tllchunk28404* next;
};
struct  Tbigchunk27642  {
  Tbasechunk27638 Sup;
Tbigchunk27642* next;
Tbigchunk27642* prev;
NI align;
NF data;
};
struct  Ttrunk27613  {
Ttrunk27613* next;
NI key;
TY27620 bits;
};
typedef Tavlnode28408* TY28414[2];
struct  Tavlnode28408  {
TY28414 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier);
N_NIMCALL(Tident167021*, getident_167248)(NCSTRING identifier, NI length, NI h);
N_NIMCALL(NI, cmpexact_167187)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46547* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46563* s, Tcell46547* c);
N_NIMCALL(NI, cmpignorestyle_167044)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP437)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NI, hashignorestyle_131887)(NimStringDesc* x);
N_NIMCALL(void, TMP828)(void* p, NI op);
STRING_LITERAL(TMP438, ":anonymous", 10);
STRING_LITERAL(TMP439, ":delegator", 10);
NIM_BOOL firstchariscs_167029;
TY167034 buckets_167039;
NI wordcounter_167244;
Tident167021* idanon_167495;
extern Tgcheap48416 gch_48444;
extern TNimType NTI3411; /* RootObj */
TNimType NTI167015; /* TIdObj */
extern TNimType NTI108; /* int */
TNimType NTI167021; /* TIdent */
extern TNimType NTI149; /* string */
extern TNimType NTI131021; /* THash */
TNimType NTI167019; /* PIdent */
Tident167021* iddelegator_167550;
TNimType NTI167017; /* PIdObj */

N_NIMCALL(NI, cmpexact_167187)(NCSTRING a, NCSTRING b, NI blen) {
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

static N_INLINE(Tcell46547*, usrtocell_50046)(void* usr) {
	Tcell46547* result;
	result = 0;
	result = ((Tcell46547*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46547))))));
	return result;
}

static N_INLINE(void, rtladdzct_51604)(Tcell46547* c) {
	addzct_50017((&gch_48444.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46547* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_50046(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46547* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_50046((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51604(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(NI, cmpignorestyle_167044)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
{	result = 0;
	{
		if (!firstchariscs_167029) goto LA3;
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
N_NIMCALL(void, TMP437)(void* p, NI op) {
	Tident167021* a;
	a = (Tident167021*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}

N_NIMCALL(Tident167021*, getident_167248)(NCSTRING identifier, NI length, NI h) {
	Tident167021* result;
	NI idx;
	Tident167021* last;
	NI id;
{	result = 0;
	idx = (NI)(h & ((NI) 8191));
	result = buckets_167039[(idx)- 0];
	last = NIM_NIL;
	id = ((NI) 0);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NI LOC5;
				LOC5 = 0;
				LOC5 = cmpexact_167187((*result).s->data, identifier, length);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				{
					if (!!((last == NIM_NIL))) goto LA10;
					asgnRefNoCycle((void**) (&(*last).next), (*result).next);
					asgnRefNoCycle((void**) (&(*result).next), buckets_167039[(idx)- 0]);
					asgnRefNoCycle((void**) (&buckets_167039[(idx)- 0]), result);
				}
				LA10: ;
				goto BeforeRet;
			}
			goto LA3;
			LA6: ;
			{
				NI LOC13;
				LOC13 = 0;
				LOC13 = cmpignorestyle_167044((*result).s->data, identifier, length);
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
	result = (Tident167021*) newObj((&NTI167019), sizeof(Tident167021));
	(*result).Sup.Sup.m_type = (&NTI167021);
	(*result).h = h;
	asgnRefNoCycle((void**) (&(*result).s), mnewString(((NI) (length))));
	{
		NI i_167421;
		NI HEX3Atmp_167435;
		NI res_167438;
		i_167421 = 0;
		HEX3Atmp_167435 = 0;
		HEX3Atmp_167435 = (NI)(length - ((NI) 1));
		res_167438 = ((NI) 0);
		{
			while (1) {
				if (!(res_167438 <= HEX3Atmp_167435)) goto LA18;
				i_167421 = res_167438;
				(*result).s->data[i_167421] = identifier[i_167421];
				res_167438 += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRefNoCycle((void**) (&(*result).next), buckets_167039[(idx)- 0]);
	asgnRefNoCycle((void**) (&buckets_167039[(idx)- 0]), result);
	{
		if (!(id == ((NI) 0))) goto LA21;
		wordcounter_167244 += ((NI) 1);
		(*result).Sup.id = ((NI32)-(wordcounter_167244));
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

N_NIMCALL(Tident167021*, getident_167463)(NimStringDesc* identifier) {
	Tident167021* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hashignorestyle_131887(identifier);
	result = getident_167248(identifier->data, (identifier ? identifier->Sup.len : 0), LOC1);
	return result;
}

N_NIMCALL(Tident167021*, getident_167473)(NimStringDesc* identifier, NI h) {
	Tident167021* result;
	result = 0;
	result = getident_167248(identifier->data, (identifier ? identifier->Sup.len : 0), h);
	return result;
}
N_NIMCALL(void, TMP828)(void* p, NI op) {
	Tidobj167015* a;
	a = (Tidobj167015*)p;
}

N_NIMCALL(NIM_BOOL, identeq_167484)(Tident167021* id, NimStringDesc* name) {
	NIM_BOOL result;
	Tident167021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_167463(name);
	result = ((*id).Sup.id == (*LOC1).Sup.id);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_identsInit)(void) {
	firstchariscs_167029 = NIM_TRUE;
	wordcounter_167244 = ((NI) 1);
	asgnRefNoCycle((void**) (&idanon_167495), getident_167463(((NimStringDesc*) &TMP438)));
	asgnRefNoCycle((void**) (&iddelegator_167550), getident_167463(((NimStringDesc*) &TMP439)));
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_identsDatInit)(void) {
static TNimNode* TMP436[3];
static TNimNode TMP434[5];
NTI167015.size = sizeof(Tidobj167015);
NTI167015.kind = 17;
NTI167015.base = (&NTI3411);
NTI167015.flags = 1;
TMP434[0].kind = 1;
TMP434[0].offset = offsetof(Tidobj167015, id);
TMP434[0].typ = (&NTI108);
TMP434[0].name = "id";
NTI167015.node = &TMP434[0];
NTI167021.size = sizeof(Tident167021);
NTI167021.kind = 17;
NTI167021.base = (&NTI167015);
NTI167021.flags = 2;
TMP436[0] = &TMP434[2];
TMP434[2].kind = 1;
TMP434[2].offset = offsetof(Tident167021, s);
TMP434[2].typ = (&NTI149);
TMP434[2].name = "s";
TMP436[1] = &TMP434[3];
TMP434[3].kind = 1;
TMP434[3].offset = offsetof(Tident167021, next);
TMP434[3].typ = (&NTI167019);
TMP434[3].name = "next";
TMP436[2] = &TMP434[4];
TMP434[4].kind = 1;
TMP434[4].offset = offsetof(Tident167021, h);
TMP434[4].typ = (&NTI131021);
TMP434[4].name = "h";
TMP434[1].len = 3; TMP434[1].kind = 2; TMP434[1].sons = &TMP436[0];
NTI167021.node = &TMP434[1];
NTI167019.size = sizeof(Tident167021*);
NTI167019.kind = 22;
NTI167019.base = (&NTI167021);
NTI167019.flags = 2;
NTI167019.marker = TMP437;
NTI167017.size = sizeof(Tidobj167015*);
NTI167017.kind = 22;
NTI167017.base = (&NTI167015);
NTI167017.marker = TMP828;
}

