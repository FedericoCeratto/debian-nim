/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct baselexer292024 baselexer292024;
typedef struct TNimObject TNimObject;
typedef struct streamobj135035 streamobj135035;
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
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_5801)(NI size);
N_NIMCALL(void, fillbuffer_292102)(baselexer292024* l);
N_NIMCALL(NI, readdata_135182)(streamobj135035* s, void* buffer, NI buflen);
N_NOCONV(void*, realloc_5833)(void* p, NI newsize);
N_NIMCALL(void, skiputf8bom_293419)(baselexer292024* l);
N_NOCONV(void, dealloc_5848)(void* p);
N_NIMCALL(void, close_135093)(streamobj135035* s);
extern TNimType NTI3211; /* RootObj */
TNimType NTI292024; /* BaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI135033; /* Stream */
extern TNimType NTI138; /* bool */

N_NIMCALL(void, fillbuffer_292102)(baselexer292024* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI LOC5;
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	tocopy = (NI64)((NI64)((*l).Buflen - (*l).Sentinel) - 1);
	{
		if (!(0 < tocopy)) goto LA3;
		memmove(((void*) ((*l).Buf)), ((void*) ((&(*l).Buf[(NI64)((*l).Sentinel + 1)]))), (NI64)(tocopy * 1));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = readdata_135182((*l).Input, ((void*) ((&(*l).Buf[tocopy]))), (NI64)((NI64)((*l).Sentinel + 1) * 1));
	charsread = (NI64)(LOC5 / 1);
	s = (NI64)(tocopy + charsread);
	{
		if (!(charsread < (NI64)((*l).Sentinel + 1))) goto LA8;
		(*l).Buf[s] = 0;
		(*l).Sentinel = s;
	}
	goto LA6;
	LA8: ;
	{
		s -= 1;
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = (0 <= s);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
						LA16: ;
						if (!LOC15) goto LA14;
						s -= 1;
					} LA14: ;
				}
				{
					if (!(0 <= s)) goto LA19;
					(*l).Sentinel = s;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen = (*l).Buflen;
					(*l).Buflen = (NI64)((*l).Buflen * 2);
					LOC22 = 0;
					LOC22 = realloc_5833(((void*) ((*l).Buf)), (NI64)((*l).Buflen * 1));
					(*l).Buf = ((NCSTRING) (LOC22));
					LOC23 = 0;
					LOC23 = readdata_135182((*l).Input, ((void*) ((&(*l).Buf[oldbuflen]))), (NI64)(oldbuflen * 1));
					charsread = (NI64)(LOC23 / 1);
					{
						if (!(charsread < oldbuflen)) goto LA26;
						(*l).Buf[(NI64)(oldbuflen + charsread)] = 0;
						(*l).Sentinel = (NI64)(oldbuflen + charsread);
						goto LA11;
					}
					LA26: ;
					s = (NI64)((*l).Buflen - 1);
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_293419)(baselexer292024* l) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*l).Bufpos += 3;
		(*l).Linestart += 3;
	}
	LA7: ;
}

N_NIMCALL(void, open_292040)(baselexer292024* l, streamobj135035* input, NI buflen) {
	void* LOC1;
	unsureAsgnRef((void**) (&(*l).Input), input);
	(*l).Bufpos = 0;
	(*l).Buflen = buflen;
	LOC1 = 0;
	LOC1 = alloc_5801((NI64)(buflen * 1));
	(*l).Buf = ((NCSTRING) (LOC1));
	(*l).Sentinel = (NI64)(buflen - 1);
	(*l).Linestart = 0;
	(*l).Linenumber = 1;
	fillbuffer_292102(l);
	skiputf8bom_293419(l);
}

N_NIMCALL(void, close_292050)(baselexer292024* l) {
	dealloc_5848(((void*) ((*l).Buf)));
	close_135093((*l).Input);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void) {
static TNimNode* TMP2710[8];
static TNimNode TMP854[9];
NTI292024.size = sizeof(baselexer292024);
NTI292024.kind = 17;
NTI292024.base = (&NTI3211);
TMP2710[0] = &TMP854[1];
TMP854[1].kind = 1;
TMP854[1].offset = offsetof(baselexer292024, Bufpos);
TMP854[1].typ = (&NTI108);
TMP854[1].name = "bufpos";
TMP2710[1] = &TMP854[2];
TMP854[2].kind = 1;
TMP854[2].offset = offsetof(baselexer292024, Buf);
TMP854[2].typ = (&NTI151);
TMP854[2].name = "buf";
TMP2710[2] = &TMP854[3];
TMP854[3].kind = 1;
TMP854[3].offset = offsetof(baselexer292024, Buflen);
TMP854[3].typ = (&NTI108);
TMP854[3].name = "bufLen";
TMP2710[3] = &TMP854[4];
TMP854[4].kind = 1;
TMP854[4].offset = offsetof(baselexer292024, Input);
TMP854[4].typ = (&NTI135033);
TMP854[4].name = "input";
TMP2710[4] = &TMP854[5];
TMP854[5].kind = 1;
TMP854[5].offset = offsetof(baselexer292024, Linenumber);
TMP854[5].typ = (&NTI108);
TMP854[5].name = "lineNumber";
TMP2710[5] = &TMP854[6];
TMP854[6].kind = 1;
TMP854[6].offset = offsetof(baselexer292024, Sentinel);
TMP854[6].typ = (&NTI108);
TMP854[6].name = "sentinel";
TMP2710[6] = &TMP854[7];
TMP854[7].kind = 1;
TMP854[7].offset = offsetof(baselexer292024, Linestart);
TMP854[7].typ = (&NTI108);
TMP854[7].name = "lineStart";
TMP2710[7] = &TMP854[8];
TMP854[8].kind = 1;
TMP854[8].offset = offsetof(baselexer292024, Fileopened);
TMP854[8].typ = (&NTI138);
TMP854[8].name = "fileOpened";
TMP854[0].len = 8; TMP854[0].kind = 2; TMP854[0].sons = &TMP2710[0];
NTI292024.node = &TMP854[0];
}

