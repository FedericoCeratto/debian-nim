/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Streamobj156818 Streamobj156818;
typedef struct Debuginfo201009 Debuginfo201009;
typedef struct TY201021 TY201021;
typedef struct TY201023 TY201023;
typedef struct Intset266030 Intset266030;
typedef struct Trunk266026 Trunk266026;
typedef struct Trunkseq266028 Trunkseq266028;
typedef struct Any203101 Any203101;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY207201 TY207201;
typedef struct TY207202 TY207202;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Filenamemapping201005 Filenamemapping201005;
typedef struct Enumdesc201007 Enumdesc201007;
typedef struct TY201017 TY201017;
typedef struct TY201018 TY201018;
struct  Debuginfo201009  {
NI version;
TY201021* files;
TY201023* enums;
NIM_BOOL conflicts;
};
struct  Intset266030  {
NI counter;
NI max;
Trunk266026* head;
Trunkseq266028* data;
};
struct  Any203101  {
void* value;
void* rawtypeptr;
};
typedef NU8 Anykind203099;
typedef NU8 Tnimkind203003;
typedef NU8 Tnimtypeflag203009Set;
typedef N_NIMCALL_PTR(void, TY203088) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY203093) (void* p0);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY207202 {
NCSTRING Field0;
Any203101 Field1;
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
typedef NU8 Tnimnodekind203005;
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY156819) (Streamobj156818* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY156823) (Streamobj156818* s0);
typedef N_NIMCALL_PTR(void, TY156827) (Streamobj156818* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY156832) (Streamobj156818* s0);
typedef N_NIMCALL_PTR(NI, TY156836) (Streamobj156818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(NI, TY156842) (Streamobj156818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY156848) (Streamobj156818* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY156854) (Streamobj156818* s0);
struct  Streamobj156818  {
  TNimObject Sup;
TY156819 closeimpl;
TY156823 atendimpl;
TY156827 setpositionimpl;
TY156832 getpositionimpl;
TY156836 readdataimpl;
TY156842 peekdataimpl;
TY156848 writedataimpl;
TY156854 flushimpl;
};
struct  Filenamemapping201005  {
NimStringDesc* package;
NimStringDesc* file;
NU32 mangled;
};
struct  Enumdesc201007  {
NI size;
NU32 owner;
NI id;
NimStringDesc* name;
TY201017* values;
};
typedef NI TY29018[16];
struct  Trunk266026  {
Trunk266026* next;
NI key;
TY29018 bits;
};
struct TY201018 {
NimStringDesc* Field0;
NI Field1;
};
struct TY207201 {
  TGenericSeq Sup;
  TY207202 data[SEQ_DECL_SIZE];
};
struct TY201021 {
  TGenericSeq Sup;
  Filenamemapping201005 data[SEQ_DECL_SIZE];
};
struct TY201023 {
  TGenericSeq Sup;
  Enumdesc201007 data[SEQ_DECL_SIZE];
};
struct Trunkseq266028 {
  TGenericSeq Sup;
  Trunk266026* data[SEQ_DECL_SIZE];
};
struct TY201017 {
  TGenericSeq Sup;
  TY201018 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, initintset_266885_2627731572)(Intset266030* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, storeany_268006_1318663698)(Streamobj156818* s0, Any203101 a0, Intset266030* stored0);
static N_INLINE(Anykind203099, kind_204009_1760177012)(Any203101 x0);
N_NIMCALL(void, write_156972_1780494535)(Streamobj156818* s0, NimStringDesc* x0);
N_NIMCALL(NIM_BOOL, getbool_212604_1760177012)(Any203101 x0);
N_NIMCALL(NimStringDesc*, nimBoolToStr)(NIM_BOOL x0);
N_NIMCALL(NIM_CHAR, getchar_212412_1760177012)(Any203101 x0);
N_NIMCALL(NimStringDesc*, escapejson_263943_3111005044)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NIM_BOOL, isnil_205812_1760177012)(Any203101 x0);
N_NIMCALL(NI, len_205616_1760177012)(Any203101 x0);
N_NIMCALL(Any203101, HEX5BHEX5D_204815_1760177012)(Any203101 x0, NI i0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, fieldsaux_206402_1760177012)(void* p0, TNimNode* n0, TY207201** ret0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(Any203101, skiprange_212804_1760177012)(Any203101 x0);
N_NIMCALL(NimStringDesc*, getenumfield_213442_1760177012)(Any203101 x0);
N_NIMCALL(void*, getpointer_206002_1760177012)(Any203101 x0);
N_NIMCALL(NIM_BOOL, containsorincl_266862_2627731572)(Intset266030* s0, NI key0);
static N_INLINE(NI, ptrtoint_268001_1318663698)(void* x0);
N_NIMCALL(Any203101, HEX5BHEX5D_208656_1760177012)(Any203101 x0);
N_NIMCALL(NimStringDesc*, getstring_214406_1760177012)(Any203101 x0);
N_NIMCALL(NI, validateutf8_220776_3622478993)(NimStringDesc* s0);
N_NIMCALL(NI64, getbiggestint_210203_1760177012)(Any203101 x0);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x0);
N_NIMCALL(NF, getbiggestfloat_214003_1760177012)(Any203101 x0);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f0);
static N_INLINE(Any203101, toany_270018_1760177012)(Debuginfo201009* x0);
static N_INLINE(Any203101, newany_203836_1760177012)(void* value0, TNimType* rawtype0);
STRING_LITERAL(T1318663698_2, "null", 4);
STRING_LITERAL(T1318663698_3, "[", 1);
STRING_LITERAL(T1318663698_4, ", ", 2);
STRING_LITERAL(T1318663698_5, "]", 1);
STRING_LITERAL(T1318663698_6, "{", 1);
STRING_LITERAL(T1318663698_7, ": ", 2);
STRING_LITERAL(T1318663698_8, "}", 1);
extern TNimType NTI207201; /* seq[tuple[name: cstring, any: Any]] */
extern TNimType NTI201009; /* DebugInfo */

static N_INLINE(Anykind203099, kind_204009_1760177012)(Any203101 x0) {
	Anykind203099 result0;
	result0 = (Anykind203099)0;
	result0 = ((Anykind203099) ((*((TNimType*) (x0.rawtypeptr))).kind));
	return result0;
}

static N_INLINE(NI, ptrtoint_268001_1318663698)(void* x0) {
	NI result0;
	result0 = (NI)0;
	result0 = ((NI) (x0));
	return result0;
}

N_NIMCALL(void, storeany_268006_1318663698)(Streamobj156818* s0, Any203101 a0, Intset266030* stored0) {
	Anykind203099 LOC1;
	LOC1 = (Anykind203099)0;
	LOC1 = kind_204009_1760177012(a0);
	switch (LOC1) {
	case ((Anykind203099) 0):
	{
	}
	break;
	case ((Anykind203099) 1):
	{
		NIM_BOOL LOC4;
		NimStringDesc* LOC5;
		LOC4 = (NIM_BOOL)0;
		LOC4 = getbool_212604_1760177012(a0);
		LOC5 = (NimStringDesc*)0;
		LOC5 = nimBoolToStr(LOC4);
		write_156972_1780494535(s0, LOC5);
	}
	break;
	case ((Anykind203099) 2):
	{
		NIM_CHAR ch0;
		ch0 = getchar_212412_1760177012(a0);
		{
			NimStringDesc* LOC11;
			NimStringDesc* LOC12;
			if (!((NU8)(ch0) < (NU8)(128))) goto LA9;
			LOC11 = (NimStringDesc*)0;
			LOC11 = nimCharToStr(ch0);
			LOC12 = (NimStringDesc*)0;
			LOC12 = escapejson_263943_3111005044(LOC11);
			write_156972_1780494535(s0, LOC12);
		}
		goto LA7;
		LA9: ;
		{
			NimStringDesc* LOC14;
			LOC14 = (NimStringDesc*)0;
			LOC14 = nimIntToStr(((NI) (((NU8)(ch0)))));
			write_156972_1780494535(s0, LOC14);
		}
		LA7: ;
	}
	break;
	case ((Anykind203099) 16):
	case ((Anykind203099) 24):
	{
		{
			NIM_BOOL LOC18;
			Anykind203099 LOC19;
			LOC18 = (NIM_BOOL)0;
			LOC19 = (Anykind203099)0;
			LOC19 = kind_204009_1760177012(a0);
			LOC18 = (LOC19 == ((Anykind203099) 24));
			if (!(LOC18)) goto LA20;
			LOC18 = isnil_205812_1760177012(a0);
			LA20: ;
			if (!LOC18) goto LA21;
			write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_2));
		}
		goto LA16;
		LA21: ;
		{
			write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_3));
			{
				NI i_268220_1318663698;
				NI HEX3Atmp_268268_1318663698;
				NI LOC25;
				NI res_268271_1318663698;
				i_268220_1318663698 = (NI)0;
				HEX3Atmp_268268_1318663698 = (NI)0;
				LOC25 = (NI)0;
				LOC25 = len_205616_1760177012(a0);
				HEX3Atmp_268268_1318663698 = (NI)(LOC25 - ((NI) 1));
				res_268271_1318663698 = ((NI) 0);
				{
					while (1) {
						Any203101 LOC32;
						if (!(res_268271_1318663698 <= HEX3Atmp_268268_1318663698)) goto LA27;
						i_268220_1318663698 = res_268271_1318663698;
						{
							if (!(((NI) 0) < i_268220_1318663698)) goto LA30;
							write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
						}
						LA30: ;
						LOC32 = HEX5BHEX5D_204815_1760177012(a0, i_268220_1318663698);
						storeany_268006_1318663698(s0, LOC32, stored0);
						res_268271_1318663698 += ((NI) 1);
					} LA27: ;
				}
			}
			write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_5));
		}
		LA16: ;
	}
	break;
	case ((Anykind203099) 17):
	case ((Anykind203099) 18):
	{
		NI i0;
		write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_6));
		i0 = ((NI) 0);
		{
			NimStringDesc* key_268222_1318663698;
			Any203101 val_268223_1318663698;
			void* p_268280_1318663698;
			TNimType* t_268282_1318663698;
			TY207201* ret_268285_1318663698;
			key_268222_1318663698 = (NimStringDesc*)0;
			memset((void*)(&val_268223_1318663698), 0, sizeof(val_268223_1318663698));
			p_268280_1318663698 = a0.value;
			t_268282_1318663698 = ((TNimType*) (a0.rawtypeptr));
			ret_268285_1318663698 = (TY207201*) newSeq((&NTI207201), 0);
			{
				if (!((*t_268282_1318663698).kind == ((Tnimkind203003) 17))) goto LA37;
				{
					while (1) {
						fieldsaux_206402_1760177012(p_268280_1318663698, (*t_268282_1318663698).node, (&ret_268285_1318663698));
						t_268282_1318663698 = (*t_268282_1318663698).base;
						{
							if (!t_268282_1318663698 == 0) goto LA43;
							goto LA39;
						}
						LA43: ;
					}
				} LA39: ;
			}
			goto LA35;
			LA37: ;
			{
				fieldsaux_206402_1760177012(p_268280_1318663698, (*t_268282_1318663698).node, (&ret_268285_1318663698));
			}
			LA35: ;
			{
				NCSTRING name_268287_1318663698;
				Any203101 any_268289_1318663698;
				NI i_268291_1318663698;
				NI L_268293_1318663698;
				name_268287_1318663698 = (NCSTRING)0;
				memset((void*)(&any_268289_1318663698), 0, sizeof(any_268289_1318663698));
				i_268291_1318663698 = ((NI) 0);
				L_268293_1318663698 = (ret_268285_1318663698 ? ret_268285_1318663698->Sup.len : 0);
				{
					while (1) {
						NimStringDesc* LOC53;
						if (!(i_268291_1318663698 < L_268293_1318663698)) goto LA48;
						name_268287_1318663698 = ret_268285_1318663698->data[i_268291_1318663698].Field0;
						any_268289_1318663698 = ret_268285_1318663698->data[i_268291_1318663698].Field1;
						key_268222_1318663698 = cstrToNimstr(name_268287_1318663698);
						val_268223_1318663698 = any_268289_1318663698;
						{
							if (!(((NI) 0) < i0)) goto LA51;
							write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
						}
						LA51: ;
						LOC53 = (NimStringDesc*)0;
						LOC53 = escapejson_263943_3111005044(key_268222_1318663698);
						write_156972_1780494535(s0, LOC53);
						write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_7));
						storeany_268006_1318663698(s0, val_268223_1318663698, stored0);
						i0 += ((NI) 1);
						i_268291_1318663698 += ((NI) 1);
					} LA48: ;
				}
			}
		}
		write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_8));
	}
	break;
	case ((Anykind203099) 19):
	{
		NI i0;
		write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_3));
		i0 = ((NI) 0);
		{
			NI e_268234_1318663698;
			TNimType* typ_268300_1318663698;
			void* p_268303_1318663698;
			NI64 u_268305_1318663698;
			e_268234_1318663698 = (NI)0;
			typ_268300_1318663698 = ((TNimType*) (a0.rawtypeptr));
			p_268303_1318663698 = a0.value;
			u_268305_1318663698 = (NI64)0;
			switch ((*typ_268300_1318663698).size) {
			case ((NI) 1):
			{
				u_268305_1318663698 = ((NI64)(NU64)(NU8)((*((NI8*) (p_268303_1318663698)))));
			}
			break;
			case ((NI) 2):
			{
				u_268305_1318663698 = ((NI64)(NU64)(NU16)((*((NI16*) (p_268303_1318663698)))));
			}
			break;
			case ((NI) 4):
			{
				u_268305_1318663698 = ((NI64)(NU64)(NU32)((*((NI32*) (p_268303_1318663698)))));
			}
			break;
			case ((NI) 8):
			{
				u_268305_1318663698 = (*((NI64*) (p_268303_1318663698)));
			}
			break;
			default:
			{
				NI8* a_268311_1318663698;
				a_268311_1318663698 = ((NI8*) (p_268303_1318663698));
				{
					NI i_268314_1318663698;
					NI HEX3Atmp_268316_1318663698;
					NI res_268318_1318663698;
					i_268314_1318663698 = (NI)0;
					HEX3Atmp_268316_1318663698 = (NI)0;
					HEX3Atmp_268316_1318663698 = (NI)((NI)((*typ_268300_1318663698).size * ((NI) 8)) - ((NI) 1));
					res_268318_1318663698 = ((NI) 0);
					{
						while (1) {
							if (!(res_268318_1318663698 <= HEX3Atmp_268316_1318663698)) goto LA63;
							i_268314_1318663698 = res_268318_1318663698;
							{
								NimStringDesc* LOC72;
								if (!!(((NI)(((NI)(NU)(NU8)(a_268311_1318663698[((NI)(i_268314_1318663698 / ((NI) 8)))- 0])) & (NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI)(i_268314_1318663698 % ((NI) 8))))))) == ((NI) 0)))) goto LA66;
								e_268234_1318663698 = (NI)(i_268314_1318663698 + (*(*typ_268300_1318663698).node).len);
								{
									if (!(((NI) 0) < i0)) goto LA70;
									write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
								}
								LA70: ;
								LOC72 = (NimStringDesc*)0;
								LOC72 = nimIntToStr(e_268234_1318663698);
								write_156972_1780494535(s0, LOC72);
								i0 += ((NI) 1);
							}
							LA66: ;
							res_268318_1318663698 += ((NI) 1);
						} LA63: ;
					}
				}
			}
			break;
			}
			{
				if (!((*typ_268300_1318663698).size <= ((NI) 8))) goto LA75;
				{
					NI i_268322_1318663698;
					NI res_268324_1318663698;
					i_268322_1318663698 = (NI)0;
					res_268324_1318663698 = ((NI) 0);
					{
						while (1) {
							if (!(res_268324_1318663698 <= ((NI) 63))) goto LA79;
							i_268322_1318663698 = res_268324_1318663698;
							{
								NimStringDesc* LOC88;
								if (!!(((NI64)(u_268305_1318663698 & (NI64)((NU64)(IL64(1)) << (NU64)(((NI64) (i_268322_1318663698))))) == IL64(0)))) goto LA82;
								e_268234_1318663698 = (NI)(i_268322_1318663698 + (*(*typ_268300_1318663698).node).len);
								{
									if (!(((NI) 0) < i0)) goto LA86;
									write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
								}
								LA86: ;
								LOC88 = (NimStringDesc*)0;
								LOC88 = nimIntToStr(e_268234_1318663698);
								write_156972_1780494535(s0, LOC88);
								i0 += ((NI) 1);
							}
							LA82: ;
							res_268324_1318663698 += ((NI) 1);
						} LA79: ;
					}
				}
			}
			LA75: ;
		}
		write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_5));
	}
	break;
	case ((Anykind203099) 20):
	{
		Any203101 LOC90;
		LOC90 = skiprange_212804_1760177012(a0);
		storeany_268006_1318663698(s0, LOC90, stored0);
	}
	break;
	case ((Anykind203099) 14):
	{
		NimStringDesc* LOC92;
		NimStringDesc* LOC93;
		LOC92 = (NimStringDesc*)0;
		LOC92 = getenumfield_213442_1760177012(a0);
		LOC93 = (NimStringDesc*)0;
		LOC93 = escapejson_263943_3111005044(LOC92);
		write_156972_1780494535(s0, LOC93);
	}
	break;
	case ((Anykind203099) 21):
	case ((Anykind203099) 22):
	{
		void* x0;
		x0 = getpointer_206002_1760177012(a0);
		{
			if (!x0 == 0) goto LA97;
			write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_2));
		}
		goto LA95;
		LA97: ;
		{
			NI LOC100;
			NIM_BOOL LOC101;
			NI LOC104;
			NimStringDesc* LOC105;
			LOC100 = (NI)0;
			LOC100 = ptrtoint_268001_1318663698(x0);
			LOC101 = (NIM_BOOL)0;
			LOC101 = containsorincl_266862_2627731572(stored0, LOC100);
			if (!LOC101) goto LA102;
			LOC104 = (NI)0;
			LOC104 = ptrtoint_268001_1318663698(x0);
			LOC105 = (NimStringDesc*)0;
			LOC105 = nimIntToStr(LOC104);
			write_156972_1780494535(s0, LOC105);
		}
		goto LA95;
		LA102: ;
		{
			NI LOC107;
			NimStringDesc* LOC108;
			Any203101 LOC109;
			write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_3));
			LOC107 = (NI)0;
			LOC107 = ptrtoint_268001_1318663698(x0);
			LOC108 = (NimStringDesc*)0;
			LOC108 = nimIntToStr(LOC107);
			write_156972_1780494535(s0, LOC108);
			write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
			LOC109 = HEX5BHEX5D_208656_1760177012(a0);
			storeany_268006_1318663698(s0, LOC109, stored0);
			write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_5));
		}
		LA95: ;
	}
	break;
	case ((Anykind203099) 25):
	case ((Anykind203099) 26):
	case ((Anykind203099) 29):
	{
		void* LOC111;
		NI LOC112;
		NimStringDesc* LOC113;
		LOC111 = (void*)0;
		LOC111 = getpointer_206002_1760177012(a0);
		LOC112 = (NI)0;
		LOC112 = ptrtoint_268001_1318663698(LOC111);
		LOC113 = (NimStringDesc*)0;
		LOC113 = nimIntToStr(LOC112);
		write_156972_1780494535(s0, LOC113);
	}
	break;
	case ((Anykind203099) 28):
	{
		NimStringDesc* x0;
		x0 = getstring_214406_1760177012(a0);
		{
			if (!x0 == 0) goto LA117;
			write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_2));
		}
		goto LA115;
		LA117: ;
		{
			NI LOC120;
			NimStringDesc* LOC123;
			LOC120 = (NI)0;
			LOC120 = validateutf8_220776_3622478993(x0);
			if (!(LOC120 == ((NI) -1))) goto LA121;
			LOC123 = (NimStringDesc*)0;
			LOC123 = escapejson_263943_3111005044(x0);
			write_156972_1780494535(s0, LOC123);
		}
		goto LA115;
		LA121: ;
		{
			NI i0;
			write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_3));
			i0 = ((NI) 0);
			{
				NIM_CHAR c_268248_1318663698;
				NI i_268330_1318663698;
				NI L_268332_1318663698;
				c_268248_1318663698 = (NIM_CHAR)0;
				i_268330_1318663698 = ((NI) 0);
				L_268332_1318663698 = (x0 ? x0->Sup.len : 0);
				{
					while (1) {
						NimStringDesc* LOC132;
						if (!(i_268330_1318663698 < L_268332_1318663698)) goto LA127;
						c_268248_1318663698 = x0->data[i_268330_1318663698];
						{
							if (!(((NI) 0) < i0)) goto LA130;
							write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_4));
						}
						LA130: ;
						LOC132 = (NimStringDesc*)0;
						LOC132 = nimIntToStr(((NI) (((NU8)(c_268248_1318663698)))));
						write_156972_1780494535(s0, LOC132);
						i0 += ((NI) 1);
						i_268330_1318663698 += ((NI) 1);
					} LA127: ;
				}
			}
			write_156972_1780494535(s0, ((NimStringDesc*) &T1318663698_5));
		}
		LA115: ;
	}
	break;
	case ((Anykind203099) 31) ... ((Anykind203099) 35):
	case ((Anykind203099) 40) ... ((Anykind203099) 44):
	{
		NI64 LOC134;
		NimStringDesc* LOC135;
		LOC134 = (NI64)0;
		LOC134 = getbiggestint_210203_1760177012(a0);
		LOC135 = (NimStringDesc*)0;
		LOC135 = nimInt64ToStr(LOC134);
		write_156972_1780494535(s0, LOC135);
	}
	break;
	case ((Anykind203099) 36) ... ((Anykind203099) 39):
	{
		NF LOC137;
		NimStringDesc* LOC138;
		LOC137 = (NF)0;
		LOC137 = getbiggestfloat_214003_1760177012(a0);
		LOC138 = (NimStringDesc*)0;
		LOC138 = nimFloatToStr(LOC137);
		write_156972_1780494535(s0, LOC138);
	}
	break;
	}
}

static N_INLINE(Any203101, newany_203836_1760177012)(void* value0, TNimType* rawtype0) {
	Any203101 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0.value = value0;
	result0.rawtypeptr = ((void*) (rawtype0));
	return result0;
}

static N_INLINE(Any203101, toany_270018_1760177012)(Debuginfo201009* x0) {
	Any203101 result0;
	memset((void*)(&result0), 0, sizeof(result0));
	result0 = newany_203836_1760177012(((void*) (x0)), ((TNimType*) ((&NTI201009))));
	return result0;
}

N_NIMCALL(void, store_270008_1318663698)(Streamobj156818* s0, Debuginfo201009 data0) {
	Intset266030 stored0;
	Debuginfo201009 d0;
	Any203101 LOC1;
	memset((void*)(&stored0), 0, sizeof(stored0));
	chckNil((void*)(&stored0));
	memset((void*)(&stored0), 0, sizeof(stored0));
	initintset_266885_2627731572((&stored0));
	memset((void*)(&d0), 0, sizeof(d0));
	d0.version = data0.version;
	d0.files = data0.files;
	d0.enums = data0.enums;
	d0.conflicts = data0.conflicts;
	LOC1 = toany_270018_1760177012((&d0));
	storeany_268006_1318663698(s0, LOC1, (&stored0));
}
NIM_EXTERNC N_NOINLINE(void, stdlib_marshalInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_marshalDatInit000)(void) {
}

