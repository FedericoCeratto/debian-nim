/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
typedef struct Tnode214790 Tnode214790;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype214828 Ttype214828;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Tsym214822 Tsym214822;
typedef struct Tident189012 Tident189012;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Tllstream202204 Tllstream202204;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Tlib214808 Tlib214808;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY214913 TY214913;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode214790  {
Ttype214828* typ;
Tlineinfo182337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym214822* sym;
} S4;
struct {Tident189012* ident;
} S5;
struct {Tnodeseq214784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU8 TY202404[32];
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tloc214804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype214828* t;
Ropeobj169006* r;
Ropeobj169006* heaproot;
};
struct  Ttype214828  {
  Tidobj189006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq214824* sons;
Tnode214790* n;
Tsym214822* owner;
Tsym214822* sym;
Tsym214822* destructor;
Tsym214822* deepcopy;
Tsym214822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc214804 loc;
};
struct  Tstrtable214794  {
NI counter;
Tsymseq214792* data;
};
struct  Tsym214822  {
  Tidobj189006 Sup;
NU8 kind;
union{
struct {Ttypeseq214824* typeinstcache;
Tscope214816* typscope;
} S1;
struct {TY214925* procinstcache;
Tsym214822* gcunsafetyreason;
} S2;
struct {TY214925* usedgenerics;
Tstrtable214794 tab;
} S3;
struct {Tsym214822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype214828* typ;
Tident189012* name;
Tlineinfo182337 info;
Tsym214822* owner;
NU32 flags;
Tnode214790* ast;
NU32 options;
NI position;
NI offset;
Tloc214804 loc;
Tlib214808* annex;
Tnode214790* constraint;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
NI h;
};
struct  Tllstream202204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj169006  {
  TNimObject Sup;
Ropeobj169006* left;
Ropeobj169006* right;
NI length;
NimStringDesc* data;
};
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib214808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj169006* name;
Tnode214790* path;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
};
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq214824 {
  TGenericSeq Sup;
  Ttype214828* data[SEQ_DECL_SIZE];
};
struct TY214925 {
  TGenericSeq Sup;
  Tinstantiation214812* data[SEQ_DECL_SIZE];
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode214790*, getarg_236033)(Tnode214790* n, NimStringDesc* name, NI pos);
N_NIMCALL(NI, sonslen_217351)(Tnode214790* n);
N_NIMCALL(void, invalidpragma_236029)(Tnode214790* n);
N_NIMCALL(void, localerror_187080)(Tlineinfo182337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_233044)(Tnode214790* n, NU8 renderflags);
N_NIMCALL(NIM_BOOL, identeq_189450)(Tident189012* id, NimStringDesc* name);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, strarg_236017)(Tnode214790* n, NimStringDesc* name, NI pos, NimStringDesc* default_236022);
N_NIMCALL(NIM_BOOL, boolarg_236023)(Tnode214790* n, NimStringDesc* name, NI pos, NIM_BOOL default_236028);
N_NIMCALL(Tllstream202204*, llstreamopen_202217)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_202550)(Tllstream202204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, TY202404 chars);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_202608)(Tllstream202204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_202277)(Tllstream202204* s);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
STRING_LITERAL(TMP1543, "startswith", 10);
STRING_LITERAL(TMP1544, "", 0);
STRING_LITERAL(TMP1545, "true", 4);
STRING_LITERAL(TMP1546, "false", 5);
STRING_LITERAL(TMP1547, "leading", 7);
STRING_LITERAL(TMP1548, "trailing", 8);
static NIM_CONST TY202404 TMP1549 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1550, "sub", 3);
STRING_LITERAL(TMP1551, "by", 2);

N_NIMCALL(void, invalidpragma_236029)(Tnode214790* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_233044(n, 4);
	localerror_187080((*n).info, ((NU16) 167), LOC1);
}

N_NIMCALL(Tnode214790*, getarg_236033)(Tnode214790* n, NimStringDesc* name, NI pos) {
	Tnode214790* result;
{	result = 0;
	result = NIM_NIL;
	{
		if (!((*n).kind >= ((NU8) 1) && (*n).kind <= ((NU8) 23))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_236061;
		NI HEX3Atmp_236090;
		NI LOC6;
		NI res_236093;
		i_236061 = 0;
		HEX3Atmp_236090 = 0;
		LOC6 = 0;
		LOC6 = sonslen_217351(n);
		HEX3Atmp_236090 = (NI)(LOC6 - ((NI) 1));
		res_236093 = ((NI) 1);
		{
			while (1) {
				if (!(res_236093 <= HEX3Atmp_236090)) goto LA8;
				i_236061 = res_236093;
				{
					if (!((*(*n).kindU.S6.sons->data[i_236061]).kind == ((NU8) 33))) goto LA11;
					{
						if (!!(((*(*(*n).kindU.S6.sons->data[i_236061]).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2)))) goto LA15;
						invalidpragma_236029(n);
					}
					LA15: ;
					{
						NIM_BOOL LOC19;
						LOC19 = 0;
						LOC19 = identeq_189450((*(*(*n).kindU.S6.sons->data[i_236061]).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident, name);
						if (!LOC19) goto LA20;
						result = (*(*n).kindU.S6.sons->data[i_236061]).kindU.S6.sons->data[((NI) 1)];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					if (!(i_236061 == pos)) goto LA23;
					result = (*n).kindU.S6.sons->data[i_236061];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				res_236093 += ((NI) 1);
			} LA8: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_CHAR, chararg_236011)(Tnode214790* n, NimStringDesc* name, NI pos, NIM_CHAR default_236016) {
	NIM_CHAR result;
	Tnode214790* x;
	result = 0;
	x = getarg_236033(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_236016;
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).kind == ((NU8) 5))) goto LA6;
		result = ((NIM_CHAR) (((NI) (((NI) ((*x).kindU.S1.intval))))));
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_236029(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_236017)(Tnode214790* n, NimStringDesc* name, NI pos, NimStringDesc* default_236022) {
	NimStringDesc* result;
	Tnode214790* x;
	result = 0;
	x = getarg_236033(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = copyString(default_236022);
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).kind >= ((NU8) 20) && (*x).kind <= ((NU8) 22))) goto LA6;
		result = copyString((*x).kindU.S3.strval);
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_236029(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_236023)(Tnode214790* n, NimStringDesc* name, NI pos, NIM_BOOL default_236028) {
	NIM_BOOL result;
	Tnode214790* x;
	result = 0;
	x = getarg_236033(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_236028;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = ((*x).kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		LOC6 = identeq_189450((*x).kindU.S5.ident, ((NimStringDesc*) &TMP1545));
		LA7: ;
		if (!LOC6) goto LA8;
		result = NIM_TRUE;
	}
	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = ((*x).kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		LOC11 = identeq_189450((*x).kindU.S5.ident, ((NimStringDesc*) &TMP1546));
		LA12: ;
		if (!LOC11) goto LA13;
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		invalidpragma_236029(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tllstream202204*, filterstrip_236006)(Tllstream202204* stdin_236008, NimStringDesc* filename, Tnode214790* call) {
	Tllstream202204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	result = 0;
	pattern = strarg_236017(call, ((NimStringDesc*) &TMP1543), ((NI) 1), ((NimStringDesc*) &TMP1544));
	leading = boolarg_236023(call, ((NimStringDesc*) &TMP1547), ((NI) 2), NIM_TRUE);
	trailing = boolarg_236023(call, ((NimStringDesc*) &TMP1548), ((NI) 3), NIM_TRUE);
	result = llstreamopen_202217(((NimStringDesc*) &TMP1544));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped;
			LOC3 = 0;
			LOC3 = llstreamreadline_202550(stdin_236008, (&line));
			if (!LOC3) goto LA2;
			stripped = nsuStrip(line, leading, trailing, TMP1549);
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = ((pattern ? pattern->Sup.len : 0) == ((NI) 0));
				if (LOC6) goto LA7;
				LOC6 = nsuStartsWith(stripped, pattern);
				LA7: ;
				if (!LOC6) goto LA8;
				llstreamwriteln_202608(result, stripped);
			}
			goto LA4;
			LA8: ;
			{
				llstreamwriteln_202608(result, line);
			}
			LA4: ;
		} LA2: ;
	}
	llstreamclose_202277(stdin_236008);
	return result;
}

N_NIMCALL(Tllstream202204*, filterreplace_236001)(Tllstream202204* stdin_236003, NimStringDesc* filename, Tnode214790* call) {
	Tllstream202204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	result = 0;
	sub = strarg_236017(call, ((NimStringDesc*) &TMP1550), ((NI) 1), ((NimStringDesc*) &TMP1544));
	{
		if (!((sub ? sub->Sup.len : 0) == ((NI) 0))) goto LA3;
		invalidpragma_236029(call);
	}
	LA3: ;
	by = strarg_236017(call, ((NimStringDesc*) &TMP1551), ((NI) 2), ((NimStringDesc*) &TMP1544));
	result = llstreamopen_202217(((NimStringDesc*) &TMP1544));
	line = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = 0;
			LOC7 = llstreamreadline_202550(stdin_236003, (&line));
			if (!LOC7) goto LA6;
			LOC8 = 0;
			LOC8 = nsuReplaceStr(line, sub, by);
			llstreamwriteln_202608(result, LOC8);
		} LA6: ;
	}
	llstreamclose_202277(stdin_236003);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit000)(void) {
}

