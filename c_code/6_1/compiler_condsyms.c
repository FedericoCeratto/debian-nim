/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Stringtableobj145212 Stringtableobj145212;
typedef struct Tident197021 Tident197021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu173483 Tinfocpu173483;
typedef struct Tinfoos173049 Tinfoos173049;
typedef struct Tidobj197015 Tidobj197015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq145210 Keyvaluepairseq145210;
typedef struct Keyvaluepair145208 Keyvaluepair145208;
typedef struct Cell48947 Cell48947;
typedef struct Cellset48959 Cellset48959;
typedef struct Gcheap51018 Gcheap51018;
typedef struct Gcstack51016 Gcstack51016;
typedef struct Cellseq48963 Cellseq48963;
typedef struct Pagedesc48955 Pagedesc48955;
typedef struct Memregion30890 Memregion30890;
typedef struct Smallchunk30842 Smallchunk30842;
typedef struct Llchunk30884 Llchunk30884;
typedef struct Bigchunk30844 Bigchunk30844;
typedef struct Intset30817 Intset30817;
typedef struct Trunk30813 Trunk30813;
typedef struct Avlnode30888 Avlnode30888;
typedef struct Gcstat51014 Gcstat51014;
typedef struct Basechunk30840 Basechunk30840;
typedef struct Freecell30832 Freecell30832;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Tinfocpu173483 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu173483 TY173514[18];
struct Tinfoos173049 {
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
typedef Tinfoos173049 TY173084[24];
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj197015  {
  TNimObject Sup;
NI id;
};
struct  Tident197021  {
  Tidobj197015 Sup;
NimStringDesc* s;
Tident197021* next;
NI h;
};
struct  Stringtableobj145212  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq145210* data;
NU8 mode;
};
struct Keyvaluepair145208 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Cell48947  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48963  {
NI len;
NI cap;
Cell48947** d;
};
struct  Cellset48959  {
NI counter;
NI max;
Pagedesc48955* head;
Pagedesc48955** data;
};
typedef Smallchunk30842* TY30905[512];
typedef Trunk30813* Trunkbuckets30815[256];
struct  Intset30817  {
Trunkbuckets30815 data;
};
struct  Memregion30890  {
NI minlargeobj;
NI maxlargeobj;
TY30905 freesmallchunks;
Llchunk30884* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30844* freechunkslist;
Intset30817 chunkstarts;
Avlnode30888* root;
Avlnode30888* deleted;
Avlnode30888* last;
Avlnode30888* freeavlnodes;
};
struct  Gcstat51014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap51018  {
Gcstack51016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48963 zct;
Cellseq48963 decstack;
Cellset48959 cycleroots;
Cellseq48963 tempstack;
NI recgclock;
Memregion30890 region;
Gcstat51014 stat;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Gcstack51016  {
Gcstack51016* prev;
Gcstack51016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY30821[16];
struct  Pagedesc48955  {
Pagedesc48955* next;
NI key;
TY30821 bits;
};
struct  Basechunk30840  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30842  {
  Basechunk30840 Sup;
Smallchunk30842* next;
Smallchunk30842* prev;
Freecell30832* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30884  {
NI size;
NI acc;
Llchunk30884* next;
};
struct  Bigchunk30844  {
  Basechunk30840 Sup;
Bigchunk30844* next;
Bigchunk30844* prev;
NI align;
NF data;
};
struct  Trunk30813  {
Trunk30813* next;
NI key;
TY30821 bits;
};
typedef Avlnode30888* TY30895[2];
struct  Avlnode30888  {
TY30895 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell30832  {
Freecell30832* next;
NI zerofield;
};
struct Keyvaluepairseq145210 {
  TGenericSeq Sup;
  Keyvaluepair145208 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, isdefined_198031)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj145212* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc**, nstTake)(Stringtableobj145212* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(Stringtableobj145212*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_55022)(Cell48947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_52667)(Cell48947* c);
static N_INLINE(void, rtladdcycleroot_53423)(Cell48947* c);
N_NOINLINE(void, incl_49665)(Cellset48959* s, Cell48947* cell);
static N_INLINE(Cell48947*, usrtocell_52646)(void* usr);
static N_INLINE(void, decref_54604)(Cell48947* c);
static N_INLINE(void, rtladdzct_54204)(Cell48947* c);
N_NOINLINE(void, addzct_52617)(Cellseq48963* s, Cell48947* c);
N_NIMCALL(void, definesymbol_198013)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(Stringtableobj145212* t, NimStringDesc* key, NimStringDesc* val);
STRING_LITERAL(TMP1555, "false", 5);
extern NIM_CONST TY173514 Cpu_173500;
extern NIM_CONST TY173084 Os_173070;
STRING_LITERAL(TMP1556, "x86", 3);
STRING_LITERAL(TMP1557, "itanium", 7);
STRING_LITERAL(TMP1558, "x8664", 5);
STRING_LITERAL(TMP1559, "posix", 5);
STRING_LITERAL(TMP1560, "unix", 4);
STRING_LITERAL(TMP1561, "bsd", 3);
STRING_LITERAL(TMP1562, "emulatedthreadvars", 18);
STRING_LITERAL(TMP1563, "msdos", 5);
STRING_LITERAL(TMP1564, "mswindows", 9);
STRING_LITERAL(TMP1565, "win32", 5);
STRING_LITERAL(TMP1566, "macintosh", 9);
STRING_LITERAL(TMP1567, "sunos", 5);
STRING_LITERAL(TMP1568, "littleendian", 12);
STRING_LITERAL(TMP1569, "bigendian", 9);
STRING_LITERAL(TMP1570, "cpu8", 4);
STRING_LITERAL(TMP1571, "cpu16", 5);
STRING_LITERAL(TMP1572, "cpu32", 5);
STRING_LITERAL(TMP1573, "cpu64", 5);
STRING_LITERAL(TMP1574, "nimrawsetjmp", 12);
STRING_LITERAL(TMP1603, "true", 4);
STRING_LITERAL(TMP1604, "nimrod", 6);
STRING_LITERAL(TMP1605, "nimhygiene", 10);
STRING_LITERAL(TMP1606, "niminheritable", 14);
STRING_LITERAL(TMP1607, "nimmixin", 8);
STRING_LITERAL(TMP1608, "nimeffects", 10);
STRING_LITERAL(TMP1609, "nimbabel", 8);
STRING_LITERAL(TMP1610, "nimcomputedgoto", 15);
STRING_LITERAL(TMP1611, "nimunion", 8);
STRING_LITERAL(TMP1612, "nimnewshared", 12);
STRING_LITERAL(TMP1613, "nimrequiresnimframe", 19);
STRING_LITERAL(TMP1614, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(TMP1615, "nimalias", 8);
STRING_LITERAL(TMP1616, "nimlocks", 8);
STRING_LITERAL(TMP1617, "nimnode", 7);
STRING_LITERAL(TMP1618, "nimnomagic64", 12);
STRING_LITERAL(TMP1619, "nimvarargstyped", 15);
STRING_LITERAL(TMP1620, "nimtypedescfixed", 16);
STRING_LITERAL(TMP1621, "nimKnowsNimvm", 13);
STRING_LITERAL(TMP1622, "nimArrIdx", 9);
Stringtableobj145212* gsymbols_198004;
extern NU8 targetcpu_173628;
extern NU8 targetos_173630;
extern Gcheap51018 gch_51059;

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

N_NIMCALL(NIM_BOOL, isdefined_198031)(NimStringDesc* symbol) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc** LOC6;
		LOC3 = 0;
		LOC3 = nsthasKey(gsymbols_198004, symbol);
		if (!LOC3) goto LA4;
		LOC6 = 0;
		LOC6 = nstTake(gsymbols_198004, symbol);
		result = !(eqStrings((*LOC6), ((NimStringDesc*) &TMP1555)));
	}
	goto LA1;
	LA4: ;
	{
		NI LOC8;
		LOC8 = 0;
		LOC8 = nsuCmpIgnoreStyle(symbol, Cpu_173500[(targetcpu_173628)- 1].Field0);
		if (!(LOC8 == ((NI) 0))) goto LA9;
		result = NIM_TRUE;
	}
	goto LA1;
	LA9: ;
	{
		NI LOC12;
		LOC12 = 0;
		LOC12 = nsuCmpIgnoreStyle(symbol, Os_173070[(targetos_173630)- 1].Field0);
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
		case 2: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1566))) goto LA25;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1572))) goto LA31;
break;
		case 6: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1561))) goto LA21;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1569))) goto LA28;
break;
		case 7: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1558))) goto LA19;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1568))) goto LA27;
break;
		case 8: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1565))) goto LA24;
break;
		case 11: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1563))) goto LA23;
break;
		case 13: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1567))) goto LA26;
break;
		case 15: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1556))) goto LA17;
break;
		case 17: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1562))) goto LA22;
break;
		case 19: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1560))) goto LA20;
break;
		case 20: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1574))) goto LA33;
break;
		case 22: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1570))) goto LA29;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1571))) goto LA30;
break;
		case 25: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1573))) goto LA32;
break;
		case 27: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1557))) goto LA18;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1564))) goto LA24;
break;
		case 30: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1559))) goto LA20;
break;
		}
		goto LA34;
		LA17: ;
		{
			result = (targetcpu_173628 == ((NU8) 1));
		}
		goto LA35;
		LA18: ;
		{
			result = (targetcpu_173628 == ((NU8) 9));
		}
		goto LA35;
		LA19: ;
		{
			result = (targetcpu_173628 == ((NU8) 10));
		}
		goto LA35;
		LA20: ;
		{
			result = ((3768304 &(1<<((targetos_173630)&31)))!=0);
		}
		goto LA35;
		LA21: ;
		{
			result = ((3584 &(1<<((targetos_173630)&31)))!=0);
		}
		goto LA35;
		LA22: ;
		{
			result = ((Os_173070[(targetos_173630)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0);
		}
		goto LA35;
		LA23: ;
		{
			result = (targetos_173630 == ((NU8) 1));
		}
		goto LA35;
		LA24: ;
		{
			result = (targetos_173630 == ((NU8) 2));
		}
		goto LA35;
		LA25: ;
		{
			result = ((786432 &(1<<((targetos_173630)&31)))!=0);
		}
		goto LA35;
		LA26: ;
		{
			result = (targetos_173630 == ((NU8) 7));
		}
		goto LA35;
		LA27: ;
		{
			result = (Cpu_173500[(targetcpu_173628)- 1].Field2 == ((NU8) 0));
		}
		goto LA35;
		LA28: ;
		{
			result = (Cpu_173500[(targetcpu_173628)- 1].Field2 == ((NU8) 1));
		}
		goto LA35;
		LA29: ;
		{
			result = (Cpu_173500[(targetcpu_173628)- 1].Field4 == ((NI) 8));
		}
		goto LA35;
		LA30: ;
		{
			result = (Cpu_173500[(targetcpu_173628)- 1].Field4 == ((NI) 16));
		}
		goto LA35;
		LA31: ;
		{
			result = (Cpu_173500[(targetcpu_173628)- 1].Field4 == ((NI) 32));
		}
		goto LA35;
		LA32: ;
		{
			result = (Cpu_173500[(targetcpu_173628)- 1].Field4 == ((NI) 64));
		}
		goto LA35;
		LA33: ;
		{
			result = ((528000 &(1<<((targetos_173630)&31)))!=0);
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

N_NIMCALL(NIM_BOOL, isdefined_198167)(Tident197021* symbol) {
	NIM_BOOL result;
	result = 0;
	result = isdefined_198031((*symbol).s);
	return result;
}

N_NIMCALL(NI, countdefinedsymbols_198211)(void) {
	NI result;
	result = 0;
	result = ((NI) 0);
	{
		NimStringDesc* key_198214;
		NimStringDesc* val_198215;
		key_198214 = 0;
		val_198215 = 0;
		{
			NI h_198229;
			NI HEX3Atmp_198231;
			NI res_198233;
			h_198229 = 0;
			HEX3Atmp_198231 = 0;
			HEX3Atmp_198231 = ((*gsymbols_198004).data ? ((*gsymbols_198004).data->Sup.len-1) : -1);
			res_198233 = ((NI) 0);
			{
				while (1) {
					if (!(res_198233 <= HEX3Atmp_198231)) goto LA4;
					h_198229 = res_198233;
					{
						if (!!((*gsymbols_198004).data->data[h_198229].Field0 == 0)) goto LA7;
						key_198214 = (*gsymbols_198004).data->data[h_198229].Field0;
						val_198215 = (*gsymbols_198004).data->data[h_198229].Field1;
						{
							if (!!(eqStrings(val_198215, ((NimStringDesc*) &TMP1555)))) goto LA11;
							result += ((NI) 1);
						}
						LA11: ;
					}
					LA7: ;
					res_198233 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_52667)(Cell48947* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_53423)(Cell48947* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_49665((&gch_51059.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_55022)(Cell48947* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_52667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_53423(c);
	}
	LA4: ;
}

static N_INLINE(Cell48947*, usrtocell_52646)(void* usr) {
	Cell48947* result;
	result = 0;
	result = ((Cell48947*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell48947))))));
	return result;
}

static N_INLINE(void, rtladdzct_54204)(Cell48947* c) {
	addzct_52617((&gch_51059.zct), c);
}

static N_INLINE(void, decref_54604)(Cell48947* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_54204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_52667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_53423(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell48947* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_52646(src);
		incref_55022(LOC5);
	}
	LA3: ;
	{
		Cell48947* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_52646((*dest));
		decref_54604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, definesymbol_198013)(NimStringDesc* symbol) {
	nstPut(gsymbols_198004, symbol, ((NimStringDesc*) &TMP1603));
}

N_NIMCALL(void, initdefines_198254)(void) {
	asgnRef((void**) (&gsymbols_198004), nstnewStringTable(((NU8) 2)));
	definesymbol_198013(((NimStringDesc*) &TMP1604));
	definesymbol_198013(((NimStringDesc*) &TMP1605));
	definesymbol_198013(((NimStringDesc*) &TMP1606));
	definesymbol_198013(((NimStringDesc*) &TMP1607));
	definesymbol_198013(((NimStringDesc*) &TMP1608));
	definesymbol_198013(((NimStringDesc*) &TMP1609));
	definesymbol_198013(((NimStringDesc*) &TMP1610));
	definesymbol_198013(((NimStringDesc*) &TMP1611));
	definesymbol_198013(((NimStringDesc*) &TMP1612));
	definesymbol_198013(((NimStringDesc*) &TMP1613));
	definesymbol_198013(((NimStringDesc*) &TMP1614));
	definesymbol_198013(((NimStringDesc*) &TMP1615));
	definesymbol_198013(((NimStringDesc*) &TMP1616));
	definesymbol_198013(((NimStringDesc*) &TMP1617));
	definesymbol_198013(((NimStringDesc*) &TMP1618));
	definesymbol_198013(((NimStringDesc*) &TMP1619));
	definesymbol_198013(((NimStringDesc*) &TMP1620));
	definesymbol_198013(((NimStringDesc*) &TMP1621));
	definesymbol_198013(((NimStringDesc*) &TMP1622));
}

N_NIMCALL(void, undefsymbol_198022)(NimStringDesc* symbol) {
	nstPut(gsymbols_198004, symbol, ((NimStringDesc*) &TMP1555));
}
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit000)(void) {
}
