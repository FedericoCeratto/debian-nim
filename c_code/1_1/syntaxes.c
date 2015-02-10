/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tnode226816 tnode226816;
typedef struct tparsers261035 tparsers261035;
typedef struct tparser245205 tparser245205;
typedef struct tlexer216190 tlexer216190;
typedef struct tbaselexer214024 tbaselexer214024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream212204 tllstream212204;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttoken216186 ttoken216186;
typedef struct tident201021 tident201021;
typedef struct ttype226852 ttype226852;
typedef struct tsym226846 tsym226846;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct tidobj201015 tidobj201015;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tlib226834 tlib226834;
typedef struct TY226936 TY226936;
typedef struct tlistentry129022 tlistentry129022;
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
struct  tbaselexer214024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream212204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (tlineinfo196539 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} terrorhandler216188;
struct  tlexer216190  {
  tbaselexer214024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
terrorhandler216188 Errorhandler;
};
struct  ttoken216186  {
NU8 Toktype;
NI Indent;
tident201021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser245205  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer216190 Lex;
ttoken216186 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers261035  {
NU8 Skin;
tparser245205 Parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tnode226816  {
ttype226852* Typ;
tlineinfo196539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym226846* Sym;
} S4;
struct {tident201021* Ident;
} S5;
struct {tnodeseq226810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NimStringDesc* TY261026[4];
typedef NimStringDesc* TY261020[4];
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
typedef NimStringDesc* TY261532[1];
struct  tllstream212204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tloc226830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype226852* T;
trope178009* R;
trope178009* Heaproot;
};
struct  ttype226852  {
  tidobj201015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq226848* Sons;
tnode226816* N;
tsym226846* Owner;
tsym226846* Sym;
tsym226846* Destructor;
tsym226846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc226830 Loc;
};
struct  tstrtable226820  {
NI Counter;
tsymseq226818* Data;
};
struct  tsym226846  {
  tidobj201015 Sup;
NU8 Kind;
union {
struct {ttypeseq226848* Typeinstcache;
tscope226840* Typscope;
} S1;
struct {TY226947* Procinstcache;
tscope226840* Scope;
} S2;
struct {TY226947* Usedgenerics;
tstrtable226820 Tab;
} S3;
struct {tsym226846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype226852* Typ;
tident201021* Name;
tlineinfo196539 Info;
tsym226846* Owner;
NU32 Flags;
tnode226816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc226830 Loc;
tlib226834* Annex;
tnode226816* Constraint;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope226840  {
NI Depthlevel;
tstrtable226820 Symbols;
tnodeseq226810* Usingsyms;
tscope226840* Parent;
};
struct  tinstantiation226836  {
tsym226846* Sym;
ttypeseq226848* Concretetypes;
TY226936* Usedby;
};
struct  tlistentry129022  {
  TNimObject Sup;
tlistentry129022* Prev;
tlistentry129022* Next;
};
struct  tlib226834  {
  tlistentry129022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode226816* Path;
};
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct ttypeseq226848 {
  TGenericSeq Sup;
  ttype226852* data[SEQ_DECL_SIZE];
};
struct TY226947 {
  TGenericSeq Sup;
  tinstantiation226836* data[SEQ_DECL_SIZE];
};
struct tsymseq226818 {
  TGenericSeq Sup;
  tsym226846* data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_198037)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_12603)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_198733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_261047)(tparsers261035* p, NI32 fileidx, tllstream212204* inputstream);
N_NIMCALL(tnode226816*, parsepipe_261177)(NimStringDesc* filename, tllstream212204* inputstream);
N_NIMCALL(tllstream212204*, llstreamopen_212233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_212264)(tllstream212204* s, NimStringDesc** line);
N_NIMCALL(NI, utf8bom_261123)(NimStringDesc* s);
N_NIMCALL(NIM_BOOL, containsshebang_261133)(NimStringDesc* s, NI i);
N_NIMCALL(void, openparser_245417)(tparser245205* p, NimStringDesc* filename, tllstream212204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream212204*, llstreamopen_212220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(tnode226816*, parseall_245216)(tparser245205* p);
N_NIMCALL(void, closeparser_245223)(tparser245205* p);
N_NIMCALL(void, llstreamclose_212250)(tllstream212204* s);
N_NIMCALL(tllstream212204*, evalpipe_261546)(tparsers261035* p, tnode226816* n, NimStringDesc* filename, tllstream212204* start);
N_NIMCALL(NIM_BOOL, identeq_201493)(tident201021* id, NimStringDesc* name);
N_NIMCALL(tllstream212204*, applyfilter_261507)(tparsers261035* p, tnode226816* n, NimStringDesc* filename, tllstream212204* stdin_261513);
N_NIMCALL(tident201021*, getcallee_261410)(tnode226816* n);
N_NIMCALL(NimStringDesc*, rendertree_251058)(tnode226816* n, NU8 renderflags);
N_NIMCALL(NU8, getfilter_261260)(tident201021* ident);
N_NIMCALL(NU8, getparser_261335)(tident201021* ident);
N_NIMCALL(tllstream212204*, filtertmpl_260009)(tllstream212204* stdin_260011, NimStringDesc* filename, tnode226816* call);
N_NIMCALL(tllstream212204*, filterstrip_259012)(tllstream212204* stdin_259014, NimStringDesc* filename, tnode226816* call);
N_NIMCALL(tllstream212204*, filterreplace_259004)(tllstream212204* stdin_259006, NimStringDesc* filename, tnode226816* call);
N_NIMCALL(void, rawmessage_198643)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_198236)(NimStringDesc* s);
N_NIMCALL(void, openparser_245402)(tparser245205* p, NI32 fileidx, tllstream212204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream212204*, llstreamopen_212226)(FILE** f);
N_NIMCALL(tnode226816*, parseall_261063)(tparsers261035* p);
N_NIMCALL(tnode226816*, parseall_250009)(tparser245205* p);
N_NIMCALL(void, internalerror_199006)(NimStringDesc* errmsg);
N_NIMCALL(void, closeparsers_261056)(tparsers261035* p);
N_NIMCALL(tnode226816*, parsetoplevelstmt_245230)(tparser245205* p);
N_NIMCALL(tnode226816*, parsetoplevelstmt_250020)(tparser245205* p);
STRING_LITERAL(TMP1217, "|", 1);
STRING_LITERAL(TMP1327, "none", 4);
STRING_LITERAL(TMP1328, "stdtmpl", 7);
STRING_LITERAL(TMP1329, "replace", 7);
STRING_LITERAL(TMP1330, "strip", 5);
NIM_CONST TY261026 filternames_261025 = {((NimStringDesc*) &TMP1327),
((NimStringDesc*) &TMP1328),
((NimStringDesc*) &TMP1329),
((NimStringDesc*) &TMP1330)}
;
STRING_LITERAL(TMP1331, "standard", 8);
STRING_LITERAL(TMP1332, "strongspaces", 12);
STRING_LITERAL(TMP1333, "braces", 6);
STRING_LITERAL(TMP1334, "endx", 4);
NIM_CONST TY261020 parsernames_261019 = {((NimStringDesc*) &TMP1331),
((NimStringDesc*) &TMP1332),
((NimStringDesc*) &TMP1333),
((NimStringDesc*) &TMP1334)}
;
STRING_LITERAL(TMP1365, "parser to implement", 19);
TNimType NTI261035; /* TParsers */
TNimType NTI261007; /* TParserKind */
extern TNimType NTI245205; /* TParser */
extern tnode226816* emptynode_227738;
extern NI gverbosity_170127;

N_NIMCALL(NI, utf8bom_261123)(NimStringDesc* s) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)(s->data[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(s->data[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)(s->data[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		result = 3;
	}
	goto LA1;
	LA7: ;
	{
		result = 0;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsshebang_261133)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NI j;
		LOC3 = 0;
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(s->data[(NI32)(i + 1)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		j = (NI32)(i + 2);
		{
			while (1) {
				if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA8;
				j += 1;
			} LA8: ;
		}
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	return result;
}

N_NIMCALL(tnode226816*, parsepipe_261177)(NimStringDesc* filename, tllstream212204* inputstream) {
	tnode226816* result;
	tllstream212204* s;
	result = 0;
	result = emptynode_227738;
	s = llstreamopen_212233(filename, ((NU8) 0));
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		if (!!((s == NIM_NIL))) goto LA3;
		line = rawNewString(80);
		LOC5 = 0;
		LOC5 = llstreamreadline_212264(s, (&line));
		i = utf8bom_261123(line);
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = 0;
			LOC8 = containsshebang_261133(line, i);
			if (!LOC8) goto LA9;
			LOC11 = 0;
			LOC11 = llstreamreadline_212264(s, (&line));
			i = 0;
		}
		LA9: ;
		{
			NIM_BOOL LOC14;
			tparser245205 q;
			NimStringDesc* LOC20;
			tllstream212204* LOC21;
			LOC14 = 0;
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			LOC14 = ((NU8)(line->data[(NI32)(i + 1)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			i += 2;
			{
				while (1) {
					if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA19;
					i += 1;
				} LA19: ;
			}
			memset((void*)(&q), 0, sizeof(q));
			objectInit((&q), (&NTI245205));
			LOC20 = 0;
			LOC20 = copyStr(line, i);
			LOC21 = 0;
			LOC21 = llstreamopen_212220(LOC20);
			openparser_245417((&q), filename, LOC21, NIM_FALSE);
			result = parseall_245216((&q));
			closeparser_245223((&q));
		}
		LA16: ;
		llstreamclose_212250(s);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tident201021*, getcallee_261410)(tnode226816* n) {
	tident201021* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}
	goto LA1;
	LA5: ;
	{
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		result = (*n).kindU.S5.Ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = rendertree_251058(n, 0);
		rawmessage_198733(((NU16) 163), LOC11);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, getfilter_261260)(tident201021* ident) {
	NU8 result;
	result = 0;
	{
		NU8 i_261312;
		NU8 res_261318;
		i_261312 = 0;
		res_261318 = ((NU8) 0);
		{
			while (1) {
				if (!(res_261318 <= ((NU8) 3))) goto LA3;
				i_261312 = res_261318;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_201493(ident, filternames_261025[(i_261312)- 0]);
					if (!LOC6) goto LA7;
					result = i_261312;
					goto BeforeRet;
				}
				LA7: ;
				res_261318 += 1;
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, getparser_261335)(tident201021* ident) {
	NU8 result;
	result = 0;
	{
		NU8 i_261387;
		NU8 res_261393;
		i_261387 = 0;
		res_261393 = ((NU8) 0);
		{
			while (1) {
				if (!(res_261393 <= ((NU8) 3))) goto LA3;
				i_261387 = res_261393;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_201493(ident, parsernames_261019[(i_261387)- 0]);
					if (!LOC6) goto LA7;
					result = i_261387;
					goto BeforeRet;
				}
				LA7: ;
				res_261393 += 1;
			} LA3: ;
		}
	}
	rawmessage_198733(((NU16) 30), (*ident).S);
	BeforeRet: ;
	return result;
}

N_NIMCALL(tllstream212204*, applyfilter_261507)(tparsers261035* p, tnode226816* n, NimStringDesc* filename, tllstream212204* stdin_261513) {
	tllstream212204* result;
	tident201021* ident;
	NU8 f;
	result = 0;
	ident = getcallee_261410(n);
	f = getfilter_261260(ident);
	switch (f) {
	case ((NU8) 0):
	{
		(*p).Skin = getparser_261335(ident);
		result = stdin_261513;
	}
	break;
	case ((NU8) 1):
	{
		result = filtertmpl_260009(stdin_261513, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		result = filterstrip_259012(stdin_261513, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		result = filterreplace_259004(stdin_261513, filename, n);
	}
	break;
	}
	{
		if (!!((f == ((NU8) 0)))) goto LA7;
		{
			TY261532 LOC13;
			TY261532 LOC14;
			if (!(2 <= gverbosity_170127)) goto LA11;
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_198643(((NU16) 268), LOC13, 0);
			msgwriteln_198236((*result).S);
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_198643(((NU16) 269), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	return result;
}

N_NIMCALL(tllstream212204*, evalpipe_261546)(tparsers261035* p, tnode226816* n, NimStringDesc* filename, tllstream212204* start) {
	tllstream212204* result;
	result = 0;
	result = start;
	{
		if (!((*n).Kind == ((NU8) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		LOC7 = identeq_201493((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP1217));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_261635;
			NI res_261713;
			i_261635 = 0;
			res_261713 = 1;
			{
				while (1) {
					if (!(res_261713 <= 2)) goto LA15;
					i_261635 = res_261713;
					{
						if (!((*(*n).kindU.S6.Sons->data[i_261635]).Kind == ((NU8) 29))) goto LA18;
						result = evalpipe_261546(p, (*n).kindU.S6.Sons->data[i_261635], filename, result);
					}
					goto LA16;
					LA18: ;
					{
						result = applyfilter_261507(p, (*n).kindU.S6.Sons->data[i_261635], filename, result);
					}
					LA16: ;
					res_261713 += 1;
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		if (!((*n).Kind == ((NU8) 115))) goto LA22;
		result = evalpipe_261546(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}
	goto LA5;
	LA22: ;
	{
		result = applyfilter_261507(p, n, filename, result);
	}
	LA5: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, openparsers_261047)(tparsers261035* p, NI32 fileidx, tllstream212204* inputstream) {
	tllstream212204* s;
	NimStringDesc* filename;
	tnode226816* pipe;
	s = 0;
	(*p).Skin = ((NU8) 0);
	filename = tofullpath_198037(fileidx);
	pipe = parsepipe_261177(filename, inputstream);
	{
		if (!!((pipe == NIM_NIL))) goto LA3;
		s = evalpipe_261546(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		s = inputstream;
	}
	LA1: ;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 2):
	case ((NU8) 3):
	{
		openparser_245402((&(*p).Parser), fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		openparser_245402((&(*p).Parser), fileidx, s, NIM_TRUE);
	}
	break;
	}
}

N_NIMCALL(tnode226816*, parseall_261063)(tparsers261035* p) {
	tnode226816* result;
	result = 0;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parseall_245216((&(*p).Parser));
	}
	break;
	case ((NU8) 2):
	{
		result = parseall_250009((&(*p).Parser));
	}
	break;
	case ((NU8) 3):
	{
		internalerror_199006(((NimStringDesc*) &TMP1365));
		result = emptynode_227738;
	}
	break;
	}
	return result;
}

N_NIMCALL(void, closeparsers_261056)(tparsers261035* p) {
	closeparser_245223((&(*p).Parser));
}

N_NIMCALL(tnode226816*, parsefile_261041)(NI32 fileidx) {
	tnode226816* result;
	tparsers261035 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream212204* LOC6;
	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI261035));
	f = 0;
	filename = tofullpath_198037(fileidx);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_12603(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		rawmessage_198733(((NU16) 3), filename);
		goto BeforeRet;
	}
	LA4: ;
	LOC6 = 0;
	LOC6 = llstreamopen_212226(&f);
	openparsers_261047((&p), fileidx, LOC6);
	result = parseall_261063((&p));
	closeparsers_261056((&p));
	BeforeRet: ;
	return result;
}

N_NIMCALL(tnode226816*, parsetoplevelstmt_261070)(tparsers261035* p) {
	tnode226816* result;
	result = 0;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parsetoplevelstmt_245230((&(*p).Parser));
	}
	break;
	case ((NU8) 2):
	{
		result = parsetoplevelstmt_250020((&(*p).Parser));
	}
	break;
	case ((NU8) 3):
	{
		internalerror_199006(((NimStringDesc*) &TMP1365));
		result = emptynode_227738;
	}
	break;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_syntaxesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_syntaxesDatInit)(void) {
static TNimNode* TMP1015[2];
static TNimNode* TMP1016[4];
NI TMP1018;
static char* NIM_CONST TMP1017[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP808[8];
NTI261035.size = sizeof(tparsers261035);
NTI261035.kind = 18;
NTI261035.base = 0;
TMP1015[0] = &TMP808[1];
NTI261007.size = sizeof(NU8);
NTI261007.kind = 14;
NTI261007.base = 0;
NTI261007.flags = 3;
for (TMP1018 = 0; TMP1018 < 4; TMP1018++) {
TMP808[TMP1018+2].kind = 1;
TMP808[TMP1018+2].offset = TMP1018;
TMP808[TMP1018+2].name = TMP1017[TMP1018];
TMP1016[TMP1018] = &TMP808[TMP1018+2];
}
TMP808[6].len = 4; TMP808[6].kind = 2; TMP808[6].sons = &TMP1016[0];
NTI261007.node = &TMP808[6];
TMP808[1].kind = 1;
TMP808[1].offset = offsetof(tparsers261035, Skin);
TMP808[1].typ = (&NTI261007);
TMP808[1].name = "skin";
TMP1015[1] = &TMP808[7];
TMP808[7].kind = 1;
TMP808[7].offset = offsetof(tparsers261035, Parser);
TMP808[7].typ = (&NTI245205);
TMP808[7].name = "parser";
TMP808[0].len = 2; TMP808[0].kind = 2; TMP808[0].sons = &TMP1015[0];
NTI261035.node = &TMP808[0];
}

