/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct streamobj135035 streamobj135035;
typedef struct TNimObject TNimObject;
typedef struct filestreamobj135742 filestreamobj135742;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ioerror3231 ioerror3231;
typedef struct systemerror3229 systemerror3229;
typedef struct Exception Exception;
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
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  filestreamobj135742  {
  streamobj135035 Sup;
FILE* F;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  systemerror3229  {
  Exception Sup;
};
struct  ioerror3231  {
  systemerror3229 Sup;
};
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
typedef NI TY26620[8];
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
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
N_NIMCALL(void, TMP2709)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_12803)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(filestreamobj135742*, newfilestream_135814)(FILE* f);
N_NIMCALL(void, TMP2710)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, fsclose_135746)(streamobj135035* s);
N_NIMCALL(NIM_BOOL, fsatend_135775)(streamobj135035* s);
N_NIMCALL(NIM_BOOL, endoffile_13030)(FILE* f);
N_NIMCALL(void, fssetposition_135782)(streamobj135035* s, NI pos);
N_NIMCALL(void, setfilepos_13251)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_135789)(streamobj135035* s);
N_NIMCALL(NI64, getfilepos_13255)(FILE* f);
N_NIMCALL(NI, fsreaddata_135797)(streamobj135035* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_13227)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_135806)(streamobj135035* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_13246)(FILE* f, void* buffer, NI len);
N_NIMCALL(ioerror3231*, neweio_135005)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, fsflush_135769)(streamobj135035* s);
N_NIMCALL(void, writedata_135207)(streamobj135035* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_CHAR, readchar_135298)(streamobj135035* s);
N_NIMCALL(NI, readdata_135182)(streamobj135035* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP2713, "cannot write to stream", 22);
STRING_LITERAL(TMP2865, "", 0);
extern TNimType NTI3211; /* RootObj */
TNimType NTI135035; /* StreamObj */
TNimType NTI135036; /* proc (Stream){.gcsafe.} */
TNimType NTI135040; /* proc (Stream): bool{.gcsafe.} */
TNimType NTI135044; /* proc (Stream, int){.gcsafe.} */
TNimType NTI135049; /* proc (Stream): int{.gcsafe.} */
TNimType NTI135053; /* proc (Stream, pointer, int): int{.gcsafe.} */
TNimType NTI135059; /* proc (Stream, pointer, int){.gcsafe.} */
TNimType NTI135065; /* proc (Stream){.gcsafe.} */
TNimType NTI135033; /* Stream */
TNimType NTI135742; /* FileStreamObj */
extern TNimType NTI12604; /* File */
TNimType NTI135740; /* FileStream */
extern TNimType NTI77201; /* ref IOError */
extern TNimType NTI3231; /* IOError */
extern tgcheap47216 gch_47244;
N_NIMCALL(void, TMP2709)(void* p, NI op) {
	streamobj135035* a;
	a = (streamobj135035*)p;
}

N_NIMCALL(NI, readdata_135182)(streamobj135035* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = (*s).Readdataimpl(s, buffer, buflen);
	return result;
}
N_NIMCALL(void, TMP2710)(void* p, NI op) {
	filestreamobj135742* a;
	a = (filestreamobj135742*)p;
}

N_NIMCALL(void, fsclose_135746)(streamobj135035* s) {
	{
		if (!!(((*((filestreamobj135742*) (s))).F == NIM_NIL))) goto LA3;
		fclose((*((filestreamobj135742*) (s))).F);
		(*((filestreamobj135742*) (s))).F = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_135775)(streamobj135035* s) {
	NIM_BOOL result;
	result = 0;
	result = endoffile_13030((*((filestreamobj135742*) (s))).F);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, fssetposition_135782)(streamobj135035* s, NI pos) {
	setfilepos_13251((*((filestreamobj135742*) (s))).F, ((NI64) (pos)));
}

N_NIMCALL(NI, fsgetposition_135789)(streamobj135035* s) {
	NI result;
	NI64 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getfilepos_13255((*((filestreamobj135742*) (s))).F);
	result = ((NI) (LOC1));
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, fsreaddata_135797)(streamobj135035* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = readbuffer_13227((*((filestreamobj135742*) (s))).F, buffer, buflen);
	return result;
}

static N_INLINE(tcell45135*, usrtocell_48846)(void* usr) {
	tcell45135* result;
	result = 0;
	result = ((tcell45135*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45135))))));
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45135* c) {
	addzct_48817((&gch_47244.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45135* c;
	c = usrtocell_48846(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	LA3: ;
}

N_NIMCALL(ioerror3231*, neweio_135005)(NimStringDesc* msg) {
	ioerror3231* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (ioerror3231*) newObj((&NTI77201), sizeof(ioerror3231));
	(*result).Sup.Sup.Sup.m_type = (&NTI3231);
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.message; (*result).Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

N_NIMCALL(void, fswritedata_135806)(streamobj135035* s, void* buffer, NI buflen) {
	{
		NI LOC3;
		ioerror3231* LOC6;
		LOC3 = 0;
		LOC3 = writebuffer_13246((*((filestreamobj135742*) (s))).F, buffer, buflen);
		if (!!((LOC3 == buflen))) goto LA4;
		LOC6 = 0;
		LOC6 = neweio_135005(((NimStringDesc*) &TMP2713));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_135769)(streamobj135035* s) {
	fflush((*((filestreamobj135742*) (s))).F);
}

N_NIMCALL(filestreamobj135742*, newfilestream_135814)(FILE* f) {
	filestreamobj135742* result;
	result = 0;
	result = (filestreamobj135742*) newObj((&NTI135740), sizeof(filestreamobj135742));
	(*result).Sup.Sup.m_type = (&NTI135742);
	(*result).F = f;
	(*result).Sup.Closeimpl = fsclose_135746;
	(*result).Sup.Atendimpl = fsatend_135775;
	(*result).Sup.Setpositionimpl = fssetposition_135782;
	(*result).Sup.Getpositionimpl = fsgetposition_135789;
	(*result).Sup.Readdataimpl = fsreaddata_135797;
	(*result).Sup.Writedataimpl = fswritedata_135806;
	(*result).Sup.Flushimpl = fsflush_135769;
	return result;
}

N_NIMCALL(filestreamobj135742*, newfilestream_135837)(NimStringDesc* filename, NU8 mode) {
	filestreamobj135742* result;
	FILE* f;
	result = 0;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_12803(&f, filename, mode, -1);
		if (!LOC3) goto LA4;
		result = newfilestream_135814(f);
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, close_135093)(streamobj135035* s) {
	{
		if (!!((*s).Closeimpl == 0)) goto LA3;
		(*s).Closeimpl(s);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_135207)(streamobj135035* s, void* buffer, NI buflen) {
	(*s).Writedataimpl(s, buffer, buflen);
}

N_NIMCALL(void, write_135241)(streamobj135035* s, NimStringDesc* x) {
	writedata_135207(s, ((void*) (x->data)), x->Sup.len);
}

N_NIMCALL(NIM_BOOL, atend_135119)(streamobj135035* s) {
	NIM_BOOL result;
	result = 0;
	result = (*s).Atendimpl(s);
	return result;
}

N_NIMCALL(NIM_CHAR, readchar_135298)(streamobj135035* s) {
	NIM_CHAR result;
	result = 0;
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = readdata_135182(s, ((void*) ((&result))), 1);
		if (!!((LOC3 == 1))) goto LA4;
		result = 0;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NimStringDesc*, readline_135564)(streamobj135035* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2865));
	{
		while (1) {
			NIM_CHAR c;
			c = readchar_135298(s);
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				c = readchar_135298(s);
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = ((NU8)(c) == (NU8)(10));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(c) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				goto LA1;
			}
			goto LA7;
			LA11: ;
			{
				result = addChar(result, c);
			}
			LA7: ;
		}
	} LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void) {
static TNimNode* TMP2708[7];
static TNimNode TMP31[9];
NTI135035.size = sizeof(streamobj135035);
NTI135035.kind = 17;
NTI135035.base = (&NTI3211);
NTI135035.flags = 1;
TMP2708[0] = &TMP31[1];
NTI135036.size = sizeof(TY135036);
NTI135036.kind = 25;
NTI135036.base = 0;
NTI135036.flags = 3;
TMP31[1].kind = 1;
TMP31[1].offset = offsetof(streamobj135035, Closeimpl);
TMP31[1].typ = (&NTI135036);
TMP31[1].name = "closeImpl";
TMP2708[1] = &TMP31[2];
NTI135040.size = sizeof(TY135040);
NTI135040.kind = 25;
NTI135040.base = 0;
NTI135040.flags = 3;
TMP31[2].kind = 1;
TMP31[2].offset = offsetof(streamobj135035, Atendimpl);
TMP31[2].typ = (&NTI135040);
TMP31[2].name = "atEndImpl";
TMP2708[2] = &TMP31[3];
NTI135044.size = sizeof(TY135044);
NTI135044.kind = 25;
NTI135044.base = 0;
NTI135044.flags = 3;
TMP31[3].kind = 1;
TMP31[3].offset = offsetof(streamobj135035, Setpositionimpl);
TMP31[3].typ = (&NTI135044);
TMP31[3].name = "setPositionImpl";
TMP2708[3] = &TMP31[4];
NTI135049.size = sizeof(TY135049);
NTI135049.kind = 25;
NTI135049.base = 0;
NTI135049.flags = 3;
TMP31[4].kind = 1;
TMP31[4].offset = offsetof(streamobj135035, Getpositionimpl);
TMP31[4].typ = (&NTI135049);
TMP31[4].name = "getPositionImpl";
TMP2708[4] = &TMP31[5];
NTI135053.size = sizeof(TY135053);
NTI135053.kind = 25;
NTI135053.base = 0;
NTI135053.flags = 3;
TMP31[5].kind = 1;
TMP31[5].offset = offsetof(streamobj135035, Readdataimpl);
TMP31[5].typ = (&NTI135053);
TMP31[5].name = "readDataImpl";
TMP2708[5] = &TMP31[6];
NTI135059.size = sizeof(TY135059);
NTI135059.kind = 25;
NTI135059.base = 0;
NTI135059.flags = 3;
TMP31[6].kind = 1;
TMP31[6].offset = offsetof(streamobj135035, Writedataimpl);
TMP31[6].typ = (&NTI135059);
TMP31[6].name = "writeDataImpl";
TMP2708[6] = &TMP31[7];
NTI135065.size = sizeof(TY135065);
NTI135065.kind = 25;
NTI135065.base = 0;
NTI135065.flags = 3;
TMP31[7].kind = 1;
TMP31[7].offset = offsetof(streamobj135035, Flushimpl);
TMP31[7].typ = (&NTI135065);
TMP31[7].name = "flushImpl";
TMP31[0].len = 7; TMP31[0].kind = 2; TMP31[0].sons = &TMP2708[0];
NTI135035.node = &TMP31[0];
NTI135033.size = sizeof(streamobj135035*);
NTI135033.kind = 22;
NTI135033.base = (&NTI135035);
NTI135033.marker = TMP2709;
NTI135742.size = sizeof(filestreamobj135742);
NTI135742.kind = 17;
NTI135742.base = (&NTI135035);
NTI135742.flags = 1;
TMP31[8].kind = 1;
TMP31[8].offset = offsetof(filestreamobj135742, F);
TMP31[8].typ = (&NTI12604);
TMP31[8].name = "f";
NTI135742.node = &TMP31[8];
NTI135740.size = sizeof(filestreamobj135742*);
NTI135740.kind = 22;
NTI135740.base = (&NTI135742);
NTI135740.marker = TMP2710;
}

