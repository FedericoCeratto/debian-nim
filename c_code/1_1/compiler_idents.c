/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tident195012 Tident195012;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tidobj195006 Tidobj195006;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47704 Cell47704;
typedef struct Cellseq47720 Cellseq47720;
typedef struct Gcheap50218 Gcheap50218;
typedef struct Gcstack50216 Gcstack50216;
typedef struct Memregion29885 Memregion29885;
typedef struct Smallchunk29839 Smallchunk29839;
typedef struct Llchunk29879 Llchunk29879;
typedef struct Bigchunk29841 Bigchunk29841;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29883 Avlnode29883;
typedef struct Gcstat50214 Gcstat50214;
typedef struct Cellset47716 Cellset47716;
typedef struct Pagedesc47712 Pagedesc47712;
typedef struct Basechunk29837 Basechunk29837;
typedef struct Freecell29829 Freecell29829;
typedef Tident195012* TY195025[8192];
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
struct  Tidobj195006  {
  TNimObject Sup;
NI id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tident195012  {
  Tidobj195006 Sup;
NimStringDesc* s;
Tident195012* next;
NI h;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc56202) (void);
struct  Cell47704  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47720  {
NI len;
NI cap;
Cell47704** d;
};
typedef Smallchunk29839* TY29900[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29885  {
NI minlargeobj;
NI maxlargeobj;
TY29900 freesmallchunks;
Llchunk29879* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29841* freechunkslist;
Intset29814 chunkstarts;
Avlnode29883* root;
Avlnode29883* deleted;
Avlnode29883* last;
Avlnode29883* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47716  {
NI counter;
NI max;
Pagedesc47712* head;
Pagedesc47712** data;
};
struct  Gcheap50218  {
Gcstack50216* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47720 zct;
Cellseq47720 decstack;
Cellseq47720 tempstack;
NI recgclock;
Memregion29885 region;
Gcstat50214 stat;
Cellset47716 marked;
Cellseq47720 additionalroots;
};
struct  Gcstack50216  {
Gcstack50216* prev;
Gcstack50216* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29837  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29839  {
  Basechunk29837 Sup;
Smallchunk29839* next;
Smallchunk29839* prev;
Freecell29829* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29879  {
NI size;
NI acc;
Llchunk29879* next;
};
struct  Bigchunk29841  {
  Basechunk29837 Sup;
Bigchunk29841* next;
Bigchunk29841* prev;
NI align;
NF data;
};
typedef NI TY29818[16];
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29818 bits;
};
typedef Avlnode29883* TY29890[2];
struct  Avlnode29883  {
TY29890 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47712  {
Pagedesc47712* next;
NI key;
TY29818 bits;
};
struct  Freecell29829  {
Freecell29829* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP560)(void* p, NI op);
N_NIMCALL(void, TMP561)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56202 markerproc0);
N_NIMCALL(void, TMP562)();
N_NIMCALL(Tident195012*, getident_195441_791273810)(NimStringDesc* identifier0);
N_NIMCALL(Tident195012*, getident_195213_791273810)(NCSTRING identifier0, NI length0, NI h0);
N_NIMCALL(NI, cmpexact_195167_791273810)(NCSTRING a0, NCSTRING b0, NI blen0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47720* s0, Cell47704* c0);
N_NIMCALL(NI, cmpignorestyle_195028_791273810)(NCSTRING a0, NCSTRING b0, NI blen0);
static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_146008_3239285623)(NCSTRING cs0, NI i0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NI, hashignorestyle_147892_213663784)(NimStringDesc* x0);
N_NIMCALL(void, TMP564)();
N_NIMCALL(void, TMP988)(void* p, NI op);
STRING_LITERAL(TMP563, ":anonymous", 10);
STRING_LITERAL(TMP565, ":delegator", 10);
NIM_BOOL firstchariscs_195019_791273810;
TY195025 buckets_195026_791273810;
extern TNimType NTI3408; /* RootObj */
TNimType NTI195006; /* TIdObj */
extern TNimType NTI104; /* int */
TNimType NTI195012; /* TIdent */
extern TNimType NTI138; /* string */
extern TNimType NTI147002; /* Hash */
TNimType NTI195010; /* PIdent */
TNimType NTI195025; /* array[0..8191, PIdent] */
NI wordcounter_195212_791273810;
Tident195012* idanon_195455_791273810;
extern Gcheap50218 gch_50258_1689653243;
Tident195012* iddelegator_195456_791273810;
TNimType NTI195008; /* PIdObj */
N_NIMCALL(void, TMP560)(void* p, NI op) {
	Tident195012* a;
	a = (Tident195012*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}
N_NIMCALL(void, TMP561)() {
	NI LOC1;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 8192; LOC1++) {
	nimGCvisit((void*)buckets_195026_791273810[LOC1], 0);
	}
}
N_NIMCALL(void, TMP562)() {
	nimGCvisit((void*)idanon_195455_791273810, 0);
}

N_NIMCALL(NI, cmpexact_195167_791273810)(NCSTRING a0, NCSTRING b0, NI blen0) {
	NI result0;
	NI i0;
	NI j0;
	result0 = (NI)0;
	i0 = ((NI) 0);
	j0 = ((NI) 0);
	result0 = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa0;
			NIM_CHAR bb0;
			if (!(j0 < blen0)) goto LA2;
			aa0 = a0[i0];
			bb0 = b0[j0];
			result0 = (NI)(((NI) (((NU8)(aa0)))) - ((NI) (((NU8)(bb0)))));
			{
				NIM_BOOL LOC5;
				LOC5 = (NIM_BOOL)0;
				LOC5 = !((result0 == ((NI) 0)));
				if (LOC5) goto LA6;
				LOC5 = ((NU8)(aa0) == (NU8)(0));
				LA6: ;
				if (!LOC5) goto LA7;
				goto LA1;
			}
			LA7: ;
			i0 += ((NI) 1);
			j0 += ((NI) 1);
		} LA2: ;
	} LA1: ;
	{
		if (!(result0 == ((NI) 0))) goto LA11;
		{
			if (!!(((NU8)(a0[i0]) == (NU8)(0)))) goto LA15;
			result0 = ((NI) 1);
		}
		LA15: ;
	}
	LA11: ;
	return result0;
}

static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0) {
	Cell47704* result0;
	result0 = (Cell47704*)0;
	result0 = ((Cell47704*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47704))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0) {
	addzct_51817_1689653243((&gch_50258_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47704* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51840_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47704* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51840_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53001_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_146008_3239285623)(NCSTRING cs0, NI i0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC2 = (NIM_BOOL)0;
	LOC2 = ((NU8)(cs0[i0]) == (NU8)(226));
	if (!(LOC2)) goto LA3;
	LOC2 = ((NU8)(cs0[(NI)(i0 + ((NI) 1))]) == (NU8)(128));
	LA3: ;
	LOC1 = LOC2;
	if (!(LOC1)) goto LA4;
	LOC1 = ((NU8)(cs0[(NI)(i0 + ((NI) 2))]) == (NU8)(147));
	LA4: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(NI, cmpignorestyle_195028_791273810)(NCSTRING a0, NCSTRING b0, NI blen0) {
	NI result0;
	NI i0;
	NI j0;
{	result0 = (NI)0;
	{
		if (!firstchariscs_195019_791273810) goto LA3;
		{
			if (!!(((NU8)(a0[((NI) 0)]) == (NU8)(b0[((NI) 0)])))) goto LA7;
			result0 = ((NI) 1);
			goto BeforeRet;
		}
		LA7: ;
	}
	LA3: ;
	i0 = ((NI) 0);
	j0 = ((NI) 0);
	result0 = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa0;
			NIM_CHAR bb0;
			if (!(j0 < blen0)) goto LA10;
			{
				while (1) {
					if (!((NU8)(a0[i0]) == (NU8)(95))) goto LA12;
					i0 += ((NI) 1);
				} LA12: ;
			}
			{
				while (1) {
					if (!((NU8)(b0[j0]) == (NU8)(95))) goto LA14;
					j0 += ((NI) 1);
				} LA14: ;
			}
			{
				while (1) {
					NIM_BOOL LOC17;
					LOC17 = (NIM_BOOL)0;
					LOC17 = ismagicidentseparatorrune_146008_3239285623(a0, i0);
					if (!LOC17) goto LA16;
					i0 += ((NI) 3);
				} LA16: ;
			}
			{
				while (1) {
					NIM_BOOL LOC20;
					LOC20 = (NIM_BOOL)0;
					LOC20 = ismagicidentseparatorrune_146008_3239285623(b0, j0);
					if (!LOC20) goto LA19;
					j0 += ((NI) 3);
				} LA19: ;
			}
			aa0 = a0[i0];
			bb0 = b0[j0];
			{
				NIM_BOOL LOC23;
				LOC23 = (NIM_BOOL)0;
				LOC23 = ((NU8)(65) <= (NU8)(aa0));
				if (!(LOC23)) goto LA24;
				LOC23 = ((NU8)(aa0) <= (NU8)(90));
				LA24: ;
				if (!LOC23) goto LA25;
				aa0 = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(aa0)))) + ((NI) 32))))));
			}
			LA25: ;
			{
				NIM_BOOL LOC29;
				LOC29 = (NIM_BOOL)0;
				LOC29 = ((NU8)(65) <= (NU8)(bb0));
				if (!(LOC29)) goto LA30;
				LOC29 = ((NU8)(bb0) <= (NU8)(90));
				LA30: ;
				if (!LOC29) goto LA31;
				bb0 = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(bb0)))) + ((NI) 32))))));
			}
			LA31: ;
			result0 = (NI)(((NI) (((NU8)(aa0)))) - ((NI) (((NU8)(bb0)))));
			{
				NIM_BOOL LOC35;
				LOC35 = (NIM_BOOL)0;
				LOC35 = !((result0 == ((NI) 0)));
				if (LOC35) goto LA36;
				LOC35 = ((NU8)(aa0) == (NU8)(0));
				LA36: ;
				if (!LOC35) goto LA37;
				goto LA9;
			}
			LA37: ;
			i0 += ((NI) 1);
			j0 += ((NI) 1);
		} LA10: ;
	} LA9: ;
	{
		if (!(result0 == ((NI) 0))) goto LA41;
		{
			if (!!(((NU8)(a0[i0]) == (NU8)(0)))) goto LA45;
			result0 = ((NI) 1);
		}
		LA45: ;
	}
	LA41: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tident195012*, getident_195213_791273810)(NCSTRING identifier0, NI length0, NI h0) {
	Tident195012* result0;
	NI idx0;
	Tident195012* last0;
	NI id0;
{	result0 = (Tident195012*)0;
	idx0 = (NI)(h0 & ((NI) 8191));
	result0 = buckets_195026_791273810[(idx0)- 0];
	last0 = NIM_NIL;
	id0 = ((NI) 0);
	{
		while (1) {
			if (!!((result0 == NIM_NIL))) goto LA2;
			{
				NI LOC5;
				LOC5 = (NI)0;
				LOC5 = cmpexact_195167_791273810((*result0).s->data, identifier0, length0);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				{
					if (!!((last0 == NIM_NIL))) goto LA10;
					asgnRefNoCycle((void**) (&(*last0).next), (*result0).next);
					asgnRefNoCycle((void**) (&(*result0).next), buckets_195026_791273810[(idx0)- 0]);
					asgnRefNoCycle((void**) (&buckets_195026_791273810[(idx0)- 0]), result0);
				}
				LA10: ;
				goto BeforeRet;
			}
			goto LA3;
			LA6: ;
			{
				NI LOC13;
				LOC13 = (NI)0;
				LOC13 = cmpignorestyle_195028_791273810((*result0).s->data, identifier0, length0);
				if (!(LOC13 == ((NI) 0))) goto LA14;
				id0 = (*result0).Sup.id;
			}
			goto LA3;
			LA14: ;
			LA3: ;
			last0 = result0;
			result0 = (*result0).next;
		} LA2: ;
	}
	result0 = (Tident195012*) newObj((&NTI195010), sizeof(Tident195012));
	(*result0).Sup.Sup.m_type = (&NTI195012);
	(*result0).h = h0;
	asgnRefNoCycle((void**) (&(*result0).s), mnewString(((NI) (length0))));
	{
		NI i_195420_791273810;
		NI HEX3Atmp_195434_791273810;
		NI res_195437_791273810;
		i_195420_791273810 = (NI)0;
		HEX3Atmp_195434_791273810 = (NI)0;
		HEX3Atmp_195434_791273810 = (NI)(length0 - ((NI) 1));
		res_195437_791273810 = ((NI) 0);
		{
			while (1) {
				if (!(res_195437_791273810 <= HEX3Atmp_195434_791273810)) goto LA18;
				i_195420_791273810 = res_195437_791273810;
				(*result0).s->data[i_195420_791273810] = identifier0[i_195420_791273810];
				res_195437_791273810 += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRefNoCycle((void**) (&(*result0).next), buckets_195026_791273810[(idx0)- 0]);
	asgnRefNoCycle((void**) (&buckets_195026_791273810[(idx0)- 0]), result0);
	{
		if (!(id0 == ((NI) 0))) goto LA21;
		wordcounter_195212_791273810 += ((NI) 1);
		(*result0).Sup.id = ((NI32)-(wordcounter_195212_791273810));
	}
	goto LA19;
	LA21: ;
	{
		(*result0).Sup.id = id0;
	}
	LA19: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tident195012*, getident_195441_791273810)(NimStringDesc* identifier0) {
	Tident195012* result0;
	NI LOC1;
	result0 = (Tident195012*)0;
	LOC1 = (NI)0;
	LOC1 = hashignorestyle_147892_213663784(identifier0);
	result0 = getident_195213_791273810(identifier0->data, (identifier0 ? identifier0->Sup.len : 0), LOC1);
	return result0;
}
N_NIMCALL(void, TMP564)() {
	nimGCvisit((void*)iddelegator_195456_791273810, 0);
}

N_NIMCALL(Tident195012*, getident_195445_791273810)(NimStringDesc* identifier0, NI h0) {
	Tident195012* result0;
	result0 = (Tident195012*)0;
	result0 = getident_195213_791273810(identifier0->data, (identifier0 ? identifier0->Sup.len : 0), h0);
	return result0;
}
N_NIMCALL(void, TMP988)(void* p, NI op) {
	Tidobj195006* a;
	a = (Tidobj195006*)p;
}

N_NIMCALL(NIM_BOOL, identeq_195450_791273810)(Tident195012* id0, NimStringDesc* name0) {
	NIM_BOOL result0;
	Tident195012* LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (Tident195012*)0;
	LOC1 = getident_195441_791273810(name0);
	result0 = ((*id0).Sup.id == (*LOC1).Sup.id);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit000)(void) {
	firstchariscs_195019_791273810 = NIM_TRUE;
nimRegisterGlobalMarker(TMP561);
	wordcounter_195212_791273810 = ((NI) 1);
nimRegisterGlobalMarker(TMP562);
	asgnRefNoCycle((void**) (&idanon_195455_791273810), getident_195441_791273810(((NimStringDesc*) &TMP563)));
nimRegisterGlobalMarker(TMP564);
	asgnRefNoCycle((void**) (&iddelegator_195456_791273810), getident_195441_791273810(((NimStringDesc*) &TMP565)));
}

NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit000)(void) {
static TNimNode* TMP559[3];
static TNimNode TMP557[5];
NTI195006.size = sizeof(Tidobj195006);
NTI195006.kind = 17;
NTI195006.base = (&NTI3408);
NTI195006.flags = 1;
TMP557[0].kind = 1;
TMP557[0].offset = offsetof(Tidobj195006, id);
TMP557[0].typ = (&NTI104);
TMP557[0].name = "id";
NTI195006.node = &TMP557[0];
NTI195012.size = sizeof(Tident195012);
NTI195012.kind = 17;
NTI195012.base = (&NTI195006);
NTI195012.flags = 2;
TMP559[0] = &TMP557[2];
TMP557[2].kind = 1;
TMP557[2].offset = offsetof(Tident195012, s);
TMP557[2].typ = (&NTI138);
TMP557[2].name = "s";
TMP559[1] = &TMP557[3];
TMP557[3].kind = 1;
TMP557[3].offset = offsetof(Tident195012, next);
TMP557[3].typ = (&NTI195010);
TMP557[3].name = "next";
TMP559[2] = &TMP557[4];
TMP557[4].kind = 1;
TMP557[4].offset = offsetof(Tident195012, h);
TMP557[4].typ = (&NTI147002);
TMP557[4].name = "h";
TMP557[1].len = 3; TMP557[1].kind = 2; TMP557[1].sons = &TMP559[0];
NTI195012.node = &TMP557[1];
NTI195010.size = sizeof(Tident195012*);
NTI195010.kind = 22;
NTI195010.base = (&NTI195012);
NTI195010.flags = 2;
NTI195010.marker = TMP560;
NTI195025.size = sizeof(TY195025);
NTI195025.kind = 16;
NTI195025.base = (&NTI195010);
NTI195025.flags = 2;
NTI195008.size = sizeof(Tidobj195006*);
NTI195008.kind = 22;
NTI195008.base = (&NTI195006);
NTI195008.marker = TMP988;
}

