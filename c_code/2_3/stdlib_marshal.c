/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Streamobj157818 Streamobj157818;
typedef struct Debuginfo205009 Debuginfo205009;
typedef struct Intset270030 Intset270030;
typedef struct Trunk270026 Trunk270026;
typedef struct Trunkseq270028 Trunkseq270028;
typedef struct TY205021 TY205021;
typedef struct TY205023 TY205023;
typedef struct Any207101 Any207101;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY211201 TY211201;
typedef struct TY211202 TY211202;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Filenamemapping205005 Filenamemapping205005;
typedef struct Enumdesc205007 Enumdesc205007;
typedef struct TY205017 TY205017;
typedef struct TY205018 TY205018;
struct  Intset270030  {
NI counter;
NI max;
Trunk270026* head;
Trunkseq270028* data;
};
struct  Debuginfo205009  {
NI version;
TY205021* files;
TY205023* enums;
NIM_BOOL conflicts;
};
struct  Any207101  {
void* value;
void* rawtypeptr;
};
typedef NU8 Anykind207099;
typedef NU8 Tnimkind207003;
typedef NU8 Tnimtypeflag207009Set;
typedef N_NIMCALL_PTR(void, TY207088) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY207093) (void* p0);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY211202 {
NCSTRING Field0;
Any207101 Field1;
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
typedef NU8 Tnimnodekind207005;
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY157819) (Streamobj157818* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY157823) (Streamobj157818* s0);
typedef N_NIMCALL_PTR(void, TY157827) (Streamobj157818* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY157832) (Streamobj157818* s0);
typedef N_NIMCALL_PTR(NI, TY157836) (Streamobj157818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY157842) (Streamobj157818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY157848) (Streamobj157818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY157854) (Streamobj157818* s0);
struct  Streamobj157818  {
  TNimObject Sup;
TY157819 closeimpl;
TY157823 atendimpl;
TY157827 setpositionimpl;
TY157832 getpositionimpl;
TY157836 readdataimpl;
TY157842 peekdataimpl;
TY157848 writedataimpl;
TY157854 flushimpl;
};
typedef NI TY29419[8];
struct  Trunk270026  {
Trunk270026* next;
NI key;
TY29419 bits;
};
struct  Filenamemapping205005  {
NimStringDesc* package;
NimStringDesc* file;
NU32 mangled;
};
struct  Enumdesc205007  {
NI size;
NU32 owner;
NI id;
NimStringDesc* name;
TY205017* values;
};
struct TY205018 {
NimStringDesc* Field0;
NI Field1;
};
struct TY211201 {
  TGenericSeq Sup;
  TY211202 data[SEQ_DECL_SIZE];
};
struct Trunkseq270028 {
  TGenericSeq Sup;
  Trunk270026* data[SEQ_DECL_SIZE];
};
struct TY205021 {
  TGenericSeq Sup;
  Filenamemapping205005 data[SEQ_DECL_SIZE];
};
struct TY205023 {
  TGenericSeq Sup;
  Enumdesc205007 data[SEQ_DECL_SIZE];
};
struct TY205017 {
  TGenericSeq Sup;
  TY205018 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, initintset_270885_2627731572)(Intset270030* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, storeany_272006_1318663698)(Streamobj157818* s0, Any207101 a0, Intset270030* stored0);
static N_INLINE(Anykind207099, kind_208009_1760177012)(Any207101 x0);
N_NIMCALL(void, write_157972_1780494535)(Streamobj157818* s0, NimStringDesc* x0);
N_NIMCALL(NIM_BOOL, getbool_216604_1760177012)(Any207101 x0);
N_NIMCALL(NimStringDesc*, nimBoolToStr)(NIM_BOOL x0);
N_NIMCALL(NIM_CHAR, getchar_216412_1760177012)(Any207101 x0);
N_NIMCALL(NimStringDesc*, escapejson_267943_3111005044)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NIM_BOOL, isnil_209812_1760177012)(Any207101 x0);
N_NIMCALL(NI, len_209616_1760177012)(Any207101 x0);
N_NIMCALL(Any207101, HEX5BHEX5D_208815_1760177012)(Any207101 x0, NI i0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, fieldsaux_210402_1760177012)(void* p0, TNimNode* n0, TY211201** ret0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(Any207101, skiprange_216804_1760177012)(Any207101 x0);
N_NIMCALL(NimStringDesc*, getenumfield_217442_1760177012)(Any207101 x0);
N_NIMCALL(void*, getpointer_210002_1760177012)(Any207101 x0);
N_NIMCALL(NIM_BOOL, containsorincl_270862_2627731572)(Intset270030* s0, NI key0);
static N_INLINE(NI, ptrtoint_272001_1318663698)(void* x0);
N_NIMCALL(Any207101, HEX5BHEX5D_212656_1760177012)(Any207101 x0);
N_NIMCALL(NimStringDesc*, getstring_218406_1760177012)(Any207101 x0);
N_NIMCALL(NI, validateutf8_224776_3622478993)(NimStringDesc* s0);
N_NIMCALL(NI64, getbiggestint_214203_1760177012)(Any207101 x0);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x0);
N_NIMCALL(NF, getbiggestfloat_218003_1760177012)(Any207101 x0);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f0);
static N_INLINE(Any207101, toany_274018_1760177012)(Debuginfo205009* x0);
static N_INLINE(Any207101, newany_207836_1760177012)(void* value0, TNimType* rawtype0);
STRING_LITERAL(T1318663698_2, "null", 4);
STRING_LITERAL(T1318663698_3, "[", 1);
STRING_LITERAL(T1318663698_4, ", ", 2);
STRING_LITERAL(T1318663698_5, "]", 1);
STRING_LITERAL(T1318663698_6, "{", 1);
STRING_LITERAL(T1318663698_7, ": ", 2);
STRING_LITERAL(T1318663698_8, "}", 1);
extern TNimType NTI211201; /* seq[tuple[name: cstring, any: Any]] */
extern TNimType NTI205009; /* DebugInfo */

static N_INLINE(Anykind207099, kind_208009_1760177012)(Any207101 x0) {
	Anykind207099 result0;
	result0 = (Anykind207099)0;
	result0 = ((Anykind207099) ((*((TNimType*) (x0.rawtypeptr))).kind));
	return result0;
}

static N_INLINE(NI, ptrtoint_272001_1318663698)(void* x0) {
	NI result0;
	result0 = (NI)0;
	result0 = ((NI) (x0));
	return result0;
}

N_NIMCALL(void, storeany_272006_1318663698)(Streamobj157818* s0, Any207101 a0, Intset270030* stored0) {
	Anykind207099 LOC1;
	LOC1 = (Anykind207099)0;
	LOC1 = kind_208009_1760177012(a0);
	switch (LOC1) {
	case ((Anykind207099) 0):
	{
	}
	break;
	case ((Anykind207099) 1):
	{
		NIM_BOOL LOC4;
		NimStringDesc* LOC5;
		LOC4 = (NIM_BOOL)0;
		LOC4 = getbool_216604_1760177012(a0);
		LOC5 = (NimStringDesc*)0;
		LOC5 = nimBoolToStr(LOC4);
		write_157972_1780494535(s0, LOC5);
	}
	break;
	case ((Anykind207099) 2):
	{
		NIM_CHAR ch0;
		ch0 = getchar_216412_1760177012(a0);
		{
			NimStringDesc* LOC11;
			NimStringDesc* LOC12;
			if (!((NU8)(ch0) < (NU8)(128))) goto LA9;
			LOC11 = (NimStringDesc*)0;
			LOC11 = nimCharToStr(ch0);
			LOC12 = (NimStringDesc*)0;
			LOC12 = escapejson_267943_3111005044(LOC11);
			write_157972_1780494535(s0, LOC12);
		}
		goto LA7;
		LA9: ;
		{
			NimStringDesc* LOC14;
			LOC14 = (NimStringDesc*)0;
			LOC14 = nimIntToStr(((NI) (((NU8)(ch0)))));
			write_157972_1780494535(s0, LOC14);
		}
		LA7: ;
	}
	break;
	case ((Anykind207099) 16):
	case ((Anykind207099) 24):
	{
		{
			NIM_BOOL LOC18;
			Anykind207099 LOC19;
			LOC18 = (NIM_BOOL)0;
			LOC19 = (Anykind207099)0;
			LOC19 = kind_208009_1760177012(a0);
			LOC18 = (LOC19 == ((Anykind207099) 24));
			if (!(LOC18)) goto LA20;
			LOC18 = isnil_209812_1760177012(a0);
			LA20: ;
			if (!LOC18) goto LA21;
			write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_2));
		}
		goto LA16;
		LA21: ;
		{
			write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_3));
			{
				NI i_272220_1318663698;
				NI HEX3Atmp_272268_1318663698;
				NI LOC25;
				NI res_272271_1318663698;
				i_272220_1318663698 = (NI)0;
				HEX3Atmp_272268_1318663698 = (NI)0;
				LOC25 = (NI)0;
				LOC25 = len_209616_1760177012(a0);
				HEX3Atmp_272268_1318663698 = (NI)(LOC25 - ((NI) 1));
				res_272271_1318663698 = ((NI) 0);
				{
					while (1) {
						Any207101 LOC32;
						if (!(res_272271_1318663698 <= HEX3Atmp_272268_1318663698)) goto LA27;
						i_272220_1318663698 = res_272271_1318663698;
						{
							if (!(((NI) 0) < i_272220_1318663698)) goto LA30;
							write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
						}
						LA30: ;
						LOC32 = HEX5BHEX5D_208815_1760177012(a0, i_272220_1318663698);
						storeany_272006_1318663698(s0, LOC32, stored0);
						res_272271_1318663698 += ((NI) 1);
					} LA27: ;
				}
			}
			write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_5));
		}
		LA16: ;
	}
	break;
	case ((Anykind207099) 17):
	case ((Anykind207099) 18):
	{
		NI i0;
		write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_6));
		i0 = ((NI) 0);
		{
			NimStringDesc* key_272222_1318663698;
			Any207101 val_272223_1318663698;
			void* p_272280_1318663698;
			TNimType* t_272282_1318663698;
			TY211201* ret_272285_1318663698;
			key_272222_1318663698 = (NimStringDesc*)0;
			memset((void*)(&val_272223_1318663698), 0, sizeof(val_272223_1318663698));
			p_272280_1318663698 = a0.value;
			t_272282_1318663698 = ((TNimType*) (a0.rawtypeptr));
			ret_272285_1318663698 = (TY211201*) newSeq((&NTI211201), 0);
			{
				if (!((*t_272282_1318663698).kind == ((Tnimkind207003) 17))) goto LA37;
				{
					while (1) {
						fieldsaux_210402_1760177012(p_272280_1318663698, (*t_272282_1318663698).node, (&ret_272285_1318663698));
						t_272282_1318663698 = (*t_272282_1318663698).base;
						{
							if (!t_272282_1318663698 == 0) goto LA43;
							goto LA39;
						}
						LA43: ;
					}
				} LA39: ;
			}
			goto LA35;
			LA37: ;
			{
				fieldsaux_210402_1760177012(p_272280_1318663698, (*t_272282_1318663698).node, (&ret_272285_1318663698));
			}
			LA35: ;
			{
				NCSTRING name_272287_1318663698;
				Any207101 any_272289_1318663698;
				NI i_272291_1318663698;
				NI L_272293_1318663698;
				name_272287_1318663698 = (NCSTRING)0;
				memset((void*)(&any_272289_1318663698), 0, sizeof(any_272289_1318663698));
				i_272291_1318663698 = ((NI) 0);
				L_272293_1318663698 = (ret_272285_1318663698 ? ret_272285_1318663698->Sup.len : 0);
				{
					while (1) {
						NimStringDesc* LOC53;
						if (!(i_272291_1318663698 < L_272293_1318663698)) goto LA48;
						name_272287_1318663698 = ret_272285_1318663698->data[i_272291_1318663698].Field0;
						any_272289_1318663698 = ret_272285_1318663698->data[i_272291_1318663698].Field1;
						key_272222_1318663698 = cstrToNimstr(name_272287_1318663698);
						val_272223_1318663698 = any_272289_1318663698;
						{
							if (!(((NI) 0) < i0)) goto LA51;
							write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
						}
						LA51: ;
						LOC53 = (NimStringDesc*)0;
						LOC53 = escapejson_267943_3111005044(key_272222_1318663698);
						write_157972_1780494535(s0, LOC53);
						write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_7));
						storeany_272006_1318663698(s0, val_272223_1318663698, stored0);
						i0 += ((NI) 1);
						i_272291_1318663698 += ((NI) 1);
					} LA48: ;
				}
			}
		}
		write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_8));
	}
	break;
	case ((Anykind207099) 19):
	{
		NI i0;
		write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_3));
		i0 = ((NI) 0);
		{
			NI e_272234_1318663698;
			TNimType* typ_272300_1318663698;
			void* p_272303_1318663698;
			NI64 u_272305_1318663698;
			e_272234_1318663698 = (NI)0;
			typ_272300_1318663698 = ((TNimType*) (a0.rawtypeptr));
			p_272303_1318663698 = a0.value;
			u_272305_1318663698 = (NI64)0;
			switch ((*typ_272300_1318663698).size) {
			case ((NI) 1):
			{
				u_272305_1318663698 = ((NI64)(NU64)(NU8)((*((NI8*) (p_272303_1318663698)))));
			}
			break;
			case ((NI) 2):
			{
				u_272305_1318663698 = ((NI64)(NU64)(NU16)((*((NI16*) (p_272303_1318663698)))));
			}
			break;
			case ((NI) 4):
			{
				u_272305_1318663698 = ((NI64)(NU64)(NU32)((*((NI32*) (p_272303_1318663698)))));
			}
			break;
			case ((NI) 8):
			{
				u_272305_1318663698 = (*((NI64*) (p_272303_1318663698)));
			}
			break;
			default:
			{
				NI8* a_272311_1318663698;
				a_272311_1318663698 = ((NI8*) (p_272303_1318663698));
				{
					NI i_272314_1318663698;
					NI HEX3Atmp_272316_1318663698;
					NI res_272318_1318663698;
					i_272314_1318663698 = (NI)0;
					HEX3Atmp_272316_1318663698 = (NI)0;
					HEX3Atmp_272316_1318663698 = (NI)((NI)((*typ_272300_1318663698).size * ((NI) 8)) - ((NI) 1));
					res_272318_1318663698 = ((NI) 0);
					{
						while (1) {
							if (!(res_272318_1318663698 <= HEX3Atmp_272316_1318663698)) goto LA63;
							i_272314_1318663698 = res_272318_1318663698;
							{
								NimStringDesc* LOC72;
								if (!!(((NI)(((NI)(NU)(NU8)(a_272311_1318663698[((NI)(i_272314_1318663698 / ((NI) 8)))- 0])) & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(i_272314_1318663698 % ((NI) 8))))))) == ((NI) 0)))) goto LA66;
								e_272234_1318663698 = (NI)(i_272314_1318663698 + (*(*typ_272300_1318663698).node).len);
								{
									if (!(((NI) 0) < i0)) goto LA70;
									write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
								}
								LA70: ;
								LOC72 = (NimStringDesc*)0;
								LOC72 = nimIntToStr(e_272234_1318663698);
								write_157972_1780494535(s0, LOC72);
								i0 += ((NI) 1);
							}
							LA66: ;
							res_272318_1318663698 += ((NI) 1);
						} LA63: ;
					}
				}
			}
			break;
			}
			{
				if (!((*typ_272300_1318663698).size <= ((NI) 8))) goto LA75;
				{
					NI i_272322_1318663698;
					NI res_272324_1318663698;
					i_272322_1318663698 = (NI)0;
					res_272324_1318663698 = ((NI) 0);
					{
						while (1) {
							if (!(res_272324_1318663698 <= ((NI) 63))) goto LA79;
							i_272322_1318663698 = res_272324_1318663698;
							{
								NimStringDesc* LOC88;
								if (!!(((NI64)(u_272305_1318663698 & (NI64)((NU64)(IL64(1)) << (NU64)(((NI64) (i_272322_1318663698))))) == IL64(0)))) goto LA82;
								e_272234_1318663698 = (NI)(i_272322_1318663698 + (*(*typ_272300_1318663698).node).len);
								{
									if (!(((NI) 0) < i0)) goto LA86;
									write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
								}
								LA86: ;
								LOC88 = (NimStringDesc*)0;
								LOC88 = nimIntToStr(e_272234_1318663698);
								write_157972_1780494535(s0, LOC88);
								i0 += ((NI) 1);
							}
							LA82: ;
							res_272324_1318663698 += ((NI) 1);
						} LA79: ;
					}
				}
			}
			LA75: ;
		}
		write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_5));
	}
	break;
	case ((Anykind207099) 20):
	{
		Any207101 LOC90;
		LOC90 = skiprange_216804_1760177012(a0);
		storeany_272006_1318663698(s0, LOC90, stored0);
	}
	break;
	case ((Anykind207099) 14):
	{
		NimStringDesc* LOC92;
		NimStringDesc* LOC93;
		LOC92 = (NimStringDesc*)0;
		LOC92 = getenumfield_217442_1760177012(a0);
		LOC93 = (NimStringDesc*)0;
		LOC93 = escapejson_267943_3111005044(LOC92);
		write_157972_1780494535(s0, LOC93);
	}
	break;
	case ((Anykind207099) 21):
	case ((Anykind207099) 22):
	{
		void* x0;
		x0 = getpointer_210002_1760177012(a0);
		{
			if (!x0 == 0) goto LA97;
			write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_2));
		}
		goto LA95;
		LA97: ;
		{
			NI LOC100;
			NIM_BOOL LOC101;
			NI LOC104;
			NimStringDesc* LOC105;
			LOC100 = (NI)0;
			LOC100 = ptrtoint_272001_1318663698(x0);
			LOC101 = (NIM_BOOL)0;
			LOC101 = containsorincl_270862_2627731572(stored0, LOC100);
			if (!LOC101) goto LA102;
			LOC104 = (NI)0;
			LOC104 = ptrtoint_272001_1318663698(x0);
			LOC105 = (NimStringDesc*)0;
			LOC105 = nimIntToStr(LOC104);
			write_157972_1780494535(s0, LOC105);
		}
		goto LA95;
		LA102: ;
		{
			NI LOC107;
			NimStringDesc* LOC108;
			Any207101 LOC109;
			write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_3));
			LOC107 = (NI)0;
			LOC107 = ptrtoint_272001_1318663698(x0);
			LOC108 = (NimStringDesc*)0;
			LOC108 = nimIntToStr(LOC107);
			write_157972_1780494535(s0, LOC108);
			write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
			LOC109 = HEX5BHEX5D_212656_1760177012(a0);
			storeany_272006_1318663698(s0, LOC109, stored0);
			write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_5));
		}
		LA95: ;
	}
	break;
	case ((Anykind207099) 25):
	case ((Anykind207099) 26):
	case ((Anykind207099) 29):
	{
		void* LOC111;
		NI LOC112;
		NimStringDesc* LOC113;
		LOC111 = (void*)0;
		LOC111 = getpointer_210002_1760177012(a0);
		LOC112 = (NI)0;
		LOC112 = ptrtoint_272001_1318663698(LOC111);
		LOC113 = (NimStringDesc*)0;
		LOC113 = nimIntToStr(LOC112);
		write_157972_1780494535(s0, LOC113);
	}
	break;
	case ((Anykind207099) 28):
	{
		NimStringDesc* x0;
		x0 = getstring_218406_1760177012(a0);
		{
			if (!x0 == 0) goto LA117;
			write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_2));
		}
		goto LA115;
		LA117: ;
		{
			NI LOC120;
			NimStringDesc* LOC123;
			LOC120 = (NI)0;
			LOC120 = validateutf8_224776_3622478993(x0);
			if (!(LOC120 == ((NI) -1))) goto LA121;
			LOC123 = (NimStringDesc*)0;
			LOC123 = escapejson_267943_3111005044(x0);
			write_157972_1780494535(s0, LOC123);
		}
		goto LA115;
		LA121: ;
		{
			NI i0;
			write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_3));
			i0 = ((NI) 0);
			{
				NIM_CHAR c_272248_1318663698;
				NI i_272330_1318663698;
				NI L_272332_1318663698;
				c_272248_1318663698 = (NIM_CHAR)0;
				i_272330_1318663698 = ((NI) 0);
				L_272332_1318663698 = (x0 ? x0->Sup.len : 0);
				{
					while (1) {
						NimStringDesc* LOC132;
						if (!(i_272330_1318663698 < L_272332_1318663698)) goto LA127;
						c_272248_1318663698 = x0->data[i_272330_1318663698];
						{
							if (!(((NI) 0) < i0)) goto LA130;
							write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
						}
						LA130: ;
						LOC132 = (NimStringDesc*)0;
						LOC132 = nimIntToStr(((NI) (((NU8)(c_272248_1318663698)))));
						write_157972_1780494535(s0, LOC132);
						i0 += ((NI) 1);
						i_272330_1318663698 += ((NI) 1);
					} LA127: ;
				}
			}
			write_157972_1780494535(s0, ((NimStringDesc*) &T1318663698_5));
		}
		LA115: ;
	}
	break;
	case ((Anykind207099) 31) ... ((Anykind207099) 35):
	case ((Anykind207099) 40) ... ((Anykind207099) 44):
	{
		NI64 LOC134;
		NimStringDesc* LOC135;
		LOC134 = (NI64)0;
		LOC134 = getbiggestint_214203_1760177012(a0);
		LOC135 = (NimStringDesc*)0;
		LOC135 = nimInt64ToStr(LOC134);
		write_157972_1780494535(s0, LOC135);
	}
	break;
	case ((Anykind207099) 36) ... ((Anykind207099) 39):
	{
		NF LOC137;
		NimStringDesc* LOC138;
		LOC137 = (NF)0;
		LOC137 = getbiggestfloat_218003_1760177012(a0);
		LOC138 = (NimStringDesc*)0;
		LOC138 = nimFloatToStr(LOC137);
		write_157972_1780494535(s0, LOC138);
	}
	break;
	}
}

static N_INLINE(Any207101, newany_207836_1760177012)(void* value0, TNimType* rawtype0) {
	Any207101 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = value0;
	result0.rawtypeptr = ((void*) (rawtype0));
	return result0;
}

static N_INLINE(Any207101, toany_274018_1760177012)(Debuginfo205009* x0) {
	Any207101 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0 = newany_207836_1760177012(((void*) (x0)), ((TNimType*) ((&NTI205009))));
	return result0;
}

N_NIMCALL(void, store_274008_1318663698)(Streamobj157818* s0, Debuginfo205009* data0) {
	Intset270030 stored0;
	Debuginfo205009 d0;
	Any207101 LOC1;
	memset((void*)(&stored0), 0, sizeof(stored0));
	chckNil((void*)(&stored0));
	memset((void*)(&stored0), 0, sizeof(stored0));
	initintset_270885_2627731572((&stored0));
	memset((void*)(&d0), 0, sizeof(d0));
	d0.version = (*data0).version;
	d0.files = (*data0).files;
	d0.enums = (*data0).enums;
	d0.conflicts = (*data0).conflicts;
	LOC1 = toany_274018_1760177012((&d0));
	storeany_272006_1318663698(s0, LOC1, (&stored0));
}
NIM_EXTERNC N_NOINLINE(void, stdlib_marshalInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_marshalDatInit000)(void) {
}

