/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsym226846 tsym226846;
typedef struct tnode226816 tnode226816;
typedef struct tpass287017 tpass287017;
typedef struct tpasscontext287005 tpasscontext287005;
typedef struct trodreader277030 trodreader277030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tllstream212204 tllstream212204;
typedef struct tparsers261035 tparsers261035;
typedef struct tparser245205 tparser245205;
typedef struct tlexer216190 tlexer216190;
typedef struct tbaselexer214024 tbaselexer214024;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttoken216186 ttoken216186;
typedef struct tident201021 tident201021;
typedef struct tidobj201015 tidobj201015;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct ttype226852 ttype226852;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tlib226834 tlib226834;
typedef struct TY119808 TY119808;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct TY517908 TY517908;
typedef struct TY226936 TY226936;
typedef struct tindex277028 tindex277028;
typedef struct tiitable236274 tiitable236274;
typedef struct tiipairseq236272 tiipairseq236272;
typedef struct tiipair236270 tiipair236270;
typedef struct tidtable226864 tidtable226864;
typedef struct tidpairseq226862 tidpairseq226862;
typedef struct tidpair226860 tidpair226860;
typedef struct memfile275208 memfile275208;
typedef struct tlistentry127022 tlistentry127022;
typedef N_NIMCALL_PTR(tsym226846*, TY287064) (tsym226846* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode226816*, TY287069) (tsym226846* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tpasscontext287005*, tpassopen287009) (tsym226846* module);
typedef N_NIMCALL_PTR(tpasscontext287005*, tpassopencached287011) (tsym226846* module, trodreader277030* rd);
typedef N_NIMCALL_PTR(tnode226816*, tpassprocess287015) (tpasscontext287005* p, tnode226816* toplevelstmt);
typedef N_NIMCALL_PTR(tnode226816*, tpassclose287013) (tpasscontext287005* p, tnode226816* n);
struct tpass287017 {
tpassopen287009 Field0;
tpassopencached287011 Field1;
tpassprocess287015 Field2;
tpassclose287013 Field3;
};
typedef tpass287017 TY287197[10];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext287005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
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
typedef tpasscontext287005* tpasscontextarray287192[10];
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable226820  {
NI Counter;
tsymseq226818* Data;
};
struct  tloc226830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype226852* T;
trope178009* R;
trope178009* Heaproot;
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
struct  tllstream212204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct TY517908 {
tnode226816* Field0;
tnode226816* Field1;
};
struct  tiipair236270  {
NI Key;
NI Val;
};
struct  tiitable236274  {
NI Counter;
tiipairseq236272* Data;
};
struct  tindex277028  {
NI Lastidxkey;
NI Lastidxval;
tiitable236274 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair226860  {
tidobj201015* Key;
TNimObject* Val;
};
struct  tidtable226864  {
NI Counter;
tidpairseq226862* Data;
};
struct  memfile275208  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader277030  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY226936* Moddeps;
TY226936* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex277028 Index;
tindex277028 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable226864 Syms;
memfile275208 Memfile;
tsymseq226818* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib226834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode226816* Path;
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
struct TY119808 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq236272 {
  TGenericSeq Sup;
  tiipair236270 data[SEQ_DECL_SIZE];
};
struct tidpairseq226862 {
  TGenericSeq Sup;
  tidpair226860 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(void, openpasses_287326)(tpasscontext287005** a, tsym226846* module);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, tofullpath_198037)(NI32 fileidx);
N_NIMCALL(tllstream212204*, llstreamopen_212233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_198733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_261047)(tparsers261035* p, NI32 fileidx, tllstream212204* inputstream);
N_NIMCALL(void, processimplicits_287643)(TY119808* implicits, NU8 nodekind, tpasscontext287005** a);
N_NIMCALL(tnode226816*, newnodei_227138)(NU8 kind, tlineinfo196539 info);
N_NIMCALL(tnode226816*, newstrnode_227118)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_227287)(tnode226816* father, tnode226816* son);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_287483)(tnode226816* n, tpasscontext287005** a);
N_NIMCALL(tnode226816*, parsetoplevelstmt_261070)(tparsers261035* p);
N_NIMCALL(void, closeparsers_261056)(tparsers261035* p);
N_NIMCALL(void, closepasses_287436)(tpasscontext287005** a);
N_NIMCALL(void, idsynchronizationpoint_225458)(NI idrange);
N_NIMCALL(void, openpassescached_287372)(tpasscontext287005** a, tsym226846* module, trodreader277030* rd);
N_NIMCALL(tnode226816*, loadinitsection_277077)(trodreader277030* r);
static N_INLINE(NI, sonslen_227249)(tnode226816* n);
N_NIMCALL(void, processtoplevelstmtcached_287542)(tnode226816* n, tpasscontext287005** a);
N_NIMCALL(void, closepassescached_287589)(tpasscontext287005** a);
N_NIMCALL(void, carrypass_287235)(tpass287017 p, tsym226846* module, TY517908 m, TY517908* Result);
TY287064 gimportmodule_287068;
TY287069 gincludefile_287073;
TY287197 gpasses_287199;
NI gpasseslen_287200;
extern TNimType NTI3211; /* RootObj */
TNimType NTI287005; /* TPassContext */
extern TNimType NTI138; /* bool */
extern TNimType NTI261035; /* TParsers */
extern tlineinfo196539 gcmdlineinfo_197192;
extern TY119808* implicitimports_170284;
extern TY119808* implicitincludes_170306;

N_NIMCALL(void, openpasses_287326)(tpasscontext287005** a, tsym226846* module) {
	{
		NI i_287343;
		NI HEX3Atmp_287352;
		NI res_287355;
		i_287343 = 0;
		HEX3Atmp_287352 = 0;
		HEX3Atmp_287352 = (NI32)(gpasseslen_287200 - 1);
		res_287355 = 0;
		{
			while (1) {
				if (!(res_287355 <= HEX3Atmp_287352)) goto LA3;
				i_287343 = res_287355;
				{
					if (!!(gpasses_287199[(i_287343)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_287343)- 0]), gpasses_287199[(i_287343)- 0].Field0(module));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_287343)- 0]), NIM_NIL);
				}
				LA4: ;
				res_287355 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_287483)(tnode226816* n, tpasscontext287005** a) {
	NIM_BOOL result;
	tnode226816* m;
	result = 0;
	m = n;
	{
		NI i_287502;
		NI HEX3Atmp_287522;
		NI res_287525;
		i_287502 = 0;
		HEX3Atmp_287522 = 0;
		HEX3Atmp_287522 = (NI32)(gpasseslen_287200 - 1);
		res_287525 = 0;
		{
			while (1) {
				if (!(res_287525 <= HEX3Atmp_287522)) goto LA3;
				i_287502 = res_287525;
				{
					if (!!(gpasses_287199[(i_287502)- 0].Field2 == 0)) goto LA6;
					m = gpasses_287199[(i_287502)- 0].Field2(a[(i_287502)- 0], m);
					{
						if (!m == 0) goto LA10;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_287525 += 1;
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, processimplicits_287643)(TY119808* implicits, NU8 nodekind, tpasscontext287005** a) {
	{
		NimStringDesc* module_287662;
		NI i_287668;
		NI l_287670;
		module_287662 = 0;
		i_287668 = 0;
		l_287670 = implicits->Sup.len;
		{
			while (1) {
				tnode226816* importstmt;
				tnode226816* str;
				if (!(i_287668 < l_287670)) goto LA3;
				module_287662 = implicits->data[i_287668];
				importstmt = newnodei_227138(nodekind, gcmdlineinfo_197192);
				str = newstrnode_227118(((NU8) 20), module_287662);
				(*str).Info = gcmdlineinfo_197192;
				addson_227287(importstmt, str);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = processtoplevelstmt_287483(importstmt, a);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_287668 += 1;
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_287436)(tpasscontext287005** a) {
	tnode226816* m;
	m = NIM_NIL;
	{
		NI i_287453;
		NI HEX3Atmp_287463;
		NI res_287466;
		i_287453 = 0;
		HEX3Atmp_287463 = 0;
		HEX3Atmp_287463 = (NI32)(gpasseslen_287200 - 1);
		res_287466 = 0;
		{
			while (1) {
				if (!(res_287466 <= HEX3Atmp_287463)) goto LA3;
				i_287453 = res_287466;
				{
					if (!!(gpasses_287199[(i_287453)- 0].Field3 == 0)) goto LA6;
					m = gpasses_287199[(i_287453)- 0].Field3(a[(i_287453)- 0], m);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a[(i_287453)- 0]), NIM_NIL);
				res_287466 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_287372)(tpasscontext287005** a, tsym226846* module, trodreader277030* rd) {
	{
		NI i_287390;
		NI HEX3Atmp_287416;
		NI res_287419;
		i_287390 = 0;
		HEX3Atmp_287416 = 0;
		HEX3Atmp_287416 = (NI32)(gpasseslen_287200 - 1);
		res_287419 = 0;
		{
			while (1) {
				if (!(res_287419 <= HEX3Atmp_287416)) goto LA3;
				i_287390 = res_287419;
				{
					if (!!(gpasses_287199[(i_287390)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_287390)- 0]), gpasses_287199[(i_287390)- 0].Field1(module, rd));
					{
						if (!!((a[(i_287390)- 0] == NIM_NIL))) goto LA10;
						(*a[(i_287390)- 0]).Fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_287390)- 0]), NIM_NIL);
				}
				LA4: ;
				res_287419 += 1;
			} LA3: ;
		}
	}
}

static N_INLINE(NI, sonslen_227249)(tnode226816* n) {
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

N_NIMCALL(void, processtoplevelstmtcached_287542)(tnode226816* n, tpasscontext287005** a) {
	tnode226816* m;
	m = n;
	{
		NI i_287560;
		NI HEX3Atmp_287569;
		NI res_287572;
		i_287560 = 0;
		HEX3Atmp_287569 = 0;
		HEX3Atmp_287569 = (NI32)(gpasseslen_287200 - 1);
		res_287572 = 0;
		{
			while (1) {
				if (!(res_287572 <= HEX3Atmp_287569)) goto LA3;
				i_287560 = res_287572;
				{
					if (!!(gpasses_287199[(i_287560)- 0].Field1 == 0)) goto LA6;
					m = gpasses_287199[(i_287560)- 0].Field2(a[(i_287560)- 0], m);
				}
				LA6: ;
				res_287572 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_287589)(tpasscontext287005** a) {
	tnode226816* m;
	m = NIM_NIL;
	{
		NI i_287606;
		NI HEX3Atmp_287623;
		NI res_287626;
		i_287606 = 0;
		HEX3Atmp_287623 = 0;
		HEX3Atmp_287623 = (NI32)(gpasseslen_287200 - 1);
		res_287626 = 0;
		{
			while (1) {
				if (!(res_287626 <= HEX3Atmp_287623)) goto LA3;
				i_287606 = res_287626;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = !(gpasses_287199[(i_287606)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_287199[(i_287606)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m = gpasses_287199[(i_287606)- 0].Field3(a[(i_287606)- 0], m);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a[(i_287606)- 0]), NIM_NIL);
				res_287626 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_287056)(tsym226846* module, tllstream212204* stream, trodreader277030* rd) {
	tparsers261035 p;
	tpasscontextarray287192 a;
	tllstream212204* s;
	NI32 fileidx;
	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI261035));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	fileidx = ((NI32) ((*module).Position));
	{
		if (!(rd == NIM_NIL)) goto LA3;
		openpasses_287326(a, module);
		{
			NimStringDesc* filename;
			if (!(stream == NIM_NIL)) goto LA7;
			filename = tofullpath_198037(fileidx);
			s = llstreamopen_212233(filename, ((NU8) 0));
			{
				if (!(s == NIM_NIL)) goto LA11;
				rawmessage_198733(((NU16) 3), filename);
				goto BeforeRet;
			}
			LA11: ;
		}
		goto LA5;
		LA7: ;
		{
			s = stream;
		}
		LA5: ;
		{
			while (1) {
				openparsers_261047((&p), fileidx, s);
				{
					if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA18;
					processimplicits_287643(implicitimports_170284, ((NU8) 116), a);
					processimplicits_287643(implicitincludes_170306, ((NU8) 121), a);
				}
				LA18: ;
				{
					while (1) {
						tnode226816* n;
						n = parsetoplevelstmt_261070((&p));
						{
							if (!((*n).Kind == ((NU8) 1))) goto LA24;
							goto LA20;
						}
						LA24: ;
						{
							NIM_BOOL LOC28;
							LOC28 = 0;
							LOC28 = processtoplevelstmt_287483(n, a);
							if (!!(LOC28)) goto LA29;
							goto LA20;
						}
						LA29: ;
					}
				} LA20: ;
				closeparsers_261056((&p));
				{
					if (!!(((*s).Kind == ((NU8) 3)))) goto LA33;
					goto LA14;
				}
				LA33: ;
			}
		} LA14: ;
		closepasses_287436(a);
		idsynchronizationpoint_225458(1000);
	}
	goto LA1;
	LA3: ;
	{
		tnode226816* n;
		openpassescached_287372(a, module, rd);
		n = loadinitsection_277077(rd);
		{
			NI i_287802;
			NI HEX3Atmp_287826;
			NI LOC37;
			NI res_287829;
			i_287802 = 0;
			HEX3Atmp_287826 = 0;
			LOC37 = 0;
			LOC37 = sonslen_227249(n);
			HEX3Atmp_287826 = (NI32)(LOC37 - 1);
			res_287829 = 0;
			{
				while (1) {
					if (!(res_287829 <= HEX3Atmp_287826)) goto LA39;
					i_287802 = res_287829;
					processtoplevelstmtcached_287542((*n).kindU.S6.Sons->data[i_287802], a);
					res_287829 += 1;
				} LA39: ;
			}
		}
		closepassescached_287589(a);
	}
	LA1: ;
	BeforeRet: ;
}

N_NIMCALL(void, clearpasses_287206)(void) {
	gpasseslen_287200 = 0;
}

N_NIMCALL(void, registerpass_287214)(tpass287017 p) {
	gpasses_287199[(gpasseslen_287200)- 0] = p;
	gpasseslen_287200 += 1;
}

N_NIMCALL(NIM_BOOL, astneeded_287094)(tsym226846* s) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = ((12288 &(1<<(((*s).Kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		LOC5 = ((8454144 & (*s).Flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		LOC4 = !(((*(*s).Typ).Callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s).Ast).kindU.S6.Sons->data[2]).Kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		result = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		result = NIM_TRUE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, carrypass_287235)(tpass287017 p, tsym226846* module, TY517908 m, TY517908* Result) {
	tpasscontext287005* c;
	c = p.Field0(module);
	unsureAsgnRef((void**) (&(*Result).Field0), p.Field2(c, m.Field0));
	{
		if (!!((p.Field3 == NIM_NIL))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Field1), p.Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field1), m.Field1);
	}
	LA1: ;
}

N_NIMCALL(void, carrypasses_287257)(tnode226816* nodes, tsym226846* module, tpass287017* passes, NI passesLen0) {
	TY517908 passdata;
	memset((void*)(&passdata), 0, sizeof(passdata));
	passdata.Field0 = nodes;
	{
		tpass287017 pass_287305;
		NI i_287310;
		memset((void*)(&pass_287305), 0, sizeof(pass_287305));
		i_287310 = 0;
		{
			while (1) {
				TY517908 LOC4;
				if (!(i_287310 < passesLen0)) goto LA3;
				pass_287305 = passes[i_287310];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_287235(pass_287305, module, passdata, (&LOC4));
				passdata.Field0 = LOC4.Field0;
				passdata.Field1 = LOC4.Field1;
				i_287310 += 1;
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_passesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_passesDatInit)(void) {
static TNimNode TMP836[1];
NTI287005.size = sizeof(tpasscontext287005);
NTI287005.kind = 17;
NTI287005.base = (&NTI3211);
NTI287005.flags = 1;
TMP836[0].kind = 1;
TMP836[0].offset = offsetof(tpasscontext287005, Fromcache);
TMP836[0].typ = (&NTI138);
TMP836[0].name = "fromCache";
NTI287005.node = &TMP836[0];
}

