/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Any206101 Any206101;
typedef struct Indexerror3652 Indexerror3652;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29485 Memregion29485;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29479 Llchunk29479;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29483 Avlnode29483;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Valueerror3646 Valueerror3646;
typedef struct TY210202 TY210202;
typedef struct TY210201 TY210201;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
struct  Any206101  {
void* value;
void* rawtypeptr;
};
typedef NU8 Tnimkind206003;
typedef NU8 Tnimtypeflag206009Set;
typedef N_NIMCALL_PTR(void, TY206088) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY206093) (void* p0);
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
struct  Indexerror3652  {
  Exception Sup;
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
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29439* TY29500[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29485  {
NI minlargeobj;
NI maxlargeobj;
TY29500 freesmallchunks;
Llchunk29479* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29483* root;
Avlnode29483* deleted;
Avlnode29483* last;
Avlnode29483* freeavlnodes;
NIM_BOOL locked;
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
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29485 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  Valueerror3646  {
  Exception Sup;
};
struct TY210202 {
NCSTRING Field0;
Any206101 Field1;
};
typedef NU8 Tnimnodekind206005;
typedef NU8 Tnimtypeflag206009;
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29479  {
NI size;
NI acc;
Llchunk29479* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
typedef NI TY29418[16];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29483* TY29490[2];
struct  Avlnode29483  {
TY29490 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29418 bits;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct TY210201 {
  TGenericSeq Sup;
  TY210202 data[SEQ_DECL_SIZE];
};
static N_INLINE(TNimType*, skiprange_207802_1760177012)(TNimType* x0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47321* s0, Cell47305* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
static N_INLINE(Any206101, newany_206836_1760177012)(void* value0, TNimType* rawtype0);
N_NIMCALL(void, T1760177012_6)(void* p, NI op);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(void, fieldsaux_209402_1760177012)(void* p0, TNimNode* n0, TY210201** ret0);
N_NIMCALL(TNimNode*, selectbranch_206807_1760177012)(void* aa0, TNimNode* n0);
N_NIMCALL(NI, getdiscriminant_206434_1760177012)(void* aa0, TNimNode* n0);
N_NIMCALL(NimStringDesc*, getenumfield_216235_1760177012)(Any206101 x0, NI ordinalvalue0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NI64, getbiggestint_213203_1760177012)(Any206101 x0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
STRING_LITERAL(T1760177012_2, "index out of bounds", 19);
STRING_LITERAL(T1760177012_3, "sequence is nil", 15);
extern TNimType NTI143015; /* ref IndexError */
extern TNimType NTI3652; /* IndexError */
extern Gcheap49818 gch_49858_1689653243;
extern TNimType NTI23025; /* ref ValueError */
extern TNimType NTI3646; /* ValueError */
TNimType NTI210202; /* tuple[name: cstring, any: Any] */
extern TNimType NTI140; /* cstring */
TNimType NTI206101; /* Any */
extern TNimType NTI142; /* pointer */
TNimType NTI210201; /* seq[tuple[name: cstring, any: Any]] */

static N_INLINE(TNimType*, skiprange_207802_1760177012)(TNimType* x0) {
	TNimType* result0;
	result0 = (TNimType*)0;
	result0 = x0;
	{
		if (!((*result0).kind == ((Tnimkind206003) 20))) goto LA3;
		result0 = (*result0).base;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, getbool_215604_1760177012)(Any206101 x0) {
	NIM_BOOL result0;
	TNimType* t0;
	result0 = (NIM_BOOL)0;
	t0 = skiprange_207802_1760177012(((TNimType*) (x0.rawtypeptr)));
	result0 = (*((NIM_BOOL*) (x0.value)));
	return result0;
}

N_NIMCALL(NIM_CHAR, getchar_215412_1760177012)(Any206101 x0) {
	NIM_CHAR result0;
	TNimType* t0;
	result0 = (NIM_CHAR)0;
	t0 = skiprange_207802_1760177012(((TNimType*) (x0.rawtypeptr)));
	result0 = (*((NIM_CHAR*) (x0.value)));
	return result0;
}

N_NIMCALL(NIM_BOOL, isnil_208812_1760177012)(Any206101 x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = (*((void**) (x0.value))) == 0;
	return result0;
}

N_NIMCALL(NI, len_208616_1760177012)(Any206101 x0) {
	NI result0;
	result0 = (NI)0;
	switch ((*((TNimType*) (x0.rawtypeptr))).kind) {
	case ((Tnimkind206003) 16):
	{
		result0 = (NI)((*((TNimType*) (x0.rawtypeptr))).size / (*(*((TNimType*) (x0.rawtypeptr))).base).size);
	}
	break;
	case ((Tnimkind206003) 24):
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

static N_INLINE(Cell47305*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47305* result0;
	result0 = (Cell47305*)0;
	result0 = ((Cell47305*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47305))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47305* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47305* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(Any206101, newany_206836_1760177012)(void* value0, TNimType* rawtype0) {
	Any206101 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = value0;
	result0.rawtypeptr = ((void*) (rawtype0));
	return result0;
}

N_NIMCALL(Any206101, HEX5BHEX5D_207815_1760177012)(Any206101 x0, NI i0) {
	Any206101 result0;
{	memset((void*)(&result0), 0, sizeof(result0));
	switch ((*((TNimType*) (x0.rawtypeptr))).kind) {
	case ((Tnimkind206003) 16):
	{
		NI bs0;
		bs0 = (*(*((TNimType*) (x0.rawtypeptr))).base).size;
		{
			Indexerror3652* e_207833_1760177012;
			NimStringDesc* LOC6;
			if (!((NU32)((NI)((*((TNimType*) (x0.rawtypeptr))).size / bs0)) <= (NU32)(i0))) goto LA4;
			e_207833_1760177012 = (Indexerror3652*)0;
			e_207833_1760177012 = (Indexerror3652*) newObj((&NTI143015), sizeof(Indexerror3652));
			(*e_207833_1760177012).Sup.Sup.m_type = (&NTI3652);
			LOC6 = (NimStringDesc*)0;
			LOC6 = (*e_207833_1760177012).Sup.message; (*e_207833_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &T1760177012_2));
			if (LOC6) nimGCunrefNoCycle(LOC6);
			raiseException((Exception*)e_207833_1760177012, "IndexError");
		}
		LA4: ;
		result0 = newany_206836_1760177012(((void*) ((NI)(((NI) (x0.value)) + (NI)(i0 * bs0)))), (*((TNimType*) (x0.rawtypeptr))).base);
		goto BeforeRet;
	}
	break;
	case ((Tnimkind206003) 24):
	{
		void* s0;
		NI bs0;
		s0 = (*((void**) (x0.value)));
		{
			Valueerror3646* e_207847_1760177012;
			NimStringDesc* LOC12;
			if (!(s0 == NIM_NIL)) goto LA10;
			e_207847_1760177012 = (Valueerror3646*)0;
			e_207847_1760177012 = (Valueerror3646*) newObj((&NTI23025), sizeof(Valueerror3646));
			(*e_207847_1760177012).Sup.Sup.m_type = (&NTI3646);
			LOC12 = (NimStringDesc*)0;
			LOC12 = (*e_207847_1760177012).Sup.message; (*e_207847_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &T1760177012_3));
			if (LOC12) nimGCunrefNoCycle(LOC12);
			raiseException((Exception*)e_207847_1760177012, "ValueError");
		}
		LA10: ;
		bs0 = (*(*((TNimType*) (x0.rawtypeptr))).base).size;
		{
			Indexerror3652* e_207870_1760177012;
			NimStringDesc* LOC17;
			if (!((NU32)((*((TGenericSeq*) (s0))).len) <= (NU32)(i0))) goto LA15;
			e_207870_1760177012 = (Indexerror3652*)0;
			e_207870_1760177012 = (Indexerror3652*) newObj((&NTI143015), sizeof(Indexerror3652));
			(*e_207870_1760177012).Sup.Sup.m_type = (&NTI3652);
			LOC17 = (NimStringDesc*)0;
			LOC17 = (*e_207870_1760177012).Sup.message; (*e_207870_1760177012).Sup.message = copyStringRC1(((NimStringDesc*) &T1760177012_2));
			if (LOC17) nimGCunrefNoCycle(LOC17);
			raiseException((Exception*)e_207870_1760177012, "IndexError");
		}
		LA15: ;
		result0 = newany_206836_1760177012(((void*) ((NI)(((NI) (s0)) + (NI)(((NI) 8) + (NI)(i0 * bs0))))), (*((TNimType*) (x0.rawtypeptr))).base);
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
N_NIMCALL(void, T1760177012_6)(void* p, NI op) {
	TY210201* a;
	NI LOC1;
	a = (TY210201*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(NI, getdiscriminant_206434_1760177012)(void* aa0, TNimNode* n0) {
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

N_NIMCALL(TNimNode*, selectbranch_206807_1760177012)(void* aa0, TNimNode* n0) {
	TNimNode* result0;
	NI discr0;
	result0 = (TNimNode*)0;
	discr0 = getdiscriminant_206434_1760177012(aa0, n0);
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

N_NIMCALL(void, fieldsaux_209402_1760177012)(void* p0, TNimNode* n0, TY210201** ret0) {
	switch ((*n0).kind) {
	case ((Tnimnodekind206005) 0):
	{
	}
	break;
	case ((Tnimnodekind206005) 1):
	{
		TY210202 LOC3;
		LOC3.Field0 = (*n0).name;
		LOC3.Field1 = newany_206836_1760177012(((void*) ((NI)(((NI) (p0)) + (*n0).offset))), (*n0).typ);
		(*ret0) = (TY210201*) incrSeqV2(&((*ret0))->Sup, sizeof(TY210202));
		(*ret0)->data[(*ret0)->Sup.len] = LOC3;
		++(*ret0)->Sup.len;
	}
	break;
	case ((Tnimnodekind206005) 2):
	{
		{
			NI i_209810_1760177012;
			NI HEX3Atmp_209838_1760177012;
			NI res_209841_1760177012;
			i_209810_1760177012 = (NI)0;
			HEX3Atmp_209838_1760177012 = (NI)0;
			HEX3Atmp_209838_1760177012 = (NI)((*n0).len - ((NI) 1));
			res_209841_1760177012 = ((NI) 0);
			{
				while (1) {
					if (!(res_209841_1760177012 <= HEX3Atmp_209838_1760177012)) goto LA7;
					i_209810_1760177012 = res_209841_1760177012;
					fieldsaux_209402_1760177012(p0, (*n0).sons[(i_209810_1760177012)- 0], ret0);
					res_209841_1760177012 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	break;
	case ((Tnimnodekind206005) 3):
	{
		TNimNode* m0;
		TY210202 LOC9;
		m0 = selectbranch_206807_1760177012(p0, n0);
		LOC9.Field0 = (*n0).name;
		LOC9.Field1 = newany_206836_1760177012(((void*) ((NI)(((NI) (p0)) + (*n0).offset))), (*n0).typ);
		(*ret0) = (TY210201*) incrSeqV2(&((*ret0))->Sup, sizeof(TY210202));
		(*ret0)->data[(*ret0)->Sup.len] = LOC9;
		++(*ret0)->Sup.len;
		{
			if (!!((m0 == NIM_NIL))) goto LA12;
			fieldsaux_209402_1760177012(p0, m0, ret0);
		}
		LA12: ;
	}
	break;
	}
}

N_NIMCALL(Any206101, skiprange_215804_1760177012)(Any206101 x0) {
	Any206101 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.rawtypeptr = ((void*) ((*((TNimType*) (x0.rawtypeptr))).base));
	result0.value = x0.value;
	return result0;
}

N_NIMCALL(NimStringDesc*, getenumfield_216235_1760177012)(Any206101 x0, NI ordinalvalue0) {
	NimStringDesc* result0;
	TNimType* typ0;
	NI e0;
{	result0 = (NimStringDesc*)0;
	typ0 = skiprange_207802_1760177012(((TNimType*) (x0.rawtypeptr)));
	e0 = ordinalvalue0;
	{
		if (!!((((*typ0).flags &(1U<<((NU)(((Tnimtypeflag206009) 2))&7U)))!=0))) goto LA3;
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
			NI i_216432_1760177012;
			NI HEX3Atmp_216435_1760177012;
			NI res_216438_1760177012;
			i_216432_1760177012 = (NI)0;
			HEX3Atmp_216435_1760177012 = (NI)0;
			HEX3Atmp_216435_1760177012 = (NI)((*n0).len - ((NI) 1));
			res_216438_1760177012 = ((NI) 0);
			{
				while (1) {
					if (!(res_216438_1760177012 <= HEX3Atmp_216435_1760177012)) goto LA12;
					i_216432_1760177012 = res_216438_1760177012;
					{
						if (!((*s0[(i_216432_1760177012)- 0]).offset == e0)) goto LA15;
						result0 = cstrToNimstr((*s0[(i_216432_1760177012)- 0]).name);
						goto BeforeRet;
					}
					LA15: ;
					res_216438_1760177012 += ((NI) 1);
				} LA12: ;
			}
		}
	}
	LA1: ;
	result0 = nimIntToStr(e0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI64, getbiggestint_213203_1760177012)(Any206101 x0) {
	NI64 result0;
	TNimType* t0;
	result0 = (NI64)0;
	t0 = skiprange_207802_1760177012(((TNimType*) (x0.rawtypeptr)));
	switch ((*t0).kind) {
	case ((Tnimkind206003) 31):
	{
		result0 = ((NI64) ((*((NI*) (x0.value)))));
	}
	break;
	case ((Tnimkind206003) 32):
	{
		result0 = ((NI64) ((*((NI8*) (x0.value)))));
	}
	break;
	case ((Tnimkind206003) 33):
	{
		result0 = ((NI64) ((*((NI16*) (x0.value)))));
	}
	break;
	case ((Tnimkind206003) 34):
	{
		result0 = ((NI64) ((*((NI32*) (x0.value)))));
	}
	break;
	case ((Tnimkind206003) 35):
	case ((Tnimkind206003) 44):
	{
		result0 = (*((NI64*) (x0.value)));
	}
	break;
	case ((Tnimkind206003) 1):
	{
		result0 = ((NI64) ((*((NIM_BOOL*) (x0.value)))));
	}
	break;
	case ((Tnimkind206003) 2):
	{
		result0 = ((NI64) (((NU8)((*((NIM_CHAR*) (x0.value)))))));
	}
	break;
	case ((Tnimkind206003) 14):
	case ((Tnimkind206003) 19):
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
	case ((Tnimkind206003) 40):
	{
		result0 = ((NI64) ((*((NU*) (x0.value)))));
	}
	break;
	case ((Tnimkind206003) 41):
	{
		result0 = ((NI64) ((*((NU8*) (x0.value)))));
	}
	break;
	case ((Tnimkind206003) 42):
	{
		result0 = ((NI64) ((*((NU16*) (x0.value)))));
	}
	break;
	case ((Tnimkind206003) 43):
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

N_NIMCALL(NimStringDesc*, getenumfield_216442_1760177012)(Any206101 x0) {
	NimStringDesc* result0;
	NI64 LOC1;
	result0 = (NimStringDesc*)0;
	LOC1 = (NI64)0;
	LOC1 = getbiggestint_213203_1760177012(x0);
	result0 = getenumfield_216235_1760177012(x0, ((NI) (LOC1)));
	return result0;
}

N_NIMCALL(void*, getpointer_209002_1760177012)(Any206101 x0) {
	void* result0;
	result0 = (void*)0;
	result0 = (*((void**) (x0.value)));
	return result0;
}

N_NIMCALL(Any206101, HEX5BHEX5D_211656_1760177012)(Any206101 x0) {
	Any206101 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = (*((void**) (x0.value)));
	result0.rawtypeptr = ((void*) ((*((TNimType*) (x0.rawtypeptr))).base));
	return result0;
}

N_NIMCALL(NimStringDesc*, getstring_217406_1760177012)(Any206101 x0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		if (!!((*((void**) (x0.value))) == 0)) goto LA3;
		result0 = copyString((*((NimStringDesc**) (x0.value))));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NF, getbiggestfloat_217003_1760177012)(Any206101 x0) {
	NF result0;
	TNimType* LOC1;
	result0 = (NF)0;
	LOC1 = (TNimType*)0;
	LOC1 = skiprange_207802_1760177012(((TNimType*) (x0.rawtypeptr)));
	switch ((*LOC1).kind) {
	case ((Tnimkind206003) 36):
	{
		result0 = (*((NF*) (x0.value)));
	}
	break;
	case ((Tnimkind206003) 37):
	{
		result0 = ((NF) ((*((NF32*) (x0.value)))));
	}
	break;
	case ((Tnimkind206003) 38):
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
static TNimNode* T1760177012_4[2];
static TNimNode* T1760177012_5[2];
static TNimNode T1760177012_0[6];
NTI210202.size = sizeof(TY210202);
NTI210202.kind = 18;
NTI210202.base = 0;
NTI210202.flags = 3;
T1760177012_4[0] = &T1760177012_0[1];
T1760177012_0[1].kind = 1;
T1760177012_0[1].offset = offsetof(TY210202, Field0);
T1760177012_0[1].typ = (&NTI140);
T1760177012_0[1].name = "Field0";
T1760177012_4[1] = &T1760177012_0[2];
NTI206101.size = sizeof(Any206101);
NTI206101.kind = 18;
NTI206101.base = 0;
NTI206101.flags = 3;
T1760177012_5[0] = &T1760177012_0[4];
T1760177012_0[4].kind = 1;
T1760177012_0[4].offset = offsetof(Any206101, value);
T1760177012_0[4].typ = (&NTI142);
T1760177012_0[4].name = "value";
T1760177012_5[1] = &T1760177012_0[5];
T1760177012_0[5].kind = 1;
T1760177012_0[5].offset = offsetof(Any206101, rawtypeptr);
T1760177012_0[5].typ = (&NTI142);
T1760177012_0[5].name = "rawTypePtr";
T1760177012_0[3].len = 2; T1760177012_0[3].kind = 2; T1760177012_0[3].sons = &T1760177012_5[0];
NTI206101.node = &T1760177012_0[3];
T1760177012_0[2].kind = 1;
T1760177012_0[2].offset = offsetof(TY210202, Field1);
T1760177012_0[2].typ = (&NTI206101);
T1760177012_0[2].name = "Field1";
T1760177012_0[0].len = 2; T1760177012_0[0].kind = 2; T1760177012_0[0].sons = &T1760177012_4[0];
NTI210202.node = &T1760177012_0[0];
NTI210201.size = sizeof(TY210201*);
NTI210201.kind = 24;
NTI210201.base = (&NTI210202);
NTI210201.flags = 2;
NTI210201.marker = T1760177012_6;
}

