/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tllstream280204 Tllstream280204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode290802 Tnode290802;
typedef struct Ttmplparser314010 Ttmplparser314010;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype290840 Ttype290840;
typedef struct Tsym290834 Tsym290834;
typedef struct Tident197010 Tident197010;
typedef struct Tnodeseq290796 Tnodeseq290796;
typedef struct Tidobj197004 Tidobj197004;
typedef struct Ttypeseq290836 Ttypeseq290836;
typedef struct TY290960 TY290960;
typedef struct Tloc290816 Tloc290816;
typedef struct Ropeobj177006 Ropeobj177006;
typedef struct TY290929 TY290929;
typedef struct Tstrtable290806 Tstrtable290806;
typedef struct Tsymseq290804 Tsymseq290804;
typedef struct Tlib290820 Tlib290820;
typedef struct TY290961 TY290961;
typedef struct Tinstantiation290824 Tinstantiation290824;
typedef struct Tlistentry147007 Tlistentry147007;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tparsestate314008;
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Ttmplparser314010  {
Tllstream280204* inp;
Tparsestate314008 state;
Tlineinfo189336 info;
NI indent;
NI emitpar;
NimStringDesc* x;
Tllstream280204* outp;
NIM_CHAR subschar;
NIM_CHAR nimdirective;
NimStringDesc* emit;
NimStringDesc* conc;
NimStringDesc* tostr;
NI curly;
NI bracket;
NI par;
NIM_BOOL pendingexprline;
};
typedef NU16 Tspecialword273003;
typedef NU16 Tmsgkind189002;
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
typedef NU8 Tllstreamkind280202;
struct  Tllstream280204  {
  TNimObject Sup;
Tllstreamkind280202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
typedef NU16 Tnodeflag290427Set;
typedef NU8 Tnodekind290020;
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tidobj197004  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind290244;
typedef NU8 Tcallingconvention290002;
typedef NU32 Ttypeflag290431Set;
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
typedef NU8 Tsymkind290435;
struct  Tstrtable290806  {
NI counter;
Tsymseq290804* data;
};
typedef NU16 Tmagic290524;
typedef NU32 Tsymflag290184Set;
typedef NU32 Toption168009Set;
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
struct  Tident197010  {
  Tidobj197004 Sup;
NimStringDesc* s;
Tident197010* next;
NI h;
};
struct TY290961 {
NI Field0;
Tsym290834* Field1;
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
struct TY290960 {
  TGenericSeq Sup;
  TY290961 data[SEQ_DECL_SIZE];
};
struct TY290929 {
  TGenericSeq Sup;
  Tinstantiation290824* data[SEQ_DECL_SIZE];
};
struct Tsymseq290804 {
  TGenericSeq Sup;
  Tsym290834* data[SEQ_DECL_SIZE];
};
static N_INLINE(Tlineinfo189336, newlineinfo_190021_155036129)(NimStringDesc* filename0, NI line0, NI col0);
N_NIMCALL(Tlineinfo189336, newlineinfo_190015_155036129)(NI32 fileinfoidx0, NI line0, NI col0);
N_NIMCALL(NI32, fileinfoidx_190008_155036129)(NimStringDesc* filename0);
N_NIMCALL(Tllstream280204*, llstreamopen_280218_597494479)(NimStringDesc* data0);
N_NIMCALL(NIM_CHAR, chararg_313011_1413030668)(Tnode290802* n0, NimStringDesc* name0, NI pos0, NIM_CHAR default_313016_1413030668);
N_NIMCALL(NimStringDesc*, strarg_313017_1413030668)(Tnode290802* n0, NimStringDesc* name0, NI pos0, NimStringDesc* default_313022_1413030668);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, llstreamreadline_280550_597494479)(Tllstream280204* s0, NimStringDesc** line0);
N_NIMCALL(void, parseline_314109_4161173357)(Ttmplparser314010* p0);
N_NIMCALL(void, newline_314031_4161173357)(Ttmplparser314010* p0);
N_NIMCALL(void, llstreamwrite_280593_597494479)(Tllstream280204* s0, NimStringDesc* data0);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c0, NI count0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, scanpar_314035_4161173357)(Ttmplparser314010* p0, NI d0);
static N_INLINE(NIM_BOOL, withinexpr_314105_4161173357)(Ttmplparser314010* p0);
N_NIMCALL(NIM_BOOL, endswithopr_280432_597494479)(NimStringDesc* x0);
N_NIMCALL(Tspecialword273003, whichkeyword_273369_1391470768)(NimStringDesc* id0);
N_NIMCALL(void, localerror_194080_155036129)(Tlineinfo189336 info0, Tmsgkind189002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(NIM_BOOL, contains_109056_4286263276)(NimStringDesc* s0, char136Set chars0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
N_NIMCALL(void, llstreamwrite_280612_597494479)(Tllstream280204* s0, NIM_CHAR data0);
N_NIMCALL(void, llstreamclose_280278_597494479)(Tllstream280204* s0);
STRING_LITERAL(T4161173357_2, "", 0);
STRING_LITERAL(T4161173357_3, "subschar", 8);
STRING_LITERAL(T4161173357_4, "metachar", 8);
STRING_LITERAL(T4161173357_5, "emit", 4);
STRING_LITERAL(T4161173357_6, "result.add", 10);
STRING_LITERAL(T4161173357_7, "conc", 4);
STRING_LITERAL(T4161173357_8, " & ", 3);
STRING_LITERAL(T4161173357_9, "tostring", 8);
STRING_LITERAL(T4161173357_10, "$", 1);
STRING_LITERAL(T4161173357_11, "\015\012", 2);
STRING_LITERAL(T4161173357_12, "end", 3);
STRING_LITERAL(T4161173357_13, "#end", 4);
static NIM_CONST char136Set T4161173357_14 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(T4161173357_15, "\"", 1);
STRING_LITERAL(T4161173357_16, "(\"", 2);
STRING_LITERAL(T4161173357_17, "\\x", 2);
STRING_LITERAL(T4161173357_18, "\\\\", 2);
STRING_LITERAL(T4161173357_19, "\\\'", 2);
STRING_LITERAL(T4161173357_20, "\\\"", 2);
STRING_LITERAL(T4161173357_21, "}", 1);
STRING_LITERAL(T4161173357_22, "\\n\"", 3);

static N_INLINE(Tlineinfo189336, newlineinfo_190021_155036129)(NimStringDesc* filename0, NI line0, NI col0) {
	Tlineinfo189336 result0;
	NI32 LOC1;
	memset((void*)(&result0), 0, sizeof(result0));
	LOC1 = (NI32)0;
	LOC1 = fileinfoidx_190008_155036129(filename0);
	result0 = newlineinfo_190015_155036129(LOC1, line0, col0);
	return result0;
}

N_NIMCALL(void, newline_314031_4161173357)(Ttmplparser314010* p0) {
	NimStringDesc* LOC1;
	LOC1 = (NimStringDesc*)0;
	LOC1 = nsuRepeatChar(41, ((NI) ((*p0).emitpar)));
	llstreamwrite_280593_597494479((*p0).outp, LOC1);
	(*p0).emitpar = ((NI) 0);
	{
		if (!(((NI16) 1) < (*p0).info.line)) goto LA4;
		llstreamwrite_280593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_11));
	}
	LA4: ;
	{
		NimStringDesc* LOC10;
		if (!(*p0).pendingexprline) goto LA8;
		LOC10 = (NimStringDesc*)0;
		LOC10 = nsuRepeatChar(32, ((NI) 2));
		llstreamwrite_280593_597494479((*p0).outp, LOC10);
		(*p0).pendingexprline = NIM_FALSE;
	}
	LA8: ;
}

N_NIMCALL(void, scanpar_314035_4161173357)(Ttmplparser314010* p0, NI d0) {
	NI i0;
	i0 = d0;
	{
		while (1) {
			switch (((NU8)((*p0).x->data[i0]))) {
			case 0:
			{
				goto LA1;
			}
			break;
			case 40:
			{
				(*p0).par += ((NI) 1);
			}
			break;
			case 41:
			{
				(*p0).par -= ((NI) 1);
			}
			break;
			case 91:
			{
				(*p0).bracket += ((NI) 1);
			}
			break;
			case 93:
			{
				(*p0).bracket -= ((NI) 1);
			}
			break;
			case 123:
			{
				(*p0).curly += ((NI) 1);
			}
			break;
			case 125:
			{
				(*p0).curly -= ((NI) 1);
			}
			break;
			default:
			{
			}
			break;
			}
			i0 += ((NI) 1);
		}
	} LA1: ;
}

static N_INLINE(NIM_BOOL, withinexpr_314105_4161173357)(Ttmplparser314010* p0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC2 = (NIM_BOOL)0;
	LOC2 = (((NI) 0) < (*p0).par);
	if (LOC2) goto LA3;
	LOC2 = (((NI) 0) < (*p0).bracket);
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = (((NI) 0) < (*p0).curly);
	LA4: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(void, parseline_314109_4161173357)(Ttmplparser314010* p0) {
	NI d0;
	NI j0;
	NI curly0;
	NimStringDesc* keyw0;
	d0 = (NI)0;
	j0 = (NI)0;
	curly0 = (NI)0;
	keyw0 = (NimStringDesc*)0;
	j0 = ((NI) 0);
	{
		while (1) {
			if (!((NU8)((*p0).x->data[j0]) == (NU8)(32))) goto LA2;
			j0 += ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL LOC5;
		LOC5 = (NIM_BOOL)0;
		LOC5 = ((NU8)((*p0).x->data[((NI) 0)]) == (NU8)((*p0).nimdirective));
		if (!(LOC5)) goto LA6;
		LOC5 = ((NU8)((*p0).x->data[((NI) 1)]) == (NU8)(63));
		LA6: ;
		if (!LOC5) goto LA7;
		newline_314031_4161173357(p0);
	}
	goto LA3;
	LA7: ;
	{
		NIM_BOOL LOC16;
		Tspecialword273003 LOC18;
		if (!((NU8)((*p0).x->data[j0]) == (NU8)((*p0).nimdirective))) goto LA10;
		newline_314031_4161173357(p0);
		j0 += ((NI) 1);
		{
			while (1) {
				if (!((NU8)((*p0).x->data[j0]) == (NU8)(32))) goto LA13;
				j0 += ((NI) 1);
			} LA13: ;
		}
		d0 = j0;
		keyw0 = copyString(((NimStringDesc*) &T4161173357_2));
		{
			while (1) {
				if (!(((NU8)((*p0).x->data[j0])) >= ((NU8)(97)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(122)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(65)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(90)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(48)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(57)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(128)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(255)) || ((NU8)((*p0).x->data[j0])) == ((NU8)(46)) || ((NU8)((*p0).x->data[j0])) == ((NU8)(95)))) goto LA15;
				keyw0 = addChar(keyw0, (*p0).x->data[j0]);
				j0 += ((NI) 1);
			} LA15: ;
		}
		scanpar_314035_4161173357(p0, j0);
		LOC16 = (NIM_BOOL)0;
		LOC16 = withinexpr_314105_4161173357((&(*p0)));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_280432_597494479((*p0).x);
		LA17: ;
		(*p0).pendingexprline = LOC16;
		LOC18 = (Tspecialword273003)0;
		LOC18 = whichkeyword_273369_1391470768(keyw0);
		switch (LOC18) {
		case ((Tspecialword273003) 22):
		{
			NimStringDesc* LOC25;
			{
				if (!(((NI) 2) <= (*p0).indent)) goto LA22;
				(*p0).indent -= ((NI) 2);
			}
			goto LA20;
			LA22: ;
			{
				(*p0).info.col = ((NI16) (j0));
				localerror_194080_155036129((*p0).info, ((Tmsgkind189002) 167), ((NimStringDesc*) &T4161173357_12));
			}
			LA20: ;
			LOC25 = (NimStringDesc*)0;
			LOC25 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_280593_597494479((*p0).outp, LOC25);
			llstreamwrite_280593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_13));
		}
		break;
		case ((Tspecialword273003) 31):
		case ((Tspecialword273003) 65):
		case ((Tspecialword273003) 60):
		case ((Tspecialword273003) 66):
		case ((Tspecialword273003) 27):
		case ((Tspecialword273003) 7):
		case ((Tspecialword273003) 9):
		case ((Tspecialword273003) 51):
		case ((Tspecialword273003) 38):
		case ((Tspecialword273003) 14):
		case ((Tspecialword273003) 40):
		case ((Tspecialword273003) 59):
		case ((Tspecialword273003) 41):
		{
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			LOC27 = (NimStringDesc*)0;
			LOC27 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_280593_597494479((*p0).outp, LOC27);
			LOC28 = (NimStringDesc*)0;
			LOC28 = copyStr((*p0).x, d0);
			llstreamwrite_280593_597494479((*p0).outp, LOC28);
			(*p0).indent += ((NI) 2);
		}
		break;
		case ((Tspecialword273003) 20):
		case ((Tspecialword273003) 48):
		case ((Tspecialword273003) 21):
		case ((Tspecialword273003) 24):
		case ((Tspecialword273003) 26):
		{
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			LOC30 = (NimStringDesc*)0;
			LOC30 = nsuRepeatChar(32, ((NI) ((NI)((*p0).indent - ((NI) 2)))));
			llstreamwrite_280593_597494479((*p0).outp, LOC30);
			LOC31 = (NimStringDesc*)0;
			LOC31 = copyStr((*p0).x, d0);
			llstreamwrite_280593_597494479((*p0).outp, LOC31);
		}
		break;
		case ((Tspecialword273003) 39):
		case ((Tspecialword273003) 64):
		case ((Tspecialword273003) 12):
		case ((Tspecialword273003) 62):
		{
			NimStringDesc* LOC33;
			NimStringDesc* LOC34;
			LOC33 = (NimStringDesc*)0;
			LOC33 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_280593_597494479((*p0).outp, LOC33);
			LOC34 = (NimStringDesc*)0;
			LOC34 = copyStr((*p0).x, d0);
			llstreamwrite_280593_597494479((*p0).outp, LOC34);
			{
				NIM_BOOL LOC37;
				LOC37 = (NIM_BOOL)0;
				LOC37 = contains_109056_4286263276((*p0).x, T4161173357_14);
				if (!!(LOC37)) goto LA38;
				(*p0).indent += ((NI) 2);
			}
			LA38: ;
		}
		break;
		default:
		{
			NimStringDesc* LOC41;
			NimStringDesc* LOC42;
			LOC41 = (NimStringDesc*)0;
			LOC41 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_280593_597494479((*p0).outp, LOC41);
			LOC42 = (NimStringDesc*)0;
			LOC42 = copyStr((*p0).x, d0);
			llstreamwrite_280593_597494479((*p0).outp, LOC42);
		}
		break;
		}
		(*p0).state = ((Tparsestate314008) 0);
	}
	goto LA3;
	LA10: ;
	{
		(*p0).par = ((NI) 0);
		(*p0).curly = ((NI) 0);
		(*p0).bracket = ((NI) 0);
		j0 = ((NI) 0);
		switch ((*p0).state) {
		case ((Tparsestate314008) 1):
		{
			NimStringDesc* LOC45;
			llstreamwrite_280593_597494479((*p0).outp, (*p0).conc);
			llstreamwrite_280593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_11));
			LOC45 = (NimStringDesc*)0;
			LOC45 = nsuRepeatChar(32, ((NI) ((NI)((*p0).indent + ((NI) 2)))));
			llstreamwrite_280593_597494479((*p0).outp, LOC45);
			llstreamwrite_280593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_15));
		}
		break;
		case ((Tparsestate314008) 0):
		{
			NimStringDesc* LOC47;
			newline_314031_4161173357(p0);
			LOC47 = (NimStringDesc*)0;
			LOC47 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_280593_597494479((*p0).outp, LOC47);
			llstreamwrite_280593_597494479((*p0).outp, (*p0).emit);
			llstreamwrite_280593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_16));
			(*p0).emitpar += ((NI) 1);
		}
		break;
		}
		(*p0).state = ((Tparsestate314008) 1);
		{
			while (1) {
				switch (((NU8)((*p0).x->data[j0]))) {
				case 0:
				{
					goto LA48;
				}
				break;
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* LOC52;
					llstreamwrite_280593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_17));
					LOC52 = (NimStringDesc*)0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p0).x->data[j0])))), ((NI) 2));
					llstreamwrite_280593_597494479((*p0).outp, LOC52);
					j0 += ((NI) 1);
				}
				break;
				case 92:
				{
					llstreamwrite_280593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_18));
					j0 += ((NI) 1);
				}
				break;
				case 39:
				{
					llstreamwrite_280593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_19));
					j0 += ((NI) 1);
				}
				break;
				case 34:
				{
					llstreamwrite_280593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_20));
					j0 += ((NI) 1);
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p0).x->data[j0]) == (NU8)((*p0).subschar))) goto LA59;
						j0 += ((NI) 1);
						switch (((NU8)((*p0).x->data[j0]))) {
						case 123:
						{
							(*p0).info.col = ((NI16) (j0));
							llstreamwrite_280612_597494479((*p0).outp, 34);
							llstreamwrite_280593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_280593_597494479((*p0).outp, (*p0).tostr);
							llstreamwrite_280612_597494479((*p0).outp, 40);
							j0 += ((NI) 1);
							curly0 = ((NI) 0);
							{
								while (1) {
									switch (((NU8)((*p0).x->data[j0]))) {
									case 0:
									{
										localerror_194080_155036129((*p0).info, ((Tmsgkind189002) 193), ((NimStringDesc*) &T4161173357_21));
										goto LA62;
									}
									break;
									case 123:
									{
										j0 += ((NI) 1);
										curly0 += ((NI) 1);
										llstreamwrite_280612_597494479((*p0).outp, 123);
									}
									break;
									case 125:
									{
										j0 += ((NI) 1);
										{
											if (!(curly0 == ((NI) 0))) goto LA69;
											goto LA62;
										}
										LA69: ;
										{
											if (!(((NI) 0) < curly0)) goto LA73;
											curly0 -= ((NI) 1);
										}
										LA73: ;
										llstreamwrite_280612_597494479((*p0).outp, 125);
									}
									break;
									default:
									{
										llstreamwrite_280612_597494479((*p0).outp, (*p0).x->data[j0]);
										j0 += ((NI) 1);
									}
									break;
									}
								}
							} LA62: ;
							llstreamwrite_280612_597494479((*p0).outp, 41);
							llstreamwrite_280593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_280612_597494479((*p0).outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llstreamwrite_280612_597494479((*p0).outp, 34);
							llstreamwrite_280593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_280593_597494479((*p0).outp, (*p0).tostr);
							llstreamwrite_280612_597494479((*p0).outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p0).x->data[j0])) >= ((NU8)(97)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(122)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(65)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(90)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(48)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(57)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(128)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(255)) || ((NU8)((*p0).x->data[j0])) == ((NU8)(46)) || ((NU8)((*p0).x->data[j0])) == ((NU8)(95)))) goto LA78;
									llstreamwrite_280612_597494479((*p0).outp, (*p0).x->data[j0]);
									j0 += ((NI) 1);
								} LA78: ;
							}
							llstreamwrite_280612_597494479((*p0).outp, 41);
							llstreamwrite_280593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_280612_597494479((*p0).outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p0).x->data[j0]) == (NU8)((*p0).subschar))) goto LA82;
								llstreamwrite_280612_597494479((*p0).outp, (*p0).subschar);
								j0 += ((NI) 1);
							}
							goto LA80;
							LA82: ;
							{
								(*p0).info.col = ((NI16) (j0));
								localerror_194080_155036129((*p0).info, ((Tmsgkind189002) 171), ((NimStringDesc*) &T4161173357_10));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						llstreamwrite_280612_597494479((*p0).outp, (*p0).x->data[j0]);
						j0 += ((NI) 1);
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		llstreamwrite_280593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_22));
	}
	LA3: ;
}

N_NIMCALL(Tllstream280204*, filtertmpl_314002_4161173357)(Tllstream280204* stdin_314004_4161173357, NimStringDesc* filename0, Tnode290802* call0) {
	Tllstream280204* result0;
	Ttmplparser314010 p0;
	result0 = (Tllstream280204*)0;
	memset((void*)(&p0), 0, sizeof(p0));
	p0.info = newlineinfo_190021_155036129(filename0, ((NI) 0), ((NI) 0));
	p0.outp = llstreamopen_280218_597494479(((NimStringDesc*) &T4161173357_2));
	p0.inp = stdin_314004_4161173357;
	p0.subschar = chararg_313011_1413030668(call0, ((NimStringDesc*) &T4161173357_3), ((NI) 1), 36);
	p0.nimdirective = chararg_313011_1413030668(call0, ((NimStringDesc*) &T4161173357_4), ((NI) 2), 35);
	p0.emit = strarg_313017_1413030668(call0, ((NimStringDesc*) &T4161173357_5), ((NI) 3), ((NimStringDesc*) &T4161173357_6));
	p0.conc = strarg_313017_1413030668(call0, ((NimStringDesc*) &T4161173357_7), ((NI) 4), ((NimStringDesc*) &T4161173357_8));
	p0.tostr = strarg_313017_1413030668(call0, ((NimStringDesc*) &T4161173357_9), ((NI) 5), ((NimStringDesc*) &T4161173357_10));
	p0.x = rawNewString(((NI) 120));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = llstreamreadline_280550_597494479(p0.inp, (&p0.x));
		if (!LOC3) goto LA4;
		p0.info.line = (NI16)(p0.info.line + ((NI16) 1));
	}
	LA4: ;
	{
		while (1) {
			NIM_BOOL LOC8;
			LOC8 = (NIM_BOOL)0;
			LOC8 = llstreamreadline_280550_597494479(p0.inp, (&p0.x));
			if (!LOC8) goto LA7;
			p0.info.line = (NI16)(p0.info.line + ((NI16) 1));
			parseline_314109_4161173357((&p0));
		} LA7: ;
	}
	newline_314031_4161173357((&p0));
	result0 = p0.outp;
	llstreamclose_280278_597494479(p0.inp);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit000)(void) {
}

