/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode294802 Tnode294802;
typedef struct Ttype294840 Ttype294840;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym294834 Tsym294834;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct Tlib294820 Tlib294820;
typedef struct Intset270030 Intset270030;
typedef struct Trunk270026 Trunk270026;
typedef struct Trunkseq270028 Trunkseq270028;
typedef struct TY294960 TY294960;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct TY294961 TY294961;
typedef NU8 Tanalysisresult475003;
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode294802  {
Ttype294840* typ;
Tlineinfo193336 info;
Tnodeflag294427Set flags;
Tnodekind294020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym294834* sym;
} S4;
struct {Tident201010* ident;
} S5;
struct {Tnodeseq294796* sons;
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
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
typedef NU8 Tlockind294808;
typedef NU8 Tstorageloc294812;
typedef NU16 Tlocflag294810Set;
struct  Tloc294816  {
Tlockind294808 k;
Tstorageloc294812 s;
Tlocflag294810Set flags;
Ttype294840* t;
Ropeobj180006* r;
};
struct  Tsym294834  {
  Tidobj201004 Sup;
Tsymkind294435 kind;
union{
struct {Ttypeseq294836* typeinstcache;
} S1;
struct {TY294929* procinstcache;
Tsym294834* gcunsafetyreason;
} S2;
struct {TY294929* usedgenerics;
Tstrtable294806 tab;
} S3;
struct {Tsym294834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic294524 magic;
Ttype294840* typ;
Tident201010* name;
Tlineinfo193336 info;
Tsym294834* owner;
Tsymflag294184Set flags;
Tnode294802* ast;
Toption171009Set options;
NI position;
NI offset;
Tloc294816 loc;
Tlib294820* annex;
Tnode294802* constraint;
};
struct  Intset270030  {
NI counter;
NI max;
Trunk270026* head;
Trunkseq270028* data;
};
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
struct  Ttype294840  {
  Tidobj201004 Sup;
Ttypekind294244 kind;
Tcallingconvention294002 callconv;
Ttypeflag294431Set flags;
Ttypeseq294836* sons;
Tnode294802* n;
Tsym294834* owner;
Tsym294834* sym;
Tsym294834* destructor;
Tsym294834* deepcopy;
Tsym294834* assignment;
TY294960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc294816 loc;
};
typedef NU8 Tdistinctcompare326427;
typedef NU8 Ttypecmpflag326429Set;
typedef NU64 Ttypekind294244Set;
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
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
struct  Ropeobj180006  {
  TNimObject Sup;
Ropeobj180006* left;
Ropeobj180006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
};
typedef NU8 Tlibkind294818;
struct  Tlib294820  {
  Tlistentry148007 Sup;
Tlibkind294818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj180006* name;
Tnode294802* path;
};
typedef NI TY29419[8];
struct  Trunk270026  {
Trunk270026* next;
NI key;
TY29419 bits;
};
struct TY294961 {
NI Field0;
Tsym294834* Field1;
};
struct  Tinstantiation294824  {
Tsym294834* sym;
Ttypeseq294836* concretetypes;
NI compilesid;
};
struct Tnodeseq294796 {
  TGenericSeq Sup;
  Tnode294802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq294836 {
  TGenericSeq Sup;
  Ttype294840* data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
struct Trunkseq270028 {
  TGenericSeq Sup;
  Trunk270026* data[SEQ_DECL_SIZE];
};
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tanalysisresult475003, ispartof_475333_788060399)(Ttype294840* a0, Ttype294840* b0);
N_NIMCALL(void, initintset_270885_2627731572)(Intset270030* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tanalysisresult475003, ispartofaux_475007_788060399)(Ttype294840* a0, Ttype294840* b0, Intset270030* marker0);
N_NIMCALL(NIM_BOOL, containsorincl_270862_2627731572)(Intset270030* s0, NI key0);
N_NIMCALL(NIM_BOOL, comparetypes_328214_3876443242)(Ttype294840* x0, Ttype294840* y0, Tdistinctcompare326427 cmp0, Ttypecmpflag326429Set flags0);
N_NIMCALL(Ttype294840*, skiptypes_298099_850551059)(Ttype294840* t0, Ttypekind294244Set kinds0);
N_NIMCALL(Tanalysisresult475003, ispartofaux_475013_788060399)(Tnode294802* n0, Ttype294840* b0, Intset270030* marker0);
N_NIMCALL(NI, sonslen_297351_850551059)(Tnode294802* n0);
N_NIMCALL(Tnode294802*, lastson_297364_850551059)(Tnode294802* n0);
N_NIMCALL(void, internalerror_198113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, internalerror_198100_155036129)(Tlineinfo193336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Ttype294840*, lastson_297377_850551059)(Ttype294840* n0);
N_NIMCALL(NI, sonslen_297327_850551059)(Ttype294840* n0);
N_NIMCALL(Tanalysisresult475003, ispartof_475340_788060399)(Tnode294802* a0, Tnode294802* b0);
static N_INLINE(Tnode294802*, HEX5BHEX5D_295238_850551059)(Tnode294802* n0, NI i0);
static N_INLINE(NI, len_295081_850551059)(Tnode294802* n0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_320566_2616423590)(Tnode294802* n0);
N_NIMCALL(NIM_BOOL, samevalue_301169_2984716966)(Tnode294802* a0, Tnode294802* b0);
STRING_LITERAL(T788060399_2, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(T788060399_3, "isPartOfAux()", 13);

N_NIMCALL(Tanalysisresult475003, ispartofaux_475013_788060399)(Tnode294802* n0, Ttype294840* b0, Intset270030* marker0) {
	Tanalysisresult475003 result0;
{	result0 = (Tanalysisresult475003)0;
	result0 = ((Tanalysisresult475003) 0);
	switch ((*n0).kind) {
	case ((Tnodekind294020) 138):
	{
		{
			NI i_475031_788060399;
			NI HEX3Atmp_475237_788060399;
			NI LOC3;
			NI res_475240_788060399;
			i_475031_788060399 = (NI)0;
			HEX3Atmp_475237_788060399 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_297351_850551059(n0);
			HEX3Atmp_475237_788060399 = (NI)(LOC3 - ((NI) 1));
			res_475240_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_475240_788060399 <= HEX3Atmp_475237_788060399)) goto LA5;
					i_475031_788060399 = res_475240_788060399;
					result0 = ispartofaux_475013_788060399((*n0).kindU.S6.sons->data[i_475031_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult475003) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_475240_788060399 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind294020) 139):
	{
		result0 = ispartofaux_475013_788060399((*n0).kindU.S6.sons->data[((NI) 0)], b0, marker0);
		{
			if (!(result0 == ((Tanalysisresult475003) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_475222_788060399;
			NI HEX3Atmp_475245_788060399;
			NI LOC16;
			NI res_475248_788060399;
			i_475222_788060399 = (NI)0;
			HEX3Atmp_475245_788060399 = (NI)0;
			LOC16 = (NI)0;
			LOC16 = sonslen_297351_850551059(n0);
			HEX3Atmp_475245_788060399 = (NI)(LOC16 - ((NI) 1));
			res_475248_788060399 = ((NI) 1);
			{
				while (1) {
					if (!(res_475248_788060399 <= HEX3Atmp_475245_788060399)) goto LA18;
					i_475222_788060399 = res_475248_788060399;
					switch ((*(*n0).kindU.S6.sons->data[i_475222_788060399]).kind) {
					case ((Tnodekind294020) 85):
					case ((Tnodekind294020) 88):
					{
						Tnode294802* LOC20;
						LOC20 = (Tnode294802*)0;
						LOC20 = lastson_297364_850551059((*n0).kindU.S6.sons->data[i_475222_788060399]);
						result0 = ispartofaux_475013_788060399(LOC20, b0, marker0);
						{
							if (!(result0 == ((Tanalysisresult475003) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_198113_155036129(((NimStringDesc*) &T788060399_2));
					}
					break;
					}
					res_475248_788060399 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((Tnodekind294020) 3):
	{
		result0 = ispartofaux_475007_788060399((*(*n0).kindU.S4.sym).typ, b0, marker0);
	}
	break;
	default:
	{
		internalerror_198100_155036129((*n0).info, ((NimStringDesc*) &T788060399_3));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tanalysisresult475003, ispartofaux_475007_788060399)(Ttype294840* a0, Ttype294840* b0, Intset270030* marker0) {
	Tanalysisresult475003 result0;
{	result0 = (Tanalysisresult475003)0;
	result0 = ((Tanalysisresult475003) 0);
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
		LOC9 = containsorincl_270862_2627731572(marker0, (*a0).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = (NIM_BOOL)0;
		LOC14 = comparetypes_328214_3876443242(a0, b0, ((Tdistinctcompare326427) 1), 0);
		if (!LOC14) goto LA15;
		result0 = ((Tanalysisresult475003) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a0).kind) {
	case ((Ttypekind294244) 17):
	{
		{
			Ttype294840* LOC22;
			if (!!(((*a0).sons->data[((NI) 0)] == NIM_NIL))) goto LA20;
			LOC22 = (Ttype294840*)0;
			LOC22 = skiptypes_298099_850551059((*a0).sons->data[((NI) 0)], IL64(211106247215360));
			result0 = ispartofaux_475007_788060399(LOC22, b0, marker0);
		}
		LA20: ;
		{
			if (!(result0 == ((Tanalysisresult475003) 0))) goto LA25;
			result0 = ispartofaux_475013_788060399((*a0).n, b0, marker0);
		}
		LA25: ;
	}
	break;
	case ((Ttypekind294244) 11):
	case ((Ttypekind294244) 13):
	{
		Ttype294840* LOC28;
		LOC28 = (Ttype294840*)0;
		LOC28 = lastson_297377_850551059(a0);
		result0 = ispartofaux_475007_788060399(LOC28, b0, marker0);
	}
	break;
	case ((Ttypekind294244) 16):
	case ((Ttypekind294244) 4):
	case ((Ttypekind294244) 19):
	case ((Ttypekind294244) 18):
	{
		{
			NI i_475315_788060399;
			NI HEX3Atmp_475326_788060399;
			NI LOC31;
			NI res_475329_788060399;
			i_475315_788060399 = (NI)0;
			HEX3Atmp_475326_788060399 = (NI)0;
			LOC31 = (NI)0;
			LOC31 = sonslen_297327_850551059(a0);
			HEX3Atmp_475326_788060399 = (NI)(LOC31 - ((NI) 1));
			res_475329_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_475329_788060399 <= HEX3Atmp_475326_788060399)) goto LA33;
					i_475315_788060399 = res_475329_788060399;
					result0 = ispartofaux_475007_788060399((*a0).sons->data[i_475315_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult475003) 2))) goto LA36;
						goto BeforeRet;
					}
					LA36: ;
					res_475329_788060399 += ((NI) 1);
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

N_NIMCALL(Tanalysisresult475003, ispartof_475333_788060399)(Ttype294840* a0, Ttype294840* b0) {
	Tanalysisresult475003 result0;
	Intset270030 marker0;
	result0 = (Tanalysisresult475003)0;
	memset((void*)(&marker0), 0, sizeof(marker0));
	chckNil((void*)(&marker0));
	memset((void*)(&marker0), 0, sizeof(marker0));
	initintset_270885_2627731572((&marker0));
	result0 = ispartofaux_475007_788060399(b0, a0, (&marker0));
	return result0;
}

static N_INLINE(Tnode294802*, HEX5BHEX5D_295238_850551059)(Tnode294802* n0, NI i0) {
	Tnode294802* result0;
	result0 = (Tnode294802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

static N_INLINE(NI, len_295081_850551059)(Tnode294802* n0) {
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

N_NIMCALL(Tanalysisresult475003, ispartof_475340_788060399)(Tnode294802* a0, Tnode294802* b0) {
	Tanalysisresult475003 result0;
	result0 = (Tanalysisresult475003)0;
	{
		if (!((*a0).kind == (*b0).kind)) goto LA3;
		switch ((*a0).kind) {
		case ((Tnodekind294020) 3):
		{
			{
				if (!((*(*a0).kindU.S4.sym).Sup.id == (*(*b0).kindU.S4.sym).Sup.id)) goto LA8;
				result0 = ((Tanalysisresult475003) 2);
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
				result0 = ((Tanalysisresult475003) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					Tanalysisresult475003 LOC18;
					LOC18 = (Tanalysisresult475003)0;
					LOC18 = ispartof_475333_788060399((*(*a0).kindU.S4.sym).typ, (*(*b0).kindU.S4.sym).typ);
					if (!!((LOC18 == ((Tanalysisresult475003) 0)))) goto LA19;
					result0 = ((Tanalysisresult475003) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((Tnodekind294020) 42):
		{
			Tnode294802* LOC22;
			Tnode294802* LOC23;
			LOC22 = (Tnode294802*)0;
			LOC22 = HEX5BHEX5D_295238_850551059(a0, ((NI) 0));
			LOC23 = (Tnode294802*)0;
			LOC23 = HEX5BHEX5D_295238_850551059(b0, ((NI) 0));
			result0 = ispartof_475340_788060399(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = (NIM_BOOL)0;
				LOC27 = (NI)0;
				LOC27 = len_295081_850551059(a0);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = (NI)0;
				LOC29 = len_295081_850551059(b0);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode294802* LOC37;
					Tnode294802* LOC39;
					Tnode294802* x0;
					Tnode294802* y0;
					LOC34 = (NIM_BOOL)0;
					LOC35 = (NIM_BOOL)0;
					LOC35 = (result0 == ((Tanalysisresult475003) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = (Tnode294802*)0;
					LOC37 = HEX5BHEX5D_295238_850551059(a0, ((NI) 1));
					LOC35 = isdeepconstexpr_320566_2616423590(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = (Tnode294802*)0;
					LOC39 = HEX5BHEX5D_295238_850551059(b0, ((NI) 1));
					LOC34 = isdeepconstexpr_320566_2616423590(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode294802* LOC44;
						Tnode294802* LOC47;
						LOC44 = (Tnode294802*)0;
						LOC44 = HEX5BHEX5D_295238_850551059(a0, ((NI) 1));
						if (!((*LOC44).kind == ((Tnodekind294020) 58))) goto LA45;
						LOC47 = (Tnode294802*)0;
						LOC47 = HEX5BHEX5D_295238_850551059(a0, ((NI) 1));
						x0 = HEX5BHEX5D_295238_850551059(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x0 = HEX5BHEX5D_295238_850551059(a0, ((NI) 1));
					}
					LA42: ;
					{
						Tnode294802* LOC51;
						Tnode294802* LOC54;
						LOC51 = (Tnode294802*)0;
						LOC51 = HEX5BHEX5D_295238_850551059(b0, ((NI) 1));
						if (!((*LOC51).kind == ((Tnodekind294020) 58))) goto LA52;
						LOC54 = (Tnode294802*)0;
						LOC54 = HEX5BHEX5D_295238_850551059(b0, ((NI) 1));
						y0 = HEX5BHEX5D_295238_850551059(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y0 = HEX5BHEX5D_295238_850551059(b0, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = (NIM_BOOL)0;
						LOC58 = samevalue_301169_2984716966(x0, y0);
						if (!LOC58) goto LA59;
						result0 = ((Tanalysisresult475003) 2);
					}
					goto LA56;
					LA59: ;
					{
						result0 = ((Tanalysisresult475003) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result0 == ((Tanalysisresult475003) 2)))) goto LA65;
					{
						Tanalysisresult475003 LOC69;
						LOC69 = (Tanalysisresult475003)0;
						LOC69 = ispartof_475333_788060399((*a0).typ, (*b0).typ);
						if (!!((LOC69 == ((Tanalysisresult475003) 0)))) goto LA70;
						result0 = ((Tanalysisresult475003) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((Tnodekind294020) 45):
		{
			Tnode294802* LOC73;
			Tnode294802* LOC74;
			LOC73 = (Tnode294802*)0;
			LOC73 = HEX5BHEX5D_295238_850551059(a0, ((NI) 0));
			LOC74 = (Tnode294802*)0;
			LOC74 = HEX5BHEX5D_295238_850551059(b0, ((NI) 0));
			result0 = ispartof_475340_788060399(LOC73, LOC74);
			{
				if (!!((result0 == ((Tanalysisresult475003) 0)))) goto LA77;
				{
					Tnode294802* LOC81;
					Tnode294802* LOC82;
					LOC81 = (Tnode294802*)0;
					LOC81 = HEX5BHEX5D_295238_850551059(a0, ((NI) 1));
					LOC82 = (Tnode294802*)0;
					LOC82 = HEX5BHEX5D_295238_850551059(b0, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
					result0 = ((Tanalysisresult475003) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((Tnodekind294020) 65):
		case ((Tnodekind294020) 47):
		{
			Tnode294802* LOC86;
			Tnode294802* LOC87;
			LOC86 = (Tnode294802*)0;
			LOC86 = HEX5BHEX5D_295238_850551059(a0, ((NI) 0));
			LOC87 = (Tnode294802*)0;
			LOC87 = HEX5BHEX5D_295238_850551059(b0, ((NI) 0));
			result0 = ispartof_475340_788060399(LOC86, LOC87);
			{
				if (!!((result0 == ((Tanalysisresult475003) 2)))) goto LA90;
				{
					Tanalysisresult475003 LOC94;
					LOC94 = (Tanalysisresult475003)0;
					LOC94 = ispartof_475333_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC94 == ((Tanalysisresult475003) 0)))) goto LA95;
					result0 = ((Tanalysisresult475003) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((Tnodekind294020) 58):
		case ((Tnodekind294020) 59):
		case ((Tnodekind294020) 60):
		{
			Tnode294802* LOC98;
			Tnode294802* LOC99;
			LOC98 = (Tnode294802*)0;
			LOC98 = HEX5BHEX5D_295238_850551059(a0, ((NI) 1));
			LOC99 = (Tnode294802*)0;
			LOC99 = HEX5BHEX5D_295238_850551059(b0, ((NI) 1));
			result0 = ispartof_475340_788060399(LOC98, LOC99);
		}
		break;
		case ((Tnodekind294020) 67):
		case ((Tnodekind294020) 66):
		case ((Tnodekind294020) 46):
		{
			Tnode294802* LOC101;
			Tnode294802* LOC102;
			LOC101 = (Tnode294802*)0;
			LOC101 = HEX5BHEX5D_295238_850551059(a0, ((NI) 0));
			LOC102 = (Tnode294802*)0;
			LOC102 = HEX5BHEX5D_295238_850551059(b0, ((NI) 0));
			result0 = ispartof_475340_788060399(LOC101, LOC102);
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
		case ((Tnodekind294020) 45):
		case ((Tnodekind294020) 42):
		case ((Tnodekind294020) 67):
		case ((Tnodekind294020) 66):
		case ((Tnodekind294020) 46):
		case ((Tnodekind294020) 64):
		{
			Tnode294802* LOC106;
			LOC106 = (Tnode294802*)0;
			LOC106 = HEX5BHEX5D_295238_850551059(b0, ((NI) 0));
			result0 = ispartof_475340_788060399(a0, LOC106);
		}
		break;
		case ((Tnodekind294020) 65):
		case ((Tnodekind294020) 47):
		{
			{
				Tanalysisresult475003 LOC110;
				Tnode294802* LOC113;
				LOC110 = (Tanalysisresult475003)0;
				LOC110 = ispartof_475333_788060399((*a0).typ, (*b0).typ);
				if (!!((LOC110 == ((Tanalysisresult475003) 0)))) goto LA111;
				LOC113 = (Tnode294802*)0;
				LOC113 = HEX5BHEX5D_295238_850551059(b0, ((NI) 0));
				result0 = ispartof_475340_788060399(a0, LOC113);
				{
					if (!(result0 == ((Tanalysisresult475003) 0))) goto LA116;
					result0 = ((Tanalysisresult475003) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((Tnodekind294020) 58):
		case ((Tnodekind294020) 59):
		case ((Tnodekind294020) 60):
		{
			Tnode294802* LOC119;
			LOC119 = (Tnode294802*)0;
			LOC119 = HEX5BHEX5D_295238_850551059(b0, ((NI) 1));
			result0 = ispartof_475340_788060399(a0, LOC119);
		}
		break;
		case ((Tnodekind294020) 3):
		{
			switch ((*a0).kind) {
			case ((Tnodekind294020) 45):
			case ((Tnodekind294020) 42):
			case ((Tnodekind294020) 67):
			case ((Tnodekind294020) 66):
			case ((Tnodekind294020) 46):
			case ((Tnodekind294020) 64):
			{
				Tnode294802* LOC122;
				LOC122 = (Tnode294802*)0;
				LOC122 = HEX5BHEX5D_295238_850551059(a0, ((NI) 0));
				result0 = ispartof_475340_788060399(LOC122, b0);
			}
			break;
			case ((Tnodekind294020) 58):
			case ((Tnodekind294020) 59):
			case ((Tnodekind294020) 60):
			{
				Tnode294802* LOC124;
				LOC124 = (Tnode294802*)0;
				LOC124 = HEX5BHEX5D_295238_850551059(a0, ((NI) 1));
				result0 = ispartof_475340_788060399(LOC124, b0);
			}
			break;
			case ((Tnodekind294020) 65):
			case ((Tnodekind294020) 47):
			{
				{
					Tanalysisresult475003 LOC128;
					Tnode294802* LOC131;
					LOC128 = (Tanalysisresult475003)0;
					LOC128 = ispartof_475333_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC128 == ((Tanalysisresult475003) 0)))) goto LA129;
					LOC131 = (Tnode294802*)0;
					LOC131 = HEX5BHEX5D_295238_850551059(a0, ((NI) 0));
					result0 = ispartof_475340_788060399(LOC131, b0);
					{
						if (!(result0 == ((Tanalysisresult475003) 0))) goto LA134;
						result0 = ((Tanalysisresult475003) 1);
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

