/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_aliases.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_aliases.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode293798 Tnode293798;
typedef struct Ttype293836 Ttype293836;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym293830 Tsym293830;
typedef struct Tident200012 Tident200012;
typedef struct Tnodeseq293792 Tnodeseq293792;
typedef struct Tidobj200006 Tidobj200006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq293832 Ttypeseq293832;
typedef struct TY293925 TY293925;
typedef struct Tstrtable293802 Tstrtable293802;
typedef struct Tsymseq293800 Tsymseq293800;
typedef struct Tloc293812 Tloc293812;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293816 Tlib293816;
typedef struct Intset269031 Intset269031;
typedef struct Trunk269027 Trunk269027;
typedef struct Trunkseq269029 Trunkseq269029;
typedef struct TY293956 TY293956;
typedef struct Tinstantiation293820 Tinstantiation293820;
typedef struct Tlistentry147010 Tlistentry147010;
typedef struct TY293957 TY293957;
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode293798  {
Ttype293836* typ;
Tlineinfo192336 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293830* sym;
} S4;
struct {Tident200012* ident;
} S5;
struct {Tnodeseq293792* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
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
struct  Tidobj200006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable293802  {
NI counter;
Tsymseq293800* data;
};
struct  Tloc293812  {
NU8 k;
NU8 s;
NU16 flags;
Ttype293836* t;
Ropeobj179006* r;
};
struct  Tsym293830  {
  Tidobj200006 Sup;
NU8 kind;
union{
struct {Ttypeseq293832* typeinstcache;
} S1;
struct {TY293925* procinstcache;
Tsym293830* gcunsafetyreason;
} S2;
struct {TY293925* usedgenerics;
Tstrtable293802 tab;
} S3;
struct {Tsym293830* guard;
NI bitsize;
} S4;
} kindU;
NU16 magic;
Ttype293836* typ;
Tident200012* name;
Tlineinfo192336 info;
Tsym293830* owner;
NU32 flags;
Tnode293798* ast;
NU32 options;
NI position;
NI offset;
Tloc293812 loc;
Tlib293816* annex;
Tnode293798* constraint;
};
struct  Intset269031  {
NI counter;
NI max;
Trunk269027* head;
Trunkseq269029* data;
};
struct  Ttype293836  {
  Tidobj200006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq293832* sons;
Tnode293798* n;
Tsym293830* owner;
Tsym293830* sym;
Tsym293830* destructor;
Tsym293830* deepcopy;
Tsym293830* assignment;
TY293956* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293812 loc;
};
struct  Tident200012  {
  Tidobj200006 Sup;
NimStringDesc* s;
Tident200012* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147010  {
  TNimObject Sup;
Tlistentry147010* prev;
Tlistentry147010* next;
};
struct  Tlib293816  {
  Tlistentry147010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293798* path;
};
typedef NI TY29419[8];
struct  Trunk269027  {
Trunk269027* next;
NI key;
TY29419 bits;
};
struct TY293957 {
NI Field0;
Tsym293830* Field1;
};
struct  Tinstantiation293820  {
Tsym293830* sym;
Ttypeseq293832* concretetypes;
NI compilesid;
};
struct Tnodeseq293792 {
  TGenericSeq Sup;
  Tnode293798* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293832 {
  TGenericSeq Sup;
  Ttype293836* data[SEQ_DECL_SIZE];
};
struct TY293925 {
  TGenericSeq Sup;
  Tinstantiation293820* data[SEQ_DECL_SIZE];
};
struct Tsymseq293800 {
  TGenericSeq Sup;
  Tsym293830* data[SEQ_DECL_SIZE];
};
struct Trunkseq269029 {
  TGenericSeq Sup;
  Trunk269027* data[SEQ_DECL_SIZE];
};
struct TY293956 {
  TGenericSeq Sup;
  TY293957 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartof_473333)(Ttype293836* a, Ttype293836* b);
N_NIMCALL(void, initintset_269885)(Intset269031* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartofaux_473008)(Ttype293836* a, Ttype293836* b, Intset269031* marker);
N_NIMCALL(NIM_BOOL, containsorincl_269862)(Intset269031* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_327014)(Ttype293836* x, Ttype293836* y, NU8 cmp, NU8 flags);
N_NIMCALL(Ttype293836*, skiptypes_297099)(Ttype293836* t, NU64 kinds);
N_NIMCALL(NU8, ispartofaux_473014)(Tnode293798* n, Ttype293836* b, Intset269031* marker);
N_NIMCALL(NI, sonslen_296351)(Tnode293798* n);
N_NIMCALL(Tnode293798*, lastson_296364)(Tnode293798* n);
N_NIMCALL(void, internalerror_197113)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_197100)(Tlineinfo192336 info, NimStringDesc* errmsg);
N_NIMCALL(Ttype293836*, lastson_296377)(Ttype293836* n);
N_NIMCALL(NI, sonslen_296327)(Ttype293836* n);
N_NIMCALL(NU8, ispartof_473340)(Tnode293798* a, Tnode293798* b);
static N_INLINE(Tnode293798*, HEX5BHEX5D_294238)(Tnode293798* n, NI i);
static N_INLINE(NI, len_294062)(Tnode293798* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_319566)(Tnode293798* n);
N_NIMCALL(NIM_BOOL, samevalue_300168)(Tnode293798* a, Tnode293798* b);
STRING_LITERAL(TMP3438, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3439, "isPartOfAux()", 13);

N_NIMCALL(NU8, ispartofaux_473014)(Tnode293798* n, Ttype293836* b, Intset269031* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	switch ((*n).kind) {
	case ((NU8) 138):
	{
		{
			NI i_473032;
			NI HEX3Atmp_473237;
			NI LOC3;
			NI res_473240;
			i_473032 = 0;
			HEX3Atmp_473237 = 0;
			LOC3 = 0;
			LOC3 = sonslen_296351(n);
			HEX3Atmp_473237 = (NI)(LOC3 - ((NI) 1));
			res_473240 = ((NI) 0);
			{
				while (1) {
					if (!(res_473240 <= HEX3Atmp_473237)) goto LA5;
					i_473032 = res_473240;
					result = ispartofaux_473014((*n).kindU.S6.sons->data[i_473032], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_473240 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		result = ispartofaux_473014((*n).kindU.S6.sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_473222;
			NI HEX3Atmp_473245;
			NI LOC16;
			NI res_473248;
			i_473222 = 0;
			HEX3Atmp_473245 = 0;
			LOC16 = 0;
			LOC16 = sonslen_296351(n);
			HEX3Atmp_473245 = (NI)(LOC16 - ((NI) 1));
			res_473248 = ((NI) 1);
			{
				while (1) {
					if (!(res_473248 <= HEX3Atmp_473245)) goto LA18;
					i_473222 = res_473248;
					switch ((*(*n).kindU.S6.sons->data[i_473222]).kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						Tnode293798* LOC20;
						LOC20 = 0;
						LOC20 = lastson_296364((*n).kindU.S6.sons->data[i_473222]);
						result = ispartofaux_473014(LOC20, b, marker);
						{
							if (!(result == ((NU8) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_197113(((NimStringDesc*) &TMP3438));
					}
					break;
					}
					res_473248 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		result = ispartofaux_473008((*(*n).kindU.S4.sym).typ, b, marker);
	}
	break;
	default:
	{
		internalerror_197100((*n).info, ((NimStringDesc*) &TMP3439));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartofaux_473008)(Ttype293836* a, Ttype293836* b, Intset269031* marker) {
	NU8 result;
{	result = 0;
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
		LOC9 = containsorincl_269862(marker, (*a).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = comparetypes_327014(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a).kind) {
	case ((NU8) 17):
	{
		{
			Ttype293836* LOC22;
			if (!!(((*a).sons->data[((NI) 0)] == NIM_NIL))) goto LA20;
			LOC22 = 0;
			LOC22 = skiptypes_297099((*a).sons->data[((NI) 0)], IL64(211106247215360));
			result = ispartofaux_473008(LOC22, b, marker);
		}
		LA20: ;
		{
			if (!(result == ((NU8) 0))) goto LA25;
			result = ispartofaux_473014((*a).n, b, marker);
		}
		LA25: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		Ttype293836* LOC28;
		LOC28 = 0;
		LOC28 = lastson_296377(a);
		result = ispartofaux_473008(LOC28, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		{
			NI i_473315;
			NI HEX3Atmp_473326;
			NI LOC31;
			NI res_473329;
			i_473315 = 0;
			HEX3Atmp_473326 = 0;
			LOC31 = 0;
			LOC31 = sonslen_296327(a);
			HEX3Atmp_473326 = (NI)(LOC31 - ((NI) 1));
			res_473329 = ((NI) 0);
			{
				while (1) {
					if (!(res_473329 <= HEX3Atmp_473326)) goto LA33;
					i_473315 = res_473329;
					result = ispartofaux_473008((*a).sons->data[i_473315], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA36;
						goto BeforeRet;
					}
					LA36: ;
					res_473329 += ((NI) 1);
				} LA33: ;
			}
		}
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

N_NIMCALL(NU8, ispartof_473333)(Ttype293836* a, Ttype293836* b) {
	NU8 result;
	Intset269031 marker;
	result = 0;
	memset((void*)(&marker), 0, sizeof(marker));
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initintset_269885((&marker));
	result = ispartofaux_473008(b, a, (&marker));
	return result;
}

static N_INLINE(Tnode293798*, HEX5BHEX5D_294238)(Tnode293798* n, NI i) {
	Tnode293798* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

static N_INLINE(NI, len_294062)(Tnode293798* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, ispartof_473340)(Tnode293798* a, Tnode293798* b) {
	NU8 result;
	result = 0;
	{
		if (!((*a).kind == (*b).kind)) goto LA3;
		switch ((*a).kind) {
		case ((NU8) 3):
		{
			{
				if (!((*(*a).kindU.S4.sym).Sup.id == (*(*b).kindU.S4.sym).Sup.id)) goto LA8;
				result = ((NU8) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				LOC11 = 0;
				LOC11 = ((4384 &(1U<<((NU)((*(*a).kindU.S4.sym).kind)&31U)))!=0);
				if (LOC11) goto LA12;
				LOC11 = ((4384 &(1U<<((NU)((*(*b).kindU.S4.sym).kind)&31U)))!=0);
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
					LOC18 = ispartof_473333((*(*a).kindU.S4.sym).typ, (*(*b).kindU.S4.sym).typ);
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
			Tnode293798* LOC22;
			Tnode293798* LOC23;
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_294238(a, ((NI) 0));
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_294238(b, ((NI) 0));
			result = ispartof_473340(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = len_294062(a);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = 0;
				LOC29 = len_294062(b);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode293798* LOC37;
					Tnode293798* LOC39;
					Tnode293798* x;
					Tnode293798* y;
					LOC34 = 0;
					LOC35 = 0;
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_294238(a, ((NI) 1));
					LOC35 = isdeepconstexpr_319566(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_294238(b, ((NI) 1));
					LOC34 = isdeepconstexpr_319566(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode293798* LOC44;
						Tnode293798* LOC47;
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_294238(a, ((NI) 1));
						if (!((*LOC44).kind == ((NU8) 58))) goto LA45;
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_294238(a, ((NI) 1));
						x = HEX5BHEX5D_294238(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x = HEX5BHEX5D_294238(a, ((NI) 1));
					}
					LA42: ;
					{
						Tnode293798* LOC51;
						Tnode293798* LOC54;
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_294238(b, ((NI) 1));
						if (!((*LOC51).kind == ((NU8) 58))) goto LA52;
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_294238(b, ((NI) 1));
						y = HEX5BHEX5D_294238(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y = HEX5BHEX5D_294238(b, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = 0;
						LOC58 = samevalue_300168(x, y);
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
						LOC69 = ispartof_473333((*a).typ, (*b).typ);
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
			Tnode293798* LOC73;
			Tnode293798* LOC74;
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_294238(a, ((NI) 0));
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_294238(b, ((NI) 0));
			result = ispartof_473340(LOC73, LOC74);
			{
				if (!!((result == ((NU8) 0)))) goto LA77;
				{
					Tnode293798* LOC81;
					Tnode293798* LOC82;
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_294238(a, ((NI) 1));
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_294238(b, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
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
			Tnode293798* LOC86;
			Tnode293798* LOC87;
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_294238(a, ((NI) 0));
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_294238(b, ((NI) 0));
			result = ispartof_473340(LOC86, LOC87);
			{
				if (!!((result == ((NU8) 2)))) goto LA90;
				{
					NU8 LOC94;
					LOC94 = 0;
					LOC94 = ispartof_473333((*a).typ, (*b).typ);
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
			Tnode293798* LOC98;
			Tnode293798* LOC99;
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_294238(a, ((NI) 1));
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_294238(b, ((NI) 1));
			result = ispartof_473340(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			Tnode293798* LOC101;
			Tnode293798* LOC102;
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_294238(a, ((NI) 0));
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_294238(b, ((NI) 0));
			result = ispartof_473340(LOC101, LOC102);
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
		switch ((*b).kind) {
		case ((NU8) 45):
		case ((NU8) 42):
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		case ((NU8) 64):
		{
			Tnode293798* LOC106;
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_294238(b, ((NI) 0));
			result = ispartof_473340(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			{
				NU8 LOC110;
				Tnode293798* LOC113;
				LOC110 = 0;
				LOC110 = ispartof_473333((*a).typ, (*b).typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_294238(b, ((NI) 0));
				result = ispartof_473340(a, LOC113);
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
			Tnode293798* LOC119;
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_294238(b, ((NI) 1));
			result = ispartof_473340(a, LOC119);
		}
		break;
		case ((NU8) 3):
		{
			switch ((*a).kind) {
			case ((NU8) 45):
			case ((NU8) 42):
			case ((NU8) 67):
			case ((NU8) 66):
			case ((NU8) 46):
			case ((NU8) 64):
			{
				Tnode293798* LOC122;
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_294238(a, ((NI) 0));
				result = ispartof_473340(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				Tnode293798* LOC124;
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_294238(a, ((NI) 1));
				result = ispartof_473340(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				{
					NU8 LOC128;
					Tnode293798* LOC131;
					LOC128 = 0;
					LOC128 = ispartof_473333((*a).typ, (*b).typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_294238(a, ((NI) 0));
					result = ispartof_473340(LOC131, b);
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
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit000)(void) {
}
