/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
typedef struct Tnode294802 Tnode294802;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype294840 Ttype294840;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct Tsym294834 Tsym294834;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tllstream284204 Tllstream284204;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq294836 Ttypeseq294836;
typedef struct TY294960 TY294960;
typedef struct Tloc294816 Tloc294816;
typedef struct Ropeobj180006 Ropeobj180006;
typedef struct TY294929 TY294929;
typedef struct Tstrtable294806 Tstrtable294806;
typedef struct Tsymseq294804 Tsymseq294804;
typedef struct Tlib294820 Tlib294820;
typedef struct TY294961 TY294961;
typedef struct Tinstantiation294824 Tinstantiation294824;
typedef struct Tlistentry148007 Tlistentry148007;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag294427Set;
typedef NU8 Tnodekind294020;
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
typedef NU16 Tmsgkind193002;
typedef NU8 Trenderflag313004Set;
typedef NU8 char136Set[32];
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
typedef NU8 Ttypekind294244;
typedef NU8 Tcallingconvention294002;
typedef NU32 Ttypeflag294431Set;
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
typedef NU8 Tsymkind294435;
struct  Tstrtable294806  {
NI counter;
Tsymseq294804* data;
};
typedef NU16 Tmagic294524;
typedef NU32 Tsymflag294184Set;
typedef NU32 Toption171009Set;
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
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
};
typedef NU8 Tllstreamkind284202;
struct  Tllstream284204  {
  TNimObject Sup;
Tllstreamkind284202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
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
struct TY294961 {
NI Field0;
Tsym294834* Field1;
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
struct TY294960 {
  TGenericSeq Sup;
  TY294961 data[SEQ_DECL_SIZE];
};
struct TY294929 {
  TGenericSeq Sup;
  Tinstantiation294824* data[SEQ_DECL_SIZE];
};
struct Tsymseq294804 {
  TGenericSeq Sup;
  Tsym294834* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode294802*, getarg_317033_1413030668)(Tnode294802* n0, NimStringDesc* name0, NI pos0);
N_NIMCALL(NI, sonslen_297351_850551059)(Tnode294802* n0);
N_NIMCALL(void, invalidpragma_317029_1413030668)(Tnode294802* n0);
N_NIMCALL(void, localerror_198080_155036129)(Tlineinfo193336 info0, Tmsgkind193002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, rendertree_313044_382274130)(Tnode294802* n0, Trenderflag313004Set renderflags0);
N_NIMCALL(NIM_BOOL, identeq_201450_791273810)(Tident201010* id0, NimStringDesc* name0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, strarg_317017_1413030668)(Tnode294802* n0, NimStringDesc* name0, NI pos0, NimStringDesc* default_317022_1413030668);
N_NIMCALL(NIM_BOOL, boolarg_317023_1413030668)(Tnode294802* n0, NimStringDesc* name0, NI pos0, NIM_BOOL default_317028_1413030668);
N_NIMCALL(Tllstream284204*, llstreamopen_284218_597494479)(NimStringDesc* data0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, llstreamreadline_284550_597494479)(Tllstream284204* s0, NimStringDesc** line0);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s0, NIM_BOOL leading0, NIM_BOOL trailing0, char136Set chars0);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s0, NimStringDesc* prefix0);
N_NIMCALL(void, llstreamwriteln_284608_597494479)(Tllstream284204* s0, NimStringDesc* data0);
N_NIMCALL(void, llstreamclose_284278_597494479)(Tllstream284204* s0);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s0, NimStringDesc* sub0, NimStringDesc* by0);
STRING_LITERAL(T1413030668_2, "startswith", 10);
STRING_LITERAL(T1413030668_3, "", 0);
STRING_LITERAL(T1413030668_4, "true", 4);
STRING_LITERAL(T1413030668_5, "false", 5);
STRING_LITERAL(T1413030668_6, "leading", 7);
STRING_LITERAL(T1413030668_7, "trailing", 8);
static NIM_CONST char136Set T1413030668_8 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(T1413030668_9, "sub", 3);
STRING_LITERAL(T1413030668_10, "by", 2);

N_NIMCALL(void, invalidpragma_317029_1413030668)(Tnode294802* n0) {
	NimStringDesc* LOC1;
	LOC1 = (NimStringDesc*)0;
	LOC1 = rendertree_313044_382274130(n0, 4);
	localerror_198080_155036129((*n0).info, ((Tmsgkind193002) 167), LOC1);
}

N_NIMCALL(Tnode294802*, getarg_317033_1413030668)(Tnode294802* n0, NimStringDesc* name0, NI pos0) {
	Tnode294802* result0;
{	result0 = (Tnode294802*)0;
	result0 = NIM_NIL;
	{
		if (!((*n0).kind >= ((Tnodekind294020) 1) && (*n0).kind <= ((Tnodekind294020) 23))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_317061_1413030668;
		NI HEX3Atmp_317090_1413030668;
		NI LOC6;
		NI res_317093_1413030668;
		i_317061_1413030668 = (NI)0;
		HEX3Atmp_317090_1413030668 = (NI)0;
		LOC6 = (NI)0;
		LOC6 = sonslen_297351_850551059(n0);
		HEX3Atmp_317090_1413030668 = (NI)(LOC6 - ((NI) 1));
		res_317093_1413030668 = ((NI) 1);
		{
			while (1) {
				if (!(res_317093_1413030668 <= HEX3Atmp_317090_1413030668)) goto LA8;
				i_317061_1413030668 = res_317093_1413030668;
				{
					if (!((*(*n0).kindU.S6.sons->data[i_317061_1413030668]).kind == ((Tnodekind294020) 33))) goto LA11;
					{
						if (!!(((*(*(*n0).kindU.S6.sons->data[i_317061_1413030668]).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind294020) 2)))) goto LA15;
						invalidpragma_317029_1413030668(n0);
					}
					LA15: ;
					{
						NIM_BOOL LOC19;
						LOC19 = (NIM_BOOL)0;
						LOC19 = identeq_201450_791273810((*(*(*n0).kindU.S6.sons->data[i_317061_1413030668]).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, name0);
						if (!LOC19) goto LA20;
						result0 = (*(*n0).kindU.S6.sons->data[i_317061_1413030668]).kindU.S6.sons->data[((NI) 1)];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					if (!(i_317061_1413030668 == pos0)) goto LA23;
					result0 = (*n0).kindU.S6.sons->data[i_317061_1413030668];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				res_317093_1413030668 += ((NI) 1);
			} LA8: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_CHAR, chararg_317011_1413030668)(Tnode294802* n0, NimStringDesc* name0, NI pos0, NIM_CHAR default_317016_1413030668) {
	NIM_CHAR result0;
	Tnode294802* x0;
	result0 = (NIM_CHAR)0;
	x0 = getarg_317033_1413030668(n0, name0, pos0);
	{
		if (!(x0 == NIM_NIL)) goto LA3;
		result0 = default_317016_1413030668;
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x0).kind == ((Tnodekind294020) 5))) goto LA6;
		result0 = ((NIM_CHAR) (((NI) (((NI) ((*x0).kindU.S1.intval))))));
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_317029_1413030668(n0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, strarg_317017_1413030668)(Tnode294802* n0, NimStringDesc* name0, NI pos0, NimStringDesc* default_317022_1413030668) {
	NimStringDesc* result0;
	Tnode294802* x0;
	result0 = (NimStringDesc*)0;
	x0 = getarg_317033_1413030668(n0, name0, pos0);
	{
		if (!(x0 == NIM_NIL)) goto LA3;
		result0 = copyString(default_317022_1413030668);
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x0).kind >= ((Tnodekind294020) 20) && (*x0).kind <= ((Tnodekind294020) 22))) goto LA6;
		result0 = copyString((*x0).kindU.S3.strval);
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_317029_1413030668(n0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, boolarg_317023_1413030668)(Tnode294802* n0, NimStringDesc* name0, NI pos0, NIM_BOOL default_317028_1413030668) {
	NIM_BOOL result0;
	Tnode294802* x0;
	result0 = (NIM_BOOL)0;
	x0 = getarg_317033_1413030668(n0, name0, pos0);
	{
		if (!(x0 == NIM_NIL)) goto LA3;
		result0 = default_317028_1413030668;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = (NIM_BOOL)0;
		LOC6 = ((*x0).kind == ((Tnodekind294020) 2));
		if (!(LOC6)) goto LA7;
		LOC6 = identeq_201450_791273810((*x0).kindU.S5.ident, ((NimStringDesc*) &T1413030668_4));
		LA7: ;
		if (!LOC6) goto LA8;
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		LOC11 = (NIM_BOOL)0;
		LOC11 = ((*x0).kind == ((Tnodekind294020) 2));
		if (!(LOC11)) goto LA12;
		LOC11 = identeq_201450_791273810((*x0).kindU.S5.ident, ((NimStringDesc*) &T1413030668_5));
		LA12: ;
		if (!LOC11) goto LA13;
		result0 = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		invalidpragma_317029_1413030668(n0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tllstream284204*, filterstrip_317006_1413030668)(Tllstream284204* stdin_317008_1413030668, NimStringDesc* filename0, Tnode294802* call0) {
	Tllstream284204* result0;
	NimStringDesc* pattern0;
	NIM_BOOL leading0;
	NIM_BOOL trailing0;
	NimStringDesc* line0;
	result0 = (Tllstream284204*)0;
	pattern0 = strarg_317017_1413030668(call0, ((NimStringDesc*) &T1413030668_2), ((NI) 1), ((NimStringDesc*) &T1413030668_3));
	leading0 = boolarg_317023_1413030668(call0, ((NimStringDesc*) &T1413030668_6), ((NI) 2), NIM_TRUE);
	trailing0 = boolarg_317023_1413030668(call0, ((NimStringDesc*) &T1413030668_7), ((NI) 3), NIM_TRUE);
	result0 = llstreamopen_284218_597494479(((NimStringDesc*) &T1413030668_3));
	line0 = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped0;
			LOC3 = (NIM_BOOL)0;
			LOC3 = llstreamreadline_284550_597494479(stdin_317008_1413030668, (&line0));
			if (!LOC3) goto LA2;
			stripped0 = nsuStrip(line0, leading0, trailing0, T1413030668_8);
			{
				NIM_BOOL LOC6;
				LOC6 = (NIM_BOOL)0;
				LOC6 = ((pattern0 ? pattern0->Sup.len : 0) == ((NI) 0));
				if (LOC6) goto LA7;
				LOC6 = nsuStartsWith(stripped0, pattern0);
				LA7: ;
				if (!LOC6) goto LA8;
				llstreamwriteln_284608_597494479(result0, stripped0);
			}
			goto LA4;
			LA8: ;
			{
				llstreamwriteln_284608_597494479(result0, line0);
			}
			LA4: ;
		} LA2: ;
	}
	llstreamclose_284278_597494479(stdin_317008_1413030668);
	return result0;
}

N_NIMCALL(Tllstream284204*, filterreplace_317001_1413030668)(Tllstream284204* stdin_317003_1413030668, NimStringDesc* filename0, Tnode294802* call0) {
	Tllstream284204* result0;
	NimStringDesc* sub0;
	NimStringDesc* by0;
	NimStringDesc* line0;
	result0 = (Tllstream284204*)0;
	sub0 = strarg_317017_1413030668(call0, ((NimStringDesc*) &T1413030668_9), ((NI) 1), ((NimStringDesc*) &T1413030668_3));
	{
		if (!((sub0 ? sub0->Sup.len : 0) == ((NI) 0))) goto LA3;
		invalidpragma_317029_1413030668(call0);
	}
	LA3: ;
	by0 = strarg_317017_1413030668(call0, ((NimStringDesc*) &T1413030668_10), ((NI) 2), ((NimStringDesc*) &T1413030668_3));
	result0 = llstreamopen_284218_597494479(((NimStringDesc*) &T1413030668_3));
	line0 = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = (NIM_BOOL)0;
			LOC7 = llstreamreadline_284550_597494479(stdin_317003_1413030668, (&line0));
			if (!LOC7) goto LA6;
			LOC8 = (NimStringDesc*)0;
			LOC8 = nsuReplaceStr(line0, sub0, by0);
			llstreamwriteln_284608_597494479(result0, LOC8);
		} LA6: ;
	}
	llstreamclose_284278_597494479(stdin_317003_1413030668);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit000)(void) {
}

