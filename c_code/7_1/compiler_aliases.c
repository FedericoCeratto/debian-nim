/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode264794 Tnode264794;
typedef struct Ttype264832 Ttype264832;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym264826 Tsym264826;
typedef struct Tident194012 Tident194012;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct Tlib264812 Tlib264812;
typedef struct Intset241031 Intset241031;
typedef struct Trunk241027 Trunk241027;
typedef struct Trunkseq241029 Trunkseq241029;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY264917 TY264917;
typedef NU8 Tanalysisresult442004;
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag264427Set;
typedef NU8 Tnodekind264020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode264794  {
Ttype264832* typ;
Tlineinfo186336 info;
Tnodeflag264427Set flags;
Tnodekind264020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym264826* sym;
} S4;
struct {Tident194012* ident;
} S5;
struct {Tnodeseq264788* sons;
} S6;
} kindU;
NimStringDesc* comment;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef NU8 Tmagic264525;
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
typedef NU8 Tlockind264800;
typedef NU8 Tstorageloc264804;
typedef NU16 Tlocflag264802Set;
struct  Tloc264808  {
Tlockind264800 k;
Tstorageloc264804 s;
Tlocflag264802Set flags;
Ttype264832* t;
Ropeobj173006* r;
Ropeobj173006* heaproot;
};
struct  Tsym264826  {
  Tidobj194006 Sup;
Tsymkind264435 kind;
union{
struct {Ttypeseq264828* typeinstcache;
Tscope264820* typscope;
} S1;
struct {TY264927* procinstcache;
Tsym264826* gcunsafetyreason;
} S2;
struct {TY264927* usedgenerics;
Tstrtable264798 tab;
} S3;
struct {Tsym264826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic264525 magic;
Ttype264832* typ;
Tident194012* name;
Tlineinfo186336 info;
Tsym264826* owner;
Tsymflag264184Set flags;
Tnode264794* ast;
Toption164009Set options;
NI position;
NI offset;
Tloc264808 loc;
Tlib264812* annex;
Tnode264794* constraint;
};
struct  Intset241031  {
NI counter;
NI max;
Trunk241027* head;
Trunkseq241029* data;
};
typedef NU8 Ttypekind264244;
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
struct  Ttype264832  {
  Tidobj194006 Sup;
Ttypekind264244 kind;
Tcallingconvention264002 callconv;
Ttypeflag264431Set flags;
Ttypeseq264828* sons;
Tnode264794* n;
Tsym264826* owner;
Tsym264826* sym;
Tsym264826* destructor;
Tsym264826* deepcopy;
Tsym264826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc264808 loc;
};
typedef NU8 Tdistinctcompare295623;
typedef NU8 Ttypecmpflag295625Set;
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
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
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
};
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind264810;
struct  Tlib264812  {
  Tlistentry141010 Sup;
Tlibkind264810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj173006* name;
Tnode264794* path;
};
typedef NI TY30018[16];
struct  Trunk241027  {
Trunk241027* next;
NI key;
TY30018 bits;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct Trunkseq241029 {
  TGenericSeq Sup;
  Trunk241027* data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tanalysisresult442004, ispartof_442321_788060399)(Ttype264832* a0, Ttype264832* b0);
N_NIMCALL(void, initintset_241885_2627731572)(Intset241031* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tanalysisresult442004, ispartofaux_442008_788060399)(Ttype264832* a0, Ttype264832* b0, Intset241031* marker0);
N_NIMCALL(NIM_BOOL, containsorincl_241862_2627731572)(Intset241031* s0, NI key0);
N_NIMCALL(NIM_BOOL, comparetypes_297604_3876443242)(Ttype264832* x0, Ttype264832* y0, Tdistinctcompare295623 cmp0, Ttypecmpflag295625Set flags0);
N_NIMCALL(Tanalysisresult442004, ispartofaux_442014_788060399)(Tnode264794* n0, Ttype264832* b0, Intset241031* marker0);
N_NIMCALL(NI, sonslen_267351_850551059)(Tnode264794* n0);
N_NIMCALL(Tnode264794*, lastson_267364_850551059)(Tnode264794* n0);
N_NIMCALL(void, internalerror_191113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, internalerror_191100_155036129)(Tlineinfo186336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Ttype264832*, lastson_267377_850551059)(Ttype264832* n0);
N_NIMCALL(NI, sonslen_267327_850551059)(Ttype264832* n0);
N_NIMCALL(Tanalysisresult442004, ispartof_442328_788060399)(Tnode264794* a0, Tnode264794* b0);
static N_INLINE(Tnode264794*, HEX5BHEX5D_265238_850551059)(Tnode264794* n0, NI i0);
static N_INLINE(NI, len_265080_850551059)(Tnode264794* n0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_290361_2616423590)(Tnode264794* n0);
N_NIMCALL(NIM_BOOL, samevalue_271194_2984716966)(Tnode264794* a0, Tnode264794* b0);
STRING_LITERAL(TMP3526, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3527, "isPartOfAux()", 13);

N_NIMCALL(Tanalysisresult442004, ispartofaux_442014_788060399)(Tnode264794* n0, Ttype264832* b0, Intset241031* marker0) {
	Tanalysisresult442004 result0;
{	result0 = (Tanalysisresult442004)0;
	result0 = ((Tanalysisresult442004) 0);
	switch ((*n0).kind) {
	case ((Tnodekind264020) 138):
	{
		{
			NI i_442032_788060399;
			NI HEX3Atmp_442237_788060399;
			NI LOC3;
			NI res_442240_788060399;
			i_442032_788060399 = (NI)0;
			HEX3Atmp_442237_788060399 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_267351_850551059(n0);
			HEX3Atmp_442237_788060399 = (NI)(LOC3 - ((NI) 1));
			res_442240_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_442240_788060399 <= HEX3Atmp_442237_788060399)) goto LA5;
					i_442032_788060399 = res_442240_788060399;
					result0 = ispartofaux_442014_788060399((*n0).kindU.S6.sons->data[i_442032_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult442004) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_442240_788060399 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind264020) 139):
	{
		result0 = ispartofaux_442014_788060399((*n0).kindU.S6.sons->data[((NI) 0)], b0, marker0);
		{
			if (!(result0 == ((Tanalysisresult442004) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_442222_788060399;
			NI HEX3Atmp_442245_788060399;
			NI LOC16;
			NI res_442248_788060399;
			i_442222_788060399 = (NI)0;
			HEX3Atmp_442245_788060399 = (NI)0;
			LOC16 = (NI)0;
			LOC16 = sonslen_267351_850551059(n0);
			HEX3Atmp_442245_788060399 = (NI)(LOC16 - ((NI) 1));
			res_442248_788060399 = ((NI) 1);
			{
				while (1) {
					if (!(res_442248_788060399 <= HEX3Atmp_442245_788060399)) goto LA18;
					i_442222_788060399 = res_442248_788060399;
					switch ((*(*n0).kindU.S6.sons->data[i_442222_788060399]).kind) {
					case ((Tnodekind264020) 85):
					case ((Tnodekind264020) 88):
					{
						Tnode264794* LOC20;
						LOC20 = (Tnode264794*)0;
						LOC20 = lastson_267364_850551059((*n0).kindU.S6.sons->data[i_442222_788060399]);
						result0 = ispartofaux_442014_788060399(LOC20, b0, marker0);
						{
							if (!(result0 == ((Tanalysisresult442004) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_191113_155036129(((NimStringDesc*) &TMP3526));
					}
					break;
					}
					res_442248_788060399 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((Tnodekind264020) 3):
	{
		result0 = ispartofaux_442008_788060399((*(*n0).kindU.S4.sym).typ, b0, marker0);
	}
	break;
	default:
	{
		internalerror_191100_155036129((*n0).info, ((NimStringDesc*) &TMP3527));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tanalysisresult442004, ispartofaux_442008_788060399)(Ttype264832* a0, Ttype264832* b0, Intset241031* marker0) {
	Tanalysisresult442004 result0;
{	result0 = (Tanalysisresult442004)0;
	result0 = ((Tanalysisresult442004) 0);
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
		LOC9 = containsorincl_241862_2627731572(marker0, (*a0).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = (NIM_BOOL)0;
		LOC14 = comparetypes_297604_3876443242(a0, b0, ((Tdistinctcompare295623) 1), 0);
		if (!LOC14) goto LA15;
		result0 = ((Tanalysisresult442004) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a0).kind) {
	case ((Ttypekind264244) 17):
	{
		result0 = ispartofaux_442008_788060399((*a0).sons->data[((NI) 0)], b0, marker0);
		{
			if (!(result0 == ((Tanalysisresult442004) 0))) goto LA20;
			result0 = ispartofaux_442014_788060399((*a0).n, b0, marker0);
		}
		LA20: ;
	}
	break;
	case ((Ttypekind264244) 11):
	case ((Ttypekind264244) 13):
	{
		Ttype264832* LOC23;
		LOC23 = (Ttype264832*)0;
		LOC23 = lastson_267377_850551059(a0);
		result0 = ispartofaux_442008_788060399(LOC23, b0, marker0);
	}
	break;
	case ((Ttypekind264244) 16):
	case ((Ttypekind264244) 4):
	case ((Ttypekind264244) 19):
	case ((Ttypekind264244) 18):
	{
		{
			NI i_442303_788060399;
			NI HEX3Atmp_442314_788060399;
			NI LOC26;
			NI res_442317_788060399;
			i_442303_788060399 = (NI)0;
			HEX3Atmp_442314_788060399 = (NI)0;
			LOC26 = (NI)0;
			LOC26 = sonslen_267327_850551059(a0);
			HEX3Atmp_442314_788060399 = (NI)(LOC26 - ((NI) 1));
			res_442317_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_442317_788060399 <= HEX3Atmp_442314_788060399)) goto LA28;
					i_442303_788060399 = res_442317_788060399;
					result0 = ispartofaux_442008_788060399((*a0).sons->data[i_442303_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult442004) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					res_442317_788060399 += ((NI) 1);
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
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tanalysisresult442004, ispartof_442321_788060399)(Ttype264832* a0, Ttype264832* b0) {
	Tanalysisresult442004 result0;
	Intset241031 marker0;
	result0 = (Tanalysisresult442004)0;
	memset((void*)(&marker0), 0, sizeof(marker0));
	chckNil((void*)(&marker0));
	memset((void*)(&marker0), 0, sizeof(marker0));
	initintset_241885_2627731572((&marker0));
	result0 = ispartofaux_442008_788060399(b0, a0, (&marker0));
	return result0;
}

static N_INLINE(Tnode264794*, HEX5BHEX5D_265238_850551059)(Tnode264794* n0, NI i0) {
	Tnode264794* result0;
	result0 = (Tnode264794*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

static N_INLINE(NI, len_265080_850551059)(Tnode264794* n0) {
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

N_NIMCALL(Tanalysisresult442004, ispartof_442328_788060399)(Tnode264794* a0, Tnode264794* b0) {
	Tanalysisresult442004 result0;
	result0 = (Tanalysisresult442004)0;
	{
		if (!((*a0).kind == (*b0).kind)) goto LA3;
		switch ((*a0).kind) {
		case ((Tnodekind264020) 3):
		{
			{
				if (!((*(*a0).kindU.S4.sym).Sup.id == (*(*b0).kindU.S4.sym).Sup.id)) goto LA8;
				result0 = ((Tanalysisresult442004) 2);
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
				result0 = ((Tanalysisresult442004) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					Tanalysisresult442004 LOC18;
					LOC18 = (Tanalysisresult442004)0;
					LOC18 = ispartof_442321_788060399((*(*a0).kindU.S4.sym).typ, (*(*b0).kindU.S4.sym).typ);
					if (!!((LOC18 == ((Tanalysisresult442004) 0)))) goto LA19;
					result0 = ((Tanalysisresult442004) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((Tnodekind264020) 42):
		{
			Tnode264794* LOC22;
			Tnode264794* LOC23;
			LOC22 = (Tnode264794*)0;
			LOC22 = HEX5BHEX5D_265238_850551059(a0, ((NI) 0));
			LOC23 = (Tnode264794*)0;
			LOC23 = HEX5BHEX5D_265238_850551059(b0, ((NI) 0));
			result0 = ispartof_442328_788060399(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = (NIM_BOOL)0;
				LOC27 = (NI)0;
				LOC27 = len_265080_850551059(a0);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = (NI)0;
				LOC29 = len_265080_850551059(b0);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode264794* LOC37;
					Tnode264794* LOC39;
					Tnode264794* x0;
					Tnode264794* y0;
					LOC34 = (NIM_BOOL)0;
					LOC35 = (NIM_BOOL)0;
					LOC35 = (result0 == ((Tanalysisresult442004) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = (Tnode264794*)0;
					LOC37 = HEX5BHEX5D_265238_850551059(a0, ((NI) 1));
					LOC35 = isdeepconstexpr_290361_2616423590(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = (Tnode264794*)0;
					LOC39 = HEX5BHEX5D_265238_850551059(b0, ((NI) 1));
					LOC34 = isdeepconstexpr_290361_2616423590(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode264794* LOC44;
						Tnode264794* LOC47;
						LOC44 = (Tnode264794*)0;
						LOC44 = HEX5BHEX5D_265238_850551059(a0, ((NI) 1));
						if (!((*LOC44).kind == ((Tnodekind264020) 58))) goto LA45;
						LOC47 = (Tnode264794*)0;
						LOC47 = HEX5BHEX5D_265238_850551059(a0, ((NI) 1));
						x0 = HEX5BHEX5D_265238_850551059(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x0 = HEX5BHEX5D_265238_850551059(a0, ((NI) 1));
					}
					LA42: ;
					{
						Tnode264794* LOC51;
						Tnode264794* LOC54;
						LOC51 = (Tnode264794*)0;
						LOC51 = HEX5BHEX5D_265238_850551059(b0, ((NI) 1));
						if (!((*LOC51).kind == ((Tnodekind264020) 58))) goto LA52;
						LOC54 = (Tnode264794*)0;
						LOC54 = HEX5BHEX5D_265238_850551059(b0, ((NI) 1));
						y0 = HEX5BHEX5D_265238_850551059(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y0 = HEX5BHEX5D_265238_850551059(b0, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = (NIM_BOOL)0;
						LOC58 = samevalue_271194_2984716966(x0, y0);
						if (!LOC58) goto LA59;
						result0 = ((Tanalysisresult442004) 2);
					}
					goto LA56;
					LA59: ;
					{
						result0 = ((Tanalysisresult442004) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result0 == ((Tanalysisresult442004) 2)))) goto LA65;
					{
						Tanalysisresult442004 LOC69;
						LOC69 = (Tanalysisresult442004)0;
						LOC69 = ispartof_442321_788060399((*a0).typ, (*b0).typ);
						if (!!((LOC69 == ((Tanalysisresult442004) 0)))) goto LA70;
						result0 = ((Tanalysisresult442004) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((Tnodekind264020) 45):
		{
			Tnode264794* LOC73;
			Tnode264794* LOC74;
			LOC73 = (Tnode264794*)0;
			LOC73 = HEX5BHEX5D_265238_850551059(a0, ((NI) 0));
			LOC74 = (Tnode264794*)0;
			LOC74 = HEX5BHEX5D_265238_850551059(b0, ((NI) 0));
			result0 = ispartof_442328_788060399(LOC73, LOC74);
			{
				if (!!((result0 == ((Tanalysisresult442004) 0)))) goto LA77;
				{
					Tnode264794* LOC81;
					Tnode264794* LOC82;
					LOC81 = (Tnode264794*)0;
					LOC81 = HEX5BHEX5D_265238_850551059(a0, ((NI) 1));
					LOC82 = (Tnode264794*)0;
					LOC82 = HEX5BHEX5D_265238_850551059(b0, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
					result0 = ((Tanalysisresult442004) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((Tnodekind264020) 65):
		case ((Tnodekind264020) 47):
		{
			Tnode264794* LOC86;
			Tnode264794* LOC87;
			LOC86 = (Tnode264794*)0;
			LOC86 = HEX5BHEX5D_265238_850551059(a0, ((NI) 0));
			LOC87 = (Tnode264794*)0;
			LOC87 = HEX5BHEX5D_265238_850551059(b0, ((NI) 0));
			result0 = ispartof_442328_788060399(LOC86, LOC87);
			{
				if (!!((result0 == ((Tanalysisresult442004) 2)))) goto LA90;
				{
					Tanalysisresult442004 LOC94;
					LOC94 = (Tanalysisresult442004)0;
					LOC94 = ispartof_442321_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC94 == ((Tanalysisresult442004) 0)))) goto LA95;
					result0 = ((Tanalysisresult442004) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((Tnodekind264020) 58):
		case ((Tnodekind264020) 59):
		case ((Tnodekind264020) 60):
		{
			Tnode264794* LOC98;
			Tnode264794* LOC99;
			LOC98 = (Tnode264794*)0;
			LOC98 = HEX5BHEX5D_265238_850551059(a0, ((NI) 1));
			LOC99 = (Tnode264794*)0;
			LOC99 = HEX5BHEX5D_265238_850551059(b0, ((NI) 1));
			result0 = ispartof_442328_788060399(LOC98, LOC99);
		}
		break;
		case ((Tnodekind264020) 67):
		case ((Tnodekind264020) 66):
		case ((Tnodekind264020) 46):
		{
			Tnode264794* LOC101;
			Tnode264794* LOC102;
			LOC101 = (Tnode264794*)0;
			LOC101 = HEX5BHEX5D_265238_850551059(a0, ((NI) 0));
			LOC102 = (Tnode264794*)0;
			LOC102 = HEX5BHEX5D_265238_850551059(b0, ((NI) 0));
			result0 = ispartof_442328_788060399(LOC101, LOC102);
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
		case ((Tnodekind264020) 45):
		case ((Tnodekind264020) 42):
		case ((Tnodekind264020) 67):
		case ((Tnodekind264020) 66):
		case ((Tnodekind264020) 46):
		case ((Tnodekind264020) 64):
		{
			Tnode264794* LOC106;
			LOC106 = (Tnode264794*)0;
			LOC106 = HEX5BHEX5D_265238_850551059(b0, ((NI) 0));
			result0 = ispartof_442328_788060399(a0, LOC106);
		}
		break;
		case ((Tnodekind264020) 65):
		case ((Tnodekind264020) 47):
		{
			{
				Tanalysisresult442004 LOC110;
				Tnode264794* LOC113;
				LOC110 = (Tanalysisresult442004)0;
				LOC110 = ispartof_442321_788060399((*a0).typ, (*b0).typ);
				if (!!((LOC110 == ((Tanalysisresult442004) 0)))) goto LA111;
				LOC113 = (Tnode264794*)0;
				LOC113 = HEX5BHEX5D_265238_850551059(b0, ((NI) 0));
				result0 = ispartof_442328_788060399(a0, LOC113);
				{
					if (!(result0 == ((Tanalysisresult442004) 0))) goto LA116;
					result0 = ((Tanalysisresult442004) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((Tnodekind264020) 58):
		case ((Tnodekind264020) 59):
		case ((Tnodekind264020) 60):
		{
			Tnode264794* LOC119;
			LOC119 = (Tnode264794*)0;
			LOC119 = HEX5BHEX5D_265238_850551059(b0, ((NI) 1));
			result0 = ispartof_442328_788060399(a0, LOC119);
		}
		break;
		case ((Tnodekind264020) 3):
		{
			switch ((*a0).kind) {
			case ((Tnodekind264020) 45):
			case ((Tnodekind264020) 42):
			case ((Tnodekind264020) 67):
			case ((Tnodekind264020) 66):
			case ((Tnodekind264020) 46):
			case ((Tnodekind264020) 64):
			{
				Tnode264794* LOC122;
				LOC122 = (Tnode264794*)0;
				LOC122 = HEX5BHEX5D_265238_850551059(a0, ((NI) 0));
				result0 = ispartof_442328_788060399(LOC122, b0);
			}
			break;
			case ((Tnodekind264020) 58):
			case ((Tnodekind264020) 59):
			case ((Tnodekind264020) 60):
			{
				Tnode264794* LOC124;
				LOC124 = (Tnode264794*)0;
				LOC124 = HEX5BHEX5D_265238_850551059(a0, ((NI) 1));
				result0 = ispartof_442328_788060399(LOC124, b0);
			}
			break;
			case ((Tnodekind264020) 65):
			case ((Tnodekind264020) 47):
			{
				{
					Tanalysisresult442004 LOC128;
					Tnode264794* LOC131;
					LOC128 = (Tanalysisresult442004)0;
					LOC128 = ispartof_442321_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC128 == ((Tanalysisresult442004) 0)))) goto LA129;
					LOC131 = (Tnode264794*)0;
					LOC131 = HEX5BHEX5D_265238_850551059(a0, ((NI) 0));
					result0 = ispartof_442328_788060399(LOC131, b0);
					{
						if (!(result0 == ((Tanalysisresult442004) 0))) goto LA134;
						result0 = ((Tanalysisresult442004) 1);
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

