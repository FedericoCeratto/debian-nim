/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo189336 Tlineinfo189336;
typedef struct Tlinkedlist147013 Tlinkedlist147013;
typedef struct Tlistentry147007 Tlistentry147007;
typedef struct Stringtableobj152608 Stringtableobj152608;
typedef struct Win32finddata115413 Win32finddata115413;
typedef struct Filetime114433 Filetime114433;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Keyvaluepairseq152606 Keyvaluepairseq152606;
typedef struct Keyvaluepair152604 Keyvaluepair152604;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo189336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist147013  {
Tlistentry147007* head;
Tlistentry147007* tail;
NI counter;
};
typedef NU8 Stringtablemode152602;
typedef NU8 Pathcomponent136609;
struct  Filetime114433  {
NI32 dwlowdatetime;
NI32 dwhighdatetime;
};
typedef NI16 TY115424[260];
typedef NI16 TY115428[14];
struct  Win32finddata115413  {
NI32 dwfileattributes;
Filetime114433 ftcreationtime;
Filetime114433 ftlastaccesstime;
Filetime114433 ftlastwritetime;
NI32 nfilesizehigh;
NI32 nfilesizelow;
NI32 dwreserved0;
NI32 dwreserved1;
TY115424 cfilename;
TY115428 calternatefilename;
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
typedef N_STDCALL_PTR(NI32, TY115438) (NI hfindfile0, Win32finddata115413* lpfindfiledata0);
typedef N_STDCALL_PTR(void, TY115602) (NI hfindfile0);
struct  Stringtableobj152608  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq152606* data;
Stringtablemode152602 mode;
};
struct Keyvaluepair152604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
typedef NU16 Tmsgkind189002;
struct  Tlistentry147007  {
  TNimObject Sup;
Tlistentry147007* prev;
Tlistentry147007* next;
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
struct Keyvaluepairseq152606 {
  TGenericSeq Sup;
  Keyvaluepair152604 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_147213_3771138726)(Tlinkedlist147013 list0, NimStringDesc* data0);
N_NIMCALL(void, prependstr_147413_3771138726)(Tlinkedlist147013* list0, NimStringDesc* data0);
N_NIMCALL(void, addpathrec_274112_1623492514)(NimStringDesc* dir0, Tlineinfo189336 info0);
N_NIMCALL(Stringtableobj152608*, nstnewStringTable)(Stringtablemode152602 mode0);
N_NIMCALL(NI, findfirstfile_127616_2125978480)(NimStringDesc* a0, Win32finddata115413* b0);
N_NIMCALL(NimStringDesc*, HEX2F_124074_2125978480)(NimStringDesc* head0, NimStringDesc* tail0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
static N_INLINE(NIM_BOOL, skipfinddata_127634_2125978480)(Win32finddata115413* f0);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path0);
N_NIMCALL(NimStringDesc*, HEX24_83197_1689653243)(NI16* s0);
N_NIMCALL(void, addpackage_274083_1623492514)(Stringtableobj152608* packages0, NimStringDesc* p0);
N_NIMCALL(NI, versionsplitpos_274007_1623492514)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_78810_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_274033_1623492514)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_7495_1689653243)(void* a0, void* b0, NI size0);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s0, NI* number0, NI start0);
N_NIMCALL(NimStringDesc*, getordefault_153214_603679043)(Stringtableobj152608* t0, NimStringDesc* key0);
N_NIMCALL(void, nstPut)(Stringtableobj152608* t0, NimStringDesc* key0, NimStringDesc* val0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, addnimblepath_274107_1623492514)(NimStringDesc* p0, Tlineinfo189336 info0);
N_NIMCALL(void, message_194095_155036129)(Tlineinfo189336 info0, Tmsgkind189002 msg0, NimStringDesc* arg0);
STRING_LITERAL(T1623492514_2, "*", 1);
STRING_LITERAL(T1623492514_4, "head", 4);
extern Tlinkedlist147013 searchpaths_168134_2607990831;
extern TSafePoint* exchandler_18837_1689653243;
extern TY115438 Dl_115437;
extern TY115602 Dl_115601;
extern Tlinkedlist147013 lazypaths_168135_2607990831;

N_NIMCALL(void, addpath_274002_1623492514)(NimStringDesc* path0, Tlineinfo189336 info0) {
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_147213_3771138726(searchpaths_168134_2607990831, path0);
		if (!!(LOC3)) goto LA4;
		prependstr_147413_3771138726((&searchpaths_168134_2607990831), path0);
	}
	LA4: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_18837_1689653243;
	exchandler_18837_1689653243 = s0;
}

static N_INLINE(NIM_BOOL, skipfinddata_127634_2125978480)(Win32finddata115413* f0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC3;
	NIM_BOOL LOC5;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = (((NI) ((*f0).cfilename[(((NI) 0))- 0])) == ((NI) 46));
	if (!(LOC1)) goto LA2;
	LOC3 = (NIM_BOOL)0;
	LOC3 = (((NI) ((*f0).cfilename[(((NI) 1))- 0])) == ((NI) 0));
	if (LOC3) goto LA4;
	LOC5 = (NIM_BOOL)0;
	LOC5 = (((NI) ((*f0).cfilename[(((NI) 1))- 0])) == ((NI) 46));
	if (!(LOC5)) goto LA6;
	LOC5 = (((NI) ((*f0).cfilename[(((NI) 2))- 0])) == ((NI) 0));
	LA6: ;
	LOC3 = LOC5;
	LA4: ;
	LOC1 = LOC3;
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(NI, versionsplitpos_274007_1623492514)(NimStringDesc* s0) {
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_274033_1623492514)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NI i0;
	NI j0;
	NI vera0;
	NI verb0;
{	result0 = (NIM_BOOL)0;
	{
		if (!eqStrings(a0, ((NimStringDesc*) &T1623492514_4))) goto LA3;
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

N_NIMCALL(void, addpackage_274083_1623492514)(Stringtableobj152608* packages0, NimStringDesc* p0) {
	NI x0;
	NimStringDesc* name0;
	x0 = versionsplitpos_274007_1623492514(p0);
	name0 = copyStrLast(p0, ((NI) 0), (NI)(x0 - ((NI) 1)));
	{
		NimStringDesc* version0;
		if (!(x0 < (p0 ? p0->Sup.len : 0))) goto LA3;
		version0 = copyStr(p0, (NI)(x0 + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = (NimStringDesc*)0;
			LOC7 = getordefault_153214_603679043(packages0, name0);
			LOC8 = (NIM_BOOL)0;
			LOC8 = HEX3CHEX2E_274033_1623492514(LOC7, version0);
			if (!LOC8) goto LA9;
			nstPut(packages0, name0, version0);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages0, name0, ((NimStringDesc*) &T1623492514_4));
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

N_NIMCALL(void, addnimblepath_274107_1623492514)(NimStringDesc* p0, Tlineinfo189336 info0) {
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_147213_3771138726(searchpaths_168134_2607990831, p0);
		if (!!(LOC3)) goto LA4;
		message_194095_155036129(info0, ((Tmsgkind189002) 280), p0);
		prependstr_147413_3771138726((&lazypaths_168135_2607990831), p0);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_274112_1623492514)(NimStringDesc* dir0, Tlineinfo189336 info0) {
	Stringtableobj152608* packages0;
	NI pos0;
	packages0 = nstnewStringTable(((Stringtablemode152602) 2));
	pos0 = (NI)((dir0 ? dir0->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir0->data[pos0])) == ((NU8)(92)) || ((NU8)(dir0->data[pos0])) == ((NU8)(47)))) goto LA3;
		pos0 += ((NI) 1);
	}
	LA3: ;
	{
		Pathcomponent136609 k_274138_1623492514;
		NimStringDesc* p_274139_1623492514;
		Win32finddata115413 f_274165_1623492514;
		NI h_274167_1623492514;
		NimStringDesc* LOC6;
		k_274138_1623492514 = (Pathcomponent136609)0;
		p_274139_1623492514 = (NimStringDesc*)0;
		memset((void*)(&f_274165_1623492514), 0, sizeof(f_274165_1623492514));
		LOC6 = (NimStringDesc*)0;
		LOC6 = HEX2F_124074_2125978480(dir0, ((NimStringDesc*) &T1623492514_2));
		h_274167_1623492514 = findfirstfile_127616_2125978480(LOC6, (&f_274165_1623492514));
		{
			TSafePoint T1623492514_3;
			if (!!((h_274167_1623492514 == ((NI) -1)))) goto LA9;
			pushSafePoint(&T1623492514_3);
			T1623492514_3.status = setjmp(T1623492514_3.context);
			if (T1623492514_3.status == 0) {
				{
					while (1) {
						Pathcomponent136609 volatile k_274169_1623492514;
						k_274169_1623492514 = ((Pathcomponent136609) 0);
						{
							NIM_BOOL LOC16;
							NimStringDesc* xx_274171_1623492514;
							LOC16 = (NIM_BOOL)0;
							LOC16 = skipfinddata_127634_2125978480((&f_274165_1623492514));
							if (!!(LOC16)) goto LA17;
							{
								if (!!(((NI32)(f_274165_1623492514.dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA21;
								k_274169_1623492514 = ((Pathcomponent136609) 2);
							}
							LA21: ;
							{
								if (!!(((NI32)(f_274165_1623492514.dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA25;
								k_274169_1623492514 = (Pathcomponent136609)(k_274169_1623492514 + ((NI) 1));
							}
							LA25: ;
							{
								NimStringDesc* LOC31;
								if (!NIM_FALSE) goto LA29;
								LOC31 = (NimStringDesc*)0;
								LOC31 = HEX24_83197_1689653243(((NI16*) ((&f_274165_1623492514.cfilename[(((NI) 0))- 0]))));
								xx_274171_1623492514 = nosextractFilename(LOC31);
							}
							goto LA27;
							LA29: ;
							{
								NimStringDesc* LOC33;
								NimStringDesc* LOC34;
								LOC33 = (NimStringDesc*)0;
								LOC33 = HEX24_83197_1689653243(((NI16*) ((&f_274165_1623492514.cfilename[(((NI) 0))- 0]))));
								LOC34 = (NimStringDesc*)0;
								LOC34 = nosextractFilename(LOC33);
								xx_274171_1623492514 = HEX2F_124074_2125978480(dir0, LOC34);
							}
							LA27: ;
							k_274138_1623492514 = k_274169_1623492514;
							p_274139_1623492514 = xx_274171_1623492514;
							{
								NIM_BOOL LOC37;
								LOC37 = (NIM_BOOL)0;
								LOC37 = (k_274138_1623492514 == ((Pathcomponent136609) 2));
								if (!(LOC37)) goto LA38;
								LOC37 = !(((NU8)(p_274139_1623492514->data[pos0]) == (NU8)(46)));
								LA38: ;
								if (!LOC37) goto LA39;
								addpackage_274083_1623492514(packages0, p_274139_1623492514);
							}
							LA39: ;
						}
						LA17: ;
						{
							NI32 LOC43;
							LOC43 = (NI32)0;
							LOC43 = Dl_115437(h_274167_1623492514, (&f_274165_1623492514));
							if (!(LOC43 == ((NI32) 0))) goto LA44;
							goto LA12;
						}
						LA44: ;
					}
				} LA12: ;
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				Dl_115601(h_274167_1623492514);
			}
			if (T1623492514_3.status != 0) reraiseException();
		}
		LA9: ;
	}
	{
		NimStringDesc* p_274149_1623492514;
		p_274149_1623492514 = (NimStringDesc*)0;
		{
			NimStringDesc* key_274179_1623492514;
			NimStringDesc* val_274181_1623492514;
			key_274179_1623492514 = (NimStringDesc*)0;
			val_274181_1623492514 = (NimStringDesc*)0;
			{
				NI h_274183_1623492514;
				NI HEX3Atmp_274185_1623492514;
				NI res_274187_1623492514;
				h_274183_1623492514 = (NI)0;
				HEX3Atmp_274185_1623492514 = (NI)0;
				HEX3Atmp_274185_1623492514 = ((*packages0).data ? ((*packages0).data->Sup.len-1) : -1);
				res_274187_1623492514 = ((NI) 0);
				{
					while (1) {
						if (!(res_274187_1623492514 <= HEX3Atmp_274185_1623492514)) goto LA52;
						h_274183_1623492514 = res_274187_1623492514;
						{
							NimStringDesc* res_274191_1623492514;
							if (!!((*packages0).data->data[h_274183_1623492514].Field0 == 0)) goto LA55;
							key_274179_1623492514 = (*packages0).data->data[h_274183_1623492514].Field0;
							val_274181_1623492514 = (*packages0).data->data[h_274183_1623492514].Field1;
							{
								if (!eqStrings(val_274181_1623492514, ((NimStringDesc*) &T1623492514_4))) goto LA59;
								res_274191_1623492514 = key_274179_1623492514;
							}
							goto LA57;
							LA59: ;
							{
								NimStringDesc* LOC62;
								LOC62 = (NimStringDesc*)0;
								LOC62 = rawNewString(key_274179_1623492514->Sup.len + val_274181_1623492514->Sup.len + 1);
appendString(LOC62, key_274179_1623492514);
appendChar(LOC62, 45);
appendString(LOC62, val_274181_1623492514);
								res_274191_1623492514 = LOC62;
							}
							LA57: ;
							p_274149_1623492514 = res_274191_1623492514;
							addnimblepath_274107_1623492514(p_274149_1623492514, info0);
						}
						LA55: ;
						res_274187_1623492514 += ((NI) 1);
					} LA52: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_274192_1623492514)(NimStringDesc* path0, Tlineinfo189336 info0) {
	addpathrec_274112_1623492514(path0, info0);
	addnimblepath_274107_1623492514(path0, info0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

