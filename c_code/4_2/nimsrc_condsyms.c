/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct Tident167021 Tident167021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu159479 Tinfocpu159479;
typedef struct Tinfoos159049 Tinfoos159049;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
typedef struct Keyvaluepair134008 Keyvaluepair134008;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellseq46363 Tcellseq46363;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Tinfocpu159479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu159479 TY159497[14];
struct Tinfoos159049 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef Tinfoos159049 TY159071[24];
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
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
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
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  Keyvaluepair134008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, isdefined_168031)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj134012* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(Stringtableobj134012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46347* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c);
N_NOINLINE(void, incl_47065)(Tcellset46359* s, Tcell46347* cell);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, decref_51804)(Tcell46347* c);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(void, definesymbol_168013)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(Stringtableobj134012* t, NimStringDesc* key, NimStringDesc* val);
STRING_LITERAL(TMP1466, "false", 5);
extern NIM_CONST TY159497 Cpu_159496;
extern NIM_CONST TY159071 Os_159070;
STRING_LITERAL(TMP1467, "x86", 3);
STRING_LITERAL(TMP1468, "itanium", 7);
STRING_LITERAL(TMP1469, "x8664", 5);
STRING_LITERAL(TMP1470, "posix", 5);
STRING_LITERAL(TMP1471, "unix", 4);
STRING_LITERAL(TMP1472, "bsd", 3);
STRING_LITERAL(TMP1473, "emulatedthreadvars", 18);
STRING_LITERAL(TMP1474, "msdos", 5);
STRING_LITERAL(TMP1475, "mswindows", 9);
STRING_LITERAL(TMP1476, "win32", 5);
STRING_LITERAL(TMP1477, "macintosh", 9);
STRING_LITERAL(TMP1478, "sunos", 5);
STRING_LITERAL(TMP1479, "littleendian", 12);
STRING_LITERAL(TMP1480, "bigendian", 9);
STRING_LITERAL(TMP1481, "cpu8", 4);
STRING_LITERAL(TMP1482, "cpu16", 5);
STRING_LITERAL(TMP1483, "cpu32", 5);
STRING_LITERAL(TMP1484, "cpu64", 5);
STRING_LITERAL(TMP1485, "nimrawsetjmp", 12);
STRING_LITERAL(TMP1514, "true", 4);
STRING_LITERAL(TMP1515, "nimrod", 6);
STRING_LITERAL(TMP1516, "nimhygiene", 10);
STRING_LITERAL(TMP1517, "niminheritable", 14);
STRING_LITERAL(TMP1518, "nimmixin", 8);
STRING_LITERAL(TMP1519, "nimeffects", 10);
STRING_LITERAL(TMP1520, "nimbabel", 8);
STRING_LITERAL(TMP1521, "nimcomputedgoto", 15);
STRING_LITERAL(TMP1522, "nimunion", 8);
STRING_LITERAL(TMP1523, "nimnewshared", 12);
STRING_LITERAL(TMP1524, "nimrequiresnimframe", 19);
STRING_LITERAL(TMP1525, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(TMP1526, "nimalias", 8);
STRING_LITERAL(TMP1527, "nimlocks", 8);
STRING_LITERAL(TMP1528, "nimnode", 7);
Stringtableobj134012* gsymbols_168004;
extern NU8 targetcpu_159600;
extern NU8 targetos_159602;
extern Tgcheap48216 gch_48244;

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_168031)(NimStringDesc* symbol) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC6;
		LOC3 = 0;
		LOC3 = nsthasKey(gsymbols_168004, symbol);
		if (!LOC3) goto LA4;
		LOC6 = 0;
		LOC6 = nstGet(gsymbols_168004, symbol);
		result = !(eqStrings(LOC6, ((NimStringDesc*) &TMP1466)));
	}
	goto LA1;
	LA4: ;
	{
		NI LOC8;
		LOC8 = 0;
		LOC8 = nsuCmpIgnoreStyle(symbol, Cpu_159496[(targetcpu_159600)- 1].Field0);
		if (!(LOC8 == ((NI) 0))) goto LA9;
		result = NIM_TRUE;
	}
	goto LA1;
	LA9: ;
	{
		NI LOC12;
		LOC12 = 0;
		LOC12 = nsuCmpIgnoreStyle(symbol, Os_159070[(targetos_159602)- 1].Field0);
		if (!(LOC12 == ((NI) 0))) goto LA13;
		result = NIM_TRUE;
	}
	goto LA1;
	LA13: ;
	{
		NimStringDesc* LOC16;
		LOC16 = 0;
		LOC16 = nsuNormalize(symbol);
		switch (hashString(LOC16) & 31) {
		case 0: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1476))) goto LA24;
break;
		case 1: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1475))) goto LA24;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1485))) goto LA33;
break;
		case 2: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1483))) goto LA31;
break;
		case 3: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1474))) goto LA23;
break;
		case 6: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1472))) goto LA21;
break;
		case 13: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1478))) goto LA26;
break;
		case 15: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1467))) goto LA17;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1468))) goto LA18;
break;
		case 19: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1471))) goto LA20;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1473))) goto LA22;
break;
		case 20: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1480))) goto LA28;
break;
		case 22: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1481))) goto LA29;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1482))) goto LA30;
break;
		case 23: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1469))) goto LA19;
break;
		case 25: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1484))) goto LA32;
break;
		case 27: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1479))) goto LA27;
break;
		case 30: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1470))) goto LA20;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1477))) goto LA25;
break;
		}
		goto LA34;
		LA17: ;
		{
			result = (targetcpu_159600 == ((NU8) 1));
		}
		goto LA35;
		LA18: ;
		{
			result = (targetcpu_159600 == ((NU8) 8));
		}
		goto LA35;
		LA19: ;
		{
			result = (targetcpu_159600 == ((NU8) 9));
		}
		goto LA35;
		LA20: ;
		{
			result = ((3768304 &(1<<((targetos_159602)&31)))!=0);
		}
		goto LA35;
		LA21: ;
		{
			result = ((3584 &(1<<((targetos_159602)&31)))!=0);
		}
		goto LA35;
		LA22: ;
		{
			result = ((Os_159070[(targetos_159602)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0);
		}
		goto LA35;
		LA23: ;
		{
			result = (targetos_159602 == ((NU8) 1));
		}
		goto LA35;
		LA24: ;
		{
			result = (targetos_159602 == ((NU8) 2));
		}
		goto LA35;
		LA25: ;
		{
			result = ((786432 &(1<<((targetos_159602)&31)))!=0);
		}
		goto LA35;
		LA26: ;
		{
			result = (targetos_159602 == ((NU8) 7));
		}
		goto LA35;
		LA27: ;
		{
			result = (Cpu_159496[(targetcpu_159600)- 1].Field2 == ((NU8) 0));
		}
		goto LA35;
		LA28: ;
		{
			result = (Cpu_159496[(targetcpu_159600)- 1].Field2 == ((NU8) 1));
		}
		goto LA35;
		LA29: ;
		{
			result = (Cpu_159496[(targetcpu_159600)- 1].Field4 == ((NI) 8));
		}
		goto LA35;
		LA30: ;
		{
			result = (Cpu_159496[(targetcpu_159600)- 1].Field4 == ((NI) 16));
		}
		goto LA35;
		LA31: ;
		{
			result = (Cpu_159496[(targetcpu_159600)- 1].Field4 == ((NI) 32));
		}
		goto LA35;
		LA32: ;
		{
			result = (Cpu_159496[(targetcpu_159600)- 1].Field4 == ((NI) 64));
		}
		goto LA35;
		LA33: ;
		{
			result = ((528000 &(1<<((targetos_159602)&31)))!=0);
		}
		goto LA35;
		LA34: ;
		{
		}
		LA35: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_168167)(Tident167021* symbol) {
	NIM_BOOL result;
	result = 0;
	result = isdefined_168031((*symbol).s);
	return result;
}

N_NIMCALL(NI, countdefinedsymbols_168211)(void) {
	NI result;
	result = 0;
	result = ((NI) 0);
	{
		NimStringDesc* key_168214;
		NimStringDesc* val_168215;
		key_168214 = 0;
		val_168215 = 0;
		{
			NI h_168229;
			NI HEX3Atmp_168231;
			NI res_168233;
			h_168229 = 0;
			HEX3Atmp_168231 = 0;
			HEX3Atmp_168231 = ((*gsymbols_168004).data ? ((*gsymbols_168004).data->Sup.len-1) : -1);
			res_168233 = ((NI) 0);
			{
				while (1) {
					if (!(res_168233 <= HEX3Atmp_168231)) goto LA4;
					h_168229 = res_168233;
					{
						if (!!((*gsymbols_168004).data->data[h_168229].Field0 == 0)) goto LA7;
						key_168214 = (*gsymbols_168004).data->data[h_168229].Field0;
						val_168215 = (*gsymbols_168004).data->data[h_168229].Field1;
						{
							if (!!(eqStrings(val_168215, ((NimStringDesc*) &TMP1466)))) goto LA11;
							result += ((NI) 1);
						}
						LA11: ;
					}
					LA7: ;
					res_168233 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47065((&gch_48244.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52222)(Tcell46347* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50623(c);
	}
	LA4: ;
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

static N_INLINE(void, decref_51804)(Tcell46347* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50623(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46347* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49846(src);
		incref_52222(LOC5);
	}
	LA3: ;
	{
		Tcell46347* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49846((*dest));
		decref_51804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, definesymbol_168013)(NimStringDesc* symbol) {
	nstPut(gsymbols_168004, symbol, ((NimStringDesc*) &TMP1514));
}

N_NIMCALL(void, initdefines_168254)(void) {
	asgnRef((void**) (&gsymbols_168004), nstnewStringTable(((NU8) 2)));
	definesymbol_168013(((NimStringDesc*) &TMP1515));
	definesymbol_168013(((NimStringDesc*) &TMP1516));
	definesymbol_168013(((NimStringDesc*) &TMP1517));
	definesymbol_168013(((NimStringDesc*) &TMP1518));
	definesymbol_168013(((NimStringDesc*) &TMP1519));
	definesymbol_168013(((NimStringDesc*) &TMP1520));
	definesymbol_168013(((NimStringDesc*) &TMP1521));
	definesymbol_168013(((NimStringDesc*) &TMP1522));
	definesymbol_168013(((NimStringDesc*) &TMP1523));
	definesymbol_168013(((NimStringDesc*) &TMP1524));
	definesymbol_168013(((NimStringDesc*) &TMP1525));
	definesymbol_168013(((NimStringDesc*) &TMP1526));
	definesymbol_168013(((NimStringDesc*) &TMP1527));
	definesymbol_168013(((NimStringDesc*) &TMP1528));
}

N_NIMCALL(void, undefsymbol_168022)(NimStringDesc* symbol) {
	nstPut(gsymbols_168004, symbol, ((NimStringDesc*) &TMP1466));
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_condsymsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_condsymsDatInit)(void) {
}

