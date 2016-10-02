/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/stdlib_typeinfo.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/stdlib_typeinfo.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Any206100 Any206100;
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
typedef struct Memregion29480 Memregion29480;
typedef struct Smallchunk29437 Smallchunk29437;
typedef struct Llchunk29474 Llchunk29474;
typedef struct Bigchunk29439 Bigchunk29439;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29478 Avlnode29478;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Valueerror3646 Valueerror3646;
typedef struct TY210202 TY210202;
typedef struct TY210201 TY210201;
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
struct  Any206100  {
void* value;
void* rawtypeptr;
};
typedef N_NIMCALL_PTR(void, TY206088) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY206093) (void* p);
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
struct  TNimNode  {
NU8 kind;
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
typedef Smallchunk29437* TY29495[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29480  {
NI minlargeobj;
NI maxlargeobj;
TY29495 freesmallchunks;
Llchunk29474* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29439* freechunkslist;
Intset29414 chunkstarts;
Avlnode29478* root;
Avlnode29478* deleted;
Avlnode29478* last;
Avlnode29478* freeavlnodes;
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
Memregion29480 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  Valueerror3646  {
  Exception Sup;
};
struct TY210202 {
NCSTRING Field0;
Any206100 Field1;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29435  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29437  {
  Basechunk29435 Sup;
Smallchunk29437* next;
Smallchunk29437* prev;
Freecell29427* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29474  {
NI size;
NI acc;
Llchunk29474* next;
};
struct  Bigchunk29439  {
  Basechunk29435 Sup;
Bigchunk29439* next;
Bigchunk29439* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29478* TY29485[2];
struct  Avlnode29478  {
TY29485 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
struct TY210201 {
  TGenericSeq Sup;
  TY210202 data[SEQ_DECL_SIZE];
};
static N_INLINE(TNimType*, skiprange_207802)(TNimType* x);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
static N_INLINE(Any206100, newany_206836)(void* value, TNimType* rawtype);
N_NIMCALL(void, TMP4747)(void* p, NI op);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, fieldsaux_209402)(void* p, TNimNode* n, TY210201** ret);
N_NIMCALL(TNimNode*, selectbranch_206807)(void* aa, TNimNode* n);
N_NIMCALL(NI, getdiscriminant_206434)(void* aa, TNimNode* n);
N_NIMCALL(NimStringDesc*, getenumfield_216235)(Any206100 x, NI ordinalvalue);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NI64, getbiggestint_213203)(Any206100 x);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
STRING_LITERAL(TMP4741, "index out of bounds", 19);
STRING_LITERAL(TMP4742, "sequence is nil", 15);
extern TNimType NTI143015; /* ref IndexError */
extern TNimType NTI3652; /* IndexError */
extern Gcheap49818 gch_49855;
extern TNimType NTI23025; /* ref ValueError */
extern TNimType NTI3646; /* ValueError */
TNimType NTI210202; /* tuple[name: cstring, any: Any] */
extern TNimType NTI140; /* cstring */
TNimType NTI206100; /* Any */
extern TNimType NTI142; /* pointer */
TNimType NTI210201; /* seq[tuple[name: cstring, any: Any]] */

static N_INLINE(TNimType*, skiprange_207802)(TNimType* x) {
	TNimType* result;
	result = 0;
	result = x;
	{
		if (!((*result).kind == ((NU8) 20))) goto LA3;
		result = (*result).base;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NIM_BOOL, getbool_215604)(Any206100 x) {
	NIM_BOOL result;
	TNimType* t;
	result = 0;
	t = skiprange_207802(((TNimType*) (x.rawtypeptr)));
	result = (*((NIM_BOOL*) (x.value)));
	return result;
}

N_NIMCALL(NIM_CHAR, getchar_215412)(Any206100 x) {
	NIM_CHAR result;
	TNimType* t;
	result = 0;
	t = skiprange_207802(((TNimType*) (x.rawtypeptr)));
	result = (*((NIM_CHAR*) (x.value)));
	return result;
}

N_NIMCALL(NIM_BOOL, isnil_208812)(Any206100 x) {
	NIM_BOOL result;
	result = 0;
	result = (*((void**) (x.value))) == 0;
	return result;
}

N_NIMCALL(NI, len_208616)(Any206100 x) {
	NI result;
	result = 0;
	switch ((*((TNimType*) (x.rawtypeptr))).kind) {
	case ((NU8) 16):
	{
		result = (NI)((*((TNimType*) (x.rawtypeptr))).size / (*(*((TNimType*) (x.rawtypeptr))).base).size);
	}
	break;
	case ((NU8) 24):
	{
		result = (*((TGenericSeq*) ((*((void**) (x.value)))))).len;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

static N_INLINE(Cell47305*, usrtocell_51440)(void* usr) {
	Cell47305* result;
	result = 0;
	result = ((Cell47305*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result;
}

static N_INLINE(void, rtladdzct_52601)(Cell47305* c) {
	addzct_51417((&gch_49855.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47305* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}

static N_INLINE(Any206100, newany_206836)(void* value, TNimType* rawtype) {
	Any206100 result;
	memset((void*)(&result), 0, sizeof(result));
	result.value = value;
	result.rawtypeptr = ((void*) (rawtype));
	return result;
}

N_NIMCALL(Any206100, HEX5BHEX5D_207815)(Any206100 x, NI i) {
	Any206100 result;
{	memset((void*)(&result), 0, sizeof(result));
	switch ((*((TNimType*) (x.rawtypeptr))).kind) {
	case ((NU8) 16):
	{
		NI bs;
		bs = (*(*((TNimType*) (x.rawtypeptr))).base).size;
		{
			Indexerror3652* e_207833;
			NimStringDesc* LOC6;
			if (!((NU64)((NI)((*((TNimType*) (x.rawtypeptr))).size / bs)) <= (NU64)(i))) goto LA4;
			e_207833 = 0;
			e_207833 = (Indexerror3652*) newObj((&NTI143015), sizeof(Indexerror3652));
			(*e_207833).Sup.Sup.m_type = (&NTI3652);
			LOC6 = 0;
			LOC6 = (*e_207833).Sup.message; (*e_207833).Sup.message = copyStringRC1(((NimStringDesc*) &TMP4741));
			if (LOC6) nimGCunrefNoCycle(LOC6);
			raiseException((Exception*)e_207833, "IndexError");
		}
		LA4: ;
		result = newany_206836(((void*) ((NI)(((NI) (x.value)) + (NI)(i * bs)))), (*((TNimType*) (x.rawtypeptr))).base);
		goto BeforeRet;
	}
	break;
	case ((NU8) 24):
	{
		void* s;
		NI bs;
		s = (*((void**) (x.value)));
		{
			Valueerror3646* e_207847;
			NimStringDesc* LOC12;
			if (!(s == NIM_NIL)) goto LA10;
			e_207847 = 0;
			e_207847 = (Valueerror3646*) newObj((&NTI23025), sizeof(Valueerror3646));
			(*e_207847).Sup.Sup.m_type = (&NTI3646);
			LOC12 = 0;
			LOC12 = (*e_207847).Sup.message; (*e_207847).Sup.message = copyStringRC1(((NimStringDesc*) &TMP4742));
			if (LOC12) nimGCunrefNoCycle(LOC12);
			raiseException((Exception*)e_207847, "ValueError");
		}
		LA10: ;
		bs = (*(*((TNimType*) (x.rawtypeptr))).base).size;
		{
			Indexerror3652* e_207870;
			NimStringDesc* LOC17;
			if (!((NU64)((*((TGenericSeq*) (s))).len) <= (NU64)(i))) goto LA15;
			e_207870 = 0;
			e_207870 = (Indexerror3652*) newObj((&NTI143015), sizeof(Indexerror3652));
			(*e_207870).Sup.Sup.m_type = (&NTI3652);
			LOC17 = 0;
			LOC17 = (*e_207870).Sup.message; (*e_207870).Sup.message = copyStringRC1(((NimStringDesc*) &TMP4741));
			if (LOC17) nimGCunrefNoCycle(LOC17);
			raiseException((Exception*)e_207870, "IndexError");
		}
		LA15: ;
		result = newany_206836(((void*) ((NI)(((NI) (s)) + (NI)(((NI) 16) + (NI)(i * bs))))), (*((TNimType*) (x.rawtypeptr))).base);
		goto BeforeRet;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP4747)(void* p, NI op) {
	TY210201* a;
	NI LOC1;
	a = (TY210201*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(NI, getdiscriminant_206434)(void* aa, TNimNode* n) {
	NI result;
	NI d;
	NI a;
{	result = 0;
	d = 0;
	a = ((NI) (aa));
	switch ((*(*n).typ).size) {
	case ((NI) 1):
	{
		d = ((NI)(NU)(NU8)((*((NI8*) ((NI)((NU64)(a) + (NU64)((*n).offset)))))));
	}
	break;
	case ((NI) 2):
	{
		d = ((NI)(NU)(NU16)((*((NI16*) ((NI)((NU64)(a) + (NU64)((*n).offset)))))));
	}
	break;
	case ((NI) 4):
	{
		d = ((NI) ((*((NI32*) ((NI)((NU64)(a) + (NU64)((*n).offset)))))));
	}
	break;
	default:
	{
	}
	break;
	}
	result = d;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(TNimNode*, selectbranch_206807)(void* aa, TNimNode* n) {
	TNimNode* result;
	NI discr;
	result = 0;
	discr = getdiscriminant_206434(aa, n);
	{
		if (!((NU64)(discr) < (NU64)((*n).len))) goto LA3;
		result = (*n).sons[(discr)- 0];
		{
			if (!(result == NIM_NIL)) goto LA7;
			result = (*n).sons[((*n).len)- 0];
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).sons[((*n).len)- 0];
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, fieldsaux_209402)(void* p, TNimNode* n, TY210201** ret) {
	switch ((*n).kind) {
	case ((NU8) 0):
	{
	}
	break;
	case ((NU8) 1):
	{
		TY210202 LOC3;
		LOC3.Field0 = (*n).name;
		LOC3.Field1 = newany_206836(((void*) ((NI)(((NI) (p)) + (*n).offset))), (*n).typ);
		(*ret) = (TY210201*) incrSeqV2(&((*ret))->Sup, sizeof(TY210202));
		(*ret)->data[(*ret)->Sup.len] = LOC3;
		++(*ret)->Sup.len;
	}
	break;
	case ((NU8) 2):
	{
		{
			NI i_209810;
			NI HEX3Atmp_209838;
			NI res_209841;
			i_209810 = 0;
			HEX3Atmp_209838 = 0;
			HEX3Atmp_209838 = (NI)((*n).len - ((NI) 1));
			res_209841 = ((NI) 0);
			{
				while (1) {
					if (!(res_209841 <= HEX3Atmp_209838)) goto LA7;
					i_209810 = res_209841;
					fieldsaux_209402(p, (*n).sons[(i_209810)- 0], ret);
					res_209841 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		TNimNode* m;
		TY210202 LOC9;
		m = selectbranch_206807(p, n);
		LOC9.Field0 = (*n).name;
		LOC9.Field1 = newany_206836(((void*) ((NI)(((NI) (p)) + (*n).offset))), (*n).typ);
		(*ret) = (TY210201*) incrSeqV2(&((*ret))->Sup, sizeof(TY210202));
		(*ret)->data[(*ret)->Sup.len] = LOC9;
		++(*ret)->Sup.len;
		{
			if (!!((m == NIM_NIL))) goto LA12;
			fieldsaux_209402(p, m, ret);
		}
		LA12: ;
	}
	break;
	}
}

N_NIMCALL(Any206100, skiprange_215804)(Any206100 x) {
	Any206100 result;
	memset((void*)(&result), 0, sizeof(result));
	result.rawtypeptr = ((void*) ((*((TNimType*) (x.rawtypeptr))).base));
	result.value = x.value;
	return result;
}

N_NIMCALL(NimStringDesc*, getenumfield_216235)(Any206100 x, NI ordinalvalue) {
	NimStringDesc* result;
	TNimType* typ;
	NI e;
{	result = 0;
	typ = skiprange_207802(((TNimType*) (x.rawtypeptr)));
	e = ordinalvalue;
	{
		if (!!((((*typ).flags &(1U<<((NU)(((NU8) 2))&7U)))!=0))) goto LA3;
		{
			if (!((NU64)(e) < (NU64)((*(*typ).node).len))) goto LA7;
			result = cstrToNimstr((*(*(*typ).node).sons[(e)- 0]).name);
			goto BeforeRet;
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		TNimNode* n;
		TNimNode** s;
		n = (*typ).node;
		s = (*n).sons;
		{
			NI i_216432;
			NI HEX3Atmp_216435;
			NI res_216438;
			i_216432 = 0;
			HEX3Atmp_216435 = 0;
			HEX3Atmp_216435 = (NI)((*n).len - ((NI) 1));
			res_216438 = ((NI) 0);
			{
				while (1) {
					if (!(res_216438 <= HEX3Atmp_216435)) goto LA12;
					i_216432 = res_216438;
					{
						if (!((*s[(i_216432)- 0]).offset == e)) goto LA15;
						result = cstrToNimstr((*s[(i_216432)- 0]).name);
						goto BeforeRet;
					}
					LA15: ;
					res_216438 += ((NI) 1);
				} LA12: ;
			}
		}
	}
	LA1: ;
	result = nimIntToStr(e);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI64, getbiggestint_213203)(Any206100 x) {
	NI64 result;
	TNimType* t;
	result = 0;
	t = skiprange_207802(((TNimType*) (x.rawtypeptr)));
	switch ((*t).kind) {
	case ((NU8) 31):
	{
		result = ((NI64) ((*((NI*) (x.value)))));
	}
	break;
	case ((NU8) 32):
	{
		result = ((NI64) ((*((NI8*) (x.value)))));
	}
	break;
	case ((NU8) 33):
	{
		result = ((NI64) ((*((NI16*) (x.value)))));
	}
	break;
	case ((NU8) 34):
	{
		result = ((NI64) ((*((NI32*) (x.value)))));
	}
	break;
	case ((NU8) 35):
	case ((NU8) 44):
	{
		result = (*((NI64*) (x.value)));
	}
	break;
	case ((NU8) 1):
	{
		result = ((NI64) ((*((NIM_BOOL*) (x.value)))));
	}
	break;
	case ((NU8) 2):
	{
		result = ((NI64) (((NU8)((*((NIM_CHAR*) (x.value)))))));
	}
	break;
	case ((NU8) 14):
	case ((NU8) 19):
	{
		switch ((*t).size) {
		case ((NI) 1):
		{
			result = ((NI64)(NU64)(NU8)((*((NI8*) (x.value)))));
		}
		break;
		case ((NI) 2):
		{
			result = ((NI64)(NU64)(NU16)((*((NI16*) (x.value)))));
		}
		break;
		case ((NI) 4):
		{
			result = ((NI64) ((*((NI32*) (x.value)))));
		}
		break;
		case ((NI) 8):
		{
			result = (*((NI64*) (x.value)));
		}
		break;
		default:
		{
		}
		break;
		}
	}
	break;
	case ((NU8) 40):
	{
		result = ((NI64) ((*((NU*) (x.value)))));
	}
	break;
	case ((NU8) 41):
	{
		result = ((NI64) ((*((NU8*) (x.value)))));
	}
	break;
	case ((NU8) 42):
	{
		result = ((NI64) ((*((NU16*) (x.value)))));
	}
	break;
	case ((NU8) 43):
	{
		result = ((NI64) ((*((NU32*) (x.value)))));
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

N_NIMCALL(NimStringDesc*, getenumfield_216442)(Any206100 x) {
	NimStringDesc* result;
	NI64 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getbiggestint_213203(x);
	result = getenumfield_216235(x, ((NI) (LOC1)));
	return result;
}

N_NIMCALL(void*, getpointer_209002)(Any206100 x) {
	void* result;
	result = 0;
	result = (*((void**) (x.value)));
	return result;
}

N_NIMCALL(Any206100, HEX5BHEX5D_211656)(Any206100 x) {
	Any206100 result;
	memset((void*)(&result), 0, sizeof(result));
	result.value = (*((void**) (x.value)));
	result.rawtypeptr = ((void*) ((*((TNimType*) (x.rawtypeptr))).base));
	return result;
}

N_NIMCALL(NimStringDesc*, getstring_217406)(Any206100 x) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!((*((void**) (x.value))) == 0)) goto LA3;
		result = copyString((*((NimStringDesc**) (x.value))));
	}
	LA3: ;
	return result;
}

N_NIMCALL(NF, getbiggestfloat_217003)(Any206100 x) {
	NF result;
	TNimType* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = skiprange_207802(((TNimType*) (x.rawtypeptr)));
	switch ((*LOC1).kind) {
	case ((NU8) 36):
	{
		result = (*((NF*) (x.value)));
	}
	break;
	case ((NU8) 37):
	{
		result = ((NF) ((*((NF32*) (x.value)))));
	}
	break;
	case ((NU8) 38):
	{
		result = (*((NF*) (x.value)));
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_typeinfoInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_typeinfoDatInit000)(void) {
static TNimNode* TMP4745[2];
static TNimNode* TMP4746[2];
static TNimNode TMP533[6];
NTI210202.size = sizeof(TY210202);
NTI210202.kind = 18;
NTI210202.base = 0;
NTI210202.flags = 3;
TMP4745[0] = &TMP533[1];
TMP533[1].kind = 1;
TMP533[1].offset = offsetof(TY210202, Field0);
TMP533[1].typ = (&NTI140);
TMP533[1].name = "Field0";
TMP4745[1] = &TMP533[2];
NTI206100.size = sizeof(Any206100);
NTI206100.kind = 18;
NTI206100.base = 0;
NTI206100.flags = 3;
TMP4746[0] = &TMP533[4];
TMP533[4].kind = 1;
TMP533[4].offset = offsetof(Any206100, value);
TMP533[4].typ = (&NTI142);
TMP533[4].name = "value";
TMP4746[1] = &TMP533[5];
TMP533[5].kind = 1;
TMP533[5].offset = offsetof(Any206100, rawtypeptr);
TMP533[5].typ = (&NTI142);
TMP533[5].name = "rawTypePtr";
TMP533[3].len = 2; TMP533[3].kind = 2; TMP533[3].sons = &TMP4746[0];
NTI206100.node = &TMP533[3];
TMP533[2].kind = 1;
TMP533[2].offset = offsetof(TY210202, Field1);
TMP533[2].typ = (&NTI206100);
TMP533[2].name = "Field1";
TMP533[0].len = 2; TMP533[0].kind = 2; TMP533[0].sons = &TMP4745[0];
NTI210202.node = &TMP533[0];
NTI210201.size = sizeof(TY210201*);
NTI210201.kind = 24;
NTI210201.base = (&NTI210202);
NTI210201.flags = 2;
NTI210201.marker = TMP4747;
}

