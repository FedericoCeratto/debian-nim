/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Tident189012 Tident189012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29688 Memregion29688;
typedef struct Smallchunk29640 Smallchunk29640;
typedef struct Llchunk29682 Llchunk29682;
typedef struct Bigchunk29642 Bigchunk29642;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29686 Avlnode29686;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef Tident189012* TY189023[8192];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
NI h;
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
typedef Smallchunk29640* TY29703[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29688  {
NI minlargeobj;
NI maxlargeobj;
TY29703 freesmallchunks;
Llchunk29682* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29642* freechunkslist;
Intset29614 chunkstarts;
Avlnode29686* root;
Avlnode29686* deleted;
Avlnode29686* last;
Avlnode29686* freeavlnodes;
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
Memregion29688 region;
Gcstat49814 stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29619[8];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29619 bits;
};
struct  Basechunk29638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29640  {
  Basechunk29638 Sup;
Smallchunk29640* next;
Smallchunk29640* prev;
Freecell29630* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29682  {
NI size;
NI acc;
Llchunk29682* next;
};
struct  Bigchunk29642  {
  Basechunk29638 Sup;
Bigchunk29642* next;
Bigchunk29642* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29619 bits;
};
typedef Avlnode29686* TY29693[2];
struct  Avlnode29686  {
TY29693 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
N_NIMCALL(Tident189012*, getident_189441)(NimStringDesc* identifier);
N_NIMCALL(Tident189012*, getident_189211)(NCSTRING identifier, NI length, NI h);
N_NIMCALL(NI, cmpexact_189165)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(NI, cmpignorestyle_189026)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_136008)(NCSTRING cs, NI i);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP513)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NI, hashignorestyle_137892)(NimStringDesc* x);
N_NIMCALL(void, TMP916)(void* p, NI op);
STRING_LITERAL(TMP514, ":anonymous", 10);
STRING_LITERAL(TMP515, ":delegator", 10);
NIM_BOOL firstchariscs_189017;
TY189023 buckets_189024;
NI wordcounter_189210;
Tident189012* idanon_189455;
extern Gcheap49818 gch_49859;
extern TNimType NTI3608; /* RootObj */
TNimType NTI189006; /* TIdObj */
extern TNimType NTI104; /* int */
TNimType NTI189012; /* TIdent */
extern TNimType NTI138; /* string */
extern TNimType NTI137002; /* Hash */
TNimType NTI189010; /* PIdent */
Tident189012* iddelegator_189456;
TNimType NTI189008; /* PIdObj */

N_NIMCALL(NI, cmpexact_189165)(NCSTRING a, NCSTRING b, NI blen) {
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

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
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
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_136008)(NCSTRING cs, NI i) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = ((NU8)(cs[i]) == (NU8)(226));
	if (!(LOC2)) goto LA3;
	LOC2 = ((NU8)(cs[(NI)(i + ((NI) 1))]) == (NU8)(128));
	LA3: ;
	LOC1 = LOC2;
	if (!(LOC1)) goto LA4;
	LOC1 = ((NU8)(cs[(NI)(i + ((NI) 2))]) == (NU8)(147));
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI, cmpignorestyle_189026)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
{	result = 0;
	{
		if (!firstchariscs_189017) goto LA3;
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
			{
				while (1) {
					NIM_BOOL LOC17;
					LOC17 = 0;
					LOC17 = ismagicidentseparatorrune_136008(a, i);
					if (!LOC17) goto LA16;
					i += ((NI) 3);
				} LA16: ;
			}
			{
				while (1) {
					NIM_BOOL LOC20;
					LOC20 = 0;
					LOC20 = ismagicidentseparatorrune_136008(b, j);
					if (!LOC20) goto LA19;
					j += ((NI) 3);
				} LA19: ;
			}
			aa = a[i];
			bb = b[j];
			{
				NIM_BOOL LOC23;
				LOC23 = 0;
				LOC23 = ((NU8)(65) <= (NU8)(aa));
				if (!(LOC23)) goto LA24;
				LOC23 = ((NU8)(aa) <= (NU8)(90));
				LA24: ;
				if (!LOC23) goto LA25;
				aa = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(aa)))) + ((NI) 32))))));
			}
			LA25: ;
			{
				NIM_BOOL LOC29;
				LOC29 = 0;
				LOC29 = ((NU8)(65) <= (NU8)(bb));
				if (!(LOC29)) goto LA30;
				LOC29 = ((NU8)(bb) <= (NU8)(90));
				LA30: ;
				if (!LOC29) goto LA31;
				bb = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(bb)))) + ((NI) 32))))));
			}
			LA31: ;
			result = (NI)(((NI) (((NU8)(aa)))) - ((NI) (((NU8)(bb)))));
			{
				NIM_BOOL LOC35;
				LOC35 = 0;
				LOC35 = !((result == ((NI) 0)));
				if (LOC35) goto LA36;
				LOC35 = ((NU8)(aa) == (NU8)(0));
				LA36: ;
				if (!LOC35) goto LA37;
				goto LA9;
			}
			LA37: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA10: ;
	} LA9: ;
	{
		if (!(result == ((NI) 0))) goto LA41;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA45;
			result = ((NI) 1);
		}
		LA45: ;
	}
	LA41: ;
	}BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP513)(void* p, NI op) {
	Tident189012* a;
	a = (Tident189012*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}

N_NIMCALL(Tident189012*, getident_189211)(NCSTRING identifier, NI length, NI h) {
	Tident189012* result;
	NI idx;
	Tident189012* last;
	NI id;
{	result = 0;
	idx = (NI)(h & ((NI) 8191));
	result = buckets_189024[(idx)- 0];
	last = NIM_NIL;
	id = ((NI) 0);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NI LOC5;
				LOC5 = 0;
				LOC5 = cmpexact_189165((*result).s->data, identifier, length);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				{
					if (!!((last == NIM_NIL))) goto LA10;
					asgnRefNoCycle((void**) (&(*last).next), (*result).next);
					asgnRefNoCycle((void**) (&(*result).next), buckets_189024[(idx)- 0]);
					asgnRefNoCycle((void**) (&buckets_189024[(idx)- 0]), result);
				}
				LA10: ;
				goto BeforeRet;
			}
			goto LA3;
			LA6: ;
			{
				NI LOC13;
				LOC13 = 0;
				LOC13 = cmpignorestyle_189026((*result).s->data, identifier, length);
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
	result = (Tident189012*) newObj((&NTI189010), sizeof(Tident189012));
	(*result).Sup.Sup.m_type = (&NTI189012);
	(*result).h = h;
	asgnRefNoCycle((void**) (&(*result).s), mnewString(((NI) (length))));
	{
		NI i_189420;
		NI HEX3Atmp_189434;
		NI res_189437;
		i_189420 = 0;
		HEX3Atmp_189434 = 0;
		HEX3Atmp_189434 = (NI)(length - ((NI) 1));
		res_189437 = ((NI) 0);
		{
			while (1) {
				if (!(res_189437 <= HEX3Atmp_189434)) goto LA18;
				i_189420 = res_189437;
				(*result).s->data[i_189420] = identifier[i_189420];
				res_189437 += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRefNoCycle((void**) (&(*result).next), buckets_189024[(idx)- 0]);
	asgnRefNoCycle((void**) (&buckets_189024[(idx)- 0]), result);
	{
		if (!(id == ((NI) 0))) goto LA21;
		wordcounter_189210 += ((NI) 1);
		(*result).Sup.id = ((NI64)-(wordcounter_189210));
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

N_NIMCALL(Tident189012*, getident_189441)(NimStringDesc* identifier) {
	Tident189012* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = hashignorestyle_137892(identifier);
	result = getident_189211(identifier->data, (identifier ? identifier->Sup.len : 0), LOC1);
	return result;
}

N_NIMCALL(Tident189012*, getident_189445)(NimStringDesc* identifier, NI h) {
	Tident189012* result;
	result = 0;
	result = getident_189211(identifier->data, (identifier ? identifier->Sup.len : 0), h);
	return result;
}
N_NIMCALL(void, TMP916)(void* p, NI op) {
	Tidobj189006* a;
	a = (Tidobj189006*)p;
}

N_NIMCALL(NIM_BOOL, identeq_189450)(Tident189012* id, NimStringDesc* name) {
	NIM_BOOL result;
	Tident189012* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_189441(name);
	result = ((*id).Sup.id == (*LOC1).Sup.id);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit000)(void) {
	firstchariscs_189017 = NIM_TRUE;
	wordcounter_189210 = ((NI) 1);
	asgnRefNoCycle((void**) (&idanon_189455), getident_189441(((NimStringDesc*) &TMP514)));
	asgnRefNoCycle((void**) (&iddelegator_189456), getident_189441(((NimStringDesc*) &TMP515)));
}

NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit000)(void) {
static TNimNode* TMP512[3];
static TNimNode TMP510[5];
NTI189006.size = sizeof(Tidobj189006);
NTI189006.kind = 17;
NTI189006.base = (&NTI3608);
NTI189006.flags = 1;
TMP510[0].kind = 1;
TMP510[0].offset = offsetof(Tidobj189006, id);
TMP510[0].typ = (&NTI104);
TMP510[0].name = "id";
NTI189006.node = &TMP510[0];
NTI189012.size = sizeof(Tident189012);
NTI189012.kind = 17;
NTI189012.base = (&NTI189006);
NTI189012.flags = 2;
TMP512[0] = &TMP510[2];
TMP510[2].kind = 1;
TMP510[2].offset = offsetof(Tident189012, s);
TMP510[2].typ = (&NTI138);
TMP510[2].name = "s";
TMP512[1] = &TMP510[3];
TMP510[3].kind = 1;
TMP510[3].offset = offsetof(Tident189012, next);
TMP510[3].typ = (&NTI189010);
TMP510[3].name = "next";
TMP512[2] = &TMP510[4];
TMP510[4].kind = 1;
TMP510[4].offset = offsetof(Tident189012, h);
TMP510[4].typ = (&NTI137002);
TMP510[4].name = "h";
TMP510[1].len = 3; TMP510[1].kind = 2; TMP510[1].sons = &TMP512[0];
NTI189012.node = &TMP510[1];
NTI189010.size = sizeof(Tident189012*);
NTI189010.kind = 22;
NTI189010.base = (&NTI189012);
NTI189010.flags = 2;
NTI189010.marker = TMP513;
NTI189008.size = sizeof(Tidobj189006*);
NTI189008.kind = 22;
NTI189008.base = (&NTI189006);
NTI189008.marker = TMP916;
}

