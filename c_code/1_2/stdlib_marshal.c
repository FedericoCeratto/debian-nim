/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Streamobj154418 Streamobj154418;
typedef struct Debuginfo199010 Debuginfo199010;
typedef struct Intset242031 Intset242031;
typedef struct Trunk242027 Trunk242027;
typedef struct Trunkseq242029 Trunkseq242029;
typedef struct TY199022 TY199022;
typedef struct TY199024 TY199024;
typedef struct Any200901 Any200901;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY205001 TY205001;
typedef struct TY205002 TY205002;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Filenamemapping199006 Filenamemapping199006;
typedef struct Enumdesc199008 Enumdesc199008;
typedef struct TY199018 TY199018;
typedef struct TY199019 TY199019;
struct  Intset242031  {
NI counter;
NI max;
Trunk242027* head;
Trunkseq242029* data;
};
struct  Debuginfo199010  {
NI version;
TY199022* files;
TY199024* enums;
NIM_BOOL conflicts;
};
struct  Any200901  {
void* value;
void* rawtypeptr;
};
typedef NU8 Anykind200899;
typedef NU8 Tnimkind200803;
typedef NU8 Tnimtypeflag200809Set;
typedef N_NIMCALL_PTR(void, TY200888) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY200893) (void* p0);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY205002 {
NCSTRING Field0;
Any200901 Field1;
};
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
typedef NU8 Tnimnodekind200805;
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY154419) (Streamobj154418* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY154423) (Streamobj154418* s0);
typedef N_NIMCALL_PTR(void, TY154427) (Streamobj154418* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY154432) (Streamobj154418* s0);
typedef N_NIMCALL_PTR(NI, TY154436) (Streamobj154418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY154442) (Streamobj154418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY154448) (Streamobj154418* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY154454) (Streamobj154418* s0);
struct  Streamobj154418  {
  TNimObject Sup;
TY154419 closeimpl;
TY154423 atendimpl;
TY154427 setpositionimpl;
TY154432 getpositionimpl;
TY154436 readdataimpl;
TY154442 peekdataimpl;
TY154448 writedataimpl;
TY154454 flushimpl;
};
typedef NI TY29819[8];
struct  Trunk242027  {
Trunk242027* next;
NI key;
TY29819 bits;
};
struct  Filenamemapping199006  {
NimStringDesc* package;
NimStringDesc* file;
NU32 mangled;
};
struct  Enumdesc199008  {
NI size;
NU32 owner;
NI id;
NimStringDesc* name;
TY199018* values;
};
struct TY199019 {
NimStringDesc* Field0;
NI Field1;
};
struct TY205001 {
  TGenericSeq Sup;
  TY205002 data[SEQ_DECL_SIZE];
};
struct Trunkseq242029 {
  TGenericSeq Sup;
  Trunk242027* data[SEQ_DECL_SIZE];
};
struct TY199022 {
  TGenericSeq Sup;
  Filenamemapping199006 data[SEQ_DECL_SIZE];
};
struct TY199024 {
  TGenericSeq Sup;
  Enumdesc199008 data[SEQ_DECL_SIZE];
};
struct TY199018 {
  TGenericSeq Sup;
  TY199019 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, initintset_242885_2627731572)(Intset242031* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, storeany_244006_1318663698)(Streamobj154418* s0, Any200901 a0, Intset242031* stored0);
static N_INLINE(Anykind200899, kind_201809_1760177012)(Any200901 x0);
N_NIMCALL(void, write_154570_1780494535)(Streamobj154418* s0, NimStringDesc* x0);
N_NIMCALL(NIM_BOOL, getbool_210404_1760177012)(Any200901 x0);
N_NIMCALL(NimStringDesc*, nimBoolToStr)(NIM_BOOL x0);
N_NIMCALL(NIM_CHAR, getchar_210212_1760177012)(Any200901 x0);
N_NIMCALL(NimStringDesc*, escapejson_239649_3111005044)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NIM_BOOL, isnil_203612_1760177012)(Any200901 x0);
N_NIMCALL(NI, len_203416_1760177012)(Any200901 x0);
N_NIMCALL(Any200901, HEX5BHEX5D_202615_1760177012)(Any200901 x0, NI i0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, fieldsaux_204202_1760177012)(void* p0, TNimNode* n0, TY205001** ret0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(Any200901, skiprange_210604_1760177012)(Any200901 x0);
N_NIMCALL(NimStringDesc*, getenumfield_211242_1760177012)(Any200901 x0);
N_NIMCALL(void*, getpointer_203802_1760177012)(Any200901 x0);
N_NIMCALL(NIM_BOOL, containsorincl_242862_2627731572)(Intset242031* s0, NI key0);
static N_INLINE(NI, ptrtoint_244001_1318663698)(void* x0);
N_NIMCALL(Any200901, HEX5BHEX5D_206456_1760177012)(Any200901 x0);
N_NIMCALL(NimStringDesc*, getstring_212206_1760177012)(Any200901 x0);
N_NIMCALL(NI64, getbiggestint_208003_1760177012)(Any200901 x0);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x0);
N_NIMCALL(NF, getbiggestfloat_211803_1760177012)(Any200901 x0);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f0);
static N_INLINE(Any200901, toany_246018_1760177012)(Debuginfo199010* x0);
static N_INLINE(Any200901, newany_201636_1760177012)(void* value0, TNimType* rawtype0);
STRING_LITERAL(TMP4814, "null", 4);
STRING_LITERAL(TMP4815, "[", 1);
STRING_LITERAL(TMP4816, ", ", 2);
STRING_LITERAL(TMP4820, "]", 1);
STRING_LITERAL(TMP4821, "{", 1);
STRING_LITERAL(TMP4825, ": ", 2);
STRING_LITERAL(TMP4826, "}", 1);
extern TNimType NTI205001; /* seq[tuple[name: cstring, any: Any]] */
extern TNimType NTI199010; /* DebugInfo */

static N_INLINE(Anykind200899, kind_201809_1760177012)(Any200901 x0) {
	Anykind200899 result0;
	result0 = (Anykind200899)0;
	result0 = ((Anykind200899) ((*((TNimType*) (x0.rawtypeptr))).kind));
	return result0;
}

static N_INLINE(NI, ptrtoint_244001_1318663698)(void* x0) {
	NI result0;
	result0 = (NI)0;
	result0 = ((NI) (x0));
	return result0;
}

N_NIMCALL(void, storeany_244006_1318663698)(Streamobj154418* s0, Any200901 a0, Intset242031* stored0) {
	Anykind200899 LOC1;
	LOC1 = (Anykind200899)0;
	LOC1 = kind_201809_1760177012(a0);
	switch (LOC1) {
	case ((Anykind200899) 0):
	{
	}
	break;
	case ((Anykind200899) 1):
	{
		NIM_BOOL LOC4;
		NimStringDesc* LOC5;
		LOC4 = (NIM_BOOL)0;
		LOC4 = getbool_210404_1760177012(a0);
		LOC5 = (NimStringDesc*)0;
		LOC5 = nimBoolToStr(LOC4);
		write_154570_1780494535(s0, LOC5);
	}
	break;
	case ((Anykind200899) 2):
	{
		NIM_CHAR ch0;
		ch0 = getchar_210212_1760177012(a0);
		{
			NimStringDesc* LOC11;
			NimStringDesc* LOC12;
			if (!((NU8)(ch0) < (NU8)(128))) goto LA9;
			LOC11 = (NimStringDesc*)0;
			LOC11 = nimCharToStr(ch0);
			LOC12 = (NimStringDesc*)0;
			LOC12 = escapejson_239649_3111005044(LOC11);
			write_154570_1780494535(s0, LOC12);
		}
		goto LA7;
		LA9: ;
		{
			NimStringDesc* LOC14;
			LOC14 = (NimStringDesc*)0;
			LOC14 = nimIntToStr(((NI) (((NU8)(ch0)))));
			write_154570_1780494535(s0, LOC14);
		}
		LA7: ;
	}
	break;
	case ((Anykind200899) 16):
	case ((Anykind200899) 24):
	{
		{
			NIM_BOOL LOC18;
			Anykind200899 LOC19;
			LOC18 = (NIM_BOOL)0;
			LOC19 = (Anykind200899)0;
			LOC19 = kind_201809_1760177012(a0);
			LOC18 = (LOC19 == ((Anykind200899) 24));
			if (!(LOC18)) goto LA20;
			LOC18 = isnil_203612_1760177012(a0);
			LA20: ;
			if (!LOC18) goto LA21;
			write_154570_1780494535(s0, ((NimStringDesc*) &TMP4814));
		}
		goto LA16;
		LA21: ;
		{
			write_154570_1780494535(s0, ((NimStringDesc*) &TMP4815));
			{
				NI i_244220_1318663698;
				NI HEX3Atmp_244248_1318663698;
				NI LOC25;
				NI res_244251_1318663698;
				i_244220_1318663698 = (NI)0;
				HEX3Atmp_244248_1318663698 = (NI)0;
				LOC25 = (NI)0;
				LOC25 = len_203416_1760177012(a0);
				HEX3Atmp_244248_1318663698 = (NI)(LOC25 - ((NI) 1));
				res_244251_1318663698 = ((NI) 0);
				{
					while (1) {
						Any200901 LOC32;
						if (!(res_244251_1318663698 <= HEX3Atmp_244248_1318663698)) goto LA27;
						i_244220_1318663698 = res_244251_1318663698;
						{
							if (!(((NI) 0) < i_244220_1318663698)) goto LA30;
							write_154570_1780494535(s0, ((NimStringDesc*) &TMP4816));
						}
						LA30: ;
						LOC32 = HEX5BHEX5D_202615_1760177012(a0, i_244220_1318663698);
						storeany_244006_1318663698(s0, LOC32, stored0);
						res_244251_1318663698 += ((NI) 1);
					} LA27: ;
				}
			}
			write_154570_1780494535(s0, ((NimStringDesc*) &TMP4820));
		}
		LA16: ;
	}
	break;
	case ((Anykind200899) 17):
	case ((Anykind200899) 18):
	{
		NI i0;
		write_154570_1780494535(s0, ((NimStringDesc*) &TMP4821));
		i0 = ((NI) 0);
		{
			NimStringDesc* key_244222_1318663698;
			Any200901 val_244223_1318663698;
			void* p_244260_1318663698;
			TNimType* t_244262_1318663698;
			TY205001* ret_244265_1318663698;
			key_244222_1318663698 = (NimStringDesc*)0;
			memset((void*)(&val_244223_1318663698), 0, sizeof(val_244223_1318663698));
			p_244260_1318663698 = a0.value;
			t_244262_1318663698 = ((TNimType*) (a0.rawtypeptr));
			ret_244265_1318663698 = (TY205001*) newSeq((&NTI205001), 0);
			{
				if (!((*t_244262_1318663698).kind == ((Tnimkind200803) 17))) goto LA37;
				{
					while (1) {
						fieldsaux_204202_1760177012(p_244260_1318663698, (*t_244262_1318663698).node, (&ret_244265_1318663698));
						t_244262_1318663698 = (*t_244262_1318663698).base;
						{
							if (!t_244262_1318663698 == 0) goto LA43;
							goto LA39;
						}
						LA43: ;
					}
				} LA39: ;
			}
			goto LA35;
			LA37: ;
			{
				fieldsaux_204202_1760177012(p_244260_1318663698, (*t_244262_1318663698).node, (&ret_244265_1318663698));
			}
			LA35: ;
			{
				NCSTRING name_244267_1318663698;
				Any200901 any_244269_1318663698;
				NI i_244271_1318663698;
				NI L_244273_1318663698;
				name_244267_1318663698 = (NCSTRING)0;
				memset((void*)(&any_244269_1318663698), 0, sizeof(any_244269_1318663698));
				i_244271_1318663698 = ((NI) 0);
				L_244273_1318663698 = (ret_244265_1318663698 ? ret_244265_1318663698->Sup.len : 0);
				{
					while (1) {
						NimStringDesc* LOC53;
						if (!(i_244271_1318663698 < L_244273_1318663698)) goto LA48;
						name_244267_1318663698 = ret_244265_1318663698->data[i_244271_1318663698].Field0;
						any_244269_1318663698 = ret_244265_1318663698->data[i_244271_1318663698].Field1;
						key_244222_1318663698 = cstrToNimstr(name_244267_1318663698);
						val_244223_1318663698 = any_244269_1318663698;
						{
							if (!(((NI) 0) < i0)) goto LA51;
							write_154570_1780494535(s0, ((NimStringDesc*) &TMP4816));
						}
						LA51: ;
						LOC53 = (NimStringDesc*)0;
						LOC53 = escapejson_239649_3111005044(key_244222_1318663698);
						write_154570_1780494535(s0, LOC53);
						write_154570_1780494535(s0, ((NimStringDesc*) &TMP4825));
						storeany_244006_1318663698(s0, val_244223_1318663698, stored0);
						i0 += ((NI) 1);
						i_244271_1318663698 += ((NI) 1);
					} LA48: ;
				}
			}
		}
		write_154570_1780494535(s0, ((NimStringDesc*) &TMP4826));
	}
	break;
	case ((Anykind200899) 19):
	{
		NI i0;
		write_154570_1780494535(s0, ((NimStringDesc*) &TMP4815));
		i0 = ((NI) 0);
		{
			NI e_244234_1318663698;
			TNimType* typ_244280_1318663698;
			void* p_244283_1318663698;
			NI64 u_244285_1318663698;
			e_244234_1318663698 = (NI)0;
			typ_244280_1318663698 = ((TNimType*) (a0.rawtypeptr));
			p_244283_1318663698 = a0.value;
			u_244285_1318663698 = (NI64)0;
			switch ((*typ_244280_1318663698).size) {
			case ((NI) 1):
			{
				u_244285_1318663698 = ((NI64)(NU64)(NU8)((*((NI8*) (p_244283_1318663698)))));
			}
			break;
			case ((NI) 2):
			{
				u_244285_1318663698 = ((NI64)(NU64)(NU16)((*((NI16*) (p_244283_1318663698)))));
			}
			break;
			case ((NI) 4):
			{
				u_244285_1318663698 = ((NI64)(NU64)(NU32)((*((NI32*) (p_244283_1318663698)))));
			}
			break;
			case ((NI) 8):
			{
				u_244285_1318663698 = (*((NI64*) (p_244283_1318663698)));
			}
			break;
			default:
			{
				NI8* a_244291_1318663698;
				a_244291_1318663698 = ((NI8*) (p_244283_1318663698));
				{
					NI i_244294_1318663698;
					NI HEX3Atmp_244296_1318663698;
					NI res_244298_1318663698;
					i_244294_1318663698 = (NI)0;
					HEX3Atmp_244296_1318663698 = (NI)0;
					HEX3Atmp_244296_1318663698 = (NI)((NI)((*typ_244280_1318663698).size * ((NI) 8)) - ((NI) 1));
					res_244298_1318663698 = ((NI) 0);
					{
						while (1) {
							if (!(res_244298_1318663698 <= HEX3Atmp_244296_1318663698)) goto LA63;
							i_244294_1318663698 = res_244298_1318663698;
							{
								NimStringDesc* LOC72;
								if (!!(((NI)(((NI)(NU)(NU8)(a_244291_1318663698[((NI)(i_244294_1318663698 / ((NI) 8)))- 0])) & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(i_244294_1318663698 % ((NI) 8))))))) == ((NI) 0)))) goto LA66;
								e_244234_1318663698 = (NI)(i_244294_1318663698 + (*(*typ_244280_1318663698).node).len);
								{
									if (!(((NI) 0) < i0)) goto LA70;
									write_154570_1780494535(s0, ((NimStringDesc*) &TMP4816));
								}
								LA70: ;
								LOC72 = (NimStringDesc*)0;
								LOC72 = nimIntToStr(e_244234_1318663698);
								write_154570_1780494535(s0, LOC72);
								i0 += ((NI) 1);
							}
							LA66: ;
							res_244298_1318663698 += ((NI) 1);
						} LA63: ;
					}
				}
			}
			break;
			}
			{
				if (!((*typ_244280_1318663698).size <= ((NI) 8))) goto LA75;
				{
					NI i_244302_1318663698;
					NI res_244304_1318663698;
					i_244302_1318663698 = (NI)0;
					res_244304_1318663698 = ((NI) 0);
					{
						while (1) {
							if (!(res_244304_1318663698 <= ((NI) 63))) goto LA79;
							i_244302_1318663698 = res_244304_1318663698;
							{
								NimStringDesc* LOC88;
								if (!!(((NI64)(u_244285_1318663698 & (NI64)((NU64)(IL64(1)) << (NU64)(((NI64) (i_244302_1318663698))))) == IL64(0)))) goto LA82;
								e_244234_1318663698 = (NI)(i_244302_1318663698 + (*(*typ_244280_1318663698).node).len);
								{
									if (!(((NI) 0) < i0)) goto LA86;
									write_154570_1780494535(s0, ((NimStringDesc*) &TMP4816));
								}
								LA86: ;
								LOC88 = (NimStringDesc*)0;
								LOC88 = nimIntToStr(e_244234_1318663698);
								write_154570_1780494535(s0, LOC88);
								i0 += ((NI) 1);
							}
							LA82: ;
							res_244304_1318663698 += ((NI) 1);
						} LA79: ;
					}
				}
			}
			LA75: ;
		}
		write_154570_1780494535(s0, ((NimStringDesc*) &TMP4820));
	}
	break;
	case ((Anykind200899) 20):
	{
		Any200901 LOC90;
		LOC90 = skiprange_210604_1760177012(a0);
		storeany_244006_1318663698(s0, LOC90, stored0);
	}
	break;
	case ((Anykind200899) 14):
	{
		NimStringDesc* LOC92;
		NimStringDesc* LOC93;
		LOC92 = (NimStringDesc*)0;
		LOC92 = getenumfield_211242_1760177012(a0);
		LOC93 = (NimStringDesc*)0;
		LOC93 = escapejson_239649_3111005044(LOC92);
		write_154570_1780494535(s0, LOC93);
	}
	break;
	case ((Anykind200899) 21):
	case ((Anykind200899) 22):
	{
		void* x0;
		x0 = getpointer_203802_1760177012(a0);
		{
			if (!x0 == 0) goto LA97;
			write_154570_1780494535(s0, ((NimStringDesc*) &TMP4814));
		}
		goto LA95;
		LA97: ;
		{
			NI LOC100;
			NIM_BOOL LOC101;
			NI LOC104;
			NimStringDesc* LOC105;
			LOC100 = (NI)0;
			LOC100 = ptrtoint_244001_1318663698(x0);
			LOC101 = (NIM_BOOL)0;
			LOC101 = containsorincl_242862_2627731572(stored0, LOC100);
			if (!LOC101) goto LA102;
			LOC104 = (NI)0;
			LOC104 = ptrtoint_244001_1318663698(x0);
			LOC105 = (NimStringDesc*)0;
			LOC105 = nimIntToStr(LOC104);
			write_154570_1780494535(s0, LOC105);
		}
		goto LA95;
		LA102: ;
		{
			NI LOC107;
			NimStringDesc* LOC108;
			Any200901 LOC109;
			write_154570_1780494535(s0, ((NimStringDesc*) &TMP4815));
			LOC107 = (NI)0;
			LOC107 = ptrtoint_244001_1318663698(x0);
			LOC108 = (NimStringDesc*)0;
			LOC108 = nimIntToStr(LOC107);
			write_154570_1780494535(s0, LOC108);
			write_154570_1780494535(s0, ((NimStringDesc*) &TMP4816));
			LOC109 = HEX5BHEX5D_206456_1760177012(a0);
			storeany_244006_1318663698(s0, LOC109, stored0);
			write_154570_1780494535(s0, ((NimStringDesc*) &TMP4820));
		}
		LA95: ;
	}
	break;
	case ((Anykind200899) 25):
	case ((Anykind200899) 26):
	case ((Anykind200899) 29):
	{
		void* LOC111;
		NI LOC112;
		NimStringDesc* LOC113;
		LOC111 = (void*)0;
		LOC111 = getpointer_203802_1760177012(a0);
		LOC112 = (NI)0;
		LOC112 = ptrtoint_244001_1318663698(LOC111);
		LOC113 = (NimStringDesc*)0;
		LOC113 = nimIntToStr(LOC112);
		write_154570_1780494535(s0, LOC113);
	}
	break;
	case ((Anykind200899) 28):
	{
		NimStringDesc* x0;
		x0 = getstring_212206_1760177012(a0);
		{
			if (!x0 == 0) goto LA117;
			write_154570_1780494535(s0, ((NimStringDesc*) &TMP4814));
		}
		goto LA115;
		LA117: ;
		{
			NimStringDesc* LOC120;
			LOC120 = (NimStringDesc*)0;
			LOC120 = escapejson_239649_3111005044(x0);
			write_154570_1780494535(s0, LOC120);
		}
		LA115: ;
	}
	break;
	case ((Anykind200899) 31) ... ((Anykind200899) 35):
	case ((Anykind200899) 40) ... ((Anykind200899) 44):
	{
		NI64 LOC122;
		NimStringDesc* LOC123;
		LOC122 = (NI64)0;
		LOC122 = getbiggestint_208003_1760177012(a0);
		LOC123 = (NimStringDesc*)0;
		LOC123 = nimInt64ToStr(LOC122);
		write_154570_1780494535(s0, LOC123);
	}
	break;
	case ((Anykind200899) 36) ... ((Anykind200899) 39):
	{
		NF LOC125;
		NimStringDesc* LOC126;
		LOC125 = (NF)0;
		LOC125 = getbiggestfloat_211803_1760177012(a0);
		LOC126 = (NimStringDesc*)0;
		LOC126 = nimFloatToStr(LOC125);
		write_154570_1780494535(s0, LOC126);
	}
	break;
	}
}

static N_INLINE(Any200901, newany_201636_1760177012)(void* value0, TNimType* rawtype0) {
	Any200901 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = value0;
	result0.rawtypeptr = ((void*) (rawtype0));
	return result0;
}

static N_INLINE(Any200901, toany_246018_1760177012)(Debuginfo199010* x0) {
	Any200901 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0 = newany_201636_1760177012(((void*) (x0)), ((TNimType*) ((&NTI199010))));
	return result0;
}

N_NIMCALL(void, store_246008_1318663698)(Streamobj154418* s0, Debuginfo199010* data0) {
	Intset242031 stored0;
	Debuginfo199010 d0;
	Any200901 LOC1;
	memset((void*)(&stored0), 0, sizeof(stored0));
	chckNil((void*)(&stored0));
	memset((void*)(&stored0), 0, sizeof(stored0));
	initintset_242885_2627731572((&stored0));
	memset((void*)(&d0), 0, sizeof(d0));
	d0.version = (*data0).version;
	d0.files = (*data0).files;
	d0.enums = (*data0).enums;
	d0.conflicts = (*data0).conflicts;
	LOC1 = toany_246018_1760177012((&d0));
	storeany_244006_1318663698(s0, LOC1, (&stored0));
}
NIM_EXTERNC N_NOINLINE(void, stdlib_marshalInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_marshalDatInit000)(void) {
}

