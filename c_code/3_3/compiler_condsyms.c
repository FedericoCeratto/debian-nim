/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Stringtableobj146209 Stringtableobj146209;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tident194012 Tident194012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu171477 Tinfocpu171477;
typedef struct Tinfoos171037 Tinfoos171037;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct Keyvaluepairseq146207 Keyvaluepairseq146207;
typedef struct Keyvaluepair146205 Keyvaluepair146205;
typedef struct Cell48104 Cell48104;
typedef struct Cellseq48120 Cellseq48120;
typedef struct Gcheap50618 Gcheap50618;
typedef struct Gcstack50616 Gcstack50616;
typedef struct Memregion30286 Memregion30286;
typedef struct Smallchunk30240 Smallchunk30240;
typedef struct Llchunk30280 Llchunk30280;
typedef struct Bigchunk30242 Bigchunk30242;
typedef struct Intset30214 Intset30214;
typedef struct Trunk30210 Trunk30210;
typedef struct Avlnode30284 Avlnode30284;
typedef struct Gcstat50614 Gcstat50614;
typedef struct Cellset48116 Cellset48116;
typedef struct Pagedesc48112 Pagedesc48112;
typedef struct Basechunk30238 Basechunk30238;
typedef struct Freecell30230 Freecell30230;
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
typedef N_NIMCALL_PTR(void, Globalmarkerproc56602) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tendian171475;
struct Tinfocpu171477 {
NimStringDesc* Field0;
NI Field1;
Tendian171475 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu171477 TY171511[18];
typedef NU8 Tsystemcpu171454;
typedef NU8 Tinfoosprop171033Set;
struct Tinfoos171037 {
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
Tinfoosprop171033Set Field12;
};
typedef Tinfoos171037 TY171084[24];
typedef NU8 Tsystemos171006;
typedef NU8 Tinfoosprop171033;
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
typedef NU8 Stringtablemode146203;
struct  Stringtableobj146209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq146207* data;
Stringtablemode146203 mode;
};
struct Keyvaluepair146205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Cell48104  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48120  {
NI len;
NI cap;
Cell48104** d;
};
typedef Smallchunk30240* TY30301[512];
typedef Trunk30210* Trunkbuckets30212[256];
struct  Intset30214  {
Trunkbuckets30212 data;
};
struct  Memregion30286  {
NI minlargeobj;
NI maxlargeobj;
TY30301 freesmallchunks;
Llchunk30280* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30242* freechunkslist;
Intset30214 chunkstarts;
Avlnode30284* root;
Avlnode30284* deleted;
Avlnode30284* last;
Avlnode30284* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset48116  {
NI counter;
NI max;
Pagedesc48112* head;
Pagedesc48112** data;
};
struct  Gcheap50618  {
Gcstack50616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48120 zct;
Cellseq48120 decstack;
Cellseq48120 tempstack;
NI recgclock;
Memregion30286 region;
Gcstat50614 stat;
Cellset48116 marked;
Cellseq48120 additionalroots;
};
struct  Gcstack50616  {
Gcstack50616* prev;
Gcstack50616* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30238  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30240  {
  Basechunk30238 Sup;
Smallchunk30240* next;
Smallchunk30240* prev;
Freecell30230* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30280  {
NI size;
NI acc;
Llchunk30280* next;
};
struct  Bigchunk30242  {
  Basechunk30238 Sup;
Bigchunk30242* next;
Bigchunk30242* prev;
NI align;
NF data;
};
typedef NI TY30219[8];
struct  Trunk30210  {
Trunk30210* next;
NI key;
TY30219 bits;
};
typedef Avlnode30284* TY30291[2];
struct  Avlnode30284  {
TY30291 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc48112  {
Pagedesc48112* next;
NI key;
TY30219 bits;
};
struct  Freecell30230  {
Freecell30230* next;
NI zerofield;
};
struct Keyvaluepairseq146207 {
  TGenericSeq Sup;
  Keyvaluepair146205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP556)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56602 markerproc0);
N_NIMCALL(NIM_BOOL, isdefined_195010_1967573533)(NimStringDesc* symbol0);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj146209* t0, NimStringDesc* key0);
N_NIMCALL(NimStringDesc**, nstTake)(Stringtableobj146209* t0, NimStringDesc* key0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s0);
N_NIMCALL(NI, hashString)(NimStringDesc* s0);
N_NIMCALL(Stringtableobj146209*, nstnewStringTable)(Stringtablemode146203 mode0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_54219_1689653243)(Cell48104* c0);
static N_INLINE(Cell48104*, usrtocell_52240_1689653243)(void* usr0);
static N_INLINE(void, decref_53801_1689653243)(Cell48104* c0);
static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48104* c0);
N_NOINLINE(void, addzct_52217_1689653243)(Cellseq48120* s0, Cell48104* c0);
N_NIMCALL(void, definesymbol_195004_1967573533)(NimStringDesc* symbol0);
N_NIMCALL(void, nstPut)(Stringtableobj146209* t0, NimStringDesc* key0, NimStringDesc* val0);
STRING_LITERAL(TMP1745, "false", 5);
extern NIM_CONST TY171511 Cpu_171497_4151366050;
extern NIM_CONST TY171084 Os_171070_4151366050;
STRING_LITERAL(TMP1746, "x86", 3);
STRING_LITERAL(TMP1747, "itanium", 7);
STRING_LITERAL(TMP1748, "x8664", 5);
STRING_LITERAL(TMP1749, "posix", 5);
STRING_LITERAL(TMP1750, "unix", 4);
STRING_LITERAL(TMP1751, "bsd", 3);
STRING_LITERAL(TMP1752, "emulatedthreadvars", 18);
STRING_LITERAL(TMP1753, "msdos", 5);
STRING_LITERAL(TMP1754, "mswindows", 9);
STRING_LITERAL(TMP1755, "win32", 5);
STRING_LITERAL(TMP1756, "macintosh", 9);
STRING_LITERAL(TMP1757, "sunos", 5);
STRING_LITERAL(TMP1758, "littleendian", 12);
STRING_LITERAL(TMP1759, "bigendian", 9);
STRING_LITERAL(TMP1760, "cpu8", 4);
STRING_LITERAL(TMP1761, "cpu16", 5);
STRING_LITERAL(TMP1762, "cpu32", 5);
STRING_LITERAL(TMP1763, "cpu64", 5);
STRING_LITERAL(TMP1764, "nimrawsetjmp", 12);
STRING_LITERAL(TMP1793, "true", 4);
STRING_LITERAL(TMP1794, "nimrod", 6);
STRING_LITERAL(TMP1795, "nimhygiene", 10);
STRING_LITERAL(TMP1796, "niminheritable", 14);
STRING_LITERAL(TMP1797, "nimmixin", 8);
STRING_LITERAL(TMP1798, "nimeffects", 10);
STRING_LITERAL(TMP1799, "nimbabel", 8);
STRING_LITERAL(TMP1800, "nimcomputedgoto", 15);
STRING_LITERAL(TMP1801, "nimunion", 8);
STRING_LITERAL(TMP1802, "nimnewshared", 12);
STRING_LITERAL(TMP1803, "nimrequiresnimframe", 19);
STRING_LITERAL(TMP1804, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(TMP1805, "nimalias", 8);
STRING_LITERAL(TMP1806, "nimlocks", 8);
STRING_LITERAL(TMP1807, "nimnode", 7);
STRING_LITERAL(TMP1808, "nimnomagic64", 12);
STRING_LITERAL(TMP1809, "nimvarargstyped", 15);
STRING_LITERAL(TMP1810, "nimtypedescfixed", 16);
STRING_LITERAL(TMP1811, "nimKnowsNimvm", 13);
STRING_LITERAL(TMP1812, "nimArrIdx", 9);
Stringtableobj146209* gsymbols_195001_1967573533;
extern TNimType NTI146211; /* StringTableRef */
extern Tsystemcpu171454 targetcpu_171622_4151366050;
extern Tsystemos171006 targetos_171624_4151366050;
extern Gcheap50618 gch_50658_1689653243;
N_NIMCALL(void, TMP556)() {
	nimGCvisit((void*)gsymbols_195001_1967573533, 0);
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
	int LOC13;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = (int)0;
	LOC13 = memcmp(((NCSTRING) ((*a0).data)), ((NCSTRING) ((*b0).data)), (*a0).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isdefined_195010_1967573533)(NimStringDesc* symbol0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		NIM_BOOL LOC3;
		NimStringDesc** LOC6;
		LOC3 = (NIM_BOOL)0;
		LOC3 = nsthasKey(gsymbols_195001_1967573533, symbol0);
		if (!LOC3) goto LA4;
		LOC6 = (NimStringDesc**)0;
		LOC6 = nstTake(gsymbols_195001_1967573533, symbol0);
		result0 = !(eqStrings((*LOC6), ((NimStringDesc*) &TMP1745)));
	}
	goto LA1;
	LA4: ;
	{
		NI LOC8;
		LOC8 = (NI)0;
		LOC8 = nsuCmpIgnoreStyle(symbol0, Cpu_171497_4151366050[(targetcpu_171622_4151366050)- 1].Field0);
		if (!(LOC8 == ((NI) 0))) goto LA9;
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA9: ;
	{
		NI LOC12;
		LOC12 = (NI)0;
		LOC12 = nsuCmpIgnoreStyle(symbol0, Os_171070_4151366050[(targetos_171624_4151366050)- 1].Field0);
		if (!(LOC12 == ((NI) 0))) goto LA13;
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA13: ;
	{
		NimStringDesc* LOC16;
		LOC16 = (NimStringDesc*)0;
		LOC16 = nsuNormalize(symbol0);
		switch (hashString(LOC16) & 31) {
		case 0: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1755))) goto LA24;
break;
		case 1: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1754))) goto LA24;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1764))) goto LA33;
break;
		case 2: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1762))) goto LA31;
break;
		case 3: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1753))) goto LA23;
break;
		case 6: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1751))) goto LA21;
break;
		case 13: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1757))) goto LA26;
break;
		case 15: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1746))) goto LA17;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1747))) goto LA18;
break;
		case 19: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1750))) goto LA20;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1752))) goto LA22;
break;
		case 20: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1759))) goto LA28;
break;
		case 22: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1760))) goto LA29;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1761))) goto LA30;
break;
		case 23: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1748))) goto LA19;
break;
		case 25: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1763))) goto LA32;
break;
		case 27: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1758))) goto LA27;
break;
		case 30: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1749))) goto LA20;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1756))) goto LA25;
break;
		}
		goto LA34;
		LA17: ;
		{
			result0 = (targetcpu_171622_4151366050 == ((Tsystemcpu171454) 1));
		}
		goto LA35;
		LA18: ;
		{
			result0 = (targetcpu_171622_4151366050 == ((Tsystemcpu171454) 9));
		}
		goto LA35;
		LA19: ;
		{
			result0 = (targetcpu_171622_4151366050 == ((Tsystemcpu171454) 10));
		}
		goto LA35;
		LA20: ;
		{
			result0 = ((3768304 &(1U<<((NU)(targetos_171624_4151366050)&31U)))!=0);
		}
		goto LA35;
		LA21: ;
		{
			result0 = ((3584 &(1U<<((NU)(targetos_171624_4151366050)&31U)))!=0);
		}
		goto LA35;
		LA22: ;
		{
			result0 = ((Os_171070_4151366050[(targetos_171624_4151366050)- 1].Field12 &(1U<<((NU)(((Tinfoosprop171033) 3))&7U)))!=0);
		}
		goto LA35;
		LA23: ;
		{
			result0 = (targetos_171624_4151366050 == ((Tsystemos171006) 1));
		}
		goto LA35;
		LA24: ;
		{
			result0 = (targetos_171624_4151366050 == ((Tsystemos171006) 2));
		}
		goto LA35;
		LA25: ;
		{
			result0 = ((786432 &(1U<<((NU)(targetos_171624_4151366050)&31U)))!=0);
		}
		goto LA35;
		LA26: ;
		{
			result0 = (targetos_171624_4151366050 == ((Tsystemos171006) 7));
		}
		goto LA35;
		LA27: ;
		{
			result0 = (Cpu_171497_4151366050[(targetcpu_171622_4151366050)- 1].Field2 == ((Tendian171475) 0));
		}
		goto LA35;
		LA28: ;
		{
			result0 = (Cpu_171497_4151366050[(targetcpu_171622_4151366050)- 1].Field2 == ((Tendian171475) 1));
		}
		goto LA35;
		LA29: ;
		{
			result0 = (Cpu_171497_4151366050[(targetcpu_171622_4151366050)- 1].Field4 == ((NI) 8));
		}
		goto LA35;
		LA30: ;
		{
			result0 = (Cpu_171497_4151366050[(targetcpu_171622_4151366050)- 1].Field4 == ((NI) 16));
		}
		goto LA35;
		LA31: ;
		{
			result0 = (Cpu_171497_4151366050[(targetcpu_171622_4151366050)- 1].Field4 == ((NI) 32));
		}
		goto LA35;
		LA32: ;
		{
			result0 = (Cpu_171497_4151366050[(targetcpu_171622_4151366050)- 1].Field4 == ((NI) 64));
		}
		goto LA35;
		LA33: ;
		{
			result0 = ((528000 &(1U<<((NU)(targetos_171624_4151366050)&31U)))!=0);
		}
		goto LA35;
		LA34: ;
		{
		}
		LA35: ;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isdefined_195140_1967573533)(Tident194012* symbol0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = isdefined_195010_1967573533((*symbol0).s);
	return result0;
}

N_NIMCALL(NI, countdefinedsymbols_195159_1967573533)(void) {
	NI result0;
	result0 = (NI)0;
	result0 = ((NI) 0);
	{
		NimStringDesc* key_195162_1967573533;
		NimStringDesc* val_195163_1967573533;
		key_195162_1967573533 = (NimStringDesc*)0;
		val_195163_1967573533 = (NimStringDesc*)0;
		{
			NI h_195177_1967573533;
			NI HEX3Atmp_195179_1967573533;
			NI res_195181_1967573533;
			h_195177_1967573533 = (NI)0;
			HEX3Atmp_195179_1967573533 = (NI)0;
			HEX3Atmp_195179_1967573533 = ((*gsymbols_195001_1967573533).data ? ((*gsymbols_195001_1967573533).data->Sup.len-1) : -1);
			res_195181_1967573533 = ((NI) 0);
			{
				while (1) {
					if (!(res_195181_1967573533 <= HEX3Atmp_195179_1967573533)) goto LA4;
					h_195177_1967573533 = res_195181_1967573533;
					{
						if (!!((*gsymbols_195001_1967573533).data->data[h_195177_1967573533].Field0 == 0)) goto LA7;
						key_195162_1967573533 = (*gsymbols_195001_1967573533).data->data[h_195177_1967573533].Field0;
						val_195163_1967573533 = (*gsymbols_195001_1967573533).data->data[h_195177_1967573533].Field1;
						{
							if (!!(eqStrings(val_195163_1967573533, ((NimStringDesc*) &TMP1745)))) goto LA11;
							result0 += ((NI) 1);
						}
						LA11: ;
					}
					LA7: ;
					res_195181_1967573533 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	return result0;
}

static N_INLINE(void, incref_54219_1689653243)(Cell48104* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(Cell48104*, usrtocell_52240_1689653243)(void* usr0) {
	Cell48104* result0;
	result0 = (Cell48104*)0;
	result0 = ((Cell48104*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell48104))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48104* c0) {
	addzct_52217_1689653243((&gch_50658_1689653243.zct), c0);
}

static N_INLINE(void, decref_53801_1689653243)(Cell48104* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53401_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell48104* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell48104*)0;
		LOC5 = usrtocell_52240_1689653243(src0);
		incref_54219_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell48104* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell48104*)0;
		LOC10 = usrtocell_52240_1689653243((*dest0));
		decref_53801_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, definesymbol_195004_1967573533)(NimStringDesc* symbol0) {
	nstPut(gsymbols_195001_1967573533, symbol0, ((NimStringDesc*) &TMP1793));
}

N_NIMCALL(void, initdefines_195184_1967573533)(void) {
	asgnRef((void**) (&gsymbols_195001_1967573533), nstnewStringTable(((Stringtablemode146203) 2)));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1794));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1795));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1796));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1797));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1798));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1799));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1800));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1801));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1802));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1803));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1804));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1805));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1806));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1807));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1808));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1809));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1810));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1811));
	definesymbol_195004_1967573533(((NimStringDesc*) &TMP1812));
}

N_NIMCALL(void, undefsymbol_195007_1967573533)(NimStringDesc* symbol0) {
	nstPut(gsymbols_195001_1967573533, symbol0, ((NimStringDesc*) &TMP1745));
}
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit000)(void) {
nimRegisterGlobalMarker(TMP556);
}

NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit000)(void) {
}

