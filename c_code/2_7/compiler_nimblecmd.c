/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
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
typedef struct Tlineinfo193336 Tlineinfo193336;
typedef struct Tlinkedlist148013 Tlinkedlist148013;
typedef struct Tlistentry148007 Tlistentry148007;
typedef struct Stringtableobj153608 Stringtableobj153608;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Keyvaluepairseq153606 Keyvaluepairseq153606;
typedef struct Keyvaluepair153604 Keyvaluepair153604;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo193336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist148013  {
Tlistentry148007* head;
Tlistentry148007* tail;
NI counter;
};
typedef NU8 Stringtablemode153602;
typedef NU8 Pathcomponent138212;
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
} TY17211;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17211 raiseAction;
};
typedef NIM_CHAR TY120773[256];
struct  Stringtableobj153608  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq153606* data;
Stringtablemode153602 mode;
};
struct Keyvaluepair153604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
typedef NU16 Tmsgkind193002;
struct  Tlistentry148007  {
  TNimObject Sup;
Tlistentry148007* prev;
Tlistentry148007* next;
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
struct Keyvaluepairseq153606 {
  TGenericSeq Sup;
  Keyvaluepair153604 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_148213_3771138726)(Tlinkedlist148013 list0, NimStringDesc* data0);
N_NIMCALL(void, prependstr_148413_3771138726)(Tlinkedlist148013* list0, NimStringDesc* data0);
N_NIMCALL(void, addpathrec_278112_1623492514)(NimStringDesc* dir0, Tlineinfo193336 info0);
N_NIMCALL(Stringtableobj153608*, nstnewStringTable)(Stringtablemode153602 mode0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NimStringDesc*, HEX2F_129265_2125978480)(NimStringDesc* head0, NimStringDesc* tail0);
static N_INLINE(NIM_BOOL, direxists_132608_2125978480)(NimStringDesc* dir0);
N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir0);
N_NIMCALL(void, addpackage_278083_1623492514)(Stringtableobj153608* packages0, NimStringDesc* p0);
N_NIMCALL(NI, versionsplitpos_278007_1623492514)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79210_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_278033_1623492514)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s0, NI* number0, NI start0);
N_NIMCALL(NimStringDesc*, getordefault_154214_603679043)(Stringtableobj153608* t0, NimStringDesc* key0);
N_NIMCALL(void, nstPut)(Stringtableobj153608* t0, NimStringDesc* key0, NimStringDesc* val0);
N_NIMCALL(Pathcomponent138212, getsymlinkfilekind_138219_2125978480)(NimStringDesc* path0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, addnimblepath_278107_1623492514)(NimStringDesc* p0, Tlineinfo193336 info0);
N_NIMCALL(void, message_198095_155036129)(Tlineinfo193336 info0, Tmsgkind193002 msg0, NimStringDesc* arg0);
STRING_LITERAL(T1623492514_3, ".", 1);
STRING_LITERAL(T1623492514_4, "..", 2);
STRING_LITERAL(T1623492514_5, "head", 4);
extern Tlinkedlist148013 searchpaths_171134_2607990831;
extern TSafePoint* exchandler_18837_1689653243;
extern Tlinkedlist148013 lazypaths_171135_2607990831;

N_NIMCALL(void, addpath_278002_1623492514)(NimStringDesc* path0, Tlineinfo193336 info0) {
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_148213_3771138726(searchpaths_171134_2607990831, path0);
		if (!!(LOC3)) goto LA4;
		prependstr_148413_3771138726((&searchpaths_171134_2607990831), path0);
	}
	LA4: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18837_1689653243;
	exchandler_18837_1689653243 = s0;
}

static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0) {
	NIM_BOOL result0;
	int LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = memcmp(a0, b0, ((size_t) (size0)));
	result0 = (LOC1 == ((NI32) 0));
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
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
	LOC11 = equalmem_7495_1689653243(((void*) ((*a0).data)), ((void*) ((*b0).data)), ((NI) ((*a0).Sup.len)));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NIM_BOOL, direxists_132608_2125978480)(NimStringDesc* dir0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = nosexistsDir(dir0);
	return result0;
}

N_NIMCALL(NI, versionsplitpos_278007_1623492514)(NimStringDesc* s0) {
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_278033_1623492514)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NI i0;
	NI j0;
	NI vera0;
	NI verb0;
{	result0 = (NIM_BOOL)0;
	{
		if (!eqStrings(a0, ((NimStringDesc*) &T1623492514_5))) goto LA3;
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

N_NIMCALL(void, addpackage_278083_1623492514)(Stringtableobj153608* packages0, NimStringDesc* p0) {
	NI x0;
	NimStringDesc* name0;
	x0 = versionsplitpos_278007_1623492514(p0);
	name0 = copyStrLast(p0, ((NI) 0), (NI)(x0 - ((NI) 1)));
	{
		NimStringDesc* version0;
		if (!(x0 < (p0 ? p0->Sup.len : 0))) goto LA3;
		version0 = copyStr(p0, (NI)(x0 + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = (NimStringDesc*)0;
			LOC7 = getordefault_154214_603679043(packages0, name0);
			LOC8 = (NIM_BOOL)0;
			LOC8 = HEX3CHEX2E_278033_1623492514(LOC7, version0);
			if (!LOC8) goto LA9;
			nstPut(packages0, name0, version0);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages0, name0, ((NimStringDesc*) &T1623492514_5));
	}
	LA1: ;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837_1689653243 = (*exchandler_18837_1689653243).prev;
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

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, addnimblepath_278107_1623492514)(NimStringDesc* p0, Tlineinfo193336 info0) {
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_148213_3771138726(searchpaths_171134_2607990831, p0);
		if (!!(LOC3)) goto LA4;
		message_198095_155036129(info0, ((Tmsgkind193002) 280), p0);
		prependstr_148413_3771138726((&lazypaths_171135_2607990831), p0);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_278112_1623492514)(NimStringDesc* dir0, Tlineinfo193336 info0) {
	Stringtableobj153608* packages0;
	NI pos0;
	packages0 = nstnewStringTable(((Stringtablemode153602) 2));
	pos0 = (NI)((dir0 ? dir0->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir0->data[pos0])) == ((NU8)(47)) || ((NU8)(dir0->data[pos0])) == ((NU8)(47)))) goto LA3;
		pos0 += ((NI) 1);
	}
	LA3: ;
	{
		Pathcomponent138212 k_278138_1623492514;
		NimStringDesc* p_278139_1623492514;
		DIR* d_278166_1623492514;
		k_278138_1623492514 = (Pathcomponent138212)0;
		p_278139_1623492514 = (NimStringDesc*)0;
		d_278166_1623492514 = opendir(dir0->data);
		{
			TSafePoint T1623492514_2;
			if (!!((d_278166_1623492514 == NIM_NIL))) goto LA8;
			pushSafePoint(&T1623492514_2);
			T1623492514_2.status = setjmp(T1623492514_2.context);
			if (T1623492514_2.status == 0) {
				{
					while (1) {
						{
							struct dirent* x_278168_1623492514;
							NimStringDesc* volatile y_278170_1623492514;
							x_278168_1623492514 = readdir(d_278166_1623492514);
							{
								if (!(x_278168_1623492514 == NIM_NIL)) goto LA16;
								goto LA11;
							}
							LA16: ;
							y_278170_1623492514 = cstrToNimstr(((NCSTRING) ((*x_278168_1623492514).d_name)));
							{
								NIM_BOOL LOC20;
								struct stat s_278172_1623492514;
								Pathcomponent138212 volatile k_278174_1623492514;
								LOC20 = (NIM_BOOL)0;
								LOC20 = !(eqStrings(y_278170_1623492514, ((NimStringDesc*) &T1623492514_3)));
								if (!(LOC20)) goto LA21;
								LOC20 = !(eqStrings(y_278170_1623492514, ((NimStringDesc*) &T1623492514_4)));
								LA21: ;
								if (!LOC20) goto LA22;
								memset((void*)(&s_278172_1623492514), 0, sizeof(s_278172_1623492514));
								{
									if (!NIM_TRUE) goto LA26;
									y_278170_1623492514 = HEX2F_129265_2125978480(dir0, y_278170_1623492514);
								}
								LA26: ;
								k_278174_1623492514 = ((Pathcomponent138212) 0);
								{
									if (!!(((*x_278168_1623492514).d_type == ((NI8) 0)))) goto LA30;
									{
										if (!((*x_278168_1623492514).d_type == ((NI8) 4))) goto LA34;
										k_278174_1623492514 = ((Pathcomponent138212) 2);
									}
									LA34: ;
									{
										if (!((*x_278168_1623492514).d_type == ((NI8) 10))) goto LA38;
										{
											NIM_BOOL LOC42;
											LOC42 = (NIM_BOOL)0;
											LOC42 = direxists_132608_2125978480(y_278170_1623492514);
											if (!LOC42) goto LA43;
											k_278174_1623492514 = ((Pathcomponent138212) 3);
										}
										goto LA40;
										LA43: ;
										{
											k_278174_1623492514 = ((Pathcomponent138212) 1);
										}
										LA40: ;
									}
									LA38: ;
									k_278138_1623492514 = k_278174_1623492514;
									p_278139_1623492514 = y_278170_1623492514;
									{
										NIM_BOOL LOC48;
										LOC48 = (NIM_BOOL)0;
										LOC48 = (k_278138_1623492514 == ((Pathcomponent138212) 2));
										if (!(LOC48)) goto LA49;
										LOC48 = !(((NU8)(p_278139_1623492514->data[pos0]) == (NU8)(46)));
										LA49: ;
										if (!LOC48) goto LA50;
										addpackage_278083_1623492514(packages0, p_278139_1623492514);
									}
									LA50: ;
									goto LA13;
								}
								LA30: ;
								{
									int LOC54;
									LOC54 = (int)0;
									LOC54 = lstat(y_278170_1623492514->data, (&s_278172_1623492514));
									if (!(LOC54 < ((NI32) 0))) goto LA55;
									goto LA11;
								}
								LA55: ;
								{
									NIM_BOOL LOC59;
									LOC59 = (NIM_BOOL)0;
									LOC59 = S_ISDIR(s_278172_1623492514.st_mode);
									if (!LOC59) goto LA60;
									k_278174_1623492514 = ((Pathcomponent138212) 2);
								}
								goto LA57;
								LA60: ;
								{
									NIM_BOOL LOC63;
									LOC63 = (NIM_BOOL)0;
									LOC63 = S_ISLNK(s_278172_1623492514.st_mode);
									if (!LOC63) goto LA64;
									k_278174_1623492514 = getsymlinkfilekind_138219_2125978480(y_278170_1623492514);
								}
								goto LA57;
								LA64: ;
								LA57: ;
								k_278138_1623492514 = k_278174_1623492514;
								p_278139_1623492514 = y_278170_1623492514;
								{
									NIM_BOOL LOC68;
									LOC68 = (NIM_BOOL)0;
									LOC68 = (k_278138_1623492514 == ((Pathcomponent138212) 2));
									if (!(LOC68)) goto LA69;
									LOC68 = !(((NU8)(p_278139_1623492514->data[pos0]) == (NU8)(46)));
									LA69: ;
									if (!LOC68) goto LA70;
									addpackage_278083_1623492514(packages0, p_278139_1623492514);
								}
								LA70: ;
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
				int LOC74;
				LOC74 = (int)0;
				LOC74 = closedir(d_278166_1623492514);
			}
			if (T1623492514_2.status != 0) reraiseException();
		}
		LA8: ;
	}
	{
		NimStringDesc* p_278149_1623492514;
		p_278149_1623492514 = (NimStringDesc*)0;
		{
			NimStringDesc* key_278180_1623492514;
			NimStringDesc* val_278182_1623492514;
			key_278180_1623492514 = (NimStringDesc*)0;
			val_278182_1623492514 = (NimStringDesc*)0;
			{
				NI h_278184_1623492514;
				NI HEX3Atmp_278186_1623492514;
				NI res_278188_1623492514;
				h_278184_1623492514 = (NI)0;
				HEX3Atmp_278186_1623492514 = (NI)0;
				HEX3Atmp_278186_1623492514 = ((*packages0).data ? ((*packages0).data->Sup.len-1) : -1);
				res_278188_1623492514 = ((NI) 0);
				{
					while (1) {
						if (!(res_278188_1623492514 <= HEX3Atmp_278186_1623492514)) goto LA79;
						h_278184_1623492514 = res_278188_1623492514;
						{
							NimStringDesc* res_278192_1623492514;
							if (!!((*packages0).data->data[h_278184_1623492514].Field0 == 0)) goto LA82;
							key_278180_1623492514 = (*packages0).data->data[h_278184_1623492514].Field0;
							val_278182_1623492514 = (*packages0).data->data[h_278184_1623492514].Field1;
							{
								if (!eqStrings(val_278182_1623492514, ((NimStringDesc*) &T1623492514_5))) goto LA86;
								res_278192_1623492514 = key_278180_1623492514;
							}
							goto LA84;
							LA86: ;
							{
								NimStringDesc* LOC89;
								LOC89 = (NimStringDesc*)0;
								LOC89 = rawNewString(key_278180_1623492514->Sup.len + val_278182_1623492514->Sup.len + 1);
appendString(LOC89, key_278180_1623492514);
appendChar(LOC89, 45);
appendString(LOC89, val_278182_1623492514);
								res_278192_1623492514 = LOC89;
							}
							LA84: ;
							p_278149_1623492514 = res_278192_1623492514;
							addnimblepath_278107_1623492514(p_278149_1623492514, info0);
						}
						LA82: ;
						res_278188_1623492514 += ((NI) 1);
					} LA79: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_278193_1623492514)(NimStringDesc* path0, Tlineinfo193336 info0) {
	addpathrec_278112_1623492514(path0, info0);
	addnimblepath_278107_1623492514(path0, info0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

