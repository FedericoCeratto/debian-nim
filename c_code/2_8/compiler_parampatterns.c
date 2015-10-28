/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode225809 Tnode225809;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype225847 Ttype225847;
typedef struct Tlineinfo190352 Tlineinfo190352;
typedef struct Tsym225841 Tsym225841;
typedef struct Tident198021 Tident198021;
typedef struct Tnodeseq225803 Tnodeseq225803;
typedef struct Tidobj198015 Tidobj198015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq225843 Ttypeseq225843;
typedef struct Tscope225835 Tscope225835;
typedef struct TY225944 TY225944;
typedef struct Tstrtable225813 Tstrtable225813;
typedef struct Tsymseq225811 Tsymseq225811;
typedef struct Tloc225823 Tloc225823;
typedef struct Ropeobj176009 Ropeobj176009;
typedef struct Tlib225827 Tlib225827;
typedef struct Cell48946 Cell48946;
typedef struct Cellseq48962 Cellseq48962;
typedef struct Gcheap51018 Gcheap51018;
typedef struct Gcstack51016 Gcstack51016;
typedef struct Cellset48958 Cellset48958;
typedef struct Pagedesc48954 Pagedesc48954;
typedef struct Memregion30890 Memregion30890;
typedef struct Smallchunk30842 Smallchunk30842;
typedef struct Llchunk30884 Llchunk30884;
typedef struct Bigchunk30844 Bigchunk30844;
typedef struct Intset30817 Intset30817;
typedef struct Trunk30813 Trunk30813;
typedef struct Avlnode30888 Avlnode30888;
typedef struct Gcstat51014 Gcstat51014;
typedef struct TY90959 TY90959;
typedef struct Tinstantiation225831 Tinstantiation225831;
typedef struct Tlistentry140022 Tlistentry140022;
typedef struct Basechunk30840 Basechunk30840;
typedef struct Freecell30832 Freecell30832;
typedef struct TY225932 TY225932;
typedef NIM_BOOL TY306308[65];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo190352  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode225809  {
Ttype225847* typ;
Tlineinfo190352 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym225841* sym;
} S4;
struct {Tident198021* ident;
} S5;
struct {Tnodeseq225803* sons;
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
struct  Tidobj198015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable225813  {
NI counter;
Tsymseq225811* data;
};
struct  Tloc225823  {
NU8 k;
NU8 s;
NU16 flags;
Ttype225847* t;
Ropeobj176009* r;
Ropeobj176009* heaproot;
};
struct  Tsym225841  {
  Tidobj198015 Sup;
NU8 kind;
union{
struct {Ttypeseq225843* typeinstcache;
Tscope225835* typscope;
} S1;
struct {TY225944* procinstcache;
Tsym225841* gcunsafetyreason;
} S2;
struct {TY225944* usedgenerics;
Tstrtable225813 tab;
} S3;
struct {Tsym225841* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype225847* typ;
Tident198021* name;
Tlineinfo190352 info;
Tsym225841* owner;
NU32 flags;
Tnode225809* ast;
NU32 options;
NI position;
NI offset;
Tloc225823 loc;
Tlib225827* annex;
Tnode225809* constraint;
};
struct  Ttype225847  {
  Tidobj198015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq225843* sons;
Tnode225809* n;
Tsym225841* owner;
Tsym225841* sym;
Tsym225841* destructor;
Tsym225841* deepcopy;
Tsym225841* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc225823 loc;
};
struct  Cell48946  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48962  {
NI len;
NI cap;
Cell48946** d;
};
struct  Cellset48958  {
NI counter;
NI max;
Pagedesc48954* head;
Pagedesc48954** data;
};
typedef Smallchunk30842* TY30905[512];
typedef Trunk30813* Trunkbuckets30815[256];
struct  Intset30817  {
Trunkbuckets30815 data;
};
struct  Memregion30890  {
NI minlargeobj;
NI maxlargeobj;
TY30905 freesmallchunks;
Llchunk30884* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30844* freechunkslist;
Intset30817 chunkstarts;
Avlnode30888* root;
Avlnode30888* deleted;
Avlnode30888* last;
Avlnode30888* freeavlnodes;
};
struct  Gcstat51014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap51018  {
Gcstack51016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48962 zct;
Cellseq48962 decstack;
Cellset48958 cycleroots;
Cellseq48962 tempstack;
NI recgclock;
Memregion30890 region;
Gcstat51014 stat;
};
struct  Tident198021  {
  Tidobj198015 Sup;
NimStringDesc* s;
Tident198021* next;
NI h;
};
struct TY90959 {
NimStringDesc* Field0;
NI Field1;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope225835  {
NI depthlevel;
Tstrtable225813 symbols;
Tnodeseq225803* usingsyms;
Tscope225835* parent;
};
struct  Ropeobj176009  {
  TNimObject Sup;
Ropeobj176009* left;
Ropeobj176009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry140022  {
  TNimObject Sup;
Tlistentry140022* prev;
Tlistentry140022* next;
};
struct  Tlib225827  {
  Tlistentry140022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj176009* name;
Tnode225809* path;
};
struct  Gcstack51016  {
Gcstack51016* prev;
Gcstack51016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY30821[16];
struct  Pagedesc48954  {
Pagedesc48954* next;
NI key;
TY30821 bits;
};
struct  Basechunk30840  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30842  {
  Basechunk30840 Sup;
Smallchunk30842* next;
Smallchunk30842* prev;
Freecell30832* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30884  {
NI size;
NI acc;
Llchunk30884* next;
};
struct  Bigchunk30844  {
  Basechunk30840 Sup;
Bigchunk30844* next;
Bigchunk30844* prev;
NI align;
NF data;
};
struct  Trunk30813  {
Trunk30813* next;
NI key;
TY30821 bits;
};
typedef Avlnode30888* TY30895[2];
struct  Avlnode30888  {
TY30895 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation225831  {
Tsym225841* sym;
Ttypeseq225843* concretetypes;
TY225932* usedby;
NI compilesid;
};
struct  Freecell30832  {
Freecell30832* next;
NI zerofield;
};
struct Tnodeseq225803 {
  TGenericSeq Sup;
  Tnode225809* data[SEQ_DECL_SIZE];
};
struct Ttypeseq225843 {
  TGenericSeq Sup;
  Ttype225847* data[SEQ_DECL_SIZE];
};
struct TY225944 {
  TGenericSeq Sup;
  Tinstantiation225831* data[SEQ_DECL_SIZE];
};
struct Tsymseq225811 {
  TGenericSeq Sup;
  Tsym225841* data[SEQ_DECL_SIZE];
};
struct TY225932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isatom_230904)(Tnode225809* n);
N_NIMCALL(NU8, isassignable_306056)(Tsym225841* owner, Tnode225809* n, NIM_BOOL isunsafeaddr);
N_NIMCALL(Ttype225847*, skiptypes_229167)(Ttype225847* t, NU64 kinds);
N_NIMCALL(NIM_BOOL, comparetypes_262047)(Ttype225847* x, Ttype225847* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, getmagic_254417)(Tnode225809* op);
N_NIMCALL(Tnode225809*, lastson_228406)(Tnode225809* n);
N_NIMCALL(NU8, checkforsideeffects_305869)(Tnode225809* n);
static N_INLINE(NIM_BOOL, isroutine_230763)(Tsym225841* s);
static N_INLINE(NI, len_226098)(Tnode225809* n);
N_NIMCALL(Tnode225809*, newnodei_227351)(NU8 kind, Tlineinfo190352 info);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell48946*, usrtocell_52646)(void* usr);
static N_INLINE(void, rtladdzct_54204)(Cell48946* c);
N_NOINLINE(void, addzct_52617)(Cellseq48962* s, Cell48946* c);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, compileconstraints_305113)(Tnode225809* p, NimStringDesc** result);
N_NIMCALL(void, patternerror_305051)(Tnode225809* n);
N_NIMCALL(void, localerror_196128)(Tlineinfo190352 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_247059)(Tnode225809* n, NU8 renderflags);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(void, add_305061)(NimStringDesc** code, NU8 op);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(void, internalerror_196191)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_196279)(TY90959 x);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_86859, TNimType* typ);
N_NIMCALL(void, internalerror_196172)(Tlineinfo190352 info, NimStringDesc* errmsg);
STRING_LITERAL(TMP3255, "|", 1);
STRING_LITERAL(TMP3256, "&", 1);
STRING_LITERAL(TMP3257, "~", 1);
STRING_LITERAL(TMP3258, "atom", 4);
STRING_LITERAL(TMP3259, "lit", 3);
STRING_LITERAL(TMP3260, "sym", 3);
STRING_LITERAL(TMP3261, "ident", 5);
STRING_LITERAL(TMP3262, "call", 4);
STRING_LITERAL(TMP3263, "alias", 5);
STRING_LITERAL(TMP3264, "noalias", 7);
STRING_LITERAL(TMP3265, "lvalue", 6);
STRING_LITERAL(TMP3266, "local", 5);
STRING_LITERAL(TMP3267, "sideeffect", 10);
STRING_LITERAL(TMP3268, "nosideeffect", 12);
STRING_LITERAL(TMP3270, "compiler/parampatterns.nim", 26);
NIM_CONST TY90959 TMP3269 = {((NimStringDesc*) &TMP3270),
((NI) 100)}
;
NIM_CONST TY90959 TMP3271 = {((NimStringDesc*) &TMP3270),
((NI) 107)}
;
STRING_LITERAL(TMP3272, "parameter pattern too complex", 29);
extern Gcheap51018 gch_51059;
extern TNimType NTI225441; /* TSymKind */
extern TNimType NTI225029; /* TNodeKind */

static N_INLINE(NIM_BOOL, isatom_230904)(Tnode225809* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU8, isassignable_306056)(Tsym225841* owner, Tnode225809* n, NIM_BOOL isunsafeaddr) {
	NU8 result;
	result = 0;
	result = ((NU8) 0);
	switch ((*n).kind) {
	case ((NU8) 3):
	{
		NU32 kinds;
		{
			if (!isunsafeaddr) goto LA4;
			kinds = 2856;
		}
		goto LA2;
		LA4: ;
		{
			kinds = 2336;
		}
		LA2: ;
		{
			if (!((kinds &(1<<(((*(*n).kindU.S4.sym).kind)&31)))!=0)) goto LA9;
			{
				NIM_BOOL LOC13;
				NIM_BOOL LOC14;
				LOC13 = 0;
				LOC14 = 0;
				LOC14 = !((owner == NIM_NIL));
				if (!(LOC14)) goto LA15;
				LOC14 = ((*owner).Sup.id == (*(*(*n).kindU.S4.sym).owner).Sup.id);
				LA15: ;
				LOC13 = LOC14;
				if (!(LOC13)) goto LA16;
				LOC13 = !((((*(*n).kindU.S4.sym).flags &(1<<((((NU8) 3))&31)))!=0));
				LA16: ;
				if (!LOC13) goto LA17;
				result = ((NU8) 2);
			}
			goto LA11;
			LA17: ;
			{
				result = ((NU8) 1);
			}
			LA11: ;
		}
		goto LA7;
		LA9: ;
		{
			NIM_BOOL LOC21;
			LOC21 = 0;
			LOC21 = ((*(*n).kindU.S4.sym).kind == ((NU8) 3));
			if (!(LOC21)) goto LA22;
			LOC21 = ((*(*(*n).kindU.S4.sym).typ).kind == ((NU8) 23));
			LA22: ;
			if (!LOC21) goto LA23;
			result = ((NU8) 1);
		}
		goto LA7;
		LA23: ;
		{
			Ttype225847* t;
			if (!((*(*n).kindU.S4.sym).kind == ((NU8) 7))) goto LA26;
			t = skiptypes_229167((*(*n).kindU.S4.sym).typ, 256);
			{
				if (!((*t).kind == ((NU8) 23))) goto LA30;
				result = ((NU8) 4);
			}
			LA30: ;
		}
		goto LA7;
		LA26: ;
		LA7: ;
	}
	break;
	case ((NU8) 45):
	{
		{
			Ttype225847* LOC35;
			LOC35 = 0;
			LOC35 = skiptypes_229167((*(*n).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((*LOC35).kind == ((NU8) 23) || (*LOC35).kind == ((NU8) 21) || (*LOC35).kind == ((NU8) 22))) goto LA36;
			result = ((NU8) 1);
		}
		goto LA33;
		LA36: ;
		{
			result = isassignable_306056(owner, (*n).kindU.S6.sons->data[((NI) 0)], isunsafeaddr);
		}
		LA33: ;
		{
			NIM_BOOL LOC41;
			LOC41 = 0;
			LOC41 = !((result == ((NU8) 0)));
			if (!(LOC41)) goto LA42;
			LOC41 = (((*(*(*n).kindU.S6.sons->data[((NI) 1)]).kindU.S4.sym).flags &(1<<((((NU8) 18))&31)))!=0);
			LA42: ;
			if (!LOC41) goto LA43;
			result = ((NU8) 3);
		}
		LA43: ;
	}
	break;
	case ((NU8) 42):
	{
		{
			Ttype225847* LOC48;
			LOC48 = 0;
			LOC48 = skiptypes_229167((*(*n).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((*LOC48).kind == ((NU8) 23) || (*LOC48).kind == ((NU8) 21) || (*LOC48).kind == ((NU8) 22))) goto LA49;
			result = ((NU8) 1);
		}
		goto LA46;
		LA49: ;
		{
			result = isassignable_306056(owner, (*n).kindU.S6.sons->data[((NI) 0)], isunsafeaddr);
		}
		LA46: ;
	}
	break;
	case ((NU8) 58):
	case ((NU8) 59):
	case ((NU8) 60):
	{
		{
			Ttype225847* LOC55;
			LOC55 = 0;
			LOC55 = skiptypes_229167((*n).typ, IL64(211106247256064));
			if (!((*LOC55).kind == ((NU8) 27) || (*LOC55).kind == ((NU8) 18) || (*LOC55).kind == ((NU8) 17))) goto LA56;
			result = isassignable_306056(owner, (*n).kindU.S6.sons->data[((NI) 1)], isunsafeaddr);
		}
		goto LA53;
		LA56: ;
		{
			NIM_BOOL LOC59;
			LOC59 = 0;
			LOC59 = comparetypes_262047((*n).typ, (*(*n).kindU.S6.sons->data[((NI) 1)]).typ, ((NU8) 1), 0);
			if (!LOC59) goto LA60;
			result = isassignable_306056(owner, (*n).kindU.S6.sons->data[((NI) 1)], isunsafeaddr);
		}
		goto LA53;
		LA60: ;
		LA53: ;
	}
	break;
	case ((NU8) 65):
	case ((NU8) 47):
	case ((NU8) 64):
	{
		result = ((NU8) 1);
	}
	break;
	case ((NU8) 67):
	case ((NU8) 66):
	case ((NU8) 46):
	{
		result = isassignable_306056(owner, (*n).kindU.S6.sons->data[((NI) 0)], isunsafeaddr);
	}
	break;
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		{
			NU8 LOC67;
			LOC67 = 0;
			LOC67 = getmagic_254417(n);
			if (!(LOC67 == ((NU8) 4) || LOC67 == ((NU8) 138))) goto LA68;
			result = isassignable_306056(owner, (*n).kindU.S6.sons->data[((NI) 1)], isunsafeaddr);
		}
		LA68: ;
	}
	break;
	case ((NU8) 115):
	case ((NU8) 126):
	{
		{
			Tnode225809* LOC75;
			if (!!(((*n).typ == NIM_NIL))) goto LA73;
			LOC75 = 0;
			LOC75 = lastson_228406(n);
			result = isassignable_306056(owner, LOC75, isunsafeaddr);
		}
		LA73: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, isroutine_230763)(Tsym225841* s) {
	NIM_BOOL result;
	result = 0;
	result = ((520192 &(1<<(((*s).kind)&31)))!=0);
	return result;
}

static N_INLINE(NI, len_226098)(Tnode225809* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, checkforsideeffects_305869)(Tnode225809* n) {
	NU8 result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		Tnode225809* op;
		op = (*n).kindU.S6.sons->data[((NI) 0)];
		{
			NIM_BOOL LOC4;
			Tsym225841* s;
			LOC4 = 0;
			LOC4 = ((*op).kind == ((NU8) 3));
			if (!(LOC4)) goto LA5;
			LOC4 = isroutine_230763((*op).kindU.S4.sym);
			LA5: ;
			if (!LOC4) goto LA6;
			s = (*op).kindU.S4.sym;
			{
				if (!(((*s).flags &(1<<((((NU8) 11))&31)))!=0)) goto LA10;
				result = ((NU8) 1);
				goto BeforeRet;
			}
			LA10: ;
			result = ((NU8) 2);
		}
		goto LA2;
		LA6: ;
		{
			if (!(((*(*op).typ).flags &(1<<((((NU8) 1))&31)))!=0)) goto LA13;
			result = ((NU8) 2);
		}
		goto LA2;
		LA13: ;
		{
			result = ((NU8) 1);
			goto BeforeRet;
		}
		LA2: ;
		{
			NI i_305927;
			NI HEX3Atmp_306007;
			NI LOC17;
			NI res_306010;
			i_305927 = 0;
			HEX3Atmp_306007 = 0;
			LOC17 = 0;
			LOC17 = len_226098(n);
			HEX3Atmp_306007 = (LOC17 - 1);
			res_306010 = ((NI) 0);
			{
				while (1) {
					NU8 ret;
					if (!(res_306010 <= HEX3Atmp_306007)) goto LA19;
					i_305927 = res_306010;
					ret = checkforsideeffects_305869((*n).kindU.S6.sons->data[i_305927]);
					{
						if (!(ret == ((NU8) 1))) goto LA22;
						result = ret;
						goto BeforeRet;
					}
					goto LA20;
					LA22: ;
					{
						NIM_BOOL LOC25;
						LOC25 = 0;
						LOC25 = (ret == ((NU8) 0));
						if (!(LOC25)) goto LA26;
						LOC25 = (result == ((NU8) 2));
						LA26: ;
						if (!LOC25) goto LA27;
						result = ((NU8) 0);
					}
					goto LA20;
					LA27: ;
					LA20: ;
					res_306010 += ((NI) 1);
				} LA19: ;
			}
		}
	}
	break;
	case ((NU8) 0) ... ((NU8) 23):
	{
		result = ((NU8) 2);
	}
	break;
	default:
	{
		result = ((NU8) 2);
		{
			NI i_305976;
			NI HEX3Atmp_306015;
			NI LOC32;
			NI res_306018;
			i_305976 = 0;
			HEX3Atmp_306015 = 0;
			LOC32 = 0;
			LOC32 = len_226098(n);
			HEX3Atmp_306015 = (LOC32 - 1);
			res_306018 = ((NI) 0);
			{
				while (1) {
					NU8 ret;
					if (!(res_306018 <= HEX3Atmp_306015)) goto LA34;
					i_305976 = res_306018;
					ret = checkforsideeffects_305869((*n).kindU.S6.sons->data[i_305976]);
					{
						if (!(ret == ((NU8) 1))) goto LA37;
						result = ret;
						goto BeforeRet;
					}
					goto LA35;
					LA37: ;
					{
						NIM_BOOL LOC40;
						LOC40 = 0;
						LOC40 = (ret == ((NU8) 0));
						if (!(LOC40)) goto LA41;
						LOC40 = (result == ((NU8) 2));
						LA41: ;
						if (!LOC40) goto LA42;
						result = ((NU8) 0);
					}
					goto LA35;
					LA42: ;
					LA35: ;
					res_306018 += ((NI) 1);
				} LA34: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, matchnodekinds_306302)(Tnode225809* p, Tnode225809* n) {
	NIM_BOOL result;
	TY306308 stack;
	NI sp;
	NimStringDesc* code;
	NI pc;
	result = 0;
	stack[(((NI) 0))- 0] = NIM_TRUE;
	sp = ((NI) 1);
	code = (*p).kindU.S3.strval;
	pc = ((NI) 1);
	{
		while (1) {
			switch (((NU8) (((NU8)(code->data[pc]))))) {
			case ((NU8) 1):
			{
				goto LA1;
			}
			break;
			case ((NU8) 2):
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = stack[((NI)(sp - ((NI) 1)))- 0];
				if (LOC5) goto LA6;
				LOC5 = stack[((NI)(sp - ((NI) 2)))- 0];
				LA6: ;
				stack[((NI)(sp - ((NI) 2)))- 0] = LOC5;
				sp -= ((NI) 1);
			}
			break;
			case ((NU8) 3):
			{
				NIM_BOOL LOC8;
				LOC8 = 0;
				LOC8 = stack[((NI)(sp - ((NI) 1)))- 0];
				if (!(LOC8)) goto LA9;
				LOC8 = stack[((NI)(sp - ((NI) 2)))- 0];
				LA9: ;
				stack[((NI)(sp - ((NI) 2)))- 0] = LOC8;
				sp -= ((NI) 1);
			}
			break;
			case ((NU8) 4):
			{
				stack[((NI)(sp - ((NI) 1)))- 0] = !(stack[((NI)(sp - ((NI) 1)))- 0]);
			}
			break;
			case ((NU8) 5):
			{
				stack[(sp)- 0] = ((*n).kind == ((NU8) 3));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 6):
			{
				stack[(sp)- 0] = isatom_230904(n);
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 7):
			{
				stack[(sp)- 0] = ((*n).kind >= ((NU8) 5) && (*n).kind <= ((NU8) 23));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 8):
			{
				stack[(sp)- 0] = ((*n).kind == ((NU8) 2));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 9):
			{
				stack[(sp)- 0] = ((*n).kind == ((NU8) 27) || (*n).kind == ((NU8) 29) || (*n).kind == ((NU8) 30) || (*n).kind == ((NU8) 31) || (*n).kind == ((NU8) 26) || (*n).kind == ((NU8) 28) || (*n).kind == ((NU8) 32));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 10):
			{
				NU8 kind;
				NIM_BOOL LOC17;
				kind = ((NU8) (((NU8)(code->data[(NI)(pc + ((NI) 1))]))));
				LOC17 = 0;
				LOC17 = ((*n).kind == ((NU8) 3));
				if (!(LOC17)) goto LA18;
				LOC17 = ((*(*n).kindU.S4.sym).kind == kind);
				LA18: ;
				stack[(sp)- 0] = LOC17;
				sp += ((NI) 1);
				pc += ((NI) 1);
			}
			break;
			case ((NU8) 11):
			{
				NU8 kind;
				kind = ((NU8) (((NU8)(code->data[(NI)(pc + ((NI) 1))]))));
				stack[(sp)- 0] = ((*n).kind == kind);
				sp += ((NI) 1);
				pc += ((NI) 1);
			}
			break;
			case ((NU8) 12):
			{
				NU8 LOC21;
				LOC21 = 0;
				LOC21 = isassignable_306056(NIM_NIL, n, NIM_FALSE);
				stack[(sp)- 0] = ((6 &(1<<((LOC21)&7)))!=0);
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 13):
			{
				NU8 LOC23;
				LOC23 = 0;
				LOC23 = isassignable_306056(NIM_NIL, n, NIM_FALSE);
				stack[(sp)- 0] = (LOC23 == ((NU8) 2));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 14):
			{
				NU8 LOC25;
				LOC25 = 0;
				LOC25 = checkforsideeffects_305869(n);
				stack[(sp)- 0] = (LOC25 == ((NU8) 1));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 15):
			{
				NU8 LOC27;
				LOC27 = 0;
				LOC27 = checkforsideeffects_305869(n);
				stack[(sp)- 0] = !((LOC27 == ((NU8) 1)));
				sp += ((NI) 1);
			}
			break;
			}
			pc += ((NI) 1);
		}
	} LA1: ;
	result = stack[((NI)(sp - ((NI) 1)))- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, islvalue_306281)(Tnode225809* n) {
	NIM_BOOL result;
	NU8 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = isassignable_306056(NIM_NIL, n, NIM_FALSE);
	result = ((22 &(1<<((LOC1)&7)))!=0);
	return result;
}

static N_INLINE(Cell48946*, usrtocell_52646)(void* usr) {
	Cell48946* result;
	result = 0;
	result = ((Cell48946*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell48946))))));
	return result;
}

static N_INLINE(void, rtladdzct_54204)(Cell48946* c) {
	addzct_52617((&gch_51059.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell48946* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_52646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48946* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_52646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_54204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, patternerror_305051)(Tnode225809* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_247059(n, 4);
	localerror_196128((*n).info, ((NU16) 1), LOC1);
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, add_305061)(NimStringDesc** code, NU8 op) {
	(*code) = addChar((*code), ((NIM_CHAR) (((NI) (op)))));
}

N_NIMCALL(void, compileconstraints_305113)(Tnode225809* p, NimStringDesc** result) {
{	switch ((*p).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		Tident198021* op;
		{
			if (!!(((*(*p).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2)))) goto LA4;
			patternerror_305051((*p).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA4: ;
		op = (*(*p).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
		{
			NI LOC8;
			LOC8 = 0;
			LOC8 = len_226098(p);
			if (!(LOC8 == ((NI) 3))) goto LA9;
			{
				NIM_BOOL LOC13;
				LOC13 = 0;
				LOC13 = eqStrings((*op).s, ((NimStringDesc*) &TMP3255));
				if (LOC13) goto LA14;
				LOC13 = ((*op).Sup.id == ((NI) 49));
				LA14: ;
				if (!LOC13) goto LA15;
				compileconstraints_305113((*p).kindU.S6.sons->data[((NI) 1)], result);
				compileconstraints_305113((*p).kindU.S6.sons->data[((NI) 2)], result);
				add_305061(result, ((NU8) 2));
			}
			goto LA11;
			LA15: ;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = eqStrings((*op).s, ((NimStringDesc*) &TMP3256));
				if (LOC18) goto LA19;
				LOC18 = ((*op).Sup.id == ((NI) 2));
				LA19: ;
				if (!LOC18) goto LA20;
				compileconstraints_305113((*p).kindU.S6.sons->data[((NI) 1)], result);
				compileconstraints_305113((*p).kindU.S6.sons->data[((NI) 2)], result);
				add_305061(result, ((NU8) 3));
			}
			goto LA11;
			LA20: ;
			{
				patternerror_305051(p);
			}
			LA11: ;
		}
		goto LA6;
		LA9: ;
		{
			NIM_BOOL LOC24;
			NI LOC25;
			NIM_BOOL LOC27;
			LOC24 = 0;
			LOC25 = 0;
			LOC25 = len_226098(p);
			LOC24 = (LOC25 == ((NI) 2));
			if (!(LOC24)) goto LA26;
			LOC27 = 0;
			LOC27 = eqStrings((*op).s, ((NimStringDesc*) &TMP3257));
			if (LOC27) goto LA28;
			LOC27 = ((*op).Sup.id == ((NI) 45));
			LA28: ;
			LOC24 = LOC27;
			LA26: ;
			if (!LOC24) goto LA29;
			compileconstraints_305113((*p).kindU.S6.sons->data[((NI) 1)], result);
			add_305061(result, ((NU8) 4));
		}
		goto LA6;
		LA29: ;
		{
			patternerror_305051(p);
		}
		LA6: ;
	}
	break;
	case ((NU8) 53):
	case ((NU8) 37):
	{
		{
			NI LOC35;
			LOC35 = 0;
			LOC35 = len_226098(p);
			if (!(LOC35 == ((NI) 1))) goto LA36;
			compileconstraints_305113((*p).kindU.S6.sons->data[((NI) 0)], result);
		}
		goto LA33;
		LA36: ;
		{
			patternerror_305051(p);
		}
		LA33: ;
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* spec;
		spec = nsuNormalize((*(*p).kindU.S5.ident).s);
		switch (hashString(spec) & 15) {
		case 1: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3268))) goto LA50;
break;
		case 3: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3264))) goto LA46;
if (eqStrings(spec, ((NimStringDesc*) &TMP3265))) goto LA47;
if (eqStrings(spec, ((NimStringDesc*) &TMP3267))) goto LA49;
break;
		case 4: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3260))) goto LA42;
break;
		case 6: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3261))) goto LA43;
if (eqStrings(spec, ((NimStringDesc*) &TMP3266))) goto LA48;
break;
		case 11: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3258))) goto LA40;
break;
		case 12: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3259))) goto LA41;
break;
		case 13: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3262))) goto LA44;
break;
		case 14: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3263))) goto LA45;
break;
		}
		goto LA51;
		LA40: ;
		{
			add_305061(result, ((NU8) 6));
		}
		goto LA52;
		LA41: ;
		{
			add_305061(result, ((NU8) 7));
		}
		goto LA52;
		LA42: ;
		{
			add_305061(result, ((NU8) 5));
		}
		goto LA52;
		LA43: ;
		{
			add_305061(result, ((NU8) 8));
		}
		goto LA52;
		LA44: ;
		{
			add_305061(result, ((NU8) 9));
		}
		goto LA52;
		LA45: ;
		{
			(*result)->data[((NI) 0)] = 2;
		}
		goto LA52;
		LA46: ;
		{
			(*result)->data[((NI) 0)] = 3;
		}
		goto LA52;
		LA47: ;
		{
			add_305061(result, ((NU8) 12));
		}
		goto LA52;
		LA48: ;
		{
			add_305061(result, ((NU8) 13));
		}
		goto LA52;
		LA49: ;
		{
			add_305061(result, ((NU8) 14));
		}
		goto LA52;
		LA50: ;
		{
			add_305061(result, ((NU8) 15));
		}
		goto LA52;
		LA51: ;
		{
			{
				NimStringDesc* LOC69;
				if (!NIM_FALSE) goto LA67;
				LOC69 = 0;
				LOC69 = HEX24_196279(TMP3269);
				internalerror_196191(LOC69);
			}
			LA67: ;
			{
				NU8 i_305423;
				NI res_305644;
				i_305423 = 0;
				res_305644 = ((NI) 0);
				{
					while (1) {
						if (!(res_305644 <= ((NI) 25))) goto LA72;
						i_305423 = ((NU8) (res_305644));
						{
							NimStringDesc* LOC75;
							NI LOC76;
							LOC75 = 0;
							LOC75 = copyStr(reprEnum(i_305423, (&NTI225441)), ((NI) 2));
							LOC76 = 0;
							LOC76 = nsuCmpIgnoreStyle(LOC75, spec);
							if (!(LOC76 == ((NI) 0))) goto LA77;
							add_305061(result, ((NU8) 10));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_305423)))));
							goto BeforeRet;
						}
						LA77: ;
						res_305644 += ((NI) 1);
					} LA72: ;
				}
			}
			{
				NimStringDesc* LOC83;
				if (!NIM_FALSE) goto LA81;
				LOC83 = 0;
				LOC83 = HEX24_196279(TMP3271);
				internalerror_196191(LOC83);
			}
			LA81: ;
			{
				NU8 i_305623;
				NI res_305652;
				i_305623 = 0;
				res_305652 = ((NI) 0);
				{
					while (1) {
						if (!(res_305652 <= ((NI) 158))) goto LA86;
						i_305623 = ((NU8) (res_305652));
						{
							NI LOC89;
							LOC89 = 0;
							LOC89 = nsuCmpIgnoreStyle(reprEnum(i_305623, (&NTI225029)), spec);
							if (!(LOC89 == ((NI) 0))) goto LA90;
							add_305061(result, ((NU8) 11));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_305623)))));
							goto BeforeRet;
						}
						LA90: ;
						res_305652 += ((NI) 1);
					} LA86: ;
				}
			}
			patternerror_305051(p);
		}
		LA52: ;
	}
	break;
	default:
	{
		patternerror_305051(p);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(Tnode225809*, semnodekindconstraints_305679)(Tnode225809* p) {
	Tnode225809* result;
	result = 0;
	result = newnodei_227351(((NU8) 20), (*p).info);
	asgnRefNoCycle((void**) (&(*result).kindU.S3.strval), rawNewString(((NI) 10)));
	(*result).kindU.S3.strval = addChar((*result).kindU.S3.strval, 1);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_226098(p);
		if (!(((NI) 2) <= LOC3)) goto LA4;
		{
			NI i_305831;
			NI HEX3Atmp_305839;
			NI LOC7;
			NI res_305842;
			i_305831 = 0;
			HEX3Atmp_305839 = 0;
			LOC7 = 0;
			LOC7 = len_226098(p);
			HEX3Atmp_305839 = (LOC7 - 1);
			res_305842 = ((NI) 1);
			{
				while (1) {
					if (!(res_305842 <= HEX3Atmp_305839)) goto LA9;
					i_305831 = res_305842;
					compileconstraints_305113((*p).kindU.S6.sons->data[i_305831], (&(*result).kindU.S3.strval));
					res_305842 += ((NI) 1);
				} LA9: ;
			}
		}
		{
			if (!(((NI) 63) < ((*result).kindU.S3.strval ? (*result).kindU.S3.strval->Sup.len : 0))) goto LA12;
			internalerror_196172((*p).info, ((NimStringDesc*) &TMP3272));
		}
		LA12: ;
	}
	goto LA1;
	LA4: ;
	{
		patternerror_305051(p);
	}
	LA1: ;
	add_305061((&(*result).kindU.S3.strval), ((NU8) 1));
	return result;
}

N_NIMCALL(NU8, whichalias_305080)(Tsym225841* p) {
	NU8 result;
	result = 0;
	{
		if (!!(((*p).constraint == NIM_NIL))) goto LA3;
		result = ((NU8) (((NU8)((*(*p).constraint).kindU.S3.strval->data[((NI) 0)]))));
	}
	goto LA1;
	LA3: ;
	{
		result = ((NU8) 1);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsDatInit000)(void) {
}
