/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcgen549035 tcgen549035;
typedef struct tllstream211204 tllstream211204;
typedef struct tbaselexer213024 tbaselexer213024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tidtable225864 tidtable225864;
typedef struct tidobj200015 tidobj200015;
typedef struct ttype225852 ttype225852;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct tnode225816 tnode225816;
typedef struct tsym225846 tsym225846;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
typedef struct tpasscontext286005 tpasscontext286005;
typedef struct tidpairseq225862 tidpairseq225862;
typedef struct tidpair225860 tidpair225860;
typedef struct intset222056 intset222056;
typedef struct ttrunk222052 ttrunk222052;
typedef struct ttrunkseq222054 ttrunkseq222054;
typedef struct tlinkedlist127028 tlinkedlist127028;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tcproc549031 tcproc549031;
typedef struct tnodetable225876 tnodetable225876;
typedef struct tnodepairseq225874 tnodepairseq225874;
typedef struct tnodepair225872 tnodepair225872;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct TY195552 TY195552;
typedef struct TY549102 TY549102;
typedef struct tblock549029 tblock549029;
typedef struct tmergesections550861 tmergesections550861;
typedef struct tcell45135 tcell45135;
typedef struct tcellseq45151 tcellseq45151;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45147 tcellset45147;
typedef struct tpagedesc45143 tpagedesc45143;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct tident200021 tident200021;
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tlib225834 tlib225834;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
typedef struct TY225936 TY225936;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
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
struct  tpasscontext286005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope177009* tcfilesections549019[18];
struct  tidpair225860  {
tidobj200015* Key;
TNimObject* Val;
};
struct  tidtable225864  {
NI Counter;
tidpairseq225862* Data;
};
struct  intset222056  {
NI Counter;
NI Max;
ttrunk222052* Head;
ttrunkseq222054* Data;
};
struct  tlinkedlist127028  {
tlistentry127022* Head;
tlistentry127022* Tail;
NI Counter;
};
struct  tnodepair225872  {
NI H;
tnode225816* Key;
NI Val;
};
struct  tnodetable225876  {
NI Counter;
tnodepairseq225874* Data;
};
typedef trope177009* TY549138[10];
struct  tcgen549035  {
  tpasscontext286005 Sup;
tsym225846* Module;
NimStringDesc* Filename;
tcfilesections549019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable225864 Typecache;
tidtable225864 Forwtypecache;
intset222056 Declaredthings;
intset222056 Declaredprotos;
tlinkedlist127028 Headerfiles;
intset222056 Typeinfomarker;
tcproc549031* Initproc;
tcproc549031* Postinitproc;
tcproc549031* Preinitproc;
ttypeseq225848* Typestack;
tnodetable225876 Datacache;
tsymseq225818* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope177009* Typenodesname;
trope177009* Nimtypesname;
NI Labels;
TY549138 Extensionloaders;
trope177009* Injectstmt;
};
typedef trope177009* tcprocsections549023[3];
struct  tblock549029  {
NI Id;
trope177009* Label;
tcprocsections549023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc549031  {
tsym225846* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq225810* Nestedtrystmts;
NI Inexceptblock;
TY195552* Finallysafepoints;
NI Labels;
TY549102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen549035* Module;
NI Withinloop;
NI Gcframeid;
trope177009* Gcframetype;
};
struct  tmergesections550861  {
tcfilesections549019 F;
tcprocsections549023 P;
};
typedef NimStringDesc* TY550013[18];
typedef NimStringDesc* TY550019[3];
struct  tcell45135  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45151  {
NI Len;
NI Cap;
tcell45135** D;
};
struct  tcellset45147  {
NI Counter;
NI Max;
tpagedesc45143* Head;
tpagedesc45143** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
};
struct  tgcstat47214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45151 Zct;
tcellseq45151 Decstack;
tcellset45147 Cycleroots;
tcellseq45151 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
};
typedef NI TY26620[16];
struct  ttrunk222052  {
ttrunk222052* Next;
NI Key;
TY26620 Bits;
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
struct  tlineinfo195539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
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
struct  tpagedesc45143  {
tpagedesc45143* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
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
struct  tlib225834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode225816* Path;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct tidpairseq225862 {
  TGenericSeq Sup;
  tidpair225860 data[SEQ_DECL_SIZE];
};
struct ttrunkseq222054 {
  TGenericSeq Sup;
  ttrunk222052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq225874 {
  TGenericSeq Sup;
  tnodepair225872 data[SEQ_DECL_SIZE];
};
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct TY195552 {
  TGenericSeq Sup;
  trope177009* data[SEQ_DECL_SIZE];
};
struct TY549102 {
  TGenericSeq Sup;
  tblock549029 data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tllstream211204*, llstreamopen_211233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, openbaselexer_213035)(tbaselexer213024* l, tllstream211204* inputstream, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, skipuntilcmd_550402)(tbaselexer213024* l);
N_NIMCALL(NI, handlecr_213066)(tbaselexer213024* l, NI pos);
N_NIMCALL(NI, handlelf_213074)(tbaselexer213024* l, NI pos);
N_NIMCALL(void, readkey_550535)(tbaselexer213024* l, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, internalerror_198006)(NimStringDesc* errmsg);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, processmergeinfo_550711)(tbaselexer213024* l, tcgen549035* m);
N_NIMCALL(void, skipwhite_550372)(tbaselexer213024* l);
N_NIMCALL(void, readtypecache_550607)(tbaselexer213024* l, tidtable225864* result);
N_NIMCALL(NI, decodevint_234359)(NCSTRING s, NI* pos);
N_NIMCALL(NimStringDesc*, decodestr_234155)(NCSTRING s, NI* pos);
N_NIMCALL(void, idtableput_235196)(tidtable225864* t, tidobj200015* key, TNimObject* val);
N_NIMCALL(ttype225852*, newfaketype_550581)(NI id);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(trope177009*, torope_177076)(NimStringDesc* s);
N_NIMCALL(void, readintset_550666)(tbaselexer213024* l, intset222056* result);
N_NIMCALL(void, incl_222869)(intset222056* s, NI key);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(void, closebaselexer_213045)(tbaselexer213024* l);
static N_INLINE(trope177009**, s_549183)(tcproc549031* p, NU8 s);
N_NIMCALL(void, readmergesections_550867)(NimStringDesc* cfilename, tmergesections550861* m);
N_NIMCALL(trope177009*, readverbatimsection_550489)(tbaselexer213024* l);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NIM_BOOL, atendmark_550456)(NCSTRING buf, NI pos);
static N_INLINE(NI, find_550914)(TY550013 a_550919, NimStringDesc* item_550921);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, find_551017)(TY550019 a_551022, NimStringDesc* item_551024);
N_NIMCALL(trope177009*, con_177024)(trope177009* a, trope177009* b);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
N_NIMCALL(void, app_177060)(trope177009** a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, writetypecache_550224)(tidtable225864 a, NimStringDesc** s);
N_NIMCALL(void, encodevint_234304)(NI x, NimStringDesc** result);
N_NIMCALL(void, encodestr_234042)(NimStringDesc* s, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, ropetostr_177101)(trope177009* p);
N_NIMCALL(void, writeintset_550271)(intset222056 a, NimStringDesc** s);
STRING_LITERAL(TMP4059, "ccgmerge: \':\' expected", 22);
STRING_LITERAL(TMP4060, "NIM_merge_INFO", 14);
STRING_LITERAL(TMP4061, "typeCache", 9);
STRING_LITERAL(TMP4062, "declared", 8);
STRING_LITERAL(TMP4063, "typeInfo", 8);
STRING_LITERAL(TMP4064, "labels", 6);
STRING_LITERAL(TMP4065, "hasframe", 8);
STRING_LITERAL(TMP4066, "ccgmerge: \'{\' expected", 22);
STRING_LITERAL(TMP4067, "ccgmerge: unkown key: ", 22);
STRING_LITERAL(TMP4138, "ccgmerge: expected: /*\011NIM_merge_END:*/", 39);
STRING_LITERAL(TMP4139, "/*\011NIM_merge_END:*/", 19);
STRING_LITERAL(TMP4140, "", 0);
STRING_LITERAL(TMP4141, "NIM_merge_HEADERS", 17);
STRING_LITERAL(TMP4142, "NIM_merge_FORWARD_TYPES", 23);
STRING_LITERAL(TMP4143, "NIM_merge_TYPES", 15);
STRING_LITERAL(TMP4144, "NIM_merge_SEQ_TYPES", 19);
STRING_LITERAL(TMP4145, "NIM_merge_FIELD_INFO", 20);
STRING_LITERAL(TMP4146, "NIM_merge_TYPE_INFO", 19);
STRING_LITERAL(TMP4147, "NIM_merge_PROC_HEADERS", 22);
STRING_LITERAL(TMP4148, "NIM_merge_DATA", 14);
STRING_LITERAL(TMP4149, "NIM_merge_VARS", 14);
STRING_LITERAL(TMP4150, "NIM_merge_PROCS", 15);
STRING_LITERAL(TMP4151, "NIM_merge_INIT_PROC", 19);
STRING_LITERAL(TMP4152, "NIM_merge_TYPE_INIT1", 20);
STRING_LITERAL(TMP4153, "NIM_merge_TYPE_INIT2", 20);
STRING_LITERAL(TMP4154, "NIM_merge_TYPE_INIT3", 20);
STRING_LITERAL(TMP4155, "NIM_merge_DEBUG_INIT", 20);
STRING_LITERAL(TMP4156, "NIM_merge_DYNLIB_INIT", 21);
STRING_LITERAL(TMP4157, "NIM_merge_DYNLIB_DEINIT", 23);
NIM_CONST TY550013 cfilesectionnames_550012 = {((NimStringDesc*) &TMP4140),
((NimStringDesc*) &TMP4141),
((NimStringDesc*) &TMP4142),
((NimStringDesc*) &TMP4143),
((NimStringDesc*) &TMP4144),
((NimStringDesc*) &TMP4145),
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
((NimStringDesc*) &TMP4157)}
;
STRING_LITERAL(TMP4158, "NIM_merge_PROC_LOCALS", 21);
STRING_LITERAL(TMP4159, "NIM_merge_PROC_INIT", 19);
STRING_LITERAL(TMP4160, "NIM_merge_PROC_BODY", 19);
NIM_CONST TY550019 cprocsectionnames_550018 = {((NimStringDesc*) &TMP4158),
((NimStringDesc*) &TMP4159),
((NimStringDesc*) &TMP4160)}
;
STRING_LITERAL(TMP4161, "ccgmerge: unknown section: ", 27);
STRING_LITERAL(TMP4162, "ccgmerge: \'*/\' expected", 23);
STRING_LITERAL(TMP4167, "/*\011", 3);
STRING_LITERAL(TMP4168, ":*/", 3);
STRING_LITERAL(TMP4178, "/*\011NIM_merge_INFO:", 18);
STRING_LITERAL(TMP4179, "typeCache:{", 11);
STRING_LITERAL(TMP4180, "declared:{", 10);
STRING_LITERAL(TMP4181, "typeInfo:{", 10);
STRING_LITERAL(TMP4182, "labels:", 7);
STRING_LITERAL(TMP4183, " hasframe:", 10);
STRING_LITERAL(TMP4184, "*/", 2);
extern TNimType NTI213024; /* TBaseLexer */
extern TNimType NTI225812; /* PType */
extern TNimType NTI225852; /* TType */
extern NimStringDesc* tnl_174613;
extern tgcheap47216 gch_47244;
extern NU32 gglobaloptions_169118;

N_NIMCALL(void, skipuntilcmd_550402)(tbaselexer213024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_213066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_213074(l, pos);
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

N_NIMCALL(void, readkey_550535)(tbaselexer213024* l, NimStringDesc** result) {
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
		internalerror_198006(((NimStringDesc*) &TMP4059));
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

N_NIMCALL(void, skipwhite_550372)(tbaselexer213024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_213066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_213074(l, pos);
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

N_NIMCALL(ttype225852*, newfaketype_550581)(NI id) {
	ttype225852* result;
	result = 0;
	result = (ttype225852*) newObj((&NTI225812), sizeof(ttype225852));
	(*result).Sup.Sup.m_type = (&NTI225852);
	(*result).Sup.Id = id;
	return result;
}

N_NIMCALL(void, readtypecache_550607)(tbaselexer213024* l, tidtable225864* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_198006(((NimStringDesc*) &TMP4066));
	}
	LA3: ;
	(*l).Bufpos += 1;
	{
		while (1) {
			NI key;
			NimStringDesc* value;
			ttype225852* LOC11;
			tidobj200015* LOC12;
			trope177009* LOC13;
			TNimObject* LOC14;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_550372(l);
			key = decodevint_234359((*l).Buf, (&(*l).Bufpos));
			{
				if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(58)))) goto LA9;
				internalerror_198006(((NimStringDesc*) &TMP4059));
			}
			LA9: ;
			(*l).Bufpos += 1;
			value = decodestr_234155((*l).Buf, (&(*l).Bufpos));
			LOC11 = 0;
			LOC11 = newfaketype_550581(key);
			LOC12 = 0;
			LOC12 = &LOC11->Sup;
			LOC13 = 0;
			LOC13 = torope_177076(value);
			LOC14 = 0;
			LOC14 = &LOC13->Sup;
			idtableput_235196(result, LOC12, LOC14);
		} LA6: ;
	}
	(*l).Bufpos += 1;
}

N_NIMCALL(void, readintset_550666)(tbaselexer213024* l, intset222056* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_198006(((NimStringDesc*) &TMP4066));
	}
	LA3: ;
	(*l).Bufpos += 1;
	{
		while (1) {
			NI key;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_550372(l);
			key = decodevint_234359((*l).Buf, (&(*l).Bufpos));
			incl_222869(result, key);
		} LA6: ;
	}
	(*l).Bufpos += 1;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, processmergeinfo_550711)(tbaselexer213024* l, tcgen549035* m) {
	NimStringDesc* k;
	k = rawNewString(9);
	{
		while (1) {
			skipwhite_550372(l);
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
			readkey_550535(l, (&k));
			if (eqStrings(k, ((NimStringDesc*) &TMP4061))) goto LA9;
			if (eqStrings(k, ((NimStringDesc*) &TMP4062))) goto LA10;
			if (eqStrings(k, ((NimStringDesc*) &TMP4063))) goto LA11;
			if (eqStrings(k, ((NimStringDesc*) &TMP4064))) goto LA12;
			if (eqStrings(k, ((NimStringDesc*) &TMP4065))) goto LA13;
			goto LA14;
			LA9: ;
			{
				readtypecache_550607(l, (&(*m).Typecache));
			}
			goto LA15;
			LA10: ;
			{
				readintset_550666(l, (&(*m).Declaredthings));
			}
			goto LA15;
			LA11: ;
			{
				readintset_550666(l, (&(*m).Typeinfomarker));
			}
			goto LA15;
			LA12: ;
			{
				NI LOC20;
				LOC20 = 0;
				LOC20 = decodevint_234359((*l).Buf, (&(*l).Bufpos));
				(*m).Labels = ((NI) (LOC20));
			}
			goto LA15;
			LA13: ;
			{
				NI LOC22;
				LOC22 = 0;
				LOC22 = decodevint_234359((*l).Buf, (&(*l).Bufpos));
				(*m).Framedeclared = !((LOC22 == 0));
			}
			goto LA15;
			LA14: ;
			{
				NimStringDesc* LOC24;
				LOC24 = 0;
				LOC24 = rawNewString(k->Sup.len + 22);
appendString(LOC24, ((NimStringDesc*) &TMP4067));
appendString(LOC24, k);
				internalerror_198006(LOC24);
			}
			LA15: ;
		}
	} LA1: ;
}

N_NIMCALL(void, readmergeinfo_550815)(NimStringDesc* cfilename, tcgen549035* m) {
	tllstream211204* s_550820;
	tbaselexer213024 l;
	NimStringDesc* k;
	s_550820 = llstreamopen_211233(cfilename, ((NU8) 0));
	{
		if (!(s_550820 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.m_type = (&NTI213024);
	openbaselexer_213035((&l), s_550820, 8192);
	k = rawNewString(23);
	{
		while (1) {
			skipuntilcmd_550402((&l));
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_550535((&l), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4060))) goto LA13;
				processmergeinfo_550711((&l), m);
				goto LA5;
			}
			LA13: ;
		}
	} LA5: ;
	closebaselexer_213045((&l));
	BeforeRet: ;
}

static N_INLINE(trope177009**, s_549183)(tcproc549031* p, NU8 s) {
	trope177009** result;
	result = 0;
	result = &(*p).Blocks->data[(NI32)((*p).Blocks->Sup.len - 1)].Sections[(s)- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, mergerequired_551137)(tcgen549035* m) {
	NIM_BOOL result;
	result = 0;
	{
		NU8 i_551185;
		NU8 res_551270;
		i_551185 = 0;
		res_551270 = ((NU8) 1);
		{
			while (1) {
				if (!(res_551270 <= ((NU8) 10))) goto LA3;
				i_551185 = res_551270;
				{
					if (!!(((*m).S[(i_551185)- 0] == NIM_NIL))) goto LA6;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA6: ;
				res_551270 += 1;
			} LA3: ;
		}
	}
	{
		NU8 i_551249;
		NU8 res_551277;
		i_551249 = 0;
		res_551277 = ((NU8) 0);
		{
			while (1) {
				if (!(res_551277 <= ((NU8) 2))) goto LA10;
				i_551249 = res_551277;
				{
					trope177009** LOC13;
					LOC13 = 0;
					LOC13 = s_549183((*m).Initproc, i_551249);
					if (!!(((*LOC13) == NIM_NIL))) goto LA14;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA14: ;
				res_551277 += 1;
			} LA10: ;
		}
	}
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, atendmark_550456)(NCSTRING buf, NI pos) {
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
			LOC3 = ((NU8)(buf[(NI32)(pos + s)]) == (NU8)(((NimStringDesc*) &TMP4139)->data[s]));
			LA4: ;
			if (!LOC3) goto LA2;
			s += 1;
		} LA2: ;
	}
	result = (s == 19);
	return result;
}

N_NIMCALL(trope177009*, readverbatimsection_550489)(tbaselexer213024* l) {
	trope177009* result;
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
				pos = handlecr_213066(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_174613->Sup.len + 0);
appendString(r, tnl_174613);
			}
			break;
			case 10:
			{
				pos = handlelf_213074(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_174613->Sup.len + 0);
appendString(r, tnl_174613);
			}
			break;
			case 0:
			{
				internalerror_198006(((NimStringDesc*) &TMP4138));
				goto LA1;
			}
			break;
			default:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = atendmark_550456(buf, pos);
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
	result = torope_177076(r);
	return result;
}

static N_INLINE(NI, find_550914)(TY550013 a_550919, NimStringDesc* item_550921) {
	NI result;
	result = 0;
	{
		NimStringDesc* i_550983;
		NU8 i_550999;
		i_550983 = 0;
		i_550999 = ((NU8) 0);
		{
			if (!(i_550999 <= ((NU8) 17))) goto LA4;
			{
				while (1) {
					i_550983 = a_550919[(i_550999)- 0];
					{
						if (!eqStrings(i_550983, item_550921)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += 1;
					{
						if (!(((NU8) 17) <= i_550999)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_550999 += 1;
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, find_551017)(TY550019 a_551022, NimStringDesc* item_551024) {
	NI result;
	result = 0;
	{
		NimStringDesc* i_551086;
		NU8 i_551102;
		i_551086 = 0;
		i_551102 = ((NU8) 0);
		{
			if (!(i_551102 <= ((NU8) 2))) goto LA4;
			{
				while (1) {
					i_551086 = a_551022[(i_551102)- 0];
					{
						if (!eqStrings(i_551086, item_551024)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += 1;
					{
						if (!(((NU8) 2) <= i_551102)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_551102 += 1;
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, readmergesections_550867)(NimStringDesc* cfilename, tmergesections550861* m) {
	tllstream211204* s_550873;
	tbaselexer213024 l;
	NimStringDesc* k;
	s_550873 = llstreamopen_211233(cfilename, ((NU8) 0));
	{
		if (!(s_550873 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.m_type = (&NTI213024);
	openbaselexer_213035((&l), s_550873, 8192);
	k = rawNewString(23);
	{
		while (1) {
			skipuntilcmd_550402((&l));
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_550535((&l), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4060))) goto LA13;
			}
			goto LA11;
			LA13: ;
			{
				NIM_BOOL LOC16;
				trope177009* verbatim;
				NI sectiona;
				LOC16 = 0;
				LOC16 = ((NU8)(l.Buf[l.Bufpos]) == (NU8)(42));
				if (!(LOC16)) goto LA17;
				LOC16 = ((NU8)(l.Buf[(NI32)(l.Bufpos + 1)]) == (NU8)(47));
				LA17: ;
				if (!LOC16) goto LA18;
				l.Bufpos += 2;
				skipwhite_550372((&l));
				verbatim = readverbatimsection_550489((&l));
				skipwhite_550372((&l));
				sectiona = find_550914(cfilesectionnames_550012, k);
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
					sectionb = find_551017(cprocsectionnames_550018, k);
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
appendString(LOC34, ((NimStringDesc*) &TMP4161));
appendString(LOC34, k);
						internalerror_198006(LOC34);
					}
					LA27: ;
				}
				LA20: ;
			}
			goto LA11;
			LA18: ;
			{
				internalerror_198006(((NimStringDesc*) &TMP4162));
			}
			LA11: ;
		}
	} LA5: ;
	closebaselexer_213045((&l));
	BeforeRet: ;
}

static N_INLINE(tcell45135*, usrtocell_48846)(void* usr) {
	tcell45135* result;
	result = 0;
	result = ((tcell45135*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45135))))));
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45135* c) {
	addzct_48817((&gch_47244.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45135* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48846(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45135* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48846((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, mergefiles_551303)(NimStringDesc* cfilename, tcgen549035* m) {
	tmergesections550861 old;
	memset((void*)(&old), 0, sizeof(old));
	readmergesections_550867(cfilename, (&old));
	{
		NU8 i_551321;
		NU8 res_551345;
		i_551321 = 0;
		res_551345 = ((NU8) 0);
		{
			while (1) {
				if (!(res_551345 <= ((NU8) 17))) goto LA3;
				i_551321 = res_551345;
				asgnRefNoCycle((void**) (&(*m).S[(i_551321)- 0]), con_177024(old.F[(i_551321)- 0], (*m).S[(i_551321)- 0]));
				res_551345 += 1;
			} LA3: ;
		}
	}
	{
		NU8 i_551336;
		NU8 res_551352;
		i_551336 = 0;
		res_551352 = ((NU8) 0);
		{
			while (1) {
				trope177009** LOC7;
				trope177009** LOC8;
				if (!(res_551352 <= ((NU8) 2))) goto LA6;
				i_551336 = res_551352;
				LOC7 = 0;
				LOC7 = s_549183((*m).Initproc, i_551336);
				LOC8 = 0;
				LOC8 = s_549183((*m).Initproc, i_551336);
				unsureAsgnRef((void**) (&(*LOC7)), con_177024(old.P[(i_551336)- 0], (*LOC8)));
				res_551352 += 1;
			} LA6: ;
		}
	}
}

N_NIMCALL(trope177009*, gensectionstart_550126)(NU8 ps) {
	trope177009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_169118) == 0))) goto LA3;
		result = torope_177076(tnl_174613);
		app_177060(&result, ((NimStringDesc*) &TMP4167));
		app_177060(&result, cprocsectionnames_550018[(ps)- 0]);
		app_177060(&result, ((NimStringDesc*) &TMP4168));
		app_177060(&result, tnl_174613);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope177009*, gensectionend_550177)(NU8 ps) {
	trope177009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_169118) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_174613->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4139));
appendString(LOC5, tnl_174613);
		result = torope_177076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope177009*, gensectionstart_550028)(NU8 fs) {
	trope177009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_169118) == 0))) goto LA3;
		result = torope_177076(tnl_174613);
		app_177060(&result, ((NimStringDesc*) &TMP4167));
		app_177060(&result, cfilesectionnames_550012[(fs)- 0]);
		app_177060(&result, ((NimStringDesc*) &TMP4168));
		app_177060(&result, tnl_174613);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope177009*, gensectionend_550079)(NU8 fs) {
	trope177009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_169118) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_174613->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4139));
appendString(LOC5, tnl_174613);
		result = torope_177076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, writetypecache_550224)(tidtable225864 a, NimStringDesc** s) {
	NI i;
	i = 0;
	{
		NI id_550230;
		TNimObject* value_550231;
		id_550230 = 0;
		value_550231 = 0;
		{
			NI i_550248;
			NI HEX3Atmp_550250;
			NI res_550252;
			i_550248 = 0;
			HEX3Atmp_550250 = 0;
			HEX3Atmp_550250 = (a.Data->Sup.len-1);
			res_550252 = 0;
			{
				while (1) {
					if (!(res_550252 <= HEX3Atmp_550250)) goto LA4;
					i_550248 = res_550252;
					{
						NimStringDesc* LOC14;
						if (!!((a.Data->data[i_550248].Key == NIM_NIL))) goto LA7;
						id_550230 = (*a.Data->data[i_550248].Key).Id;
						value_550231 = a.Data->data[i_550248].Val;
						{
							if (!(i == 10)) goto LA11;
							i = 0;
							(*s) = resizeString((*s), tnl_174613->Sup.len + 0);
appendString((*s), tnl_174613);
						}
						goto LA9;
						LA11: ;
						{
							(*s) = addChar((*s), 32);
						}
						LA9: ;
						encodevint_234304(id_550230, s);
						(*s) = addChar((*s), 58);
						LOC14 = 0;
						LOC14 = ropetostr_177101(((trope177009*) (value_550231)));
						encodestr_234042(LOC14, s);
						i += 1;
					}
					LA7: ;
					res_550252 += 1;
				} LA4: ;
			}
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(void, writeintset_550271)(intset222056 a, NimStringDesc** s) {
	NI i;
	i = 0;
	{
		NI x_550277;
		ttrunk222052* r_550295;
		x_550277 = 0;
		r_550295 = a.Head;
		{
			while (1) {
				NI i_550297;
				if (!!((r_550295 == NIM_NIL))) goto LA3;
				i_550297 = 0;
				{
					while (1) {
						NI w_550299;
						NI j_550301;
						if (!(i_550297 <= 15)) goto LA5;
						w_550299 = (*r_550295).Bits[(i_550297)- 0];
						j_550301 = 0;
						{
							while (1) {
								if (!!((w_550299 == 0))) goto LA7;
								{
									if (!!((((NI) ((NI)(w_550299 & 1))) == 0))) goto LA10;
									x_550277 = (NI)((NI)((NU32)((*r_550295).Key) << (NU32)(9)) | (NI)((NU32)((NI)((NU32)(i_550297) << (NU32)(5))) + (NU32)(j_550301)));
									{
										if (!(i == 10)) goto LA14;
										i = 0;
										(*s) = resizeString((*s), tnl_174613->Sup.len + 0);
appendString((*s), tnl_174613);
									}
									goto LA12;
									LA14: ;
									{
										(*s) = addChar((*s), 32);
									}
									LA12: ;
									encodevint_234304(x_550277, s);
									i += 1;
								}
								LA10: ;
								j_550301 += 1;
								w_550299 = (NI)((NU32)(w_550299) >> (NU32)(1));
							} LA7: ;
						}
						i_550297 += 1;
					} LA5: ;
				}
				r_550295 = (*r_550295).Next;
			} LA3: ;
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(trope177009*, genmergeinfo_550329)(tcgen549035* m) {
	trope177009* result;
	NimStringDesc* s;
	result = 0;
	{
		if (!!(((gglobaloptions_169118 &(1<<((((NU8) 14))&31)))!=0))) goto LA3;
		result = NIM_NIL;
		goto BeforeRet;
	}
	LA3: ;
	s = copyString(((NimStringDesc*) &TMP4178));
	s = resizeString(s, tnl_174613->Sup.len + 0);
appendString(s, tnl_174613);
	s = resizeString(s, 11);
appendString(s, ((NimStringDesc*) &TMP4179));
	writetypecache_550224((*m).Typecache, (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4180));
	writeintset_550271((*m).Declaredthings, (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4181));
	writeintset_550271((*m).Typeinfomarker, (&s));
	s = resizeString(s, 7);
appendString(s, ((NimStringDesc*) &TMP4182));
	encodevint_234304(((NI) ((*m).Labels)), (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4183));
	encodevint_234304(((NI) ((*m).Framedeclared)), (&s));
	s = resizeString(s, tnl_174613->Sup.len + 0);
appendString(s, tnl_174613);
	s = resizeString(s, 2);
appendString(s, ((NimStringDesc*) &TMP4184));
	result = torope_177076(s);
	BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_ccgmergeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_ccgmergeDatInit)(void) {
}

