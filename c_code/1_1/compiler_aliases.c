/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode290802 Tnode290802;
typedef struct Ttype290840 Ttype290840;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym290834 Tsym290834;
typedef struct Tident197010 Tident197010;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct Tidobj197004 Tidobj197004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct TY290929 TY290929;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Tloc290816 Tloc290816;
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct Tlib290820 Tlib290820;
typedef struct Intset266030 Intset266030;
typedef struct Trunk266026 Trunk266026;
typedef struct Trunkseq266028 Trunkseq266028;
typedef struct TY290960 TY290960;
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY290961 TY290961;
typedef NU8 Tanalysisresult471003;
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag290427Set;
typedef NU8 Tnodekind290020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode290802  {
Ttype290840* typ;
Tlineinfo189336 info;
Tnodeflag290427Set flags;
Tnodekind290020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym290834* sym;
} S4;
struct {Tident197010* ident;
} S5;
struct {Tnodeseq290796* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
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
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind290435;
struct  Tstrtable290806  {
NI counter;
Tsymseq290804* data;
};
typedef NU16 Tmagic290524;
typedef NU32 Tsymflag290184Set;
typedef NU32 Toption168009Set;
typedef NU8 Tlockind290808;
typedef NU8 Tstorageloc290812;
typedef NU16 Tlocflag290810Set;
struct  Tloc290816  {
Tlockind290808 k;
Tstorageloc290812 s;
Tlocflag290810Set flags;
Ttype290840* t;
Ropeobj177006* r;
};
struct  Tsym290834  {
  Tidobj197004 Sup;
Tsymkind290435 kind;
union{
struct {Ttypeseq290836* typeinstcache;
} S1;
struct {TY290929* procinstcache;
Tsym290834* gcunsafetyreason;
} S2;
struct {TY290929* usedgenerics;
Tstrtable290806 tab;
} S3;
struct {Tsym290834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic290524 magic;
Ttype290840* typ;
Tident197010* name;
Tlineinfo189336 info;
Tsym290834* owner;
Tsymflag290184Set flags;
Tnode290802* ast;
Toption168009Set options;
NI position;
NI offset;
Tloc290816 loc;
Tlib290820* annex;
Tnode290802* constraint;
};
struct  Intset266030  {
NI counter;
NI max;
Trunk266026* head;
Trunkseq266028* data;
};
typedef NU8 Ttypekind290244;
typedef NU8 Tcallingconvention290002;
typedef NU32 Ttypeflag290431Set;
struct  Ttype290840  {
  Tidobj197004 Sup;
Ttypekind290244 kind;
Tcallingconvention290002 callconv;
Ttypeflag290431Set flags;
Ttypeseq290836* sons;
Tnode290802* n;
Tsym290834* owner;
Tsym290834* sym;
Tsym290834* destructor;
Tsym290834* deepcopy;
Tsym290834* assignment;
TY290960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc290816 loc;
};
typedef NU8 Tdistinctcompare322427;
typedef NU8 Ttypecmpflag322429Set;
typedef NU64 Ttypekind290244Set;
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
NI h;
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
struct  Ropeobj177006  {
  TNimObject Sup;
Ropeobj177006* left;
Ropeobj177006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind290818;
struct  Tlib290820  {
  Tlistentry147007 Sup;
Tlibkind290818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj177006* name;
Tnode290802* path;
};
typedef NI TY29018[16];
struct  Trunk266026  {
Trunk266026* next;
NI key;
TY29018 bits;
};
struct TY290961 {
NI Field0;
Tsym290834* Field1;
};
struct  Tinstantiation290824  {
Tsym290834* sym;
Ttypeseq290836* concretetypes;
NI compilesid;
};
struct Tnodeseq290796 {
  TGenericSeq Sup;
  Tnode290802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq290836 {
  TGenericSeq Sup;
  Ttype290840* data[SEQ_DECL_SIZE];
};
struct TY290929 {
  TGenericSeq Sup;
  Tinstantiation290824* data[SEQ_DECL_SIZE];
};
struct Tsymseq290804 {
  TGenericSeq Sup;
  Tsym290834* data[SEQ_DECL_SIZE];
};
struct Trunkseq266028 {
  TGenericSeq Sup;
  Trunk266026* data[SEQ_DECL_SIZE];
};
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tanalysisresult471003, ispartof_471333_788060399)(Ttype290840* a0, Ttype290840* b0);
N_NIMCALL(void, initintset_266885_2627731572)(Intset266030* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tanalysisresult471003, ispartofaux_471007_788060399)(Ttype290840* a0, Ttype290840* b0, Intset266030* marker0);
N_NIMCALL(NIM_BOOL, containsorincl_266862_2627731572)(Intset266030* s0, NI key0);
N_NIMCALL(NIM_BOOL, comparetypes_324214_3876443242)(Ttype290840* x0, Ttype290840* y0, Tdistinctcompare322427 cmp0, Ttypecmpflag322429Set flags0);
N_NIMCALL(Ttype290840*, skiptypes_294099_850551059)(Ttype290840* t0, Ttypekind290244Set kinds0);
N_NIMCALL(Tanalysisresult471003, ispartofaux_471013_788060399)(Tnode290802* n0, Ttype290840* b0, Intset266030* marker0);
N_NIMCALL(NI, sonslen_293351_850551059)(Tnode290802* n0);
N_NIMCALL(Tnode290802*, lastson_293364_850551059)(Tnode290802* n0);
N_NIMCALL(void, internalerror_194113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, internalerror_194100_155036129)(Tlineinfo189336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Ttype290840*, lastson_293377_850551059)(Ttype290840* n0);
N_NIMCALL(NI, sonslen_293327_850551059)(Ttype290840* n0);
N_NIMCALL(Tanalysisresult471003, ispartof_471340_788060399)(Tnode290802* a0, Tnode290802* b0);
static N_INLINE(Tnode290802*, HEX5BHEX5D_291238_850551059)(Tnode290802* n0, NI i0);
static N_INLINE(NI, len_291081_850551059)(Tnode290802* n0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_316566_2616423590)(Tnode290802* n0);
N_NIMCALL(NIM_BOOL, samevalue_297169_2984716966)(Tnode290802* a0, Tnode290802* b0);
STRING_LITERAL(T788060399_2, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(T788060399_3, "isPartOfAux()", 13);

N_NIMCALL(Tanalysisresult471003, ispartofaux_471013_788060399)(Tnode290802* n0, Ttype290840* b0, Intset266030* marker0) {
	Tanalysisresult471003 result0;
{	result0 = (Tanalysisresult471003)0;
	result0 = ((Tanalysisresult471003) 0);
	switch ((*n0).kind) {
	case ((Tnodekind290020) 138):
	{
		{
			NI i_471031_788060399;
			NI HEX3Atmp_471237_788060399;
			NI LOC3;
			NI res_471240_788060399;
			i_471031_788060399 = (NI)0;
			HEX3Atmp_471237_788060399 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_293351_850551059(n0);
			HEX3Atmp_471237_788060399 = (NI)(LOC3 - ((NI) 1));
			res_471240_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_471240_788060399 <= HEX3Atmp_471237_788060399)) goto LA5;
					i_471031_788060399 = res_471240_788060399;
					result0 = ispartofaux_471013_788060399((*n0).kindU.S6.sons->data[i_471031_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult471003) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_471240_788060399 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind290020) 139):
	{
		result0 = ispartofaux_471013_788060399((*n0).kindU.S6.sons->data[((NI) 0)], b0, marker0);
		{
			if (!(result0 == ((Tanalysisresult471003) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_471222_788060399;
			NI HEX3Atmp_471245_788060399;
			NI LOC16;
			NI res_471248_788060399;
			i_471222_788060399 = (NI)0;
			HEX3Atmp_471245_788060399 = (NI)0;
			LOC16 = (NI)0;
			LOC16 = sonslen_293351_850551059(n0);
			HEX3Atmp_471245_788060399 = (NI)(LOC16 - ((NI) 1));
			res_471248_788060399 = ((NI) 1);
			{
				while (1) {
					if (!(res_471248_788060399 <= HEX3Atmp_471245_788060399)) goto LA18;
					i_471222_788060399 = res_471248_788060399;
					switch ((*(*n0).kindU.S6.sons->data[i_471222_788060399]).kind) {
					case ((Tnodekind290020) 85):
					case ((Tnodekind290020) 88):
					{
						Tnode290802* LOC20;
						LOC20 = (Tnode290802*)0;
						LOC20 = lastson_293364_850551059((*n0).kindU.S6.sons->data[i_471222_788060399]);
						result0 = ispartofaux_471013_788060399(LOC20, b0, marker0);
						{
							if (!(result0 == ((Tanalysisresult471003) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_194113_155036129(((NimStringDesc*) &T788060399_2));
					}
					break;
					}
					res_471248_788060399 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((Tnodekind290020) 3):
	{
		result0 = ispartofaux_471007_788060399((*(*n0).kindU.S4.sym).typ, b0, marker0);
	}
	break;
	default:
	{
		internalerror_194100_155036129((*n0).info, ((NimStringDesc*) &T788060399_3));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tanalysisresult471003, ispartofaux_471007_788060399)(Ttype290840* a0, Ttype290840* b0, Intset266030* marker0) {
	Tanalysisresult471003 result0;
{	result0 = (Tanalysisresult471003)0;
	result0 = ((Tanalysisresult471003) 0);
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (a0 == NIM_NIL);
		if (LOC3) goto LA4;
		LOC3 = (b0 == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NIM_BOOL LOC9;
		LOC9 = (NIM_BOOL)0;
		LOC9 = containsorincl_266862_2627731572(marker0, (*a0).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = (NIM_BOOL)0;
		LOC14 = comparetypes_324214_3876443242(a0, b0, ((Tdistinctcompare322427) 1), 0);
		if (!LOC14) goto LA15;
		result0 = ((Tanalysisresult471003) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a0).kind) {
	case ((Ttypekind290244) 17):
	{
		{
			Ttype290840* LOC22;
			if (!!(((*a0).sons->data[((NI) 0)] == NIM_NIL))) goto LA20;
			LOC22 = (Ttype290840*)0;
			LOC22 = skiptypes_294099_850551059((*a0).sons->data[((NI) 0)], IL64(211106247215360));
			result0 = ispartofaux_471007_788060399(LOC22, b0, marker0);
		}
		LA20: ;
		{
			if (!(result0 == ((Tanalysisresult471003) 0))) goto LA25;
			result0 = ispartofaux_471013_788060399((*a0).n, b0, marker0);
		}
		LA25: ;
	}
	break;
	case ((Ttypekind290244) 11):
	case ((Ttypekind290244) 13):
	{
		Ttype290840* LOC28;
		LOC28 = (Ttype290840*)0;
		LOC28 = lastson_293377_850551059(a0);
		result0 = ispartofaux_471007_788060399(LOC28, b0, marker0);
	}
	break;
	case ((Ttypekind290244) 16):
	case ((Ttypekind290244) 4):
	case ((Ttypekind290244) 19):
	case ((Ttypekind290244) 18):
	{
		{
			NI i_471315_788060399;
			NI HEX3Atmp_471326_788060399;
			NI LOC31;
			NI res_471329_788060399;
			i_471315_788060399 = (NI)0;
			HEX3Atmp_471326_788060399 = (NI)0;
			LOC31 = (NI)0;
			LOC31 = sonslen_293327_850551059(a0);
			HEX3Atmp_471326_788060399 = (NI)(LOC31 - ((NI) 1));
			res_471329_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_471329_788060399 <= HEX3Atmp_471326_788060399)) goto LA33;
					i_471315_788060399 = res_471329_788060399;
					result0 = ispartofaux_471007_788060399((*a0).sons->data[i_471315_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult471003) 2))) goto LA36;
						goto BeforeRet;
					}
					LA36: ;
					res_471329_788060399 += ((NI) 1);
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
	return result0;
}

N_NIMCALL(Tanalysisresult471003, ispartof_471333_788060399)(Ttype290840* a0, Ttype290840* b0) {
	Tanalysisresult471003 result0;
	Intset266030 marker0;
	result0 = (Tanalysisresult471003)0;
	memset((void*)(&marker0), 0, sizeof(marker0));
	chckNil((void*)(&marker0));
	memset((void*)(&marker0), 0, sizeof(marker0));
	initintset_266885_2627731572((&marker0));
	result0 = ispartofaux_471007_788060399(b0, a0, (&marker0));
	return result0;
}

static N_INLINE(Tnode290802*, HEX5BHEX5D_291238_850551059)(Tnode290802* n0, NI i0) {
	Tnode290802* result0;
	result0 = (Tnode290802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

static N_INLINE(NI, len_291081_850551059)(Tnode290802* n0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(*n0).kindU.S6.sons == 0) goto LA3;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tanalysisresult471003, ispartof_471340_788060399)(Tnode290802* a0, Tnode290802* b0) {
	Tanalysisresult471003 result0;
	result0 = (Tanalysisresult471003)0;
	{
		if (!((*a0).kind == (*b0).kind)) goto LA3;
		switch ((*a0).kind) {
		case ((Tnodekind290020) 3):
		{
			{
				if (!((*(*a0).kindU.S4.sym).Sup.id == (*(*b0).kindU.S4.sym).Sup.id)) goto LA8;
				result0 = ((Tanalysisresult471003) 2);
			}
			goto LA6;
			LA8: ;
			{
				NIM_BOOL LOC11;
				LOC11 = (NIM_BOOL)0;
				LOC11 = ((4384 &(1U<<((NU)((*(*a0).kindU.S4.sym).kind)&31U)))!=0);
				if (LOC11) goto LA12;
				LOC11 = ((4384 &(1U<<((NU)((*(*b0).kindU.S4.sym).kind)&31U)))!=0);
				LA12: ;
				if (!LOC11) goto LA13;
				result0 = ((Tanalysisresult471003) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					Tanalysisresult471003 LOC18;
					LOC18 = (Tanalysisresult471003)0;
					LOC18 = ispartof_471333_788060399((*(*a0).kindU.S4.sym).typ, (*(*b0).kindU.S4.sym).typ);
					if (!!((LOC18 == ((Tanalysisresult471003) 0)))) goto LA19;
					result0 = ((Tanalysisresult471003) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((Tnodekind290020) 42):
		{
			Tnode290802* LOC22;
			Tnode290802* LOC23;
			LOC22 = (Tnode290802*)0;
			LOC22 = HEX5BHEX5D_291238_850551059(a0, ((NI) 0));
			LOC23 = (Tnode290802*)0;
			LOC23 = HEX5BHEX5D_291238_850551059(b0, ((NI) 0));
			result0 = ispartof_471340_788060399(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = (NIM_BOOL)0;
				LOC27 = (NI)0;
				LOC27 = len_291081_850551059(a0);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = (NI)0;
				LOC29 = len_291081_850551059(b0);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode290802* LOC37;
					Tnode290802* LOC39;
					Tnode290802* x0;
					Tnode290802* y0;
					LOC34 = (NIM_BOOL)0;
					LOC35 = (NIM_BOOL)0;
					LOC35 = (result0 == ((Tanalysisresult471003) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = (Tnode290802*)0;
					LOC37 = HEX5BHEX5D_291238_850551059(a0, ((NI) 1));
					LOC35 = isdeepconstexpr_316566_2616423590(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = (Tnode290802*)0;
					LOC39 = HEX5BHEX5D_291238_850551059(b0, ((NI) 1));
					LOC34 = isdeepconstexpr_316566_2616423590(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode290802* LOC44;
						Tnode290802* LOC47;
						LOC44 = (Tnode290802*)0;
						LOC44 = HEX5BHEX5D_291238_850551059(a0, ((NI) 1));
						if (!((*LOC44).kind == ((Tnodekind290020) 58))) goto LA45;
						LOC47 = (Tnode290802*)0;
						LOC47 = HEX5BHEX5D_291238_850551059(a0, ((NI) 1));
						x0 = HEX5BHEX5D_291238_850551059(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x0 = HEX5BHEX5D_291238_850551059(a0, ((NI) 1));
					}
					LA42: ;
					{
						Tnode290802* LOC51;
						Tnode290802* LOC54;
						LOC51 = (Tnode290802*)0;
						LOC51 = HEX5BHEX5D_291238_850551059(b0, ((NI) 1));
						if (!((*LOC51).kind == ((Tnodekind290020) 58))) goto LA52;
						LOC54 = (Tnode290802*)0;
						LOC54 = HEX5BHEX5D_291238_850551059(b0, ((NI) 1));
						y0 = HEX5BHEX5D_291238_850551059(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y0 = HEX5BHEX5D_291238_850551059(b0, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = (NIM_BOOL)0;
						LOC58 = samevalue_297169_2984716966(x0, y0);
						if (!LOC58) goto LA59;
						result0 = ((Tanalysisresult471003) 2);
					}
					goto LA56;
					LA59: ;
					{
						result0 = ((Tanalysisresult471003) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result0 == ((Tanalysisresult471003) 2)))) goto LA65;
					{
						Tanalysisresult471003 LOC69;
						LOC69 = (Tanalysisresult471003)0;
						LOC69 = ispartof_471333_788060399((*a0).typ, (*b0).typ);
						if (!!((LOC69 == ((Tanalysisresult471003) 0)))) goto LA70;
						result0 = ((Tanalysisresult471003) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((Tnodekind290020) 45):
		{
			Tnode290802* LOC73;
			Tnode290802* LOC74;
			LOC73 = (Tnode290802*)0;
			LOC73 = HEX5BHEX5D_291238_850551059(a0, ((NI) 0));
			LOC74 = (Tnode290802*)0;
			LOC74 = HEX5BHEX5D_291238_850551059(b0, ((NI) 0));
			result0 = ispartof_471340_788060399(LOC73, LOC74);
			{
				if (!!((result0 == ((Tanalysisresult471003) 0)))) goto LA77;
				{
					Tnode290802* LOC81;
					Tnode290802* LOC82;
					LOC81 = (Tnode290802*)0;
					LOC81 = HEX5BHEX5D_291238_850551059(a0, ((NI) 1));
					LOC82 = (Tnode290802*)0;
					LOC82 = HEX5BHEX5D_291238_850551059(b0, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
					result0 = ((Tanalysisresult471003) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((Tnodekind290020) 65):
		case ((Tnodekind290020) 47):
		{
			Tnode290802* LOC86;
			Tnode290802* LOC87;
			LOC86 = (Tnode290802*)0;
			LOC86 = HEX5BHEX5D_291238_850551059(a0, ((NI) 0));
			LOC87 = (Tnode290802*)0;
			LOC87 = HEX5BHEX5D_291238_850551059(b0, ((NI) 0));
			result0 = ispartof_471340_788060399(LOC86, LOC87);
			{
				if (!!((result0 == ((Tanalysisresult471003) 2)))) goto LA90;
				{
					Tanalysisresult471003 LOC94;
					LOC94 = (Tanalysisresult471003)0;
					LOC94 = ispartof_471333_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC94 == ((Tanalysisresult471003) 0)))) goto LA95;
					result0 = ((Tanalysisresult471003) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((Tnodekind290020) 58):
		case ((Tnodekind290020) 59):
		case ((Tnodekind290020) 60):
		{
			Tnode290802* LOC98;
			Tnode290802* LOC99;
			LOC98 = (Tnode290802*)0;
			LOC98 = HEX5BHEX5D_291238_850551059(a0, ((NI) 1));
			LOC99 = (Tnode290802*)0;
			LOC99 = HEX5BHEX5D_291238_850551059(b0, ((NI) 1));
			result0 = ispartof_471340_788060399(LOC98, LOC99);
		}
		break;
		case ((Tnodekind290020) 67):
		case ((Tnodekind290020) 66):
		case ((Tnodekind290020) 46):
		{
			Tnode290802* LOC101;
			Tnode290802* LOC102;
			LOC101 = (Tnode290802*)0;
			LOC101 = HEX5BHEX5D_291238_850551059(a0, ((NI) 0));
			LOC102 = (Tnode290802*)0;
			LOC102 = HEX5BHEX5D_291238_850551059(b0, ((NI) 0));
			result0 = ispartof_471340_788060399(LOC101, LOC102);
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
		switch ((*b0).kind) {
		case ((Tnodekind290020) 45):
		case ((Tnodekind290020) 42):
		case ((Tnodekind290020) 67):
		case ((Tnodekind290020) 66):
		case ((Tnodekind290020) 46):
		case ((Tnodekind290020) 64):
		{
			Tnode290802* LOC106;
			LOC106 = (Tnode290802*)0;
			LOC106 = HEX5BHEX5D_291238_850551059(b0, ((NI) 0));
			result0 = ispartof_471340_788060399(a0, LOC106);
		}
		break;
		case ((Tnodekind290020) 65):
		case ((Tnodekind290020) 47):
		{
			{
				Tanalysisresult471003 LOC110;
				Tnode290802* LOC113;
				LOC110 = (Tanalysisresult471003)0;
				LOC110 = ispartof_471333_788060399((*a0).typ, (*b0).typ);
				if (!!((LOC110 == ((Tanalysisresult471003) 0)))) goto LA111;
				LOC113 = (Tnode290802*)0;
				LOC113 = HEX5BHEX5D_291238_850551059(b0, ((NI) 0));
				result0 = ispartof_471340_788060399(a0, LOC113);
				{
					if (!(result0 == ((Tanalysisresult471003) 0))) goto LA116;
					result0 = ((Tanalysisresult471003) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((Tnodekind290020) 58):
		case ((Tnodekind290020) 59):
		case ((Tnodekind290020) 60):
		{
			Tnode290802* LOC119;
			LOC119 = (Tnode290802*)0;
			LOC119 = HEX5BHEX5D_291238_850551059(b0, ((NI) 1));
			result0 = ispartof_471340_788060399(a0, LOC119);
		}
		break;
		case ((Tnodekind290020) 3):
		{
			switch ((*a0).kind) {
			case ((Tnodekind290020) 45):
			case ((Tnodekind290020) 42):
			case ((Tnodekind290020) 67):
			case ((Tnodekind290020) 66):
			case ((Tnodekind290020) 46):
			case ((Tnodekind290020) 64):
			{
				Tnode290802* LOC122;
				LOC122 = (Tnode290802*)0;
				LOC122 = HEX5BHEX5D_291238_850551059(a0, ((NI) 0));
				result0 = ispartof_471340_788060399(LOC122, b0);
			}
			break;
			case ((Tnodekind290020) 58):
			case ((Tnodekind290020) 59):
			case ((Tnodekind290020) 60):
			{
				Tnode290802* LOC124;
				LOC124 = (Tnode290802*)0;
				LOC124 = HEX5BHEX5D_291238_850551059(a0, ((NI) 1));
				result0 = ispartof_471340_788060399(LOC124, b0);
			}
			break;
			case ((Tnodekind290020) 65):
			case ((Tnodekind290020) 47):
			{
				{
					Tanalysisresult471003 LOC128;
					Tnode290802* LOC131;
					LOC128 = (Tanalysisresult471003)0;
					LOC128 = ispartof_471333_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC128 == ((Tanalysisresult471003) 0)))) goto LA129;
					LOC131 = (Tnode290802*)0;
					LOC131 = HEX5BHEX5D_291238_850551059(a0, ((NI) 0));
					result0 = ispartof_471340_788060399(LOC131, b0);
					{
						if (!(result0 == ((Tanalysisresult471003) 0))) goto LA134;
						result0 = ((Tanalysisresult471003) 1);
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
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_aliasesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_aliasesDatInit000)(void) {
}

