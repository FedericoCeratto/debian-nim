/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <time.h>
#include <string.h>
#include <sys/select.h>
#include <sys/time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Timeinfo110603 Timeinfo110603;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepair146205 Keyvaluepair146205;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Month110203;
typedef NU8 Weekday110205;
struct  Timeinfo110603  {
  TNimObject Sup;
NI second;
NI minute;
NI hour;
NI monthday;
Month110203 month;
NI year;
Weekday110205 weekday;
NI yearday;
NIM_BOOL isdst;
NimStringDesc* tzname;
NI timezone;
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
typedef Weekday110205 TY111454[7];
struct Keyvaluepair146205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
N_NIMCALL(void, getlocaltime_110638_2726502234)(time_t t0, Timeinfo110603* Result);
N_NIMCALL(void, tmtotimeinfo_111447_2726502234)(struct tm* tm0, NIM_BOOL local0, Timeinfo110603* Result);
N_NIMCALL(void, gettzname_110686_2726502234)(Keyvaluepair146205* Result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(void, genericShallowAssign)(void* dest0, void* src0, TNimType* mt0);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, genericReset)(void* dest0, TNimType* mt0);
N_NIMCALL(time_t, gettime_110636_2726502234)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x0, NI minchars0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
NIM_CONST TY111454 weekdays_111452_2726502234 = {((Weekday110205) 6),
((Weekday110205) 0),
((Weekday110205) 1),
((Weekday110205) 2),
((Weekday110205) 3),
((Weekday110205) 4),
((Weekday110205) 5)}
;
STRING_LITERAL(TMP3567, "UTC", 3);
extern TNimType NTI3408; /* RootObj */
TNimType NTI110603; /* TimeInfo */
extern TNimType NTI104; /* int */
TNimType NTI110606; /* range 0..61(int) */
TNimType NTI110608; /* range 0..59(int) */
TNimType NTI110610; /* range 0..23(int) */
TNimType NTI110613; /* range 1..31(int) */
TNimType NTI110203; /* Month */
TNimType NTI110205; /* WeekDay */
TNimType NTI110618; /* range 0..365(int) */
extern TNimType NTI130; /* bool */
extern TNimType NTI138; /* string */

N_NIMCALL(void, gettzname_110686_2726502234)(Keyvaluepair146205* Result) {
{	unsureAsgnRef((void**) (&(*Result).Field0), cstrToNimstr(tzname[(((NI) 0))- 0]));
	unsureAsgnRef((void**) (&(*Result).Field1), cstrToNimstr(tzname[(((NI) 1))- 0]));
	goto BeforeRet;
	}BeforeRet: ;
}

N_NIMCALL(void, tmtotimeinfo_111447_2726502234)(struct tm* tm0, NIM_BOOL local0, Timeinfo110603* Result) {
	Timeinfo110603 LOC1;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI110603);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI110603);
	LOC1.second = ((NI) (((NI) ((*tm0).tm_sec))));
	LOC1.minute = ((NI) (((NI) ((*tm0).tm_min))));
	LOC1.hour = ((NI) (((NI) ((*tm0).tm_hour))));
	LOC1.monthday = ((NI) (((NI) ((*tm0).tm_mday))));
	LOC1.month = ((Month110203) ((*tm0).tm_mon));
	LOC1.year = ((NI) ((NI32)((*tm0).tm_year + ((NI32) 1900))));
	LOC1.weekday = weekdays_111452_2726502234[(((NI) ((*tm0).tm_wday)))- 0];
	LOC1.yearday = ((NI) (((NI) ((*tm0).tm_yday))));
	LOC1.isdst = (((NI32) 0) < (*tm0).tm_isdst);
	{
		if (!local0) goto LA4;
		{
			Keyvaluepair146205 LOC10;
			if (!(((NI32) 0) < (*tm0).tm_isdst)) goto LA8;
			memset((void*)(&LOC10), 0, sizeof(LOC10));
			gettzname_110686_2726502234((&LOC10));
			LOC1.tzname = copyString(LOC10.Field1);
		}
		goto LA6;
		LA8: ;
		{
			Keyvaluepair146205 LOC12;
			memset((void*)(&LOC12), 0, sizeof(LOC12));
			gettzname_110686_2726502234((&LOC12));
			LOC1.tzname = copyString(LOC12.Field0);
		}
		LA6: ;
	}
	goto LA2;
	LA4: ;
	{
		LOC1.tzname = copyString(((NimStringDesc*) &TMP3567));
	}
	LA2: ;
	{
		if (!local0) goto LA16;
		LOC1.timezone = ((NI32)-((*tm0).tm_gmtoff));
	}
	goto LA14;
	LA16: ;
	{
		LOC1.timezone = ((NI) 0);
	}
	LA14: ;
	genericShallowAssign((void*)Result, (void*)(&LOC1), (&NTI110603));
}

N_NIMCALL(void, getlocaltime_110638_2726502234)(time_t t0, Timeinfo110603* Result) {
	time_t a0;
	struct tm* lt0;
	a0 = t0;
	lt0 = localtime((&a0));
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI110603));
	(*Result).Sup.m_type = (&NTI110603);
	tmtotimeinfo_111447_2726502234((&(*lt0)), NIM_TRUE, Result);
}

N_NIMCALL(time_t, gettime_110636_2726502234)(void) {
	time_t result0;
{	result0 = (time_t)0;
	result0 = time(NIM_NIL);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
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

N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
	NimStringDesc* result0;
	Timeinfo110603 ti0;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result0 = (NimStringDesc*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI110603);
	LOC1 = (time_t)0;
	LOC1 = gettime_110636_2726502234();
	chckNil((void*)(&ti0));
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI110603);
	getlocaltime_110638_2726502234(LOC1, (&ti0));
	LOC2 = (NimStringDesc*)0;
	LOC3 = (NimStringDesc*)0;
	LOC3 = nimIntToStr(ti0.year);
	LOC4 = (NimStringDesc*)0;
	LOC4 = nsuIntToStr(((NI) ((NI)(((NI) (ti0.month)) + ((NI) 1)))), ((NI) 2));
	LOC5 = (NimStringDesc*)0;
	LOC5 = nsuIntToStr(((NI) (ti0.monthday)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 45);
appendString(LOC2, LOC4);
appendChar(LOC2, 45);
appendString(LOC2, LOC5);
	result0 = LOC2;
	return result0;
}

N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
	NimStringDesc* result0;
	Timeinfo110603 ti0;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result0 = (NimStringDesc*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI110603);
	LOC1 = (time_t)0;
	LOC1 = gettime_110636_2726502234();
	chckNil((void*)(&ti0));
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI110603);
	getlocaltime_110638_2726502234(LOC1, (&ti0));
	LOC2 = (NimStringDesc*)0;
	LOC3 = (NimStringDesc*)0;
	LOC3 = nsuIntToStr(((NI) (ti0.hour)), ((NI) 2));
	LOC4 = (NimStringDesc*)0;
	LOC4 = nsuIntToStr(((NI) (ti0.minute)), ((NI) 2));
	LOC5 = (NimStringDesc*)0;
	LOC5 = nsuIntToStr(((NI) (ti0.second)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 58);
appendString(LOC2, LOC4);
appendChar(LOC2, 58);
appendString(LOC2, LOC5);
	result0 = LOC2;
	return result0;
}

N_NIMCALL(NF, toseconds_110658_2726502234)(time_t time0) {
	NF result0;
	result0 = (NF)0;
	result0 = ((NF) (time0));
	return result0;
}

N_NIMCALL(NF, ntepochTime)(void) {
	NF result0;
	struct timeval a0;
	result0 = (NF)0;
	memset((void*)(&a0), 0, sizeof(a0));
	gettimeofday((&a0), NIM_NIL);
	result0 = ((NF)(((double) (a0.tv_sec))) + (NF)(((NF)(((double) (a0.tv_usec))) * (NF)(9.9999999999999995e-07))));
	return result0;
}

N_NIMCALL(NI64, ntDiffTime)(time_t a0, time_t b0) {
	NI64 result0;
	NF LOC1;
{	result0 = (NI64)0;
	LOC1 = (NF)0;
	LOC1 = difftime(a0, b0);
	result0 = float64ToInt64(LOC1);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void) {
	tzset();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void) {
static TNimNode* TMP3560[11];
static TNimNode* TMP3561[12];
NI TMP3563;
static char* NIM_CONST TMP3562[12] = {
"mJan", 
"mFeb", 
"mMar", 
"mApr", 
"mMay", 
"mJun", 
"mJul", 
"mAug", 
"mSep", 
"mOct", 
"mNov", 
"mDec"};
static TNimNode* TMP3564[7];
NI TMP3566;
static char* NIM_CONST TMP3565[7] = {
"dMon", 
"dTue", 
"dWed", 
"dThu", 
"dFri", 
"dSat", 
"dSun"};
static TNimNode TMP19[33];
NTI110603.size = sizeof(Timeinfo110603);
NTI110603.kind = 17;
NTI110603.base = (&NTI3408);
TMP3560[0] = &TMP19[1];
NTI110606.size = sizeof(NI);
NTI110606.kind = 20;
NTI110606.base = (&NTI104);
NTI110606.flags = 3;
TMP19[1].kind = 1;
TMP19[1].offset = offsetof(Timeinfo110603, second);
TMP19[1].typ = (&NTI110606);
TMP19[1].name = "second";
TMP3560[1] = &TMP19[2];
NTI110608.size = sizeof(NI);
NTI110608.kind = 20;
NTI110608.base = (&NTI104);
NTI110608.flags = 3;
TMP19[2].kind = 1;
TMP19[2].offset = offsetof(Timeinfo110603, minute);
TMP19[2].typ = (&NTI110608);
TMP19[2].name = "minute";
TMP3560[2] = &TMP19[3];
NTI110610.size = sizeof(NI);
NTI110610.kind = 20;
NTI110610.base = (&NTI104);
NTI110610.flags = 3;
TMP19[3].kind = 1;
TMP19[3].offset = offsetof(Timeinfo110603, hour);
TMP19[3].typ = (&NTI110610);
TMP19[3].name = "hour";
TMP3560[3] = &TMP19[4];
NTI110613.size = sizeof(NI);
NTI110613.kind = 20;
NTI110613.base = (&NTI104);
NTI110613.flags = 3;
TMP19[4].kind = 1;
TMP19[4].offset = offsetof(Timeinfo110603, monthday);
TMP19[4].typ = (&NTI110613);
TMP19[4].name = "monthday";
TMP3560[4] = &TMP19[5];
NTI110203.size = sizeof(Month110203);
NTI110203.kind = 14;
NTI110203.base = 0;
NTI110203.flags = 3;
for (TMP3563 = 0; TMP3563 < 12; TMP3563++) {
TMP19[TMP3563+6].kind = 1;
TMP19[TMP3563+6].offset = TMP3563;
TMP19[TMP3563+6].name = TMP3562[TMP3563];
TMP3561[TMP3563] = &TMP19[TMP3563+6];
}
TMP19[18].len = 12; TMP19[18].kind = 2; TMP19[18].sons = &TMP3561[0];
NTI110203.node = &TMP19[18];
TMP19[5].kind = 1;
TMP19[5].offset = offsetof(Timeinfo110603, month);
TMP19[5].typ = (&NTI110203);
TMP19[5].name = "month";
TMP3560[5] = &TMP19[19];
TMP19[19].kind = 1;
TMP19[19].offset = offsetof(Timeinfo110603, year);
TMP19[19].typ = (&NTI104);
TMP19[19].name = "year";
TMP3560[6] = &TMP19[20];
NTI110205.size = sizeof(Weekday110205);
NTI110205.kind = 14;
NTI110205.base = 0;
NTI110205.flags = 3;
for (TMP3566 = 0; TMP3566 < 7; TMP3566++) {
TMP19[TMP3566+21].kind = 1;
TMP19[TMP3566+21].offset = TMP3566;
TMP19[TMP3566+21].name = TMP3565[TMP3566];
TMP3564[TMP3566] = &TMP19[TMP3566+21];
}
TMP19[28].len = 7; TMP19[28].kind = 2; TMP19[28].sons = &TMP3564[0];
NTI110205.node = &TMP19[28];
TMP19[20].kind = 1;
TMP19[20].offset = offsetof(Timeinfo110603, weekday);
TMP19[20].typ = (&NTI110205);
TMP19[20].name = "weekday";
TMP3560[7] = &TMP19[29];
NTI110618.size = sizeof(NI);
NTI110618.kind = 20;
NTI110618.base = (&NTI104);
NTI110618.flags = 3;
TMP19[29].kind = 1;
TMP19[29].offset = offsetof(Timeinfo110603, yearday);
TMP19[29].typ = (&NTI110618);
TMP19[29].name = "yearday";
TMP3560[8] = &TMP19[30];
TMP19[30].kind = 1;
TMP19[30].offset = offsetof(Timeinfo110603, isdst);
TMP19[30].typ = (&NTI130);
TMP19[30].name = "isDST";
TMP3560[9] = &TMP19[31];
TMP19[31].kind = 1;
TMP19[31].offset = offsetof(Timeinfo110603, tzname);
TMP19[31].typ = (&NTI138);
TMP19[31].name = "tzname";
TMP3560[10] = &TMP19[32];
TMP19[32].kind = 1;
TMP19[32].offset = offsetof(Timeinfo110603, timezone);
TMP19[32].typ = (&NTI104);
TMP19[32].name = "timezone";
TMP19[0].len = 11; TMP19[0].kind = 2; TMP19[0].sons = &TMP3560[0];
NTI110603.node = &TMP19[0];
}

