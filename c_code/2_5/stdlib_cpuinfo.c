/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <unistd.h>

N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result0;
	result0 = (NI)0;
	result0 = sysconf(_SC_NPROCESSORS_ONLN);
	{
		if (!(result0 <= ((NI) 0))) goto LA3;
		result0 = ((NI) 1);
	}
	LA3: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit000)(void) {
}

