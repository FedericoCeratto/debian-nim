/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY295019 TY295019;
typedef struct tsourcefile295008 tsourcefile295008;
typedef struct TY120608 TY120608;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tsym226846 tsym226846;
typedef struct tident201021 tident201021;
typedef struct TY116804 TY116804;
typedef struct baselexer293024 baselexer293024;
typedef struct TNimObject TNimObject;
typedef struct streamobj137035 streamobj137035;
typedef struct filestreamobj137742 filestreamobj137742;
typedef struct slice85779 slice85779;
typedef struct tidobj201015 tidobj201015;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct ttype226852 ttype226852;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tnode226816 tnode226816;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tlib226834 tlib226834;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct TY226936 TY226936;
typedef struct tlistentry129022 tlistentry129022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tsourcefile295008  {
TY120608* Lines;
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
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY116804 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  baselexer293024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
streamobj137035* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
struct  slice85779  {
NI A;
NI B;
};
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
typedef NI TY26220[8];
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
typedef N_NIMCALL_PTR(void, TY137036) (streamobj137035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY137040) (streamobj137035* s);
typedef N_NIMCALL_PTR(void, TY137044) (streamobj137035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY137049) (streamobj137035* s);
typedef N_NIMCALL_PTR(NI, TY137053) (streamobj137035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY137059) (streamobj137035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY137065) (streamobj137035* s);
struct  streamobj137035  {
  TNimObject Sup;
TY137036 Closeimpl;
TY137040 Atendimpl;
TY137044 Setpositionimpl;
TY137049 Getpositionimpl;
TY137053 Readdataimpl;
TY137059 Writedataimpl;
TY137065 Flushimpl;
};
struct  filestreamobj137742  {
  streamobj137035 Sup;
FILE* F;
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
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY120608 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY295019 {
  TGenericSeq Sup;
  tsourcefile295008 data[SEQ_DECL_SIZE];
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
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP870)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replacedeprecated_295247)(tlineinfo196539 info, tident201021* oldsym, tident201021* newsym);
N_NIMCALL(void, loadfile_295045)(tlineinfo196539 info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, tofullpath_198037)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY116804* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_12617)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_12889)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_293040)(baselexer293024* l, streamobj137035* input, NI buflen);
N_NIMCALL(filestreamobj137742*, newfilestream_137837)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_293050)(baselexer293024* l);
N_NIMCALL(NI, identlen_295178)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_85772)(NimStringDesc* s, slice85779 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74628, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(slice85779, HEX2EHEX2E_94499)(NI a_94503, NI b_94505);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP2711, ".nimfix", 7);
STRING_LITERAL(TMP2719, "\015\012", 2);
STRING_LITERAL(TMP2720, "\012", 1);
TY295019* gsourcefiles_295040;
TNimType NTI295008; /* TSourceFile */
extern TNimType NTI120608; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI295019; /* seq[TSourceFile] */
extern tgcheap46816 gch_46844;
extern TNimType NTI293024; /* BaseLexer */
N_NIMCALL(void, TMP870)(void* p, NI op) {
	TY295019* a;
	NI LOC1;
	a = (TY295019*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Lines, op);
	nimGCvisit((void*)a->data[LOC1].Fullpath, op);
	nimGCvisit((void*)a->data[LOC1].Newline, op);
	}
}

static N_INLINE(tcell44733*, usrtocell_48446)(void* usr) {
	tcell44733* result;
	result = 0;
	result = ((tcell44733*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44733))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44733* c) {
	addzct_48417((&gch_46844.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44733* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, loadfile_295045)(tlineinfo196539 info) {
	NI32 i;
	i = info.Fileindex;
	{
		if (!(gsourcefiles_295040->Sup.len <= ((NI) (i)))) goto LA3;
		gsourcefiles_295040 = (TY295019*) setLengthSeq(&(gsourcefiles_295040)->Sup, sizeof(tsourcefile295008), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY116804 LOC10;
		baselexer293024 lex;
		filestreamobj137742* LOC16;
		streamobj137035* LOC17;
		NI pos;
		if (!gsourcefiles_295040->data[i].Lines == 0) goto LA7;
		gsourcefiles_295040->data[i].Fileidx = info.Fileindex;
		if (gsourcefiles_295040->data[i].Lines) nimGCunrefNoCycle(gsourcefiles_295040->data[i].Lines);
		gsourcefiles_295040->data[i].Lines = (TY120608*) newSeqRC1((&NTI120608), 0);
		path = tofullpath_198037(info.Fileindex);
		LOC9 = 0;
		LOC9 = gsourcefiles_295040->data[i].Fullpath; gsourcefiles_295040->data[i].Fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_295040->data[i].Isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2711));
		{
			NimStringDesc* line_295108;
			FILE* f_295146;
			NimStringDesc* res_295148;
			line_295108 = 0;
			f_295146 = open_12617(path, ((NU8) 0), 8000);
			res_295148 = rawNewString(80);
			{
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_12889(f_295146, (&res_295148));
					if (!LOC14) goto LA13;
					line_295108 = res_295148;
					gsourcefiles_295040->data[i].Lines = (TY120608*) incrSeq(&(gsourcefiles_295040->data[i].Lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_295040->data[i].Lines->data[gsourcefiles_295040->data[i].Lines->Sup.len-1]; gsourcefiles_295040->data[i].Lines->data[gsourcefiles_295040->data[i].Lines->Sup.len-1] = copyStringRC1(line_295108);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			fclose(f_295146);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI293024);
		LOC16 = 0;
		LOC16 = newfilestream_137837(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_293040((&lex), LOC17, 8192);
		pos = lex.Bufpos;
		{
			while (1) {
				switch (((NU8)(lex.Buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					LOC21 = 0;
					LOC21 = gsourcefiles_295040->data[i].Newline; gsourcefiles_295040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2719));
					if (LOC21) nimGCunrefNoCycle(LOC21);
					goto LA18;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC23;
					LOC23 = 0;
					LOC23 = gsourcefiles_295040->data[i].Newline; gsourcefiles_295040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2720));
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
		close_293050((&lex));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_295178)(NimStringDesc* line, NI start) {
	NI result;
	result = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = ((NI64)(start + result) < line->Sup.len);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line->data[(NI64)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI64)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI64)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI64)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI64)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI64)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI64)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI64)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI64)(start + result)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result += 1;
		} LA2: ;
	}
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_85772)(NimStringDesc* s, slice85779 x) {
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
		LOC1 = (NI64)(s->Sup.len + x.A);
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
		LOC7 = (NI64)(s->Sup.len + x.B);
	}
	LA8: ;
	result = copyStrLast(s, LOC1, LOC7);
	return result;
}

static N_INLINE(slice85779, HEX2EHEX2E_94499)(NI a_94503, NI b_94505) {
	slice85779 result;
	memset((void*)(&result), 0, sizeof(result));
	result.A = a_94503;
	result.B = b_94505;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, replacedeprecated_295247)(tlineinfo196539 info, tident201021* oldsym, tident201021* newsym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI LOC17;
	loadfile_295045(info);
	line = gsourcefiles_295040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))];
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
			LOC7 = (((NU8)(line->data[(NI64)(first - 1)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI64)(first - 1)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI64)(first - 1)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI64)(first - 1)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI64)(first - 1)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI64)(first - 1)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI64)(first - 1)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI64)(first - 1)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI64)(first - 1)])) == ((NU8)(95)));
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
	LOC17 = identlen_295178(line, first);
	last = (NI64)((NI64)(first + LOC17) - 1);
	{
		slice85779 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_94499(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_85772(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).S);
		if (!(LOC22 == 0)) goto LA23;
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = copyStrLast(line, 0, (NI64)(first - 1));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI64)(last + 1));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).S->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).S);
appendString(LOC25, LOC27);
		x = LOC25;
		asgnRefNoCycle((void**) (&gsourcefiles_295040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))]), x);
		gsourcefiles_295040->data[info.Fileindex].Dirty = NIM_TRUE;
	}
	LA23: ;
	BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_295324)(tlineinfo196539 info, tsym226846* oldsym, tsym226846* newsym) {
	replacedeprecated_295247(info, (*oldsym).Name, (*newsym).Name);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseInit)(void) {
	if (gsourcefiles_295040) nimGCunrefNoCycle(gsourcefiles_295040);
	gsourcefiles_295040 = (TY295019*) newSeqRC1((&NTI295019), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_prettybaseDatInit)(void) {
static TNimNode* TMP869[6];
static TNimNode TMP865[7];
NTI295008.size = sizeof(tsourcefile295008);
NTI295008.kind = 18;
NTI295008.base = 0;
NTI295008.flags = 2;
TMP869[0] = &TMP865[1];
TMP865[1].kind = 1;
TMP865[1].offset = offsetof(tsourcefile295008, Lines);
TMP865[1].typ = (&NTI120608);
TMP865[1].name = "lines";
TMP869[1] = &TMP865[2];
TMP865[2].kind = 1;
TMP865[2].offset = offsetof(tsourcefile295008, Dirty);
TMP865[2].typ = (&NTI138);
TMP865[2].name = "dirty";
TMP869[2] = &TMP865[3];
TMP865[3].kind = 1;
TMP865[3].offset = offsetof(tsourcefile295008, Isnimfixfile);
TMP865[3].typ = (&NTI138);
TMP865[3].name = "isNimfixFile";
TMP869[3] = &TMP865[4];
TMP865[4].kind = 1;
TMP865[4].offset = offsetof(tsourcefile295008, Fullpath);
TMP865[4].typ = (&NTI149);
TMP865[4].name = "fullpath";
TMP869[4] = &TMP865[5];
TMP865[5].kind = 1;
TMP865[5].offset = offsetof(tsourcefile295008, Newline);
TMP865[5].typ = (&NTI149);
TMP865[5].name = "newline";
TMP869[5] = &TMP865[6];
TMP865[6].kind = 1;
TMP865[6].offset = offsetof(tsourcefile295008, Fileidx);
TMP865[6].typ = (&NTI114);
TMP865[6].name = "fileIdx";
TMP865[0].len = 6; TMP865[0].kind = 2; TMP865[0].sons = &TMP869[0];
NTI295008.node = &TMP865[0];
NTI295019.size = sizeof(TY295019*);
NTI295019.kind = 24;
NTI295019.base = (&NTI295008);
NTI295019.flags = 2;
NTI295019.marker = TMP870;
}

