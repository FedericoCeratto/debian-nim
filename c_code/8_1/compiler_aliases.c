/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode263794 Tnode263794;
typedef struct Ttype263832 Ttype263832;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym263826 Tsym263826;
typedef struct Tident193012 Tident193012;
typedef struct Tnodeseq263788 Tnodeseq263788;
typedef struct Tidobj193006 Tidobj193006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct Tscope263820 Tscope263820;
typedef struct TY263927 TY263927;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Tloc263808 Tloc263808;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tlib263812 Tlib263812;
typedef struct Intset240031 Intset240031;
typedef struct Trunk240027 Trunk240027;
typedef struct Trunkseq240029 Trunkseq240029;
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY263917 TY263917;
typedef NU8 Tanalysisresult441004;
struct  Tlineinfo185336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag263427Set;
typedef NU8 Tnodekind263020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode263794  {
Ttype263832* typ;
Tlineinfo185336 info;
Tnodeflag263427Set flags;
Tnodekind263020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym263826* sym;
} S4;
struct {Tident193012* ident;
} S5;
struct {Tnodeseq263788* sons;
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
struct  Tidobj193006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tsymkind263435;
struct  Tstrtable263798  {
NI counter;
Tsymseq263796* data;
};
typedef NU8 Tmagic263525;
typedef NU32 Tsymflag263184Set;
typedef NU32 Toption163009Set;
typedef NU8 Tlockind263800;
typedef NU8 Tstorageloc263804;
typedef NU16 Tlocflag263802Set;
struct  Tloc263808  {
Tlockind263800 k;
Tstorageloc263804 s;
Tlocflag263802Set flags;
Ttype263832* t;
Ropeobj172006* r;
Ropeobj172006* heaproot;
};
struct  Tsym263826  {
  Tidobj193006 Sup;
Tsymkind263435 kind;
union{
struct {Ttypeseq263828* typeinstcache;
Tscope263820* typscope;
} S1;
struct {TY263927* procinstcache;
Tsym263826* gcunsafetyreason;
} S2;
struct {TY263927* usedgenerics;
Tstrtable263798 tab;
} S3;
struct {Tsym263826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic263525 magic;
Ttype263832* typ;
Tident193012* name;
Tlineinfo185336 info;
Tsym263826* owner;
Tsymflag263184Set flags;
Tnode263794* ast;
Toption163009Set options;
NI position;
NI offset;
Tloc263808 loc;
Tlib263812* annex;
Tnode263794* constraint;
};
struct  Intset240031  {
NI counter;
NI max;
Trunk240027* head;
Trunkseq240029* data;
};
typedef NU8 Ttypekind263244;
typedef NU8 Tcallingconvention263002;
typedef NU32 Ttypeflag263431Set;
struct  Ttype263832  {
  Tidobj193006 Sup;
Ttypekind263244 kind;
Tcallingconvention263002 callconv;
Ttypeflag263431Set flags;
Ttypeseq263828* sons;
Tnode263794* n;
Tsym263826* owner;
Tsym263826* sym;
Tsym263826* destructor;
Tsym263826* deepcopy;
Tsym263826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc263808 loc;
};
typedef NU8 Tdistinctcompare294623;
typedef NU8 Ttypecmpflag294625Set;
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
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
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
};
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind263810;
struct  Tlib263812  {
  Tlistentry141010 Sup;
Tlibkind263810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj172006* name;
Tnode263794* path;
};
typedef NI TY30018[16];
struct  Trunk240027  {
Trunk240027* next;
NI key;
TY30018 bits;
};
struct  Tinstantiation263816  {
Tsym263826* sym;
Ttypeseq263828* concretetypes;
TY263917* usedby;
NI compilesid;
};
struct Tnodeseq263788 {
  TGenericSeq Sup;
  Tnode263794* data[SEQ_DECL_SIZE];
};
struct Ttypeseq263828 {
  TGenericSeq Sup;
  Ttype263832* data[SEQ_DECL_SIZE];
};
struct TY263927 {
  TGenericSeq Sup;
  Tinstantiation263816* data[SEQ_DECL_SIZE];
};
struct Tsymseq263796 {
  TGenericSeq Sup;
  Tsym263826* data[SEQ_DECL_SIZE];
};
struct Trunkseq240029 {
  TGenericSeq Sup;
  Trunk240027* data[SEQ_DECL_SIZE];
};
struct TY263917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tanalysisresult441004, ispartof_441321_788060399)(Ttype263832* a0, Ttype263832* b0);
N_NIMCALL(void, initintset_240885_2627731572)(Intset240031* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(Tanalysisresult441004, ispartofaux_441008_788060399)(Ttype263832* a0, Ttype263832* b0, Intset240031* marker0);
N_NIMCALL(NIM_BOOL, containsorincl_240862_2627731572)(Intset240031* s0, NI key0);
N_NIMCALL(NIM_BOOL, comparetypes_296604_3876443242)(Ttype263832* x0, Ttype263832* y0, Tdistinctcompare294623 cmp0, Ttypecmpflag294625Set flags0);
N_NIMCALL(Tanalysisresult441004, ispartofaux_441014_788060399)(Tnode263794* n0, Ttype263832* b0, Intset240031* marker0);
N_NIMCALL(NI, sonslen_266351_850551059)(Tnode263794* n0);
N_NIMCALL(Tnode263794*, lastson_266364_850551059)(Tnode263794* n0);
N_NIMCALL(void, internalerror_190113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(void, internalerror_190100_155036129)(Tlineinfo185336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Ttype263832*, lastson_266377_850551059)(Ttype263832* n0);
N_NIMCALL(NI, sonslen_266327_850551059)(Ttype263832* n0);
N_NIMCALL(Tanalysisresult441004, ispartof_441328_788060399)(Tnode263794* a0, Tnode263794* b0);
static N_INLINE(Tnode263794*, HEX5BHEX5D_264238_850551059)(Tnode263794* n0, NI i0);
static N_INLINE(NI, len_264080_850551059)(Tnode263794* n0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_289361_2616423590)(Tnode263794* n0);
N_NIMCALL(NIM_BOOL, samevalue_270194_2984716966)(Tnode263794* a0, Tnode263794* b0);
STRING_LITERAL(TMP3525, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3526, "isPartOfAux()", 13);

N_NIMCALL(Tanalysisresult441004, ispartofaux_441014_788060399)(Tnode263794* n0, Ttype263832* b0, Intset240031* marker0) {
	Tanalysisresult441004 result0;
{	result0 = (Tanalysisresult441004)0;
	result0 = ((Tanalysisresult441004) 0);
	switch ((*n0).kind) {
	case ((Tnodekind263020) 138):
	{
		{
			NI i_441032_788060399;
			NI HEX3Atmp_441237_788060399;
			NI LOC3;
			NI res_441240_788060399;
			i_441032_788060399 = (NI)0;
			HEX3Atmp_441237_788060399 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_266351_850551059(n0);
			HEX3Atmp_441237_788060399 = (NI)(LOC3 - ((NI) 1));
			res_441240_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_441240_788060399 <= HEX3Atmp_441237_788060399)) goto LA5;
					i_441032_788060399 = res_441240_788060399;
					result0 = ispartofaux_441014_788060399((*n0).kindU.S6.sons->data[i_441032_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult441004) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_441240_788060399 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind263020) 139):
	{
		result0 = ispartofaux_441014_788060399((*n0).kindU.S6.sons->data[((NI) 0)], b0, marker0);
		{
			if (!(result0 == ((Tanalysisresult441004) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_441222_788060399;
			NI HEX3Atmp_441245_788060399;
			NI LOC16;
			NI res_441248_788060399;
			i_441222_788060399 = (NI)0;
			HEX3Atmp_441245_788060399 = (NI)0;
			LOC16 = (NI)0;
			LOC16 = sonslen_266351_850551059(n0);
			HEX3Atmp_441245_788060399 = (NI)(LOC16 - ((NI) 1));
			res_441248_788060399 = ((NI) 1);
			{
				while (1) {
					if (!(res_441248_788060399 <= HEX3Atmp_441245_788060399)) goto LA18;
					i_441222_788060399 = res_441248_788060399;
					switch ((*(*n0).kindU.S6.sons->data[i_441222_788060399]).kind) {
					case ((Tnodekind263020) 85):
					case ((Tnodekind263020) 88):
					{
						Tnode263794* LOC20;
						LOC20 = (Tnode263794*)0;
						LOC20 = lastson_266364_850551059((*n0).kindU.S6.sons->data[i_441222_788060399]);
						result0 = ispartofaux_441014_788060399(LOC20, b0, marker0);
						{
							if (!(result0 == ((Tanalysisresult441004) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_190113_155036129(((NimStringDesc*) &TMP3525));
					}
					break;
					}
					res_441248_788060399 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((Tnodekind263020) 3):
	{
		result0 = ispartofaux_441008_788060399((*(*n0).kindU.S4.sym).typ, b0, marker0);
	}
	break;
	default:
	{
		internalerror_190100_155036129((*n0).info, ((NimStringDesc*) &TMP3526));
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tanalysisresult441004, ispartofaux_441008_788060399)(Ttype263832* a0, Ttype263832* b0, Intset240031* marker0) {
	Tanalysisresult441004 result0;
{	result0 = (Tanalysisresult441004)0;
	result0 = ((Tanalysisresult441004) 0);
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
		LOC9 = containsorincl_240862_2627731572(marker0, (*a0).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = (NIM_BOOL)0;
		LOC14 = comparetypes_296604_3876443242(a0, b0, ((Tdistinctcompare294623) 1), 0);
		if (!LOC14) goto LA15;
		result0 = ((Tanalysisresult441004) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a0).kind) {
	case ((Ttypekind263244) 17):
	{
		result0 = ispartofaux_441008_788060399((*a0).sons->data[((NI) 0)], b0, marker0);
		{
			if (!(result0 == ((Tanalysisresult441004) 0))) goto LA20;
			result0 = ispartofaux_441014_788060399((*a0).n, b0, marker0);
		}
		LA20: ;
	}
	break;
	case ((Ttypekind263244) 11):
	case ((Ttypekind263244) 13):
	{
		Ttype263832* LOC23;
		LOC23 = (Ttype263832*)0;
		LOC23 = lastson_266377_850551059(a0);
		result0 = ispartofaux_441008_788060399(LOC23, b0, marker0);
	}
	break;
	case ((Ttypekind263244) 16):
	case ((Ttypekind263244) 4):
	case ((Ttypekind263244) 19):
	case ((Ttypekind263244) 18):
	{
		{
			NI i_441303_788060399;
			NI HEX3Atmp_441314_788060399;
			NI LOC26;
			NI res_441317_788060399;
			i_441303_788060399 = (NI)0;
			HEX3Atmp_441314_788060399 = (NI)0;
			LOC26 = (NI)0;
			LOC26 = sonslen_266327_850551059(a0);
			HEX3Atmp_441314_788060399 = (NI)(LOC26 - ((NI) 1));
			res_441317_788060399 = ((NI) 0);
			{
				while (1) {
					if (!(res_441317_788060399 <= HEX3Atmp_441314_788060399)) goto LA28;
					i_441303_788060399 = res_441317_788060399;
					result0 = ispartofaux_441008_788060399((*a0).sons->data[i_441303_788060399], b0, marker0);
					{
						if (!(result0 == ((Tanalysisresult441004) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					res_441317_788060399 += ((NI) 1);
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

N_NIMCALL(Tanalysisresult441004, ispartof_441321_788060399)(Ttype263832* a0, Ttype263832* b0) {
	Tanalysisresult441004 result0;
	Intset240031 marker0;
	result0 = (Tanalysisresult441004)0;
	memset((void*)(&marker0), 0, sizeof(marker0));
	chckNil((void*)(&marker0));
	memset((void*)(&marker0), 0, sizeof(marker0));
	initintset_240885_2627731572((&marker0));
	result0 = ispartofaux_441008_788060399(b0, a0, (&marker0));
	return result0;
}

static N_INLINE(Tnode263794*, HEX5BHEX5D_264238_850551059)(Tnode263794* n0, NI i0) {
	Tnode263794* result0;
	result0 = (Tnode263794*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

static N_INLINE(NI, len_264080_850551059)(Tnode263794* n0) {
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

N_NIMCALL(Tanalysisresult441004, ispartof_441328_788060399)(Tnode263794* a0, Tnode263794* b0) {
	Tanalysisresult441004 result0;
	result0 = (Tanalysisresult441004)0;
	{
		if (!((*a0).kind == (*b0).kind)) goto LA3;
		switch ((*a0).kind) {
		case ((Tnodekind263020) 3):
		{
			{
				if (!((*(*a0).kindU.S4.sym).Sup.id == (*(*b0).kindU.S4.sym).Sup.id)) goto LA8;
				result0 = ((Tanalysisresult441004) 2);
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
				result0 = ((Tanalysisresult441004) 0);
			}
			goto LA6;
			LA13: ;
			{
				{
					Tanalysisresult441004 LOC18;
					LOC18 = (Tanalysisresult441004)0;
					LOC18 = ispartof_441321_788060399((*(*a0).kindU.S4.sym).typ, (*(*b0).kindU.S4.sym).typ);
					if (!!((LOC18 == ((Tanalysisresult441004) 0)))) goto LA19;
					result0 = ((Tanalysisresult441004) 1);
				}
				LA19: ;
			}
			LA6: ;
		}
		break;
		case ((Tnodekind263020) 42):
		{
			Tnode263794* LOC22;
			Tnode263794* LOC23;
			LOC22 = (Tnode263794*)0;
			LOC22 = HEX5BHEX5D_264238_850551059(a0, ((NI) 0));
			LOC23 = (Tnode263794*)0;
			LOC23 = HEX5BHEX5D_264238_850551059(b0, ((NI) 0));
			result0 = ispartof_441328_788060399(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = (NIM_BOOL)0;
				LOC27 = (NI)0;
				LOC27 = len_264080_850551059(a0);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = (NI)0;
				LOC29 = len_264080_850551059(b0);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode263794* LOC37;
					Tnode263794* LOC39;
					Tnode263794* x0;
					Tnode263794* y0;
					LOC34 = (NIM_BOOL)0;
					LOC35 = (NIM_BOOL)0;
					LOC35 = (result0 == ((Tanalysisresult441004) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = (Tnode263794*)0;
					LOC37 = HEX5BHEX5D_264238_850551059(a0, ((NI) 1));
					LOC35 = isdeepconstexpr_289361_2616423590(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = (Tnode263794*)0;
					LOC39 = HEX5BHEX5D_264238_850551059(b0, ((NI) 1));
					LOC34 = isdeepconstexpr_289361_2616423590(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode263794* LOC44;
						Tnode263794* LOC47;
						LOC44 = (Tnode263794*)0;
						LOC44 = HEX5BHEX5D_264238_850551059(a0, ((NI) 1));
						if (!((*LOC44).kind == ((Tnodekind263020) 58))) goto LA45;
						LOC47 = (Tnode263794*)0;
						LOC47 = HEX5BHEX5D_264238_850551059(a0, ((NI) 1));
						x0 = HEX5BHEX5D_264238_850551059(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x0 = HEX5BHEX5D_264238_850551059(a0, ((NI) 1));
					}
					LA42: ;
					{
						Tnode263794* LOC51;
						Tnode263794* LOC54;
						LOC51 = (Tnode263794*)0;
						LOC51 = HEX5BHEX5D_264238_850551059(b0, ((NI) 1));
						if (!((*LOC51).kind == ((Tnodekind263020) 58))) goto LA52;
						LOC54 = (Tnode263794*)0;
						LOC54 = HEX5BHEX5D_264238_850551059(b0, ((NI) 1));
						y0 = HEX5BHEX5D_264238_850551059(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y0 = HEX5BHEX5D_264238_850551059(b0, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = (NIM_BOOL)0;
						LOC58 = samevalue_270194_2984716966(x0, y0);
						if (!LOC58) goto LA59;
						result0 = ((Tanalysisresult441004) 2);
					}
					goto LA56;
					LA59: ;
					{
						result0 = ((Tanalysisresult441004) 0);
					}
					LA56: ;
				}
				LA40: ;
			}
			goto LA24;
			LA30: ;
			{
				{
					if (!!((result0 == ((Tanalysisresult441004) 2)))) goto LA65;
					{
						Tanalysisresult441004 LOC69;
						LOC69 = (Tanalysisresult441004)0;
						LOC69 = ispartof_441321_788060399((*a0).typ, (*b0).typ);
						if (!!((LOC69 == ((Tanalysisresult441004) 0)))) goto LA70;
						result0 = ((Tanalysisresult441004) 1);
					}
					LA70: ;
				}
				LA65: ;
			}
			LA24: ;
		}
		break;
		case ((Tnodekind263020) 45):
		{
			Tnode263794* LOC73;
			Tnode263794* LOC74;
			LOC73 = (Tnode263794*)0;
			LOC73 = HEX5BHEX5D_264238_850551059(a0, ((NI) 0));
			LOC74 = (Tnode263794*)0;
			LOC74 = HEX5BHEX5D_264238_850551059(b0, ((NI) 0));
			result0 = ispartof_441328_788060399(LOC73, LOC74);
			{
				if (!!((result0 == ((Tanalysisresult441004) 0)))) goto LA77;
				{
					Tnode263794* LOC81;
					Tnode263794* LOC82;
					LOC81 = (Tnode263794*)0;
					LOC81 = HEX5BHEX5D_264238_850551059(a0, ((NI) 1));
					LOC82 = (Tnode263794*)0;
					LOC82 = HEX5BHEX5D_264238_850551059(b0, ((NI) 1));
					if (!!(((*(*LOC81).kindU.S4.sym).Sup.id == (*(*LOC82).kindU.S4.sym).Sup.id))) goto LA83;
					result0 = ((Tanalysisresult441004) 0);
				}
				LA83: ;
			}
			LA77: ;
		}
		break;
		case ((Tnodekind263020) 65):
		case ((Tnodekind263020) 47):
		{
			Tnode263794* LOC86;
			Tnode263794* LOC87;
			LOC86 = (Tnode263794*)0;
			LOC86 = HEX5BHEX5D_264238_850551059(a0, ((NI) 0));
			LOC87 = (Tnode263794*)0;
			LOC87 = HEX5BHEX5D_264238_850551059(b0, ((NI) 0));
			result0 = ispartof_441328_788060399(LOC86, LOC87);
			{
				if (!!((result0 == ((Tanalysisresult441004) 2)))) goto LA90;
				{
					Tanalysisresult441004 LOC94;
					LOC94 = (Tanalysisresult441004)0;
					LOC94 = ispartof_441321_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC94 == ((Tanalysisresult441004) 0)))) goto LA95;
					result0 = ((Tanalysisresult441004) 1);
				}
				LA95: ;
			}
			LA90: ;
		}
		break;
		case ((Tnodekind263020) 58):
		case ((Tnodekind263020) 59):
		case ((Tnodekind263020) 60):
		{
			Tnode263794* LOC98;
			Tnode263794* LOC99;
			LOC98 = (Tnode263794*)0;
			LOC98 = HEX5BHEX5D_264238_850551059(a0, ((NI) 1));
			LOC99 = (Tnode263794*)0;
			LOC99 = HEX5BHEX5D_264238_850551059(b0, ((NI) 1));
			result0 = ispartof_441328_788060399(LOC98, LOC99);
		}
		break;
		case ((Tnodekind263020) 67):
		case ((Tnodekind263020) 66):
		case ((Tnodekind263020) 46):
		{
			Tnode263794* LOC101;
			Tnode263794* LOC102;
			LOC101 = (Tnode263794*)0;
			LOC101 = HEX5BHEX5D_264238_850551059(a0, ((NI) 0));
			LOC102 = (Tnode263794*)0;
			LOC102 = HEX5BHEX5D_264238_850551059(b0, ((NI) 0));
			result0 = ispartof_441328_788060399(LOC101, LOC102);
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
		case ((Tnodekind263020) 45):
		case ((Tnodekind263020) 42):
		case ((Tnodekind263020) 67):
		case ((Tnodekind263020) 66):
		case ((Tnodekind263020) 46):
		case ((Tnodekind263020) 64):
		{
			Tnode263794* LOC106;
			LOC106 = (Tnode263794*)0;
			LOC106 = HEX5BHEX5D_264238_850551059(b0, ((NI) 0));
			result0 = ispartof_441328_788060399(a0, LOC106);
		}
		break;
		case ((Tnodekind263020) 65):
		case ((Tnodekind263020) 47):
		{
			{
				Tanalysisresult441004 LOC110;
				Tnode263794* LOC113;
				LOC110 = (Tanalysisresult441004)0;
				LOC110 = ispartof_441321_788060399((*a0).typ, (*b0).typ);
				if (!!((LOC110 == ((Tanalysisresult441004) 0)))) goto LA111;
				LOC113 = (Tnode263794*)0;
				LOC113 = HEX5BHEX5D_264238_850551059(b0, ((NI) 0));
				result0 = ispartof_441328_788060399(a0, LOC113);
				{
					if (!(result0 == ((Tanalysisresult441004) 0))) goto LA116;
					result0 = ((Tanalysisresult441004) 1);
				}
				LA116: ;
			}
			LA111: ;
		}
		break;
		case ((Tnodekind263020) 58):
		case ((Tnodekind263020) 59):
		case ((Tnodekind263020) 60):
		{
			Tnode263794* LOC119;
			LOC119 = (Tnode263794*)0;
			LOC119 = HEX5BHEX5D_264238_850551059(b0, ((NI) 1));
			result0 = ispartof_441328_788060399(a0, LOC119);
		}
		break;
		case ((Tnodekind263020) 3):
		{
			switch ((*a0).kind) {
			case ((Tnodekind263020) 45):
			case ((Tnodekind263020) 42):
			case ((Tnodekind263020) 67):
			case ((Tnodekind263020) 66):
			case ((Tnodekind263020) 46):
			case ((Tnodekind263020) 64):
			{
				Tnode263794* LOC122;
				LOC122 = (Tnode263794*)0;
				LOC122 = HEX5BHEX5D_264238_850551059(a0, ((NI) 0));
				result0 = ispartof_441328_788060399(LOC122, b0);
			}
			break;
			case ((Tnodekind263020) 58):
			case ((Tnodekind263020) 59):
			case ((Tnodekind263020) 60):
			{
				Tnode263794* LOC124;
				LOC124 = (Tnode263794*)0;
				LOC124 = HEX5BHEX5D_264238_850551059(a0, ((NI) 1));
				result0 = ispartof_441328_788060399(LOC124, b0);
			}
			break;
			case ((Tnodekind263020) 65):
			case ((Tnodekind263020) 47):
			{
				{
					Tanalysisresult441004 LOC128;
					Tnode263794* LOC131;
					LOC128 = (Tanalysisresult441004)0;
					LOC128 = ispartof_441321_788060399((*a0).typ, (*b0).typ);
					if (!!((LOC128 == ((Tanalysisresult441004) 0)))) goto LA129;
					LOC131 = (Tnode263794*)0;
					LOC131 = HEX5BHEX5D_264238_850551059(a0, ((NI) 0));
					result0 = ispartof_441328_788060399(LOC131, b0);
					{
						if (!(result0 == ((Tanalysisresult441004) 0))) goto LA134;
						result0 = ((Tanalysisresult441004) 1);
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

