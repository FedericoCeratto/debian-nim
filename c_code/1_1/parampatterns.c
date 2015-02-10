/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode226816 tnode226816;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype226852 ttype226852;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tsym226846 tsym226846;
typedef struct tident201021 tident201021;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tlib226834 tlib226834;
typedef struct tcell44733 tcell44733;
typedef struct tcellseq44749 tcellseq44749;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellset44745 tcellset44745;
typedef struct tpagedesc44741 tpagedesc44741;
typedef struct tmemregion27010 tmemregion27010;
typedef struct tsmallchunk26240 tsmallchunk26240;
typedef struct tllchunk27004 tllchunk27004;
typedef struct tbigchunk26242 tbigchunk26242;
typedef struct tintset26217 tintset26217;
typedef struct ttrunk26213 ttrunk26213;
typedef struct tavlnode27008 tavlnode27008;
typedef struct tgcstat46814 tgcstat46814;
typedef struct TY86345 TY86345;
typedef struct TY226936 TY226936;
typedef struct tlistentry129022 tlistentry129022;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef NIM_BOOL TY323386[65];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tcell44733  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44749  {
NI Len;
NI Cap;
tcell44733** D;
};
struct  tcellset44745  {
NI Counter;
NI Max;
tpagedesc44741* Head;
tpagedesc44741** Data;
};
typedef tsmallchunk26240* TY27022[512];
typedef ttrunk26213* ttrunkbuckets26215[256];
struct  tintset26217  {
ttrunkbuckets26215 Data;
};
struct  tmemregion27010  {
NI Minlargeobj;
NI Maxlargeobj;
TY27022 Freesmallchunks;
tllchunk27004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26242* Freechunkslist;
tintset26217 Chunkstarts;
tavlnode27008* Root;
tavlnode27008* Deleted;
tavlnode27008* Last;
tavlnode27008* Freeavlnodes;
};
struct  tgcstat46814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44749 Zct;
tcellseq44749 Decstack;
tcellset44745 Cycleroots;
tcellseq44749 Tempstack;
NI Recgclock;
tmemregion27010 Region;
tgcstat46814 Stat;
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
struct TY86345 {
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
typedef NI TY26220[16];
struct  tpagedesc44741  {
tpagedesc44741* Next;
NI Key;
TY26220 Bits;
};
struct  tbasechunk26238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26240  {
  tbasechunk26238 Sup;
tsmallchunk26240* Next;
tsmallchunk26240* Prev;
tfreecell26230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27004  {
NI Size;
NI Acc;
tllchunk27004* Next;
};
struct  tbigchunk26242  {
  tbasechunk26238 Sup;
tbigchunk26242* Next;
tbigchunk26242* Prev;
NI Align;
NF Data;
};
struct  ttrunk26213  {
ttrunk26213* Next;
NI Key;
TY26220 Bits;
};
typedef tavlnode27008* TY27014[2];
struct  tavlnode27008  {
TY27014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
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
static N_INLINE(NIM_BOOL, isatom_233962)(tnode226816* n);
N_NIMCALL(NU8, isassignable_323003)(tsym226846* owner, tnode226816* n);
N_NIMCALL(ttype226852*, skiptypes_231245)(ttype226852* t, NU64 kinds);
N_NIMCALL(NIM_BOOL, comparetypes_271571)(ttype226852* x, ttype226852* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU16, getmagic_262845)(tnode226816* op);
N_NIMCALL(NU8, checkforsideeffects_322747)(tnode226816* n);
static N_INLINE(NIM_BOOL, isroutine_233780)(tsym226846* s);
static N_INLINE(NI, len_227364)(tnode226816* n);
N_NIMCALL(tnode226816*, newnodei_227138)(NU8 kind, tlineinfo196539 info);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, compileconstraints_322129)(tnode226816* p, NimStringDesc** result);
N_NIMCALL(void, patternerror_322051)(tnode226816* n);
N_NIMCALL(void, localerror_198955)(tlineinfo196539 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_251058)(tnode226816* n, NU8 renderflags);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(void, add_322061)(NimStringDesc** code, NU8 op);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(void, internalerror_199006)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_199126)(TY86345 x_199130);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_82507, TNimType* typ);
N_NIMCALL(void, internalerror_198987)(tlineinfo196539 info, NimStringDesc* errmsg);
STRING_LITERAL(TMP3003, "|", 1);
STRING_LITERAL(TMP3004, "&", 1);
STRING_LITERAL(TMP3005, "~", 1);
STRING_LITERAL(TMP3006, "atom", 4);
STRING_LITERAL(TMP3007, "lit", 3);
STRING_LITERAL(TMP3008, "sym", 3);
STRING_LITERAL(TMP3009, "ident", 5);
STRING_LITERAL(TMP3010, "call", 4);
STRING_LITERAL(TMP3011, "alias", 5);
STRING_LITERAL(TMP3012, "noalias", 7);
STRING_LITERAL(TMP3013, "lvalue", 6);
STRING_LITERAL(TMP3014, "local", 5);
STRING_LITERAL(TMP3015, "sideeffect", 10);
STRING_LITERAL(TMP3016, "nosideeffect", 12);
STRING_LITERAL(TMP3018, "compiler/parampatterns.nim", 26);
NIM_CONST TY86345 TMP3017 = {((NimStringDesc*) &TMP3018),
100}
;
NIM_CONST TY86345 TMP3019 = {((NimStringDesc*) &TMP3018),
107}
;
STRING_LITERAL(TMP3020, "parameter pattern too complex", 29);
extern tgcheap46816 gch_46844;
extern TNimType NTI226445; /* TSymKind */
extern TNimType NTI226029; /* TNodeKind */

static N_INLINE(NIM_BOOL, isatom_233962)(tnode226816* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).Kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).Kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU8, isassignable_323003)(tsym226846* owner, tnode226816* n) {
	NU8 result;
	result = 0;
	result = ((NU8) 0);
	switch ((*n).Kind) {
	case ((NU8) 3):
	{
		{
			if (!((2336 &(1<<(((*(*n).kindU.S4.Sym).Kind)&31)))!=0)) goto LA4;
			{
				NIM_BOOL LOC8;
				NIM_BOOL LOC9;
				LOC8 = 0;
				LOC9 = 0;
				LOC9 = !((owner == NIM_NIL));
				if (!(LOC9)) goto LA10;
				LOC9 = ((*owner).Sup.Id == (*(*(*n).kindU.S4.Sym).Owner).Sup.Id);
				LA10: ;
				LOC8 = LOC9;
				if (!(LOC8)) goto LA11;
				LOC8 = !((((*(*n).kindU.S4.Sym).Flags &(1<<((((NU8) 3))&31)))!=0));
				LA11: ;
				if (!LOC8) goto LA12;
				result = ((NU8) 2);
			}
			goto LA6;
			LA12: ;
			{
				result = ((NU8) 1);
			}
			LA6: ;
		}
		LA4: ;
	}
	break;
	case ((NU8) 45):
	{
		{
			ttype226852* LOC18;
			LOC18 = 0;
			LOC18 = skiptypes_231245((*(*n).kindU.S6.Sons->data[0]).Typ, IL64(211106232576000));
			if (!((*LOC18).Kind == ((NU8) 23) || (*LOC18).Kind == ((NU8) 21) || (*LOC18).Kind == ((NU8) 22))) goto LA19;
			result = ((NU8) 1);
		}
		goto LA16;
		LA19: ;
		{
			result = isassignable_323003(owner, (*n).kindU.S6.Sons->data[0]);
		}
		LA16: ;
		{
			NIM_BOOL LOC24;
			LOC24 = 0;
			LOC24 = !((result == ((NU8) 0)));
			if (!(LOC24)) goto LA25;
			LOC24 = (((*(*(*n).kindU.S6.Sons->data[1]).kindU.S4.Sym).Flags &(1<<((((NU8) 18))&31)))!=0);
			LA25: ;
			if (!LOC24) goto LA26;
			result = ((NU8) 3);
		}
		LA26: ;
	}
	break;
	case ((NU8) 42):
	{
		{
			ttype226852* LOC31;
			LOC31 = 0;
			LOC31 = skiptypes_231245((*(*n).kindU.S6.Sons->data[0]).Typ, IL64(211106232576000));
			if (!((*LOC31).Kind == ((NU8) 23) || (*LOC31).Kind == ((NU8) 21) || (*LOC31).Kind == ((NU8) 22))) goto LA32;
			result = ((NU8) 1);
		}
		goto LA29;
		LA32: ;
		{
			result = isassignable_323003(owner, (*n).kindU.S6.Sons->data[0]);
		}
		LA29: ;
	}
	break;
	case ((NU8) 58):
	case ((NU8) 59):
	case ((NU8) 60):
	{
		{
			ttype226852* LOC38;
			LOC38 = 0;
			LOC38 = skiptypes_231245((*n).Typ, IL64(211106247256064));
			if (!((*LOC38).Kind == ((NU8) 27) || (*LOC38).Kind == ((NU8) 18) || (*LOC38).Kind == ((NU8) 17))) goto LA39;
			result = isassignable_323003(owner, (*n).kindU.S6.Sons->data[1]);
		}
		goto LA36;
		LA39: ;
		{
			NIM_BOOL LOC42;
			LOC42 = 0;
			LOC42 = comparetypes_271571((*n).Typ, (*(*n).kindU.S6.Sons->data[1]).Typ, ((NU8) 1), 0);
			if (!LOC42) goto LA43;
			result = isassignable_323003(owner, (*n).kindU.S6.Sons->data[1]);
		}
		goto LA36;
		LA43: ;
		LA36: ;
	}
	break;
	case ((NU8) 65):
	case ((NU8) 47):
	{
		result = ((NU8) 1);
	}
	break;
	case ((NU8) 67):
	case ((NU8) 66):
	case ((NU8) 46):
	{
		result = isassignable_323003(owner, (*n).kindU.S6.Sons->data[0]);
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
			NU16 LOC50;
			LOC50 = 0;
			LOC50 = getmagic_262845(n);
			if (!(LOC50 == ((NU16) 151))) goto LA51;
			result = isassignable_323003(owner, (*n).kindU.S6.Sons->data[1]);
		}
		LA51: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, isroutine_233780)(tsym226846* s) {
	NIM_BOOL result;
	result = 0;
	result = ((520192 &(1<<(((*s).Kind)&31)))!=0);
	return result;
}

static N_INLINE(NI, len_227364)(tnode226816* n) {
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

N_NIMCALL(NU8, checkforsideeffects_322747)(tnode226816* n) {
	NU8 result;
	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		tnode226816* op;
		op = (*n).kindU.S6.Sons->data[0];
		{
			NIM_BOOL LOC4;
			tsym226846* s;
			LOC4 = 0;
			LOC4 = ((*op).Kind == ((NU8) 3));
			if (!(LOC4)) goto LA5;
			LOC4 = isroutine_233780((*op).kindU.S4.Sym);
			LA5: ;
			if (!LOC4) goto LA6;
			s = (*op).kindU.S4.Sym;
			{
				if (!(((*s).Flags &(1<<((((NU8) 11))&31)))!=0)) goto LA10;
				result = ((NU8) 1);
				goto BeforeRet;
			}
			LA10: ;
			result = ((NU8) 2);
		}
		goto LA2;
		LA6: ;
		{
			if (!(((*(*op).Typ).Flags &(1<<((((NU8) 1))&31)))!=0)) goto LA13;
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
			NI i_322851;
			NI HEX3Atmp_322959;
			NI LOC17;
			NI res_322962;
			i_322851 = 0;
			HEX3Atmp_322959 = 0;
			LOC17 = 0;
			LOC17 = len_227364(n);
			HEX3Atmp_322959 = (LOC17 - 1);
			res_322962 = 0;
			{
				while (1) {
					NU8 ret;
					if (!(res_322962 <= HEX3Atmp_322959)) goto LA19;
					i_322851 = res_322962;
					ret = checkforsideeffects_322747((*n).kindU.S6.Sons->data[i_322851]);
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
					res_322962 += 1;
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
		{
			NI i_322915;
			NI HEX3Atmp_322965;
			NI LOC32;
			NI res_322968;
			i_322915 = 0;
			HEX3Atmp_322965 = 0;
			LOC32 = 0;
			LOC32 = len_227364(n);
			HEX3Atmp_322965 = (LOC32 - 1);
			res_322968 = 0;
			{
				while (1) {
					NU8 ret;
					if (!(res_322968 <= HEX3Atmp_322965)) goto LA34;
					i_322915 = res_322968;
					ret = checkforsideeffects_322747((*n).kindU.S6.Sons->data[i_322915]);
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
					res_322968 += 1;
				} LA34: ;
			}
		}
	}
	break;
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, matchnodekinds_323381)(tnode226816* p, tnode226816* n) {
	NIM_BOOL result;
	TY323386 stack;
	NI sp;
	NimStringDesc* code;
	NI pc;
	result = 0;
	stack[(0)- 0] = NIM_TRUE;
	sp = 1;
	code = (*p).kindU.S3.Strval;
	pc = 1;
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
				LOC5 = stack[((NI32)(sp - 1))- 0];
				if (LOC5) goto LA6;
				LOC5 = stack[((NI32)(sp - 2))- 0];
				LA6: ;
				stack[((NI32)(sp - 2))- 0] = LOC5;
				sp -= 1;
			}
			break;
			case ((NU8) 3):
			{
				NIM_BOOL LOC8;
				LOC8 = 0;
				LOC8 = stack[((NI32)(sp - 1))- 0];
				if (!(LOC8)) goto LA9;
				LOC8 = stack[((NI32)(sp - 2))- 0];
				LA9: ;
				stack[((NI32)(sp - 2))- 0] = LOC8;
				sp -= 1;
			}
			break;
			case ((NU8) 4):
			{
				stack[((NI32)(sp - 1))- 0] = !(stack[((NI32)(sp - 1))- 0]);
			}
			break;
			case ((NU8) 5):
			{
				stack[(sp)- 0] = ((*n).Kind == ((NU8) 3));
				sp += 1;
			}
			break;
			case ((NU8) 6):
			{
				stack[(sp)- 0] = isatom_233962(n);
				sp += 1;
			}
			break;
			case ((NU8) 7):
			{
				stack[(sp)- 0] = ((*n).Kind >= ((NU8) 5) && (*n).Kind <= ((NU8) 23));
				sp += 1;
			}
			break;
			case ((NU8) 8):
			{
				stack[(sp)- 0] = ((*n).Kind == ((NU8) 2));
				sp += 1;
			}
			break;
			case ((NU8) 9):
			{
				stack[(sp)- 0] = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
				sp += 1;
			}
			break;
			case ((NU8) 10):
			{
				NU8 kind;
				NIM_BOOL LOC17;
				kind = ((NU8) (((NU8)(code->data[(NI32)(pc + 1)]))));
				LOC17 = 0;
				LOC17 = ((*n).Kind == ((NU8) 3));
				if (!(LOC17)) goto LA18;
				LOC17 = ((*(*n).kindU.S4.Sym).Kind == kind);
				LA18: ;
				stack[(sp)- 0] = LOC17;
				sp += 1;
				pc += 1;
			}
			break;
			case ((NU8) 11):
			{
				NU8 kind;
				kind = ((NU8) (((NU8)(code->data[(NI32)(pc + 1)]))));
				stack[(sp)- 0] = ((*n).Kind == kind);
				sp += 1;
				pc += 1;
			}
			break;
			case ((NU8) 12):
			{
				NU8 LOC21;
				LOC21 = 0;
				LOC21 = isassignable_323003(NIM_NIL, n);
				stack[(sp)- 0] = ((6 &(1<<((LOC21)&7)))!=0);
				sp += 1;
			}
			break;
			case ((NU8) 13):
			{
				NU8 LOC23;
				LOC23 = 0;
				LOC23 = isassignable_323003(NIM_NIL, n);
				stack[(sp)- 0] = (LOC23 == ((NU8) 2));
				sp += 1;
			}
			break;
			case ((NU8) 14):
			{
				NU8 LOC25;
				LOC25 = 0;
				LOC25 = checkforsideeffects_322747(n);
				stack[(sp)- 0] = (LOC25 == ((NU8) 1));
				sp += 1;
			}
			break;
			case ((NU8) 15):
			{
				NU8 LOC27;
				LOC27 = 0;
				LOC27 = checkforsideeffects_322747(n);
				stack[(sp)- 0] = !((LOC27 == ((NU8) 1)));
				sp += 1;
			}
			break;
			}
			pc += 1;
		}
	} LA1: ;
	result = stack[((NI32)(sp - 1))- 0];
	return result;
}

static N_INLINE(tcell44733*, usrtocell_48446)(void* usr) {
	tcell44733* result;
	result = 0;
	result = ((tcell44733*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44733))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44733* c) {
	addzct_48417((&gch_46844.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44733* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48446(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44733* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48446((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, patternerror_322051)(tnode226816* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_251058(n, 4);
	localerror_198955((*n).Info, ((NU16) 1), LOC1);
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, add_322061)(NimStringDesc** code, NU8 op) {
	(*code) = addChar((*code), ((NIM_CHAR) (((NI) (op)))));
}

N_NIMCALL(void, compileconstraints_322129)(tnode226816* p, NimStringDesc** result) {
	switch ((*p).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		tident201021* op;
		{
			if (!!(((*(*p).kindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA4;
			patternerror_322051((*p).kindU.S6.Sons->data[0]);
			goto BeforeRet;
		}
		LA4: ;
		op = (*(*p).kindU.S6.Sons->data[0]).kindU.S5.Ident;
		{
			NI LOC8;
			LOC8 = 0;
			LOC8 = len_227364(p);
			if (!(LOC8 == 3)) goto LA9;
			{
				NIM_BOOL LOC13;
				LOC13 = 0;
				LOC13 = eqStrings((*op).S, ((NimStringDesc*) &TMP3003));
				if (LOC13) goto LA14;
				LOC13 = ((*op).Sup.Id == 48);
				LA14: ;
				if (!LOC13) goto LA15;
				compileconstraints_322129((*p).kindU.S6.Sons->data[1], result);
				compileconstraints_322129((*p).kindU.S6.Sons->data[2], result);
				add_322061(result, ((NU8) 2));
			}
			goto LA11;
			LA15: ;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = eqStrings((*op).S, ((NimStringDesc*) &TMP3004));
				if (LOC18) goto LA19;
				LOC18 = ((*op).Sup.Id == 2);
				LA19: ;
				if (!LOC18) goto LA20;
				compileconstraints_322129((*p).kindU.S6.Sons->data[1], result);
				compileconstraints_322129((*p).kindU.S6.Sons->data[2], result);
				add_322061(result, ((NU8) 3));
			}
			goto LA11;
			LA20: ;
			{
				patternerror_322051(p);
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
			LOC25 = len_227364(p);
			LOC24 = (LOC25 == 2);
			if (!(LOC24)) goto LA26;
			LOC27 = 0;
			LOC27 = eqStrings((*op).S, ((NimStringDesc*) &TMP3005));
			if (LOC27) goto LA28;
			LOC27 = ((*op).Sup.Id == 44);
			LA28: ;
			LOC24 = LOC27;
			LA26: ;
			if (!LOC24) goto LA29;
			compileconstraints_322129((*p).kindU.S6.Sons->data[1], result);
			add_322061(result, ((NU8) 4));
		}
		goto LA6;
		LA29: ;
		{
			patternerror_322051(p);
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
			LOC35 = len_227364(p);
			if (!(LOC35 == 1)) goto LA36;
			compileconstraints_322129((*p).kindU.S6.Sons->data[0], result);
		}
		goto LA33;
		LA36: ;
		{
			patternerror_322051(p);
		}
		LA33: ;
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* spec;
		spec = nsuNormalize((*(*p).kindU.S5.Ident).S);
		switch (hashString(spec) & 15) {
		case 1: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3016))) goto LA50;
break;
		case 3: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3012))) goto LA46;
if (eqStrings(spec, ((NimStringDesc*) &TMP3013))) goto LA47;
if (eqStrings(spec, ((NimStringDesc*) &TMP3015))) goto LA49;
break;
		case 4: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3008))) goto LA42;
break;
		case 6: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3009))) goto LA43;
if (eqStrings(spec, ((NimStringDesc*) &TMP3014))) goto LA48;
break;
		case 11: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3006))) goto LA40;
break;
		case 12: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3007))) goto LA41;
break;
		case 13: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3010))) goto LA44;
break;
		case 14: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3011))) goto LA45;
break;
		}
		goto LA51;
		LA40: ;
		{
			add_322061(result, ((NU8) 6));
		}
		goto LA52;
		LA41: ;
		{
			add_322061(result, ((NU8) 7));
		}
		goto LA52;
		LA42: ;
		{
			add_322061(result, ((NU8) 5));
		}
		goto LA52;
		LA43: ;
		{
			add_322061(result, ((NU8) 8));
		}
		goto LA52;
		LA44: ;
		{
			add_322061(result, ((NU8) 9));
		}
		goto LA52;
		LA45: ;
		{
			(*result)->data[0] = 2;
		}
		goto LA52;
		LA46: ;
		{
			(*result)->data[0] = 3;
		}
		goto LA52;
		LA47: ;
		{
			add_322061(result, ((NU8) 12));
		}
		goto LA52;
		LA48: ;
		{
			add_322061(result, ((NU8) 13));
		}
		goto LA52;
		LA49: ;
		{
			add_322061(result, ((NU8) 14));
		}
		goto LA52;
		LA50: ;
		{
			add_322061(result, ((NU8) 15));
		}
		goto LA52;
		LA51: ;
		{
			{
				NimStringDesc* LOC69;
				if (!NIM_FALSE) goto LA67;
				LOC69 = 0;
				LOC69 = HEX24_199126(TMP3017);
				internalerror_199006(LOC69);
			}
			LA67: ;
			{
				NU8 i_322398;
				NU8 res_322494;
				i_322398 = 0;
				res_322494 = ((NU8) 0);
				{
					while (1) {
						if (!(res_322494 <= ((NU8) 25))) goto LA72;
						i_322398 = res_322494;
						{
							NimStringDesc* LOC75;
							NI LOC76;
							LOC75 = 0;
							LOC75 = copyStr(reprEnum(i_322398, (&NTI226445)), 2);
							LOC76 = 0;
							LOC76 = nsuCmpIgnoreStyle(LOC75, spec);
							if (!(LOC76 == 0)) goto LA77;
							add_322061(result, ((NU8) 10));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_322398)))));
							goto BeforeRet;
						}
						LA77: ;
						res_322494 += 1;
					} LA72: ;
				}
			}
			{
				NimStringDesc* LOC83;
				if (!NIM_FALSE) goto LA81;
				LOC83 = 0;
				LOC83 = HEX24_199126(TMP3019);
				internalerror_199006(LOC83);
			}
			LA81: ;
			{
				NU8 i_322473;
				NU8 res_322501;
				i_322473 = 0;
				res_322501 = ((NU8) 0);
				{
					while (1) {
						if (!(res_322501 <= ((NU8) 157))) goto LA86;
						i_322473 = res_322501;
						{
							NI LOC89;
							LOC89 = 0;
							LOC89 = nsuCmpIgnoreStyle(reprEnum(i_322473, (&NTI226029)), spec);
							if (!(LOC89 == 0)) goto LA90;
							add_322061(result, ((NU8) 11));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_322473)))));
							goto BeforeRet;
						}
						LA90: ;
						res_322501 += 1;
					} LA86: ;
				}
			}
			patternerror_322051(p);
		}
		LA52: ;
	}
	break;
	default:
	{
		patternerror_322051(p);
	}
	break;
	}
	BeforeRet: ;
}

N_NIMCALL(tnode226816*, semnodekindconstraints_322527)(tnode226816* p) {
	tnode226816* result;
	result = 0;
	result = newnodei_227138(((NU8) 20), (*p).Info);
	asgnRefNoCycle((void**) (&(*result).kindU.S3.Strval), rawNewString(10));
	(*result).kindU.S3.Strval = addChar((*result).kindU.S3.Strval, 1);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_227364(p);
		if (!(2 <= LOC3)) goto LA4;
		{
			NI i_322658;
			NI HEX3Atmp_322719;
			NI LOC7;
			NI res_322722;
			i_322658 = 0;
			HEX3Atmp_322719 = 0;
			LOC7 = 0;
			LOC7 = len_227364(p);
			HEX3Atmp_322719 = (LOC7 - 1);
			res_322722 = 1;
			{
				while (1) {
					if (!(res_322722 <= HEX3Atmp_322719)) goto LA9;
					i_322658 = res_322722;
					compileconstraints_322129((*p).kindU.S6.Sons->data[i_322658], (&(*result).kindU.S3.Strval));
					res_322722 += 1;
				} LA9: ;
			}
		}
		{
			if (!(63 < (*result).kindU.S3.Strval->Sup.len)) goto LA12;
			internalerror_198987((*p).Info, ((NimStringDesc*) &TMP3020));
		}
		LA12: ;
	}
	goto LA1;
	LA4: ;
	{
		patternerror_322051(p);
	}
	LA1: ;
	add_322061((&(*result).kindU.S3.Strval), ((NU8) 1));
	return result;
}

N_NIMCALL(NU8, whichalias_322080)(tsym226846* p) {
	NU8 result;
	result = 0;
	{
		if (!!(((*p).Constraint == NIM_NIL))) goto LA3;
		result = ((NU8) (((NU8)((*(*p).Constraint).kindU.S3.Strval->data[0]))));
	}
	goto LA1;
	LA3: ;
	{
		result = ((NU8) 1);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_parampatternsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_parampatternsDatInit)(void) {
}

