/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode225816 tnode225816;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype225852 ttype225852;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tsym225846 tsym225846;
typedef struct tident200021 tident200021;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tllstream211204 tllstream211204;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
N_NIMCALL(tnode225816*, getarg_258057)(tnode225816* n, NimStringDesc* name, NI pos);
static N_INLINE(NI, sonslen_226249)(tnode225816* n);
N_NIMCALL(void, invalidpragma_258047)(tnode225816* n);
N_NIMCALL(void, localerror_197955)(tlineinfo195539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_250058)(tnode225816* n, NU8 renderflags);
N_NIMCALL(NIM_BOOL, identeq_200493)(tident200021* id, NimStringDesc* name);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, strarg_258029)(tnode225816* n, NimStringDesc* name, NI pos, NimStringDesc* default_258034);
N_NIMCALL(NIM_BOOL, boolarg_258038)(tnode225816* n, NimStringDesc* name, NI pos, NIM_BOOL default_258043);
N_NIMCALL(tllstream211204*, llstreamopen_211220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_211264)(tllstream211204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_211300)(tllstream211204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_211250)(tllstream211204* s);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
STRING_LITERAL(TMP1345, "startswith", 10);
STRING_LITERAL(TMP1346, "", 0);
STRING_LITERAL(TMP1347, "true", 4);
STRING_LITERAL(TMP1348, "false", 5);
STRING_LITERAL(TMP1349, "leading", 7);
STRING_LITERAL(TMP1350, "trailing", 8);
STRING_LITERAL(TMP1351, "sub", 3);
STRING_LITERAL(TMP1352, "by", 2);

static N_INLINE(NI, sonslen_226249)(tnode225816* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, invalidpragma_258047)(tnode225816* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_250058(n, 4);
	localerror_197955((*n).Info, ((NU16) 163), LOC1);
}

N_NIMCALL(tnode225816*, getarg_258057)(tnode225816* n, NimStringDesc* name, NI pos) {
	tnode225816* result;
	result = 0;
	result = NIM_NIL;
	{
		if (!((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_258089;
		NI HEX3Atmp_258235;
		NI LOC6;
		NI res_258238;
		i_258089 = 0;
		HEX3Atmp_258235 = 0;
		LOC6 = 0;
		LOC6 = sonslen_226249(n);
		HEX3Atmp_258235 = (NI32)(LOC6 - 1);
		res_258238 = 1;
		{
			while (1) {
				if (!(res_258238 <= HEX3Atmp_258235)) goto LA8;
				i_258089 = res_258238;
				{
					if (!((*(*n).kindU.S6.Sons->data[i_258089]).Kind == ((NU8) 33))) goto LA11;
					{
						if (!!(((*(*(*n).kindU.S6.Sons->data[i_258089]).kindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA15;
						invalidpragma_258047(n);
					}
					LA15: ;
					{
						NIM_BOOL LOC19;
						LOC19 = 0;
						LOC19 = identeq_200493((*(*(*n).kindU.S6.Sons->data[i_258089]).kindU.S6.Sons->data[0]).kindU.S5.Ident, name);
						if (!LOC19) goto LA20;
						result = (*(*n).kindU.S6.Sons->data[i_258089]).kindU.S6.Sons->data[1];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					if (!(i_258089 == pos)) goto LA23;
					result = (*n).kindU.S6.Sons->data[i_258089];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				res_258238 += 1;
			} LA8: ;
		}
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_CHAR, chararg_258020)(tnode225816* n, NimStringDesc* name, NI pos, NIM_CHAR default_258025) {
	NIM_CHAR result;
	tnode225816* x;
	result = 0;
	x = getarg_258057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_258025;
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).Kind == ((NU8) 5))) goto LA6;
		result = ((NIM_CHAR) (((NI) (((NI) ((*x).kindU.S1.Intval))))));
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_258047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, strarg_258029)(tnode225816* n, NimStringDesc* name, NI pos, NimStringDesc* default_258034) {
	NimStringDesc* result;
	tnode225816* x;
	result = 0;
	x = getarg_258057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = copyString(default_258034);
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x).Kind >= ((NU8) 20) && (*x).Kind <= ((NU8) 22))) goto LA6;
		result = copyString((*x).kindU.S3.Strval);
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_258047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, boolarg_258038)(tnode225816* n, NimStringDesc* name, NI pos, NIM_BOOL default_258043) {
	NIM_BOOL result;
	tnode225816* x;
	result = 0;
	x = getarg_258057(n, name, pos);
	{
		if (!(x == NIM_NIL)) goto LA3;
		result = default_258043;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = ((*x).Kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		LOC6 = identeq_200493((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP1347));
		LA7: ;
		if (!LOC6) goto LA8;
		result = NIM_TRUE;
	}
	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = ((*x).Kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		LOC11 = identeq_200493((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP1348));
		LA12: ;
		if (!LOC11) goto LA13;
		result = NIM_FALSE;
	}
	goto LA1;
	LA13: ;
	{
		invalidpragma_258047(n);
	}
	LA1: ;
	return result;
}

N_NIMCALL(tllstream211204*, filterstrip_258012)(tllstream211204* stdin_258014, NimStringDesc* filename, tnode225816* call) {
	tllstream211204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	result = 0;
	pattern = strarg_258029(call, ((NimStringDesc*) &TMP1345), 1, ((NimStringDesc*) &TMP1346));
	leading = boolarg_258038(call, ((NimStringDesc*) &TMP1349), 2, NIM_TRUE);
	trailing = boolarg_258038(call, ((NimStringDesc*) &TMP1350), 3, NIM_TRUE);
	result = llstreamopen_211220(((NimStringDesc*) &TMP1346));
	line = rawNewString(80);
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped;
			LOC3 = 0;
			LOC3 = llstreamreadline_211264(stdin_258014, (&line));
			if (!LOC3) goto LA2;
			stripped = nsuStrip(line, leading, trailing);
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (pattern->Sup.len == 0);
				if (LOC6) goto LA7;
				LOC6 = nsuStartsWith(stripped, pattern);
				LA7: ;
				if (!LOC6) goto LA8;
				llstreamwriteln_211300(result, stripped);
			}
			goto LA4;
			LA8: ;
			{
				llstreamwriteln_211300(result, line);
			}
			LA4: ;
		} LA2: ;
	}
	llstreamclose_211250(stdin_258014);
	return result;
}

N_NIMCALL(tllstream211204*, filterreplace_258004)(tllstream211204* stdin_258006, NimStringDesc* filename, tnode225816* call) {
	tllstream211204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	result = 0;
	sub = strarg_258029(call, ((NimStringDesc*) &TMP1351), 1, ((NimStringDesc*) &TMP1346));
	{
		if (!(sub->Sup.len == 0)) goto LA3;
		invalidpragma_258047(call);
	}
	LA3: ;
	by = strarg_258029(call, ((NimStringDesc*) &TMP1352), 2, ((NimStringDesc*) &TMP1346));
	result = llstreamopen_211220(((NimStringDesc*) &TMP1346));
	line = rawNewString(80);
	{
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = 0;
			LOC7 = llstreamreadline_211264(stdin_258006, (&line));
			if (!LOC7) goto LA6;
			LOC8 = 0;
			LOC8 = nsuReplaceStr(line, sub, by);
			llstreamwriteln_211300(result, LOC8);
		} LA6: ;
	}
	llstreamclose_211250(stdin_258006);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_filtersInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_filtersDatInit)(void) {
}

