/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Stringtableobj152608 Stringtableobj152608;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tident197010 Tident197010;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu175476 Tinfocpu175476;
typedef struct Tinfoos175035 Tinfoos175035;
typedef struct Tidobj197004 Tidobj197004;
typedef struct TNimObject TNimObject;
typedef struct Keyvaluepairseq152606 Keyvaluepairseq152606;
typedef struct Keyvaluepair152604 Keyvaluepair152604;
typedef struct Cell46904 Cell46904;
typedef struct Cellseq46920 Cellseq46920;
typedef struct Gcheap49418 Gcheap49418;
typedef struct Gcstack49416 Gcstack49416;
typedef struct Memregion29086 Memregion29086;
typedef struct Smallchunk29040 Smallchunk29040;
typedef struct Llchunk29080 Llchunk29080;
typedef struct Bigchunk29042 Bigchunk29042;
typedef struct Intset29014 Intset29014;
typedef struct Trunk29010 Trunk29010;
typedef struct Avlnode29084 Avlnode29084;
typedef struct Gcstat49414 Gcstat49414;
typedef struct Cellset46916 Cellset46916;
typedef struct Pagedesc46912 Pagedesc46912;
typedef struct Basechunk29038 Basechunk29038;
typedef struct Freecell29030 Freecell29030;
typedef NU8 Tnimkind3403;
typedef NU8 Tnimtypeflag3409Set;
typedef N_NIMCALL_PTR(void, TY3489) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3403 kind;
Tnimtypeflag3409Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc55402) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tendian175474;
struct Tinfocpu175476 {
NimStringDesc* Field0;
NI Field1;
Tendian175474 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu175476 TY175510[19];
typedef NU8 Tsystemcpu175452;
typedef NU8 Tinfoosprop175031Set;
struct Tinfoos175035 {
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
Tinfoosprop175031Set Field12;
};
typedef Tinfoos175035 TY175082[24];
typedef NU8 Tsystemos175004;
typedef NU8 Tinfoosprop175031;
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
NI h;
};
typedef NU8 Stringtablemode152602;
struct  Stringtableobj152608  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq152606* data;
Stringtablemode152602 mode;
};
struct Keyvaluepair152604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Cell46904  {
NI refcount;
TNimType* typ;
};
struct  Cellseq46920  {
NI len;
NI cap;
Cell46904** d;
};
typedef Smallchunk29040* TY29101[512];
typedef Trunk29010* Trunkbuckets29012[256];
struct  Intset29014  {
Trunkbuckets29012 data;
};
struct  Memregion29086  {
NI minlargeobj;
NI maxlargeobj;
TY29101 freesmallchunks;
Llchunk29080* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29042* freechunkslist;
Intset29014 chunkstarts;
Avlnode29084* root;
Avlnode29084* deleted;
Avlnode29084* last;
Avlnode29084* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset46916  {
NI counter;
NI max;
Pagedesc46912* head;
Pagedesc46912** data;
};
struct  Gcheap49418  {
Gcstack49416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq46920 zct;
Cellseq46920 decstack;
Cellseq46920 tempstack;
NI recgclock;
Memregion29086 region;
Gcstat49414 stat;
Cellset46916 marked;
Cellseq46920 additionalroots;
};
struct  Gcstack49416  {
Gcstack49416* prev;
Gcstack49416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29040  {
  Basechunk29038 Sup;
Smallchunk29040* next;
Smallchunk29040* prev;
Freecell29030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29080  {
NI size;
NI acc;
Llchunk29080* next;
};
struct  Bigchunk29042  {
  Basechunk29038 Sup;
Bigchunk29042* next;
Bigchunk29042* prev;
NI align;
NF data;
};
typedef NI TY29019[8];
struct  Trunk29010  {
Trunk29010* next;
NI key;
TY29019 bits;
};
typedef Avlnode29084* TY29091[2];
struct  Avlnode29084  {
TY29091 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc46912  {
Pagedesc46912* next;
NI key;
TY29019 bits;
};
struct  Freecell29030  {
Freecell29030* next;
NI zerofield;
};
struct Keyvaluepairseq152606 {
  TGenericSeq Sup;
  Keyvaluepair152604 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T1967573533_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55402 markerproc0);
N_NIMCALL(NIM_BOOL, isdefined_198011_1967573533)(NimStringDesc* symbol0);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj152608* t0, NimStringDesc* key0);
N_NIMCALL(NimStringDesc**, nstTake)(Stringtableobj152608* t0, NimStringDesc* key0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s0);
N_NIMCALL(NI, hashString)(NimStringDesc* s0);
N_NIMCALL(Stringtableobj152608*, nstnewStringTable)(Stringtablemode152602 mode0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_53019_1689653243)(Cell46904* c0);
static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0);
static N_INLINE(void, decref_52601_1689653243)(Cell46904* c0);
static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0);
N_NOINLINE(void, addzct_51017_1689653243)(Cellseq46920* s0, Cell46904* c0);
N_NIMCALL(void, definesymbol_198004_1967573533)(NimStringDesc* symbol0, NimStringDesc* value0);
N_NIMCALL(void, nstPut)(Stringtableobj152608* t0, NimStringDesc* key0, NimStringDesc* val0);
N_NIMCALL(NimStringDesc*, lookupsymbol_198145_1967573533)(NimStringDesc* symbol0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
STRING_LITERAL(T1967573533_3, "false", 5);
extern NIM_CONST TY175510 Cpu_175496_4151366050;
extern NIM_CONST TY175082 Os_175068_4151366050;
STRING_LITERAL(T1967573533_4, "x86", 3);
STRING_LITERAL(T1967573533_5, "itanium", 7);
STRING_LITERAL(T1967573533_6, "x8664", 5);
STRING_LITERAL(T1967573533_7, "posix", 5);
STRING_LITERAL(T1967573533_8, "unix", 4);
STRING_LITERAL(T1967573533_9, "bsd", 3);
STRING_LITERAL(T1967573533_10, "emulatedthreadvars", 18);
STRING_LITERAL(T1967573533_11, "msdos", 5);
STRING_LITERAL(T1967573533_12, "mswindows", 9);
STRING_LITERAL(T1967573533_13, "win32", 5);
STRING_LITERAL(T1967573533_14, "macintosh", 9);
STRING_LITERAL(T1967573533_15, "sunos", 5);
STRING_LITERAL(T1967573533_16, "littleendian", 12);
STRING_LITERAL(T1967573533_17, "bigendian", 9);
STRING_LITERAL(T1967573533_18, "cpu8", 4);
STRING_LITERAL(T1967573533_19, "cpu16", 5);
STRING_LITERAL(T1967573533_20, "cpu32", 5);
STRING_LITERAL(T1967573533_21, "cpu64", 5);
STRING_LITERAL(T1967573533_22, "nimrawsetjmp", 12);
STRING_LITERAL(T1967573533_23, "nimrod", 6);
STRING_LITERAL(T1967573533_24, "true", 4);
STRING_LITERAL(T1967573533_25, "nimhygiene", 10);
STRING_LITERAL(T1967573533_26, "niminheritable", 14);
STRING_LITERAL(T1967573533_27, "nimmixin", 8);
STRING_LITERAL(T1967573533_28, "nimeffects", 10);
STRING_LITERAL(T1967573533_29, "nimbabel", 8);
STRING_LITERAL(T1967573533_30, "nimcomputedgoto", 15);
STRING_LITERAL(T1967573533_31, "nimunion", 8);
STRING_LITERAL(T1967573533_32, "nimnewshared", 12);
STRING_LITERAL(T1967573533_33, "nimrequiresnimframe", 19);
STRING_LITERAL(T1967573533_34, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(T1967573533_35, "nimalias", 8);
STRING_LITERAL(T1967573533_36, "nimlocks", 8);
STRING_LITERAL(T1967573533_37, "nimnode", 7);
STRING_LITERAL(T1967573533_38, "nimnomagic64", 12);
STRING_LITERAL(T1967573533_39, "nimvarargstyped", 15);
STRING_LITERAL(T1967573533_40, "nimtypedescfixed", 16);
STRING_LITERAL(T1967573533_41, "nimKnowsNimvm", 13);
STRING_LITERAL(T1967573533_42, "nimArrIdx", 9);
STRING_LITERAL(T1967573533_43, "nimImmediateDeprecated", 22);
Stringtableobj152608* gsymbols_198001_1967573533;
extern TNimType NTI152610; /* StringTableRef */
extern Tsystemcpu175452 targetcpu_175627_4151366050;
extern Tsystemos175004 targetos_175629_4151366050;
extern Gcheap49418 gch_49458_1689653243;
N_NIMCALL(void, T1967573533_2)(void) {
	nimGCvisit((void*)gsymbols_198001_1967573533, 0);
}

static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0) {
	NIM_BOOL result0;
	int LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = memcmp(a0, b0, ((size_t) (size0)));
	result0 = (LOC1 == ((NI32) 0));
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
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
	LOC11 = equalmem_7495_1689653243(((void*) ((*a0).data)), ((void*) ((*b0).data)), ((NI) ((*a0).Sup.len)));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isdefined_198011_1967573533)(NimStringDesc* symbol0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		NIM_BOOL LOC3;
		NimStringDesc** LOC6;
		LOC3 = (NIM_BOOL)0;
		LOC3 = nsthasKey(gsymbols_198001_1967573533, symbol0);
		if (!LOC3) goto LA4;
		LOC6 = (NimStringDesc**)0;
		LOC6 = nstTake(gsymbols_198001_1967573533, symbol0);
		result0 = !(eqStrings((*LOC6), ((NimStringDesc*) &T1967573533_3)));
	}
	goto LA1;
	LA4: ;
	{
		NI LOC8;
		LOC8 = (NI)0;
		LOC8 = nsuCmpIgnoreStyle(symbol0, Cpu_175496_4151366050[(targetcpu_175627_4151366050)- 1].Field0);
		if (!(LOC8 == ((NI) 0))) goto LA9;
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA9: ;
	{
		NI LOC12;
		LOC12 = (NI)0;
		LOC12 = nsuCmpIgnoreStyle(symbol0, Os_175068_4151366050[(targetos_175629_4151366050)- 1].Field0);
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
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_13))) goto LA24;
break;
		case 1: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_12))) goto LA24;
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_22))) goto LA33;
break;
		case 2: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_20))) goto LA31;
break;
		case 3: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_11))) goto LA23;
break;
		case 6: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_9))) goto LA21;
break;
		case 13: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_15))) goto LA26;
break;
		case 15: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_4))) goto LA17;
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_5))) goto LA18;
break;
		case 19: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_8))) goto LA20;
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_10))) goto LA22;
break;
		case 20: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_17))) goto LA28;
break;
		case 22: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_18))) goto LA29;
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_19))) goto LA30;
break;
		case 23: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_6))) goto LA19;
break;
		case 25: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_21))) goto LA32;
break;
		case 27: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_16))) goto LA27;
break;
		case 30: 
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_7))) goto LA20;
if (eqStrings(LOC16, ((NimStringDesc*) &T1967573533_14))) goto LA25;
break;
		}
		goto LA34;
		LA17: ;
		{
			result0 = (targetcpu_175627_4151366050 == ((Tsystemcpu175452) 1));
		}
		goto LA35;
		LA18: ;
		{
			result0 = (targetcpu_175627_4151366050 == ((Tsystemcpu175452) 9));
		}
		goto LA35;
		LA19: ;
		{
			result0 = (targetcpu_175627_4151366050 == ((Tsystemcpu175452) 10));
		}
		goto LA35;
		LA20: ;
		{
			result0 = ((3768304 &(1U<<((NU)(targetos_175629_4151366050)&31U)))!=0);
		}
		goto LA35;
		LA21: ;
		{
			result0 = ((3584 &(1U<<((NU)(targetos_175629_4151366050)&31U)))!=0);
		}
		goto LA35;
		LA22: ;
		{
			result0 = ((Os_175068_4151366050[(targetos_175629_4151366050)- 1].Field12 &(1U<<((NU)(((Tinfoosprop175031) 3))&7U)))!=0);
		}
		goto LA35;
		LA23: ;
		{
			result0 = (targetos_175629_4151366050 == ((Tsystemos175004) 1));
		}
		goto LA35;
		LA24: ;
		{
			result0 = (targetos_175629_4151366050 == ((Tsystemos175004) 2));
		}
		goto LA35;
		LA25: ;
		{
			result0 = ((786432 &(1U<<((NU)(targetos_175629_4151366050)&31U)))!=0);
		}
		goto LA35;
		LA26: ;
		{
			result0 = (targetos_175629_4151366050 == ((Tsystemos175004) 7));
		}
		goto LA35;
		LA27: ;
		{
			result0 = (Cpu_175496_4151366050[(targetcpu_175627_4151366050)- 1].Field2 == ((Tendian175474) 0));
		}
		goto LA35;
		LA28: ;
		{
			result0 = (Cpu_175496_4151366050[(targetcpu_175627_4151366050)- 1].Field2 == ((Tendian175474) 1));
		}
		goto LA35;
		LA29: ;
		{
			result0 = (Cpu_175496_4151366050[(targetcpu_175627_4151366050)- 1].Field4 == ((NI) 8));
		}
		goto LA35;
		LA30: ;
		{
			result0 = (Cpu_175496_4151366050[(targetcpu_175627_4151366050)- 1].Field4 == ((NI) 16));
		}
		goto LA35;
		LA31: ;
		{
			result0 = (Cpu_175496_4151366050[(targetcpu_175627_4151366050)- 1].Field4 == ((NI) 32));
		}
		goto LA35;
		LA32: ;
		{
			result0 = (Cpu_175496_4151366050[(targetcpu_175627_4151366050)- 1].Field4 == ((NI) 64));
		}
		goto LA35;
		LA33: ;
		{
			result0 = ((528000 &(1U<<((NU)(targetos_175629_4151366050)&31U)))!=0);
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

N_NIMCALL(NIM_BOOL, isdefined_198141_1967573533)(Tident197010* symbol0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = isdefined_198011_1967573533((*symbol0).s);
	return result0;
}

N_NIMCALL(NI, countdefinedsymbols_198168_1967573533)(void) {
	NI result0;
	result0 = (NI)0;
	result0 = ((NI) 0);
	{
		NimStringDesc* key_198171_1967573533;
		NimStringDesc* val_198172_1967573533;
		key_198171_1967573533 = (NimStringDesc*)0;
		val_198172_1967573533 = (NimStringDesc*)0;
		{
			NI h_198186_1967573533;
			NI HEX3Atmp_198188_1967573533;
			NI res_198190_1967573533;
			h_198186_1967573533 = (NI)0;
			HEX3Atmp_198188_1967573533 = (NI)0;
			HEX3Atmp_198188_1967573533 = ((*gsymbols_198001_1967573533).data ? ((*gsymbols_198001_1967573533).data->Sup.len-1) : -1);
			res_198190_1967573533 = ((NI) 0);
			{
				while (1) {
					if (!(res_198190_1967573533 <= HEX3Atmp_198188_1967573533)) goto LA4;
					h_198186_1967573533 = res_198190_1967573533;
					{
						if (!!((*gsymbols_198001_1967573533).data->data[h_198186_1967573533].Field0 == 0)) goto LA7;
						key_198171_1967573533 = (*gsymbols_198001_1967573533).data->data[h_198186_1967573533].Field0;
						val_198172_1967573533 = (*gsymbols_198001_1967573533).data->data[h_198186_1967573533].Field1;
						{
							if (!!(eqStrings(val_198172_1967573533, ((NimStringDesc*) &T1967573533_3)))) goto LA11;
							result0 += ((NI) 1);
						}
						LA11: ;
					}
					LA7: ;
					res_198190_1967573533 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	return result0;
}

static N_INLINE(void, incref_53019_1689653243)(Cell46904* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(Cell46904*, usrtocell_51040_1689653243)(void* usr0) {
	Cell46904* result0;
	result0 = (Cell46904*)0;
	result0 = ((Cell46904*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell46904))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52201_1689653243)(Cell46904* c0) {
	addzct_51017_1689653243((&gch_49458_1689653243.zct), c0);
}

static N_INLINE(void, decref_52601_1689653243)(Cell46904* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell46904* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell46904*)0;
		LOC5 = usrtocell_51040_1689653243(src0);
		incref_53019_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell46904* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell46904*)0;
		LOC10 = usrtocell_51040_1689653243((*dest0));
		decref_52601_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, definesymbol_198004_1967573533)(NimStringDesc* symbol0, NimStringDesc* value0) {
	nstPut(gsymbols_198001_1967573533, symbol0, value0);
}

N_NIMCALL(void, initdefines_198193_1967573533)(void) {
	asgnRef((void**) (&gsymbols_198001_1967573533), nstnewStringTable(((Stringtablemode152602) 2)));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_23), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_25), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_26), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_27), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_28), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_29), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_30), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_31), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_32), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_33), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_34), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_35), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_36), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_37), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_38), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_39), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_40), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_41), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_42), ((NimStringDesc*) &T1967573533_24));
	definesymbol_198004_1967573533(((NimStringDesc*) &T1967573533_43), ((NimStringDesc*) &T1967573533_24));
}

N_NIMCALL(void, undefsymbol_198008_1967573533)(NimStringDesc* symbol0) {
	nstPut(gsymbols_198001_1967573533, symbol0, ((NimStringDesc*) &T1967573533_3));
}

N_NIMCALL(NimStringDesc*, lookupsymbol_198145_1967573533)(NimStringDesc* symbol0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		NIM_BOOL LOC3;
		NimStringDesc** LOC6;
		LOC3 = (NIM_BOOL)0;
		LOC3 = isdefined_198011_1967573533(symbol0);
		if (!LOC3) goto LA4;
		LOC6 = (NimStringDesc**)0;
		LOC6 = nstTake(gsymbols_198001_1967573533, symbol0);
		result0 = copyString((*LOC6));
	}
	goto LA1;
	LA4: ;
	{
		result0 = copyString(NIM_NIL);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, lookupsymbol_198149_1967573533)(Tident197010* symbol0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = lookupsymbol_198145_1967573533((*symbol0).s);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit000)(void) {
nimRegisterGlobalMarker(T1967573533_2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit000)(void) {
}

