/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Tllstream178204 Tllstream178204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tnode190813 Tnode190813;
typedef struct Ttmplparser217020 Ttmplparser217020;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttype190849 Ttype190849;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Ttmplparser217020  {
Tllstream178204* inp;
NU8 state;
Tlineinfo163338 info;
NI indent;
NI emitpar;
NimStringDesc* x;
Tllstream178204* outp;
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
typedef NU8 TY178407[32];
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
struct  Tllstream178204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
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
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
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
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
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
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(Tlineinfo163338, newlineinfo_163879)(NimStringDesc* filename, NI line, NI col);
N_NIMCALL(Tlineinfo163338, newlineinfo_163867)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(NI32, fileinfoidx_163854)(NimStringDesc* filename);
N_NIMCALL(Tllstream178204*, llstreamopen_178220)(NimStringDesc* data);
N_NIMCALL(NIM_CHAR, chararg_216020)(Tnode190813* n, NimStringDesc* name, NI pos, NIM_CHAR default_216025);
N_NIMCALL(NimStringDesc*, strarg_216029)(Tnode190813* n, NimStringDesc* name, NI pos, NimStringDesc* default_216034);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_178610)(Tllstream178204* s, NimStringDesc** line);
N_NIMCALL(void, parseline_217149)(Ttmplparser217020* p);
N_NIMCALL(void, newline_217047)(Ttmplparser217020* p);
N_NIMCALL(void, llstreamwrite_178665)(Tllstream178204* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, scanpar_217057)(Ttmplparser217020* p, NI d);
static N_INLINE(NIM_BOOL, withinexpr_217139)(Ttmplparser217020* p);
N_NIMCALL(NIM_BOOL, endswithopr_178450)(NimStringDesc* x);
N_NIMCALL(NU16, whichkeyword_172396)(NimStringDesc* id);
N_NIMCALL(void, localerror_165155)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, contains_99373)(NimStringDesc* s, TY178407 chars);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(void, llstreamwrite_178696)(Tllstream178204* s, NIM_CHAR data);
N_NIMCALL(void, llstreamclose_178310)(Tllstream178204* s);
STRING_LITERAL(TMP1401, "", 0);
STRING_LITERAL(TMP1402, "subschar", 8);
STRING_LITERAL(TMP1403, "metachar", 8);
STRING_LITERAL(TMP1404, "emit", 4);
STRING_LITERAL(TMP1405, "result.add", 10);
STRING_LITERAL(TMP1406, "conc", 4);
STRING_LITERAL(TMP1407, " & ", 3);
STRING_LITERAL(TMP1408, "tostring", 8);
STRING_LITERAL(TMP1409, "$", 1);
STRING_LITERAL(TMP1410, "\012", 1);
STRING_LITERAL(TMP1412, "end", 3);
STRING_LITERAL(TMP1413, "#end", 4);
static NIM_CONST TY178407 TMP1414 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1415, "\"", 1);
STRING_LITERAL(TMP1416, "(\"", 2);
STRING_LITERAL(TMP1417, "\\x", 2);
STRING_LITERAL(TMP1418, "\\\\", 2);
STRING_LITERAL(TMP1419, "\\\'", 2);
STRING_LITERAL(TMP1420, "\\\"", 2);
STRING_LITERAL(TMP1421, "}", 1);
STRING_LITERAL(TMP1422, "\\n\"", 3);

static N_INLINE(Tlineinfo163338, newlineinfo_163879)(NimStringDesc* filename, NI line, NI col) {
	Tlineinfo163338 result;
	NI32 LOC1;
	memset((void*)(&result), 0, sizeof(result));
	LOC1 = 0;
	LOC1 = fileinfoidx_163854(filename);
	result = newlineinfo_163867(LOC1, line, col);
	return result;
}

N_NIMCALL(void, newline_217047)(Ttmplparser217020* p) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = nsuRepeatChar(41, ((NI) ((*p).emitpar)));
	llstreamwrite_178665((*p).outp, LOC1);
	(*p).emitpar = ((NI) 0);
	{
		if (!(((NI16) 1) < (*p).info.line)) goto LA4;
		llstreamwrite_178665((*p).outp, ((NimStringDesc*) &TMP1410));
	}
	LA4: ;
	{
		NimStringDesc* LOC10;
		if (!(*p).pendingexprline) goto LA8;
		LOC10 = 0;
		LOC10 = nsuRepeatChar(32, ((NI) 2));
		llstreamwrite_178665((*p).outp, LOC10);
		(*p).pendingexprline = NIM_FALSE;
	}
	LA8: ;
}

N_NIMCALL(void, scanpar_217057)(Ttmplparser217020* p, NI d) {
	NI i;
	i = d;
	{
		while (1) {
			switch (((NU8)((*p).x->data[i]))) {
			case 0:
			{
				goto LA1;
			}
			break;
			case 40:
			{
				(*p).par += ((NI) 1);
			}
			break;
			case 41:
			{
				(*p).par -= ((NI) 1);
			}
			break;
			case 91:
			{
				(*p).bracket += ((NI) 1);
			}
			break;
			case 93:
			{
				(*p).bracket -= ((NI) 1);
			}
			break;
			case 123:
			{
				(*p).curly += ((NI) 1);
			}
			break;
			case 125:
			{
				(*p).curly -= ((NI) 1);
			}
			break;
			default:
			{
			}
			break;
			}
			i += ((NI) 1);
		}
	} LA1: ;
}

static N_INLINE(NIM_BOOL, withinexpr_217139)(Ttmplparser217020* p) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = (((NI) 0) < (*p).par);
	if (LOC2) goto LA3;
	LOC2 = (((NI) 0) < (*p).bracket);
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = (((NI) 0) < (*p).curly);
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, parseline_217149)(Ttmplparser217020* p) {
	NI d;
	NI j;
	NI curly;
	NimStringDesc* keyw;
	d = 0;
	j = 0;
	curly = 0;
	keyw = 0;
	j = ((NI) 0);
	{
		while (1) {
			if (!((NU8)((*p).x->data[j]) == (NU8)(32))) goto LA2;
			j += ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		LOC5 = ((NU8)((*p).x->data[((NI) 0)]) == (NU8)((*p).nimdirective));
		if (!(LOC5)) goto LA6;
		LOC5 = ((NU8)((*p).x->data[((NI) 1)]) == (NU8)(33));
		LA6: ;
		if (!LOC5) goto LA7;
		newline_217047(p);
	}
	goto LA3;
	LA7: ;
	{
		NIM_BOOL LOC16;
		NU16 LOC18;
		if (!((NU8)((*p).x->data[j]) == (NU8)((*p).nimdirective))) goto LA10;
		newline_217047(p);
		j += ((NI) 1);
		{
			while (1) {
				if (!((NU8)((*p).x->data[j]) == (NU8)(32))) goto LA13;
				j += ((NI) 1);
			} LA13: ;
		}
		d = j;
		keyw = copyString(((NimStringDesc*) &TMP1401));
		{
			while (1) {
				if (!(((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)))) goto LA15;
				keyw = addChar(keyw, (*p).x->data[j]);
				j += ((NI) 1);
			} LA15: ;
		}
		scanpar_217057(p, j);
		LOC16 = 0;
		LOC16 = withinexpr_217139((&(*p)));
		if (LOC16) goto LA17;
		LOC16 = endswithopr_178450((*p).x);
		LA17: ;
		(*p).pendingexprline = LOC16;
		LOC18 = 0;
		LOC18 = whichkeyword_172396(keyw);
		switch (LOC18) {
		case ((NU16) 22):
		{
			NimStringDesc* LOC25;
			{
				if (!(((NI) 2) <= (*p).indent)) goto LA22;
				(*p).indent -= ((NI) 2);
			}
			goto LA20;
			LA22: ;
			{
				(*p).info.col = ((NI16) (j));
				localerror_165155((*p).info, ((NU16) 163), ((NimStringDesc*) &TMP1412));
			}
			LA20: ;
			LOC25 = 0;
			LOC25 = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llstreamwrite_178665((*p).outp, LOC25);
			llstreamwrite_178665((*p).outp, ((NimStringDesc*) &TMP1413));
		}
		break;
		case ((NU16) 31):
		case ((NU16) 65):
		case ((NU16) 60):
		case ((NU16) 66):
		case ((NU16) 27):
		case ((NU16) 7):
		case ((NU16) 9):
		case ((NU16) 51):
		case ((NU16) 38):
		case ((NU16) 14):
		case ((NU16) 40):
		case ((NU16) 59):
		case ((NU16) 41):
		{
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			LOC27 = 0;
			LOC27 = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llstreamwrite_178665((*p).outp, LOC27);
			LOC28 = 0;
			LOC28 = copyStr((*p).x, d);
			llstreamwrite_178665((*p).outp, LOC28);
			(*p).indent += ((NI) 2);
		}
		break;
		case ((NU16) 20):
		case ((NU16) 48):
		case ((NU16) 21):
		case ((NU16) 24):
		case ((NU16) 26):
		{
			NimStringDesc* LOC30;
			NimStringDesc* LOC31;
			LOC30 = 0;
			LOC30 = nsuRepeatChar(32, ((NI) ((NI)((*p).indent - ((NI) 2)))));
			llstreamwrite_178665((*p).outp, LOC30);
			LOC31 = 0;
			LOC31 = copyStr((*p).x, d);
			llstreamwrite_178665((*p).outp, LOC31);
		}
		break;
		case ((NU16) 39):
		case ((NU16) 64):
		case ((NU16) 12):
		case ((NU16) 62):
		{
			NimStringDesc* LOC33;
			NimStringDesc* LOC34;
			LOC33 = 0;
			LOC33 = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llstreamwrite_178665((*p).outp, LOC33);
			LOC34 = 0;
			LOC34 = copyStr((*p).x, d);
			llstreamwrite_178665((*p).outp, LOC34);
			{
				NIM_BOOL LOC37;
				LOC37 = 0;
				LOC37 = contains_99373((*p).x, TMP1414);
				if (!!(LOC37)) goto LA38;
				(*p).indent += ((NI) 2);
			}
			LA38: ;
		}
		break;
		default:
		{
			NimStringDesc* LOC41;
			NimStringDesc* LOC42;
			LOC41 = 0;
			LOC41 = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llstreamwrite_178665((*p).outp, LOC41);
			LOC42 = 0;
			LOC42 = copyStr((*p).x, d);
			llstreamwrite_178665((*p).outp, LOC42);
		}
		break;
		}
		(*p).state = ((NU8) 0);
	}
	goto LA3;
	LA10: ;
	{
		(*p).par = ((NI) 0);
		(*p).curly = ((NI) 0);
		(*p).bracket = ((NI) 0);
		j = ((NI) 0);
		switch ((*p).state) {
		case ((NU8) 1):
		{
			NimStringDesc* LOC45;
			llstreamwrite_178665((*p).outp, (*p).conc);
			llstreamwrite_178665((*p).outp, ((NimStringDesc*) &TMP1410));
			LOC45 = 0;
			LOC45 = nsuRepeatChar(32, ((NI) ((NI)((*p).indent + ((NI) 2)))));
			llstreamwrite_178665((*p).outp, LOC45);
			llstreamwrite_178665((*p).outp, ((NimStringDesc*) &TMP1415));
		}
		break;
		case ((NU8) 0):
		{
			NimStringDesc* LOC47;
			newline_217047(p);
			LOC47 = 0;
			LOC47 = nsuRepeatChar(32, ((NI) ((*p).indent)));
			llstreamwrite_178665((*p).outp, LOC47);
			llstreamwrite_178665((*p).outp, (*p).emit);
			llstreamwrite_178665((*p).outp, ((NimStringDesc*) &TMP1416));
			(*p).emitpar += ((NI) 1);
		}
		break;
		}
		(*p).state = ((NU8) 1);
		{
			while (1) {
				switch (((NU8)((*p).x->data[j]))) {
				case 0:
				{
					goto LA48;
				}
				break;
				case 1 ... 31:
				case 128 ... 255:
				{
					NimStringDesc* LOC52;
					llstreamwrite_178665((*p).outp, ((NimStringDesc*) &TMP1417));
					LOC52 = 0;
					LOC52 = nsuToHex(((NI64) (((NU8)((*p).x->data[j])))), ((NI) 2));
					llstreamwrite_178665((*p).outp, LOC52);
					j += ((NI) 1);
				}
				break;
				case 92:
				{
					llstreamwrite_178665((*p).outp, ((NimStringDesc*) &TMP1418));
					j += ((NI) 1);
				}
				break;
				case 39:
				{
					llstreamwrite_178665((*p).outp, ((NimStringDesc*) &TMP1419));
					j += ((NI) 1);
				}
				break;
				case 34:
				{
					llstreamwrite_178665((*p).outp, ((NimStringDesc*) &TMP1420));
					j += ((NI) 1);
				}
				break;
				default:
				{
					{
						if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subschar))) goto LA59;
						j += ((NI) 1);
						switch (((NU8)((*p).x->data[j]))) {
						case 123:
						{
							(*p).info.col = ((NI16) (j));
							llstreamwrite_178696((*p).outp, 34);
							llstreamwrite_178665((*p).outp, (*p).conc);
							llstreamwrite_178665((*p).outp, (*p).tostr);
							llstreamwrite_178696((*p).outp, 40);
							j += ((NI) 1);
							curly = ((NI) 0);
							{
								while (1) {
									switch (((NU8)((*p).x->data[j]))) {
									case 0:
									{
										localerror_165155((*p).info, ((NU16) 188), ((NimStringDesc*) &TMP1421));
										goto LA62;
									}
									break;
									case 123:
									{
										j += ((NI) 1);
										curly += ((NI) 1);
										llstreamwrite_178696((*p).outp, 123);
									}
									break;
									case 125:
									{
										j += ((NI) 1);
										{
											if (!(curly == ((NI) 0))) goto LA69;
											goto LA62;
										}
										LA69: ;
										{
											if (!(((NI) 0) < curly)) goto LA73;
											curly -= ((NI) 1);
										}
										LA73: ;
										llstreamwrite_178696((*p).outp, 125);
									}
									break;
									default:
									{
										llstreamwrite_178696((*p).outp, (*p).x->data[j]);
										j += ((NI) 1);
									}
									break;
									}
								}
							} LA62: ;
							llstreamwrite_178696((*p).outp, 41);
							llstreamwrite_178665((*p).outp, (*p).conc);
							llstreamwrite_178696((*p).outp, 34);
						}
						break;
						case 97 ... 122:
						case 65 ... 90:
						case 128 ... 255:
						{
							llstreamwrite_178696((*p).outp, 34);
							llstreamwrite_178665((*p).outp, (*p).conc);
							llstreamwrite_178665((*p).outp, (*p).tostr);
							llstreamwrite_178696((*p).outp, 40);
							{
								while (1) {
									if (!(((NU8)((*p).x->data[j])) >= ((NU8)(97)) && ((NU8)((*p).x->data[j])) <= ((NU8)(122)) || ((NU8)((*p).x->data[j])) >= ((NU8)(65)) && ((NU8)((*p).x->data[j])) <= ((NU8)(90)) || ((NU8)((*p).x->data[j])) >= ((NU8)(48)) && ((NU8)((*p).x->data[j])) <= ((NU8)(57)) || ((NU8)((*p).x->data[j])) >= ((NU8)(128)) && ((NU8)((*p).x->data[j])) <= ((NU8)(255)) || ((NU8)((*p).x->data[j])) == ((NU8)(46)) || ((NU8)((*p).x->data[j])) == ((NU8)(95)))) goto LA78;
									llstreamwrite_178696((*p).outp, (*p).x->data[j]);
									j += ((NI) 1);
								} LA78: ;
							}
							llstreamwrite_178696((*p).outp, 41);
							llstreamwrite_178665((*p).outp, (*p).conc);
							llstreamwrite_178696((*p).outp, 34);
						}
						break;
						default:
						{
							{
								if (!((NU8)((*p).x->data[j]) == (NU8)((*p).subschar))) goto LA82;
								llstreamwrite_178696((*p).outp, (*p).subschar);
								j += ((NI) 1);
							}
							goto LA80;
							LA82: ;
							{
								(*p).info.col = ((NI16) (j));
								localerror_165155((*p).info, ((NU16) 167), ((NimStringDesc*) &TMP1409));
							}
							LA80: ;
						}
						break;
						}
					}
					goto LA57;
					LA59: ;
					{
						llstreamwrite_178696((*p).outp, (*p).x->data[j]);
						j += ((NI) 1);
					}
					LA57: ;
				}
				break;
				}
			}
		} LA48: ;
		llstreamwrite_178665((*p).outp, ((NimStringDesc*) &TMP1422));
	}
	LA3: ;
}

N_NIMCALL(Tllstream178204*, filtertmpl_217009)(Tllstream178204* stdin_217011, NimStringDesc* filename, Tnode190813* call) {
	Tllstream178204* result;
	Ttmplparser217020 p;
	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	p.info = newlineinfo_163879(filename, ((NI) 0), ((NI) 0));
	p.outp = llstreamopen_178220(((NimStringDesc*) &TMP1401));
	p.inp = stdin_217011;
	p.subschar = chararg_216020(call, ((NimStringDesc*) &TMP1402), ((NI) 1), 36);
	p.nimdirective = chararg_216020(call, ((NimStringDesc*) &TMP1403), ((NI) 2), 35);
	p.emit = strarg_216029(call, ((NimStringDesc*) &TMP1404), ((NI) 3), ((NimStringDesc*) &TMP1405));
	p.conc = strarg_216029(call, ((NimStringDesc*) &TMP1406), ((NI) 4), ((NimStringDesc*) &TMP1407));
	p.tostr = strarg_216029(call, ((NimStringDesc*) &TMP1408), ((NI) 5), ((NimStringDesc*) &TMP1409));
	p.x = rawNewString(((NI) 120));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = llstreamreadline_178610(p.inp, (&p.x));
			if (!LOC3) goto LA2;
			p.info.line = (NI16)(p.info.line + ((NI16) 1));
			parseline_217149((&p));
		} LA2: ;
	}
	newline_217047((&p));
	result = p.outp;
	llstreamclose_178310(p.inp);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_filter_tmplInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_filter_tmplDatInit)(void) {
}

