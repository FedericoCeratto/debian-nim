/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode293802 Tnode293802;
typedef struct Ttype293840 Ttype293840;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym293834 Tsym293834;
typedef struct Tident200010 Tident200010;
typedef struct Tnodeseq293796 Tnodeseq293796;
typedef struct Tidobj200004 Tidobj200004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq293836 Ttypeseq293836;
typedef struct TY293929 TY293929;
typedef struct Tstrtable293806 Tstrtable293806;
typedef struct Tsymseq293804 Tsymseq293804;
typedef struct Tloc293816 Tloc293816;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293820 Tlib293820;
typedef struct Intset269030 Intset269030;
typedef struct Trunk269026 Trunk269026;
typedef struct Trunkseq269028 Trunkseq269028;
typedef struct TY293960 TY293960;
typedef struct Tinstantiation293824 Tinstantiation293824;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct TY293961 TY293961;
typedef NU8 Tanalysisresult474003;
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag293427Set;
typedef NU8 Tnodekind293020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode293802  {
Ttype293840* typ;
Tlineinfo192336 info;
Tnodeflag293427Set flags;
Tnodekind293020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293834* sym;
} S4;
struct {Tident200010* ident;
} S5;
struct {Tnodeseq293796* sons;
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
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind293435;
struct  Tstrtable293806  {
NI counter;
Tsymseq293804* data;
};
typedef NU16 Tmagic293524;
typedef NU32 Tsymflag293184Set;
typedef NU32 Toption170009Set;
typedef NU8 Tlockind293808;
typedef NU8 Tstorageloc293812;
typedef NU16 Tlocflag293810Set;
struct  Tloc293816  {
Tlockind293808 k;
Tstorageloc293812 s;
Tlocflag293810Set flags;
Ttype293840* t;
Ropeobj179006* r;
};
struct  Tsym293834  {
  Tidobj200004 Sup;
Tsymkind293435 kind;
union{
struct {Ttypeseq293836* typeinstcache;
} S1;
struct {TY293929* procinstcache;
Tsym293834* gcunsafetyreason;
} S2;
struct {TY293929* usedgenerics;
Tstrtable293806 tab;
} S3;
struct {Tsym293834* guard;
NI bitsize;
} S4;
} kindU;
Tmagic293524 magic;
Ttype293840* typ;
Tident200010* name;
Tlineinfo192336 info;
Tsym293834* owner;
Tsymflag293184Set flags;
Tnode293802* ast;
Toption170009Set options;
NI position;
NI offset;
Tloc293816 loc;
Tlib293820* annex;
Tnode293802* constraint;
};
struct  Intset269030  {
NI counter;
NI max;
Trunk269026* head;
Trunkseq269028* data;
};
typedef NU8 Ttypekind293244;
typedef NU8 Tcallingconvention293002;
typedef NU32 Ttypeflag293431Set;
struct  Ttype293840  {
  Tidobj200004 Sup;
Ttypekind293244 kind;
Tcallingconvention293002 callconv;
Ttypeflag293431Set flags;
Ttypeseq293836* sons;
Tnode293802* n;
Tsym293834* owner;
Tsym293834* sym;
Tsym293834* destructor;
Tsym293834* deepcopy;
Tsym293834* assignment;
TY293960* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293816 loc;
};
typedef NU8 Tdistinctcompare325427;
typedef NU8 Ttypecmpflag325429Set;
typedef NU64 Ttypekind293244Set;
struct  Tident200010  {
  Tidobj200004 Sup;
NimStringDesc* s;
Tident200010* next;
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
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
};
typedef NU8 Tlibkind293818;
struct  Tlib293820  {
  Tlistentry147007 Sup;
Tlibkind293818 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293802* path;
};
typedef NI TY29419[8];
struct  Trunk269026  {
Trunk269026* next;
NI key;
TY29419 bits;
};
struct TY293961 {
NI Field0;
Tsym293834* Field1;
};
struct  Tinstantiation293824  {
Tsym293834* sym;
Ttypeseq293836* concretetypes;
NI compilesid;
};
struct Tnodeseq293796 {
  TGenericSeq Sup;
  Tnode293802* data[SEQ_DECL_SIZE];
};
struct Ttypeseq293836 {
  TGenericSeq Sup;
  Ttype293840* data[SEQ_DECL_SIZE];
};
struct TY293929 {
  TGenericSeq Sup;
  Tinstantiation293824* data[SEQ_DECL_SIZE];
};
struct Tsymseq293804 {
  TGenericSeq Sup;
  Tsym293834* data[SEQ_DECL_SIZE];
};
struct Trunkseq269028 {
  TGenericSeq Sup;
  Trunk269026* data[SEQ_DECL_SIZE];
};
struct TY293960 {
  TGenericSeq Sup;
  TY293961 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tanalysisresult474003, ispartof_474333_788060399)(Ttype293840* a0, Ttype293840* b0);
N_NIMCALL(void, initintset_269885_2627731572)(Intset269030* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tanalysisresult474003, ispartofaux_474007_788060399)(Ttype293840* a0, Ttype293840* b0, Intset269030* marker0);
N_NIMCALL(NIM_BOOL, containsorincl_269862_2627731572)(Intset269030* s0, NI key0);
N_NIMCALL(NIM_BOOL, comparetypes_327214_3876443242)(Ttype293840* x0, Ttype293840* y0, Tdistinctcompare325427 cmp0, Ttypecmpflag325429Set flags0);
N_NIMCALL(Ttype293840*, skiptypes_297099_850551059)(Ttype293840* t0, Ttypekind293244Set kinds0);
N_NIMCALL(Tanalysisresult474003, ispartofaux_474013_788060399)(Tnode293802* n0, Ttype293840* b0, Intset269030* marker0);
N_NIMCALL(NI, sonslen_296351_850551059)(Tnode293802* n0);
N_NIMCALL(Tnode293802*, lastson_296364_850551059)(Tnode293802* n0);
N_NIMCALL(void, internalerror_197113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, internalerror_197100_155036129)(Tlineinfo192336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Ttype293840*, lastson_296377_850551059)(Ttype293840* n0);
N_NIMCALL(NI, sonslen_296327_850551059)(Ttype293840* n0);
N_NIMCALL(Tanalysisresult474003, ispartof_474340_788060399)(Tnode293802* a0, Tnode293802* b0);
static N_INLINE(Tnode293802*, HEX5BHEX5D_294238_850551059)(Tnode293802* n0, NI i0);
static N_INLINE(NI, len_294081_850551059)(Tnode293802* n0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_319566_2616423590)(Tnode293802* n0);
N_NIMCALL(NIM_BOOL, samevalue_300169_2984716966)(Tnode293802* a0, Tnode293802* b0);
STRING_LITERAL(T788060399_2, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(T788060399_3, "isPartOfAux()", 13);

N_NIMCALL(Tanalysisresult474003, ispartofaux_474013_788060399)(Tnode293802* n0, Ttype293840* b0, Intset269030* marker0) {
	Tanalysisresult474003 result0;
{	result0 = (Tanalysisresult474003)0;
	result0 = ((Tanalysisresult474003) 0);
	switch ((*n0).kind) {
	case ((Tnodekind293020) 138):
	{
		{
			NI i_474031_788060399;
			NI HEX3Atmp_474237_788060399;
			NI LOC3;
			NI res_474240_788060399;
			i_474031_788060399 = (NI)0;
			HEX3Atmp_474237_788060399 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_296351_850551059(n0);
			HEX3Atmp_474237_788060399 = (NI)(LOC3 - ((NI) 1));
			res_474240_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_474240_788060399 <= HEX3Atmp_474237_788060399)) goto LA5;
					i_474031_788060399 = res_474240_788060399;
					result0 = ispartofaux_474013_788060399((*n0).kindU.S6.sons->data[i_474031_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult474003) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_474240_788060399 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind293020) 139):
	{
		result0 = ispartofaux_474013_788060399((*n0).kindU.S6.sons->data[((NI) 0)], b0, marker0);
		{
			if (!(result0 == ((Tanalysisresult474003) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_474222_788060399;
			NI HEX3Atmp_474245_788060399;
			NI LOC16;
			NI res_474248_788060399;
			i_474222_788060399 = (NI)0;
			HEX3Atmp_474245_788060399 = (NI)0;
			LOC16 = (NI)0;
			LOC16 = sonslen_296351_850551059(n0);
			HEX3Atmp_474245_788060399 = (NI)(LOC16 - ((NI) 1));
			res_474248_788060399 = ((NI) 1);
			{
				while (1) {
					if (!(res_474248_788060399 <= HEX3Atmp_474245_788060399)) goto LA18;
					i_474222_788060399 = res_474248_788060399;
					switch ((*(*n0).kindU.S6.sons->data[i_474222_788060399]).kind) {
					case ((Tnodekind293020) 85):
					case ((Tnodekind293020) 88):
					{
						Tnode293802* LOC20;
						LOC20 = (Tnode293802*)0;
						LOC20 = lastson_296364_850551059((*n0).kindU.S6.sons->data[i_474222_788060399]);
						result0 = ispartofaux_474013_788060399(LOC20, b0, marker0);
						{
							if (!(result0 == ((Tanalysisresult474003) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_197113_155036129(((NimStringDesc*) &T788060399_2));
					}
					break;
					}
					res_474248_788060399 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((Tnodekind293020) 3):
	{
		result0 = ispartofaux_474007_788060399((*(*n0).kindU.S4.sym).typ, b0, marker0);
	}
	break;
	default:
	{
		internalerror_197100_155036129((*n0).info, ((NimStringDesc*) &T788060399_3));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tanalysisresult474003, ispartofaux_474007_788060399)(Ttype293840* a0, Ttype293840* b0, Intset269030* marker0) {
	Tanalysisresult474003 result0;
{	result0 = (Tanalysisresult474003)0;
	result0 = ((Tanalysisresult474003) 0);
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
		LOC9 = containsorincl_269862_2627731572(marker0, (*a0).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = (NIM_BOOL)0;
		LOC14 = comparetypes_327214_3876443242(a0, b0, ((Tdistinctcompare325427) 1), 0);
		if (!LOC14) goto LA15;
		result0 = ((Tanalysisresult474003) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a0).kind) {
	case ((Ttypekind293244) 17):
	{
		{
			Ttype293840* LOC22;
			if (!!(((*a0).sons->data[((NI) 0)] == NIM_NIL))) goto LA20;
			LOC22 = (Ttype293840*)0;
			LOC22 = skiptypes_297099_850551059((*a0).sons->data[((NI) 0)], IL64(211106247215360));
			result0 = ispartofaux_474007_788060399(LOC22, b0, marker0);
		}
		LA20: ;
		{
			if (!(result0 == ((Tanalysisresult474003) 0))) goto LA25;
			result0 = ispartofaux_474013_788060399((*a0).n, b0, marker0);
		}
		LA25: ;
	}
	break;
	case ((Ttypekind293244) 11):
	case ((Ttypekind293244) 13):
	{
		Ttype293840* LOC28;
		LOC28 = (Ttype293840*)0;
		LOC28 = lastson_296377_850551059(a0);
		result0 = ispartofaux_474007_788060399(LOC28, b0, marker0);
	}
	break;
	case ((Ttypekind293244) 16):
	case ((Ttypekind293244) 4):
	case ((Ttypekind293244) 19):
	case ((Ttypekind293244) 18):
	{
		{
			NI i_474315_788060399;
			NI HEX3Atmp_474326_788060399;
			NI LOC31;
			NI res_474329_788060399;
			i_474315_788060399 = (NI)0;
			HEX3Atmp_474326_788060399 = (NI)0;
			LOC31 = (NI)0;
			LOC31 = sonslen_296327_850551059(a0);
			HEX3Atmp_474326_788060399 = (NI)(LOC31 - ((NI) 1));
			res_474329_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_474329_788060399 <= HEX3Atmp_474326_788060399)) goto LA33;
					i_474315_788060399 = res_474329_788060399;
					result0 = ispartofaux_474007_788060399((*a0).sons->data[i_474315_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult474003) 2))) goto LA36;
						goto BeforeRet;
					}
					LA36: ;
					res_474329_788060399 += ((NI) 1);
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

N_NIMCALL(Tanalysisresult474003, ispartof_474333_788060399)(Ttype293840* a0, Ttype293840* b0) {
	Tanalysisresult474003 result0;
	Intset269030 marker0;
	result0 = (Tanalysisresult474003)0;
	memset((void*)(&marker0), 0, sizeof(marker0));
	chckNil((void*)(&marker0));
	memset((void*)(&marker0), 0, sizeof(marker0));
	initintset_269885_2627731572((&marker0));
	result0 = ispartofaux_474007_788060399(b0, a0, (&marker0));
	return result0;
}

static N_INLINE(Tnode293802*, HEX5BHEX5D_294238_850551059)(Tnode293802* n0, NI i0) {
	Tnode293802* result0;
	result0 = (Tnode293802*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

static N_INLINE(NI, len_294081_850551059)(Tnode293802* n0) {
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

N_NIMCALL(Tanalysisresult474003, ispartof_474340_788060399)(Tnode293802* a0, Tnode293802* b0) {
	Tanalysisresult474003 result0;
	result0 = (Tanalysisresult474003)0;
	{
		if (!((*a0).kind == (*b0).kind)) goto LA3;
		switch ((*a0).kind) {
		case ((Tnodekind293020) 3):
		{
			{
				if (!((*(*a0).kindU.S4.sym).Sup.id == (*(*b0).kindU.S4.sym).Sup.id)) goto LA8;
				result0 = ((Tanalysisresult474003) 2);
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
				result0 = ((Tanalysisresult474003) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					Tanalysisresult474003 LOC18;
					LOC18 = (Tanalysisresult474003)0;
					LOC18 = ispartof_474333_788060399((*(*a0).kindU.S4.sym).typ, (*(*b0).kindU.S4.sym).typ);
					if (!!((LOC18 == ((Tanalysisresult474003) 0)))) goto LA19;
					result0 = ((Tanalysisresult474003) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((Tnodekind293020) 42):
		{
			Tnode293802* LOC22;
			Tnode293802* LOC23;
			LOC22 = (Tnode293802*)0;
			LOC22 = HEX5BHEX5D_294238_850551059(a0, ((NI) 0));
			LOC23 = (Tnode293802*)0;
			LOC23 = HEX5BHEX5D_294238_850551059(b0, ((NI) 0));
			result0 = ispartof_474340_788060399(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = (NIM_BOOL)0;
				LOC27 = (NI)0;
				LOC27 = len_294081_850551059(a0);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = (NI)0;
				LOC29 = len_294081_850551059(b0);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode293802* LOC37;
					Tnode293802* LOC39;
					Tnode293802* x0;
					Tnode293802* y0;
					LOC34 = (NIM_BOOL)0;
					LOC35 = (NIM_BOOL)0;
					LOC35 = (result0 == ((Tanalysisresult474003) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = (Tnode293802*)0;
					LOC37 = HEX5BHEX5D_294238_850551059(a0, ((NI) 1));
					LOC35 = isdeepconstexpr_319566_2616423590(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = (Tnode293802*)0;
					LOC39 = HEX5BHEX5D_294238_850551059(b0, ((NI) 1));
					LOC34 = isdeepconstexpr_319566_2616423590(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode293802* LOC44;
						Tnode293802* LOC47;
						LOC44 = (Tnode293802*)0;
						LOC44 = HEX5BHEX5D_294238_850551059(a0, ((NI) 1));
						if (!((*LOC44).kind == ((Tnodekind293020) 58))) goto LA45;
						LOC47 = (Tnode293802*)0;
						LOC47 = HEX5BHEX5D_294238_850551059(a0, ((NI) 1));
						x0 = HEX5BHEX5D_294238_850551059(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x0 = HEX5BHEX5D_294238_850551059(a0, ((NI) 1));
					}
					LA42: ;
					{
						Tnode293802* LOC51;
						Tnode293802* LOC54;
						LOC51 = (Tnode293802*)0;
						LOC51 = HEX5BHEX5D_294238_850551059(b0, ((NI) 1));
						if (!((*LOC51).kind == ((Tnodekind293020) 58))) goto LA52;
						LOC54 = (Tnode293802*)0;
						LOC54 = HEX5BHEX5D_294238_850551059(b0, ((NI) 1));
						y0 = HEX5BHEX5D_294238_850551059(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y0 = HEX5BHEX5D_294238_850551059(b0, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = (NIM_BOOL)0;
						LOC58 = samevalue_300169_2984716966(x0, y0);
						if (!LOC58) goto LA59;
						result0 = ((Tanalysisresult474003) 2);
					}
					goto LA56;
					LA59: ;
					{
						result0 = ((Tanalysisresult474003) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result0 == ((Tanalysisresult474003) 2)))) goto LA65;
					{
						Tanalysisresult474003 LOC69;
						LOC69 = (Tanalysisresult474003)0;
						LOC69 = ispartof_474333_788060399((*a0).typ, (*b0).typ);
						if (!!((LOC69 == ((Tanalysisresult474003) 0)))) goto LA70;
						result0 = ((Tanalysisresult474003) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((Tnodekind293020) 45):
		{
			Tnode293802* LOC73;
			Tnode293802* LOC74;
			LOC73 = (Tnode293802*)0;
			LOC73 = HEX5BHEX5D_294238_850551059(a0, ((NI) 0));
			LOC74 = (Tnode293802*)0;
			LOC74 = HEX5BHEX5D_294238_850551059(b0, ((NI) 0));
			result0 = ispartof_474340_788060399(LOC73, LOC74);
			{
				if (!!((result0 == ((Tanalysisresult474003) 0)))) goto LA77;
				{
					Tnode293802* LOC81;
					Tnode293802* LOC82;
					LOC81 = (Tnode293802*)0;
					LOC81 = HEX5BHEX5D_294238_850551059(a0, ((NI) 1));
					LOC82 = (Tnode293802*)0;
					LOC82 = HEX5BHEX5D_294238_850551059(b0, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
					result0 = ((Tanalysisresult474003) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((Tnodekind293020) 65):
		case ((Tnodekind293020) 47):
		{
			Tnode293802* LOC86;
			Tnode293802* LOC87;
			LOC86 = (Tnode293802*)0;
			LOC86 = HEX5BHEX5D_294238_850551059(a0, ((NI) 0));
			LOC87 = (Tnode293802*)0;
			LOC87 = HEX5BHEX5D_294238_850551059(b0, ((NI) 0));
			result0 = ispartof_474340_788060399(LOC86, LOC87);
			{
				if (!!((result0 == ((Tanalysisresult474003) 2)))) goto LA90;
				{
					Tanalysisresult474003 LOC94;
					LOC94 = (Tanalysisresult474003)0;
					LOC94 = ispartof_474333_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC94 == ((Tanalysisresult474003) 0)))) goto LA95;
					result0 = ((Tanalysisresult474003) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((Tnodekind293020) 58):
		case ((Tnodekind293020) 59):
		case ((Tnodekind293020) 60):
		{
			Tnode293802* LOC98;
			Tnode293802* LOC99;
			LOC98 = (Tnode293802*)0;
			LOC98 = HEX5BHEX5D_294238_850551059(a0, ((NI) 1));
			LOC99 = (Tnode293802*)0;
			LOC99 = HEX5BHEX5D_294238_850551059(b0, ((NI) 1));
			result0 = ispartof_474340_788060399(LOC98, LOC99);
		}
		break;
		case ((Tnodekind293020) 67):
		case ((Tnodekind293020) 66):
		case ((Tnodekind293020) 46):
		{
			Tnode293802* LOC101;
			Tnode293802* LOC102;
			LOC101 = (Tnode293802*)0;
			LOC101 = HEX5BHEX5D_294238_850551059(a0, ((NI) 0));
			LOC102 = (Tnode293802*)0;
			LOC102 = HEX5BHEX5D_294238_850551059(b0, ((NI) 0));
			result0 = ispartof_474340_788060399(LOC101, LOC102);
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
		case ((Tnodekind293020) 45):
		case ((Tnodekind293020) 42):
		case ((Tnodekind293020) 67):
		case ((Tnodekind293020) 66):
		case ((Tnodekind293020) 46):
		case ((Tnodekind293020) 64):
		{
			Tnode293802* LOC106;
			LOC106 = (Tnode293802*)0;
			LOC106 = HEX5BHEX5D_294238_850551059(b0, ((NI) 0));
			result0 = ispartof_474340_788060399(a0, LOC106);
		}
		break;
		case ((Tnodekind293020) 65):
		case ((Tnodekind293020) 47):
		{
			{
				Tanalysisresult474003 LOC110;
				Tnode293802* LOC113;
				LOC110 = (Tanalysisresult474003)0;
				LOC110 = ispartof_474333_788060399((*a0).typ, (*b0).typ);
				if (!!((LOC110 == ((Tanalysisresult474003) 0)))) goto LA111;
				LOC113 = (Tnode293802*)0;
				LOC113 = HEX5BHEX5D_294238_850551059(b0, ((NI) 0));
				result0 = ispartof_474340_788060399(a0, LOC113);
				{
					if (!(result0 == ((Tanalysisresult474003) 0))) goto LA116;
					result0 = ((Tanalysisresult474003) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((Tnodekind293020) 58):
		case ((Tnodekind293020) 59):
		case ((Tnodekind293020) 60):
		{
			Tnode293802* LOC119;
			LOC119 = (Tnode293802*)0;
			LOC119 = HEX5BHEX5D_294238_850551059(b0, ((NI) 1));
			result0 = ispartof_474340_788060399(a0, LOC119);
		}
		break;
		case ((Tnodekind293020) 3):
		{
			switch ((*a0).kind) {
			case ((Tnodekind293020) 45):
			case ((Tnodekind293020) 42):
			case ((Tnodekind293020) 67):
			case ((Tnodekind293020) 66):
			case ((Tnodekind293020) 46):
			case ((Tnodekind293020) 64):
			{
				Tnode293802* LOC122;
				LOC122 = (Tnode293802*)0;
				LOC122 = HEX5BHEX5D_294238_850551059(a0, ((NI) 0));
				result0 = ispartof_474340_788060399(LOC122, b0);
			}
			break;
			case ((Tnodekind293020) 58):
			case ((Tnodekind293020) 59):
			case ((Tnodekind293020) 60):
			{
				Tnode293802* LOC124;
				LOC124 = (Tnode293802*)0;
				LOC124 = HEX5BHEX5D_294238_850551059(a0, ((NI) 1));
				result0 = ispartof_474340_788060399(LOC124, b0);
			}
			break;
			case ((Tnodekind293020) 65):
			case ((Tnodekind293020) 47):
			{
				{
					Tanalysisresult474003 LOC128;
					Tnode293802* LOC131;
					LOC128 = (Tanalysisresult474003)0;
					LOC128 = ispartof_474333_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC128 == ((Tanalysisresult474003) 0)))) goto LA129;
					LOC131 = (Tnode293802*)0;
					LOC131 = HEX5BHEX5D_294238_850551059(a0, ((NI) 0));
					result0 = ispartof_474340_788060399(LOC131, b0);
					{
						if (!(result0 == ((Tanalysisresult474003) 0))) goto LA134;
						result0 = ((Tanalysisresult474003) 1);
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

