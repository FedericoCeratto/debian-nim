/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <netinet/in.h>
#include <sys/socket.h>
#include <string.h>
#include <netdb.h>
#include <errno.h>
#include <arpa/inet.h>
#include <setjmp.h>
typedef struct Socketimpl583406 Socketimpl583406;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Timeouterror583414 Timeouterror583414;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29486 Memregion29486;
typedef struct Smallchunk29440 Smallchunk29440;
typedef struct Llchunk29480 Llchunk29480;
typedef struct Bigchunk29442 Bigchunk29442;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29484 Avlnode29484;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct TY587019 TY587019;
typedef struct Valueerror3646 Valueerror3646;
typedef struct TSafePoint TSafePoint;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
typedef NIM_CHAR TY583420[4001];
typedef NU8 Domain577604;
typedef NU8 Socktype577606;
typedef NU8 Protocol577608;
struct  Socketimpl583406  {
int fd;
NIM_BOOL isbuffered;
union{
struct {TY583420 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
Domain577604 domain;
Socktype577606 socktype;
Protocol577608 protocol;
};
typedef NU8 Tnimkind3403;
typedef NU8 Tnimtypeflag3409Set;
typedef N_NIMCALL_PTR(void, TY3489) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3403 kind;
Tnimtypeflag3409Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Socketflag583416Set;
typedef NU8 Socketflag583416;
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Timeouterror583414  {
  Exception Sup;
};
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
};
typedef Smallchunk29440* TY29501[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29486  {
NI minlargeobj;
NI maxlargeobj;
TY29501 freesmallchunks;
Llchunk29480* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29442* freechunkslist;
Intset29414 chunkstarts;
Avlnode29484* root;
Avlnode29484* deleted;
Avlnode29484* last;
Avlnode29484* freeavlnodes;
NIM_BOOL locked;
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
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellseq47320 tempstack;
NI recgclock;
Memregion29486 region;
Gcstat49814 stat;
Cellset47316 marked;
Cellseq47320 additionalroots;
};
typedef int TY587008[1];
struct  Valueerror3646  {
  Exception Sup;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY17211;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17211 raiseAction;
};
typedef NIM_CHAR TY120770[256];
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29440  {
  Basechunk29438 Sup;
Smallchunk29440* next;
Smallchunk29440* prev;
Freecell29430* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29480  {
NI size;
NI acc;
Llchunk29480* next;
};
struct  Bigchunk29442  {
  Basechunk29438 Sup;
Bigchunk29442* next;
Bigchunk29442* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29484* TY29491[2];
struct  Avlnode29484  {
TY29491 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29419 bits;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
struct TY587019 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, T170061329_4)(void* p, NI op);
N_NIMCALL(int, newnativesocket_578001_466562973)(Domain577604 domain0, Socktype577606 socktype0, Protocol577608 protocol0);
N_NOINLINE(void, raiseoserror_130603_2125978480)(NI32 errorcode0, NimStringDesc* additionalinfo0);
N_NIMCALL(NI32, oslasterror_130619_2125978480)(void);
N_NIMCALL(Socketimpl583406*, newsocket_583674_170061329)(int fd0, Domain577604 domain0, Socktype577606 socktype0, Protocol577608 protocol0, NIM_BOOL buffered0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(int, toint_577820_466562973)(Domain577604 domain0);
N_NIMCALL(NU16, ntohs_579007_466562973)(NU16 x0);
N_NIMCALL(NU32, ntohl_578806_466562973)(NU32 x0);
N_NIMCALL(int, bindaddr_578208_466562973)(int socket0, struct sockaddr* name0, socklen_t namelen0);
N_NIMCALL(struct addrinfo*, getaddrinfo_578402_466562973)(NimStringDesc* address0, NU16 port0, Domain577604 domain0, Socktype577606 socktype0, Protocol577608 protocol0);
N_NIMCALL(void, dealloc_578802_466562973)(struct addrinfo* ai0);
N_NIMCALL(int, listen_578215_466562973)(int socket0, int backlog0);
N_NIMCALL(NI, send_588510_170061329)(Socketimpl583406* socket0, void* data0, NI size0);
N_NIMCALL(NIM_BOOL, isdisconnectionerror_583478_170061329)(Socketflag583416Set flags0, NI32 lasterror0);
N_NIMCALL(void, socketerror_583472_170061329)(Socketimpl583406* socket0, NI err0, NIM_BOOL async0, NI32 lasterror0);
N_NIMCALL(NI32, getsocketerror_584201_170061329)(Socketimpl583406* socket0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(void, acceptaddr_585009_170061329)(Socketimpl583406* server0, Socketimpl583406** client0, NimStringDesc** address0, Socketflag583416Set flags0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(NI, waitfor_587606_170061329)(Socketimpl583406* socket0, NF* waited0, NI timeout0, NI size0, NimStringDesc* funcname0);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T170061329_8)(void* p, NI op);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, select_587001_170061329)(Socketimpl583406* readfd0, NI timeout0);
N_NIMCALL(NIM_BOOL, hasdatabuffered_586801_170061329)(Socketimpl583406* s0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(NI, select_582277_466562973)(TY587019** readfds0, NI timeout0);
static N_INLINE(void, HEX2BHEX3D_111701_1689653243)(NF* x0, NF y0);
N_NIMCALL(NI, recv_587216_170061329)(Socketimpl583406* socket0, void* data0, NI size0);
N_NIMCALL(NI, readintobuf_587023_170061329)(Socketimpl583406* socket0, NI32 flags0);
N_NIMCALL(NI, peekchar_588236_170061329)(Socketimpl583406* socket0, NIM_CHAR* c0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_578013_466562973)(int socket0);
N_NIMCALL(void, reraiseException)(void);
TNimNode* NimDT_583406_isbuffered[3];
STRING_LITERAL(T170061329_5, "", 0);
STRING_LITERAL(T170061329_6, "No valid socket error code available", 36);
STRING_LITERAL(T170061329_7, "Could not send all data.", 24);
STRING_LITERAL(T170061329_9, "Call to \'", 9);
STRING_LITERAL(T170061329_10, "\' timed out.", 12);
STRING_LITERAL(T170061329_11, "readLine", 8);
STRING_LITERAL(T170061329_12, "\015\012", 2);
STRING_LITERAL(T170061329_13, "recvLine received more than the specified `maxLength` allowed.", 62);
TNimType NTI583406; /* SocketImpl */
extern TNimType NTI7408; /* cint */
extern TNimType NTI130; /* bool */
extern TNimType NTI136; /* char */
TNimType NTI583420; /* array[0..4000, char] */
extern TNimType NTI104; /* int */
extern TNimType NTI110; /* int32 */
extern TNimType NTI577604; /* Domain */
extern TNimType NTI577606; /* SockType */
extern TNimType NTI577608; /* Protocol */
TNimType NTI583408; /* Socket */
extern int osinvalidsocket_577650_466562973;
extern TNimType NTI3624; /* Exception */
TNimType NTI583414; /* TimeoutError */
TNimType NTI587814; /* ref TimeoutError */
extern Gcheap49818 gch_49858_1689653243;
extern TNimType NTI587019; /* seq[SocketHandle] */
extern TNimType NTI23025; /* ref ValueError */
extern TNimType NTI3646; /* ValueError */
extern TSafePoint* exchandler_18837_1689653243;
N_NIMCALL(void, T170061329_4)(void* p, NI op) {
	Socketimpl583406* a;
	NI LOC1;
	a = (Socketimpl583406*)p;
	switch ((*a).isbuffered) {
	case NIM_TRUE:
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 4001; LOC1++) {
	}
	break;
	case NIM_FALSE:
	break;
	} 
}

N_NIMCALL(Socketimpl583406*, newsocket_583674_170061329)(int fd0, Domain577604 domain0, Socktype577606 socktype0, Protocol577608 protocol0, NIM_BOOL buffered0) {
	Socketimpl583406* result0;
	result0 = (Socketimpl583406*)0;
	result0 = (Socketimpl583406*) newObj((&NTI583408), sizeof(Socketimpl583406));
	(*result0).fd = fd0;
	(*result0).isbuffered = buffered0;
	(*result0).domain = domain0;
	(*result0).socktype = socktype0;
	(*result0).protocol = protocol0;
	{
		if (!buffered0) goto LA3;
		(*result0).isbufferedU.S1.currpos = ((NI) 0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(Socketimpl583406*, newsocket_584009_170061329)(Domain577604 domain0, Socktype577606 socktype0, Protocol577608 protocol0, NIM_BOOL buffered0) {
	Socketimpl583406* result0;
	int fd0;
	result0 = (Socketimpl583406*)0;
	fd0 = newnativesocket_578001_466562973(domain0, socktype0, protocol0);
	{
		NI32 LOC5;
		if (!(fd0 == osinvalidsocket_577650_466562973)) goto LA3;
		LOC5 = (NI32)0;
		LOC5 = oslasterror_130619_2125978480();
		raiseoserror_130603_2125978480(LOC5, ((NimStringDesc*) &T170061329_5));
	}
	LA3: ;
	result0 = newsocket_583674_170061329(fd0, domain0, socktype0, protocol0, buffered0);
	return result0;
}

N_NIMCALL(void, bindaddr_584808_170061329)(Socketimpl583406* socket0, NU16 port0, NimStringDesc* address0) {
	{
		struct sockaddr_in name0;
		if (!((address0) && (address0)->Sup.len == 0)) goto LA3;
		memset((void*)(&name0), 0, sizeof(name0));
		name0.sin_family = toint_577820_466562973(((Domain577604) 2));
		name0.sin_port = ntohs_579007_466562973(port0);
		name0.sin_addr.s_addr = ntohl_578806_466562973(INADDR_ANY);
		{
			int LOC7;
			NI32 LOC10;
			LOC7 = (int)0;
			LOC7 = bindaddr_578208_466562973((*socket0).fd, ((struct sockaddr*) ((&name0))), ((socklen_t) (((NI)sizeof(struct sockaddr_in)))));
			if (!(LOC7 < ((NI32) 0))) goto LA8;
			LOC10 = (NI32)0;
			LOC10 = oslasterror_130619_2125978480();
			raiseoserror_130603_2125978480(LOC10, ((NimStringDesc*) &T170061329_5));
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		struct addrinfo* ailist0;
		ailist0 = getaddrinfo_578402_466562973(address0, port0, (*socket0).domain, ((Socktype577606) 1), ((Protocol577608) 6));
		{
			int LOC14;
			NI32 LOC17;
			LOC14 = (int)0;
			LOC14 = bindaddr_578208_466562973((*socket0).fd, (*ailist0).ai_addr, (*ailist0).ai_addrlen);
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			dealloc_578802_466562973(ailist0);
			LOC17 = (NI32)0;
			LOC17 = oslasterror_130619_2125978480();
			raiseoserror_130603_2125978480(LOC17, ((NimStringDesc*) &T170061329_5));
		}
		LA15: ;
		dealloc_578802_466562973(ailist0);
	}
	LA1: ;
}

N_NIMCALL(void, listen_584804_170061329)(Socketimpl583406* socket0, int backlog0) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = (int)0;
		LOC3 = listen_578215_466562973((*socket0).fd, backlog0);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = (NI32)0;
		LOC6 = oslasterror_130619_2125978480();
		raiseoserror_130603_2125978480(LOC6, ((NimStringDesc*) &T170061329_5));
	}
	LA4: ;
}

N_NIMCALL(NI, send_588510_170061329)(Socketimpl583406* socket0, void* data0, NI size0) {
	NI result0;
	result0 = (NI)0;
	result0 = send((*socket0).fd, data0, size0, ((NI32) 0));
	return result0;
}

N_NIMCALL(NIM_BOOL, isdisconnectionerror_583478_170061329)(Socketflag583416Set flags0, NI32 lasterror0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = ((flags0 &(1U<<((NU)(((Socketflag583416) 1))&7U)))!=0);
	if (!(LOC1)) goto LA2;
	LOC1 = (lasterror0 == ((NI) (ECONNRESET)) || lasterror0 == ((NI) (EPIPE)) || lasterror0 == ((NI) (ENETRESET)));
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(NI32, getsocketerror_584201_170061329)(Socketimpl583406* socket0) {
	NI32 result0;
	result0 = (NI32)0;
	result0 = oslasterror_130619_2125978480();
	{
		if (!(result0 == ((NI32) 0))) goto LA3;
		result0 = (*socket0).lasterror;
	}
	LA3: ;
	{
		if (!(result0 == ((NI32) 0))) goto LA7;
		raiseoserror_130603_2125978480(result0, ((NimStringDesc*) &T170061329_6));
	}
	LA7: ;
	return result0;
}

N_NIMCALL(void, socketerror_583472_170061329)(Socketimpl583406* socket0, NI err0, NIM_BOOL async0, NI32 lasterror0) {
{	{
		NIM_BOOL LOC3;
		NI32 laste0;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (err0 == ((NI) -1));
		if (!(LOC3)) goto LA4;
		LOC3 = NIM_TRUE;
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!(((NI) (lasterror0)) == ((NI) -1))) goto LA9;
			laste0 = getsocketerror_584201_170061329(socket0);
		}
		goto LA7;
		LA9: ;
		{
			laste0 = lasterror0;
		}
		LA7: ;
		{
			if (!async0) goto LA14;
			{
				NIM_BOOL LOC18;
				LOC18 = (NIM_BOOL)0;
				LOC18 = (laste0 == EAGAIN);
				if (LOC18) goto LA19;
				LOC18 = (laste0 == EWOULDBLOCK);
				LA19: ;
				if (!LOC18) goto LA20;
				goto BeforeRet;
			}
			goto LA16;
			LA20: ;
			{
				raiseoserror_130603_2125978480(laste0, ((NimStringDesc*) &T170061329_5));
			}
			LA16: ;
		}
		goto LA12;
		LA14: ;
		{
			raiseoserror_130603_2125978480(laste0, ((NimStringDesc*) &T170061329_5));
		}
		LA12: ;
	}
	LA5: ;
	}BeforeRet: ;
}

N_NIMCALL(void, send_589002_170061329)(Socketimpl583406* socket0, NimStringDesc* data0, Socketflag583416Set flags0) {
	NI sent0;
{	sent0 = send_588510_170061329(socket0, ((void*) (data0->data)), (data0 ? data0->Sup.len : 0));
	{
		NI32 lasterror0;
		if (!(sent0 < ((NI) 0))) goto LA3;
		lasterror0 = oslasterror_130619_2125978480();
		{
			NIM_BOOL LOC7;
			LOC7 = (NIM_BOOL)0;
			LOC7 = isdisconnectionerror_583478_170061329(flags0, lasterror0);
			if (!LOC7) goto LA8;
			goto BeforeRet;
		}
		LA8: ;
		socketerror_583472_170061329(socket0, ((NI) -1), NIM_FALSE, lasterror0);
	}
	LA3: ;
	{
		NI32 LOC14;
		if (!!((sent0 == (data0 ? data0->Sup.len : 0)))) goto LA12;
		LOC14 = (NI32)0;
		LOC14 = oslasterror_130619_2125978480();
		raiseoserror_130603_2125978480(LOC14, ((NimStringDesc*) &T170061329_7));
	}
	LA12: ;
	}BeforeRet: ;
}

N_NIMCALL(void, acceptaddr_585009_170061329)(Socketimpl583406* server0, Socketimpl583406** client0, NimStringDesc** address0, Socketflag583416Set flags0) {
	struct sockaddr_in sockaddress0;
	socklen_t addrlen0;
	int sock0;
	memset((void*)(&sockaddress0), 0, sizeof(sockaddress0));
	addrlen0 = ((socklen_t) (((NI)sizeof(struct sockaddr_in))));
	sock0 = accept((*server0).fd, ((struct sockaddr*) ((&sockaddress0))), (&addrlen0));
	{
		NI32 err0;
		if (!(sock0 == osinvalidsocket_577650_466562973)) goto LA3;
		err0 = oslasterror_130619_2125978480();
		{
			NIM_BOOL LOC7;
			LOC7 = (NIM_BOOL)0;
			LOC7 = isdisconnectionerror_583478_170061329(flags0, err0);
			if (!LOC7) goto LA8;
			acceptaddr_585009_170061329(server0, client0, address0, flags0);
		}
		LA8: ;
		raiseoserror_130603_2125978480(err0, ((NimStringDesc*) &T170061329_5));
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING LOC11;
		(*(*client0)).fd = sock0;
		(*(*client0)).isbuffered = (*server0).isbuffered;
		LOC11 = (NCSTRING)0;
		LOC11 = inet_ntoa(sockaddress0.sin_addr);
		unsureAsgnRef((void**) (&(*address0)), cstrToNimstr(LOC11));
	}
	LA1: ;
}

N_NIMCALL(void, accept_585601_170061329)(Socketimpl583406* server0, Socketimpl583406** client0, Socketflag583416Set flags0) {
	NimStringDesc* addrdummy0;
	addrdummy0 = copyString(((NimStringDesc*) &T170061329_5));
	acceptaddr_585009_170061329(server0, client0, (&addrdummy0), flags0);
}
N_NIMCALL(void, T170061329_8)(void* p, NI op) {
	Timeouterror583414* a;
	a = (Timeouterror583414*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
}

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	result0 = (Cell47304*)0;
	result0 = ((Cell47304*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47304))))));
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0) {
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47304* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_51440_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47304* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_51440_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(NIM_BOOL, hasdatabuffered_586801_170061329)(Socketimpl583406* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = NIM_FALSE;
	{
		NIM_BOOL LOC5;
		if (!(*s0).isbuffered) goto LA3;
		LOC5 = (NIM_BOOL)0;
		LOC5 = (((NI) 0) < (*s0).isbufferedU.S1.buflen);
		if (!(LOC5)) goto LA6;
		LOC5 = !(((*s0).isbufferedU.S1.currpos == (*s0).isbufferedU.S1.buflen));
		LA6: ;
		result0 = LOC5;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NI, select_587001_170061329)(Socketimpl583406* readfd0, NI timeout0) {
	NI result0;
	TY587019* fds0;
	TY587008 LOC6;
{	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = hasdatabuffered_586801_170061329(readfd0);
		if (!LOC3) goto LA4;
		result0 = ((NI) 1);
		goto BeforeRet;
	}
	LA4: ;
	fds0 = (TY587019*) newSeq((&NTI587019), 1);
	LOC6[0] = (*readfd0).fd;
	fds0->data[0] = LOC6[0];
	result0 = select_582277_466562973((&fds0), timeout0);
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, HEX2BHEX3D_111701_1689653243)(NF* x0, NF y0) {
	(*x0) = ((NF)((*x0)) + (NF)(y0));
}

N_NIMCALL(NI, waitfor_587606_170061329)(Socketimpl583406* socket0, NF* waited0, NI timeout0, NI size0, NimStringDesc* funcname0) {
	NI result0;
{	result0 = (NI)0;
	result0 = ((NI) 1);
	{
		if (!(size0 <= ((NI) 0))) goto LA3;
	}
	LA3: ;
	{
		if (!(timeout0 == ((NI) -1))) goto LA7;
		result0 = size0;
		goto BeforeRet;
	}
	LA7: ;
	{
		NIM_BOOL LOC11;
		NIM_BOOL LOC12;
		LOC11 = (NIM_BOOL)0;
		LOC12 = (NIM_BOOL)0;
		LOC12 = (*socket0).isbuffered;
		if (!(LOC12)) goto LA13;
		LOC12 = !(((*socket0).isbufferedU.S1.buflen == ((NI) 0)));
		LA13: ;
		LOC11 = LOC12;
		if (!(LOC11)) goto LA14;
		LOC11 = !(((*socket0).isbufferedU.S1.buflen == (*socket0).isbufferedU.S1.currpos));
		LA14: ;
		if (!LOC11) goto LA15;
		result0 = (NI)((*socket0).isbufferedU.S1.buflen - (*socket0).isbufferedU.S1.currpos);
		result0 = ((result0 <= size0) ? result0 : size0);
	}
	goto LA9;
	LA15: ;
	{
		NF starttime0;
		NI selret0;
		NF LOC33;
		{
			Timeouterror583414* e_587813_170061329;
			NimStringDesc* LOC22;
			if (!((NI)(timeout0 - ((NI) (((NF)((*waited0)) * (NF)(1.0000000000000000e+03))))) < ((NI) 1))) goto LA20;
			e_587813_170061329 = (Timeouterror583414*)0;
			e_587813_170061329 = (Timeouterror583414*) newObj((&NTI587814), sizeof(Timeouterror583414));
			(*e_587813_170061329).Sup.Sup.m_type = (&NTI583414);
			LOC22 = (NimStringDesc*)0;
			LOC22 = rawNewString(funcname0->Sup.len + 21);
appendString(LOC22, ((NimStringDesc*) &T170061329_9));
appendString(LOC22, funcname0);
appendString(LOC22, ((NimStringDesc*) &T170061329_10));
			asgnRefNoCycle((void**) (&(*e_587813_170061329).Sup.message), LOC22);
			raiseException((Exception*)e_587813_170061329, "TimeoutError");
		}
		LA20: ;
		starttime0 = ntepochTime();
		selret0 = select_587001_170061329(socket0, (NI)(timeout0 - ((NI) (((NF)((*waited0)) * (NF)(1.0000000000000000e+03))))));
		{
			NI32 LOC27;
			if (!(selret0 < ((NI) 0))) goto LA25;
			LOC27 = (NI32)0;
			LOC27 = oslasterror_130619_2125978480();
			raiseoserror_130603_2125978480(LOC27, ((NimStringDesc*) &T170061329_5));
		}
		LA25: ;
		{
			Timeouterror583414* e_588006_170061329;
			NimStringDesc* LOC32;
			if (!!((selret0 == ((NI) 1)))) goto LA30;
			e_588006_170061329 = (Timeouterror583414*)0;
			e_588006_170061329 = (Timeouterror583414*) newObj((&NTI587814), sizeof(Timeouterror583414));
			(*e_588006_170061329).Sup.Sup.m_type = (&NTI583414);
			LOC32 = (NimStringDesc*)0;
			LOC32 = rawNewString(funcname0->Sup.len + 21);
appendString(LOC32, ((NimStringDesc*) &T170061329_9));
appendString(LOC32, funcname0);
appendString(LOC32, ((NimStringDesc*) &T170061329_10));
			asgnRefNoCycle((void**) (&(*e_588006_170061329).Sup.message), LOC32);
			raiseException((Exception*)e_588006_170061329, "TimeoutError");
		}
		LA30: ;
		LOC33 = (NF)0;
		LOC33 = ntepochTime();
		HEX2BHEX3D_111701_1689653243(waited0, ((NF)(LOC33) - (NF)(starttime0)));
	}
	LA9: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, readintobuf_587023_170061329)(Socketimpl583406* socket0, NI32 flags0) {
	NI result0;
{	result0 = (NI)0;
	result0 = ((NI) 0);
	result0 = recv((*socket0).fd, ((void*) ((*socket0).isbufferedU.S1.buffer)), ((NI) 4000), flags0);
	{
		if (!(result0 < ((NI) 0))) goto LA3;
		(*socket0).lasterror = oslasterror_130619_2125978480();
	}
	LA3: ;
	{
		if (!(result0 <= ((NI) 0))) goto LA7;
		(*socket0).isbufferedU.S1.buflen = ((NI) 0);
		(*socket0).isbufferedU.S1.currpos = ((NI) 0);
		goto BeforeRet;
	}
	LA7: ;
	(*socket0).isbufferedU.S1.buflen = result0;
	(*socket0).isbufferedU.S1.currpos = ((NI) 0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, recv_587216_170061329)(Socketimpl583406* socket0, void* data0, NI size0) {
	NI result0;
{	result0 = (NI)0;
	{
		if (!(size0 == ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI read0;
		if (!(*socket0).isbuffered) goto LA7;
		{
			NI res0;
			if (!((*socket0).isbufferedU.S1.buflen == ((NI) 0))) goto LA11;
			res0 = readintobuf_587023_170061329(socket0, ((NI32) 0));
			{
				if (!(res0 <= ((NI) 0))) goto LA15;
				{
					if (!NIM_FALSE) goto LA19;
					result0 = ((NI) 0);
					goto BeforeRet;
				}
				goto LA17;
				LA19: ;
				{
					result0 = res0;
					goto BeforeRet;
				}
				LA17: ;
			}
			LA15: ;
		}
		LA11: ;
		read0 = ((NI) 0);
		{
			while (1) {
				NI chunk0;
				NCSTRING d0;
				if (!(read0 < size0)) goto LA23;
				{
					NI res0;
					if (!((*socket0).isbufferedU.S1.buflen <= (*socket0).isbufferedU.S1.currpos)) goto LA26;
					res0 = readintobuf_587023_170061329(socket0, ((NI32) 0));
					{
						if (!(res0 <= ((NI) 0))) goto LA30;
						{
							if (!(((NI) 0) < read0)) goto LA34;
							result0 = read0;
							goto BeforeRet;
						}
						goto LA32;
						LA34: ;
						{
							result0 = res0;
							goto BeforeRet;
						}
						LA32: ;
					}
					LA30: ;
				}
				LA26: ;
				chunk0 = (((NI)((*socket0).isbufferedU.S1.buflen - (*socket0).isbufferedU.S1.currpos) <= (NI)(size0 - read0)) ? (NI)((*socket0).isbufferedU.S1.buflen - (*socket0).isbufferedU.S1.currpos) : (NI)(size0 - read0));
				d0 = ((NCSTRING) (data0));
				copymem_7485_1689653243(((void*) ((&d0[read0]))), ((void*) ((&(*socket0).isbufferedU.S1.buffer[((*socket0).isbufferedU.S1.currpos)- 0]))), ((NI) (chunk0)));
				read0 += chunk0;
				(*socket0).isbufferedU.S1.currpos += chunk0;
			} LA23: ;
		}
		result0 = read0;
	}
	goto LA5;
	LA7: ;
	{
		result0 = recv((*socket0).fd, data0, ((NI) (((int) (size0)))), ((NI32) 0));
		{
			if (!(result0 < ((NI) 0))) goto LA40;
			(*socket0).lasterror = oslasterror_130619_2125978480();
		}
		LA40: ;
	}
	LA5: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, peekchar_588236_170061329)(Socketimpl583406* socket0, NIM_CHAR* c0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(*socket0).isbuffered) goto LA3;
		result0 = ((NI) 1);
		{
			NIM_BOOL LOC7;
			NI res0;
			LOC7 = (NIM_BOOL)0;
			LOC7 = ((*socket0).isbufferedU.S1.buflen == ((NI) 0));
			if (LOC7) goto LA8;
			LOC7 = ((NI)((*socket0).isbufferedU.S1.buflen - ((NI) 1)) < (*socket0).isbufferedU.S1.currpos);
			LA8: ;
			if (!LOC7) goto LA9;
			res0 = readintobuf_587023_170061329(socket0, ((NI32) 0));
			{
				if (!(res0 <= ((NI) 0))) goto LA13;
				result0 = res0;
			}
			LA13: ;
		}
		LA9: ;
		(*c0) = (*socket0).isbufferedU.S1.buffer[((*socket0).isbufferedU.S1.currpos)- 0];
	}
	goto LA1;
	LA3: ;
	{
		result0 = recv((*socket0).fd, ((void*) (c0)), ((NI) 1), MSG_PEEK);
	}
	LA1: ;
	return result0;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47304* c0;
	c0 = usrtocell_51440_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(void, readline_588402_170061329)(Socketimpl583406* socket0, NimStringDesc** line0, NI timeout0, Socketflag583416Set flags0, NI maxlength0) {
	NF waited0;
{	waited0 = 0.0;
	(*line0) = setLengthStr((*line0), ((NI) 0));
	{
		while (1) {
			NIM_CHAR c0;
			NI LOC3;
			NI n0;
			c0 = (NIM_CHAR)0;
			LOC3 = (NI)0;
			LOC3 = waitfor_587606_170061329(socket0, (&waited0), timeout0, ((NI) 1), ((NimStringDesc*) &T170061329_11));
			n0 = recv_587216_170061329(socket0, ((void*) ((&c0))), ((NI) 1));
			{
				NI32 lasterror0;
				if (!(n0 < ((NI) 0))) goto LA6;
				lasterror0 = getsocketerror_584201_170061329(socket0);
				{
					NIM_BOOL LOC10;
					LOC10 = (NIM_BOOL)0;
					LOC10 = isdisconnectionerror_583478_170061329(flags0, lasterror0);
					if (!LOC10) goto LA11;
					(*line0) = setLengthStr((*line0), ((NI) 0));
					goto BeforeRet;
				}
				LA11: ;
				socketerror_583472_170061329(socket0, n0, NIM_FALSE, lasterror0);
			}
			goto LA4;
			LA6: ;
			{
				if (!(n0 == ((NI) 0))) goto LA14;
				(*line0) = setLengthStr((*line0), ((NI) 0));
				goto BeforeRet;
			}
			goto LA4;
			LA14: ;
			LA4: ;
			{
				NI LOC20;
				if (!((NU8)(c0) == (NU8)(13))) goto LA18;
				LOC20 = (NI)0;
				LOC20 = waitfor_587606_170061329(socket0, (&waited0), timeout0, ((NI) 1), ((NimStringDesc*) &T170061329_11));
				n0 = peekchar_588236_170061329(socket0, (&c0));
				{
					NIM_BOOL LOC23;
					NI LOC27;
					LOC23 = (NIM_BOOL)0;
					LOC23 = (((NI) 0) < n0);
					if (!(LOC23)) goto LA24;
					LOC23 = ((NU8)(c0) == (NU8)(10));
					LA24: ;
					if (!LOC23) goto LA25;
					LOC27 = (NI)0;
					LOC27 = recv_587216_170061329(socket0, ((void*) ((&c0))), ((NI) 1));
				}
				goto LA21;
				LA25: ;
				{
					NI32 lasterror0;
					if (!(n0 <= ((NI) 0))) goto LA29;
					lasterror0 = getsocketerror_584201_170061329(socket0);
					{
						NIM_BOOL LOC33;
						LOC33 = (NIM_BOOL)0;
						LOC33 = isdisconnectionerror_583478_170061329(flags0, lasterror0);
						if (!LOC33) goto LA34;
						(*line0) = setLengthStr((*line0), ((NI) 0));
						goto BeforeRet;
					}
					LA34: ;
					socketerror_583472_170061329(socket0, n0, NIM_FALSE, lasterror0);
				}
				goto LA21;
				LA29: ;
				LA21: ;
				{
					if (!(((*line0) ? (*line0)->Sup.len : 0) == ((NI) 0))) goto LA38;
					(*line0) = resizeString((*line0), 2);
appendString((*line0), ((NimStringDesc*) &T170061329_12));
				}
				LA38: ;
				goto BeforeRet;
			}
			goto LA16;
			LA18: ;
			{
				if (!((NU8)(c0) == (NU8)(10))) goto LA41;
				{
					if (!(((*line0) ? (*line0)->Sup.len : 0) == ((NI) 0))) goto LA45;
					(*line0) = resizeString((*line0), 2);
appendString((*line0), ((NimStringDesc*) &T170061329_12));
				}
				LA45: ;
				goto BeforeRet;
			}
			goto LA16;
			LA41: ;
			LA16: ;
			(*line0) = addChar((*line0), c0);
			{
				NimStringDesc* msg0;
				Valueerror3646* e_588438_170061329;
				NimStringDesc* LOC51;
				if (!(maxlength0 < ((*line0) ? (*line0)->Sup.len : 0))) goto LA49;
				msg0 = copyString(((NimStringDesc*) &T170061329_13));
				e_588438_170061329 = (Valueerror3646*)0;
				e_588438_170061329 = (Valueerror3646*) newObj((&NTI23025), sizeof(Valueerror3646));
				(*e_588438_170061329).Sup.Sup.m_type = (&NTI3646);
				LOC51 = (NimStringDesc*)0;
				LOC51 = (*e_588438_170061329).Sup.message; (*e_588438_170061329).Sup.message = copyStringRC1(msg0);
				if (LOC51) nimGCunrefNoCycle(LOC51);
				raiseException((Exception*)e_588438_170061329, "ValueError");
			}
			LA49: ;
		}
	}
	}BeforeRet: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18837_1689653243;
	exchandler_18837_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837_1689653243 = (*exchandler_18837_1689653243).prev;
}

N_NIMCALL(void, close_585611_170061329)(Socketimpl583406* socket0) {
	TSafePoint T170061329_14;
	pushSafePoint(&T170061329_14);
	T170061329_14.status = _setjmp(T170061329_14.context);
	if (T170061329_14.status == 0) {
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		close_578013_466562973((*socket0).fd);
	}
	if (T170061329_14.status != 0) reraiseException();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit000)(void) {
static TNimNode* T170061329_2[6];
static TNimNode* T170061329_3[3];
static TNimNode T170061329_0[13];
NTI583406.size = sizeof(Socketimpl583406);
NTI583406.kind = 18;
NTI583406.base = 0;
NTI583406.flags = 3;
T170061329_2[0] = &T170061329_0[1];
T170061329_0[1].kind = 1;
T170061329_0[1].offset = offsetof(Socketimpl583406, fd);
T170061329_0[1].typ = (&NTI7408);
T170061329_0[1].name = "fd";
T170061329_2[1] = &T170061329_0[2];
T170061329_0[2].kind = 3;
T170061329_0[2].offset = offsetof(Socketimpl583406, isbuffered);
T170061329_0[2].typ = (&NTI130);
T170061329_0[2].name = "isBuffered";
T170061329_0[2].sons = &NimDT_583406_isbuffered[0];
T170061329_0[2].len = 2;
T170061329_3[0] = &T170061329_0[4];
NTI583420.size = sizeof(TY583420);
NTI583420.kind = 16;
NTI583420.base = (&NTI136);
NTI583420.flags = 3;
T170061329_0[4].kind = 1;
T170061329_0[4].offset = offsetof(Socketimpl583406, isbufferedU.S1.buffer);
T170061329_0[4].typ = (&NTI583420);
T170061329_0[4].name = "buffer";
T170061329_3[1] = &T170061329_0[5];
T170061329_0[5].kind = 1;
T170061329_0[5].offset = offsetof(Socketimpl583406, isbufferedU.S1.currpos);
T170061329_0[5].typ = (&NTI104);
T170061329_0[5].name = "currPos";
T170061329_3[2] = &T170061329_0[6];
T170061329_0[6].kind = 1;
T170061329_0[6].offset = offsetof(Socketimpl583406, isbufferedU.S1.buflen);
T170061329_0[6].typ = (&NTI104);
T170061329_0[6].name = "bufLen";
T170061329_0[3].len = 3; T170061329_0[3].kind = 2; T170061329_0[3].sons = &T170061329_3[0];
NimDT_583406_isbuffered[1] = &T170061329_0[3];
T170061329_0[7].len = 0; T170061329_0[7].kind = 2;
NimDT_583406_isbuffered[0] = &T170061329_0[7];
T170061329_2[2] = &T170061329_0[8];
T170061329_0[8].kind = 1;
T170061329_0[8].offset = offsetof(Socketimpl583406, lasterror);
T170061329_0[8].typ = (&NTI110);
T170061329_0[8].name = "lastError";
T170061329_2[3] = &T170061329_0[9];
T170061329_0[9].kind = 1;
T170061329_0[9].offset = offsetof(Socketimpl583406, domain);
T170061329_0[9].typ = (&NTI577604);
T170061329_0[9].name = "domain";
T170061329_2[4] = &T170061329_0[10];
T170061329_0[10].kind = 1;
T170061329_0[10].offset = offsetof(Socketimpl583406, socktype);
T170061329_0[10].typ = (&NTI577606);
T170061329_0[10].name = "sockType";
T170061329_2[5] = &T170061329_0[11];
T170061329_0[11].kind = 1;
T170061329_0[11].offset = offsetof(Socketimpl583406, protocol);
T170061329_0[11].typ = (&NTI577608);
T170061329_0[11].name = "protocol";
T170061329_0[0].len = 6; T170061329_0[0].kind = 2; T170061329_0[0].sons = &T170061329_2[0];
NTI583406.node = &T170061329_0[0];
NTI583408.size = sizeof(Socketimpl583406*);
NTI583408.kind = 22;
NTI583408.base = (&NTI583406);
NTI583408.flags = 2;
NTI583408.marker = T170061329_4;
NTI583414.size = sizeof(Timeouterror583414);
NTI583414.kind = 17;
NTI583414.base = (&NTI3624);
T170061329_0[12].len = 0; T170061329_0[12].kind = 2;
NTI583414.node = &T170061329_0[12];
NTI587814.size = sizeof(Timeouterror583414*);
NTI587814.kind = 22;
NTI587814.base = (&NTI583414);
NTI587814.marker = T170061329_8;
}

