/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
typedef struct Tnode223809 Tnode223809;
typedef struct Tparser239205 Tparser239205;
typedef struct Ttype223847 Ttype223847;
typedef struct Tlineinfo188352 Tlineinfo188352;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym223841 Tsym223841;
typedef struct Tident196021 Tident196021;
typedef struct Tnodeseq223803 Tnodeseq223803;
typedef struct Tlexer214185 Tlexer214185;
typedef struct Tbaselexer212024 Tbaselexer212024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream211204 Tllstream211204;
typedef struct Ttoken214181 Ttoken214181;
typedef struct Tidobj196015 Tidobj196015;
typedef struct Ttypeseq223843 Ttypeseq223843;
typedef struct Tloc223823 Tloc223823;
typedef struct Ropeobj174009 Ropeobj174009;
typedef struct Tscope223835 Tscope223835;
typedef struct TY223944 TY223944;
typedef struct Tstrtable223813 Tstrtable223813;
typedef struct Tsymseq223811 Tsymseq223811;
typedef struct Tlib223827 Tlib223827;
typedef struct Tinstantiation223831 Tinstantiation223831;
typedef struct Tlistentry139022 Tlistentry139022;
typedef struct TY223932 TY223932;
struct  Tlineinfo188352  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode223809  {
Ttype223847* typ;
Tlineinfo188352 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym223841* sym;
} S4;
struct {Tident196021* ident;
} S5;
struct {Tnodeseq223803* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tbaselexer212024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream211204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo188352 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler214183;
struct  Tlexer214185  {
  Tbaselexer212024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler214183 errorhandler;
};
struct  Ttoken214181  {
NU8 toktype;
NI indent;
Tident196021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser239205  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer214185 lex;
Ttoken214181 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tidobj196015  {
  TNimObject Sup;
NI id;
};
struct  Tloc223823  {
NU8 k;
NU8 s;
NU16 flags;
Ttype223847* t;
Ropeobj174009* r;
Ropeobj174009* heaproot;
};
struct  Ttype223847  {
  Tidobj196015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq223843* sons;
Tnode223809* n;
Tsym223841* owner;
Tsym223841* sym;
Tsym223841* destructor;
Tsym223841* deepcopy;
Tsym223841* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc223823 loc;
};
struct  Tstrtable223813  {
NI counter;
Tsymseq223811* data;
};
struct  Tsym223841  {
  Tidobj196015 Sup;
NU8 kind;
union{
struct {Ttypeseq223843* typeinstcache;
Tscope223835* typscope;
} S1;
struct {TY223944* procinstcache;
Tsym223841* gcunsafetyreason;
} S2;
struct {TY223944* usedgenerics;
Tstrtable223813 tab;
} S3;
struct {Tsym223841* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype223847* typ;
Tident196021* name;
Tlineinfo188352 info;
Tsym223841* owner;
NU32 flags;
Tnode223809* ast;
NU32 options;
NI position;
NI offset;
Tloc223823 loc;
Tlib223827* annex;
Tnode223809* constraint;
};
struct  Tident196021  {
  Tidobj196015 Sup;
NimStringDesc* s;
Tident196021* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tllstream211204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Ropeobj174009  {
  TNimObject Sup;
Ropeobj174009* left;
Ropeobj174009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope223835  {
NI depthlevel;
Tstrtable223813 symbols;
Tnodeseq223803* usingsyms;
Tscope223835* parent;
};
struct  Tlistentry139022  {
  TNimObject Sup;
Tlistentry139022* prev;
Tlistentry139022* next;
};
struct  Tlib223827  {
  Tlistentry139022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj174009* name;
Tnode223809* path;
};
struct  Tinstantiation223831  {
Tsym223841* sym;
Ttypeseq223843* concretetypes;
TY223932* usedby;
NI compilesid;
};
struct Tnodeseq223803 {
  TGenericSeq Sup;
  Tnode223809* data[SEQ_DECL_SIZE];
};
struct Ttypeseq223843 {
  TGenericSeq Sup;
  Ttype223847* data[SEQ_DECL_SIZE];
};
struct TY223944 {
  TGenericSeq Sup;
  Tinstantiation223831* data[SEQ_DECL_SIZE];
};
struct Tsymseq223811 {
  TGenericSeq Sup;
  Tsym223841* data[SEQ_DECL_SIZE];
};
struct TY223932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};

N_NIMCALL(Tnode223809*, parseall_244009)(Tparser239205* p) {
	Tnode223809* result;
	result = 0;
	result = NIM_NIL;
	return result;
}

N_NIMCALL(Tnode223809*, parsetoplevelstmt_244020)(Tparser239205* p) {
	Tnode223809* result;
	result = 0;
	result = NIM_NIL;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_pbracesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_pbracesDatInit000)(void) {
}
