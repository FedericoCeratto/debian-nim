/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Debuginfo198010 Debuginfo198010;
typedef struct TY198022 TY198022;
typedef struct TY198024 TY198024;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Filenamemapping198006 Filenamemapping198006;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Enumdesc198008 Enumdesc198008;
typedef struct TY198018 TY198018;
typedef struct TY198019 TY198019;
typedef struct Cell48105 Cell48105;
typedef struct Cellseq48121 Cellseq48121;
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
typedef struct Cellset48117 Cellset48117;
typedef struct Pagedesc48113 Pagedesc48113;
typedef struct Filestreamobj151477 Filestreamobj151477;
typedef struct Streamobj150418 Streamobj150418;
typedef struct Basechunk30238 Basechunk30238;
typedef struct Freecell30230 Freecell30230;
typedef struct TNimObject TNimObject;
struct  Debuginfo198010  {
NI version;
TY198022* files;
TY198024* enums;
NIM_BOOL conflicts;
};
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Filenamemapping198006  {
NimStringDesc* package;
NimStringDesc* file;
NU32 mangled;
};
struct  Enumdesc198008  {
NI size;
NU32 owner;
NI id;
NimStringDesc* name;
TY198018* values;
};
struct TY198019 {
NimStringDesc* Field0;
NI Field1;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc56602) (void);
struct  Cell48105  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48121  {
NI len;
NI cap;
Cell48105** d;
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
struct  Cellset48117  {
NI counter;
NI max;
Pagedesc48113* head;
Pagedesc48113** data;
};
struct  Gcheap50618  {
Gcstack50616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48121 zct;
Cellseq48121 decstack;
Cellseq48121 tempstack;
NI recgclock;
Memregion30286 region;
Gcstat50614 stat;
Cellset48117 marked;
Cellseq48121 additionalroots;
};
typedef NU8 Filemode12409;
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
struct  Pagedesc48113  {
Pagedesc48113* next;
NI key;
TY30219 bits;
};
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY150419) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY150423) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(void, TY150427) (Streamobj150418* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY150432) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(NI, TY150436) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY150442) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY150448) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY150454) (Streamobj150418* s0);
struct  Streamobj150418  {
  TNimObject Sup;
TY150419 closeimpl;
TY150423 atendimpl;
TY150427 setpositionimpl;
TY150432 getpositionimpl;
TY150436 readdataimpl;
TY150442 peekdataimpl;
TY150448 writedataimpl;
TY150454 flushimpl;
};
struct  Filestreamobj151477  {
  Streamobj150418 Sup;
FILE* f;
};
struct  Freecell30230  {
Freecell30230* next;
NI zerofield;
};
struct TY198022 {
  TGenericSeq Sup;
  Filenamemapping198006 data[SEQ_DECL_SIZE];
};
struct TY198018 {
  TGenericSeq Sup;
  TY198019 data[SEQ_DECL_SIZE];
};
struct TY198024 {
  TGenericSeq Sup;
  Enumdesc198008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP565)(void* p, NI op);
N_NIMCALL(void, TMP568)(void* p, NI op);
N_NIMCALL(void, TMP569)(void* p, NI op);
N_NIMCALL(void, TMP570)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56602 markerproc0);
N_NIMCALL(void, init_198434_1926258066)(Debuginfo198010* self0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NU32, sdbmhash_198078_1926258066)(NimStringDesc* package0, NimStringDesc* file0);
static N_INLINE(NU32, sdbmhash_198027_1926258066)(NU32 hash0, NIM_CHAR c0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0);
N_NOINLINE(void, addzct_52217_1689653243)(Cellseq48121* s0, Cell48105* c0);
N_NIMCALL(void, genericAssign)(void* dest0, void* src0, TNimType* mt0);
N_NIMCALL(void, writedebuginfo_245001_1926258066)(Debuginfo198010* self0, NimStringDesc* file0);
N_NIMCALL(Filestreamobj151477*, newfilestream_151543_1780494535)(NimStringDesc* filename0, Filemode12409 mode0);
N_NIMCALL(void, store_245008_1318663698)(Streamobj150418* s0, Debuginfo198010* data0);
N_NIMCALL(void, close_150471_1780494535)(Streamobj150418* s0);
Debuginfo198010 gdebuginfo_198470_1926258066;
TNimType NTI198010; /* DebugInfo */
extern TNimType NTI104; /* int */
TNimType NTI198006; /* FilenameMapping */
extern TNimType NTI138; /* string */
TNimType NTI198004; /* FilenameHash */
TNimType NTI198022; /* seq[FilenameMapping] */
TNimType NTI198008; /* EnumDesc */
TNimType NTI198019; /* (string, int) */
TNimType NTI198018; /* seq[(string, int)] */
TNimType NTI198024; /* seq[EnumDesc] */
extern TNimType NTI130; /* bool */
extern Gcheap50618 gch_50658_1689653243;
N_NIMCALL(void, TMP565)(void* p, NI op) {
	TY198022* a;
	NI LOC1;
	a = (TY198022*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].package, op);
	nimGCvisit((void*)a->data[LOC1].file, op);
	}
}
N_NIMCALL(void, TMP568)(void* p, NI op) {
	TY198018* a;
	NI LOC1;
	a = (TY198018*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	}
}
N_NIMCALL(void, TMP569)(void* p, NI op) {
	TY198024* a;
	NI LOC1;
	a = (TY198024*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].name, op);
	nimGCvisit((void*)a->data[LOC1].values, op);
	}
}
N_NIMCALL(void, TMP570)() {
	nimGCvisit((void*)gdebuginfo_198470_1926258066.files, 0);
	nimGCvisit((void*)gdebuginfo_198470_1926258066.enums, 0);
}

N_NIMCALL(void, init_198434_1926258066)(Debuginfo198010* self0) {
	(*self0).version = ((NI) 1);
	unsureAsgnRef((void**) (&(*self0).files), (TY198022*) newSeq((&NTI198022), 0));
	unsureAsgnRef((void**) (&(*self0).enums), (TY198024*) newSeq((&NTI198024), 0));
}

static N_INLINE(NU32, sdbmhash_198027_1926258066)(NU32 hash0, NIM_CHAR c0) {
	NU32 result0;
{	result0 = (NU32)0;
	result0 = (NU32)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)(((NU32) (((NU8)(c0))))) + (NU32)((NU32)((NU64)(hash0) << (NU64)(((NI) 6)))))) + (NU32)((NU32)((NU64)(hash0) << (NU64)(((NI) 16)))))) - (NU32)(hash0));
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NU32, sdbmhash_198078_1926258066)(NimStringDesc* package0, NimStringDesc* file0) {
	NU32 result0;
	result0 = (NU32)0;
	result0 = ((NU32) 0);
	{
		NI i_198099_1926258066;
		NI HEX3Atmp_198111_1926258066;
		NI i_198114_1926258066;
		i_198099_1926258066 = (NI)0;
		HEX3Atmp_198111_1926258066 = (NI)0;
		HEX3Atmp_198111_1926258066 = (package0 ? package0->Sup.len : 0);
		i_198114_1926258066 = ((NI) 0);
		{
			while (1) {
				if (!(i_198114_1926258066 < HEX3Atmp_198111_1926258066)) goto LA3;
				i_198099_1926258066 = i_198114_1926258066;
				result0 = sdbmhash_198027_1926258066(result0, package0->data[i_198099_1926258066]);
				i_198114_1926258066 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = sdbmhash_198027_1926258066(result0, 46);
	{
		NI i_198109_1926258066;
		NI HEX3Atmp_198117_1926258066;
		NI i_198120_1926258066;
		i_198109_1926258066 = (NI)0;
		HEX3Atmp_198117_1926258066 = (NI)0;
		HEX3Atmp_198117_1926258066 = (file0 ? file0->Sup.len : 0);
		i_198120_1926258066 = ((NI) 0);
		{
			while (1) {
				if (!(i_198120_1926258066 < HEX3Atmp_198117_1926258066)) goto LA6;
				i_198109_1926258066 = i_198120_1926258066;
				result0 = sdbmhash_198027_1926258066(result0, file0->data[i_198109_1926258066]);
				i_198120_1926258066 += ((NI) 1);
			} LA6: ;
		}
	}
	return result0;
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

static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0) {
	Cell48105* result0;
	result0 = (Cell48105*)0;
	result0 = ((Cell48105*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell48105))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0) {
	addzct_52217_1689653243((&gch_50658_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell48105* c0;
	c0 = usrtocell_52240_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53401_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(NU32, register_198122_1926258066)(Debuginfo198010* self0, NimStringDesc* package0, NimStringDesc* file0) {
	NU32 result0;
	Filenamemapping198006 LOC14;
	NimStringDesc* LOC15;
	NimStringDesc* LOC16;
{	result0 = (NU32)0;
	result0 = sdbmhash_198078_1926258066(package0, file0);
	{
		Filenamemapping198006 f_198202_1926258066;
		TY198022* HEX3Atmp_198223_1926258066;
		NI i_198226_1926258066;
		NI L_198228_1926258066;
		memset((void*)(&f_198202_1926258066), 0, sizeof(f_198202_1926258066));
		HEX3Atmp_198223_1926258066 = (TY198022*)0;
		HEX3Atmp_198223_1926258066 = (*self0).files;
		i_198226_1926258066 = ((NI) 0);
		L_198228_1926258066 = (HEX3Atmp_198223_1926258066 ? HEX3Atmp_198223_1926258066->Sup.len : 0);
		{
			while (1) {
				if (!(i_198226_1926258066 < L_198228_1926258066)) goto LA3;
				f_198202_1926258066.package = HEX3Atmp_198223_1926258066->data[i_198226_1926258066].package;
				f_198202_1926258066.file = HEX3Atmp_198223_1926258066->data[i_198226_1926258066].file;
				f_198202_1926258066.mangled = HEX3Atmp_198223_1926258066->data[i_198226_1926258066].mangled;
				{
					if (!(f_198202_1926258066.mangled == result0)) goto LA6;
					{
						NIM_BOOL LOC10;
						LOC10 = (NIM_BOOL)0;
						LOC10 = eqStrings(f_198202_1926258066.package, package0);
						if (!(LOC10)) goto LA11;
						LOC10 = eqStrings(f_198202_1926258066.file, file0);
						LA11: ;
						if (!LOC10) goto LA12;
						goto BeforeRet;
					}
					LA12: ;
					(*self0).conflicts = NIM_TRUE;
					goto LA1;
				}
				LA6: ;
				i_198226_1926258066 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
	memset((void*)(&LOC14), 0, sizeof(LOC14));
	memset((void*)(&LOC14), 0, sizeof(LOC14));
	LOC14.package = copyString(package0);
	LOC14.file = copyString(file0);
	LOC14.mangled = result0;
	(*self0).files = (TY198022*) incrSeqV2(&((*self0).files)->Sup, sizeof(Filenamemapping198006));
	LOC15 = (NimStringDesc*)0;
	LOC15 = (*self0).files->data[(*self0).files->Sup.len].package; (*self0).files->data[(*self0).files->Sup.len].package = copyStringRC1(LOC14.package);
	if (LOC15) nimGCunrefNoCycle(LOC15);
	LOC16 = (NimStringDesc*)0;
	LOC16 = (*self0).files->data[(*self0).files->Sup.len].file; (*self0).files->data[(*self0).files->Sup.len].file = copyStringRC1(LOC14.file);
	if (LOC16) nimGCunrefNoCycle(LOC16);
	(*self0).files->data[(*self0).files->Sup.len].mangled = LOC14.mangled;
	++(*self0).files->Sup.len;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, hasenum_198230_1926258066)(Debuginfo198010* self0, NimStringDesc* ename0, NI id0, NU32 owner0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		Enumdesc198008 en_198402_1926258066;
		TY198024* HEX3Atmp_198413_1926258066;
		NI i_198416_1926258066;
		NI L_198418_1926258066;
		memset((void*)(&en_198402_1926258066), 0, sizeof(en_198402_1926258066));
		HEX3Atmp_198413_1926258066 = (TY198024*)0;
		HEX3Atmp_198413_1926258066 = (*self0).enums;
		i_198416_1926258066 = ((NI) 0);
		L_198418_1926258066 = (HEX3Atmp_198413_1926258066 ? HEX3Atmp_198413_1926258066->Sup.len : 0);
		{
			while (1) {
				if (!(i_198416_1926258066 < L_198418_1926258066)) goto LA3;
				memcpy((void*)(&en_198402_1926258066), (NIM_CONST void*)(&HEX3Atmp_198413_1926258066->data[i_198416_1926258066]), sizeof(en_198402_1926258066));
				{
					NIM_BOOL LOC6;
					NIM_BOOL LOC7;
					LOC6 = (NIM_BOOL)0;
					LOC7 = (NIM_BOOL)0;
					LOC7 = (en_198402_1926258066.owner == owner0);
					if (!(LOC7)) goto LA8;
					LOC7 = eqStrings(en_198402_1926258066.name, ename0);
					LA8: ;
					LOC6 = LOC7;
					if (!(LOC6)) goto LA9;
					LOC6 = (en_198402_1926258066.id == id0);
					LA9: ;
					if (!LOC6) goto LA10;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA10: ;
				i_198416_1926258066 += ((NI) 1);
			} LA3: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, registerenum_198419_1926258066)(Debuginfo198010* self0, Enumdesc198008* ed0) {
	(*self0).enums = (TY198024*) incrSeqV2(&((*self0).enums)->Sup, sizeof(Enumdesc198008));
	genericAssign((void*)(&(*self0).enums->data[(*self0).enums->Sup.len]), (void*)ed0, (&NTI198008));
	++(*self0).enums->Sup.len;
}

N_NIMCALL(void, writedebuginfo_245001_1926258066)(Debuginfo198010* self0, NimStringDesc* file0) {
	Filestreamobj151477* s0;
	Streamobj150418* LOC1;
	Streamobj150418* LOC2;
	s0 = newfilestream_151543_1780494535(file0, ((Filemode12409) 1));
	LOC1 = (Streamobj150418*)0;
	LOC1 = &s0->Sup;
	store_245008_1318663698(LOC1, (&(*self0)));
	LOC2 = (Streamobj150418*)0;
	LOC2 = &s0->Sup;
	close_150471_1780494535(LOC2);
}

N_NIMCALL(void, writedebuginfo_245037_1926258066)(NimStringDesc* file0) {
	writedebuginfo_245001_1926258066((&gdebuginfo_198470_1926258066), file0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_debuginfoInit000)(void) {
nimRegisterGlobalMarker(TMP570);
	init_198434_1926258066((&gdebuginfo_198470_1926258066));
}

NIM_EXTERNC N_NOINLINE(void, compiler_debuginfoDatInit000)(void) {
static TNimNode* TMP563[4];
static TNimNode* TMP564[3];
static TNimNode* TMP566[5];
static TNimNode* TMP567[2];
static TNimNode TMP561[18];
NTI198010.size = sizeof(Debuginfo198010);
NTI198010.kind = 18;
NTI198010.base = 0;
NTI198010.flags = 2;
TMP563[0] = &TMP561[1];
TMP561[1].kind = 1;
TMP561[1].offset = offsetof(Debuginfo198010, version);
TMP561[1].typ = (&NTI104);
TMP561[1].name = "version";
TMP563[1] = &TMP561[2];
NTI198006.size = sizeof(Filenamemapping198006);
NTI198006.kind = 18;
NTI198006.base = 0;
NTI198006.flags = 2;
TMP564[0] = &TMP561[4];
TMP561[4].kind = 1;
TMP561[4].offset = offsetof(Filenamemapping198006, package);
TMP561[4].typ = (&NTI138);
TMP561[4].name = "package";
TMP564[1] = &TMP561[5];
TMP561[5].kind = 1;
TMP561[5].offset = offsetof(Filenamemapping198006, file);
TMP561[5].typ = (&NTI138);
TMP561[5].name = "file";
TMP564[2] = &TMP561[6];
NTI198004.size = sizeof(NU32);
NTI198004.kind = 43;
NTI198004.base = 0;
NTI198004.flags = 3;
TMP561[6].kind = 1;
TMP561[6].offset = offsetof(Filenamemapping198006, mangled);
TMP561[6].typ = (&NTI198004);
TMP561[6].name = "mangled";
TMP561[3].len = 3; TMP561[3].kind = 2; TMP561[3].sons = &TMP564[0];
NTI198006.node = &TMP561[3];
NTI198022.size = sizeof(TY198022*);
NTI198022.kind = 24;
NTI198022.base = (&NTI198006);
NTI198022.flags = 2;
NTI198022.marker = TMP565;
TMP561[2].kind = 1;
TMP561[2].offset = offsetof(Debuginfo198010, files);
TMP561[2].typ = (&NTI198022);
TMP561[2].name = "files";
TMP563[2] = &TMP561[7];
NTI198008.size = sizeof(Enumdesc198008);
NTI198008.kind = 18;
NTI198008.base = 0;
NTI198008.flags = 2;
TMP566[0] = &TMP561[9];
TMP561[9].kind = 1;
TMP561[9].offset = offsetof(Enumdesc198008, size);
TMP561[9].typ = (&NTI104);
TMP561[9].name = "size";
TMP566[1] = &TMP561[10];
TMP561[10].kind = 1;
TMP561[10].offset = offsetof(Enumdesc198008, owner);
TMP561[10].typ = (&NTI198004);
TMP561[10].name = "owner";
TMP566[2] = &TMP561[11];
TMP561[11].kind = 1;
TMP561[11].offset = offsetof(Enumdesc198008, id);
TMP561[11].typ = (&NTI104);
TMP561[11].name = "id";
TMP566[3] = &TMP561[12];
TMP561[12].kind = 1;
TMP561[12].offset = offsetof(Enumdesc198008, name);
TMP561[12].typ = (&NTI138);
TMP561[12].name = "name";
TMP566[4] = &TMP561[13];
NTI198019.size = sizeof(TY198019);
NTI198019.kind = 18;
NTI198019.base = 0;
NTI198019.flags = 2;
TMP567[0] = &TMP561[15];
TMP561[15].kind = 1;
TMP561[15].offset = offsetof(TY198019, Field0);
TMP561[15].typ = (&NTI138);
TMP561[15].name = "Field0";
TMP567[1] = &TMP561[16];
TMP561[16].kind = 1;
TMP561[16].offset = offsetof(TY198019, Field1);
TMP561[16].typ = (&NTI104);
TMP561[16].name = "Field1";
TMP561[14].len = 2; TMP561[14].kind = 2; TMP561[14].sons = &TMP567[0];
NTI198019.node = &TMP561[14];
NTI198018.size = sizeof(TY198018*);
NTI198018.kind = 24;
NTI198018.base = (&NTI198019);
NTI198018.flags = 2;
NTI198018.marker = TMP568;
TMP561[13].kind = 1;
TMP561[13].offset = offsetof(Enumdesc198008, values);
TMP561[13].typ = (&NTI198018);
TMP561[13].name = "values";
TMP561[8].len = 5; TMP561[8].kind = 2; TMP561[8].sons = &TMP566[0];
NTI198008.node = &TMP561[8];
NTI198024.size = sizeof(TY198024*);
NTI198024.kind = 24;
NTI198024.base = (&NTI198008);
NTI198024.flags = 2;
NTI198024.marker = TMP569;
TMP561[7].kind = 1;
TMP561[7].offset = offsetof(Debuginfo198010, enums);
TMP561[7].typ = (&NTI198024);
TMP561[7].name = "enums";
TMP563[3] = &TMP561[17];
TMP561[17].kind = 1;
TMP561[17].offset = offsetof(Debuginfo198010, conflicts);
TMP561[17].typ = (&NTI130);
TMP561[17].name = "conflicts";
TMP561[0].len = 4; TMP561[0].kind = 2; TMP561[0].sons = &TMP563[0];
NTI198010.node = &TMP561[0];
}

