/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode225816 tnode225816;
typedef struct ttype225852 ttype225852;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym225846 tsym225846;
typedef struct tident200021 tident200021;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tlib225834 tlib225834;
typedef struct intset222056 intset222056;
typedef struct ttrunk222052 ttrunk222052;
typedef struct ttrunkseq222054 ttrunkseq222054;
typedef struct TY225936 TY225936;
typedef struct tlistentry127022 tlistentry127022;
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode225816  {
ttype225852* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225846* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq225810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym225846  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq225848* Typeinstcache;
tscope225840* Typscope;
} S1;
struct {TY225947* Procinstcache;
tscope225840* Scope;
} S2;
struct {TY225947* Usedgenerics;
tstrtable225820 Tab;
} S3;
struct {tsym225846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225852* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym225846* Owner;
NU32 Flags;
tnode225816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225830 Loc;
tlib225834* Annex;
tnode225816* Constraint;
};
struct  intset222056  {
NI Counter;
NI Max;
ttrunk222052* Head;
ttrunkseq222054* Data;
};
struct  ttype225852  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225848* Sons;
tnode225816* N;
tsym225846* Owner;
tsym225846* Sym;
tsym225846* Destructor;
tsym225846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225830 Loc;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tscope225840  {
NI Depthlevel;
tstrtable225820 Symbols;
tnodeseq225810* Usingsyms;
tscope225840* Parent;
};
struct  tinstantiation225836  {
tsym225846* Sym;
ttypeseq225848* Concretetypes;
TY225936* Usedby;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib225834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode225816* Path;
};
typedef NI TY26620[16];
struct  ttrunk222052  {
ttrunk222052* Next;
NI Key;
TY26620 Bits;
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct ttrunkseq222054 {
  TGenericSeq Sup;
  ttrunk222052* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartof_478417)(ttype225852* a, ttype225852* b);
N_NIMCALL(void, initintset_222950)(intset222056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartofaux_478020)(ttype225852* a, ttype225852* b, intset222056* marker);
N_NIMCALL(NIM_BOOL, containsorincl_222916)(intset222056* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_270571)(ttype225852* x, ttype225852* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, ispartofaux_478029)(tnode225816* n, ttype225852* b, intset222056* marker);
static N_INLINE(NI, sonslen_226249)(tnode225816* n);
static N_INLINE(tnode225816*, lastson_226261)(tnode225816* n);
N_NIMCALL(void, internalerror_198006)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_197987)(tlineinfo195539 info, NimStringDesc* errmsg);
static N_INLINE(ttype225852*, lastson_226267)(ttype225852* n);
static N_INLINE(NI, sonslen_226255)(ttype225852* n);
N_NIMCALL(NU8, ispartof_478430)(tnode225816* a, tnode225816* b);
static N_INLINE(tnode225816*, HEX5BHEX5D_226698)(tnode225816* n, NI i);
static N_INLINE(NI, len_226364)(tnode225816* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_261958)(tnode225816* n);
N_NIMCALL(NIM_BOOL, samevalue_235350)(tnode225816* a, tnode225816* b);
STRING_LITERAL(TMP3070, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3071, "isPartOfAux()", 13);

static N_INLINE(NI, sonslen_226249)(tnode225816* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(tnode225816*, lastson_226261)(tnode225816* n) {
	tnode225816* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_226249(n);
	result = (*n).kindU.S6.Sons->data[(NI32)(LOC1 - 1)];
	return result;
}

N_NIMCALL(NU8, ispartofaux_478029)(tnode225816* n, ttype225852* b, intset222056* marker) {
	NU8 result;
	result = 0;
	result = ((NU8) 0);
	switch ((*n).Kind) {
	case ((NU8) 137):
	{
		{
			NI i_478048;
			NI HEX3Atmp_478289;
			NI LOC3;
			NI res_478292;
			i_478048 = 0;
			HEX3Atmp_478289 = 0;
			LOC3 = 0;
			LOC3 = sonslen_226249(n);
			HEX3Atmp_478289 = (NI32)(LOC3 - 1);
			res_478292 = 0;
			{
				while (1) {
					if (!(res_478292 <= HEX3Atmp_478289)) goto LA5;
					i_478048 = res_478292;
					result = ispartofaux_478029((*n).kindU.S6.Sons->data[i_478048], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_478292 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 138):
	{
		result = ispartofaux_478029((*n).kindU.S6.Sons->data[0], b, marker);
		{
			if (!(result == ((NU8) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_478236;
			NI HEX3Atmp_478295;
			NI LOC16;
			NI res_478298;
			i_478236 = 0;
			HEX3Atmp_478295 = 0;
			LOC16 = 0;
			LOC16 = sonslen_226249(n);
			HEX3Atmp_478295 = (NI32)(LOC16 - 1);
			res_478298 = 1;
			{
				while (1) {
					if (!(res_478298 <= HEX3Atmp_478295)) goto LA18;
					i_478236 = res_478298;
					switch ((*(*n).kindU.S6.Sons->data[i_478236]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode225816* LOC20;
						LOC20 = 0;
						LOC20 = lastson_226261((*n).kindU.S6.Sons->data[i_478236]);
						result = ispartofaux_478029(LOC20, b, marker);
						{
							if (!(result == ((NU8) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_198006(((NimStringDesc*) &TMP3070));
					}
					break;
					}
					res_478298 += 1;
				} LA18: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		result = ispartofaux_478020((*(*n).kindU.S4.Sym).Typ, b, marker);
	}
	break;
	default:
	{
		internalerror_197987((*n).Info, ((NimStringDesc*) &TMP3071));
	}
	break;
	}
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, sonslen_226255)(ttype225852* n) {
	NI result;
	result = 0;
	{
		if (!(*n).Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(ttype225852*, lastson_226267)(ttype225852* n) {
	ttype225852* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_226255(n);
	result = (*n).Sons->data[(NI32)(LOC1 - 1)];
	return result;
}

N_NIMCALL(NU8, ispartofaux_478020)(ttype225852* a, ttype225852* b, intset222056* marker) {
	NU8 result;
	result = 0;
	result = ((NU8) 0);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a == NIM_NIL);
		if (LOC3) goto LA4;
		LOC3 = (b == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NIM_BOOL LOC9;
		LOC9 = 0;
		LOC9 = containsorincl_222916(marker, (*a).Sup.Id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = comparetypes_270571(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a).Kind) {
	case ((NU8) 17):
	{
		result = ispartofaux_478020((*a).Sons->data[0], b, marker);
		{
			if (!(result == ((NU8) 0))) goto LA20;
			result = ispartofaux_478029((*a).N, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		ttype225852* LOC23;
		LOC23 = 0;
		LOC23 = lastson_226267(a);
		result = ispartofaux_478020(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		{
			NI i_478386;
			NI HEX3Atmp_478397;
			NI LOC26;
			NI res_478400;
			i_478386 = 0;
			HEX3Atmp_478397 = 0;
			LOC26 = 0;
			LOC26 = sonslen_226255(a);
			HEX3Atmp_478397 = (NI32)(LOC26 - 1);
			res_478400 = 0;
			{
				while (1) {
					if (!(res_478400 <= HEX3Atmp_478397)) goto LA28;
					i_478386 = res_478400;
					result = ispartofaux_478020((*a).Sons->data[i_478386], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					res_478400 += 1;
				} LA28: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartof_478417)(ttype225852* a, ttype225852* b) {
	NU8 result;
	intset222056 marker;
	result = 0;
	memset((void*)(&marker), 0, sizeof(marker));
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initintset_222950((&marker));
	result = ispartofaux_478020(b, a, (&marker));
	return result;
}

static N_INLINE(tnode225816*, HEX5BHEX5D_226698)(tnode225816* n, NI i) {
	tnode225816* result;
	result = 0;
	result = (*n).kindU.S6.Sons->data[i];
	return result;
}

static N_INLINE(NI, len_226364)(tnode225816* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, ispartof_478430)(tnode225816* a, tnode225816* b) {
	NU8 result;
	result = 0;
	{
		if (!((*a).Kind == (*b).Kind)) goto LA3;
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			{
				if (!((*(*a).kindU.S4.Sym).Sup.Id == (*(*b).kindU.S4.Sym).Sup.Id)) goto LA8;
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				LOC11 = 0;
				LOC11 = ((4384 &(1<<(((*(*a).kindU.S4.Sym).Kind)&31)))!=0);
				if (LOC11) goto LA12;
				LOC11 = ((4384 &(1<<(((*(*b).kindU.S4.Sym).Kind)&31)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				result = ((NU8) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					NU8 LOC18;
					LOC18 = 0;
					LOC18 = ispartof_478417((*(*a).kindU.S4.Sym).Typ, (*(*b).kindU.S4.Sym).Typ);
					if (!!((LOC18 == ((NU8) 0)))) goto LA19;
					result = ((NU8) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((NU8) 42):
		{
			tnode225816* LOC22;
			tnode225816* LOC23;
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_226698(a, 0);
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_226698(b, 0);
			result = ispartof_478430(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = len_226364(a);
				LOC26 = (2 <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = 0;
				LOC29 = len_226364(b);
				LOC26 = (2 <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					tnode225816* LOC37;
					tnode225816* LOC39;
					tnode225816* x;
					tnode225816* y;
					LOC34 = 0;
					LOC35 = 0;
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_226698(a, 1);
					LOC35 = isdeepconstexpr_261958(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_226698(b, 1);
					LOC34 = isdeepconstexpr_261958(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						tnode225816* LOC44;
						tnode225816* LOC47;
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_226698(a, 1);
						if (!((*LOC44).Kind == ((NU8) 58))) goto LA45;
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_226698(a, 1);
						x = HEX5BHEX5D_226698(LOC47, 1);
					}
					goto LA42;
					LA45: ;
					{
						x = HEX5BHEX5D_226698(a, 1);
					}
					LA42: ;
					{
						tnode225816* LOC51;
						tnode225816* LOC54;
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_226698(b, 1);
						if (!((*LOC51).Kind == ((NU8) 58))) goto LA52;
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_226698(b, 1);
						y = HEX5BHEX5D_226698(LOC54, 1);
					}
					goto LA49;
					LA52: ;
					{
						y = HEX5BHEX5D_226698(b, 1);
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = 0;
						LOC58 = samevalue_235350(x, y);
						if (!LOC58) goto LA59;
						result = ((NU8) 2);
					}
					goto LA56;
					LA59: ;
					{
						result = ((NU8) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result == ((NU8) 2)))) goto LA65;
					{
						NU8 LOC69;
						LOC69 = 0;
						LOC69 = ispartof_478417((*a).Typ, (*b).Typ);
						if (!!((LOC69 == ((NU8) 0)))) goto LA70;
						result = ((NU8) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((NU8) 45):
		{
			tnode225816* LOC73;
			tnode225816* LOC74;
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_226698(a, 0);
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_226698(b, 0);
			result = ispartof_478430(LOC73, LOC74);
			{
				if (!!((result == ((NU8) 0)))) goto LA77;
				{
					tnode225816* LOC81;
					tnode225816* LOC82;
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_226698(a, 1);
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_226698(b, 1);
					if (!!(((*(*LOC81).kindU.S4.Sym).Sup.Id == (*(*LOC82).kindU.S4.Sym).Sup.Id))) goto LA83;
					result = ((NU8) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			tnode225816* LOC86;
			tnode225816* LOC87;
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_226698(a, 0);
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_226698(b, 0);
			result = ispartof_478430(LOC86, LOC87);
			{
				if (!!((result == ((NU8) 2)))) goto LA90;
				{
					NU8 LOC94;
					LOC94 = 0;
					LOC94 = ispartof_478417((*a).Typ, (*b).Typ);
					if (!!((LOC94 == ((NU8) 0)))) goto LA95;
					result = ((NU8) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode225816* LOC98;
			tnode225816* LOC99;
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_226698(a, 1);
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_226698(b, 1);
			result = ispartof_478430(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode225816* LOC101;
			tnode225816* LOC102;
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_226698(a, 0);
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_226698(b, 0);
			result = ispartof_478430(LOC101, LOC102);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1;
	LA3: ;
	{
		switch ((*b).Kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			tnode225816* LOC106;
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_226698(b, 0);
			result = ispartof_478430(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			{
				NU8 LOC110;
				tnode225816* LOC113;
				LOC110 = 0;
				LOC110 = ispartof_478417((*a).Typ, (*b).Typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_226698(b, 0);
				result = ispartof_478430(a, LOC113);
				{
					if (!(result == ((NU8) 0))) goto LA116;
					result = ((NU8) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((NU8) 58):
		case ((NU8) 59):
		case ((NU8) 60):
		{
			tnode225816* LOC119;
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_226698(b, 1);
			result = ispartof_478430(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			switch ((*a).Kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			{
				tnode225816* LOC122;
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_226698(a, 0);
				result = ispartof_478430(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				tnode225816* LOC124;
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_226698(a, 1);
				result = ispartof_478430(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				{
					NU8 LOC128;
					tnode225816* LOC131;
					LOC128 = 0;
					LOC128 = ispartof_478417((*a).Typ, (*b).Typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_226698(a, 0);
					result = ispartof_478430(LOC131, b);
					{
						if (!(result == ((NU8) 0))) goto LA134;
						result = ((NU8) 1);
					}
					LA134: ;
				}
				LA129: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_aliasesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_aliasesDatInit)(void) {
}

