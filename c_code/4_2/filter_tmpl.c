/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tllstream211204 tllstream211204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tnode225816 tnode225816;
typedef struct ttmplparser259020 ttmplparser259020;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttype225852 ttype225852;
typedef struct tsym225846 tsym225846;
typedef struct tident200021 tident200021;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tidobj200015 tidobj200015;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tlib225834 tlib225834;
typedef struct TY225936 TY225936;
typedef struct tlistentry127022 tlistentry127022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  ttmplparser259020  {
tllstream211204* Inp;
NU8 State;
tlineinfo195539 Info;
NI Indent;
NI Emitpar;
NimStringDesc* X;
tllstream211204* Outp;
NIM_CHAR Subschar;
NIM_CHAR Nimdirective;
NimStringDesc* Emit;
NimStringDesc* Conc;
NimStringDesc* Tostr;
NI Curly;
NI Bracket;
NI Par;
NIM_BOOL Pendingexprline;
};
typedef NU8 TY211607[32];
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tnode225816  {
ttype225852* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225846* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq225810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
};
struct  ttype225852  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225848* Sons;
tnode225816* N;
tsym225846* Owner;
tsym225846* Sym;
tsym225846* Destructor;
tsym225846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225830 Loc;
};
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  tsym225846  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq225848* Typeinstcache;
tscope225840* Typscope;
} S1;
struct {TY225947* Procinstcache;
tscope225840* Scope;
} S2;
struct {TY225947* Usedgenerics;
tstrtable225820 Tab;
} S3;
struct {tsym225846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225852* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym225846* Owner;
NU32 Flags;
tnode225816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225830 Loc;
tlib225834* Annex;
tnode225816* Constraint;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope225840  {
NI Depthlevel;
tstrtable225820 Symbols;
tnodeseq225810* Usingsyms;
tscope225840* Parent;
};
struct  tinstantiation225836  {
tsym225846* Sym;
ttypeseq225848* Concretetypes;
TY225936* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib225834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode225816* Path;
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(tlineinfo195539, newlineinfo_196140)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(tlineinfo195539, newlineinfo_196128)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NI32, fileinfoidx_195747)(NimStringDesc* filename);
N_NIMCALL(tllstream211204*, llstreamopen_211220)(NimStringDesc* data);
N_NIMCALL(NIM_CHAR, chararg_258020)(tnode225816* n, NimStringDesc* name, NI pos, NIM_CHAR default_258025);
N_NIMCALL(NimStringDesc*, strarg_258029)(tnode225816* n, NimStringDesc* name, NI pos, NimStringDesc* default_258034);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_211264)(tllstream211204* s, NimStringDesc** line);
N_NIMCALL(void, parseline_259174)(ttmplparser259020* p);
N_NIMCALL(void, newline_259047)(ttmplparser259020* p);
N_NIMCALL(void, llstreamwrite_211278)(tllstream211204* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, scanpar_259058)(ttmplparser259020* p, NI d);
static N_INLINE(NIM_BOOL, withinexpr_259161)(ttmplparser259020* p);
N_NIMCALL(NIM_BOOL, endswithopr_211656)(NimStringDesc* x);
N_NIMCALL(NU8, whichkeyword_204393)(NimStringDesc* id);
N_NIMCALL(void, localerror_197955)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, contains_97267)(NimStringDesc* s, TY211607 chars);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(void, llstreamwrite_211285)(tllstream211204* s, NIM_CHAR data);
N_NIMCALL(void, llstreamclose_211250)(tllstream211204* s);
STRING_LITERAL(TMP1328, "", 0);
STRING_LITERAL(TMP1329, "subschar", 8);
STRING_LITERAL(TMP1330, "metachar", 8);
STRING_LITERAL(TMP1331, "emit", 4);
STRING_LITERAL(TMP1332, "result.add", 10);
STRING_LITERAL(TMP1333, "conc", 4);
STRING_LITERAL(TMP1334, " & ", 3);
STRING_LITERAL(TMP1335, "tostring", 8);
STRING_LITERAL(TMP1336, "$", 1);
STRING_LITERAL(TMP1337, "\012", 1);
STRING_LITERAL(TMP1339, "end", 3);
STRING_LITERAL(TMP1340, "#end", 4);
static NIM_CONST TY211607 TMP1341 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1342, "\"", 1);
STRING_LITERAL(TMP1343, "(\"", 2);
STRING_LITERAL(TMP1344, "\\x", 2);
STRING_LITERAL(TMP1345, "\\\\", 2);
STRING_LITERAL(TMP1346, "\\\'", 2);
STRING_LITERAL(TMP1347, "\\\"", 2);
STRING_LITERAL(TMP1348, "}", 1);
STRING_LITERAL(TMP1349, "\\n\"", 3);

static N_INLINE(tlineinfo195539, newlineinfo_196140)(NimStringDesc* filename, NI line, NI col) {
	tlineinfo195539 result;
	NI32 LOC1;
	memset((void*)(&result), 0, sizeof(result));
	LOC1 = 0;
	LOC1 = fileinfoidx_195747(filename);
	result = newlineinfo_196128(LOC1, line, col);
	return result;
}

N_NIMCALL(void, newline_259047)(ttmplparser259020* p) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar((*p).Emitpar, 41);
	llstreamwrite_211278((*p).Outp, LOC1);
	(*p).Emitpar = 0;
	{
		if (!(((NI16) 1) < (*p).Info.Line)) goto LA4;
		llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1337));
	}
	LA4: ;
	{
		NimStringDesc* LOC10;
		if (!(*p).Pendingexprline) goto LA8;
		LOC10 = 0;
		LOC10 = nsuRepeatChar(2, 32);
		llstreamwrite_211278((*p).Outp, LOC10);
		(*p).Pendingexprline = NIM_FALSE;
	}
	LA8: ;
}

N_NIMCALL(void, scanpar_259058)(ttmplparser259020* p, NI d) {
	NI i;
	i = d;
	{
		while (1) {
			switch (((NU8)((*p).X->data[i]))) {
			case 0:
			{
				goto LA1;
			}
			break;
			case 40:
			{
				(*p).Par += 1;
			}
			break;
			case 41:
			{
				(*p).Par -= 1;
			}
			break;
			case 91:
			{
				(*p).Bracket += 1;
			}
			break;
			case 93:
			{
				(*p).Bracket -= 1;
			}
			break;
			case 123:
			{
				(*p).Curly += 1;
			}
			break;
			case 125:
			{
				(*p).Curly -= 1;
			}
			break;
			default:
			{
			}
			break;
			}
			i += 1;
		}
	} LA1: ;
}

static N_INLINE(NIM_BOOL, withinexpr_259161)(ttmplparser259020* p) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = (0 < (*p).Par);
	if (LOC2) goto LA3;
	LOC2 = (0 < (*p).Bracket);
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = (0 < (*p).Curly);
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, parseline_259174)(ttmplparser259020* p) {
	NI d;
	NI j;
	NI curly;
	NimStringDesc* keyw;
	d = 0;
	j = 0;
	curly = 0;
	keyw = 0;
	j = 0;
	{
		while (1) {
			if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA2;
			j += 1;
		} LA2: ;
	}
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		LOC5 = ((NU8)((*p).X->data[0]) == (NU8)((*p).Nimdirective));
		if (!(LOC5)) goto LA6;
		LOC5 = ((NU8)((*p).X->data[1]) == (NU8)(33));
		LA6: ;
		if (!LOC5) goto LA7;
		newline_259047(p);
	}
	goto LA3;
	LA7: ;
	{
		NIM_BOOL LOC16;
		NU8 LOC18;
		if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Nimdirective))) goto LA10;
		newline_259047(p);
		j += 1;
		{
			while (1) {
				if (!((NU8)((*p).X->data[j]) == (NU8)(32))) goto LA13;
				j += 1;
			} LA13: ;
		}
		d = j;
		keyw = copyString(((NimStringDesc*) &TMP1328));
		{
			while (1) {
				if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA15;
				keyw = addChar(keyw, (*p).X->data[j]);
				j += 1;
			} LA15: ;
		}
		scanpar_259058(p, j);
		LOC16 = 0;
		LOC16 = withinexpr_259161((&(*p)));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_211656((*p).X);
		LA17: ;
		(*p).Pendingexprline = LOC16;
		LOC18 = 0;
		LOC18 = whichkeyword_204393(keyw);
		switch (LOC18) {
		case ((NU8) 21):
		{
			NimStringDesc* LOC25;
			{
				if (!(2 <= (*p).Indent)) goto LA22;
				(*p).Indent -= 2;
			}
			goto LA20;
			LA22: ;
			{
				(*p).Info.Col = ((NI16) (j));
				localerror_197955((*p).Info, ((NU16) 163), ((NimStringDesc*) &TMP1339));
			}
			LA20: ;
			LOC25 = 0;
			LOC25 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_211278((*p).Outp, LOC25);
			llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1340));
		}
		break;
		case ((NU8) 30):
		case ((NU8) 64):
		case ((NU8) 59):
		case ((NU8) 65):
		case ((NU8) 26):
		case ((NU8) 7):
		case ((NU8) 9):
		case ((NU8) 50):
		case ((NU8) 37):
		case ((NU8) 13):
		case ((NU8) 39):
		case ((NU8) 58):
		case ((NU8) 40):
		{
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			LOC27 = 0;
			LOC27 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_211278((*p).Outp, LOC27);
			LOC28 = 0;
			LOC28 = copyStr((*p).X, d);
			llstreamwrite_211278((*p).Outp, LOC28);
			(*p).Indent += 2;
		}
		break;
		case ((NU8) 19):
		case ((NU8) 47):
		case ((NU8) 20):
		case ((NU8) 23):
		case ((NU8) 25):
		{
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			LOC30 = 0;
			LOC30 = nsuRepeatChar((NI64)((*p).Indent - 2), 32);
			llstreamwrite_211278((*p).Outp, LOC30);
			LOC31 = 0;
			LOC31 = copyStr((*p).X, d);
			llstreamwrite_211278((*p).Outp, LOC31);
		}
		break;
		case ((NU8) 38):
		case ((NU8) 63):
		case ((NU8) 11):
		case ((NU8) 61):
		{
			NimStringDesc* LOC33;
			NimStringDesc* LOC34;
			LOC33 = 0;
			LOC33 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_211278((*p).Outp, LOC33);
			LOC34 = 0;
			LOC34 = copyStr((*p).X, d);
			llstreamwrite_211278((*p).Outp, LOC34);
			{
				NIM_BOOL LOC37;
				LOC37 = 0;
				LOC37 = contains_97267((*p).X, TMP1341);
				if (!!(LOC37)) goto LA38;
				(*p).Indent += 2;
			}
			LA38: ;
		}
		break;
		default:
		{
			NimStringDesc* LOC41;
			NimStringDesc* LOC42;
			LOC41 = 0;
			LOC41 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_211278((*p).Outp, LOC41);
			LOC42 = 0;
			LOC42 = copyStr((*p).X, d);
			llstreamwrite_211278((*p).Outp, LOC42);
		}
		break;
		}
		(*p).State = ((NU8) 0);
	}
	goto LA3;
	LA10: ;
	{
		(*p).Par = 0;
		(*p).Curly = 0;
		(*p).Bracket = 0;
		j = 0;
		switch ((*p).State) {
		case ((NU8) 1):
		{
			NimStringDesc* LOC45;
			llstreamwrite_211278((*p).Outp, (*p).Conc);
			llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1337));
			LOC45 = 0;
			LOC45 = nsuRepeatChar((NI64)((*p).Indent + 2), 32);
			llstreamwrite_211278((*p).Outp, LOC45);
			llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1342));
		}
		break;
		case ((NU8) 0):
		{
			NimStringDesc* LOC47;
			newline_259047(p);
			LOC47 = 0;
			LOC47 = nsuRepeatChar((*p).Indent, 32);
			llstreamwrite_211278((*p).Outp, LOC47);
			llstreamwrite_211278((*p).Outp, (*p).Emit);
			llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1343));
			(*p).Emitpar += 1;
		}
		break;
		}
		(*p).State = ((NU8) 1);
		{
			while (1) {
				switch (((NU8)((*p).X->data[j]))) {
				case 0:
				{
					goto LA48;
				}
				break;
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* LOC52;
					llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1344));
					LOC52 = 0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p).X->data[j])))), 2);
					llstreamwrite_211278((*p).Outp, LOC52);
					j += 1;
				}
				break;
				case 92:
				{
					llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1345));
					j += 1;
				}
				break;
				case 39:
				{
					llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1346));
					j += 1;
				}
				break;
				case 34:
				{
					llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1347));
					j += 1;
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA59;
						j += 1;
						switch (((NU8)((*p).X->data[j]))) {
						case 123:
						{
							(*p).Info.Col = ((NI16) (j));
							llstreamwrite_211285((*p).Outp, 34);
							llstreamwrite_211278((*p).Outp, (*p).Conc);
							llstreamwrite_211278((*p).Outp, (*p).Tostr);
							llstreamwrite_211285((*p).Outp, 40);
							j += 1;
							curly = 0;
							{
								while (1) {
									switch (((NU8)((*p).X->data[j]))) {
									case 0:
									{
										localerror_197955((*p).Info, ((NU16) 188), ((NimStringDesc*) &TMP1348));
										goto LA62;
									}
									break;
									case 123:
									{
										j += 1;
										curly += 1;
										llstreamwrite_211285((*p).Outp, 123);
									}
									break;
									case 125:
									{
										j += 1;
										{
											if (!(curly == 0)) goto LA69;
											goto LA62;
										}
										LA69: ;
										{
											if (!(0 < curly)) goto LA73;
											curly -= 1;
										}
										LA73: ;
										llstreamwrite_211285((*p).Outp, 125);
									}
									break;
									default:
									{
										llstreamwrite_211285((*p).Outp, (*p).X->data[j]);
										j += 1;
									}
									break;
									}
								}
							} LA62: ;
							llstreamwrite_211285((*p).Outp, 41);
							llstreamwrite_211278((*p).Outp, (*p).Conc);
							llstreamwrite_211285((*p).Outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llstreamwrite_211285((*p).Outp, 34);
							llstreamwrite_211278((*p).Outp, (*p).Conc);
							llstreamwrite_211278((*p).Outp, (*p).Tostr);
							llstreamwrite_211285((*p).Outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p).X->data[j])) >= ((NU8)(97)) && ((NU8)((*p).X->data[j])) <= ((NU8)(122)) || ((NU8)((*p).X->data[j])) >= ((NU8)(65)) && ((NU8)((*p).X->data[j])) <= ((NU8)(90)) || ((NU8)((*p).X->data[j])) >= ((NU8)(48)) && ((NU8)((*p).X->data[j])) <= ((NU8)(57)) || ((NU8)((*p).X->data[j])) >= ((NU8)(128)) && ((NU8)((*p).X->data[j])) <= ((NU8)(255)) || ((NU8)((*p).X->data[j])) == ((NU8)(46)) || ((NU8)((*p).X->data[j])) == ((NU8)(95)))) goto LA78;
									llstreamwrite_211285((*p).Outp, (*p).X->data[j]);
									j += 1;
								} LA78: ;
							}
							llstreamwrite_211285((*p).Outp, 41);
							llstreamwrite_211278((*p).Outp, (*p).Conc);
							llstreamwrite_211285((*p).Outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p).X->data[j]) == (NU8)((*p).Subschar))) goto LA82;
								llstreamwrite_211285((*p).Outp, (*p).Subschar);
								j += 1;
							}
							goto LA80;
							LA82: ;
							{
								(*p).Info.Col = ((NI16) (j));
								localerror_197955((*p).Info, ((NU16) 167), ((NimStringDesc*) &TMP1336));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						llstreamwrite_211285((*p).Outp, (*p).X->data[j]);
						j += 1;
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		llstreamwrite_211278((*p).Outp, ((NimStringDesc*) &TMP1349));
	}
	LA3: ;
}

N_NIMCALL(tllstream211204*, filtertmpl_259009)(tllstream211204* stdin_259011, NimStringDesc* filename, tnode225816* call) {
	tllstream211204* result;
	ttmplparser259020 p;
	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	p.Info = newlineinfo_196140(filename, 0, 0);
	p.Outp = llstreamopen_211220(((NimStringDesc*) &TMP1328));
	p.Inp = stdin_259011;
	p.Subschar = chararg_258020(call, ((NimStringDesc*) &TMP1329), 1, 36);
	p.Nimdirective = chararg_258020(call, ((NimStringDesc*) &TMP1330), 2, 35);
	p.Emit = strarg_258029(call, ((NimStringDesc*) &TMP1331), 3, ((NimStringDesc*) &TMP1332));
	p.Conc = strarg_258029(call, ((NimStringDesc*) &TMP1333), 4, ((NimStringDesc*) &TMP1334));
	p.Tostr = strarg_258029(call, ((NimStringDesc*) &TMP1335), 5, ((NimStringDesc*) &TMP1336));
	p.X = rawNewString(120);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = llstreamreadline_211264(p.Inp, (&p.X));
			if (!LOC3) goto LA2;
			p.Info.Line = (NI16)(p.Info.Line + ((NI16) 1));
			parseline_259174((&p));
		} LA2: ;
	}
	newline_259047((&p));
	result = p.Outp;
	llstreamclose_211250(p.Inp);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_filter_tmplInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_filter_tmplDatInit)(void) {
}

