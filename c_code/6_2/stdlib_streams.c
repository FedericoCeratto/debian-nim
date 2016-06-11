/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <setjmp.h>
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj150418 Streamobj150418;
typedef struct TNimObject TNimObject;
typedef struct Filestreamobj151477 Filestreamobj151477;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Ioerror3428 Ioerror3428;
typedef struct Systemerror3426 Systemerror3426;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30086 Memregion30086;
typedef struct Smallchunk30040 Smallchunk30040;
typedef struct Llchunk30080 Llchunk30080;
typedef struct Bigchunk30042 Bigchunk30042;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30084 Avlnode30084;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct Stringstreamobj151377 Stringstreamobj151377;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY150419) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY150423) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(void, TY150427) (Streamobj150418* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY150432) (Streamobj150418* s0);
typedef N_NIMCALL_PTR(NI, TY150436) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY150442) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY150448) (Streamobj150418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY150454) (Streamobj150418* s0);
struct  Streamobj150418  {
  TNimObject Sup;
TY150419 closeimpl;
TY150423 atendimpl;
TY150427 setpositionimpl;
TY150432 getpositionimpl;
TY150436 readdataimpl;
TY150442 peekdataimpl;
TY150448 writedataimpl;
TY150454 flushimpl;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Filemode12409;
struct  Filestreamobj151477  {
  Streamobj150418 Sup;
FILE* f;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY18011;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY18011 raiseAction;
};
struct  Systemerror3426  {
  Exception Sup;
};
struct  Ioerror3428  {
  Systemerror3426 Sup;
};
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
};
typedef Smallchunk30040* TY30101[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30086  {
NI minlargeobj;
NI maxlargeobj;
TY30101 freesmallchunks;
Llchunk30080* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30042* freechunkslist;
Intset30014 chunkstarts;
Avlnode30084* root;
Avlnode30084* deleted;
Avlnode30084* last;
Avlnode30084* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellseq47921 tempstack;
NI recgclock;
Memregion30086 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
struct  Stringstreamobj151377  {
  Streamobj150418 Sup;
NimStringDesc* data;
NI pos;
};
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30040  {
  Basechunk30038 Sup;
Smallchunk30040* next;
Smallchunk30040* prev;
Freecell30030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30080  {
NI size;
NI acc;
Llchunk30080* next;
};
struct  Bigchunk30042  {
  Basechunk30038 Sup;
Bigchunk30042* next;
Bigchunk30042* prev;
NI align;
NF data;
};
typedef NI TY30019[8];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30019 bits;
};
typedef Avlnode30084* TY30091[2];
struct  Avlnode30084  {
TY30091 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30019 bits;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
};
N_NIMCALL(void, TMP2976)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_15603_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode12409 mode0, NI bufsize0);
N_NIMCALL(Filestreamobj151477*, newfilestream_151531_1780494535)(FILE* f0);
N_NIMCALL(void, TMP2977)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(void, fsclose_151482_1780494535)(Streamobj150418* s0);
N_NIMCALL(NIM_BOOL, fsatend_151500_1780494535)(Streamobj150418* s0);
N_NIMCALL(NIM_BOOL, endoffile_15654_1689653243)(FILE* f0);
N_NIMCALL(void, fssetposition_151504_1780494535)(Streamobj150418* s0, NI pos0);
N_NIMCALL(void, setfilepos_15781_1689653243)(FILE* f0, NI64 pos0);
N_NIMCALL(NI, fsgetposition_151508_1780494535)(Streamobj150418* s0);
N_NIMCALL(NI64, getfilepos_15785_1689653243)(FILE* f0);
N_NIMCALL(NI, fsreaddata_151513_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0);
N_NIMCALL(NI, readbuffer_15754_1689653243)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(NI, fspeekdata_151519_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, fswritedata_151526_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0);
N_NIMCALL(NI, writebuffer_15776_1689653243)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(Ioerror3428*, neweio_150402_1780494535)(NimStringDesc* msg0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
N_NIMCALL(void, fsflush_151497_1780494535)(Streamobj150418* s0);
N_NIMCALL(void, writedata_150550_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NIM_CHAR, readchar_150854_1780494535)(Streamobj150418* s0);
N_NIMCALL(NI, readdata_150512_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP3267)(void* p, NI op);
N_NIMCALL(void, ssclose_151458_1780494535)(Streamobj150418* s_151460_1780494535);
N_NIMCALL(NIM_BOOL, ssatend_151383_1780494535)(Streamobj150418* s_151385_1780494535);
N_NIMCALL(void, sssetposition_151388_1780494535)(Streamobj150418* s_151390_1780494535, NI pos0);
N_NIMCALL(NI, clamp_151394_1689653243)(NI x0, NI a0, NI b0);
N_NIMCALL(NI, ssgetposition_151404_1780494535)(Streamobj150418* s_151406_1780494535);
N_NIMCALL(NI, ssreaddata_151409_1780494535)(Streamobj150418* s_151411_1780494535, void* buffer0, NI buflen0);
N_NIMCALL(NI, sspeekdata_151430_1780494535)(Streamobj150418* s_151432_1780494535, void* buffer0, NI buflen0);
N_NIMCALL(void, sswritedata_151442_1780494535)(Streamobj150418* s_151444_1780494535, void* buffer0, NI buflen0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
STRING_LITERAL(TMP2981, "cannot write to stream", 22);
STRING_LITERAL(TMP3222, "", 0);
extern TNimType NTI3408; /* RootObj */
TNimType NTI150418; /* StreamObj */
TNimType NTI150419; /* proc (s: Stream){.gcsafe.} */
TNimType NTI150423; /* proc (s: Stream): bool{.gcsafe.} */
TNimType NTI150427; /* proc (s: Stream, pos: int){.gcsafe.} */
TNimType NTI150432; /* proc (s: Stream): int{.gcsafe.} */
TNimType NTI150436; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI150442; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI150448; /* proc (s: Stream, buffer: pointer, bufLen: int){.gcsafe.} */
TNimType NTI150454; /* proc (s: Stream){.gcsafe.} */
TNimType NTI150416; /* Stream */
TNimType NTI151477; /* FileStreamObj */
extern TNimType NTI12407; /* File */
TNimType NTI151475; /* FileStream */
extern TSafePoint* exchandler_19637_1689653243;
extern TNimType NTI81279; /* ref IOError */
extern TNimType NTI3428; /* IOError */
extern Gcheap50418 gch_50458_1689653243;
TNimType NTI151377; /* StringStreamObj */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
TNimType NTI151375; /* StringStream */
N_NIMCALL(void, TMP2976)(void* p, NI op) {
	Streamobj150418* a;
	a = (Streamobj150418*)p;
}

N_NIMCALL(NI, readdata_150512_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0) {
	NI result0;
	result0 = (NI)0;
	result0 = (*s0).readdataimpl(s0, buffer0, buflen0);
	return result0;
}
N_NIMCALL(void, TMP2977)(void* p, NI op) {
	Filestreamobj151477* a;
	a = (Filestreamobj151477*)p;
}

N_NIMCALL(void, fsclose_151482_1780494535)(Streamobj150418* s0) {
	{
		if (!!(((*((Filestreamobj151477*) (s0))).f == NIM_NIL))) goto LA3;
		fclose((*((Filestreamobj151477*) (s0))).f);
		(*((Filestreamobj151477*) (s0))).f = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_151500_1780494535)(Streamobj150418* s0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	result0 = endoffile_15654_1689653243((*((Filestreamobj151477*) (s0))).f);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, fssetposition_151504_1780494535)(Streamobj150418* s0, NI pos0) {
	setfilepos_15781_1689653243((*((Filestreamobj151477*) (s0))).f, ((NI64) (pos0)));
}

N_NIMCALL(NI, fsgetposition_151508_1780494535)(Streamobj150418* s0) {
	NI result0;
	NI64 LOC1;
{	result0 = (NI)0;
	LOC1 = (NI64)0;
	LOC1 = getfilepos_15785_1689653243((*((Filestreamobj151477*) (s0))).f);
	result0 = ((NI) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, fsreaddata_151513_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0) {
	NI result0;
	result0 = (NI)0;
	result0 = readbuffer_15754_1689653243((*((Filestreamobj151477*) (s0))).f, buffer0, ((NI) (buflen0)));
	return result0;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_19637_1689653243;
	exchandler_19637_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19637_1689653243 = (*exchandler_19637_1689653243).prev;
}

N_NIMCALL(NI, fspeekdata_151519_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0) {
	NI volatile result0;
	NI pos0;
	TSafePoint TMP2980;
	result0 = (NI)0;
	pos0 = fsgetposition_151508_1780494535(s0);
	pushSafePoint(&TMP2980);
	TMP2980.status = _setjmp(TMP2980.context);
	if (TMP2980.status == 0) {
		result0 = readbuffer_15754_1689653243((*((Filestreamobj151477*) (s0))).f, buffer0, ((NI) (buflen0)));
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		fssetposition_151504_1780494535(s0, pos0);
	}
	if (TMP2980.status != 0) reraiseException();
	return result0;
}

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47905* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(Ioerror3428*, neweio_150402_1780494535)(NimStringDesc* msg0) {
	Ioerror3428* result0;
	NimStringDesc* LOC1;
	result0 = (Ioerror3428*)0;
	result0 = (Ioerror3428*) newObj((&NTI81279), sizeof(Ioerror3428));
	(*result0).Sup.Sup.Sup.m_type = (&NTI3428);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).Sup.Sup.message; (*result0).Sup.Sup.message = copyStringRC1(msg0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result0;
}

N_NIMCALL(void, fswritedata_151526_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0) {
	{
		NI LOC3;
		Ioerror3428* LOC6;
		LOC3 = (NI)0;
		LOC3 = writebuffer_15776_1689653243((*((Filestreamobj151477*) (s0))).f, buffer0, ((NI) (buflen0)));
		if (!!((LOC3 == buflen0))) goto LA4;
		LOC6 = (Ioerror3428*)0;
		LOC6 = neweio_150402_1780494535(((NimStringDesc*) &TMP2981));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_151497_1780494535)(Streamobj150418* s0) {
	fflush((*((Filestreamobj151477*) (s0))).f);
}

N_NIMCALL(Filestreamobj151477*, newfilestream_151531_1780494535)(FILE* f0) {
	Filestreamobj151477* result0;
	result0 = (Filestreamobj151477*)0;
	result0 = (Filestreamobj151477*) newObj((&NTI151475), sizeof(Filestreamobj151477));
	(*result0).Sup.Sup.m_type = (&NTI151477);
	(*result0).f = f0;
	(*result0).Sup.closeimpl = fsclose_151482_1780494535;
	(*result0).Sup.atendimpl = fsatend_151500_1780494535;
	(*result0).Sup.setpositionimpl = fssetposition_151504_1780494535;
	(*result0).Sup.getpositionimpl = fsgetposition_151508_1780494535;
	(*result0).Sup.readdataimpl = fsreaddata_151513_1780494535;
	(*result0).Sup.peekdataimpl = fspeekdata_151519_1780494535;
	(*result0).Sup.writedataimpl = fswritedata_151526_1780494535;
	(*result0).Sup.flushimpl = fsflush_151497_1780494535;
	return result0;
}

N_NIMCALL(Filestreamobj151477*, newfilestream_151543_1780494535)(NimStringDesc* filename0, Filemode12409 mode0) {
	Filestreamobj151477* result0;
	FILE* f0;
	result0 = (Filestreamobj151477*)0;
	f0 = (FILE*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_15603_1689653243(&f0, filename0, mode0, ((NI) -1));
		if (!LOC3) goto LA4;
		result0 = newfilestream_151531_1780494535(f0);
	}
	LA4: ;
	return result0;
}

N_NIMCALL(void, close_150471_1780494535)(Streamobj150418* s0) {
	{
		if (!!((*s0).closeimpl == 0)) goto LA3;
		(*s0).closeimpl(s0);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_150550_1780494535)(Streamobj150418* s0, void* buffer0, NI buflen0) {
	(*s0).writedataimpl(s0, buffer0, buflen0);
}

N_NIMCALL(void, write_150570_1780494535)(Streamobj150418* s0, NimStringDesc* x0) {
	{
		if (!(((NI) 0) < (x0 ? x0->Sup.len : 0))) goto LA3;
		writedata_150550_1780494535(s0, ((void*) ((&x0->data[((NI) 0)]))), (x0 ? x0->Sup.len : 0));
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, atend_150485_1780494535)(Streamobj150418* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = (*s0).atendimpl(s0);
	return result0;
}

N_NIMCALL(NIM_CHAR, readchar_150854_1780494535)(Streamobj150418* s0) {
	NIM_CHAR result0;
	result0 = (NIM_CHAR)0;
	{
		NI LOC3;
		LOC3 = (NI)0;
		LOC3 = readdata_150512_1780494535(s0, ((void*) ((&result0))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result0 = 0;
	}
	LA4: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, readline_151361_1780494535)(Streamobj150418* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &TMP3222));
	{
		while (1) {
			NIM_CHAR c0;
			c0 = readchar_150854_1780494535(s0);
			{
				if (!((NU8)(c0) == (NU8)(13))) goto LA5;
				c0 = readchar_150854_1780494535(s0);
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = (NIM_BOOL)0;
				LOC9 = ((NU8)(c0) == (NU8)(10));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(c0) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				goto LA1;
			}
			goto LA7;
			LA11: ;
			{
				result0 = addChar(result0, c0);
			}
			LA7: ;
		}
	} LA1: ;
	return result0;
}
N_NIMCALL(void, TMP3267)(void* p, NI op) {
	Stringstreamobj151377* a;
	a = (Stringstreamobj151377*)p;
	nimGCvisit((void*)(*a).data, op);
}

N_NIMCALL(void, ssclose_151458_1780494535)(Streamobj150418* s_151460_1780494535) {
	Stringstreamobj151377* s0;
	NimStringDesc* LOC1;
	s0 = ((Stringstreamobj151377*) (s_151460_1780494535));
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*s0).data; (*s0).data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}

N_NIMCALL(NIM_BOOL, ssatend_151383_1780494535)(Streamobj150418* s_151385_1780494535) {
	NIM_BOOL result0;
	Stringstreamobj151377* s0;
{	result0 = (NIM_BOOL)0;
	s0 = ((Stringstreamobj151377*) (s_151385_1780494535));
	result0 = (((*s0).data ? (*s0).data->Sup.len : 0) <= (*s0).pos);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, sssetposition_151388_1780494535)(Streamobj150418* s_151390_1780494535, NI pos0) {
	Stringstreamobj151377* s0;
	s0 = ((Stringstreamobj151377*) (s_151390_1780494535));
	(*s0).pos = clamp_151394_1689653243(pos0, ((NI) 0), ((*s0).data ? (*s0).data->Sup.len : 0));
}

N_NIMCALL(NI, ssgetposition_151404_1780494535)(Streamobj150418* s_151406_1780494535) {
	NI result0;
	Stringstreamobj151377* s0;
{	result0 = (NI)0;
	s0 = ((Stringstreamobj151377*) (s_151406_1780494535));
	result0 = (*s0).pos;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, ssreaddata_151409_1780494535)(Streamobj150418* s_151411_1780494535, void* buffer0, NI buflen0) {
	NI result0;
	Stringstreamobj151377* s0;
	result0 = (NI)0;
	s0 = ((Stringstreamobj151377*) (s_151411_1780494535));
	result0 = ((buflen0 <= (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos)) ? buflen0 : (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos));
	{
		if (!(((NI) 0) < result0)) goto LA3;
		memcpy(buffer0, ((void*) ((&(*s0).data->data[(*s0).pos]))), ((NI) (result0)));
		(*s0).pos += result0;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NI, sspeekdata_151430_1780494535)(Streamobj150418* s_151432_1780494535, void* buffer0, NI buflen0) {
	NI result0;
	Stringstreamobj151377* s0;
	result0 = (NI)0;
	s0 = ((Stringstreamobj151377*) (s_151432_1780494535));
	result0 = ((buflen0 <= (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos)) ? buflen0 : (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos));
	{
		if (!(((NI) 0) < result0)) goto LA3;
		memcpy(buffer0, ((void*) ((&(*s0).data->data[(*s0).pos]))), ((NI) (result0)));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, sswritedata_151442_1780494535)(Streamobj150418* s_151444_1780494535, void* buffer0, NI buflen0) {
	Stringstreamobj151377* s0;
{	s0 = ((Stringstreamobj151377*) (s_151444_1780494535));
	{
		if (!(buflen0 <= ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(((*s0).data ? (*s0).data->Sup.len : 0) < (NI)((*s0).pos + buflen0))) goto LA7;
		(*s0).data = setLengthStr((*s0).data, ((NI) ((NI)((*s0).pos + buflen0))));
	}
	LA7: ;
	memcpy(((void*) ((&(*s0).data->data[(*s0).pos]))), buffer0, ((NI) (buflen0)));
	(*s0).pos += buflen0;
	}BeforeRet: ;
}

N_NIMCALL(Stringstreamobj151377*, newstringstream_151462_1780494535)(NimStringDesc* s0) {
	Stringstreamobj151377* result0;
	NimStringDesc* LOC1;
	result0 = (Stringstreamobj151377*)0;
	result0 = (Stringstreamobj151377*) newObj((&NTI151375), sizeof(Stringstreamobj151377));
	(*result0).Sup.Sup.m_type = (&NTI151377);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).data; (*result0).data = copyStringRC1(s0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result0).pos = ((NI) 0);
	(*result0).Sup.closeimpl = ssclose_151458_1780494535;
	(*result0).Sup.atendimpl = ssatend_151383_1780494535;
	(*result0).Sup.setpositionimpl = sssetposition_151388_1780494535;
	(*result0).Sup.getpositionimpl = ssgetposition_151404_1780494535;
	(*result0).Sup.readdataimpl = ssreaddata_151409_1780494535;
	(*result0).Sup.peekdataimpl = sspeekdata_151430_1780494535;
	(*result0).Sup.writedataimpl = sswritedata_151442_1780494535;
	return result0;
}

N_NIMCALL(NimStringDesc*, readall_150518_1780494535)(Streamobj150418* s0) {
	NimStringDesc* result0;
	NI r0;
	result0 = (NimStringDesc*)0;
	result0 = mnewString(((NI) 1000));
	r0 = ((NI) 0);
	{
		while (1) {
			NI readbytes0;
			readbytes0 = readdata_150512_1780494535(s0, ((void*) ((&result0->data[r0]))), ((NI) 1000));
			{
				if (!(readbytes0 < ((NI) 1000))) goto LA5;
				result0 = setLengthStr(result0, ((NI) ((NI)(r0 + readbytes0))));
				goto LA1;
			}
			LA5: ;
			r0 += ((NI) 1000);
			result0 = setLengthStr(result0, ((NI) ((NI)(r0 + ((NI) 1000)))));
		}
	} LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void) {
static TNimNode* TMP2975[8];
static TNimNode* TMP3266[2];
static TNimNode TMP39[13];
NTI150418.size = sizeof(Streamobj150418);
NTI150418.kind = 17;
NTI150418.base = (&NTI3408);
NTI150418.flags = 1;
TMP2975[0] = &TMP39[1];
NTI150419.size = sizeof(TY150419);
NTI150419.kind = 25;
NTI150419.base = 0;
NTI150419.flags = 3;
TMP39[1].kind = 1;
TMP39[1].offset = offsetof(Streamobj150418, closeimpl);
TMP39[1].typ = (&NTI150419);
TMP39[1].name = "closeImpl";
TMP2975[1] = &TMP39[2];
NTI150423.size = sizeof(TY150423);
NTI150423.kind = 25;
NTI150423.base = 0;
NTI150423.flags = 3;
TMP39[2].kind = 1;
TMP39[2].offset = offsetof(Streamobj150418, atendimpl);
TMP39[2].typ = (&NTI150423);
TMP39[2].name = "atEndImpl";
TMP2975[2] = &TMP39[3];
NTI150427.size = sizeof(TY150427);
NTI150427.kind = 25;
NTI150427.base = 0;
NTI150427.flags = 3;
TMP39[3].kind = 1;
TMP39[3].offset = offsetof(Streamobj150418, setpositionimpl);
TMP39[3].typ = (&NTI150427);
TMP39[3].name = "setPositionImpl";
TMP2975[3] = &TMP39[4];
NTI150432.size = sizeof(TY150432);
NTI150432.kind = 25;
NTI150432.base = 0;
NTI150432.flags = 3;
TMP39[4].kind = 1;
TMP39[4].offset = offsetof(Streamobj150418, getpositionimpl);
TMP39[4].typ = (&NTI150432);
TMP39[4].name = "getPositionImpl";
TMP2975[4] = &TMP39[5];
NTI150436.size = sizeof(TY150436);
NTI150436.kind = 25;
NTI150436.base = 0;
NTI150436.flags = 3;
TMP39[5].kind = 1;
TMP39[5].offset = offsetof(Streamobj150418, readdataimpl);
TMP39[5].typ = (&NTI150436);
TMP39[5].name = "readDataImpl";
TMP2975[5] = &TMP39[6];
NTI150442.size = sizeof(TY150442);
NTI150442.kind = 25;
NTI150442.base = 0;
NTI150442.flags = 3;
TMP39[6].kind = 1;
TMP39[6].offset = offsetof(Streamobj150418, peekdataimpl);
TMP39[6].typ = (&NTI150442);
TMP39[6].name = "peekDataImpl";
TMP2975[6] = &TMP39[7];
NTI150448.size = sizeof(TY150448);
NTI150448.kind = 25;
NTI150448.base = 0;
NTI150448.flags = 3;
TMP39[7].kind = 1;
TMP39[7].offset = offsetof(Streamobj150418, writedataimpl);
TMP39[7].typ = (&NTI150448);
TMP39[7].name = "writeDataImpl";
TMP2975[7] = &TMP39[8];
NTI150454.size = sizeof(TY150454);
NTI150454.kind = 25;
NTI150454.base = 0;
NTI150454.flags = 3;
TMP39[8].kind = 1;
TMP39[8].offset = offsetof(Streamobj150418, flushimpl);
TMP39[8].typ = (&NTI150454);
TMP39[8].name = "flushImpl";
TMP39[0].len = 8; TMP39[0].kind = 2; TMP39[0].sons = &TMP2975[0];
NTI150418.node = &TMP39[0];
NTI150416.size = sizeof(Streamobj150418*);
NTI150416.kind = 22;
NTI150416.base = (&NTI150418);
NTI150416.marker = TMP2976;
NTI151477.size = sizeof(Filestreamobj151477);
NTI151477.kind = 17;
NTI151477.base = (&NTI150418);
NTI151477.flags = 1;
TMP39[9].kind = 1;
TMP39[9].offset = offsetof(Filestreamobj151477, f);
TMP39[9].typ = (&NTI12407);
TMP39[9].name = "f";
NTI151477.node = &TMP39[9];
NTI151475.size = sizeof(Filestreamobj151477*);
NTI151475.kind = 22;
NTI151475.base = (&NTI151477);
NTI151475.marker = TMP2977;
NTI151377.size = sizeof(Stringstreamobj151377);
NTI151377.kind = 17;
NTI151377.base = (&NTI150418);
TMP3266[0] = &TMP39[11];
TMP39[11].kind = 1;
TMP39[11].offset = offsetof(Stringstreamobj151377, data);
TMP39[11].typ = (&NTI138);
TMP39[11].name = "data";
TMP3266[1] = &TMP39[12];
TMP39[12].kind = 1;
TMP39[12].offset = offsetof(Stringstreamobj151377, pos);
TMP39[12].typ = (&NTI104);
TMP39[12].name = "pos";
TMP39[10].len = 2; TMP39[10].kind = 2; TMP39[10].sons = &TMP3266[0];
NTI151377.node = &TMP39[10];
NTI151375.size = sizeof(Stringstreamobj151377*);
NTI151375.kind = 22;
NTI151375.base = (&NTI151377);
NTI151375.marker = TMP3267;
}

