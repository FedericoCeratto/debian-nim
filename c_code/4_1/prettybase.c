/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY294019 TY294019;
typedef struct tsourcefile294008 tsourcefile294008;
typedef struct TY119808 TY119808;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44935 tcell44935;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44947 tcellset44947;
typedef struct tpagedesc44943 tpagedesc44943;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tsym225846 tsym225846;
typedef struct tident200021 tident200021;
typedef struct TY117604 TY117604;
typedef struct baselexer292024 baselexer292024;
typedef struct TNimObject TNimObject;
typedef struct streamobj135035 streamobj135035;
typedef struct filestreamobj135742 filestreamobj135742;
typedef struct slice84173 slice84173;
typedef struct tidobj200015 tidobj200015;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct ttype225852 ttype225852;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tnode225816 tnode225816;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tlib225834 tlib225834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct tnodeseq225810 tnodeseq225810;
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
struct  tsourcefile294008  {
TY119808* Lines;
NIM_BOOL Dirty;
NIM_BOOL Isnimfixfile;
NimStringDesc* Fullpath;
NimStringDesc* Newline;
NI32 Fileidx;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell44935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44951  {
NI Len;
NI Cap;
tcell44935** D;
};
struct  tcellset44947  {
NI Counter;
NI Max;
tpagedesc44943* Head;
tpagedesc44943** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44951 Zct;
tcellseq44951 Decstack;
tcellset44947 Cycleroots;
tcellseq44951 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY117604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  baselexer292024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
streamobj135035* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
struct  slice84173  {
NI A;
NI B;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
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
typedef NI TY26420[16];
struct  tpagedesc44943  {
tpagedesc44943* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
typedef N_NIMCALL_PTR(void, TY135036) (streamobj135035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY135040) (streamobj135035* s);
typedef N_NIMCALL_PTR(void, TY135044) (streamobj135035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY135049) (streamobj135035* s);
typedef N_NIMCALL_PTR(NI, TY135053) (streamobj135035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135059) (streamobj135035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135065) (streamobj135035* s);
struct  streamobj135035  {
  TNimObject Sup;
TY135036 Closeimpl;
TY135040 Atendimpl;
TY135044 Setpositionimpl;
TY135049 Getpositionimpl;
TY135053 Readdataimpl;
TY135059 Writedataimpl;
TY135065 Flushimpl;
};
struct  filestreamobj135742  {
  streamobj135035 Sup;
FILE* F;
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
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct TY119808 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY294019 {
  TGenericSeq Sup;
  tsourcefile294008 data[SEQ_DECL_SIZE];
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
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP857)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replacedeprecated_294247)(tlineinfo195539 info, tident200021* oldsym, tident200021* newsym);
N_NIMCALL(void, loadfile_294045)(tlineinfo195539 info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, tofullpath_197037)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117604* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_12617)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_12889)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_292040)(baselexer292024* l, streamobj135035* input, NI buflen);
N_NIMCALL(filestreamobj135742*, newfilestream_135836)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_292050)(baselexer292024* l);
N_NIMCALL(NI, identlen_294178)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_84166)(NimStringDesc* s, slice84173 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74828, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(slice84173, HEX2EHEX2E_92298)(NI a_92302, NI b_92304);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP2709, ".nimfix", 7);
STRING_LITERAL(TMP2717, "\015\012", 2);
STRING_LITERAL(TMP2718, "\012", 1);
TY294019* gsourcefiles_294040;
TNimType NTI294008; /* TSourceFile */
extern TNimType NTI119808; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI294019; /* seq[TSourceFile] */
extern tgcheap47016 gch_47044;
extern TNimType NTI292024; /* BaseLexer */
N_NIMCALL(void, TMP857)(void* p, NI op) {
	TY294019* a;
	NI LOC1;
	a = (TY294019*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Lines, op);
	nimGCvisit((void*)a->data[LOC1].Fullpath, op);
	nimGCvisit((void*)a->data[LOC1].Newline, op);
	}
}

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44935* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
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

N_NIMCALL(void, loadfile_294045)(tlineinfo195539 info) {
	NI32 i;
	i = info.Fileindex;
	{
		if (!(gsourcefiles_294040->Sup.len <= ((NI) (i)))) goto LA3;
		gsourcefiles_294040 = (TY294019*) setLengthSeq(&(gsourcefiles_294040)->Sup, sizeof(tsourcefile294008), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY117604 LOC10;
		baselexer292024 lex;
		filestreamobj135742* LOC16;
		streamobj135035* LOC17;
		NI pos;
		if (!gsourcefiles_294040->data[i].Lines == 0) goto LA7;
		gsourcefiles_294040->data[i].Fileidx = info.Fileindex;
		if (gsourcefiles_294040->data[i].Lines) nimGCunrefNoCycle(gsourcefiles_294040->data[i].Lines);
		gsourcefiles_294040->data[i].Lines = (TY119808*) newSeqRC1((&NTI119808), 0);
		path = tofullpath_197037(info.Fileindex);
		LOC9 = 0;
		LOC9 = gsourcefiles_294040->data[i].Fullpath; gsourcefiles_294040->data[i].Fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_294040->data[i].Isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2709));
		{
			NimStringDesc* line_294108;
			FILE* f_294146;
			NimStringDesc* res_294148;
			line_294108 = 0;
			f_294146 = open_12617(path, ((NU8) 0), 8000);
			res_294148 = rawNewString(80);
			{
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_12889(f_294146, (&res_294148));
					if (!LOC14) goto LA13;
					line_294108 = res_294148;
					gsourcefiles_294040->data[i].Lines = (TY119808*) incrSeq(&(gsourcefiles_294040->data[i].Lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_294040->data[i].Lines->data[gsourcefiles_294040->data[i].Lines->Sup.len-1]; gsourcefiles_294040->data[i].Lines->data[gsourcefiles_294040->data[i].Lines->Sup.len-1] = copyStringRC1(line_294108);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			fclose(f_294146);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI292024);
		LOC16 = 0;
		LOC16 = newfilestream_135836(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_292040((&lex), LOC17, 8192);
		pos = lex.Bufpos;
		{
			while (1) {
				switch (((NU8)(lex.Buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					LOC21 = 0;
					LOC21 = gsourcefiles_294040->data[i].Newline; gsourcefiles_294040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2717));
					if (LOC21) nimGCunrefNoCycle(LOC21);
					goto LA18;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC23;
					LOC23 = 0;
					LOC23 = gsourcefiles_294040->data[i].Newline; gsourcefiles_294040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2718));
					if (LOC23) nimGCunrefNoCycle(LOC23);
					goto LA18;
				}
				break;
				default:
				{
				}
				break;
				}
				pos += 1;
			}
		} LA18: ;
		close_292050((&lex));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_294178)(NimStringDesc* line, NI start) {
	NI result;
	result = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = ((NI32)(start + result) < line->Sup.len);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI32)(start + result)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result += 1;
		} LA2: ;
	}
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_84166)(NimStringDesc* s, slice84173 x) {
	NimStringDesc* result;
	NI LOC1;
	NI LOC7;
	result = 0;
	LOC1 = 0;
	{
		if (!(0 <= x.A)) goto LA4;
		LOC1 = x.A;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = (NI32)(s->Sup.len + x.A);
	}
	LA2: ;
	LOC7 = 0;
	{
		if (!(0 <= x.B)) goto LA10;
		LOC7 = x.B;
	}
	goto LA8;
	LA10: ;
	{
		LOC7 = (NI32)(s->Sup.len + x.B);
	}
	LA8: ;
	result = copyStrLast(s, LOC1, LOC7);
	return result;
}

static N_INLINE(slice84173, HEX2EHEX2E_92298)(NI a_92302, NI b_92304) {
	slice84173 result;
	memset((void*)(&result), 0, sizeof(result));
	result.A = a_92302;
	result.B = b_92304;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44935* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44935* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, replacedeprecated_294247)(tlineinfo195539 info, tident200021* oldsym, tident200021* newsym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI LOC17;
	loadfile_294045(info);
	line = gsourcefiles_294040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))];
	first = ((((NI) (info.Col)) <= line->Sup.len) ? ((NI) (info.Col)) : line->Sup.len);
	{
		if (!(first < 0)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = (0 < first);
			if (!(LOC7)) goto LA8;
			LOC7 = (((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI32)(first - 1)])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			first -= 1;
		} LA6: ;
	}
	{
		if (!(first < 0)) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		first += 1;
	}
	LA15: ;
	LOC17 = 0;
	LOC17 = identlen_294178(line, first);
	last = (NI32)((NI32)(first + LOC17) - 1);
	{
		slice84173 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_92298(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_84166(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).S);
		if (!(LOC22 == 0)) goto LA23;
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = copyStrLast(line, 0, (NI32)(first - 1));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI32)(last + 1));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).S->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).S);
appendString(LOC25, LOC27);
		x = LOC25;
		asgnRefNoCycle((void**) (&gsourcefiles_294040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))]), x);
		gsourcefiles_294040->data[info.Fileindex].Dirty = NIM_TRUE;
	}
	LA23: ;
	BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_294324)(tlineinfo195539 info, tsym225846* oldsym, tsym225846* newsym) {
	replacedeprecated_294247(info, (*oldsym).Name, (*newsym).Name);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseInit)(void) {
	if (gsourcefiles_294040) nimGCunrefNoCycle(gsourcefiles_294040);
	gsourcefiles_294040 = (TY294019*) newSeqRC1((&NTI294019), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseDatInit)(void) {
static TNimNode* TMP856[6];
static TNimNode TMP852[7];
NTI294008.size = sizeof(tsourcefile294008);
NTI294008.kind = 18;
NTI294008.base = 0;
NTI294008.flags = 2;
TMP856[0] = &TMP852[1];
TMP852[1].kind = 1;
TMP852[1].offset = offsetof(tsourcefile294008, Lines);
TMP852[1].typ = (&NTI119808);
TMP852[1].name = "lines";
TMP856[1] = &TMP852[2];
TMP852[2].kind = 1;
TMP852[2].offset = offsetof(tsourcefile294008, Dirty);
TMP852[2].typ = (&NTI138);
TMP852[2].name = "dirty";
TMP856[2] = &TMP852[3];
TMP852[3].kind = 1;
TMP852[3].offset = offsetof(tsourcefile294008, Isnimfixfile);
TMP852[3].typ = (&NTI138);
TMP852[3].name = "isNimfixFile";
TMP856[3] = &TMP852[4];
TMP852[4].kind = 1;
TMP852[4].offset = offsetof(tsourcefile294008, Fullpath);
TMP852[4].typ = (&NTI149);
TMP852[4].name = "fullpath";
TMP856[4] = &TMP852[5];
TMP852[5].kind = 1;
TMP852[5].offset = offsetof(tsourcefile294008, Newline);
TMP852[5].typ = (&NTI149);
TMP852[5].name = "newline";
TMP856[5] = &TMP852[6];
TMP852[6].kind = 1;
TMP852[6].offset = offsetof(tsourcefile294008, Fileidx);
TMP852[6].typ = (&NTI114);
TMP852[6].name = "fileIdx";
TMP852[0].len = 6; TMP852[0].kind = 2; TMP852[0].sons = &TMP856[0];
NTI294008.node = &TMP852[0];
NTI294019.size = sizeof(TY294019*);
NTI294019.kind = 24;
NTI294019.base = (&NTI294008);
NTI294019.flags = 2;
NTI294019.marker = TMP857;
}

