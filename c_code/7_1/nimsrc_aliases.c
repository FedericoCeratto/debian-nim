/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
struct  Tlineinfo163338  {
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
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Tsym190843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Intset187056  {
NI counter;
NI max;
Ttrunk187052* head;
Ttrunkseq187054* data;
};
struct  Ttype190849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
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
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode190813* path;
};
typedef NI TY27420[16];
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY27420 bits;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, ispartof_399362)(Ttype190849* a, Ttype190849* b);
N_NIMCALL(void, initintset_187927)(Intset187056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NU8, ispartofaux_399020)(Ttype190849* a, Ttype190849* b, Intset187056* marker);
N_NIMCALL(NIM_BOOL, containsorincl_187898)(Intset187056* s, NI key);
N_NIMCALL(NIM_BOOL, comparetypes_227047)(Ttype190849* x, Ttype190849* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, ispartofaux_399029)(Tnode190813* n, Ttype190849* b, Intset187056* marker);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(Tnode190813*, lastson_193431)(Tnode190813* n);
N_NIMCALL(void, internalerror_165218)(NimStringDesc* errmsg);
N_NIMCALL(void, internalerror_165199)(Tlineinfo163338 info, NimStringDesc* errmsg);
N_NIMCALL(Ttype190849*, lastson_193442)(Ttype190849* n);
N_NIMCALL(NI, sonslen_193351)(Ttype190849* n);
N_NIMCALL(NU8, ispartof_399375)(Tnode190813* a, Tnode190813* b);
static N_INLINE(Tnode190813*, HEX5BHEX5D_191244)(Tnode190813* n, NI i);
static N_INLINE(NI, len_191097)(Tnode190813* n);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_219459)(Tnode190813* n);
N_NIMCALL(NIM_BOOL, samevalue_198324)(Tnode190813* a, Tnode190813* b);
STRING_LITERAL(TMP3186, "isPartOfAux(record case branch)", 31);
STRING_LITERAL(TMP3187, "isPartOfAux()", 13);

N_NIMCALL(NU8, ispartofaux_399029)(Tnode190813* n, Ttype190849* b, Intset187056* marker) {
	NU8 result;
{	result = 0;
	result = ((NU8) 0);
	switch ((*n).kind) {
	case ((NU8) 138):
	{
		{
			NI i_399048;
			NI HEX3Atmp_399238;
			NI LOC3;
			NI res_399241;
			i_399048 = 0;
			HEX3Atmp_399238 = 0;
			LOC3 = 0;
			LOC3 = sonslen_193403(n);
			HEX3Atmp_399238 = (NI)(LOC3 - ((NI) 1));
			res_399241 = ((NI) 0);
			{
				while (1) {
					if (!(res_399241 <= HEX3Atmp_399238)) goto LA5;
					i_399048 = res_399241;
					result = ispartofaux_399029((*n).kindU.S6.sons->data[i_399048], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_399241 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		result = ispartofaux_399029((*n).kindU.S6.sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 2))) goto LA13;
			goto BeforeRet;
		}
		LA13: ;
		{
			NI i_399223;
			NI HEX3Atmp_399246;
			NI LOC16;
			NI res_399249;
			i_399223 = 0;
			HEX3Atmp_399246 = 0;
			LOC16 = 0;
			LOC16 = sonslen_193403(n);
			HEX3Atmp_399246 = (NI)(LOC16 - ((NI) 1));
			res_399249 = ((NI) 1);
			{
				while (1) {
					if (!(res_399249 <= HEX3Atmp_399246)) goto LA18;
					i_399223 = res_399249;
					switch ((*(*n).kindU.S6.sons->data[i_399223]).kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						Tnode190813* LOC20;
						LOC20 = 0;
						LOC20 = lastson_193431((*n).kindU.S6.sons->data[i_399223]);
						result = ispartofaux_399029(LOC20, b, marker);
						{
							if (!(result == ((NU8) 2))) goto LA23;
							goto BeforeRet;
						}
						LA23: ;
					}
					break;
					default:
					{
						internalerror_165218(((NimStringDesc*) &TMP3186));
					}
					break;
					}
					res_399249 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		result = ispartofaux_399020((*(*n).kindU.S4.sym).typ, b, marker);
	}
	break;
	default:
	{
		internalerror_165199((*n).info, ((NimStringDesc*) &TMP3187));
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, ispartofaux_399020)(Ttype190849* a, Ttype190849* b, Intset187056* marker) {
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
		LOC9 = containsorincl_187898(marker, (*a).Sup.id);
		if (!LOC9) goto LA10;
		goto BeforeRet;
	}
	LA10: ;
	{
		NIM_BOOL LOC14;
		LOC14 = 0;
		LOC14 = comparetypes_227047(a, b, ((NU8) 1), 0);
		if (!LOC14) goto LA15;
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA15: ;
	switch ((*a).kind) {
	case ((NU8) 17):
	{
		result = ispartofaux_399020((*a).sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((NU8) 0))) goto LA20;
			result = ispartofaux_399029((*a).n, b, marker);
		}
		LA20: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 13):
	{
		Ttype190849* LOC23;
		LOC23 = 0;
		LOC23 = lastson_193442(a);
		result = ispartofaux_399020(LOC23, b, marker);
	}
	break;
	case ((NU8) 16):
	case ((NU8) 4):
	case ((NU8) 19):
	case ((NU8) 18):
	{
		{
			NI i_399329;
			NI HEX3Atmp_399340;
			NI LOC26;
			NI res_399343;
			i_399329 = 0;
			HEX3Atmp_399340 = 0;
			LOC26 = 0;
			LOC26 = sonslen_193351(a);
			HEX3Atmp_399340 = (NI)(LOC26 - ((NI) 1));
			res_399343 = ((NI) 0);
			{
				while (1) {
					if (!(res_399343 <= HEX3Atmp_399340)) goto LA28;
					i_399329 = res_399343;
					result = ispartofaux_399020((*a).sons->data[i_399329], b, marker);
					{
						if (!(result == ((NU8) 2))) goto LA31;
						goto BeforeRet;
					}
					LA31: ;
					res_399343 += ((NI) 1);
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
	return result;
}

N_NIMCALL(NU8, ispartof_399362)(Ttype190849* a, Ttype190849* b) {
	NU8 result;
	Intset187056 marker;
	result = 0;
	memset((void*)(&marker), 0, sizeof(marker));
	chckNil((void*)(&marker));
	memset((void*)(&marker), 0, sizeof(marker));
	initintset_187927((&marker));
	result = ispartofaux_399020(b, a, (&marker));
	return result;
}

static N_INLINE(Tnode190813*, HEX5BHEX5D_191244)(Tnode190813* n, NI i) {
	Tnode190813* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

static N_INLINE(NI, len_191097)(Tnode190813* n) {
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

N_NIMCALL(NU8, ispartof_399375)(Tnode190813* a, Tnode190813* b) {
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
				LOC11 = ((4384 &(1<<(((*(*a).kindU.S4.sym).kind)&31)))!=0);
				if (LOC11) goto LA12;
				LOC11 = ((4384 &(1<<(((*(*b).kindU.S4.sym).kind)&31)))!=0);
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
					LOC18 = ispartof_399362((*(*a).kindU.S4.sym).typ, (*(*b).kindU.S4.sym).typ);
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
			Tnode190813* LOC22;
			Tnode190813* LOC23;
			LOC22 = 0;
			LOC22 = HEX5BHEX5D_191244(a, ((NI) 0));
			LOC23 = 0;
			LOC23 = HEX5BHEX5D_191244(b, ((NI) 0));
			result = ispartof_399375(LOC22, LOC23);
			{
				NIM_BOOL LOC26;
				NI LOC27;
				NI LOC29;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = len_191097(a);
				LOC26 = (((NI) 2) <= LOC27);
				if (!(LOC26)) goto LA28;
				LOC29 = 0;
				LOC29 = len_191097(b);
				LOC26 = (((NI) 2) <= LOC29);
				LA28: ;
				if (!LOC26) goto LA30;
				{
					NIM_BOOL LOC34;
					NIM_BOOL LOC35;
					Tnode190813* LOC37;
					Tnode190813* LOC39;
					Tnode190813* x;
					Tnode190813* y;
					LOC34 = 0;
					LOC35 = 0;
					LOC35 = (result == ((NU8) 2));
					if (!(LOC35)) goto LA36;
					LOC37 = 0;
					LOC37 = HEX5BHEX5D_191244(a, ((NI) 1));
					LOC35 = isdeepconstexpr_219459(LOC37);
					LA36: ;
					LOC34 = LOC35;
					if (!(LOC34)) goto LA38;
					LOC39 = 0;
					LOC39 = HEX5BHEX5D_191244(b, ((NI) 1));
					LOC34 = isdeepconstexpr_219459(LOC39);
					LA38: ;
					if (!LOC34) goto LA40;
					{
						Tnode190813* LOC44;
						Tnode190813* LOC47;
						LOC44 = 0;
						LOC44 = HEX5BHEX5D_191244(a, ((NI) 1));
						if (!((*LOC44).kind == ((NU8) 58))) goto LA45;
						LOC47 = 0;
						LOC47 = HEX5BHEX5D_191244(a, ((NI) 1));
						x = HEX5BHEX5D_191244(LOC47, ((NI) 1));
					}
					goto LA42;
					LA45: ;
					{
						x = HEX5BHEX5D_191244(a, ((NI) 1));
					}
					LA42: ;
					{
						Tnode190813* LOC51;
						Tnode190813* LOC54;
						LOC51 = 0;
						LOC51 = HEX5BHEX5D_191244(b, ((NI) 1));
						if (!((*LOC51).kind == ((NU8) 58))) goto LA52;
						LOC54 = 0;
						LOC54 = HEX5BHEX5D_191244(b, ((NI) 1));
						y = HEX5BHEX5D_191244(LOC54, ((NI) 1));
					}
					goto LA49;
					LA52: ;
					{
						y = HEX5BHEX5D_191244(b, ((NI) 1));
					}
					LA49: ;
					{
						NIM_BOOL LOC58;
						LOC58 = 0;
						LOC58 = samevalue_198324(x, y);
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
						LOC69 = ispartof_399362((*a).typ, (*b).typ);
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
			Tnode190813* LOC73;
			Tnode190813* LOC74;
			LOC73 = 0;
			LOC73 = HEX5BHEX5D_191244(a, ((NI) 0));
			LOC74 = 0;
			LOC74 = HEX5BHEX5D_191244(b, ((NI) 0));
			result = ispartof_399375(LOC73, LOC74);
			{
				if (!!((result == ((NU8) 0)))) goto LA77;
				{
					Tnode190813* LOC81;
					Tnode190813* LOC82;
					LOC81 = 0;
					LOC81 = HEX5BHEX5D_191244(a, ((NI) 1));
					LOC82 = 0;
					LOC82 = HEX5BHEX5D_191244(b, ((NI) 1));
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
			Tnode190813* LOC86;
			Tnode190813* LOC87;
			LOC86 = 0;
			LOC86 = HEX5BHEX5D_191244(a, ((NI) 0));
			LOC87 = 0;
			LOC87 = HEX5BHEX5D_191244(b, ((NI) 0));
			result = ispartof_399375(LOC86, LOC87);
			{
				if (!!((result == ((NU8) 2)))) goto LA90;
				{
					NU8 LOC94;
					LOC94 = 0;
					LOC94 = ispartof_399362((*a).typ, (*b).typ);
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
			Tnode190813* LOC98;
			Tnode190813* LOC99;
			LOC98 = 0;
			LOC98 = HEX5BHEX5D_191244(a, ((NI) 1));
			LOC99 = 0;
			LOC99 = HEX5BHEX5D_191244(b, ((NI) 1));
			result = ispartof_399375(LOC98, LOC99);
		}
		break;
		case ((NU8) 67):
		case ((NU8) 66):
		case ((NU8) 46):
		{
			Tnode190813* LOC101;
			Tnode190813* LOC102;
			LOC101 = 0;
			LOC101 = HEX5BHEX5D_191244(a, ((NI) 0));
			LOC102 = 0;
			LOC102 = HEX5BHEX5D_191244(b, ((NI) 0));
			result = ispartof_399375(LOC101, LOC102);
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
		{
			Tnode190813* LOC106;
			LOC106 = 0;
			LOC106 = HEX5BHEX5D_191244(b, ((NI) 0));
			result = ispartof_399375(a, LOC106);
		}
		break;
		case ((NU8) 65):
		case ((NU8) 47):
		{
			{
				NU8 LOC110;
				Tnode190813* LOC113;
				LOC110 = 0;
				LOC110 = ispartof_399362((*a).typ, (*b).typ);
				if (!!((LOC110 == ((NU8) 0)))) goto LA111;
				LOC113 = 0;
				LOC113 = HEX5BHEX5D_191244(b, ((NI) 0));
				result = ispartof_399375(a, LOC113);
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
			Tnode190813* LOC119;
			LOC119 = 0;
			LOC119 = HEX5BHEX5D_191244(b, ((NI) 1));
			result = ispartof_399375(a, LOC119);
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
			{
				Tnode190813* LOC122;
				LOC122 = 0;
				LOC122 = HEX5BHEX5D_191244(a, ((NI) 0));
				result = ispartof_399375(LOC122, b);
			}
			break;
			case ((NU8) 58):
			case ((NU8) 59):
			case ((NU8) 60):
			{
				Tnode190813* LOC124;
				LOC124 = 0;
				LOC124 = HEX5BHEX5D_191244(a, ((NI) 1));
				result = ispartof_399375(LOC124, b);
			}
			break;
			case ((NU8) 65):
			case ((NU8) 47):
			{
				{
					NU8 LOC128;
					Tnode190813* LOC131;
					LOC128 = 0;
					LOC128 = ispartof_399362((*a).typ, (*b).typ);
					if (!!((LOC128 == ((NU8) 0)))) goto LA129;
					LOC131 = 0;
					LOC131 = HEX5BHEX5D_191244(a, ((NI) 0));
					result = ispartof_399375(LOC131, b);
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
NIM_EXTERNC N_NOINLINE(void, nimsrc_aliasesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_aliasesDatInit)(void) {
}

