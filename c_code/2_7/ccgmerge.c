/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcgen550035 tcgen550035;
typedef struct tllstream212204 tllstream212204;
typedef struct tbaselexer214024 tbaselexer214024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tidtable226864 tidtable226864;
typedef struct tidobj201015 tidobj201015;
typedef struct ttype226852 ttype226852;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct tnode226816 tnode226816;
typedef struct tsym226846 tsym226846;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
typedef struct tpasscontext287005 tpasscontext287005;
typedef struct tidpairseq226862 tidpairseq226862;
typedef struct tidpair226860 tidpair226860;
typedef struct intset223056 intset223056;
typedef struct ttrunk223052 ttrunk223052;
typedef struct ttrunkseq223054 ttrunkseq223054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tcproc550031 tcproc550031;
typedef struct tnodetable226876 tnodetable226876;
typedef struct tnodepairseq226874 tnodepairseq226874;
typedef struct tnodepair226872 tnodepair226872;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct TY196552 TY196552;
typedef struct TY550102 TY550102;
typedef struct tblock550029 tblock550029;
typedef struct tmergesections551861 tmergesections551861;
typedef struct tcell44933 tcell44933;
typedef struct tcellseq44949 tcellseq44949;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44945 tcellset44945;
typedef struct tpagedesc44941 tpagedesc44941;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct tident201021 tident201021;
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tlib226834 tlib226834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY226936 TY226936;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tpasscontext287005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope178009* tcfilesections550019[18];
struct  tidpair226860  {
tidobj201015* Key;
TNimObject* Val;
};
struct  tidtable226864  {
NI Counter;
tidpairseq226862* Data;
};
struct  intset223056  {
NI Counter;
NI Max;
ttrunk223052* Head;
ttrunkseq223054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair226872  {
NI H;
tnode226816* Key;
NI Val;
};
struct  tnodetable226876  {
NI Counter;
tnodepairseq226874* Data;
};
typedef trope178009* TY550138[10];
struct  tcgen550035  {
  tpasscontext287005 Sup;
tsym226846* Module;
NimStringDesc* Filename;
tcfilesections550019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable226864 Typecache;
tidtable226864 Forwtypecache;
intset223056 Declaredthings;
intset223056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset223056 Typeinfomarker;
tcproc550031* Initproc;
tcproc550031* Postinitproc;
tcproc550031* Preinitproc;
ttypeseq226848* Typestack;
tnodetable226876 Datacache;
tsymseq226818* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope178009* Typenodesname;
trope178009* Nimtypesname;
NI Labels;
TY550138 Extensionloaders;
trope178009* Injectstmt;
};
typedef trope178009* tcprocsections550023[3];
struct  tblock550029  {
NI Id;
trope178009* Label;
tcprocsections550023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc550031  {
tsym226846* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq226810* Nestedtrystmts;
NI Inexceptblock;
TY196552* Finallysafepoints;
NI Labels;
TY550102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen550035* Module;
NI Withinloop;
NI Gcframeid;
trope178009* Gcframetype;
};
struct  tmergesections551861  {
tcfilesections550019 F;
tcprocsections550023 P;
};
typedef NimStringDesc* TY551013[18];
typedef NimStringDesc* TY551019[3];
struct  tcell44933  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44949  {
NI Len;
NI Cap;
tcell44933** D;
};
struct  tcellset44945  {
NI Counter;
NI Max;
tpagedesc44941* Head;
tpagedesc44941** Data;
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
tcellseq44949 Zct;
tcellseq44949 Decstack;
tcellset44945 Cycleroots;
tcellseq44949 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
typedef NI TY26420[16];
struct  ttrunk223052  {
ttrunk223052* Next;
NI Key;
TY26420 Bits;
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
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tpagedesc44941  {
tpagedesc44941* Next;
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
struct  tlib226834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode226816* Path;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct ttypeseq226848 {
  TGenericSeq Sup;
  ttype226852* data[SEQ_DECL_SIZE];
};
struct tidpairseq226862 {
  TGenericSeq Sup;
  tidpair226860 data[SEQ_DECL_SIZE];
};
struct ttrunkseq223054 {
  TGenericSeq Sup;
  ttrunk223052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq226874 {
  TGenericSeq Sup;
  tnodepair226872 data[SEQ_DECL_SIZE];
};
struct tsymseq226818 {
  TGenericSeq Sup;
  tsym226846* data[SEQ_DECL_SIZE];
};
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct TY196552 {
  TGenericSeq Sup;
  trope178009* data[SEQ_DECL_SIZE];
};
struct TY550102 {
  TGenericSeq Sup;
  tblock550029 data[SEQ_DECL_SIZE];
};
struct TY226947 {
  TGenericSeq Sup;
  tinstantiation226836* data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tllstream212204*, llstreamopen_212233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, openbaselexer_214035)(tbaselexer214024* l, tllstream212204* inputstream, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, skipuntilcmd_551402)(tbaselexer214024* l);
N_NIMCALL(NI, handlecr_214066)(tbaselexer214024* l, NI pos);
N_NIMCALL(NI, handlelf_214074)(tbaselexer214024* l, NI pos);
N_NIMCALL(void, readkey_551535)(tbaselexer214024* l, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, internalerror_199006)(NimStringDesc* errmsg);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, processmergeinfo_551711)(tbaselexer214024* l, tcgen550035* m);
N_NIMCALL(void, skipwhite_551372)(tbaselexer214024* l);
N_NIMCALL(void, readtypecache_551607)(tbaselexer214024* l, tidtable226864* result);
N_NIMCALL(NI, decodevint_235359)(NCSTRING s, NI* pos);
N_NIMCALL(NimStringDesc*, decodestr_235155)(NCSTRING s, NI* pos);
N_NIMCALL(void, idtableput_236196)(tidtable226864* t, tidobj201015* key, TNimObject* val);
N_NIMCALL(ttype226852*, newfaketype_551581)(NI id);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(trope178009*, torope_178076)(NimStringDesc* s);
N_NIMCALL(void, readintset_551666)(tbaselexer214024* l, intset223056* result);
N_NIMCALL(void, incl_223869)(intset223056* s, NI key);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(void, closebaselexer_214045)(tbaselexer214024* l);
static N_INLINE(trope178009**, s_550183)(tcproc550031* p, NU8 s);
N_NIMCALL(void, readmergesections_551867)(NimStringDesc* cfilename, tmergesections551861* m);
N_NIMCALL(trope178009*, readverbatimsection_551489)(tbaselexer214024* l);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NIM_BOOL, atendmark_551456)(NCSTRING buf, NI pos);
static N_INLINE(NI, find_551914)(TY551013 a_551919, NimStringDesc* item_551921);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, find_552017)(TY551019 a_552022, NimStringDesc* item_552024);
N_NIMCALL(trope178009*, con_178024)(trope178009* a, trope178009* b);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
N_NIMCALL(void, app_178060)(trope178009** a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, writetypecache_551224)(tidtable226864 a, NimStringDesc** s);
N_NIMCALL(void, encodevint_235304)(NI x, NimStringDesc** result);
N_NIMCALL(void, encodestr_235042)(NimStringDesc* s, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, ropetostr_178101)(trope178009* p);
N_NIMCALL(void, writeintset_551271)(intset223056 a, NimStringDesc** s);
STRING_LITERAL(TMP4064, "ccgmerge: \':\' expected", 22);
STRING_LITERAL(TMP4065, "NIM_merge_INFO", 14);
STRING_LITERAL(TMP4066, "typeCache", 9);
STRING_LITERAL(TMP4067, "declared", 8);
STRING_LITERAL(TMP4068, "typeInfo", 8);
STRING_LITERAL(TMP4069, "labels", 6);
STRING_LITERAL(TMP4070, "hasframe", 8);
STRING_LITERAL(TMP4071, "ccgmerge: \'{\' expected", 22);
STRING_LITERAL(TMP4072, "ccgmerge: unkown key: ", 22);
STRING_LITERAL(TMP4143, "ccgmerge: expected: /*\011NIM_merge_END:*/", 39);
STRING_LITERAL(TMP4144, "/*\011NIM_merge_END:*/", 19);
STRING_LITERAL(TMP4145, "", 0);
STRING_LITERAL(TMP4146, "NIM_merge_HEADERS", 17);
STRING_LITERAL(TMP4147, "NIM_merge_FORWARD_TYPES", 23);
STRING_LITERAL(TMP4148, "NIM_merge_TYPES", 15);
STRING_LITERAL(TMP4149, "NIM_merge_SEQ_TYPES", 19);
STRING_LITERAL(TMP4150, "NIM_merge_FIELD_INFO", 20);
STRING_LITERAL(TMP4151, "NIM_merge_TYPE_INFO", 19);
STRING_LITERAL(TMP4152, "NIM_merge_PROC_HEADERS", 22);
STRING_LITERAL(TMP4153, "NIM_merge_DATA", 14);
STRING_LITERAL(TMP4154, "NIM_merge_VARS", 14);
STRING_LITERAL(TMP4155, "NIM_merge_PROCS", 15);
STRING_LITERAL(TMP4156, "NIM_merge_INIT_PROC", 19);
STRING_LITERAL(TMP4157, "NIM_merge_TYPE_INIT1", 20);
STRING_LITERAL(TMP4158, "NIM_merge_TYPE_INIT2", 20);
STRING_LITERAL(TMP4159, "NIM_merge_TYPE_INIT3", 20);
STRING_LITERAL(TMP4160, "NIM_merge_DEBUG_INIT", 20);
STRING_LITERAL(TMP4161, "NIM_merge_DYNLIB_INIT", 21);
STRING_LITERAL(TMP4162, "NIM_merge_DYNLIB_DEINIT", 23);
NIM_CONST TY551013 cfilesectionnames_551012 = {((NimStringDesc*) &TMP4145),
((NimStringDesc*) &TMP4146),
((NimStringDesc*) &TMP4147),
((NimStringDesc*) &TMP4148),
((NimStringDesc*) &TMP4149),
((NimStringDesc*) &TMP4150),
((NimStringDesc*) &TMP4151),
((NimStringDesc*) &TMP4152),
((NimStringDesc*) &TMP4153),
((NimStringDesc*) &TMP4154),
((NimStringDesc*) &TMP4155),
((NimStringDesc*) &TMP4156),
((NimStringDesc*) &TMP4157),
((NimStringDesc*) &TMP4158),
((NimStringDesc*) &TMP4159),
((NimStringDesc*) &TMP4160),
((NimStringDesc*) &TMP4161),
((NimStringDesc*) &TMP4162)}
;
STRING_LITERAL(TMP4163, "NIM_merge_PROC_LOCALS", 21);
STRING_LITERAL(TMP4164, "NIM_merge_PROC_INIT", 19);
STRING_LITERAL(TMP4165, "NIM_merge_PROC_BODY", 19);
NIM_CONST TY551019 cprocsectionnames_551018 = {((NimStringDesc*) &TMP4163),
((NimStringDesc*) &TMP4164),
((NimStringDesc*) &TMP4165)}
;
STRING_LITERAL(TMP4166, "ccgmerge: unknown section: ", 27);
STRING_LITERAL(TMP4167, "ccgmerge: \'*/\' expected", 23);
STRING_LITERAL(TMP4172, "/*\011", 3);
STRING_LITERAL(TMP4173, ":*/", 3);
STRING_LITERAL(TMP4183, "/*\011NIM_merge_INFO:", 18);
STRING_LITERAL(TMP4184, "typeCache:{", 11);
STRING_LITERAL(TMP4185, "declared:{", 10);
STRING_LITERAL(TMP4186, "typeInfo:{", 10);
STRING_LITERAL(TMP4187, "labels:", 7);
STRING_LITERAL(TMP4188, " hasframe:", 10);
STRING_LITERAL(TMP4189, "*/", 2);
extern TNimType NTI214024; /* TBaseLexer */
extern TNimType NTI226812; /* PType */
extern TNimType NTI226852; /* TType */
extern NimStringDesc* tnl_175613;
extern tgcheap47016 gch_47044;
extern NU32 gglobaloptions_170118;

N_NIMCALL(void, skipuntilcmd_551402)(tbaselexer214024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_214066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_214074(l, pos);
			}
			break;
			case 0:
			{
				goto LA1;
			}
			break;
			case 47:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = ((NU8)((*l).Buf[(NI32)(pos + 1)]) == (NU8)(42));
					if (!(LOC9)) goto LA10;
					LOC9 = ((NU8)((*l).Buf[(NI32)(pos + 2)]) == (NU8)(9));
					LA10: ;
					if (!LOC9) goto LA11;
					pos += 3;
					goto LA1;
				}
				LA11: ;
				pos += 1;
			}
			break;
			default:
			{
				pos += 1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
}

N_NIMCALL(void, readkey_551535)(tbaselexer214024* l, NimStringDesc** result) {
	NI pos;
	NCSTRING buf;
	pos = (*l).Bufpos;
	buf = (*l).Buf;
	(*result) = setLengthStr((*result), 0);
	{
		while (1) {
			if (!(((NU8)(buf[pos])) >= ((NU8)(97)) && ((NU8)(buf[pos])) <= ((NU8)(122)) || ((NU8)(buf[pos])) >= ((NU8)(65)) && ((NU8)(buf[pos])) <= ((NU8)(90)) || ((NU8)(buf[pos])) >= ((NU8)(48)) && ((NU8)(buf[pos])) <= ((NU8)(57)) || ((NU8)(buf[pos])) == ((NU8)(95)))) goto LA2;
			(*result) = addChar((*result), buf[pos]);
			pos += 1;
		} LA2: ;
	}
	{
		if (!!(((NU8)(buf[pos]) == (NU8)(58)))) goto LA5;
		internalerror_199006(((NimStringDesc*) &TMP4064));
	}
	LA5: ;
	(*l).Bufpos = (NI32)(pos + 1);
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

N_NIMCALL(void, skipwhite_551372)(tbaselexer214024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_214066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_214074(l, pos);
			}
			break;
			case 32:
			{
				pos += 1;
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
}

N_NIMCALL(ttype226852*, newfaketype_551581)(NI id) {
	ttype226852* result;
	result = 0;
	result = (ttype226852*) newObj((&NTI226812), sizeof(ttype226852));
	(*result).Sup.Sup.m_type = (&NTI226852);
	(*result).Sup.Id = id;
	return result;
}

N_NIMCALL(void, readtypecache_551607)(tbaselexer214024* l, tidtable226864* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_199006(((NimStringDesc*) &TMP4071));
	}
	LA3: ;
	(*l).Bufpos += 1;
	{
		while (1) {
			NI key;
			NimStringDesc* value;
			ttype226852* LOC11;
			tidobj201015* LOC12;
			trope178009* LOC13;
			TNimObject* LOC14;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_551372(l);
			key = decodevint_235359((*l).Buf, (&(*l).Bufpos));
			{
				if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(58)))) goto LA9;
				internalerror_199006(((NimStringDesc*) &TMP4064));
			}
			LA9: ;
			(*l).Bufpos += 1;
			value = decodestr_235155((*l).Buf, (&(*l).Bufpos));
			LOC11 = 0;
			LOC11 = newfaketype_551581(key);
			LOC12 = 0;
			LOC12 = &LOC11->Sup;
			LOC13 = 0;
			LOC13 = torope_178076(value);
			LOC14 = 0;
			LOC14 = &LOC13->Sup;
			idtableput_236196(result, LOC12, LOC14);
		} LA6: ;
	}
	(*l).Bufpos += 1;
}

N_NIMCALL(void, readintset_551666)(tbaselexer214024* l, intset223056* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_199006(((NimStringDesc*) &TMP4071));
	}
	LA3: ;
	(*l).Bufpos += 1;
	{
		while (1) {
			NI key;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_551372(l);
			key = decodevint_235359((*l).Buf, (&(*l).Bufpos));
			incl_223869(result, key);
		} LA6: ;
	}
	(*l).Bufpos += 1;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, processmergeinfo_551711)(tbaselexer214024* l, tcgen550035* m) {
	NimStringDesc* k;
	k = rawNewString(9);
	{
		while (1) {
			skipwhite_551372(l);
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = ((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(42));
				if (!(LOC5)) goto LA6;
				LOC5 = ((NU8)((*l).Buf[(NI32)((*l).Bufpos + 1)]) == (NU8)(47));
				LA6: ;
				if (!LOC5) goto LA7;
				(*l).Bufpos += 2;
				goto LA1;
			}
			LA7: ;
			readkey_551535(l, (&k));
			if (eqStrings(k, ((NimStringDesc*) &TMP4066))) goto LA9;
			if (eqStrings(k, ((NimStringDesc*) &TMP4067))) goto LA10;
			if (eqStrings(k, ((NimStringDesc*) &TMP4068))) goto LA11;
			if (eqStrings(k, ((NimStringDesc*) &TMP4069))) goto LA12;
			if (eqStrings(k, ((NimStringDesc*) &TMP4070))) goto LA13;
			goto LA14;
			LA9: ;
			{
				readtypecache_551607(l, (&(*m).Typecache));
			}
			goto LA15;
			LA10: ;
			{
				readintset_551666(l, (&(*m).Declaredthings));
			}
			goto LA15;
			LA11: ;
			{
				readintset_551666(l, (&(*m).Typeinfomarker));
			}
			goto LA15;
			LA12: ;
			{
				NI LOC20;
				LOC20 = 0;
				LOC20 = decodevint_235359((*l).Buf, (&(*l).Bufpos));
				(*m).Labels = ((NI) (LOC20));
			}
			goto LA15;
			LA13: ;
			{
				NI LOC22;
				LOC22 = 0;
				LOC22 = decodevint_235359((*l).Buf, (&(*l).Bufpos));
				(*m).Framedeclared = !((LOC22 == 0));
			}
			goto LA15;
			LA14: ;
			{
				NimStringDesc* LOC24;
				LOC24 = 0;
				LOC24 = rawNewString(k->Sup.len + 22);
appendString(LOC24, ((NimStringDesc*) &TMP4072));
appendString(LOC24, k);
				internalerror_199006(LOC24);
			}
			LA15: ;
		}
	} LA1: ;
}

N_NIMCALL(void, readmergeinfo_551815)(NimStringDesc* cfilename, tcgen550035* m) {
	tllstream212204* s_551820;
	tbaselexer214024 l;
	NimStringDesc* k;
	s_551820 = llstreamopen_212233(cfilename, ((NU8) 0));
	{
		if (!(s_551820 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.m_type = (&NTI214024);
	openbaselexer_214035((&l), s_551820, 8192);
	k = rawNewString(23);
	{
		while (1) {
			skipuntilcmd_551402((&l));
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_551535((&l), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4065))) goto LA13;
				processmergeinfo_551711((&l), m);
				goto LA5;
			}
			LA13: ;
		}
	} LA5: ;
	closebaselexer_214045((&l));
	BeforeRet: ;
}

static N_INLINE(trope178009**, s_550183)(tcproc550031* p, NU8 s) {
	trope178009** result;
	result = 0;
	result = &(*p).Blocks->data[(NI32)((*p).Blocks->Sup.len - 1)].Sections[(s)- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, mergerequired_552137)(tcgen550035* m) {
	NIM_BOOL result;
	result = 0;
	{
		NU8 i_552185;
		NU8 res_552270;
		i_552185 = 0;
		res_552270 = ((NU8) 1);
		{
			while (1) {
				if (!(res_552270 <= ((NU8) 10))) goto LA3;
				i_552185 = res_552270;
				{
					if (!!(((*m).S[(i_552185)- 0] == NIM_NIL))) goto LA6;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA6: ;
				res_552270 += 1;
			} LA3: ;
		}
	}
	{
		NU8 i_552249;
		NU8 res_552277;
		i_552249 = 0;
		res_552277 = ((NU8) 0);
		{
			while (1) {
				if (!(res_552277 <= ((NU8) 2))) goto LA10;
				i_552249 = res_552277;
				{
					trope178009** LOC13;
					LOC13 = 0;
					LOC13 = s_550183((*m).Initproc, i_552249);
					if (!!(((*LOC13) == NIM_NIL))) goto LA14;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA14: ;
				res_552277 += 1;
			} LA10: ;
		}
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, atendmark_551456)(NCSTRING buf, NI pos) {
	NIM_BOOL result;
	NI s;
	result = 0;
	s = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (s < 19);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(buf[(NI32)(pos + s)]) == (NU8)(((NimStringDesc*) &TMP4144)->data[s]));
			LA4: ;
			if (!LOC3) goto LA2;
			s += 1;
		} LA2: ;
	}
	result = (s == 19);
	return result;
}

N_NIMCALL(trope178009*, readverbatimsection_551489)(tbaselexer214024* l) {
	trope178009* result;
	NI pos;
	NCSTRING buf;
	NimStringDesc* r;
	result = 0;
	pos = (*l).Bufpos;
	buf = (*l).Buf;
	r = rawNewString(30000);
	{
		while (1) {
			switch (((NU8)(buf[pos]))) {
			case 13:
			{
				pos = handlecr_214066(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_175613->Sup.len + 0);
appendString(r, tnl_175613);
			}
			break;
			case 10:
			{
				pos = handlelf_214074(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_175613->Sup.len + 0);
appendString(r, tnl_175613);
			}
			break;
			case 0:
			{
				internalerror_199006(((NimStringDesc*) &TMP4143));
				goto LA1;
			}
			break;
			default:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = atendmark_551456(buf, pos);
					if (!LOC9) goto LA10;
					pos += 19;
					goto LA1;
				}
				LA10: ;
				r = addChar(r, buf[pos]);
				pos += 1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
	result = torope_178076(r);
	return result;
}

static N_INLINE(NI, find_551914)(TY551013 a_551919, NimStringDesc* item_551921) {
	NI result;
	result = 0;
	{
		NimStringDesc* i_551983;
		NU8 i_551999;
		i_551983 = 0;
		i_551999 = ((NU8) 0);
		{
			if (!(i_551999 <= ((NU8) 17))) goto LA4;
			{
				while (1) {
					i_551983 = a_551919[(i_551999)- 0];
					{
						if (!eqStrings(i_551983, item_551921)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += 1;
					{
						if (!(((NU8) 17) <= i_551999)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_551999 += 1;
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, find_552017)(TY551019 a_552022, NimStringDesc* item_552024) {
	NI result;
	result = 0;
	{
		NimStringDesc* i_552086;
		NU8 i_552102;
		i_552086 = 0;
		i_552102 = ((NU8) 0);
		{
			if (!(i_552102 <= ((NU8) 2))) goto LA4;
			{
				while (1) {
					i_552086 = a_552022[(i_552102)- 0];
					{
						if (!eqStrings(i_552086, item_552024)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += 1;
					{
						if (!(((NU8) 2) <= i_552102)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_552102 += 1;
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, readmergesections_551867)(NimStringDesc* cfilename, tmergesections551861* m) {
	tllstream212204* s_551873;
	tbaselexer214024 l;
	NimStringDesc* k;
	s_551873 = llstreamopen_212233(cfilename, ((NU8) 0));
	{
		if (!(s_551873 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.m_type = (&NTI214024);
	openbaselexer_214035((&l), s_551873, 8192);
	k = rawNewString(23);
	{
		while (1) {
			skipuntilcmd_551402((&l));
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_551535((&l), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4065))) goto LA13;
			}
			goto LA11;
			LA13: ;
			{
				NIM_BOOL LOC16;
				trope178009* verbatim;
				NI sectiona;
				LOC16 = 0;
				LOC16 = ((NU8)(l.Buf[l.Bufpos]) == (NU8)(42));
				if (!(LOC16)) goto LA17;
				LOC16 = ((NU8)(l.Buf[(NI32)(l.Bufpos + 1)]) == (NU8)(47));
				LA17: ;
				if (!LOC16) goto LA18;
				l.Bufpos += 2;
				skipwhite_551372((&l));
				verbatim = readverbatimsection_551489((&l));
				skipwhite_551372((&l));
				sectiona = find_551914(cfilesectionnames_551012, k);
				{
					NIM_BOOL LOC22;
					LOC22 = 0;
					LOC22 = (0 < sectiona);
					if (!(LOC22)) goto LA23;
					LOC22 = (sectiona <= 17);
					LA23: ;
					if (!LOC22) goto LA24;
					unsureAsgnRef((void**) (&(*m).F[(sectiona)- 0]), verbatim);
				}
				goto LA20;
				LA24: ;
				{
					NI sectionb;
					sectionb = find_552017(cprocsectionnames_551018, k);
					{
						NIM_BOOL LOC29;
						LOC29 = 0;
						LOC29 = (0 <= sectionb);
						if (!(LOC29)) goto LA30;
						LOC29 = (sectionb <= 2);
						LA30: ;
						if (!LOC29) goto LA31;
						unsureAsgnRef((void**) (&(*m).P[(sectionb)- 0]), verbatim);
					}
					goto LA27;
					LA31: ;
					{
						NimStringDesc* LOC34;
						LOC34 = 0;
						LOC34 = rawNewString(k->Sup.len + 27);
appendString(LOC34, ((NimStringDesc*) &TMP4166));
appendString(LOC34, k);
						internalerror_199006(LOC34);
					}
					LA27: ;
				}
				LA20: ;
			}
			goto LA11;
			LA18: ;
			{
				internalerror_199006(((NimStringDesc*) &TMP4167));
			}
			LA11: ;
		}
	} LA5: ;
	closebaselexer_214045((&l));
	BeforeRet: ;
}

static N_INLINE(tcell44933*, usrtocell_48646)(void* usr) {
	tcell44933* result;
	result = 0;
	result = ((tcell44933*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44933))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44933* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44933* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44933* c;
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

N_NIMCALL(void, mergefiles_552303)(NimStringDesc* cfilename, tcgen550035* m) {
	tmergesections551861 old;
	memset((void*)(&old), 0, sizeof(old));
	readmergesections_551867(cfilename, (&old));
	{
		NU8 i_552321;
		NU8 res_552345;
		i_552321 = 0;
		res_552345 = ((NU8) 0);
		{
			while (1) {
				if (!(res_552345 <= ((NU8) 17))) goto LA3;
				i_552321 = res_552345;
				asgnRefNoCycle((void**) (&(*m).S[(i_552321)- 0]), con_178024(old.F[(i_552321)- 0], (*m).S[(i_552321)- 0]));
				res_552345 += 1;
			} LA3: ;
		}
	}
	{
		NU8 i_552336;
		NU8 res_552352;
		i_552336 = 0;
		res_552352 = ((NU8) 0);
		{
			while (1) {
				trope178009** LOC7;
				trope178009** LOC8;
				if (!(res_552352 <= ((NU8) 2))) goto LA6;
				i_552336 = res_552352;
				LOC7 = 0;
				LOC7 = s_550183((*m).Initproc, i_552336);
				LOC8 = 0;
				LOC8 = s_550183((*m).Initproc, i_552336);
				unsureAsgnRef((void**) (&(*LOC7)), con_178024(old.P[(i_552336)- 0], (*LOC8)));
				res_552352 += 1;
			} LA6: ;
		}
	}
}

N_NIMCALL(trope178009*, gensectionstart_551126)(NU8 ps) {
	trope178009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_170118) == 0))) goto LA3;
		result = torope_178076(tnl_175613);
		app_178060(&result, ((NimStringDesc*) &TMP4172));
		app_178060(&result, cprocsectionnames_551018[(ps)- 0]);
		app_178060(&result, ((NimStringDesc*) &TMP4173));
		app_178060(&result, tnl_175613);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope178009*, gensectionend_551177)(NU8 ps) {
	trope178009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_170118) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_175613->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4144));
appendString(LOC5, tnl_175613);
		result = torope_178076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope178009*, gensectionstart_551028)(NU8 fs) {
	trope178009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_170118) == 0))) goto LA3;
		result = torope_178076(tnl_175613);
		app_178060(&result, ((NimStringDesc*) &TMP4172));
		app_178060(&result, cfilesectionnames_551012[(fs)- 0]);
		app_178060(&result, ((NimStringDesc*) &TMP4173));
		app_178060(&result, tnl_175613);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope178009*, gensectionend_551079)(NU8 fs) {
	trope178009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_170118) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_175613->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4144));
appendString(LOC5, tnl_175613);
		result = torope_178076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, writetypecache_551224)(tidtable226864 a, NimStringDesc** s) {
	NI i;
	i = 0;
	{
		NI id_551230;
		TNimObject* value_551231;
		id_551230 = 0;
		value_551231 = 0;
		{
			NI i_551248;
			NI HEX3Atmp_551250;
			NI res_551252;
			i_551248 = 0;
			HEX3Atmp_551250 = 0;
			HEX3Atmp_551250 = (a.Data->Sup.len-1);
			res_551252 = 0;
			{
				while (1) {
					if (!(res_551252 <= HEX3Atmp_551250)) goto LA4;
					i_551248 = res_551252;
					{
						NimStringDesc* LOC14;
						if (!!((a.Data->data[i_551248].Key == NIM_NIL))) goto LA7;
						id_551230 = (*a.Data->data[i_551248].Key).Id;
						value_551231 = a.Data->data[i_551248].Val;
						{
							if (!(i == 10)) goto LA11;
							i = 0;
							(*s) = resizeString((*s), tnl_175613->Sup.len + 0);
appendString((*s), tnl_175613);
						}
						goto LA9;
						LA11: ;
						{
							(*s) = addChar((*s), 32);
						}
						LA9: ;
						encodevint_235304(id_551230, s);
						(*s) = addChar((*s), 58);
						LOC14 = 0;
						LOC14 = ropetostr_178101(((trope178009*) (value_551231)));
						encodestr_235042(LOC14, s);
						i += 1;
					}
					LA7: ;
					res_551252 += 1;
				} LA4: ;
			}
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(void, writeintset_551271)(intset223056 a, NimStringDesc** s) {
	NI i;
	i = 0;
	{
		NI x_551277;
		ttrunk223052* r_551295;
		x_551277 = 0;
		r_551295 = a.Head;
		{
			while (1) {
				NI i_551297;
				if (!!((r_551295 == NIM_NIL))) goto LA3;
				i_551297 = 0;
				{
					while (1) {
						NI w_551299;
						NI j_551301;
						if (!(i_551297 <= 15)) goto LA5;
						w_551299 = (*r_551295).Bits[(i_551297)- 0];
						j_551301 = 0;
						{
							while (1) {
								if (!!((w_551299 == 0))) goto LA7;
								{
									if (!!((((NI) ((NI)(w_551299 & 1))) == 0))) goto LA10;
									x_551277 = (NI)((NI)((NU32)((*r_551295).Key) << (NU32)(9)) | (NI)((NU32)((NI)((NU32)(i_551297) << (NU32)(5))) + (NU32)(j_551301)));
									{
										if (!(i == 10)) goto LA14;
										i = 0;
										(*s) = resizeString((*s), tnl_175613->Sup.len + 0);
appendString((*s), tnl_175613);
									}
									goto LA12;
									LA14: ;
									{
										(*s) = addChar((*s), 32);
									}
									LA12: ;
									encodevint_235304(x_551277, s);
									i += 1;
								}
								LA10: ;
								j_551301 += 1;
								w_551299 = (NI)((NU32)(w_551299) >> (NU32)(1));
							} LA7: ;
						}
						i_551297 += 1;
					} LA5: ;
				}
				r_551295 = (*r_551295).Next;
			} LA3: ;
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(trope178009*, genmergeinfo_551329)(tcgen550035* m) {
	trope178009* result;
	NimStringDesc* s;
	result = 0;
	{
		if (!!(((gglobaloptions_170118 &(1<<((((NU8) 14))&31)))!=0))) goto LA3;
		result = NIM_NIL;
		goto BeforeRet;
	}
	LA3: ;
	s = copyString(((NimStringDesc*) &TMP4183));
	s = resizeString(s, tnl_175613->Sup.len + 0);
appendString(s, tnl_175613);
	s = resizeString(s, 11);
appendString(s, ((NimStringDesc*) &TMP4184));
	writetypecache_551224((*m).Typecache, (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4185));
	writeintset_551271((*m).Declaredthings, (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4186));
	writeintset_551271((*m).Typeinfomarker, (&s));
	s = resizeString(s, 7);
appendString(s, ((NimStringDesc*) &TMP4187));
	encodevint_235304(((NI) ((*m).Labels)), (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4188));
	encodevint_235304(((NI) ((*m).Framedeclared)), (&s));
	s = resizeString(s, tnl_175613->Sup.len + 0);
appendString(s, tnl_175613);
	s = resizeString(s, 2);
appendString(s, ((NimStringDesc*) &TMP4189));
	result = torope_178076(s);
	BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_ccgmergeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_ccgmergeDatInit)(void) {
}

