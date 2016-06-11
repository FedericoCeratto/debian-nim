/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Any199901 Any199901;
typedef struct Indexerror3452 Indexerror3452;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30086 Memregion30086;
typedef struct Smallchunk30040 Smallchunk30040;
typedef struct Llchunk30080 Llchunk30080;
typedef struct Bigchunk30042 Bigchunk30042;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30084 Avlnode30084;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct Valueerror3446 Valueerror3446;
typedef struct TY204002 TY204002;
typedef struct TY204001 TY204001;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
struct  Any199901  {
void* value;
void* rawtypeptr;
};
typedef NU8 Tnimkind199803;
typedef NU8 Tnimtypeflag199809Set;
typedef N_NIMCALL_PTR(void, TY199888) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY199893) (void* p0);
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
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
};
typedef Smallchunk30040* TY30101[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30086  {
NI minlargeobj;
NI maxlargeobj;
TY30101 freesmallchunks;
Llchunk30080* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30042* freechunkslist;
Intset30014 chunkstarts;
Avlnode30084* root;
Avlnode30084* deleted;
Avlnode30084* last;
Avlnode30084* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellseq47921 tempstack;
NI recgclock;
Memregion30086 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
struct  Valueerror3446  {
  Exception Sup;
};
struct TY204002 {
NCSTRING Field0;
Any199901 Field1;
};
typedef NU8 Tnimnodekind199805;
typedef NU8 Tnimtypeflag199809;
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30040  {
  Basechunk30038 Sup;
Smallchunk30040* next;
Smallchunk30040* prev;
Freecell30030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30080  {
NI size;
NI acc;
Llchunk30080* next;
};
struct  Bigchunk30042  {
  Basechunk30038 Sup;
Bigchunk30042* next;
Bigchunk30042* prev;
NI align;
NF data;
};
typedef NI TY30019[8];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30019 bits;
};
typedef Avlnode30084* TY30091[2];
struct  Avlnode30084  {
TY30091 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30019 bits;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
};
struct TY204001 {
  TGenericSeq Sup;
  TY204002 data[SEQ_DECL_SIZE];
};
static N_INLINE(TNimType*, skiprange_201602_1760177012)(TNimType* x0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
static N_INLINE(Any199901, newany_200636_1760177012)(void* value0, TNimType* rawtype0);
N_NIMCALL(void, TMP4821)(void* p, NI op);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(void, fieldsaux_203202_1760177012)(void* p0, TNimNode* n0, TY204001** ret0);
N_NIMCALL(TNimNode*, selectbranch_200607_1760177012)(void* aa0, TNimNode* n0);
N_NIMCALL(NI, getdiscriminant_200234_1760177012)(void* aa0, TNimNode* n0);
N_NIMCALL(NimStringDesc*, getenumfield_210035_1760177012)(Any199901 x0, NI ordinalvalue0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NI64, getbiggestint_207003_1760177012)(Any199901 x0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
STRING_LITERAL(TMP4815, "index out of bounds", 19);
STRING_LITERAL(TMP4816, "sequence is nil", 15);
extern TNimType NTI137615; /* ref IndexError */
extern TNimType NTI3452; /* IndexError */
extern Gcheap50418 gch_50458_1689653243;
extern TNimType NTI23825; /* ref ValueError */
extern TNimType NTI3446; /* ValueError */
TNimType NTI204002; /* tuple[name: cstring, any: Any] */
extern TNimType NTI140; /* cstring */
TNimType NTI199901; /* Any */
extern TNimType NTI142; /* pointer */
TNimType NTI204001; /* seq[tuple[name: cstring, any: Any]] */

static N_INLINE(TNimType*, skiprange_201602_1760177012)(TNimType* x0) {
	TNimType* result0;
	result0 = (TNimType*)0;
	result0 = x0;
	{
		if (!((*result0).kind == ((Tnimkind199803) 20))) goto LA3;
		result0 = (*result0).base;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, getbool_209404_1760177012)(Any199901 x0) {
	NIM_BOOL result0;
	TNimType* t0;
	result0 = (NIM_BOOL)0;
	t0 = skiprange_201602_1760177012(((TNimType*) (x0.rawtypeptr)));
	result0 = (*((NIM_BOOL*) (x0.value)));
	return result0;
}

N_NIMCALL(NIM_CHAR, getchar_209212_1760177012)(Any199901 x0) {
	NIM_CHAR result0;
	TNimType* t0;
	result0 = (NIM_CHAR)0;
	t0 = skiprange_201602_1760177012(((TNimType*) (x0.rawtypeptr)));
	result0 = (*((NIM_CHAR*) (x0.value)));
	return result0;
}

N_NIMCALL(NIM_BOOL, isnil_202612_1760177012)(Any199901 x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = (*((void**) (x0.value))) == 0;
	return result0;
}

N_NIMCALL(NI, len_202416_1760177012)(Any199901 x0) {
	NI result0;
	result0 = (NI)0;
	switch ((*((TNimType*) (x0.rawtypeptr))).kind) {
	case ((Tnimkind199803) 16):
	{
		result0 = (NI)((*((TNimType*) (x0.rawtypeptr))).size / (*(*((TNimType*) (x0.rawtypeptr))).base).size);
	}
	break;
	case ((Tnimkind199803) 24):
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

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47905* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(Any199901, newany_200636_1760177012)(void* value0, TNimType* rawtype0) {
	Any199901 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = value0;
	result0.rawtypeptr = ((void*) (rawtype0));
	return result0;
}

N_NIMCALL(Any199901, HEX5BHEX5D_201615_1760177012)(Any199901 x0, NI i0) {
	Any199901 result0;
{	memset((void*)(&result0), 0, sizeof(result0));
	switch ((*((TNimType*) (x0.rawtypeptr))).kind) {
	case ((Tnimkind199803) 16):
	{
		NI bs0;
		bs0 = (*(*((TNimType*) (x0.rawtypeptr))).base).size;
		{
			Indexerror3452* e_201633_1760177012;
			NimStringDesc* LOC6;
			if (!((NU64)((NI)((*((TNimType*) (x0.rawtypeptr))).size / bs0)) <= (NU64)(i0))) goto LA4;
			e_201633_1760177012 = (Indexerror3452*)0;
			e_201633_1760177012 = (Indexerror3452*) newObj((&NTI137615), sizeof(Indexerror3452));
			(*e_201633_1760177012).Sup.Sup.m_type = (&NTI3452);
			LOC6 = (NimStringDesc*)0;
			LOC6 = (*e_201633_1760177012).Sup.message; (*e_201633_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &TMP4815));
			if (LOC6) nimGCunrefNoCycle(LOC6);
			raiseException((Exception*)e_201633_1760177012, "IndexError");
		}
		LA4: ;
		result0 = newany_200636_1760177012(((void*) ((NI)(((NI) (x0.value)) + (NI)(i0 * bs0)))), (*((TNimType*) (x0.rawtypeptr))).base);
		goto BeforeRet;
	}
	break;
	case ((Tnimkind199803) 24):
	{
		void* s0;
		NI bs0;
		s0 = (*((void**) (x0.value)));
		{
			Valueerror3446* e_201647_1760177012;
			NimStringDesc* LOC12;
			if (!(s0 == NIM_NIL)) goto LA10;
			e_201647_1760177012 = (Valueerror3446*)0;
			e_201647_1760177012 = (Valueerror3446*) newObj((&NTI23825), sizeof(Valueerror3446));
			(*e_201647_1760177012).Sup.Sup.m_type = (&NTI3446);
			LOC12 = (NimStringDesc*)0;
			LOC12 = (*e_201647_1760177012).Sup.message; (*e_201647_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &TMP4816));
			if (LOC12) nimGCunrefNoCycle(LOC12);
			raiseException((Exception*)e_201647_1760177012, "ValueError");
		}
		LA10: ;
		bs0 = (*(*((TNimType*) (x0.rawtypeptr))).base).size;
		{
			Indexerror3452* e_201670_1760177012;
			NimStringDesc* LOC17;
			if (!((NU64)((*((TGenericSeq*) (s0))).len) <= (NU64)(i0))) goto LA15;
			e_201670_1760177012 = (Indexerror3452*)0;
			e_201670_1760177012 = (Indexerror3452*) newObj((&NTI137615), sizeof(Indexerror3452));
			(*e_201670_1760177012).Sup.Sup.m_type = (&NTI3452);
			LOC17 = (NimStringDesc*)0;
			LOC17 = (*e_201670_1760177012).Sup.message; (*e_201670_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &TMP4815));
			if (LOC17) nimGCunrefNoCycle(LOC17);
			raiseException((Exception*)e_201670_1760177012, "IndexError");
		}
		LA15: ;
		result0 = newany_200636_1760177012(((void*) ((NI)(((NI) (s0)) + (NI)(((NI) 16) + (NI)(i0 * bs0))))), (*((TNimType*) (x0.rawtypeptr))).base);
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
N_NIMCALL(void, TMP4821)(void* p, NI op) {
	TY204001* a;
	NI LOC1;
	a = (TY204001*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(NI, getdiscriminant_200234_1760177012)(void* aa0, TNimNode* n0) {
	NI result0;
	NI d0;
	NI a0;
{	result0 = (NI)0;
	d0 = (NI)0;
	a0 = ((NI) (aa0));
	switch ((*(*n0).typ).size) {
	case ((NI) 1):
	{
		d0 = ((NI)(NU)(NU8)((*((NI8*) ((NI)((NU64)(a0) + (NU64)((*n0).offset)))))));
	}
	break;
	case ((NI) 2):
	{
		d0 = ((NI)(NU)(NU16)((*((NI16*) ((NI)((NU64)(a0) + (NU64)((*n0).offset)))))));
	}
	break;
	case ((NI) 4):
	{
		d0 = ((NI) ((*((NI32*) ((NI)((NU64)(a0) + (NU64)((*n0).offset)))))));
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

N_NIMCALL(TNimNode*, selectbranch_200607_1760177012)(void* aa0, TNimNode* n0) {
	TNimNode* result0;
	NI discr0;
	result0 = (TNimNode*)0;
	discr0 = getdiscriminant_200234_1760177012(aa0, n0);
	{
		if (!((NU64)(discr0) < (NU64)((*n0).len))) goto LA3;
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

N_NIMCALL(void, fieldsaux_203202_1760177012)(void* p0, TNimNode* n0, TY204001** ret0) {
	switch ((*n0).kind) {
	case ((Tnimnodekind199805) 0):
	{
	}
	break;
	case ((Tnimnodekind199805) 1):
	{
		TY204002 LOC3;
		LOC3.Field0 = (*n0).name;
		LOC3.Field1 = newany_200636_1760177012(((void*) ((NI)(((NI) (p0)) + (*n0).offset))), (*n0).typ);
		(*ret0) = (TY204001*) incrSeqV2(&((*ret0))->Sup, sizeof(TY204002));
		(*ret0)->data[(*ret0)->Sup.len] = LOC3;
		++(*ret0)->Sup.len;
	}
	break;
	case ((Tnimnodekind199805) 2):
	{
		{
			NI i_203610_1760177012;
			NI HEX3Atmp_203638_1760177012;
			NI res_203641_1760177012;
			i_203610_1760177012 = (NI)0;
			HEX3Atmp_203638_1760177012 = (NI)0;
			HEX3Atmp_203638_1760177012 = (NI)((*n0).len - ((NI) 1));
			res_203641_1760177012 = ((NI) 0);
			{
				while (1) {
					if (!(res_203641_1760177012 <= HEX3Atmp_203638_1760177012)) goto LA7;
					i_203610_1760177012 = res_203641_1760177012;
					fieldsaux_203202_1760177012(p0, (*n0).sons[(i_203610_1760177012)- 0], ret0);
					res_203641_1760177012 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	break;
	case ((Tnimnodekind199805) 3):
	{
		TNimNode* m0;
		TY204002 LOC9;
		m0 = selectbranch_200607_1760177012(p0, n0);
		LOC9.Field0 = (*n0).name;
		LOC9.Field1 = newany_200636_1760177012(((void*) ((NI)(((NI) (p0)) + (*n0).offset))), (*n0).typ);
		(*ret0) = (TY204001*) incrSeqV2(&((*ret0))->Sup, sizeof(TY204002));
		(*ret0)->data[(*ret0)->Sup.len] = LOC9;
		++(*ret0)->Sup.len;
		{
			if (!!((m0 == NIM_NIL))) goto LA12;
			fieldsaux_203202_1760177012(p0, m0, ret0);
		}
		LA12: ;
	}
	break;
	}
}

N_NIMCALL(Any199901, skiprange_209604_1760177012)(Any199901 x0) {
	Any199901 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.rawtypeptr = ((void*) ((*((TNimType*) (x0.rawtypeptr))).base));
	result0.value = x0.value;
	return result0;
}

N_NIMCALL(NimStringDesc*, getenumfield_210035_1760177012)(Any199901 x0, NI ordinalvalue0) {
	NimStringDesc* result0;
	TNimType* typ0;
	NI e0;
{	result0 = (NimStringDesc*)0;
	typ0 = skiprange_201602_1760177012(((TNimType*) (x0.rawtypeptr)));
	e0 = ordinalvalue0;
	{
		if (!!((((*typ0).flags &(1U<<((NU)(((Tnimtypeflag199809) 2))&7U)))!=0))) goto LA3;
		{
			if (!((NU64)(e0) < (NU64)((*(*typ0).node).len))) goto LA7;
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
			NI i_210232_1760177012;
			NI HEX3Atmp_210235_1760177012;
			NI res_210238_1760177012;
			i_210232_1760177012 = (NI)0;
			HEX3Atmp_210235_1760177012 = (NI)0;
			HEX3Atmp_210235_1760177012 = (NI)((*n0).len - ((NI) 1));
			res_210238_1760177012 = ((NI) 0);
			{
				while (1) {
					if (!(res_210238_1760177012 <= HEX3Atmp_210235_1760177012)) goto LA12;
					i_210232_1760177012 = res_210238_1760177012;
					{
						if (!((*s0[(i_210232_1760177012)- 0]).offset == e0)) goto LA15;
						result0 = cstrToNimstr((*s0[(i_210232_1760177012)- 0]).name);
						goto BeforeRet;
					}
					LA15: ;
					res_210238_1760177012 += ((NI) 1);
				} LA12: ;
			}
		}
	}
	LA1: ;
	result0 = nimIntToStr(e0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI64, getbiggestint_207003_1760177012)(Any199901 x0) {
	NI64 result0;
	TNimType* t0;
	result0 = (NI64)0;
	t0 = skiprange_201602_1760177012(((TNimType*) (x0.rawtypeptr)));
	switch ((*t0).kind) {
	case ((Tnimkind199803) 31):
	{
		result0 = ((NI64) ((*((NI*) (x0.value)))));
	}
	break;
	case ((Tnimkind199803) 32):
	{
		result0 = ((NI64) ((*((NI8*) (x0.value)))));
	}
	break;
	case ((Tnimkind199803) 33):
	{
		result0 = ((NI64) ((*((NI16*) (x0.value)))));
	}
	break;
	case ((Tnimkind199803) 34):
	{
		result0 = ((NI64) ((*((NI32*) (x0.value)))));
	}
	break;
	case ((Tnimkind199803) 35):
	case ((Tnimkind199803) 44):
	{
		result0 = (*((NI64*) (x0.value)));
	}
	break;
	case ((Tnimkind199803) 1):
	{
		result0 = ((NI64) ((*((NIM_BOOL*) (x0.value)))));
	}
	break;
	case ((Tnimkind199803) 2):
	{
		result0 = ((NI64) (((NU8)((*((NIM_CHAR*) (x0.value)))))));
	}
	break;
	case ((Tnimkind199803) 14):
	case ((Tnimkind199803) 19):
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
	case ((Tnimkind199803) 40):
	{
		result0 = ((NI64) ((*((NU*) (x0.value)))));
	}
	break;
	case ((Tnimkind199803) 41):
	{
		result0 = ((NI64) ((*((NU8*) (x0.value)))));
	}
	break;
	case ((Tnimkind199803) 42):
	{
		result0 = ((NI64) ((*((NU16*) (x0.value)))));
	}
	break;
	case ((Tnimkind199803) 43):
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

N_NIMCALL(NimStringDesc*, getenumfield_210242_1760177012)(Any199901 x0) {
	NimStringDesc* result0;
	NI64 LOC1;
	result0 = (NimStringDesc*)0;
	LOC1 = (NI64)0;
	LOC1 = getbiggestint_207003_1760177012(x0);
	result0 = getenumfield_210035_1760177012(x0, ((NI) (LOC1)));
	return result0;
}

N_NIMCALL(void*, getpointer_202802_1760177012)(Any199901 x0) {
	void* result0;
	result0 = (void*)0;
	result0 = (*((void**) (x0.value)));
	return result0;
}

N_NIMCALL(Any199901, HEX5BHEX5D_205456_1760177012)(Any199901 x0) {
	Any199901 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = (*((void**) (x0.value)));
	result0.rawtypeptr = ((void*) ((*((TNimType*) (x0.rawtypeptr))).base));
	return result0;
}

N_NIMCALL(NimStringDesc*, getstring_211206_1760177012)(Any199901 x0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		if (!!((*((void**) (x0.value))) == 0)) goto LA3;
		result0 = copyString((*((NimStringDesc**) (x0.value))));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NF, getbiggestfloat_210803_1760177012)(Any199901 x0) {
	NF result0;
	TNimType* LOC1;
	result0 = (NF)0;
	LOC1 = (TNimType*)0;
	LOC1 = skiprange_201602_1760177012(((TNimType*) (x0.rawtypeptr)));
	switch ((*LOC1).kind) {
	case ((Tnimkind199803) 36):
	{
		result0 = (*((NF*) (x0.value)));
	}
	break;
	case ((Tnimkind199803) 37):
	{
		result0 = ((NF) ((*((NF32*) (x0.value)))));
	}
	break;
	case ((Tnimkind199803) 38):
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
static TNimNode* TMP4819[2];
static TNimNode* TMP4820[2];
static TNimNode TMP573[6];
NTI204002.size = sizeof(TY204002);
NTI204002.kind = 18;
NTI204002.base = 0;
NTI204002.flags = 3;
TMP4819[0] = &TMP573[1];
TMP573[1].kind = 1;
TMP573[1].offset = offsetof(TY204002, Field0);
TMP573[1].typ = (&NTI140);
TMP573[1].name = "Field0";
TMP4819[1] = &TMP573[2];
NTI199901.size = sizeof(Any199901);
NTI199901.kind = 18;
NTI199901.base = 0;
NTI199901.flags = 3;
TMP4820[0] = &TMP573[4];
TMP573[4].kind = 1;
TMP573[4].offset = offsetof(Any199901, value);
TMP573[4].typ = (&NTI142);
TMP573[4].name = "value";
TMP4820[1] = &TMP573[5];
TMP573[5].kind = 1;
TMP573[5].offset = offsetof(Any199901, rawtypeptr);
TMP573[5].typ = (&NTI142);
TMP573[5].name = "rawTypePtr";
TMP573[3].len = 2; TMP573[3].kind = 2; TMP573[3].sons = &TMP4820[0];
NTI199901.node = &TMP573[3];
TMP573[2].kind = 1;
TMP573[2].offset = offsetof(TY204002, Field1);
TMP573[2].typ = (&NTI199901);
TMP573[2].name = "Field1";
TMP573[0].len = 2; TMP573[0].kind = 2; TMP573[0].sons = &TMP4819[0];
NTI204002.node = &TMP573[0];
NTI204001.size = sizeof(TY204001*);
NTI204001.kind = 24;
NTI204001.base = (&NTI204002);
NTI204001.flags = 2;
NTI204001.marker = TMP4821;
}

