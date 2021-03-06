/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode292802 Tnode292802;
typedef struct Ttype292840 Ttype292840;
typedef struct Tlineinfo191336 Tlineinfo191336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym292834 Tsym292834;
typedef struct Tident199010 Tident199010;
typedef struct Tnodeseq292796 Tnodeseq292796;
typedef struct Tidobj199004 Tidobj199004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq292836 Ttypeseq292836;
typedef struct TY292929 TY292929;
typedef struct Tstrtable292806 Tstrtable292806;
typedef struct Tsymseq292804 Tsymseq292804;
typedef struct Tloc292816 Tloc292816;
typedef struct Ropeobj178006 Ropeobj178006;
typedef struct Tlib292820 Tlib292820;
typedef struct Intset268030 Intset268030;
typedef struct Trunk268026 Trunk268026;
typedef struct Trunkseq268028 Trunkseq268028;
typedef struct TY292960 TY292960;
typedef struct Tinstantiation292824 Tinstantiation292824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY292961 TY292961;
typedef NU8 Tanalysisresult473003;
struct  Tlineinfo191336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag292427Set;
typedef NU8 Tnodekind292020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode292802  {
Ttype292840* typ;
Tlineinfo191336 info;
Tnodeflag292427Set flags;
Tnodekind292020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym292834* sym;
} S4;
struct {Tident199010* ident;
} S5;
struct {Tnodeseq292796* sons;
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
struct  Tidobj199004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind292435;
struct  Tstrtable292806  {
NI counter;
Tsymseq292804* data;
};
typedef NU16 Tmagic292524;
typedef NU32 Tsymflag292184Set;
typedef NU32 Toption169009Set;
typedef NU8 Tlockind292808;
typedef NU8 Tstorageloc292812;
typedef NU16 Tlocflag292810Set;
struct  Tloc292816  {
Tlockind292808 k;
Tstorageloc292812 s;
Tlocflag292810Set flags;
Ttype292840* t;
Ropeobj178006* r;
};
struct  Tsym292834  {
  Tidobj199004 Sup;
Tsymkind292435 kind;
union{
struct {Ttypeseq292836* typeinstcache;
} S1;
struct {TY292929* procinstcache;
Tsym292834* gcunsafetyreason;
} S2;
struct {TY292929* usedgenerics;
Tstrtable292806 tab;
} S3;
struct {Tsym292834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic292524 magic;
Ttype292840* typ;
Tident199010* name;
Tlineinfo191336 info;
Tsym292834* owner;
Tsymflag292184Set flags;
Tnode292802* ast;
Toption169009Set options;
NI position;
NI offset;
Tloc292816 loc;
Tlib292820* annex;
Tnode292802* constraint;
};
struct  Intset268030  {
NI counter;
NI max;
Trunk268026* head;
Trunkseq268028* data;
};
typedef NU8 Ttypekind292244;
typedef NU8 Tcallingconvention292002;
typedef NU32 Ttypeflag292431Set;
struct  Ttype292840  {
  Tidobj199004 Sup;
Ttypekind292244 kind;
Tcallingconvention292002 callconv;
Ttypeflag292431Set flags;
Ttypeseq292836* sons;
Tnode292802* n;
Tsym292834* owner;
Tsym292834* sym;
Tsym292834* destructor;
Tsym292834* deepcopy;
Tsym292834* assignment;
TY292960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc292816 loc;
};
typedef NU8 Tdistinctcompare324427;
typedef NU8 Ttypecmpflag324429Set;
typedef NU64 Ttypekind292244Set;
struct  Tident199010  {
  Tidobj199004 Sup;
NimStringDesc* s;
Tident199010* next;
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
struct  Ropeobj178006  {
  TNimObject Sup;
Ropeobj178006* left;
Ropeobj178006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind292818;
struct  Tlib292820  {
  Tlistentry147007 Sup;
Tlibkind292818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj178006* name;
Tnode292802* path;
};
typedef NI TY29419[8];
struct  Trunk268026  {
Trunk268026* next;
NI key;
TY29419 bits;
};
struct TY292961 {
NI Field0;
Tsym292834* Field1;
};
struct  Tinstantiation292824  {
Tsym292834* sym;
Ttypeseq292836* concretetypes;
NI compilesid;
};
struct Tnodeseq292796 {
  TGenericSeq Sup;
  Tnode292802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq292836 {
  TGenericSeq Sup;
  Ttype292840* data[SEQ_DECL_SIZE];
};
struct TY292929 {
  TGenericSeq Sup;
  Tinstantiation292824* data[SEQ_DECL_SIZE];
};
struct Tsymseq292804 {
  TGenericSeq Sup;
  Tsym292834* data[SEQ_DECL_SIZE];
};
struct Trunkseq268028 {
  TGenericSeq Sup;
  Trunk268026* data[SEQ_DECL_SIZE];
};
struct TY292960 {
  TGenericSeq Sup;
  TY292961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tanalysisresult473003, ispartof_473333_788060399)(Ttype292840* a0, Ttype292840* b0);
N_NIMCALL(void, initintset_268885_2627731572)(Intset268030* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tanalysisresult473003, ispartofaux_473007_788060399)(Ttype292840* a0, Ttype292840* b0, Intset268030* marker0);
N_NIMCALL(NIM_BOOL, containsorincl_268862_2627731572)(Intset268030* s0, NI key0);
N_NIMCALL(NIM_BOOL, comparetypes_326214_3876443242)(Ttype292840* x0, Ttype292840* y0, Tdistinctcompare324427 cmp0, Ttypecmpflag324429Set flags0);
N_NIMCALL(Ttype292840*, skiptypes_296099_850551059)(Ttype292840* t0, Ttypekind292244Set kinds0);
N_NIMCALL(Tanalysisresult473003, ispartofaux_473013_788060399)(Tnode292802* n0, Ttype292840* b0, Intset268030* marker0);
N_NIMCALL(NI, sonslen_295351_850551059)(Tnode292802* n0);
N_NIMCALL(Tnode292802*, lastson_295364_850551059)(Tnode292802* n0);
N_NIMCALL(void, internalerror_196113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, internalerror_196100_155036129)(Tlineinfo191336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Ttype292840*, lastson_295377_850551059)(Ttype292840* n0);
N_NIMCALL(NI, sonslen_295327_850551059)(Ttype292840* n0);
N_NIMCALL(Tanalysisresult473003, ispartof_473340_788060399)(Tnode292802* a0, Tnode292802* b0);
static N_INLINE(Tnode292802*, HEX5BHEX5D_293238_850551059)(Tnode292802* n0, NI i0);
static N_INLINE(NI, len_293081_850551059)(Tnode292802* n0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_318566_2616423590)(Tnode292802* n0);
N_NIMCALL(NIM_BOOL, samevalue_299169_2984716966)(Tnode292802* a0, Tnode292802* b0);
STRING_LITERAL(T788060399_2, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(T788060399_3, "isPartOfAux()", 13);

N_NIMCALL(Tanalysisresult473003, ispartofaux_473013_788060399)(Tnode292802* n0, Ttype292840* b0, Intset268030* marker0) {
	Tanalysisresult473003 result0;
{	result0 = (Tanalysisresult473003)0;
	result0 = ((Tanalysisresult473003) 0);
	switch ((*n0).kind) {
	case ((Tnodekind292020) 138):
	{
		{
			NI i_473031_788060399;
			NI HEX3Atmp_473237_788060399;
			NI LOC3;
			NI res_473240_788060399;
			i_473031_788060399 = (NI)0;
			HEX3Atmp_473237_788060399 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_295351_850551059(n0);
			HEX3Atmp_473237_788060399 = (NI)(LOC3 - ((NI) 1));
			res_473240_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_473240_788060399 <= HEX3Atmp_473237_788060399)) goto LA5;
					i_473031_788060399 = res_473240_788060399;
					result0 = ispartofaux_473013_788060399((*n0).kindU.S6.sons->data[i_473031_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult473003) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_473240_788060399 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind292020) 139):
	{
		result0 = ispartofaux_473013_788060399((*n0).kindU.S6.sons->data[((NI) 0)], b0, marker0);
		{
			if (!(result0 == ((Tanalysisresult473003) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_473222_788060399;
			NI HEX3Atmp_473245_788060399;
			NI LOC16;
			NI res_473248_788060399;
			i_473222_788060399 = (NI)0;
			HEX3Atmp_473245_788060399 = (NI)0;
			LOC16 = (NI)0;
			LOC16 = sonslen_295351_850551059(n0);
			HEX3Atmp_473245_788060399 = (NI)(LOC16 - ((NI) 1));
			res_473248_788060399 = ((NI) 1);
			{
				while (1) {
					if (!(res_473248_788060399 <= HEX3Atmp_473245_788060399)) goto LA18;
					i_473222_788060399 = res_473248_788060399;
					switch ((*(*n0).kindU.S6.sons->data[i_473222_788060399]).kind) {
					case ((Tnodekind292020) 85):
					case ((Tnodekind292020) 88):
					{
						Tnode292802* LOC20;
						LOC20 = (Tnode292802*)0;
						LOC20 = lastson_295364_850551059((*n0).kindU.S6.sons->data[i_473222_788060399]);
						result0 = ispartofaux_473013_788060399(LOC20, b0, marker0);
						{
							if (!(result0 == ((Tanalysisresult473003) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_196113_155036129(((NimStringDesc*) &T788060399_2));
					}
					break;
					}
					res_473248_788060399 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((Tnodekind292020) 3):
	{
		result0 = ispartofaux_473007_788060399((*(*n0).kindU.S4.sym).typ, b0, marker0);
	}
	break;
	default:
	{
		internalerror_196100_155036129((*n0).info, ((NimStringDesc*) &T788060399_3));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tanalysisresult473003, ispartofaux_473007_788060399)(Ttype292840* a0, Ttype292840* b0, Intset268030* marker0) {
	Tanalysisresult473003 result0;
{	result0 = (Tanalysisresult473003)0;
	result0 = ((Tanalysisresult473003) 0);
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
		LOC9 = containsorincl_268862_2627731572(marker0, (*a0).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = (NIM_BOOL)0;
		LOC14 = comparetypes_326214_3876443242(a0, b0, ((Tdistinctcompare324427) 1), 0);
		if (!LOC14) goto LA15;
		result0 = ((Tanalysisresult473003) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a0).kind) {
	case ((Ttypekind292244) 17):
	{
		{
			Ttype292840* LOC22;
			if (!!(((*a0).sons->data[((NI) 0)] == NIM_NIL))) goto LA20;
			LOC22 = (Ttype292840*)0;
			LOC22 = skiptypes_296099_850551059((*a0).sons->data[((NI) 0)], IL64(211106247215360));
			result0 = ispartofaux_473007_788060399(LOC22, b0, marker0);
		}
		LA20: ;
		{
			if (!(result0 == ((Tanalysisresult473003) 0))) goto LA25;
			result0 = ispartofaux_473013_788060399((*a0).n, b0, marker0);
		}
		LA25: ;
	}
	break;
	case ((Ttypekind292244) 11):
	case ((Ttypekind292244) 13):
	{
		Ttype292840* LOC28;
		LOC28 = (Ttype292840*)0;
		LOC28 = lastson_295377_850551059(a0);
		result0 = ispartofaux_473007_788060399(LOC28, b0, marker0);
	}
	break;
	case ((Ttypekind292244) 16):
	case ((Ttypekind292244) 4):
	case ((Ttypekind292244) 19):
	case ((Ttypekind292244) 18):
	{
		{
			NI i_473315_788060399;
			NI HEX3Atmp_473326_788060399;
			NI LOC31;
			NI res_473329_788060399;
			i_473315_788060399 = (NI)0;
			HEX3Atmp_473326_788060399 = (NI)0;
			LOC31 = (NI)0;
			LOC31 = sonslen_295327_850551059(a0);
			HEX3Atmp_473326_788060399 = (NI)(LOC31 - ((NI) 1));
			res_473329_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_473329_788060399 <= HEX3Atmp_473326_788060399)) goto LA33;
					i_473315_788060399 = res_473329_788060399;
					result0 = ispartofaux_473007_788060399((*a0).sons->data[i_473315_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult473003) 2))) goto LA36;
						goto BeforeRet;
					}
					LA36: ;
					res_473329_788060399 += ((NI) 1);
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

N_NIMCALL(Tanalysisresult473003, ispartof_473333_788060399)(Ttype292840* a0, Ttype292840* b0) {
	Tanalysisresult473003 result0;
	Intset268030 marker0;
	result0 = (Tanalysisresult473003)0;
	memset((void*)(&marker0), 0, sizeof(marker0));
	chckNil((void*)(&marker0));
	memset((void*)(&marker0), 0, sizeof(marker0));
	initintset_268885_2627731572((&marker0));
	result0 = ispartofaux_473007_788060399(b0, a0, (&marker0));
	return result0;
}

static N_INLINE(Tnode292802*, HEX5BHEX5D_293238_850551059)(Tnode292802* n0, NI i0) {
	Tnode292802* result0;
	result0 = (Tnode292802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

static N_INLINE(NI, len_293081_850551059)(Tnode292802* n0) {
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

N_NIMCALL(Tanalysisresult473003, ispartof_473340_788060399)(Tnode292802* a0, Tnode292802* b0) {
	Tanalysisresult473003 result0;
	result0 = (Tanalysisresult473003)0;
	{
		if (!((*a0).kind == (*b0).kind)) goto LA3;
		switch ((*a0).kind) {
		case ((Tnodekind292020) 3):
		{
			{
				if (!((*(*a0).kindU.S4.sym).Sup.id == (*(*b0).kindU.S4.sym).Sup.id)) goto LA8;
				result0 = ((Tanalysisresult473003) 2);
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
				result0 = ((Tanalysisresult473003) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					Tanalysisresult473003 LOC18;
					LOC18 = (Tanalysisresult473003)0;
					LOC18 = ispartof_473333_788060399((*(*a0).kindU.S4.sym).typ, (*(*b0).kindU.S4.sym).typ);
					if (!!((LOC18 == ((Tanalysisresult473003) 0)))) goto LA19;
					result0 = ((Tanalysisresult473003) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((Tnodekind292020) 42):
		{
			Tnode292802* LOC22;
			Tnode292802* LOC23;
			LOC22 = (Tnode292802*)0;
			LOC22 = HEX5BHEX5D_293238_850551059(a0, ((NI) 0));
			LOC23 = (Tnode292802*)0;
			LOC23 = HEX5BHEX5D_293238_850551059(b0, ((NI) 0));
			result0 = ispartof_473340_788060399(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = (NIM_BOOL)0;
				LOC27 = (NI)0;
				LOC27 = len_293081_850551059(a0);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = (NI)0;
				LOC29 = len_293081_850551059(b0);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode292802* LOC37;
					Tnode292802* LOC39;
					Tnode292802* x0;
					Tnode292802* y0;
					LOC34 = (NIM_BOOL)0;
					LOC35 = (NIM_BOOL)0;
					LOC35 = (result0 == ((Tanalysisresult473003) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = (Tnode292802*)0;
					LOC37 = HEX5BHEX5D_293238_850551059(a0, ((NI) 1));
					LOC35 = isdeepconstexpr_318566_2616423590(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = (Tnode292802*)0;
					LOC39 = HEX5BHEX5D_293238_850551059(b0, ((NI) 1));
					LOC34 = isdeepconstexpr_318566_2616423590(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode292802* LOC44;
						Tnode292802* LOC47;
						LOC44 = (Tnode292802*)0;
						LOC44 = HEX5BHEX5D_293238_850551059(a0, ((NI) 1));
						if (!((*LOC44).kind == ((Tnodekind292020) 58))) goto LA45;
						LOC47 = (Tnode292802*)0;
						LOC47 = HEX5BHEX5D_293238_850551059(a0, ((NI) 1));
						x0 = HEX5BHEX5D_293238_850551059(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x0 = HEX5BHEX5D_293238_850551059(a0, ((NI) 1));
					}
					LA42: ;
					{
						Tnode292802* LOC51;
						Tnode292802* LOC54;
						LOC51 = (Tnode292802*)0;
						LOC51 = HEX5BHEX5D_293238_850551059(b0, ((NI) 1));
						if (!((*LOC51).kind == ((Tnodekind292020) 58))) goto LA52;
						LOC54 = (Tnode292802*)0;
						LOC54 = HEX5BHEX5D_293238_850551059(b0, ((NI) 1));
						y0 = HEX5BHEX5D_293238_850551059(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y0 = HEX5BHEX5D_293238_850551059(b0, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = (NIM_BOOL)0;
						LOC58 = samevalue_299169_2984716966(x0, y0);
						if (!LOC58) goto LA59;
						result0 = ((Tanalysisresult473003) 2);
					}
					goto LA56;
					LA59: ;
					{
						result0 = ((Tanalysisresult473003) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result0 == ((Tanalysisresult473003) 2)))) goto LA65;
					{
						Tanalysisresult473003 LOC69;
						LOC69 = (Tanalysisresult473003)0;
						LOC69 = ispartof_473333_788060399((*a0).typ, (*b0).typ);
						if (!!((LOC69 == ((Tanalysisresult473003) 0)))) goto LA70;
						result0 = ((Tanalysisresult473003) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((Tnodekind292020) 45):
		{
			Tnode292802* LOC73;
			Tnode292802* LOC74;
			LOC73 = (Tnode292802*)0;
			LOC73 = HEX5BHEX5D_293238_850551059(a0, ((NI) 0));
			LOC74 = (Tnode292802*)0;
			LOC74 = HEX5BHEX5D_293238_850551059(b0, ((NI) 0));
			result0 = ispartof_473340_788060399(LOC73, LOC74);
			{
				if (!!((result0 == ((Tanalysisresult473003) 0)))) goto LA77;
				{
					Tnode292802* LOC81;
					Tnode292802* LOC82;
					LOC81 = (Tnode292802*)0;
					LOC81 = HEX5BHEX5D_293238_850551059(a0, ((NI) 1));
					LOC82 = (Tnode292802*)0;
					LOC82 = HEX5BHEX5D_293238_850551059(b0, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
					result0 = ((Tanalysisresult473003) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((Tnodekind292020) 65):
		case ((Tnodekind292020) 47):
		{
			Tnode292802* LOC86;
			Tnode292802* LOC87;
			LOC86 = (Tnode292802*)0;
			LOC86 = HEX5BHEX5D_293238_850551059(a0, ((NI) 0));
			LOC87 = (Tnode292802*)0;
			LOC87 = HEX5BHEX5D_293238_850551059(b0, ((NI) 0));
			result0 = ispartof_473340_788060399(LOC86, LOC87);
			{
				if (!!((result0 == ((Tanalysisresult473003) 2)))) goto LA90;
				{
					Tanalysisresult473003 LOC94;
					LOC94 = (Tanalysisresult473003)0;
					LOC94 = ispartof_473333_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC94 == ((Tanalysisresult473003) 0)))) goto LA95;
					result0 = ((Tanalysisresult473003) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((Tnodekind292020) 58):
		case ((Tnodekind292020) 59):
		case ((Tnodekind292020) 60):
		{
			Tnode292802* LOC98;
			Tnode292802* LOC99;
			LOC98 = (Tnode292802*)0;
			LOC98 = HEX5BHEX5D_293238_850551059(a0, ((NI) 1));
			LOC99 = (Tnode292802*)0;
			LOC99 = HEX5BHEX5D_293238_850551059(b0, ((NI) 1));
			result0 = ispartof_473340_788060399(LOC98, LOC99);
		}
		break;
		case ((Tnodekind292020) 67):
		case ((Tnodekind292020) 66):
		case ((Tnodekind292020) 46):
		{
			Tnode292802* LOC101;
			Tnode292802* LOC102;
			LOC101 = (Tnode292802*)0;
			LOC101 = HEX5BHEX5D_293238_850551059(a0, ((NI) 0));
			LOC102 = (Tnode292802*)0;
			LOC102 = HEX5BHEX5D_293238_850551059(b0, ((NI) 0));
			result0 = ispartof_473340_788060399(LOC101, LOC102);
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
		case ((Tnodekind292020) 45):
		case ((Tnodekind292020) 42):
		case ((Tnodekind292020) 67):
		case ((Tnodekind292020) 66):
		case ((Tnodekind292020) 46):
		case ((Tnodekind292020) 64):
		{
			Tnode292802* LOC106;
			LOC106 = (Tnode292802*)0;
			LOC106 = HEX5BHEX5D_293238_850551059(b0, ((NI) 0));
			result0 = ispartof_473340_788060399(a0, LOC106);
		}
		break;
		case ((Tnodekind292020) 65):
		case ((Tnodekind292020) 47):
		{
			{
				Tanalysisresult473003 LOC110;
				Tnode292802* LOC113;
				LOC110 = (Tanalysisresult473003)0;
				LOC110 = ispartof_473333_788060399((*a0).typ, (*b0).typ);
				if (!!((LOC110 == ((Tanalysisresult473003) 0)))) goto LA111;
				LOC113 = (Tnode292802*)0;
				LOC113 = HEX5BHEX5D_293238_850551059(b0, ((NI) 0));
				result0 = ispartof_473340_788060399(a0, LOC113);
				{
					if (!(result0 == ((Tanalysisresult473003) 0))) goto LA116;
					result0 = ((Tanalysisresult473003) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((Tnodekind292020) 58):
		case ((Tnodekind292020) 59):
		case ((Tnodekind292020) 60):
		{
			Tnode292802* LOC119;
			LOC119 = (Tnode292802*)0;
			LOC119 = HEX5BHEX5D_293238_850551059(b0, ((NI) 1));
			result0 = ispartof_473340_788060399(a0, LOC119);
		}
		break;
		case ((Tnodekind292020) 3):
		{
			switch ((*a0).kind) {
			case ((Tnodekind292020) 45):
			case ((Tnodekind292020) 42):
			case ((Tnodekind292020) 67):
			case ((Tnodekind292020) 66):
			case ((Tnodekind292020) 46):
			case ((Tnodekind292020) 64):
			{
				Tnode292802* LOC122;
				LOC122 = (Tnode292802*)0;
				LOC122 = HEX5BHEX5D_293238_850551059(a0, ((NI) 0));
				result0 = ispartof_473340_788060399(LOC122, b0);
			}
			break;
			case ((Tnodekind292020) 58):
			case ((Tnodekind292020) 59):
			case ((Tnodekind292020) 60):
			{
				Tnode292802* LOC124;
				LOC124 = (Tnode292802*)0;
				LOC124 = HEX5BHEX5D_293238_850551059(a0, ((NI) 1));
				result0 = ispartof_473340_788060399(LOC124, b0);
			}
			break;
			case ((Tnodekind292020) 65):
			case ((Tnodekind292020) 47):
			{
				{
					Tanalysisresult473003 LOC128;
					Tnode292802* LOC131;
					LOC128 = (Tanalysisresult473003)0;
					LOC128 = ispartof_473333_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC128 == ((Tanalysisresult473003) 0)))) goto LA129;
					LOC131 = (Tnode292802*)0;
					LOC131 = HEX5BHEX5D_293238_850551059(a0, ((NI) 0));
					result0 = ispartof_473340_788060399(LOC131, b0);
					{
						if (!(result0 == ((Tanalysisresult473003) 0))) goto LA134;
						result0 = ((Tanalysisresult473003) 1);
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

