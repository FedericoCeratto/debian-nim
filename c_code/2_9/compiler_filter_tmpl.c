/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tllstream284204 Tllstream284204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode294802 Tnode294802;
typedef struct Ttmplparser318010 Ttmplparser318010;
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype294840 Ttype294840;
typedef struct Tsym294834 Tsym294834;
typedef struct Tident201010 Tident201010;
typedef struct Tnodeseq294796 Tnodeseq294796;
typedef struct Tidobj201004 Tidobj201004;
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
typedef NU8 Tparsestate318008;
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Ttmplparser318010  {
Tllstream284204* inp;
Tparsestate318008 state;
Tlineinfo193336 info;
NI indent;
NI emitpar;
NimStringDesc* x;
Tllstream284204* outp;
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
typedef NU16 Tspecialword277003;
typedef NU16 Tmsgkind193002;
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
static N_INLINE(Tlineinfo193336, newlineinfo_194020_155036129)(NimStringDesc* filename0, NI line0, NI col0);
N_NIMCALL(Tlineinfo193336, newlineinfo_194014_155036129)(NI32 fileinfoidx0, NI line0, NI col0);
N_NIMCALL(NI32, fileinfoidx_194007_155036129)(NimStringDesc* filename0);
N_NIMCALL(Tllstream284204*, llstreamopen_284218_597494479)(NimStringDesc* data0);
N_NIMCALL(NIM_CHAR, chararg_317011_1413030668)(Tnode294802* n0, NimStringDesc* name0, NI pos0, NIM_CHAR default_317016_1413030668);
N_NIMCALL(NimStringDesc*, strarg_317017_1413030668)(Tnode294802* n0, NimStringDesc* name0, NI pos0, NimStringDesc* default_317022_1413030668);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, llstreamreadline_284550_597494479)(Tllstream284204* s0, NimStringDesc** line0);
N_NIMCALL(void, parseline_318109_4161173357)(Ttmplparser318010* p0);
N_NIMCALL(void, newline_318031_4161173357)(Ttmplparser318010* p0);
N_NIMCALL(void, llstreamwrite_284593_597494479)(Tllstream284204* s0, NimStringDesc* data0);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c0, NI count0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, scanpar_318035_4161173357)(Ttmplparser318010* p0, NI d0);
static N_INLINE(NIM_BOOL, withinexpr_318105_4161173357)(Ttmplparser318010* p0);
N_NIMCALL(NIM_BOOL, endswithopr_284432_597494479)(NimStringDesc* x0);
N_NIMCALL(Tspecialword277003, whichkeyword_277369_1391470768)(NimStringDesc* id0);
N_NIMCALL(void, localerror_198080_155036129)(Tlineinfo193336 info0, Tmsgkind193002 msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(NIM_BOOL, contains_110056_4286263276)(NimStringDesc* s0, char136Set chars0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
N_NIMCALL(void, llstreamwrite_284612_597494479)(Tllstream284204* s0, NIM_CHAR data0);
N_NIMCALL(void, llstreamclose_284278_597494479)(Tllstream284204* s0);
STRING_LITERAL(T4161173357_2, "", 0);
STRING_LITERAL(T4161173357_3, "subschar", 8);
STRING_LITERAL(T4161173357_4, "metachar", 8);
STRING_LITERAL(T4161173357_5, "emit", 4);
STRING_LITERAL(T4161173357_6, "result.add", 10);
STRING_LITERAL(T4161173357_7, "conc", 4);
STRING_LITERAL(T4161173357_8, " & ", 3);
STRING_LITERAL(T4161173357_9, "tostring", 8);
STRING_LITERAL(T4161173357_10, "$", 1);
STRING_LITERAL(T4161173357_11, "\012", 1);
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

static N_INLINE(Tlineinfo193336, newlineinfo_194020_155036129)(NimStringDesc* filename0, NI line0, NI col0) {
	Tlineinfo193336 result0;
	NI32 LOC1;
	memset((void*)(&result0), 0, sizeof(result0));
	LOC1 = (NI32)0;
	LOC1 = fileinfoidx_194007_155036129(filename0);
	result0 = newlineinfo_194014_155036129(LOC1, line0, col0);
	return result0;
}

N_NIMCALL(void, newline_318031_4161173357)(Ttmplparser318010* p0) {
	NimStringDesc* LOC1;
	LOC1 = (NimStringDesc*)0;
	LOC1 = nsuRepeatChar(41, ((NI) ((*p0).emitpar)));
	llstreamwrite_284593_597494479((*p0).outp, LOC1);
	(*p0).emitpar = ((NI) 0);
	{
		if (!(((NI16) 1) < (*p0).info.line)) goto LA4;
		llstreamwrite_284593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_11));
	}
	LA4: ;
	{
		NimStringDesc* LOC10;
		if (!(*p0).pendingexprline) goto LA8;
		LOC10 = (NimStringDesc*)0;
		LOC10 = nsuRepeatChar(32, ((NI) 2));
		llstreamwrite_284593_597494479((*p0).outp, LOC10);
		(*p0).pendingexprline = NIM_FALSE;
	}
	LA8: ;
}

N_NIMCALL(void, scanpar_318035_4161173357)(Ttmplparser318010* p0, NI d0) {
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

static N_INLINE(NIM_BOOL, withinexpr_318105_4161173357)(Ttmplparser318010* p0) {
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

N_NIMCALL(void, parseline_318109_4161173357)(Ttmplparser318010* p0) {
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
		newline_318031_4161173357(p0);
	}
	goto LA3;
	LA7: ;
	{
		NIM_BOOL LOC16;
		Tspecialword277003 LOC18;
		if (!((NU8)((*p0).x->data[j0]) == (NU8)((*p0).nimdirective))) goto LA10;
		newline_318031_4161173357(p0);
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
		scanpar_318035_4161173357(p0, j0);
		LOC16 = (NIM_BOOL)0;
		LOC16 = withinexpr_318105_4161173357((&(*p0)));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_284432_597494479((*p0).x);
		LA17: ;
		(*p0).pendingexprline = LOC16;
		LOC18 = (Tspecialword277003)0;
		LOC18 = whichkeyword_277369_1391470768(keyw0);
		switch (LOC18) {
		case ((Tspecialword277003) 22):
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
				localerror_198080_155036129((*p0).info, ((Tmsgkind193002) 167), ((NimStringDesc*) &T4161173357_12));
			}
			LA20: ;
			LOC25 = (NimStringDesc*)0;
			LOC25 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_284593_597494479((*p0).outp, LOC25);
			llstreamwrite_284593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_13));
		}
		break;
		case ((Tspecialword277003) 31):
		case ((Tspecialword277003) 65):
		case ((Tspecialword277003) 60):
		case ((Tspecialword277003) 66):
		case ((Tspecialword277003) 27):
		case ((Tspecialword277003) 7):
		case ((Tspecialword277003) 9):
		case ((Tspecialword277003) 51):
		case ((Tspecialword277003) 38):
		case ((Tspecialword277003) 14):
		case ((Tspecialword277003) 40):
		case ((Tspecialword277003) 59):
		case ((Tspecialword277003) 41):
		{
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			LOC27 = (NimStringDesc*)0;
			LOC27 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_284593_597494479((*p0).outp, LOC27);
			LOC28 = (NimStringDesc*)0;
			LOC28 = copyStr((*p0).x, d0);
			llstreamwrite_284593_597494479((*p0).outp, LOC28);
			(*p0).indent += ((NI) 2);
		}
		break;
		case ((Tspecialword277003) 20):
		case ((Tspecialword277003) 48):
		case ((Tspecialword277003) 21):
		case ((Tspecialword277003) 24):
		case ((Tspecialword277003) 26):
		{
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			LOC30 = (NimStringDesc*)0;
			LOC30 = nsuRepeatChar(32, ((NI) ((NI)((*p0).indent - ((NI) 2)))));
			llstreamwrite_284593_597494479((*p0).outp, LOC30);
			LOC31 = (NimStringDesc*)0;
			LOC31 = copyStr((*p0).x, d0);
			llstreamwrite_284593_597494479((*p0).outp, LOC31);
		}
		break;
		case ((Tspecialword277003) 39):
		case ((Tspecialword277003) 64):
		case ((Tspecialword277003) 12):
		case ((Tspecialword277003) 62):
		{
			NimStringDesc* LOC33;
			NimStringDesc* LOC34;
			LOC33 = (NimStringDesc*)0;
			LOC33 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_284593_597494479((*p0).outp, LOC33);
			LOC34 = (NimStringDesc*)0;
			LOC34 = copyStr((*p0).x, d0);
			llstreamwrite_284593_597494479((*p0).outp, LOC34);
			{
				NIM_BOOL LOC37;
				LOC37 = (NIM_BOOL)0;
				LOC37 = contains_110056_4286263276((*p0).x, T4161173357_14);
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
			llstreamwrite_284593_597494479((*p0).outp, LOC41);
			LOC42 = (NimStringDesc*)0;
			LOC42 = copyStr((*p0).x, d0);
			llstreamwrite_284593_597494479((*p0).outp, LOC42);
		}
		break;
		}
		(*p0).state = ((Tparsestate318008) 0);
	}
	goto LA3;
	LA10: ;
	{
		(*p0).par = ((NI) 0);
		(*p0).curly = ((NI) 0);
		(*p0).bracket = ((NI) 0);
		j0 = ((NI) 0);
		switch ((*p0).state) {
		case ((Tparsestate318008) 1):
		{
			NimStringDesc* LOC45;
			llstreamwrite_284593_597494479((*p0).outp, (*p0).conc);
			llstreamwrite_284593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_11));
			LOC45 = (NimStringDesc*)0;
			LOC45 = nsuRepeatChar(32, ((NI) ((NI)((*p0).indent + ((NI) 2)))));
			llstreamwrite_284593_597494479((*p0).outp, LOC45);
			llstreamwrite_284593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_15));
		}
		break;
		case ((Tparsestate318008) 0):
		{
			NimStringDesc* LOC47;
			newline_318031_4161173357(p0);
			LOC47 = (NimStringDesc*)0;
			LOC47 = nsuRepeatChar(32, ((NI) ((*p0).indent)));
			llstreamwrite_284593_597494479((*p0).outp, LOC47);
			llstreamwrite_284593_597494479((*p0).outp, (*p0).emit);
			llstreamwrite_284593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_16));
			(*p0).emitpar += ((NI) 1);
		}
		break;
		}
		(*p0).state = ((Tparsestate318008) 1);
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
					llstreamwrite_284593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_17));
					LOC52 = (NimStringDesc*)0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p0).x->data[j0])))), ((NI) 2));
					llstreamwrite_284593_597494479((*p0).outp, LOC52);
					j0 += ((NI) 1);
				}
				break;
				case 92:
				{
					llstreamwrite_284593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_18));
					j0 += ((NI) 1);
				}
				break;
				case 39:
				{
					llstreamwrite_284593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_19));
					j0 += ((NI) 1);
				}
				break;
				case 34:
				{
					llstreamwrite_284593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_20));
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
							llstreamwrite_284612_597494479((*p0).outp, 34);
							llstreamwrite_284593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_284593_597494479((*p0).outp, (*p0).tostr);
							llstreamwrite_284612_597494479((*p0).outp, 40);
							j0 += ((NI) 1);
							curly0 = ((NI) 0);
							{
								while (1) {
									switch (((NU8)((*p0).x->data[j0]))) {
									case 0:
									{
										localerror_198080_155036129((*p0).info, ((Tmsgkind193002) 193), ((NimStringDesc*) &T4161173357_21));
										goto LA62;
									}
									break;
									case 123:
									{
										j0 += ((NI) 1);
										curly0 += ((NI) 1);
										llstreamwrite_284612_597494479((*p0).outp, 123);
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
										llstreamwrite_284612_597494479((*p0).outp, 125);
									}
									break;
									default:
									{
										llstreamwrite_284612_597494479((*p0).outp, (*p0).x->data[j0]);
										j0 += ((NI) 1);
									}
									break;
									}
								}
							} LA62: ;
							llstreamwrite_284612_597494479((*p0).outp, 41);
							llstreamwrite_284593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_284612_597494479((*p0).outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llstreamwrite_284612_597494479((*p0).outp, 34);
							llstreamwrite_284593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_284593_597494479((*p0).outp, (*p0).tostr);
							llstreamwrite_284612_597494479((*p0).outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p0).x->data[j0])) >= ((NU8)(97)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(122)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(65)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(90)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(48)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(57)) || ((NU8)((*p0).x->data[j0])) >= ((NU8)(128)) && ((NU8)((*p0).x->data[j0])) <= ((NU8)(255)) || ((NU8)((*p0).x->data[j0])) == ((NU8)(46)) || ((NU8)((*p0).x->data[j0])) == ((NU8)(95)))) goto LA78;
									llstreamwrite_284612_597494479((*p0).outp, (*p0).x->data[j0]);
									j0 += ((NI) 1);
								} LA78: ;
							}
							llstreamwrite_284612_597494479((*p0).outp, 41);
							llstreamwrite_284593_597494479((*p0).outp, (*p0).conc);
							llstreamwrite_284612_597494479((*p0).outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p0).x->data[j0]) == (NU8)((*p0).subschar))) goto LA82;
								llstreamwrite_284612_597494479((*p0).outp, (*p0).subschar);
								j0 += ((NI) 1);
							}
							goto LA80;
							LA82: ;
							{
								(*p0).info.col = ((NI16) (j0));
								localerror_198080_155036129((*p0).info, ((Tmsgkind193002) 171), ((NimStringDesc*) &T4161173357_10));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						llstreamwrite_284612_597494479((*p0).outp, (*p0).x->data[j0]);
						j0 += ((NI) 1);
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		llstreamwrite_284593_597494479((*p0).outp, ((NimStringDesc*) &T4161173357_22));
	}
	LA3: ;
}

N_NIMCALL(Tllstream284204*, filtertmpl_318002_4161173357)(Tllstream284204* stdin_318004_4161173357, NimStringDesc* filename0, Tnode294802* call0) {
	Tllstream284204* result0;
	Ttmplparser318010 p0;
	result0 = (Tllstream284204*)0;
	memset((void*)(&p0), 0, sizeof(p0));
	p0.info = newlineinfo_194020_155036129(filename0, ((NI) 0), ((NI) 0));
	p0.outp = llstreamopen_284218_597494479(((NimStringDesc*) &T4161173357_2));
	p0.inp = stdin_318004_4161173357;
	p0.subschar = chararg_317011_1413030668(call0, ((NimStringDesc*) &T4161173357_3), ((NI) 1), 36);
	p0.nimdirective = chararg_317011_1413030668(call0, ((NimStringDesc*) &T4161173357_4), ((NI) 2), 35);
	p0.emit = strarg_317017_1413030668(call0, ((NimStringDesc*) &T4161173357_5), ((NI) 3), ((NimStringDesc*) &T4161173357_6));
	p0.conc = strarg_317017_1413030668(call0, ((NimStringDesc*) &T4161173357_7), ((NI) 4), ((NimStringDesc*) &T4161173357_8));
	p0.tostr = strarg_317017_1413030668(call0, ((NimStringDesc*) &T4161173357_9), ((NI) 5), ((NimStringDesc*) &T4161173357_10));
	p0.x = rawNewString(((NI) 120));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = llstreamreadline_284550_597494479(p0.inp, (&p0.x));
		if (!LOC3) goto LA4;
		p0.info.line = (NI16)(p0.info.line + ((NI16) 1));
	}
	LA4: ;
	{
		while (1) {
			NIM_BOOL LOC8;
			LOC8 = (NIM_BOOL)0;
			LOC8 = llstreamreadline_284550_597494479(p0.inp, (&p0.x));
			if (!LOC8) goto LA7;
			p0.info.line = (NI16)(p0.info.line + ((NI16) 1));
			parseline_318109_4161173357((&p0));
		} LA7: ;
	}
	newline_318031_4161173357((&p0));
	result0 = p0.outp;
	llstreamclose_284278_597494479(p0.inp);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filter_tmplDatInit000)(void) {
}

