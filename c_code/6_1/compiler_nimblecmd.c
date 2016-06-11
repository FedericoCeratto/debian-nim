/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <dirent.h>
#include <setjmp.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct Tlinkedlist141016 Tlinkedlist141016;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct Stringtableobj146209 Stringtableobj146209;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Keyvaluepairseq146207 Keyvaluepairseq146207;
typedef struct Keyvaluepair146205 Keyvaluepair146205;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist141016  {
Tlistentry141010* head;
Tlistentry141010* tail;
NI counter;
};
typedef NU8 Stringtablemode146203;
typedef NU8 Pathcomponent132612;
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
typedef NIM_CHAR TY115771[256];
struct  Stringtableobj146209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq146207* data;
Stringtablemode146203 mode;
};
struct Keyvaluepair146205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
typedef NU16 Tmsgkind186002;
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
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
struct Keyvaluepairseq146207 {
  TGenericSeq Sup;
  Keyvaluepair146205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_141213_3771138726)(Tlinkedlist141016 list0, NimStringDesc* data0);
N_NIMCALL(void, prependstr_141413_3771138726)(Tlinkedlist141016* list0, NimStringDesc* data0);
N_NIMCALL(void, addpathrec_249184_1623492514)(NimStringDesc* dir0, Tlineinfo186336 info0);
N_NIMCALL(Stringtableobj146209*, nstnewStringTable)(Stringtablemode146203 mode0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, HEX2F_124665_2125978480)(NimStringDesc* head0, NimStringDesc* tail0);
static N_INLINE(NIM_BOOL, direxists_128008_2125978480)(NimStringDesc* dir0);
N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir0);
N_NIMCALL(void, addpackage_249084_1623492514)(Stringtableobj146209* packages0, NimStringDesc* p0);
N_NIMCALL(NI, versionsplitpos_249008_1623492514)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79610_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_249034_1623492514)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s0, NI* number0, NI start0);
N_NIMCALL(NimStringDesc*, getordefault_146814_603679043)(Stringtableobj146209* t0, NimStringDesc* key0);
N_NIMCALL(void, nstPut)(Stringtableobj146209* t0, NimStringDesc* key0, NimStringDesc* val0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, addnimblepath_249108_1623492514)(NimStringDesc* p0, Tlineinfo186336 info0);
N_NIMCALL(void, message_191095_155036129)(Tlineinfo186336 info0, Tmsgkind186002 msg0, NimStringDesc* arg0);
STRING_LITERAL(TMP1959, ".", 1);
STRING_LITERAL(TMP1960, "..", 2);
STRING_LITERAL(TMP1961, "head", 4);
extern Tlinkedlist141016 searchpaths_164131_2607990831;
extern TSafePoint* exchandler_19637_1689653243;
extern Tlinkedlist141016 lazypaths_164132_2607990831;

N_NIMCALL(void, addpath_249003_1623492514)(NimStringDesc* path0, Tlineinfo186336 info0) {
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_141213_3771138726(searchpaths_164131_2607990831, path0);
		if (!!(LOC3)) goto LA4;
		prependstr_141413_3771138726((&searchpaths_164131_2607990831), path0);
	}
	LA4: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_19637_1689653243;
	exchandler_19637_1689653243 = s0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
	int LOC13;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = (int)0;
	LOC13 = memcmp(((NCSTRING) ((*a0).data)), ((NCSTRING) ((*b0).data)), (*a0).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NIM_BOOL, direxists_128008_2125978480)(NimStringDesc* dir0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = nosexistsDir(dir0);
	return result0;
}

N_NIMCALL(NI, versionsplitpos_249008_1623492514)(NimStringDesc* s0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 2));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = (NIM_BOOL)0;
			LOC3 = (((NI) 1) < result0);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(s0->data[result0])) >= ((NU8)(48)) && ((NU8)(s0->data[result0])) <= ((NU8)(57)) || ((NU8)(s0->data[result0])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			result0 -= ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(s0->data[result0]) == (NU8)(45)))) goto LA7;
		result0 = (s0 ? s0->Sup.len : 0);
	}
	LA7: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_249034_1623492514)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NI i0;
	NI j0;
	NI vera0;
	NI verb0;
{	result0 = (NIM_BOOL)0;
	{
		if (!eqStrings(a0, ((NimStringDesc*) &TMP1961))) goto LA3;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	i0 = ((NI) 0);
	j0 = ((NI) 0);
	vera0 = ((NI) 0);
	verb0 = ((NI) 0);
	{
		while (1) {
			NI ii0;
			NI jj0;
			ii0 = npuParseInt(a0, (&vera0), i0);
			jj0 = npuParseInt(b0, (&verb0), j0);
			{
				NIM_BOOL LOC9;
				LOC9 = (NIM_BOOL)0;
				LOC9 = (ii0 <= ((NI) 0));
				if (LOC9) goto LA10;
				LOC9 = (jj0 <= ((NI) 0));
				LA10: ;
				if (!LOC9) goto LA11;
				result0 = (((NI) 0) < jj0);
				goto BeforeRet;
			}
			LA11: ;
			{
				if (!(vera0 < verb0)) goto LA15;
				result0 = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA13;
			LA15: ;
			{
				if (!(verb0 < vera0)) goto LA18;
				result0 = NIM_FALSE;
				goto BeforeRet;
			}
			goto LA13;
			LA18: ;
			LA13: ;
			i0 += ii0;
			j0 += jj0;
			{
				if (!((NU8)(a0->data[i0]) == (NU8)(46))) goto LA22;
				i0 += ((NI) 1);
			}
			LA22: ;
			{
				if (!((NU8)(b0->data[j0]) == (NU8)(46))) goto LA26;
				j0 += ((NI) 1);
			}
			LA26: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, addpackage_249084_1623492514)(Stringtableobj146209* packages0, NimStringDesc* p0) {
	NI x0;
	NimStringDesc* name0;
	x0 = versionsplitpos_249008_1623492514(p0);
	name0 = copyStrLast(p0, ((NI) 0), (NI)(x0 - ((NI) 1)));
	{
		NimStringDesc* version0;
		if (!(x0 < (p0 ? p0->Sup.len : 0))) goto LA3;
		version0 = copyStr(p0, (NI)(x0 + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = (NimStringDesc*)0;
			LOC7 = getordefault_146814_603679043(packages0, name0);
			LOC8 = (NIM_BOOL)0;
			LOC8 = HEX3CHEX2E_249034_1623492514(LOC7, version0);
			if (!LOC8) goto LA9;
			nstPut(packages0, name0, version0);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages0, name0, ((NimStringDesc*) &TMP1961));
	}
	LA1: ;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19637_1689653243 = (*exchandler_19637_1689653243).prev;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, addnimblepath_249108_1623492514)(NimStringDesc* p0, Tlineinfo186336 info0) {
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_141213_3771138726(searchpaths_164131_2607990831, p0);
		if (!!(LOC3)) goto LA4;
		message_191095_155036129(info0, ((Tmsgkind186002) 280), p0);
		prependstr_141413_3771138726((&lazypaths_164132_2607990831), p0);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_249184_1623492514)(NimStringDesc* dir0, Tlineinfo186336 info0) {
	Stringtableobj146209* packages0;
	NI pos0;
	packages0 = nstnewStringTable(((Stringtablemode146203) 2));
	pos0 = (NI)((dir0 ? dir0->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir0->data[pos0])) == ((NU8)(47)) || ((NU8)(dir0->data[pos0])) == ((NU8)(47)))) goto LA3;
		pos0 += ((NI) 1);
	}
	LA3: ;
	{
		Pathcomponent132612 k_249210_1623492514;
		NimStringDesc* p_249211_1623492514;
		DIR* d_249238_1623492514;
		k_249210_1623492514 = (Pathcomponent132612)0;
		p_249211_1623492514 = (NimStringDesc*)0;
		d_249238_1623492514 = opendir(dir0->data);
		{
			TSafePoint TMP1958;
			if (!!((d_249238_1623492514 == NIM_NIL))) goto LA8;
			pushSafePoint(&TMP1958);
			TMP1958.status = _setjmp(TMP1958.context);
			if (TMP1958.status == 0) {
				{
					while (1) {
						{
							struct dirent* x_249240_1623492514;
							NimStringDesc* volatile y_249242_1623492514;
							x_249240_1623492514 = readdir(d_249238_1623492514);
							{
								if (!(x_249240_1623492514 == NIM_NIL)) goto LA16;
								goto LA11;
							}
							LA16: ;
							y_249242_1623492514 = cstrToNimstr(((NCSTRING) ((*x_249240_1623492514).d_name)));
							{
								NIM_BOOL LOC20;
								struct stat s_249244_1623492514;
								Pathcomponent132612 volatile k_249246_1623492514;
								LOC20 = (NIM_BOOL)0;
								LOC20 = !(eqStrings(y_249242_1623492514, ((NimStringDesc*) &TMP1959)));
								if (!(LOC20)) goto LA21;
								LOC20 = !(eqStrings(y_249242_1623492514, ((NimStringDesc*) &TMP1960)));
								LA21: ;
								if (!LOC20) goto LA22;
								memset((void*)(&s_249244_1623492514), 0, sizeof(s_249244_1623492514));
								{
									if (!NIM_TRUE) goto LA26;
									y_249242_1623492514 = HEX2F_124665_2125978480(dir0, y_249242_1623492514);
								}
								LA26: ;
								k_249246_1623492514 = ((Pathcomponent132612) 0);
								{
									if (!!(((*x_249240_1623492514).d_type == ((NI8) 0)))) goto LA30;
									{
										if (!((*x_249240_1623492514).d_type == ((NI8) 4))) goto LA34;
										k_249246_1623492514 = ((Pathcomponent132612) 2);
									}
									LA34: ;
									{
										if (!((*x_249240_1623492514).d_type == ((NI8) 10))) goto LA38;
										{
											NIM_BOOL LOC42;
											LOC42 = (NIM_BOOL)0;
											LOC42 = direxists_128008_2125978480(y_249242_1623492514);
											if (!LOC42) goto LA43;
											k_249246_1623492514 = ((Pathcomponent132612) 3);
										}
										goto LA40;
										LA43: ;
										{
											k_249246_1623492514 = (Pathcomponent132612)(k_249246_1623492514 + ((NI) 1));
										}
										LA40: ;
									}
									LA38: ;
									k_249210_1623492514 = k_249246_1623492514;
									p_249211_1623492514 = y_249242_1623492514;
									{
										NIM_BOOL LOC48;
										LOC48 = (NIM_BOOL)0;
										LOC48 = (k_249210_1623492514 == ((Pathcomponent132612) 2));
										if (!(LOC48)) goto LA49;
										LOC48 = !(((NU8)(p_249211_1623492514->data[pos0]) == (NU8)(46)));
										LA49: ;
										if (!LOC48) goto LA50;
										addpackage_249084_1623492514(packages0, p_249211_1623492514);
									}
									LA50: ;
									goto LA13;
								}
								LA30: ;
								{
									int LOC54;
									LOC54 = (int)0;
									LOC54 = lstat(y_249242_1623492514->data, (&s_249244_1623492514));
									if (!(LOC54 < ((NI32) 0))) goto LA55;
									goto LA11;
								}
								LA55: ;
								{
									NIM_BOOL LOC59;
									LOC59 = (NIM_BOOL)0;
									LOC59 = S_ISDIR(s_249244_1623492514.st_mode);
									if (!LOC59) goto LA60;
									k_249246_1623492514 = ((Pathcomponent132612) 2);
								}
								LA60: ;
								{
									NIM_BOOL LOC64;
									LOC64 = (NIM_BOOL)0;
									LOC64 = S_ISLNK(s_249244_1623492514.st_mode);
									if (!LOC64) goto LA65;
									k_249246_1623492514 = (Pathcomponent132612)(k_249246_1623492514 + ((NI) 1));
								}
								LA65: ;
								k_249210_1623492514 = k_249246_1623492514;
								p_249211_1623492514 = y_249242_1623492514;
								{
									NIM_BOOL LOC69;
									LOC69 = (NIM_BOOL)0;
									LOC69 = (k_249210_1623492514 == ((Pathcomponent132612) 2));
									if (!(LOC69)) goto LA70;
									LOC69 = !(((NU8)(p_249211_1623492514->data[pos0]) == (NU8)(46)));
									LA70: ;
									if (!LOC69) goto LA71;
									addpackage_249084_1623492514(packages0, p_249211_1623492514);
								}
								LA71: ;
							}
							LA22: ;
						} LA13: ;
					}
				} LA11: ;
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				int LOC75;
				LOC75 = (int)0;
				LOC75 = closedir(d_249238_1623492514);
			}
			if (TMP1958.status != 0) reraiseException();
		}
		LA8: ;
	}
	{
		NimStringDesc* p_249221_1623492514;
		p_249221_1623492514 = (NimStringDesc*)0;
		{
			NimStringDesc* key_249252_1623492514;
			NimStringDesc* val_249254_1623492514;
			key_249252_1623492514 = (NimStringDesc*)0;
			val_249254_1623492514 = (NimStringDesc*)0;
			{
				NI h_249256_1623492514;
				NI HEX3Atmp_249258_1623492514;
				NI res_249260_1623492514;
				h_249256_1623492514 = (NI)0;
				HEX3Atmp_249258_1623492514 = (NI)0;
				HEX3Atmp_249258_1623492514 = ((*packages0).data ? ((*packages0).data->Sup.len-1) : -1);
				res_249260_1623492514 = ((NI) 0);
				{
					while (1) {
						if (!(res_249260_1623492514 <= HEX3Atmp_249258_1623492514)) goto LA80;
						h_249256_1623492514 = res_249260_1623492514;
						{
							NimStringDesc* res_249264_1623492514;
							if (!!((*packages0).data->data[h_249256_1623492514].Field0 == 0)) goto LA83;
							key_249252_1623492514 = (*packages0).data->data[h_249256_1623492514].Field0;
							val_249254_1623492514 = (*packages0).data->data[h_249256_1623492514].Field1;
							{
								if (!eqStrings(val_249254_1623492514, ((NimStringDesc*) &TMP1961))) goto LA87;
								res_249264_1623492514 = key_249252_1623492514;
							}
							goto LA85;
							LA87: ;
							{
								NimStringDesc* LOC90;
								LOC90 = (NimStringDesc*)0;
								LOC90 = rawNewString(key_249252_1623492514->Sup.len + val_249254_1623492514->Sup.len + 1);
appendString(LOC90, key_249252_1623492514);
appendChar(LOC90, 45);
appendString(LOC90, val_249254_1623492514);
								res_249264_1623492514 = LOC90;
							}
							LA85: ;
							p_249221_1623492514 = res_249264_1623492514;
							addnimblepath_249108_1623492514(p_249221_1623492514, info0);
						}
						LA83: ;
						res_249260_1623492514 += ((NI) 1);
					} LA80: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_249265_1623492514)(NimStringDesc* path0, Tlineinfo186336 info0) {
	addpathrec_249184_1623492514(path0, info0);
	addnimblepath_249108_1623492514(path0, info0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

