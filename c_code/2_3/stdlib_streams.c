/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj138027 Streamobj138027;
typedef struct TNimObject TNimObject;
typedef struct Filestreamobj138692 Filestreamobj138692;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ioerror3431 Ioerror3431;
typedef struct Systemerror3429 Systemerror3429;
typedef struct Exception Exception;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Stringstreamobj138554 Stringstreamobj138554;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
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
typedef N_NIMCALL_PTR(void, TY138028) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY138032) (Streamobj138027* s);
typedef N_NIMCALL_PTR(void, TY138036) (Streamobj138027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY138041) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NI, TY138045) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138051) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138057) (Streamobj138027* s);
struct  Streamobj138027  {
  TNimObject Sup;
TY138028 closeimpl;
TY138032 atendimpl;
TY138036 setpositionimpl;
TY138041 getpositionimpl;
TY138045 readdataimpl;
TY138051 writedataimpl;
TY138057 flushimpl;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Filestreamobj138692  {
  Streamobj138027 Sup;
FILE* f;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Systemerror3429  {
  Exception Sup;
};
struct  Ioerror3431  {
  Systemerror3429 Sup;
};
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  Stringstreamobj138554  {
  Streamobj138027 Sup;
NimStringDesc* data;
NI pos;
};
typedef NI TY27420[8];
struct  Tpagedesc46354  {
Tpagedesc46354* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
NI key;
NI upperbound;
NI level;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
N_NIMCALL(void, TMP2683)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_13203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(Filestreamobj138692*, newfilestream_138759)(FILE* f);
N_NIMCALL(void, TMP2684)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, fsclose_138696)(Streamobj138027* s);
N_NIMCALL(NIM_BOOL, fsatend_138720)(Streamobj138027* s);
N_NIMCALL(NIM_BOOL, endoffile_13422)(FILE* f);
N_NIMCALL(void, fssetposition_138727)(Streamobj138027* s, NI pos);
N_NIMCALL(void, setfilepos_13542)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_138734)(Streamobj138027* s);
N_NIMCALL(NI64, getfilepos_13546)(FILE* f);
N_NIMCALL(NI, fsreaddata_138742)(Streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_13515)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, fswritedata_138751)(Streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_13537)(FILE* f, void* buffer, NI len);
N_NIMCALL(Ioerror3431*, neweio_138005)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, fsflush_138714)(Streamobj138027* s);
N_NIMCALL(void, writedata_138199)(Streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_CHAR, readchar_138287)(Streamobj138027* s);
N_NIMCALL(NI, readdata_138174)(Streamobj138027* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP2938)(void* p, NI op);
N_NIMCALL(void, ssclose_138661)(Streamobj138027* s_138663);
N_NIMCALL(NIM_BOOL, ssatend_138565)(Streamobj138027* s_138567);
N_NIMCALL(void, sssetposition_138576)(Streamobj138027* s_138578, NI pos);
N_NIMCALL(NI, clamp_138582)(NI x, NI a, NI b);
N_NIMCALL(NI, ssgetposition_138601)(Streamobj138027* s_138603);
N_NIMCALL(NI, ssreaddata_138612)(Streamobj138027* s_138614, void* buffer, NI buflen);
N_NIMCALL(void, sswritedata_138639)(Streamobj138027* s_138641, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
STRING_LITERAL(TMP2687, "cannot write to stream", 22);
STRING_LITERAL(TMP2898, "", 0);
extern TNimType NTI3411; /* RootObj */
TNimType NTI138027; /* StreamObj */
TNimType NTI138028; /* proc (s: Stream){.gcsafe.} */
TNimType NTI138032; /* proc (s: Stream): bool{.gcsafe.} */
TNimType NTI138036; /* proc (s: Stream, pos: int){.gcsafe.} */
TNimType NTI138041; /* proc (s: Stream): int{.gcsafe.} */
TNimType NTI138045; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI138051; /* proc (s: Stream, buffer: pointer, bufLen: int){.gcsafe.} */
TNimType NTI138057; /* proc (s: Stream){.gcsafe.} */
TNimType NTI138025; /* Stream */
TNimType NTI138692; /* FileStreamObj */
extern TNimType NTI13004; /* File */
TNimType NTI138690; /* FileStream */
extern TNimType NTI78401; /* ref IOError */
extern TNimType NTI3431; /* IOError */
extern Tgcheap48216 gch_48244;
TNimType NTI138554; /* StringStreamObj */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI138552; /* StringStream */
N_NIMCALL(void, TMP2683)(void* p, NI op) {
	Streamobj138027* a;
	a = (Streamobj138027*)p;
}

N_NIMCALL(NI, readdata_138174)(Streamobj138027* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = (*s).readdataimpl(s, buffer, buflen);
	return result;
}
N_NIMCALL(void, TMP2684)(void* p, NI op) {
	Filestreamobj138692* a;
	a = (Filestreamobj138692*)p;
}

N_NIMCALL(void, fsclose_138696)(Streamobj138027* s) {
	{
		if (!!(((*((Filestreamobj138692*) (s))).f == NIM_NIL))) goto LA3;
		fclose((*((Filestreamobj138692*) (s))).f);
		(*((Filestreamobj138692*) (s))).f = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_138720)(Streamobj138027* s) {
	NIM_BOOL result;
{	result = 0;
	result = endoffile_13422((*((Filestreamobj138692*) (s))).f);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, fssetposition_138727)(Streamobj138027* s, NI pos) {
	setfilepos_13542((*((Filestreamobj138692*) (s))).f, ((NI64) (pos)));
}

N_NIMCALL(NI, fsgetposition_138734)(Streamobj138027* s) {
	NI result;
	NI64 LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = getfilepos_13546((*((Filestreamobj138692*) (s))).f);
	result = ((NI) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, fsreaddata_138742)(Streamobj138027* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = readbuffer_13515((*((Filestreamobj138692*) (s))).f, buffer, ((NI) (buflen)));
	return result;
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46346* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(Ioerror3431*, neweio_138005)(NimStringDesc* msg) {
	Ioerror3431* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Ioerror3431*) newObj((&NTI78401), sizeof(Ioerror3431));
	(*result).Sup.Sup.Sup.m_type = (&NTI3431);
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.message; (*result).Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

N_NIMCALL(void, fswritedata_138751)(Streamobj138027* s, void* buffer, NI buflen) {
	{
		NI LOC3;
		Ioerror3431* LOC6;
		LOC3 = 0;
		LOC3 = writebuffer_13537((*((Filestreamobj138692*) (s))).f, buffer, ((NI) (buflen)));
		if (!!((LOC3 == buflen))) goto LA4;
		LOC6 = 0;
		LOC6 = neweio_138005(((NimStringDesc*) &TMP2687));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_138714)(Streamobj138027* s) {
	fflush((*((Filestreamobj138692*) (s))).f);
}

N_NIMCALL(Filestreamobj138692*, newfilestream_138759)(FILE* f) {
	Filestreamobj138692* result;
	result = 0;
	result = (Filestreamobj138692*) newObj((&NTI138690), sizeof(Filestreamobj138692));
	(*result).Sup.Sup.m_type = (&NTI138692);
	(*result).f = f;
	(*result).Sup.closeimpl = fsclose_138696;
	(*result).Sup.atendimpl = fsatend_138720;
	(*result).Sup.setpositionimpl = fssetposition_138727;
	(*result).Sup.getpositionimpl = fsgetposition_138734;
	(*result).Sup.readdataimpl = fsreaddata_138742;
	(*result).Sup.writedataimpl = fswritedata_138751;
	(*result).Sup.flushimpl = fsflush_138714;
	return result;
}

N_NIMCALL(Filestreamobj138692*, newfilestream_138774)(NimStringDesc* filename, NU8 mode) {
	Filestreamobj138692* result;
	FILE* f;
	result = 0;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13203(&f, filename, mode, ((NI) -1));
		if (!LOC3) goto LA4;
		result = newfilestream_138759(f);
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, close_138085)(Streamobj138027* s) {
	{
		if (!!((*s).closeimpl == 0)) goto LA3;
		(*s).closeimpl(s);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_138199)(Streamobj138027* s, void* buffer, NI buflen) {
	(*s).writedataimpl(s, buffer, buflen);
}

N_NIMCALL(void, write_138233)(Streamobj138027* s, NimStringDesc* x) {
	writedata_138199(s, ((void*) (x->data)), (x ? x->Sup.len : 0));
}

N_NIMCALL(NIM_BOOL, atend_138111)(Streamobj138027* s) {
	NIM_BOOL result;
	result = 0;
	result = (*s).atendimpl(s);
	return result;
}

N_NIMCALL(NIM_CHAR, readchar_138287)(Streamobj138027* s) {
	NIM_CHAR result;
	result = 0;
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = readdata_138174(s, ((void*) ((&result))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result = 0;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NimStringDesc*, readline_138531)(Streamobj138027* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP2898));
	{
		while (1) {
			NIM_CHAR c;
			c = readchar_138287(s);
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				c = readchar_138287(s);
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
N_NIMCALL(void, TMP2938)(void* p, NI op) {
	Stringstreamobj138554* a;
	a = (Stringstreamobj138554*)p;
	nimGCvisit((void*)(*a).data, op);
}

N_NIMCALL(void, ssclose_138661)(Streamobj138027* s_138663) {
	Stringstreamobj138554* s;
	NimStringDesc* LOC1;
	s = ((Stringstreamobj138554*) (s_138663));
	LOC1 = 0;
	LOC1 = (*s).data; (*s).data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}

N_NIMCALL(NIM_BOOL, ssatend_138565)(Streamobj138027* s_138567) {
	NIM_BOOL result;
	Stringstreamobj138554* s;
{	result = 0;
	s = ((Stringstreamobj138554*) (s_138567));
	result = (((*s).data ? (*s).data->Sup.len : 0) <= (*s).pos);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, sssetposition_138576)(Streamobj138027* s_138578, NI pos) {
	Stringstreamobj138554* s;
	s = ((Stringstreamobj138554*) (s_138578));
	(*s).pos = clamp_138582(pos, ((NI) 0), ((*s).data ? ((*s).data->Sup.len-1) : -1));
}

N_NIMCALL(NI, ssgetposition_138601)(Streamobj138027* s_138603) {
	NI result;
	Stringstreamobj138554* s;
{	result = 0;
	s = ((Stringstreamobj138554*) (s_138603));
	result = (*s).pos;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, ssreaddata_138612)(Streamobj138027* s_138614, void* buffer, NI buflen) {
	NI result;
	Stringstreamobj138554* s;
	result = 0;
	s = ((Stringstreamobj138554*) (s_138614));
	result = ((buflen <= (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos)) ? buflen : (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos));
	{
		if (!(((NI) 0) < result)) goto LA3;
		memcpy(buffer, ((void*) ((&(*s).data->data[(*s).pos]))), ((NI) (result)));
		(*s).pos += result;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, sswritedata_138639)(Streamobj138027* s_138641, void* buffer, NI buflen) {
	Stringstreamobj138554* s;
{	s = ((Stringstreamobj138554*) (s_138641));
	{
		if (!(buflen <= ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(((*s).data ? (*s).data->Sup.len : 0) < (NI)((*s).pos + buflen))) goto LA7;
		(*s).data = setLengthStr((*s).data, ((NI) ((NI)((*s).pos + buflen))));
	}
	LA7: ;
	memcpy(((void*) ((&(*s).data->data[(*s).pos]))), buffer, ((NI) (buflen)));
	(*s).pos += buflen;
	}BeforeRet: ;
}

N_NIMCALL(Stringstreamobj138554*, newstringstream_138671)(NimStringDesc* s) {
	Stringstreamobj138554* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Stringstreamobj138554*) newObj((&NTI138552), sizeof(Stringstreamobj138554));
	(*result).Sup.Sup.m_type = (&NTI138554);
	LOC1 = 0;
	LOC1 = (*result).data; (*result).data = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).pos = ((NI) 0);
	(*result).Sup.closeimpl = ssclose_138661;
	(*result).Sup.atendimpl = ssatend_138565;
	(*result).Sup.setpositionimpl = sssetposition_138576;
	(*result).Sup.getpositionimpl = ssgetposition_138601;
	(*result).Sup.readdataimpl = ssreaddata_138612;
	(*result).Sup.writedataimpl = sswritedata_138639;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit)(void) {
static TNimNode* TMP2682[7];
static TNimNode* TMP2937[2];
static TNimNode TMP31[12];
NTI138027.size = sizeof(Streamobj138027);
NTI138027.kind = 17;
NTI138027.base = (&NTI3411);
NTI138027.flags = 1;
TMP2682[0] = &TMP31[1];
NTI138028.size = sizeof(TY138028);
NTI138028.kind = 25;
NTI138028.base = 0;
NTI138028.flags = 3;
TMP31[1].kind = 1;
TMP31[1].offset = offsetof(Streamobj138027, closeimpl);
TMP31[1].typ = (&NTI138028);
TMP31[1].name = "closeImpl";
TMP2682[1] = &TMP31[2];
NTI138032.size = sizeof(TY138032);
NTI138032.kind = 25;
NTI138032.base = 0;
NTI138032.flags = 3;
TMP31[2].kind = 1;
TMP31[2].offset = offsetof(Streamobj138027, atendimpl);
TMP31[2].typ = (&NTI138032);
TMP31[2].name = "atEndImpl";
TMP2682[2] = &TMP31[3];
NTI138036.size = sizeof(TY138036);
NTI138036.kind = 25;
NTI138036.base = 0;
NTI138036.flags = 3;
TMP31[3].kind = 1;
TMP31[3].offset = offsetof(Streamobj138027, setpositionimpl);
TMP31[3].typ = (&NTI138036);
TMP31[3].name = "setPositionImpl";
TMP2682[3] = &TMP31[4];
NTI138041.size = sizeof(TY138041);
NTI138041.kind = 25;
NTI138041.base = 0;
NTI138041.flags = 3;
TMP31[4].kind = 1;
TMP31[4].offset = offsetof(Streamobj138027, getpositionimpl);
TMP31[4].typ = (&NTI138041);
TMP31[4].name = "getPositionImpl";
TMP2682[4] = &TMP31[5];
NTI138045.size = sizeof(TY138045);
NTI138045.kind = 25;
NTI138045.base = 0;
NTI138045.flags = 3;
TMP31[5].kind = 1;
TMP31[5].offset = offsetof(Streamobj138027, readdataimpl);
TMP31[5].typ = (&NTI138045);
TMP31[5].name = "readDataImpl";
TMP2682[5] = &TMP31[6];
NTI138051.size = sizeof(TY138051);
NTI138051.kind = 25;
NTI138051.base = 0;
NTI138051.flags = 3;
TMP31[6].kind = 1;
TMP31[6].offset = offsetof(Streamobj138027, writedataimpl);
TMP31[6].typ = (&NTI138051);
TMP31[6].name = "writeDataImpl";
TMP2682[6] = &TMP31[7];
NTI138057.size = sizeof(TY138057);
NTI138057.kind = 25;
NTI138057.base = 0;
NTI138057.flags = 3;
TMP31[7].kind = 1;
TMP31[7].offset = offsetof(Streamobj138027, flushimpl);
TMP31[7].typ = (&NTI138057);
TMP31[7].name = "flushImpl";
TMP31[0].len = 7; TMP31[0].kind = 2; TMP31[0].sons = &TMP2682[0];
NTI138027.node = &TMP31[0];
NTI138025.size = sizeof(Streamobj138027*);
NTI138025.kind = 22;
NTI138025.base = (&NTI138027);
NTI138025.marker = TMP2683;
NTI138692.size = sizeof(Filestreamobj138692);
NTI138692.kind = 17;
NTI138692.base = (&NTI138027);
NTI138692.flags = 1;
TMP31[8].kind = 1;
TMP31[8].offset = offsetof(Filestreamobj138692, f);
TMP31[8].typ = (&NTI13004);
TMP31[8].name = "f";
NTI138692.node = &TMP31[8];
NTI138690.size = sizeof(Filestreamobj138692*);
NTI138690.kind = 22;
NTI138690.base = (&NTI138692);
NTI138690.marker = TMP2684;
NTI138554.size = sizeof(Stringstreamobj138554);
NTI138554.kind = 17;
NTI138554.base = (&NTI138027);
TMP2937[0] = &TMP31[10];
TMP31[10].kind = 1;
TMP31[10].offset = offsetof(Stringstreamobj138554, data);
TMP31[10].typ = (&NTI149);
TMP31[10].name = "data";
TMP2937[1] = &TMP31[11];
TMP31[11].kind = 1;
TMP31[11].offset = offsetof(Stringstreamobj138554, pos);
TMP31[11].typ = (&NTI108);
TMP31[11].name = "pos";
TMP31[9].len = 2; TMP31[9].kind = 2; TMP31[9].sons = &TMP2937[0];
NTI138554.node = &TMP31[9];
NTI138552.size = sizeof(Stringstreamobj138554*);
NTI138552.kind = 22;
NTI138552.base = (&NTI138554);
NTI138552.marker = TMP2938;
}

