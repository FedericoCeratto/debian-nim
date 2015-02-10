/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode226816 tnode226816;
typedef struct tparser245205 tparser245205;
typedef struct ttype226852 ttype226852;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym226846 tsym226846;
typedef struct tident201021 tident201021;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct tlexer216190 tlexer216190;
typedef struct tbaselexer214024 tbaselexer214024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream212204 tllstream212204;
typedef struct ttoken216186 ttoken216186;
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
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
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
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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

N_NIMCALL(tnode226816*, parseall_250009)(tparser245205* p) {
	tnode226816* result;
	result = 0;
	result = NIM_NIL;
	return result;
}

N_NIMCALL(tnode226816*, parsetoplevelstmt_250020)(tparser245205* p) {
	tnode226816* result;
	result = 0;
	result = NIM_NIL;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_pbracesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_pbracesDatInit)(void) {
}

