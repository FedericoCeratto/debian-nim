/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/stdlib_net.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/stdlib_net.c */
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
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29480 Memregion29480;
typedef struct Smallchunk29437 Smallchunk29437;
typedef struct Llchunk29474 Llchunk29474;
typedef struct Bigchunk29439 Bigchunk29439;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29478 Avlnode29478;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct TY587019 TY587019;
typedef struct Valueerror3646 Valueerror3646;
typedef struct TSafePoint TSafePoint;
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
typedef NIM_CHAR TY583420[4001];
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
NU8 domain;
NU8 socktype;
NU8 protocol;
};
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29437* TY29495[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29480  {
NI minlargeobj;
NI maxlargeobj;
TY29495 freesmallchunks;
Llchunk29474* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29439* freechunkslist;
Intset29414 chunkstarts;
Avlnode29478* root;
Avlnode29478* deleted;
Avlnode29478* last;
Avlnode29478* freeavlnodes;
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
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29480 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
typedef int TY587008[1];
struct  Valueerror3646  {
  Exception Sup;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY17211;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17211 raiseAction;
};
typedef NIM_CHAR TY120771[256];
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29435  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29437  {
  Basechunk29435 Sup;
Smallchunk29437* next;
Smallchunk29437* prev;
Freecell29427* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29474  {
NI size;
NI acc;
Llchunk29474* next;
};
struct  Bigchunk29439  {
  Basechunk29435 Sup;
Bigchunk29439* next;
Bigchunk29439* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29478* TY29485[2];
struct  Avlnode29478  {
TY29485 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
struct TY587019 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP5487)(void* p, NI op);
N_NIMCALL(int, newnativesocket_578001)(NU8 domain, NU8 socktype, NU8 protocol);
N_NOINLINE(void, raiseoserror_130603)(NI32 errorcode, NimStringDesc* additionalinfo);
N_NIMCALL(NI32, oslasterror_130619)(void);
N_NIMCALL(Socketimpl583406*, newsocket_583674)(int fd, NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(int, toint_577820)(NU8 domain);
N_NIMCALL(NU16, ntohs_579088)(NU16 x);
N_NIMCALL(NU32, ntohl_578806)(NU32 x);
N_NIMCALL(int, bindaddr_578208)(int socket, struct sockaddr* name, socklen_t namelen);
N_NIMCALL(struct addrinfo*, getaddrinfo_578402)(NimStringDesc* address, NU16 port, NU8 domain, NU8 socktype, NU8 protocol);
N_NIMCALL(void, dealloc_578802)(struct addrinfo* ai);
N_NIMCALL(int, listen_578215)(int socket, int backlog);
N_NIMCALL(NI, send_588510)(Socketimpl583406* socket, void* data, NI size);
N_NIMCALL(NIM_BOOL, isdisconnectionerror_583470)(NU8 flags, NI32 lasterror);
N_NIMCALL(void, socketerror_583464)(Socketimpl583406* socket, NI err, NIM_BOOL async, NI32 lasterror);
N_NIMCALL(NI32, getsocketerror_584201)(Socketimpl583406* socket);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, acceptaddr_585009)(Socketimpl583406* server, Socketimpl583406** client, NimStringDesc** address, NU8 flags);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, waitfor_587606)(Socketimpl583406* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5499)(void* p, NI op);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, select_587001)(Socketimpl583406* readfd, NI timeout);
N_NIMCALL(NIM_BOOL, hasdatabuffered_586801)(Socketimpl583406* s);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NI, select_582277)(TY587019** readfds, NI timeout);
static N_INLINE(void, HEX2BHEX3D_111701)(NF* x, NF y);
N_NIMCALL(NI, recv_587216)(Socketimpl583406* socket, void* data, NI size);
N_NIMCALL(NI, readintobuf_587023)(Socketimpl583406* socket, NI32 flags);
N_NIMCALL(NI, peekchar_588236)(Socketimpl583406* socket, NIM_CHAR* c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_578013)(int socket);
N_NIMCALL(void, reraiseException)(void);
TNimNode* NimDT_583406_isbuffered[3];
STRING_LITERAL(TMP5493, "", 0);
STRING_LITERAL(TMP5496, "No valid socket error code available", 36);
STRING_LITERAL(TMP5497, "Could not send all data.", 24);
STRING_LITERAL(TMP5500, "Call to \'", 9);
STRING_LITERAL(TMP5501, "\' timed out.", 12);
STRING_LITERAL(TMP5503, "readLine", 8);
STRING_LITERAL(TMP5504, "\015\012", 2);
STRING_LITERAL(TMP5505, "recvLine received more than the specified `maxLength` allowed.", 62);
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
extern int osinvalidsocket_577644;
extern TNimType NTI3624; /* Exception */
TNimType NTI583414; /* TimeoutError */
TNimType NTI587814; /* ref TimeoutError */
extern Gcheap49818 gch_49855;
extern TNimType NTI587019; /* seq[SocketHandle] */
extern TNimType NTI23025; /* ref ValueError */
extern TNimType NTI3646; /* ValueError */
extern TSafePoint* exchandler_18837;
N_NIMCALL(void, TMP5487)(void* p, NI op) {
	Socketimpl583406* a;
	NI LOC1;
	a = (Socketimpl583406*)p;
	switch ((*a).isbuffered) {
	case NIM_TRUE:
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 4001; LOC1++) {
	}
	break;
	case NIM_FALSE:
	break;
	} 
}

N_NIMCALL(Socketimpl583406*, newsocket_583674)(int fd, NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered) {
	Socketimpl583406* result;
	result = 0;
	result = (Socketimpl583406*) newObj((&NTI583408), sizeof(Socketimpl583406));
	(*result).fd = fd;
	(*result).isbuffered = buffered;
	(*result).domain = domain;
	(*result).socktype = socktype;
	(*result).protocol = protocol;
	{
		if (!buffered) goto LA3;
		(*result).isbufferedU.S1.currpos = ((NI) 0);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Socketimpl583406*, newsocket_584009)(NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered) {
	Socketimpl583406* result;
	int fd;
	result = 0;
	fd = newnativesocket_578001(domain, socktype, protocol);
	{
		NI32 LOC5;
		if (!(fd == osinvalidsocket_577644)) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_130619();
		raiseoserror_130603(LOC5, ((NimStringDesc*) &TMP5493));
	}
	LA3: ;
	result = newsocket_583674(fd, domain, socktype, protocol, buffered);
	return result;
}

N_NIMCALL(void, bindaddr_584808)(Socketimpl583406* socket, NU16 port, NimStringDesc* address) {
	{
		struct sockaddr_in name;
		if (!((address) && (address)->Sup.len == 0)) goto LA3;
		memset((void*)(&name), 0, sizeof(name));
		name.sin_family = toint_577820(((NU8) 2));
		name.sin_port = ntohs_579088(port);
		name.sin_addr.s_addr = ntohl_578806(INADDR_ANY);
		{
			int LOC7;
			NI32 LOC10;
			LOC7 = 0;
			LOC7 = bindaddr_578208((*socket).fd, ((struct sockaddr*) ((&name))), ((socklen_t) (((NI)sizeof(struct sockaddr_in)))));
			if (!(LOC7 < ((NI32) 0))) goto LA8;
			LOC10 = 0;
			LOC10 = oslasterror_130619();
			raiseoserror_130603(LOC10, ((NimStringDesc*) &TMP5493));
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		struct addrinfo* ailist;
		ailist = getaddrinfo_578402(address, port, (*socket).domain, ((NU8) 1), ((NU8) 6));
		{
			int LOC14;
			NI32 LOC17;
			LOC14 = 0;
			LOC14 = bindaddr_578208((*socket).fd, (*ailist).ai_addr, (*ailist).ai_addrlen);
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			dealloc_578802(ailist);
			LOC17 = 0;
			LOC17 = oslasterror_130619();
			raiseoserror_130603(LOC17, ((NimStringDesc*) &TMP5493));
		}
		LA15: ;
		dealloc_578802(ailist);
	}
	LA1: ;
}

N_NIMCALL(void, listen_584804)(Socketimpl583406* socket, int backlog) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = listen_578215((*socket).fd, backlog);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_130619();
		raiseoserror_130603(LOC6, ((NimStringDesc*) &TMP5493));
	}
	LA4: ;
}

N_NIMCALL(NI, send_588510)(Socketimpl583406* socket, void* data, NI size) {
	NI result;
	result = 0;
	result = send((*socket).fd, data, size, MSG_NOSIGNAL);
	return result;
}

N_NIMCALL(NIM_BOOL, isdisconnectionerror_583470)(NU8 flags, NI32 lasterror) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((flags &(1U<<((NU)(((NU8) 1))&7U)))!=0);
	if (!(LOC1)) goto LA2;
	LOC1 = (lasterror == ((NI) (ECONNRESET)) || lasterror == ((NI) (EPIPE)) || lasterror == ((NI) (ENETRESET)));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI32, getsocketerror_584201)(Socketimpl583406* socket) {
	NI32 result;
	result = 0;
	result = oslasterror_130619();
	{
		if (!(result == ((NI32) 0))) goto LA3;
		result = (*socket).lasterror;
	}
	LA3: ;
	{
		if (!(result == ((NI32) 0))) goto LA7;
		raiseoserror_130603(result, ((NimStringDesc*) &TMP5496));
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, socketerror_583464)(Socketimpl583406* socket, NI err, NIM_BOOL async, NI32 lasterror) {
{	{
		NIM_BOOL LOC3;
		NI32 laste;
		LOC3 = 0;
		LOC3 = (err == ((NI) -1));
		if (!(LOC3)) goto LA4;
		LOC3 = NIM_TRUE;
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!(((NI) (lasterror)) == ((NI) -1))) goto LA9;
			laste = getsocketerror_584201(socket);
		}
		goto LA7;
		LA9: ;
		{
			laste = lasterror;
		}
		LA7: ;
		{
			if (!async) goto LA14;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = (laste == EAGAIN);
				if (LOC18) goto LA19;
				LOC18 = (laste == EWOULDBLOCK);
				LA19: ;
				if (!LOC18) goto LA20;
				goto BeforeRet;
			}
			goto LA16;
			LA20: ;
			{
				raiseoserror_130603(laste, ((NimStringDesc*) &TMP5493));
			}
			LA16: ;
		}
		goto LA12;
		LA14: ;
		{
			raiseoserror_130603(laste, ((NimStringDesc*) &TMP5493));
		}
		LA12: ;
	}
	LA5: ;
	}BeforeRet: ;
}

N_NIMCALL(void, send_589002)(Socketimpl583406* socket, NimStringDesc* data, NU8 flags) {
	NI sent;
{	sent = send_588510(socket, ((void*) (data->data)), (data ? data->Sup.len : 0));
	{
		NI32 lasterror;
		if (!(sent < ((NI) 0))) goto LA3;
		lasterror = oslasterror_130619();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_583470(flags, lasterror);
			if (!LOC7) goto LA8;
			goto BeforeRet;
		}
		LA8: ;
		socketerror_583464(socket, ((NI) -1), NIM_FALSE, lasterror);
	}
	LA3: ;
	{
		NI32 LOC14;
		if (!!((sent == (data ? data->Sup.len : 0)))) goto LA12;
		LOC14 = 0;
		LOC14 = oslasterror_130619();
		raiseoserror_130603(LOC14, ((NimStringDesc*) &TMP5497));
	}
	LA12: ;
	}BeforeRet: ;
}

N_NIMCALL(void, acceptaddr_585009)(Socketimpl583406* server, Socketimpl583406** client, NimStringDesc** address, NU8 flags) {
	struct sockaddr_in sockaddress;
	socklen_t addrlen;
	int sock;
	memset((void*)(&sockaddress), 0, sizeof(sockaddress));
	addrlen = ((socklen_t) (((NI)sizeof(struct sockaddr_in))));
	sock = accept((*server).fd, ((struct sockaddr*) ((&sockaddress))), (&addrlen));
	{
		NI32 err;
		if (!(sock == osinvalidsocket_577644)) goto LA3;
		err = oslasterror_130619();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_583470(flags, err);
			if (!LOC7) goto LA8;
			acceptaddr_585009(server, client, address, flags);
		}
		LA8: ;
		raiseoserror_130603(err, ((NimStringDesc*) &TMP5493));
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING LOC11;
		(*(*client)).fd = sock;
		(*(*client)).isbuffered = (*server).isbuffered;
		LOC11 = 0;
		LOC11 = inet_ntoa(sockaddress.sin_addr);
		unsureAsgnRef((void**) (&(*address)), cstrToNimstr(LOC11));
	}
	LA1: ;
}

N_NIMCALL(void, accept_585601)(Socketimpl583406* server, Socketimpl583406** client, NU8 flags) {
	NimStringDesc* addrdummy;
	addrdummy = copyString(((NimStringDesc*) &TMP5493));
	acceptaddr_585009(server, client, (&addrdummy), flags);
}
N_NIMCALL(void, TMP5499)(void* p, NI op) {
	Timeouterror583414* a;
	a = (Timeouterror583414*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
}

static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size) {
	void* LOC1;
	LOC1 = 0;
	LOC1 = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copymem_7478(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(Cell47305*, usrtocell_51440)(void* usr) {
	Cell47305* result;
	result = 0;
	result = ((Cell47305*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result;
}

static N_INLINE(void, rtladdzct_52601)(Cell47305* c) {
	addzct_51417((&gch_49855.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47305* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(NIM_BOOL, hasdatabuffered_586801)(Socketimpl583406* s) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		NIM_BOOL LOC5;
		if (!(*s).isbuffered) goto LA3;
		LOC5 = 0;
		LOC5 = (((NI) 0) < (*s).isbufferedU.S1.buflen);
		if (!(LOC5)) goto LA6;
		LOC5 = !(((*s).isbufferedU.S1.currpos == (*s).isbufferedU.S1.buflen));
		LA6: ;
		result = LOC5;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, select_587001)(Socketimpl583406* readfd, NI timeout) {
	NI result;
	TY587019* fds;
	TY587008 LOC6;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = hasdatabuffered_586801(readfd);
		if (!LOC3) goto LA4;
		result = ((NI) 1);
		goto BeforeRet;
	}
	LA4: ;
	fds = (TY587019*) newSeq((&NTI587019), 1);
	LOC6[0] = (*readfd).fd;
	fds->data[0] = LOC6[0];
	result = select_582277((&fds), timeout);
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, HEX2BHEX3D_111701)(NF* x, NF y) {
	(*x) = ((NF)((*x)) + (NF)(y));
}

N_NIMCALL(NI, waitfor_587606)(Socketimpl583406* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname) {
	NI result;
{	result = 0;
	result = ((NI) 1);
	{
		if (!(size <= ((NI) 0))) goto LA3;
	}
	LA3: ;
	{
		if (!(timeout == ((NI) -1))) goto LA7;
		result = size;
		goto BeforeRet;
	}
	LA7: ;
	{
		NIM_BOOL LOC11;
		NIM_BOOL LOC12;
		LOC11 = 0;
		LOC12 = 0;
		LOC12 = (*socket).isbuffered;
		if (!(LOC12)) goto LA13;
		LOC12 = !(((*socket).isbufferedU.S1.buflen == ((NI) 0)));
		LA13: ;
		LOC11 = LOC12;
		if (!(LOC11)) goto LA14;
		LOC11 = !(((*socket).isbufferedU.S1.buflen == (*socket).isbufferedU.S1.currpos));
		LA14: ;
		if (!LOC11) goto LA15;
		result = (NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos);
		result = ((result <= size) ? result : size);
	}
	goto LA9;
	LA15: ;
	{
		NF starttime;
		NI selret;
		NF LOC33;
		{
			Timeouterror583414* e_587813;
			NimStringDesc* LOC22;
			if (!((NI)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))) < ((NI) 1))) goto LA20;
			e_587813 = 0;
			e_587813 = (Timeouterror583414*) newObj((&NTI587814), sizeof(Timeouterror583414));
			(*e_587813).Sup.Sup.m_type = (&NTI583414);
			LOC22 = 0;
			LOC22 = rawNewString(funcname->Sup.len + 21);
appendString(LOC22, ((NimStringDesc*) &TMP5500));
appendString(LOC22, funcname);
appendString(LOC22, ((NimStringDesc*) &TMP5501));
			asgnRefNoCycle((void**) (&(*e_587813).Sup.message), LOC22);
			raiseException((Exception*)e_587813, "TimeoutError");
		}
		LA20: ;
		starttime = ntepochTime();
		selret = select_587001(socket, (NI)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))));
		{
			NI32 LOC27;
			if (!(selret < ((NI) 0))) goto LA25;
			LOC27 = 0;
			LOC27 = oslasterror_130619();
			raiseoserror_130603(LOC27, ((NimStringDesc*) &TMP5493));
		}
		LA25: ;
		{
			Timeouterror583414* e_588006;
			NimStringDesc* LOC32;
			if (!!((selret == ((NI) 1)))) goto LA30;
			e_588006 = 0;
			e_588006 = (Timeouterror583414*) newObj((&NTI587814), sizeof(Timeouterror583414));
			(*e_588006).Sup.Sup.m_type = (&NTI583414);
			LOC32 = 0;
			LOC32 = rawNewString(funcname->Sup.len + 21);
appendString(LOC32, ((NimStringDesc*) &TMP5500));
appendString(LOC32, funcname);
appendString(LOC32, ((NimStringDesc*) &TMP5501));
			asgnRefNoCycle((void**) (&(*e_588006).Sup.message), LOC32);
			raiseException((Exception*)e_588006, "TimeoutError");
		}
		LA30: ;
		LOC33 = 0;
		LOC33 = ntepochTime();
		HEX2BHEX3D_111701(waited, ((NF)(LOC33) - (NF)(starttime)));
	}
	LA9: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, readintobuf_587023)(Socketimpl583406* socket, NI32 flags) {
	NI result;
{	result = 0;
	result = ((NI) 0);
	result = recv((*socket).fd, ((void*) ((*socket).isbufferedU.S1.buffer)), ((NI) 4000), flags);
	{
		if (!(result < ((NI) 0))) goto LA3;
		(*socket).lasterror = oslasterror_130619();
	}
	LA3: ;
	{
		if (!(result <= ((NI) 0))) goto LA7;
		(*socket).isbufferedU.S1.buflen = ((NI) 0);
		(*socket).isbufferedU.S1.currpos = ((NI) 0);
		goto BeforeRet;
	}
	LA7: ;
	(*socket).isbufferedU.S1.buflen = result;
	(*socket).isbufferedU.S1.currpos = ((NI) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, recv_587216)(Socketimpl583406* socket, void* data, NI size) {
	NI result;
{	result = 0;
	{
		if (!(size == ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI read;
		if (!(*socket).isbuffered) goto LA7;
		{
			NI res;
			if (!((*socket).isbufferedU.S1.buflen == ((NI) 0))) goto LA11;
			res = readintobuf_587023(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA15;
				{
					if (!NIM_FALSE) goto LA19;
					result = ((NI) 0);
					goto BeforeRet;
				}
				goto LA17;
				LA19: ;
				{
					result = res;
					goto BeforeRet;
				}
				LA17: ;
			}
			LA15: ;
		}
		LA11: ;
		read = ((NI) 0);
		{
			while (1) {
				NI chunk;
				NCSTRING d;
				if (!(read < size)) goto LA23;
				{
					NI res;
					if (!((*socket).isbufferedU.S1.buflen <= (*socket).isbufferedU.S1.currpos)) goto LA26;
					res = readintobuf_587023(socket, ((NI32) 0));
					{
						if (!(res <= ((NI) 0))) goto LA30;
						{
							if (!(((NI) 0) < read)) goto LA34;
							result = read;
							goto BeforeRet;
						}
						goto LA32;
						LA34: ;
						{
							result = res;
							goto BeforeRet;
						}
						LA32: ;
					}
					LA30: ;
				}
				LA26: ;
				chunk = (((NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos) <= (NI)(size - read)) ? (NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos) : (NI)(size - read));
				d = ((NCSTRING) (data));
				copymem_7478(((void*) ((&d[read]))), ((void*) ((&(*socket).isbufferedU.S1.buffer[((*socket).isbufferedU.S1.currpos)- 0]))), ((NI) (chunk)));
				read += chunk;
				(*socket).isbufferedU.S1.currpos += chunk;
			} LA23: ;
		}
		result = read;
	}
	goto LA5;
	LA7: ;
	{
		result = recv((*socket).fd, data, ((NI) (((int) (size)))), ((NI32) 0));
		{
			if (!(result < ((NI) 0))) goto LA40;
			(*socket).lasterror = oslasterror_130619();
		}
		LA40: ;
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, peekchar_588236)(Socketimpl583406* socket, NIM_CHAR* c) {
	NI result;
	result = 0;
	{
		if (!(*socket).isbuffered) goto LA3;
		result = ((NI) 1);
		{
			NIM_BOOL LOC7;
			NI res;
			LOC7 = 0;
			LOC7 = ((*socket).isbufferedU.S1.buflen == ((NI) 0));
			if (LOC7) goto LA8;
			LOC7 = ((NI)((*socket).isbufferedU.S1.buflen - ((NI) 1)) < (*socket).isbufferedU.S1.currpos);
			LA8: ;
			if (!LOC7) goto LA9;
			res = readintobuf_587023(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA13;
				result = res;
			}
			LA13: ;
		}
		LA9: ;
		(*c) = (*socket).isbufferedU.S1.buffer[((*socket).isbufferedU.S1.currpos)- 0];
	}
	goto LA1;
	LA3: ;
	{
		result = recv((*socket).fd, ((void*) (c)), ((NI) 1), MSG_PEEK);
	}
	LA1: ;
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47305* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}

N_NIMCALL(void, readline_588402)(Socketimpl583406* socket, NimStringDesc** line, NI timeout, NU8 flags, NI maxlength) {
	NF waited;
{	waited = 0.0;
	(*line) = setLengthStr((*line), ((NI) 0));
	{
		while (1) {
			NIM_CHAR c;
			NI LOC3;
			NI n;
			c = 0;
			LOC3 = 0;
			LOC3 = waitfor_587606(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP5503));
			n = recv_587216(socket, ((void*) ((&c))), ((NI) 1));
			{
				NI32 lasterror;
				if (!(n < ((NI) 0))) goto LA6;
				lasterror = getsocketerror_584201(socket);
				{
					NIM_BOOL LOC10;
					LOC10 = 0;
					LOC10 = isdisconnectionerror_583470(flags, lasterror);
					if (!LOC10) goto LA11;
					(*line) = setLengthStr((*line), ((NI) 0));
					goto BeforeRet;
				}
				LA11: ;
				socketerror_583464(socket, n, NIM_FALSE, lasterror);
			}
			goto LA4;
			LA6: ;
			{
				if (!(n == ((NI) 0))) goto LA14;
				(*line) = setLengthStr((*line), ((NI) 0));
				goto BeforeRet;
			}
			goto LA4;
			LA14: ;
			LA4: ;
			{
				NI LOC20;
				if (!((NU8)(c) == (NU8)(13))) goto LA18;
				LOC20 = 0;
				LOC20 = waitfor_587606(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP5503));
				n = peekchar_588236(socket, (&c));
				{
					NIM_BOOL LOC23;
					NI LOC27;
					LOC23 = 0;
					LOC23 = (((NI) 0) < n);
					if (!(LOC23)) goto LA24;
					LOC23 = ((NU8)(c) == (NU8)(10));
					LA24: ;
					if (!LOC23) goto LA25;
					LOC27 = 0;
					LOC27 = recv_587216(socket, ((void*) ((&c))), ((NI) 1));
				}
				goto LA21;
				LA25: ;
				{
					NI32 lasterror;
					if (!(n <= ((NI) 0))) goto LA29;
					lasterror = getsocketerror_584201(socket);
					{
						NIM_BOOL LOC33;
						LOC33 = 0;
						LOC33 = isdisconnectionerror_583470(flags, lasterror);
						if (!LOC33) goto LA34;
						(*line) = setLengthStr((*line), ((NI) 0));
						goto BeforeRet;
					}
					LA34: ;
					socketerror_583464(socket, n, NIM_FALSE, lasterror);
				}
				goto LA21;
				LA29: ;
				LA21: ;
				{
					if (!(((*line) ? (*line)->Sup.len : 0) == ((NI) 0))) goto LA38;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP5504));
				}
				LA38: ;
				goto BeforeRet;
			}
			goto LA16;
			LA18: ;
			{
				if (!((NU8)(c) == (NU8)(10))) goto LA41;
				{
					if (!(((*line) ? (*line)->Sup.len : 0) == ((NI) 0))) goto LA45;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP5504));
				}
				LA45: ;
				goto BeforeRet;
			}
			goto LA16;
			LA41: ;
			LA16: ;
			(*line) = addChar((*line), c);
			{
				NimStringDesc* msg;
				Valueerror3646* e_588438;
				NimStringDesc* LOC51;
				if (!(maxlength < ((*line) ? (*line)->Sup.len : 0))) goto LA49;
				msg = copyString(((NimStringDesc*) &TMP5505));
				e_588438 = 0;
				e_588438 = (Valueerror3646*) newObj((&NTI23025), sizeof(Valueerror3646));
				(*e_588438).Sup.Sup.m_type = (&NTI3646);
				LOC51 = 0;
				LOC51 = (*e_588438).Sup.message; (*e_588438).Sup.message = copyStringRC1(msg);
				if (LOC51) nimGCunrefNoCycle(LOC51);
				raiseException((Exception*)e_588438, "ValueError");
			}
			LA49: ;
		}
	}
	}BeforeRet: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_18837;
	exchandler_18837 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837 = (*exchandler_18837).prev;
}

N_NIMCALL(void, close_585611)(Socketimpl583406* socket) {
	TSafePoint TMP5506;
	pushSafePoint(&TMP5506);
	TMP5506.status = setjmp(TMP5506.context);
	if (TMP5506.status == 0) {
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		close_578013((*socket).fd);
	}
	if (TMP5506.status != 0) reraiseException();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit000)(void) {
static TNimNode* TMP5476[6];
static TNimNode* TMP5477[3];
static TNimNode TMP1207[13];
NTI583406.size = sizeof(Socketimpl583406);
NTI583406.kind = 18;
NTI583406.base = 0;
NTI583406.flags = 3;
TMP5476[0] = &TMP1207[1];
TMP1207[1].kind = 1;
TMP1207[1].offset = offsetof(Socketimpl583406, fd);
TMP1207[1].typ = (&NTI7408);
TMP1207[1].name = "fd";
TMP5476[1] = &TMP1207[2];
TMP1207[2].kind = 3;
TMP1207[2].offset = offsetof(Socketimpl583406, isbuffered);
TMP1207[2].typ = (&NTI130);
TMP1207[2].name = "isBuffered";
TMP1207[2].sons = &NimDT_583406_isbuffered[0];
TMP1207[2].len = 2;
TMP5477[0] = &TMP1207[4];
NTI583420.size = sizeof(TY583420);
NTI583420.kind = 16;
NTI583420.base = (&NTI136);
NTI583420.flags = 3;
TMP1207[4].kind = 1;
TMP1207[4].offset = offsetof(Socketimpl583406, isbufferedU.S1.buffer);
TMP1207[4].typ = (&NTI583420);
TMP1207[4].name = "buffer";
TMP5477[1] = &TMP1207[5];
TMP1207[5].kind = 1;
TMP1207[5].offset = offsetof(Socketimpl583406, isbufferedU.S1.currpos);
TMP1207[5].typ = (&NTI104);
TMP1207[5].name = "currPos";
TMP5477[2] = &TMP1207[6];
TMP1207[6].kind = 1;
TMP1207[6].offset = offsetof(Socketimpl583406, isbufferedU.S1.buflen);
TMP1207[6].typ = (&NTI104);
TMP1207[6].name = "bufLen";
TMP1207[3].len = 3; TMP1207[3].kind = 2; TMP1207[3].sons = &TMP5477[0];
NimDT_583406_isbuffered[1] = &TMP1207[3];
TMP1207[7].len = 0; TMP1207[7].kind = 2;
NimDT_583406_isbuffered[0] = &TMP1207[7];
TMP5476[2] = &TMP1207[8];
TMP1207[8].kind = 1;
TMP1207[8].offset = offsetof(Socketimpl583406, lasterror);
TMP1207[8].typ = (&NTI110);
TMP1207[8].name = "lastError";
TMP5476[3] = &TMP1207[9];
TMP1207[9].kind = 1;
TMP1207[9].offset = offsetof(Socketimpl583406, domain);
TMP1207[9].typ = (&NTI577604);
TMP1207[9].name = "domain";
TMP5476[4] = &TMP1207[10];
TMP1207[10].kind = 1;
TMP1207[10].offset = offsetof(Socketimpl583406, socktype);
TMP1207[10].typ = (&NTI577606);
TMP1207[10].name = "sockType";
TMP5476[5] = &TMP1207[11];
TMP1207[11].kind = 1;
TMP1207[11].offset = offsetof(Socketimpl583406, protocol);
TMP1207[11].typ = (&NTI577608);
TMP1207[11].name = "protocol";
TMP1207[0].len = 6; TMP1207[0].kind = 2; TMP1207[0].sons = &TMP5476[0];
NTI583406.node = &TMP1207[0];
NTI583408.size = sizeof(Socketimpl583406*);
NTI583408.kind = 22;
NTI583408.base = (&NTI583406);
NTI583408.flags = 2;
NTI583408.marker = TMP5487;
NTI583414.size = sizeof(Timeouterror583414);
NTI583414.kind = 17;
NTI583414.base = (&NTI3624);
TMP1207[12].len = 0; TMP1207[12].kind = 2;
NTI583414.node = &TMP1207[12];
NTI587814.size = sizeof(Timeouterror583414*);
NTI587814.kind = 22;
NTI587814.base = (&NTI583414);
NTI587814.marker = TMP5499;
}

