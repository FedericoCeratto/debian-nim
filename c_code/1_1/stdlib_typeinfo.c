/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Any200901 Any200901;
typedef struct Indexerror3452 Indexerror3452;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Valueerror3446 Valueerror3446;
typedef struct TY205002 TY205002;
typedef struct TY205001 TY205001;
typedef struct Basechunk29837 Basechunk29837;
typedef struct Freecell29829 Freecell29829;
struct  Any200901  {
void* value;
void* rawtypeptr;
};
typedef NU8 Tnimkind200803;
typedef NU8 Tnimtypeflag200809Set;
typedef N_NIMCALL_PTR(void, TY200888) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY200893) (void* p0);
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
struct  TNimObject  {
TNimType* m_type;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Indexerror3452  {
  Exception Sup;
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
struct  Valueerror3446  {
  Exception Sup;
};
struct TY205002 {
NCSTRING Field0;
Any200901 Field1;
};
typedef NU8 Tnimnodekind200805;
typedef NU8 Tnimtypeflag200809;
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
struct TY205001 {
  TGenericSeq Sup;
  TY205002 data[SEQ_DECL_SIZE];
};
static N_INLINE(TNimType*, skiprange_202602_1760177012)(TNimType* x0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47720* s0, Cell47704* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
static N_INLINE(Any200901, newany_201636_1760177012)(void* value0, TNimType* rawtype0);
N_NIMCALL(void, TMP4824)(void* p, NI op);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(void, fieldsaux_204202_1760177012)(void* p0, TNimNode* n0, TY205001** ret0);
N_NIMCALL(TNimNode*, selectbranch_201607_1760177012)(void* aa0, TNimNode* n0);
N_NIMCALL(NI, getdiscriminant_201234_1760177012)(void* aa0, TNimNode* n0);
N_NIMCALL(NimStringDesc*, getenumfield_211035_1760177012)(Any200901 x0, NI ordinalvalue0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NI64, getbiggestint_208003_1760177012)(Any200901 x0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
STRING_LITERAL(TMP4818, "index out of bounds", 19);
STRING_LITERAL(TMP4819, "sequence is nil", 15);
extern TNimType NTI202634; /* ref IndexError */
extern TNimType NTI3452; /* IndexError */
extern Gcheap50218 gch_50258_1689653243;
extern TNimType NTI23825; /* ref ValueError */
extern TNimType NTI3446; /* ValueError */
TNimType NTI205002; /* tuple[name: cstring, any: Any] */
extern TNimType NTI140; /* cstring */
TNimType NTI200901; /* Any */
extern TNimType NTI142; /* pointer */
TNimType NTI205001; /* seq[tuple[name: cstring, any: Any]] */

static N_INLINE(TNimType*, skiprange_202602_1760177012)(TNimType* x0) {
	TNimType* result0;
	result0 = (TNimType*)0;
	result0 = x0;
	{
		if (!((*result0).kind == ((Tnimkind200803) 20))) goto LA3;
		result0 = (*result0).base;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, getbool_210404_1760177012)(Any200901 x0) {
	NIM_BOOL result0;
	TNimType* t0;
	result0 = (NIM_BOOL)0;
	t0 = skiprange_202602_1760177012(((TNimType*) (x0.rawtypeptr)));
	result0 = (*((NIM_BOOL*) (x0.value)));
	return result0;
}

N_NIMCALL(NIM_CHAR, getchar_210212_1760177012)(Any200901 x0) {
	NIM_CHAR result0;
	TNimType* t0;
	result0 = (NIM_CHAR)0;
	t0 = skiprange_202602_1760177012(((TNimType*) (x0.rawtypeptr)));
	result0 = (*((NIM_CHAR*) (x0.value)));
	return result0;
}

N_NIMCALL(NIM_BOOL, isnil_203612_1760177012)(Any200901 x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = (*((void**) (x0.value))) == 0;
	return result0;
}

N_NIMCALL(NI, len_203416_1760177012)(Any200901 x0) {
	NI result0;
	result0 = (NI)0;
	switch ((*((TNimType*) (x0.rawtypeptr))).kind) {
	case ((Tnimkind200803) 16):
	{
		result0 = (NI)((*((TNimType*) (x0.rawtypeptr))).size / (*(*((TNimType*) (x0.rawtypeptr))).base).size);
	}
	break;
	case ((Tnimkind200803) 24):
	{
		result0 = (*((TGenericSeq*) ((*((void**) (x0.value)))))).len;
	}
	break;
	default:
	{
	}
	break;
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47704* c0;
	c0 = usrtocell_51840_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(Any200901, newany_201636_1760177012)(void* value0, TNimType* rawtype0) {
	Any200901 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = value0;
	result0.rawtypeptr = ((void*) (rawtype0));
	return result0;
}

N_NIMCALL(Any200901, HEX5BHEX5D_202615_1760177012)(Any200901 x0, NI i0) {
	Any200901 result0;
{	memset((void*)(&result0), 0, sizeof(result0));
	switch ((*((TNimType*) (x0.rawtypeptr))).kind) {
	case ((Tnimkind200803) 16):
	{
		NI bs0;
		bs0 = (*(*((TNimType*) (x0.rawtypeptr))).base).size;
		{
			Indexerror3452* e_202633_1760177012;
			NimStringDesc* LOC6;
			if (!((NU32)((NI)((*((TNimType*) (x0.rawtypeptr))).size / bs0)) <= (NU32)(i0))) goto LA4;
			e_202633_1760177012 = (Indexerror3452*)0;
			e_202633_1760177012 = (Indexerror3452*) newObj((&NTI202634), sizeof(Indexerror3452));
			(*e_202633_1760177012).Sup.Sup.m_type = (&NTI3452);
			LOC6 = (NimStringDesc*)0;
			LOC6 = (*e_202633_1760177012).Sup.message; (*e_202633_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &TMP4818));
			if (LOC6) nimGCunrefNoCycle(LOC6);
			raiseException((Exception*)e_202633_1760177012, "IndexError");
		}
		LA4: ;
		result0 = newany_201636_1760177012(((void*) ((NI)(((NI) (x0.value)) + (NI)(i0 * bs0)))), (*((TNimType*) (x0.rawtypeptr))).base);
		goto BeforeRet;
	}
	break;
	case ((Tnimkind200803) 24):
	{
		void* s0;
		NI bs0;
		s0 = (*((void**) (x0.value)));
		{
			Valueerror3446* e_202647_1760177012;
			NimStringDesc* LOC12;
			if (!(s0 == NIM_NIL)) goto LA10;
			e_202647_1760177012 = (Valueerror3446*)0;
			e_202647_1760177012 = (Valueerror3446*) newObj((&NTI23825), sizeof(Valueerror3446));
			(*e_202647_1760177012).Sup.Sup.m_type = (&NTI3446);
			LOC12 = (NimStringDesc*)0;
			LOC12 = (*e_202647_1760177012).Sup.message; (*e_202647_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &TMP4819));
			if (LOC12) nimGCunrefNoCycle(LOC12);
			raiseException((Exception*)e_202647_1760177012, "ValueError");
		}
		LA10: ;
		bs0 = (*(*((TNimType*) (x0.rawtypeptr))).base).size;
		{
			Indexerror3452* e_202670_1760177012;
			NimStringDesc* LOC17;
			if (!((NU32)((*((TGenericSeq*) (s0))).len) <= (NU32)(i0))) goto LA15;
			e_202670_1760177012 = (Indexerror3452*)0;
			e_202670_1760177012 = (Indexerror3452*) newObj((&NTI202634), sizeof(Indexerror3452));
			(*e_202670_1760177012).Sup.Sup.m_type = (&NTI3452);
			LOC17 = (NimStringDesc*)0;
			LOC17 = (*e_202670_1760177012).Sup.message; (*e_202670_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &TMP4818));
			if (LOC17) nimGCunrefNoCycle(LOC17);
			raiseException((Exception*)e_202670_1760177012, "IndexError");
		}
		LA15: ;
		result0 = newany_201636_1760177012(((void*) ((NI)(((NI) (s0)) + (NI)(((NI) 8) + (NI)(i0 * bs0))))), (*((TNimType*) (x0.rawtypeptr))).base);
		goto BeforeRet;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}
N_NIMCALL(void, TMP4824)(void* p, NI op) {
	TY205001* a;
	NI LOC1;
	a = (TY205001*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(NI, getdiscriminant_201234_1760177012)(void* aa0, TNimNode* n0) {
	NI result0;
	NI d0;
	NI a0;
{	result0 = (NI)0;
	d0 = (NI)0;
	a0 = ((NI) (aa0));
	switch ((*(*n0).typ).size) {
	case ((NI) 1):
	{
		d0 = ((NI)(NU)(NU8)((*((NI8*) ((NI)((NU32)(a0) + (NU32)((*n0).offset)))))));
	}
	break;
	case ((NI) 2):
	{
		d0 = ((NI)(NU)(NU16)((*((NI16*) ((NI)((NU32)(a0) + (NU32)((*n0).offset)))))));
	}
	break;
	case ((NI) 4):
	{
		d0 = ((NI) ((*((NI32*) ((NI)((NU32)(a0) + (NU32)((*n0).offset)))))));
	}
	break;
	default:
	{
	}
	break;
	}
	result0 = d0;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(TNimNode*, selectbranch_201607_1760177012)(void* aa0, TNimNode* n0) {
	TNimNode* result0;
	NI discr0;
	result0 = (TNimNode*)0;
	discr0 = getdiscriminant_201234_1760177012(aa0, n0);
	{
		if (!((NU32)(discr0) < (NU32)((*n0).len))) goto LA3;
		result0 = (*n0).sons[(discr0)- 0];
		{
			if (!(result0 == NIM_NIL)) goto LA7;
			result0 = (*n0).sons[((*n0).len)- 0];
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		result0 = (*n0).sons[((*n0).len)- 0];
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, fieldsaux_204202_1760177012)(void* p0, TNimNode* n0, TY205001** ret0) {
	switch ((*n0).kind) {
	case ((Tnimnodekind200805) 0):
	{
	}
	break;
	case ((Tnimnodekind200805) 1):
	{
		TY205002 LOC3;
		LOC3.Field0 = (*n0).name;
		LOC3.Field1 = newany_201636_1760177012(((void*) ((NI)(((NI) (p0)) + (*n0).offset))), (*n0).typ);
		(*ret0) = (TY205001*) incrSeqV2(&((*ret0))->Sup, sizeof(TY205002));
		(*ret0)->data[(*ret0)->Sup.len] = LOC3;
		++(*ret0)->Sup.len;
	}
	break;
	case ((Tnimnodekind200805) 2):
	{
		{
			NI i_204610_1760177012;
			NI HEX3Atmp_204638_1760177012;
			NI res_204641_1760177012;
			i_204610_1760177012 = (NI)0;
			HEX3Atmp_204638_1760177012 = (NI)0;
			HEX3Atmp_204638_1760177012 = (NI)((*n0).len - ((NI) 1));
			res_204641_1760177012 = ((NI) 0);
			{
				while (1) {
					if (!(res_204641_1760177012 <= HEX3Atmp_204638_1760177012)) goto LA7;
					i_204610_1760177012 = res_204641_1760177012;
					fieldsaux_204202_1760177012(p0, (*n0).sons[(i_204610_1760177012)- 0], ret0);
					res_204641_1760177012 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	break;
	case ((Tnimnodekind200805) 3):
	{
		TNimNode* m0;
		TY205002 LOC9;
		m0 = selectbranch_201607_1760177012(p0, n0);
		LOC9.Field0 = (*n0).name;
		LOC9.Field1 = newany_201636_1760177012(((void*) ((NI)(((NI) (p0)) + (*n0).offset))), (*n0).typ);
		(*ret0) = (TY205001*) incrSeqV2(&((*ret0))->Sup, sizeof(TY205002));
		(*ret0)->data[(*ret0)->Sup.len] = LOC9;
		++(*ret0)->Sup.len;
		{
			if (!!((m0 == NIM_NIL))) goto LA12;
			fieldsaux_204202_1760177012(p0, m0, ret0);
		}
		LA12: ;
	}
	break;
	}
}

N_NIMCALL(Any200901, skiprange_210604_1760177012)(Any200901 x0) {
	Any200901 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.rawtypeptr = ((void*) ((*((TNimType*) (x0.rawtypeptr))).base));
	result0.value = x0.value;
	return result0;
}

N_NIMCALL(NimStringDesc*, getenumfield_211035_1760177012)(Any200901 x0, NI ordinalvalue0) {
	NimStringDesc* result0;
	TNimType* typ0;
	NI e0;
{	result0 = (NimStringDesc*)0;
	typ0 = skiprange_202602_1760177012(((TNimType*) (x0.rawtypeptr)));
	e0 = ordinalvalue0;
	{
		if (!!((((*typ0).flags &(1U<<((NU)(((Tnimtypeflag200809) 2))&7U)))!=0))) goto LA3;
		{
			if (!((NU32)(e0) < (NU32)((*(*typ0).node).len))) goto LA7;
			result0 = cstrToNimstr((*(*(*typ0).node).sons[(e0)- 0]).name);
			goto BeforeRet;
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		TNimNode* n0;
		TNimNode** s0;
		n0 = (*typ0).node;
		s0 = (*n0).sons;
		{
			NI i_211232_1760177012;
			NI HEX3Atmp_211235_1760177012;
			NI res_211238_1760177012;
			i_211232_1760177012 = (NI)0;
			HEX3Atmp_211235_1760177012 = (NI)0;
			HEX3Atmp_211235_1760177012 = (NI)((*n0).len - ((NI) 1));
			res_211238_1760177012 = ((NI) 0);
			{
				while (1) {
					if (!(res_211238_1760177012 <= HEX3Atmp_211235_1760177012)) goto LA12;
					i_211232_1760177012 = res_211238_1760177012;
					{
						if (!((*s0[(i_211232_1760177012)- 0]).offset == e0)) goto LA15;
						result0 = cstrToNimstr((*s0[(i_211232_1760177012)- 0]).name);
						goto BeforeRet;
					}
					LA15: ;
					res_211238_1760177012 += ((NI) 1);
				} LA12: ;
			}
		}
	}
	LA1: ;
	result0 = nimIntToStr(e0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI64, getbiggestint_208003_1760177012)(Any200901 x0) {
	NI64 result0;
	TNimType* t0;
	result0 = (NI64)0;
	t0 = skiprange_202602_1760177012(((TNimType*) (x0.rawtypeptr)));
	switch ((*t0).kind) {
	case ((Tnimkind200803) 31):
	{
		result0 = ((NI64) ((*((NI*) (x0.value)))));
	}
	break;
	case ((Tnimkind200803) 32):
	{
		result0 = ((NI64) ((*((NI8*) (x0.value)))));
	}
	break;
	case ((Tnimkind200803) 33):
	{
		result0 = ((NI64) ((*((NI16*) (x0.value)))));
	}
	break;
	case ((Tnimkind200803) 34):
	{
		result0 = ((NI64) ((*((NI32*) (x0.value)))));
	}
	break;
	case ((Tnimkind200803) 35):
	case ((Tnimkind200803) 44):
	{
		result0 = (*((NI64*) (x0.value)));
	}
	break;
	case ((Tnimkind200803) 1):
	{
		result0 = ((NI64) ((*((NIM_BOOL*) (x0.value)))));
	}
	break;
	case ((Tnimkind200803) 2):
	{
		result0 = ((NI64) (((NU8)((*((NIM_CHAR*) (x0.value)))))));
	}
	break;
	case ((Tnimkind200803) 14):
	case ((Tnimkind200803) 19):
	{
		switch ((*t0).size) {
		case ((NI) 1):
		{
			result0 = ((NI64)(NU64)(NU8)((*((NI8*) (x0.value)))));
		}
		break;
		case ((NI) 2):
		{
			result0 = ((NI64)(NU64)(NU16)((*((NI16*) (x0.value)))));
		}
		break;
		case ((NI) 4):
		{
			result0 = ((NI64) ((*((NI32*) (x0.value)))));
		}
		break;
		case ((NI) 8):
		{
			result0 = (*((NI64*) (x0.value)));
		}
		break;
		default:
		{
		}
		break;
		}
	}
	break;
	case ((Tnimkind200803) 40):
	{
		result0 = ((NI64) ((*((NU*) (x0.value)))));
	}
	break;
	case ((Tnimkind200803) 41):
	{
		result0 = ((NI64) ((*((NU8*) (x0.value)))));
	}
	break;
	case ((Tnimkind200803) 42):
	{
		result0 = ((NI64) ((*((NU16*) (x0.value)))));
	}
	break;
	case ((Tnimkind200803) 43):
	{
		result0 = ((NI64) ((*((NU32*) (x0.value)))));
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}

N_NIMCALL(NimStringDesc*, getenumfield_211242_1760177012)(Any200901 x0) {
	NimStringDesc* result0;
	NI64 LOC1;
	result0 = (NimStringDesc*)0;
	LOC1 = (NI64)0;
	LOC1 = getbiggestint_208003_1760177012(x0);
	result0 = getenumfield_211035_1760177012(x0, ((NI) (LOC1)));
	return result0;
}

N_NIMCALL(void*, getpointer_203802_1760177012)(Any200901 x0) {
	void* result0;
	result0 = (void*)0;
	result0 = (*((void**) (x0.value)));
	return result0;
}

N_NIMCALL(Any200901, HEX5BHEX5D_206456_1760177012)(Any200901 x0) {
	Any200901 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = (*((void**) (x0.value)));
	result0.rawtypeptr = ((void*) ((*((TNimType*) (x0.rawtypeptr))).base));
	return result0;
}

N_NIMCALL(NimStringDesc*, getstring_212206_1760177012)(Any200901 x0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		if (!!((*((void**) (x0.value))) == 0)) goto LA3;
		result0 = copyString((*((NimStringDesc**) (x0.value))));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NF, getbiggestfloat_211803_1760177012)(Any200901 x0) {
	NF result0;
	TNimType* LOC1;
	result0 = (NF)0;
	LOC1 = (TNimType*)0;
	LOC1 = skiprange_202602_1760177012(((TNimType*) (x0.rawtypeptr)));
	switch ((*LOC1).kind) {
	case ((Tnimkind200803) 36):
	{
		result0 = (*((NF*) (x0.value)));
	}
	break;
	case ((Tnimkind200803) 37):
	{
		result0 = ((NF) ((*((NF32*) (x0.value)))));
	}
	break;
	case ((Tnimkind200803) 38):
	{
		result0 = (*((NF*) (x0.value)));
	}
	break;
	default:
	{
	}
	break;
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_typeinfoInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_typeinfoDatInit000)(void) {
static TNimNode* TMP4822[2];
static TNimNode* TMP4823[2];
static TNimNode TMP583[6];
NTI205002.size = sizeof(TY205002);
NTI205002.kind = 18;
NTI205002.base = 0;
NTI205002.flags = 3;
TMP4822[0] = &TMP583[1];
TMP583[1].kind = 1;
TMP583[1].offset = offsetof(TY205002, Field0);
TMP583[1].typ = (&NTI140);
TMP583[1].name = "Field0";
TMP4822[1] = &TMP583[2];
NTI200901.size = sizeof(Any200901);
NTI200901.kind = 18;
NTI200901.base = 0;
NTI200901.flags = 3;
TMP4823[0] = &TMP583[4];
TMP583[4].kind = 1;
TMP583[4].offset = offsetof(Any200901, value);
TMP583[4].typ = (&NTI142);
TMP583[4].name = "value";
TMP4823[1] = &TMP583[5];
TMP583[5].kind = 1;
TMP583[5].offset = offsetof(Any200901, rawtypeptr);
TMP583[5].typ = (&NTI142);
TMP583[5].name = "rawTypePtr";
TMP583[3].len = 2; TMP583[3].kind = 2; TMP583[3].sons = &TMP4823[0];
NTI200901.node = &TMP583[3];
TMP583[2].kind = 1;
TMP583[2].offset = offsetof(TY205002, Field1);
TMP583[2].typ = (&NTI200901);
TMP583[2].name = "Field1";
TMP583[0].len = 2; TMP583[0].kind = 2; TMP583[0].sons = &TMP4822[0];
NTI205002.node = &TMP583[0];
NTI205001.size = sizeof(TY205001*);
NTI205001.kind = 24;
NTI205001.base = (&NTI205002);
NTI205001.flags = 2;
NTI205001.marker = TMP4824;
}

