/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <setjmp.h>
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj144418 Streamobj144418;
typedef struct TNimObject TNimObject;
typedef struct Filestreamobj145248 Filestreamobj145248;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Ioerror3628 Ioerror3628;
typedef struct Systemerror3626 Systemerror3626;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29688 Memregion29688;
typedef struct Smallchunk29640 Smallchunk29640;
typedef struct Llchunk29682 Llchunk29682;
typedef struct Bigchunk29642 Bigchunk29642;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29686 Avlnode29686;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Stringstreamobj145149 Stringstreamobj145149;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
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
typedef N_NIMCALL_PTR(void, TY144419) (Streamobj144418* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY144423) (Streamobj144418* s);
typedef N_NIMCALL_PTR(void, TY144427) (Streamobj144418* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY144432) (Streamobj144418* s);
typedef N_NIMCALL_PTR(NI, TY144436) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(NI, TY144442) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY144448) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY144454) (Streamobj144418* s);
struct  Streamobj144418  {
  TNimObject Sup;
TY144419 closeimpl;
TY144423 atendimpl;
TY144427 setpositionimpl;
TY144432 getpositionimpl;
TY144436 readdataimpl;
TY144442 peekdataimpl;
TY144448 writedataimpl;
TY144454 flushimpl;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Filestreamobj145248  {
  Streamobj144418 Sup;
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
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY17811;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17811 raiseAction;
};
struct  Systemerror3626  {
  Exception Sup;
};
struct  Ioerror3628  {
  Systemerror3626 Sup;
};
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29640* TY29703[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29688  {
NI minlargeobj;
NI maxlargeobj;
TY29703 freesmallchunks;
Llchunk29682* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29642* freechunkslist;
Intset29614 chunkstarts;
Avlnode29686* root;
Avlnode29686* deleted;
Avlnode29686* last;
Avlnode29686* freeavlnodes;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29688 region;
Gcstat49814 stat;
};
struct  Stringstreamobj145149  {
  Streamobj144418 Sup;
NimStringDesc* data;
NI pos;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29619[8];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29619 bits;
};
struct  Basechunk29638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29640  {
  Basechunk29638 Sup;
Smallchunk29640* next;
Smallchunk29640* prev;
Freecell29630* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29682  {
NI size;
NI acc;
Llchunk29682* next;
};
struct  Bigchunk29642  {
  Basechunk29638 Sup;
Bigchunk29642* next;
Bigchunk29642* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29619 bits;
};
typedef Avlnode29686* TY29693[2];
struct  Avlnode29686  {
TY29693 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
N_NIMCALL(void, TMP2829)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_15403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(Filestreamobj145248*, newfilestream_145301)(FILE* f);
N_NIMCALL(void, TMP2830)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, fsclose_145252)(Streamobj144418* s);
N_NIMCALL(NIM_BOOL, fsatend_145270)(Streamobj144418* s);
N_NIMCALL(NIM_BOOL, endoffile_15454)(FILE* f);
N_NIMCALL(void, fssetposition_145274)(Streamobj144418* s, NI pos);
N_NIMCALL(void, setfilepos_15581)(FILE* f, NI64 pos);
N_NIMCALL(NI, fsgetposition_145278)(Streamobj144418* s);
N_NIMCALL(NI64, getfilepos_15585)(FILE* f);
N_NIMCALL(NI, fsreaddata_145283)(Streamobj144418* s, void* buffer, NI buflen);
N_NIMCALL(NI, readbuffer_15554)(FILE* f, void* buffer, NI len);
N_NIMCALL(NI, fspeekdata_145289)(Streamobj144418* s, void* buffer, NI buflen);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, fswritedata_145296)(Streamobj144418* s, void* buffer, NI buflen);
N_NIMCALL(NI, writebuffer_15576)(FILE* f, void* buffer, NI len);
N_NIMCALL(Ioerror3628*, neweio_144402)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(void, fsflush_145267)(Streamobj144418* s);
N_NIMCALL(void, writedata_144549)(Streamobj144418* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_CHAR, readchar_144626)(Streamobj144418* s);
N_NIMCALL(NI, readdata_144511)(Streamobj144418* s, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3105)(void* p, NI op);
N_NIMCALL(void, ssclose_145229)(Streamobj144418* s_145231);
N_NIMCALL(NIM_BOOL, ssatend_145154)(Streamobj144418* s_145156);
N_NIMCALL(void, sssetposition_145159)(Streamobj144418* s_145161, NI pos);
N_NIMCALL(NI, clamp_145165)(NI x, NI a, NI b);
N_NIMCALL(NI, ssgetposition_145175)(Streamobj144418* s_145177);
N_NIMCALL(NI, ssreaddata_145180)(Streamobj144418* s_145182, void* buffer, NI buflen);
N_NIMCALL(NI, sspeekdata_145201)(Streamobj144418* s_145203, void* buffer, NI buflen);
N_NIMCALL(void, sswritedata_145213)(Streamobj144418* s_145215, void* buffer, NI buflen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
STRING_LITERAL(TMP2834, "cannot write to stream", 22);
STRING_LITERAL(TMP3061, "", 0);
extern TNimType NTI3608; /* RootObj */
TNimType NTI144418; /* StreamObj */
TNimType NTI144419; /* proc (s: Stream){.gcsafe.} */
TNimType NTI144423; /* proc (s: Stream): bool{.gcsafe.} */
TNimType NTI144427; /* proc (s: Stream, pos: int){.gcsafe.} */
TNimType NTI144432; /* proc (s: Stream): int{.gcsafe.} */
TNimType NTI144436; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI144442; /* proc (s: Stream, buffer: pointer, bufLen: int): int{.gcsafe.} */
TNimType NTI144448; /* proc (s: Stream, buffer: pointer, bufLen: int){.gcsafe.} */
TNimType NTI144454; /* proc (s: Stream){.gcsafe.} */
TNimType NTI144416; /* Stream */
TNimType NTI145248; /* FileStreamObj */
extern TNimType NTI15004; /* File */
TNimType NTI145246; /* FileStream */
extern TSafePoint* exchandler_19437;
extern TNimType NTI81217; /* ref IOError */
extern TNimType NTI3628; /* IOError */
extern Gcheap49818 gch_49859;
TNimType NTI145149; /* StringStreamObj */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
TNimType NTI145147; /* StringStream */
N_NIMCALL(void, TMP2829)(void* p, NI op) {
	Streamobj144418* a;
	a = (Streamobj144418*)p;
}

N_NIMCALL(NI, readdata_144511)(Streamobj144418* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = (*s).readdataimpl(s, buffer, buflen);
	return result;
}
N_NIMCALL(void, TMP2830)(void* p, NI op) {
	Filestreamobj145248* a;
	a = (Filestreamobj145248*)p;
}

N_NIMCALL(void, fsclose_145252)(Streamobj144418* s) {
	{
		if (!!(((*((Filestreamobj145248*) (s))).f == NIM_NIL))) goto LA3;
		fclose((*((Filestreamobj145248*) (s))).f);
		(*((Filestreamobj145248*) (s))).f = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_145270)(Streamobj144418* s) {
	NIM_BOOL result;
{	result = 0;
	result = endoffile_15454((*((Filestreamobj145248*) (s))).f);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, fssetposition_145274)(Streamobj144418* s, NI pos) {
	setfilepos_15581((*((Filestreamobj145248*) (s))).f, ((NI64) (pos)));
}

N_NIMCALL(NI, fsgetposition_145278)(Streamobj144418* s) {
	NI result;
	NI64 LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = getfilepos_15585((*((Filestreamobj145248*) (s))).f);
	result = ((NI) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, fsreaddata_145283)(Streamobj144418* s, void* buffer, NI buflen) {
	NI result;
	result = 0;
	result = readbuffer_15554((*((Filestreamobj145248*) (s))).f, buffer, ((NI) (buflen)));
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_19437;
	exchandler_19437 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19437 = (*exchandler_19437).prev;
}

N_NIMCALL(NI, fspeekdata_145289)(Streamobj144418* s, void* buffer, NI buflen) {
	NI volatile result;
	NI pos;
	TSafePoint TMP2833;
	result = 0;
	pos = fsgetposition_145278(s);
	pushSafePoint(&TMP2833);
	TMP2833.status = setjmp(TMP2833.context);
	if (TMP2833.status == 0) {
		result = readbuffer_15554((*((Filestreamobj145248*) (s))).f, buffer, ((NI) (buflen)));
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		fssetposition_145274(s, pos);
	}
	if (TMP2833.status != 0) reraiseException();
	return result;
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47505* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	LA3: ;
}

N_NIMCALL(Ioerror3628*, neweio_144402)(NimStringDesc* msg) {
	Ioerror3628* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Ioerror3628*) newObj((&NTI81217), sizeof(Ioerror3628));
	(*result).Sup.Sup.Sup.m_type = (&NTI3628);
	LOC1 = 0;
	LOC1 = (*result).Sup.Sup.message; (*result).Sup.Sup.message = copyStringRC1(msg);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

N_NIMCALL(void, fswritedata_145296)(Streamobj144418* s, void* buffer, NI buflen) {
	{
		NI LOC3;
		Ioerror3628* LOC6;
		LOC3 = 0;
		LOC3 = writebuffer_15576((*((Filestreamobj145248*) (s))).f, buffer, ((NI) (buflen)));
		if (!!((LOC3 == buflen))) goto LA4;
		LOC6 = 0;
		LOC6 = neweio_144402(((NimStringDesc*) &TMP2834));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_145267)(Streamobj144418* s) {
	fflush((*((Filestreamobj145248*) (s))).f);
}

N_NIMCALL(Filestreamobj145248*, newfilestream_145301)(FILE* f) {
	Filestreamobj145248* result;
	result = 0;
	result = (Filestreamobj145248*) newObj((&NTI145246), sizeof(Filestreamobj145248));
	(*result).Sup.Sup.m_type = (&NTI145248);
	(*result).f = f;
	(*result).Sup.closeimpl = fsclose_145252;
	(*result).Sup.atendimpl = fsatend_145270;
	(*result).Sup.setpositionimpl = fssetposition_145274;
	(*result).Sup.getpositionimpl = fsgetposition_145278;
	(*result).Sup.readdataimpl = fsreaddata_145283;
	(*result).Sup.peekdataimpl = fspeekdata_145289;
	(*result).Sup.writedataimpl = fswritedata_145296;
	(*result).Sup.flushimpl = fsflush_145267;
	return result;
}

N_NIMCALL(Filestreamobj145248*, newfilestream_145313)(NimStringDesc* filename, NU8 mode) {
	Filestreamobj145248* result;
	FILE* f;
	result = 0;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_15403(&f, filename, mode, ((NI) -1));
		if (!LOC3) goto LA4;
		result = newfilestream_145301(f);
	}
	LA4: ;
	return result;
}

N_NIMCALL(void, close_144470)(Streamobj144418* s) {
	{
		if (!!((*s).closeimpl == 0)) goto LA3;
		(*s).closeimpl(s);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_144549)(Streamobj144418* s, void* buffer, NI buflen) {
	(*s).writedataimpl(s, buffer, buflen);
}

N_NIMCALL(void, write_144569)(Streamobj144418* s, NimStringDesc* x) {
	writedata_144549(s, ((void*) (x->data)), (x ? x->Sup.len : 0));
}

N_NIMCALL(NIM_BOOL, atend_144484)(Streamobj144418* s) {
	NIM_BOOL result;
	result = 0;
	result = (*s).atendimpl(s);
	return result;
}

N_NIMCALL(NIM_CHAR, readchar_144626)(Streamobj144418* s) {
	NIM_CHAR result;
	result = 0;
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = readdata_144511(s, ((void*) ((&result))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result = 0;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NimStringDesc*, readline_145133)(Streamobj144418* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP3061));
	{
		while (1) {
			NIM_CHAR c;
			c = readchar_144626(s);
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA5;
				c = readchar_144626(s);
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
N_NIMCALL(void, TMP3105)(void* p, NI op) {
	Stringstreamobj145149* a;
	a = (Stringstreamobj145149*)p;
	nimGCvisit((void*)(*a).data, op);
}

N_NIMCALL(void, ssclose_145229)(Streamobj144418* s_145231) {
	Stringstreamobj145149* s;
	NimStringDesc* LOC1;
	s = ((Stringstreamobj145149*) (s_145231));
	LOC1 = 0;
	LOC1 = (*s).data; (*s).data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}

N_NIMCALL(NIM_BOOL, ssatend_145154)(Streamobj144418* s_145156) {
	NIM_BOOL result;
	Stringstreamobj145149* s;
{	result = 0;
	s = ((Stringstreamobj145149*) (s_145156));
	result = (((*s).data ? (*s).data->Sup.len : 0) <= (*s).pos);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, sssetposition_145159)(Streamobj144418* s_145161, NI pos) {
	Stringstreamobj145149* s;
	s = ((Stringstreamobj145149*) (s_145161));
	(*s).pos = clamp_145165(pos, ((NI) 0), ((*s).data ? (*s).data->Sup.len : 0));
}

N_NIMCALL(NI, ssgetposition_145175)(Streamobj144418* s_145177) {
	NI result;
	Stringstreamobj145149* s;
{	result = 0;
	s = ((Stringstreamobj145149*) (s_145177));
	result = (*s).pos;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, ssreaddata_145180)(Streamobj144418* s_145182, void* buffer, NI buflen) {
	NI result;
	Stringstreamobj145149* s;
	result = 0;
	s = ((Stringstreamobj145149*) (s_145182));
	result = ((buflen <= (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos)) ? buflen : (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos));
	{
		if (!(((NI) 0) < result)) goto LA3;
		memcpy(buffer, ((void*) ((&(*s).data->data[(*s).pos]))), ((NI) (result)));
		(*s).pos += result;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, sspeekdata_145201)(Streamobj144418* s_145203, void* buffer, NI buflen) {
	NI result;
	Stringstreamobj145149* s;
	result = 0;
	s = ((Stringstreamobj145149*) (s_145203));
	result = ((buflen <= (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos)) ? buflen : (NI)(((*s).data ? (*s).data->Sup.len : 0) - (*s).pos));
	{
		if (!(((NI) 0) < result)) goto LA3;
		memcpy(buffer, ((void*) ((&(*s).data->data[(*s).pos]))), ((NI) (result)));
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, sswritedata_145213)(Streamobj144418* s_145215, void* buffer, NI buflen) {
	Stringstreamobj145149* s;
{	s = ((Stringstreamobj145149*) (s_145215));
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

N_NIMCALL(Stringstreamobj145149*, newstringstream_145233)(NimStringDesc* s) {
	Stringstreamobj145149* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Stringstreamobj145149*) newObj((&NTI145147), sizeof(Stringstreamobj145149));
	(*result).Sup.Sup.m_type = (&NTI145149);
	LOC1 = 0;
	LOC1 = (*result).data; (*result).data = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).pos = ((NI) 0);
	(*result).Sup.closeimpl = ssclose_145229;
	(*result).Sup.atendimpl = ssatend_145154;
	(*result).Sup.setpositionimpl = sssetposition_145159;
	(*result).Sup.getpositionimpl = ssgetposition_145175;
	(*result).Sup.readdataimpl = ssreaddata_145180;
	(*result).Sup.peekdataimpl = sspeekdata_145201;
	(*result).Sup.writedataimpl = sswritedata_145213;
	return result;
}

N_NIMCALL(NimStringDesc*, readall_144517)(Streamobj144418* s) {
	NimStringDesc* result;
	NI r;
	result = 0;
	result = mnewString(((NI) 1000));
	r = ((NI) 0);
	{
		while (1) {
			NI readbytes;
			readbytes = readdata_144511(s, ((void*) ((&result->data[r]))), ((NI) 1000));
			{
				if (!(readbytes < ((NI) 1000))) goto LA5;
				result = setLengthStr(result, ((NI) ((NI)(r + readbytes))));
				goto LA1;
			}
			LA5: ;
			r += ((NI) 1000);
			result = setLengthStr(result, ((NI) ((NI)(r + ((NI) 1000)))));
		}
	} LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void) {
static TNimNode* TMP2828[8];
static TNimNode* TMP3104[2];
static TNimNode TMP33[13];
NTI144418.size = sizeof(Streamobj144418);
NTI144418.kind = 17;
NTI144418.base = (&NTI3608);
NTI144418.flags = 1;
TMP2828[0] = &TMP33[1];
NTI144419.size = sizeof(TY144419);
NTI144419.kind = 25;
NTI144419.base = 0;
NTI144419.flags = 3;
TMP33[1].kind = 1;
TMP33[1].offset = offsetof(Streamobj144418, closeimpl);
TMP33[1].typ = (&NTI144419);
TMP33[1].name = "closeImpl";
TMP2828[1] = &TMP33[2];
NTI144423.size = sizeof(TY144423);
NTI144423.kind = 25;
NTI144423.base = 0;
NTI144423.flags = 3;
TMP33[2].kind = 1;
TMP33[2].offset = offsetof(Streamobj144418, atendimpl);
TMP33[2].typ = (&NTI144423);
TMP33[2].name = "atEndImpl";
TMP2828[2] = &TMP33[3];
NTI144427.size = sizeof(TY144427);
NTI144427.kind = 25;
NTI144427.base = 0;
NTI144427.flags = 3;
TMP33[3].kind = 1;
TMP33[3].offset = offsetof(Streamobj144418, setpositionimpl);
TMP33[3].typ = (&NTI144427);
TMP33[3].name = "setPositionImpl";
TMP2828[3] = &TMP33[4];
NTI144432.size = sizeof(TY144432);
NTI144432.kind = 25;
NTI144432.base = 0;
NTI144432.flags = 3;
TMP33[4].kind = 1;
TMP33[4].offset = offsetof(Streamobj144418, getpositionimpl);
TMP33[4].typ = (&NTI144432);
TMP33[4].name = "getPositionImpl";
TMP2828[4] = &TMP33[5];
NTI144436.size = sizeof(TY144436);
NTI144436.kind = 25;
NTI144436.base = 0;
NTI144436.flags = 3;
TMP33[5].kind = 1;
TMP33[5].offset = offsetof(Streamobj144418, readdataimpl);
TMP33[5].typ = (&NTI144436);
TMP33[5].name = "readDataImpl";
TMP2828[5] = &TMP33[6];
NTI144442.size = sizeof(TY144442);
NTI144442.kind = 25;
NTI144442.base = 0;
NTI144442.flags = 3;
TMP33[6].kind = 1;
TMP33[6].offset = offsetof(Streamobj144418, peekdataimpl);
TMP33[6].typ = (&NTI144442);
TMP33[6].name = "peekDataImpl";
TMP2828[6] = &TMP33[7];
NTI144448.size = sizeof(TY144448);
NTI144448.kind = 25;
NTI144448.base = 0;
NTI144448.flags = 3;
TMP33[7].kind = 1;
TMP33[7].offset = offsetof(Streamobj144418, writedataimpl);
TMP33[7].typ = (&NTI144448);
TMP33[7].name = "writeDataImpl";
TMP2828[7] = &TMP33[8];
NTI144454.size = sizeof(TY144454);
NTI144454.kind = 25;
NTI144454.base = 0;
NTI144454.flags = 3;
TMP33[8].kind = 1;
TMP33[8].offset = offsetof(Streamobj144418, flushimpl);
TMP33[8].typ = (&NTI144454);
TMP33[8].name = "flushImpl";
TMP33[0].len = 8; TMP33[0].kind = 2; TMP33[0].sons = &TMP2828[0];
NTI144418.node = &TMP33[0];
NTI144416.size = sizeof(Streamobj144418*);
NTI144416.kind = 22;
NTI144416.base = (&NTI144418);
NTI144416.marker = TMP2829;
NTI145248.size = sizeof(Filestreamobj145248);
NTI145248.kind = 17;
NTI145248.base = (&NTI144418);
NTI145248.flags = 1;
TMP33[9].kind = 1;
TMP33[9].offset = offsetof(Filestreamobj145248, f);
TMP33[9].typ = (&NTI15004);
TMP33[9].name = "f";
NTI145248.node = &TMP33[9];
NTI145246.size = sizeof(Filestreamobj145248*);
NTI145246.kind = 22;
NTI145246.base = (&NTI145248);
NTI145246.marker = TMP2830;
NTI145149.size = sizeof(Stringstreamobj145149);
NTI145149.kind = 17;
NTI145149.base = (&NTI144418);
TMP3104[0] = &TMP33[11];
TMP33[11].kind = 1;
TMP33[11].offset = offsetof(Stringstreamobj145149, data);
TMP33[11].typ = (&NTI138);
TMP33[11].name = "data";
TMP3104[1] = &TMP33[12];
TMP33[12].kind = 1;
TMP33[12].offset = offsetof(Stringstreamobj145149, pos);
TMP33[12].typ = (&NTI104);
TMP33[12].name = "pos";
TMP33[10].len = 2; TMP33[10].kind = 2; TMP33[10].sons = &TMP3104[0];
NTI145149.node = &TMP33[10];
NTI145147.size = sizeof(Stringstreamobj145149*);
NTI145147.kind = 22;
NTI145147.base = (&NTI145149);
NTI145147.marker = TMP3105;
}

