/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tbaselexer212024 tbaselexer212024;
typedef struct TNimObject TNimObject;
typedef struct tllstream210204 tllstream210204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  tbaselexer212024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream210204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tllstream210204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
N_NOCONV(void*, alloc_5801)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, fillbuffer_212097)(tbaselexer212024* l);
N_NIMCALL(NI, llstreamread_210256)(tllstream210204* s, void* buf, NI buflen);
N_NOCONV(void*, realloc_5833)(void* p, NI newsize);
N_NIMCALL(void, skiputf8bom_213419)(tbaselexer212024* l);
N_NIMCALL(NI, fillbaselexer_212828)(tbaselexer212024* l, NI pos);
N_NOCONV(void, dealloc_5848)(void* p);
N_NIMCALL(void, llstreamclose_210250)(tllstream210204* s);
extern TNimType NTI3211; /* RootObj */
TNimType NTI212024; /* TBaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI210206; /* PLLStream */

N_NIMCALL(void, fillbuffer_212097)(tbaselexer212024* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI LOC5;
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	tocopy = (NI32)((NI32)((*l).Buflen - (*l).Sentinel) - 1);
	{
		if (!(0 < tocopy)) goto LA3;
		memmove(((void*) ((*l).Buf)), ((void*) ((&(*l).Buf[(NI32)((*l).Sentinel + 1)]))), (NI32)(tocopy * 1));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = llstreamread_210256((*l).Stream, ((void*) ((&(*l).Buf[tocopy]))), (NI32)((NI32)((*l).Sentinel + 1) * 1));
	charsread = (NI32)(LOC5 / 1);
	s = (NI32)(tocopy + charsread);
	{
		if (!(charsread < (NI32)((*l).Sentinel + 1))) goto LA8;
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
					(*l).Buflen = (NI32)((*l).Buflen * 2);
					LOC22 = 0;
					LOC22 = realloc_5833(((void*) ((*l).Buf)), (NI32)((*l).Buflen * 1));
					(*l).Buf = ((NCSTRING) (LOC22));
					LOC23 = 0;
					LOC23 = llstreamread_210256((*l).Stream, ((void*) ((&(*l).Buf[oldbuflen]))), (NI32)(oldbuflen * 1));
					charsread = (NI32)(LOC23 / 1);
					{
						if (!(charsread < oldbuflen)) goto LA26;
						(*l).Buf[(NI32)(oldbuflen + charsread)] = 0;
						(*l).Sentinel = (NI32)(oldbuflen + charsread);
						goto LA11;
					}
					LA26: ;
					s = (NI32)((*l).Buflen - 1);
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_213419)(tbaselexer212024* l) {
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

N_NIMCALL(void, openbaselexer_212035)(tbaselexer212024* l, tllstream210204* inputstream, NI buflen) {
	void* LOC1;
	(*l).Bufpos = 0;
	(*l).Buflen = buflen;
	LOC1 = 0;
	LOC1 = alloc_5801((NI32)(buflen * 1));
	(*l).Buf = ((NCSTRING) (LOC1));
	(*l).Sentinel = (NI32)(buflen - 1);
	(*l).Linestart = 0;
	(*l).Linenumber = 1;
	unsureAsgnRef((void**) (&(*l).Stream), inputstream);
	fillbuffer_212097(l);
	skiputf8bom_213419(l);
}

N_NIMCALL(NI, getcolnumber_212059)(tbaselexer212024* l, NI pos) {
	NI result;
	result = 0;
	result = ((NI32)(pos - (*l).Linestart) > 0? ((NI32)(pos - (*l).Linestart)) : -((NI32)(pos - (*l).Linestart)));
	return result;
}

N_NIMCALL(NI, fillbaselexer_212828)(tbaselexer212024* l, NI pos) {
	NI result;
	result = 0;
	{
		if (!(pos < (*l).Sentinel)) goto LA3;
		result = (NI32)(pos + 1);
	}
	goto LA1;
	LA3: ;
	{
		fillbuffer_212097(l);
		(*l).Bufpos = 0;
		result = 0;
	}
	LA1: ;
	(*l).Linestart = result;
	return result;
}

N_NIMCALL(NI, handlecr_212066)(tbaselexer212024* l, NI pos) {
	NI result;
	result = 0;
	(*l).Linenumber += 1;
	result = fillbaselexer_212828(l, pos);
	{
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA3;
		result = fillbaselexer_212828(l, result);
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, handlelf_212074)(tbaselexer212024* l, NI pos) {
	NI result;
	result = 0;
	(*l).Linenumber += 1;
	result = fillbaselexer_212828(l, pos);
	return result;
}

N_NIMCALL(void, closebaselexer_212045)(tbaselexer212024* l) {
	dealloc_5848(((void*) ((*l).Buf)));
	llstreamclose_210250((*l).Stream);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_nimlexbaseInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_nimlexbaseDatInit)(void) {
static TNimNode* TMP1007[7];
static TNimNode TMP711[8];
NTI212024.size = sizeof(tbaselexer212024);
NTI212024.kind = 17;
NTI212024.base = (&NTI3211);
TMP1007[0] = &TMP711[1];
TMP711[1].kind = 1;
TMP711[1].offset = offsetof(tbaselexer212024, Bufpos);
TMP711[1].typ = (&NTI108);
TMP711[1].name = "bufpos";
TMP1007[1] = &TMP711[2];
TMP711[2].kind = 1;
TMP711[2].offset = offsetof(tbaselexer212024, Buf);
TMP711[2].typ = (&NTI151);
TMP711[2].name = "buf";
TMP1007[2] = &TMP711[3];
TMP711[3].kind = 1;
TMP711[3].offset = offsetof(tbaselexer212024, Buflen);
TMP711[3].typ = (&NTI108);
TMP711[3].name = "bufLen";
TMP1007[3] = &TMP711[4];
TMP711[4].kind = 1;
TMP711[4].offset = offsetof(tbaselexer212024, Stream);
TMP711[4].typ = (&NTI210206);
TMP711[4].name = "stream";
TMP1007[4] = &TMP711[5];
TMP711[5].kind = 1;
TMP711[5].offset = offsetof(tbaselexer212024, Linenumber);
TMP711[5].typ = (&NTI108);
TMP711[5].name = "lineNumber";
TMP1007[5] = &TMP711[6];
TMP711[6].kind = 1;
TMP711[6].offset = offsetof(tbaselexer212024, Sentinel);
TMP711[6].typ = (&NTI108);
TMP711[6].name = "sentinel";
TMP1007[6] = &TMP711[7];
TMP711[7].kind = 1;
TMP711[7].offset = offsetof(tbaselexer212024, Linestart);
TMP711[7].typ = (&NTI108);
TMP711[7].name = "lineStart";
TMP711[0].len = 7; TMP711[0].kind = 2; TMP711[0].sons = &TMP1007[0];
NTI212024.node = &TMP711[0];
}

