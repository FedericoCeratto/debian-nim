/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsym225846 tsym225846;
typedef struct tnode225816 tnode225816;
typedef struct tpass286017 tpass286017;
typedef struct tpasscontext286005 tpasscontext286005;
typedef struct trodreader276030 trodreader276030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tllstream211204 tllstream211204;
typedef struct tparsers260035 tparsers260035;
typedef struct tparser244205 tparser244205;
typedef struct tlexer215190 tlexer215190;
typedef struct tbaselexer213024 tbaselexer213024;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttoken215186 ttoken215186;
typedef struct tident200021 tident200021;
typedef struct tidobj200015 tidobj200015;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct ttype225852 ttype225852;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tlib225834 tlib225834;
typedef struct TY120008 TY120008;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct TY516908 TY516908;
typedef struct TY225936 TY225936;
typedef struct tindex276028 tindex276028;
typedef struct tiitable235274 tiitable235274;
typedef struct tiipairseq235272 tiipairseq235272;
typedef struct tiipair235270 tiipair235270;
typedef struct tidtable225864 tidtable225864;
typedef struct tidpairseq225862 tidpairseq225862;
typedef struct tidpair225860 tidpair225860;
typedef struct memfile274208 memfile274208;
typedef struct tlistentry127022 tlistentry127022;
typedef N_NIMCALL_PTR(tsym225846*, TY286064) (tsym225846* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode225816*, TY286069) (tsym225846* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tpasscontext286005*, tpassopen286009) (tsym225846* module);
typedef N_NIMCALL_PTR(tpasscontext286005*, tpassopencached286011) (tsym225846* module, trodreader276030* rd);
typedef N_NIMCALL_PTR(tnode225816*, tpassprocess286015) (tpasscontext286005* p, tnode225816* toplevelstmt);
typedef N_NIMCALL_PTR(tnode225816*, tpassclose286013) (tpasscontext286005* p, tnode225816* n);
struct tpass286017 {
tpassopen286009 Field0;
tpassopencached286011 Field1;
tpassprocess286015 Field2;
tpassclose286013 Field3;
};
typedef tpass286017 TY286197[10];
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
struct  tpasscontext286005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tbaselexer213024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream211204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlineinfo195539  {
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
N_NIMCALL_PTR(void, ClPrc) (tlineinfo195539 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} terrorhandler215188;
struct  tlexer215190  {
  tbaselexer213024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
terrorhandler215188 Errorhandler;
};
struct  ttoken215186  {
NU8 Toktype;
NI Indent;
tident200021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser244205  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer215190 Lex;
ttoken215186 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers260035  {
NU8 Skin;
tparser244205 Parser;
};
typedef tpasscontext286005* tpasscontextarray286192[10];
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
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
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct TY516908 {
tnode225816* Field0;
tnode225816* Field1;
};
struct  tiipair235270  {
NI Key;
NI Val;
};
struct  tiitable235274  {
NI Counter;
tiipairseq235272* Data;
};
struct  tindex276028  {
NI Lastidxkey;
NI Lastidxval;
tiitable235274 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair225860  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable225864  {
NI Counter;
tidpairseq225862* Data;
};
struct  memfile274208  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader276030  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY225936* Moddeps;
TY225936* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex276028 Index;
tindex276028 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable225864 Syms;
memfile274208 Memfile;
tsymseq225818* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
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
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
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
struct TY120008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq235272 {
  TGenericSeq Sup;
  tiipair235270 data[SEQ_DECL_SIZE];
};
struct tidpairseq225862 {
  TGenericSeq Sup;
  tidpair225860 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(void, openpasses_286326)(tpasscontext286005** a, tsym225846* module);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, tofullpath_197037)(NI32 fileidx);
N_NIMCALL(tllstream211204*, llstreamopen_211233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_197733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_260047)(tparsers260035* p, NI32 fileidx, tllstream211204* inputstream);
N_NIMCALL(void, processimplicits_286643)(TY120008* implicits, NU8 nodekind, tpasscontext286005** a);
N_NIMCALL(tnode225816*, newnodei_226138)(NU8 kind, tlineinfo195539 info);
N_NIMCALL(tnode225816*, newstrnode_226118)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_226287)(tnode225816* father, tnode225816* son);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_286483)(tnode225816* n, tpasscontext286005** a);
N_NIMCALL(tnode225816*, parsetoplevelstmt_260070)(tparsers260035* p);
N_NIMCALL(void, closeparsers_260056)(tparsers260035* p);
N_NIMCALL(void, closepasses_286436)(tpasscontext286005** a);
N_NIMCALL(void, idsynchronizationpoint_224458)(NI idrange);
N_NIMCALL(void, openpassescached_286372)(tpasscontext286005** a, tsym225846* module, trodreader276030* rd);
N_NIMCALL(tnode225816*, loadinitsection_276077)(trodreader276030* r);
static N_INLINE(NI, sonslen_226249)(tnode225816* n);
N_NIMCALL(void, processtoplevelstmtcached_286542)(tnode225816* n, tpasscontext286005** a);
N_NIMCALL(void, closepassescached_286589)(tpasscontext286005** a);
N_NIMCALL(void, carrypass_286235)(tpass286017 p, tsym225846* module, TY516908 m, TY516908* Result);
TY286064 gimportmodule_286068;
TY286069 gincludefile_286073;
TY286197 gpasses_286199;
NI gpasseslen_286200;
extern TNimType NTI3211; /* RootObj */
TNimType NTI286005; /* TPassContext */
extern TNimType NTI138; /* bool */
extern TNimType NTI260035; /* TParsers */
extern tlineinfo195539 gcmdlineinfo_196192;
extern TY120008* implicitimports_169284;
extern TY120008* implicitincludes_169306;

N_NIMCALL(void, openpasses_286326)(tpasscontext286005** a, tsym225846* module) {
	{
		NI i_286343;
		NI HEX3Atmp_286352;
		NI res_286355;
		i_286343 = 0;
		HEX3Atmp_286352 = 0;
		HEX3Atmp_286352 = (NI32)(gpasseslen_286200 - 1);
		res_286355 = 0;
		{
			while (1) {
				if (!(res_286355 <= HEX3Atmp_286352)) goto LA3;
				i_286343 = res_286355;
				{
					if (!!(gpasses_286199[(i_286343)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_286343)- 0]), gpasses_286199[(i_286343)- 0].Field0(module));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_286343)- 0]), NIM_NIL);
				}
				LA4: ;
				res_286355 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_286483)(tnode225816* n, tpasscontext286005** a) {
	NIM_BOOL result;
	tnode225816* m;
	result = 0;
	m = n;
	{
		NI i_286502;
		NI HEX3Atmp_286522;
		NI res_286525;
		i_286502 = 0;
		HEX3Atmp_286522 = 0;
		HEX3Atmp_286522 = (NI32)(gpasseslen_286200 - 1);
		res_286525 = 0;
		{
			while (1) {
				if (!(res_286525 <= HEX3Atmp_286522)) goto LA3;
				i_286502 = res_286525;
				{
					if (!!(gpasses_286199[(i_286502)- 0].Field2 == 0)) goto LA6;
					m = gpasses_286199[(i_286502)- 0].Field2(a[(i_286502)- 0], m);
					{
						if (!m == 0) goto LA10;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_286525 += 1;
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, processimplicits_286643)(TY120008* implicits, NU8 nodekind, tpasscontext286005** a) {
	{
		NimStringDesc* module_286662;
		NI i_286668;
		NI l_286670;
		module_286662 = 0;
		i_286668 = 0;
		l_286670 = implicits->Sup.len;
		{
			while (1) {
				tnode225816* importstmt;
				tnode225816* str;
				if (!(i_286668 < l_286670)) goto LA3;
				module_286662 = implicits->data[i_286668];
				importstmt = newnodei_226138(nodekind, gcmdlineinfo_196192);
				str = newstrnode_226118(((NU8) 20), module_286662);
				(*str).Info = gcmdlineinfo_196192;
				addson_226287(importstmt, str);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = processtoplevelstmt_286483(importstmt, a);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_286668 += 1;
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_286436)(tpasscontext286005** a) {
	tnode225816* m;
	m = NIM_NIL;
	{
		NI i_286453;
		NI HEX3Atmp_286463;
		NI res_286466;
		i_286453 = 0;
		HEX3Atmp_286463 = 0;
		HEX3Atmp_286463 = (NI32)(gpasseslen_286200 - 1);
		res_286466 = 0;
		{
			while (1) {
				if (!(res_286466 <= HEX3Atmp_286463)) goto LA3;
				i_286453 = res_286466;
				{
					if (!!(gpasses_286199[(i_286453)- 0].Field3 == 0)) goto LA6;
					m = gpasses_286199[(i_286453)- 0].Field3(a[(i_286453)- 0], m);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a[(i_286453)- 0]), NIM_NIL);
				res_286466 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_286372)(tpasscontext286005** a, tsym225846* module, trodreader276030* rd) {
	{
		NI i_286390;
		NI HEX3Atmp_286416;
		NI res_286419;
		i_286390 = 0;
		HEX3Atmp_286416 = 0;
		HEX3Atmp_286416 = (NI32)(gpasseslen_286200 - 1);
		res_286419 = 0;
		{
			while (1) {
				if (!(res_286419 <= HEX3Atmp_286416)) goto LA3;
				i_286390 = res_286419;
				{
					if (!!(gpasses_286199[(i_286390)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_286390)- 0]), gpasses_286199[(i_286390)- 0].Field1(module, rd));
					{
						if (!!((a[(i_286390)- 0] == NIM_NIL))) goto LA10;
						(*a[(i_286390)- 0]).Fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_286390)- 0]), NIM_NIL);
				}
				LA4: ;
				res_286419 += 1;
			} LA3: ;
		}
	}
}

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

N_NIMCALL(void, processtoplevelstmtcached_286542)(tnode225816* n, tpasscontext286005** a) {
	tnode225816* m;
	m = n;
	{
		NI i_286560;
		NI HEX3Atmp_286569;
		NI res_286572;
		i_286560 = 0;
		HEX3Atmp_286569 = 0;
		HEX3Atmp_286569 = (NI32)(gpasseslen_286200 - 1);
		res_286572 = 0;
		{
			while (1) {
				if (!(res_286572 <= HEX3Atmp_286569)) goto LA3;
				i_286560 = res_286572;
				{
					if (!!(gpasses_286199[(i_286560)- 0].Field1 == 0)) goto LA6;
					m = gpasses_286199[(i_286560)- 0].Field2(a[(i_286560)- 0], m);
				}
				LA6: ;
				res_286572 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_286589)(tpasscontext286005** a) {
	tnode225816* m;
	m = NIM_NIL;
	{
		NI i_286606;
		NI HEX3Atmp_286623;
		NI res_286626;
		i_286606 = 0;
		HEX3Atmp_286623 = 0;
		HEX3Atmp_286623 = (NI32)(gpasseslen_286200 - 1);
		res_286626 = 0;
		{
			while (1) {
				if (!(res_286626 <= HEX3Atmp_286623)) goto LA3;
				i_286606 = res_286626;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = !(gpasses_286199[(i_286606)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_286199[(i_286606)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m = gpasses_286199[(i_286606)- 0].Field3(a[(i_286606)- 0], m);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a[(i_286606)- 0]), NIM_NIL);
				res_286626 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_286056)(tsym225846* module, tllstream211204* stream, trodreader276030* rd) {
	tparsers260035 p;
	tpasscontextarray286192 a;
	tllstream211204* s;
	NI32 fileidx;
	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI260035));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	fileidx = ((NI32) ((*module).Position));
	{
		if (!(rd == NIM_NIL)) goto LA3;
		openpasses_286326(a, module);
		{
			NimStringDesc* filename;
			if (!(stream == NIM_NIL)) goto LA7;
			filename = tofullpath_197037(fileidx);
			s = llstreamopen_211233(filename, ((NU8) 0));
			{
				if (!(s == NIM_NIL)) goto LA11;
				rawmessage_197733(((NU16) 3), filename);
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
				openparsers_260047((&p), fileidx, s);
				{
					if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA18;
					processimplicits_286643(implicitimports_169284, ((NU8) 116), a);
					processimplicits_286643(implicitincludes_169306, ((NU8) 121), a);
				}
				LA18: ;
				{
					while (1) {
						tnode225816* n;
						n = parsetoplevelstmt_260070((&p));
						{
							if (!((*n).Kind == ((NU8) 1))) goto LA24;
							goto LA20;
						}
						LA24: ;
						{
							NIM_BOOL LOC28;
							LOC28 = 0;
							LOC28 = processtoplevelstmt_286483(n, a);
							if (!!(LOC28)) goto LA29;
							goto LA20;
						}
						LA29: ;
					}
				} LA20: ;
				closeparsers_260056((&p));
				{
					if (!!(((*s).Kind == ((NU8) 3)))) goto LA33;
					goto LA14;
				}
				LA33: ;
			}
		} LA14: ;
		closepasses_286436(a);
		idsynchronizationpoint_224458(1000);
	}
	goto LA1;
	LA3: ;
	{
		tnode225816* n;
		openpassescached_286372(a, module, rd);
		n = loadinitsection_276077(rd);
		{
			NI i_286802;
			NI HEX3Atmp_286826;
			NI LOC37;
			NI res_286829;
			i_286802 = 0;
			HEX3Atmp_286826 = 0;
			LOC37 = 0;
			LOC37 = sonslen_226249(n);
			HEX3Atmp_286826 = (NI32)(LOC37 - 1);
			res_286829 = 0;
			{
				while (1) {
					if (!(res_286829 <= HEX3Atmp_286826)) goto LA39;
					i_286802 = res_286829;
					processtoplevelstmtcached_286542((*n).kindU.S6.Sons->data[i_286802], a);
					res_286829 += 1;
				} LA39: ;
			}
		}
		closepassescached_286589(a);
	}
	LA1: ;
	BeforeRet: ;
}

N_NIMCALL(void, clearpasses_286206)(void) {
	gpasseslen_286200 = 0;
}

N_NIMCALL(void, registerpass_286214)(tpass286017 p) {
	gpasses_286199[(gpasseslen_286200)- 0] = p;
	gpasseslen_286200 += 1;
}

N_NIMCALL(NIM_BOOL, astneeded_286094)(tsym225846* s) {
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

N_NIMCALL(void, carrypass_286235)(tpass286017 p, tsym225846* module, TY516908 m, TY516908* Result) {
	tpasscontext286005* c;
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

N_NIMCALL(void, carrypasses_286257)(tnode225816* nodes, tsym225846* module, tpass286017* passes, NI passesLen0) {
	TY516908 passdata;
	memset((void*)(&passdata), 0, sizeof(passdata));
	passdata.Field0 = nodes;
	{
		tpass286017 pass_286305;
		NI i_286310;
		memset((void*)(&pass_286305), 0, sizeof(pass_286305));
		i_286310 = 0;
		{
			while (1) {
				TY516908 LOC4;
				if (!(i_286310 < passesLen0)) goto LA3;
				pass_286305 = passes[i_286310];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_286235(pass_286305, module, passdata, (&LOC4));
				passdata.Field0 = LOC4.Field0;
				passdata.Field1 = LOC4.Field1;
				i_286310 += 1;
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_passesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_passesDatInit)(void) {
static TNimNode TMP834[1];
NTI286005.size = sizeof(tpasscontext286005);
NTI286005.kind = 17;
NTI286005.base = (&NTI3211);
NTI286005.flags = 1;
TMP834[0].kind = 1;
TMP834[0].offset = offsetof(tpasscontext286005, Fromcache);
TMP834[0].typ = (&NTI138);
TMP834[0].name = "fromCache";
NTI286005.node = &TMP834[0];
}

