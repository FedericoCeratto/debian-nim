/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tident190012 Tident190012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj190006 Tidobj190006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY197333[261];
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj190006  {
  TNimObject Sup;
NI id;
};
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, initspecials_197370)(void);
N_NIMCALL(Tident190012*, getident_190445)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_137892)(NimStringDesc* x);
N_NIMCALL(NU16, whichkeyword_197362)(Tident190012* id);
N_NIMCALL(Tident190012*, getident_190441)(NimStringDesc* identifier);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
STRING_LITERAL(TMP527, "", 0);
STRING_LITERAL(TMP528, "addr", 4);
STRING_LITERAL(TMP529, "and", 3);
STRING_LITERAL(TMP530, "as", 2);
STRING_LITERAL(TMP531, "asm", 3);
STRING_LITERAL(TMP532, "atomic", 6);
STRING_LITERAL(TMP533, "bind", 4);
STRING_LITERAL(TMP534, "block", 5);
STRING_LITERAL(TMP535, "break", 5);
STRING_LITERAL(TMP536, "case", 4);
STRING_LITERAL(TMP537, "cast", 4);
STRING_LITERAL(TMP538, "concept", 7);
STRING_LITERAL(TMP539, "const", 5);
STRING_LITERAL(TMP540, "continue", 8);
STRING_LITERAL(TMP541, "converter", 9);
STRING_LITERAL(TMP542, "defer", 5);
STRING_LITERAL(TMP543, "discard", 7);
STRING_LITERAL(TMP544, "distinct", 8);
STRING_LITERAL(TMP545, "div", 3);
STRING_LITERAL(TMP546, "do", 2);
STRING_LITERAL(TMP547, "elif", 4);
STRING_LITERAL(TMP548, "else", 4);
STRING_LITERAL(TMP549, "end", 3);
STRING_LITERAL(TMP550, "enum", 4);
STRING_LITERAL(TMP551, "except", 6);
STRING_LITERAL(TMP552, "export", 6);
STRING_LITERAL(TMP553, "finally", 7);
STRING_LITERAL(TMP554, "for", 3);
STRING_LITERAL(TMP555, "from", 4);
STRING_LITERAL(TMP556, "func", 4);
STRING_LITERAL(TMP557, "generic", 7);
STRING_LITERAL(TMP558, "if", 2);
STRING_LITERAL(TMP559, "import", 6);
STRING_LITERAL(TMP560, "in", 2);
STRING_LITERAL(TMP561, "include", 7);
STRING_LITERAL(TMP562, "interface", 9);
STRING_LITERAL(TMP563, "is", 2);
STRING_LITERAL(TMP564, "isnot", 5);
STRING_LITERAL(TMP565, "iterator", 8);
STRING_LITERAL(TMP566, "let", 3);
STRING_LITERAL(TMP567, "macro", 5);
STRING_LITERAL(TMP568, "method", 6);
STRING_LITERAL(TMP569, "mixin", 5);
STRING_LITERAL(TMP570, "mod", 3);
STRING_LITERAL(TMP571, "nil", 3);
STRING_LITERAL(TMP572, "not", 3);
STRING_LITERAL(TMP573, "notin", 5);
STRING_LITERAL(TMP574, "object", 6);
STRING_LITERAL(TMP575, "of", 2);
STRING_LITERAL(TMP576, "or", 2);
STRING_LITERAL(TMP577, "out", 3);
STRING_LITERAL(TMP578, "proc", 4);
STRING_LITERAL(TMP579, "ptr", 3);
STRING_LITERAL(TMP580, "raise", 5);
STRING_LITERAL(TMP581, "ref", 3);
STRING_LITERAL(TMP582, "return", 6);
STRING_LITERAL(TMP583, "shl", 3);
STRING_LITERAL(TMP584, "shr", 3);
STRING_LITERAL(TMP585, "static", 6);
STRING_LITERAL(TMP586, "template", 8);
STRING_LITERAL(TMP587, "try", 3);
STRING_LITERAL(TMP588, "tuple", 5);
STRING_LITERAL(TMP589, "type", 4);
STRING_LITERAL(TMP590, "using", 5);
STRING_LITERAL(TMP591, "var", 3);
STRING_LITERAL(TMP592, "when", 4);
STRING_LITERAL(TMP593, "while", 5);
STRING_LITERAL(TMP594, "with", 4);
STRING_LITERAL(TMP595, "without", 7);
STRING_LITERAL(TMP596, "xor", 3);
STRING_LITERAL(TMP597, "yield", 5);
STRING_LITERAL(TMP598, ":", 1);
STRING_LITERAL(TMP599, "::", 2);
STRING_LITERAL(TMP600, "=", 1);
STRING_LITERAL(TMP601, ".", 1);
STRING_LITERAL(TMP602, "..", 2);
STRING_LITERAL(TMP603, "*", 1);
STRING_LITERAL(TMP604, "-", 1);
STRING_LITERAL(TMP605, "magic", 5);
STRING_LITERAL(TMP606, "thread", 6);
STRING_LITERAL(TMP607, "final", 5);
STRING_LITERAL(TMP608, "profiler", 8);
STRING_LITERAL(TMP609, "objchecks", 9);
STRING_LITERAL(TMP610, "destroy", 7);
STRING_LITERAL(TMP611, "immediate", 9);
STRING_LITERAL(TMP612, "constructor", 11);
STRING_LITERAL(TMP613, "destructor", 10);
STRING_LITERAL(TMP614, "delegator", 9);
STRING_LITERAL(TMP615, "override", 8);
STRING_LITERAL(TMP616, "importcpp", 9);
STRING_LITERAL(TMP617, "importobjc", 10);
STRING_LITERAL(TMP618, "importcompilerproc", 18);
STRING_LITERAL(TMP619, "importc", 7);
STRING_LITERAL(TMP620, "exportc", 7);
STRING_LITERAL(TMP621, "exportnims", 10);
STRING_LITERAL(TMP622, "incompletestruct", 16);
STRING_LITERAL(TMP623, "requiresinit", 12);
STRING_LITERAL(TMP624, "align", 5);
STRING_LITERAL(TMP625, "nodecl", 6);
STRING_LITERAL(TMP626, "pure", 4);
STRING_LITERAL(TMP627, "sideeffect", 10);
STRING_LITERAL(TMP628, "header", 6);
STRING_LITERAL(TMP629, "nosideeffect", 12);
STRING_LITERAL(TMP630, "gcsafe", 6);
STRING_LITERAL(TMP631, "noreturn", 8);
STRING_LITERAL(TMP632, "merge", 5);
STRING_LITERAL(TMP633, "lib", 3);
STRING_LITERAL(TMP634, "dynlib", 6);
STRING_LITERAL(TMP635, "compilerproc", 12);
STRING_LITERAL(TMP636, "procvar", 7);
STRING_LITERAL(TMP637, "base", 4);
STRING_LITERAL(TMP638, "fatal", 5);
STRING_LITERAL(TMP639, "error", 5);
STRING_LITERAL(TMP640, "warning", 7);
STRING_LITERAL(TMP641, "hint", 4);
STRING_LITERAL(TMP642, "line", 4);
STRING_LITERAL(TMP643, "push", 4);
STRING_LITERAL(TMP644, "pop", 3);
STRING_LITERAL(TMP645, "define", 6);
STRING_LITERAL(TMP646, "undef", 5);
STRING_LITERAL(TMP647, "linedir", 7);
STRING_LITERAL(TMP648, "stacktrace", 10);
STRING_LITERAL(TMP649, "linetrace", 9);
STRING_LITERAL(TMP650, "link", 4);
STRING_LITERAL(TMP651, "compile", 7);
STRING_LITERAL(TMP652, "linksys", 7);
STRING_LITERAL(TMP653, "deprecated", 10);
STRING_LITERAL(TMP654, "varargs", 7);
STRING_LITERAL(TMP655, "callconv", 8);
STRING_LITERAL(TMP656, "breakpoint", 10);
STRING_LITERAL(TMP657, "debugger", 8);
STRING_LITERAL(TMP658, "nimcall", 7);
STRING_LITERAL(TMP659, "stdcall", 7);
STRING_LITERAL(TMP660, "cdecl", 5);
STRING_LITERAL(TMP661, "safecall", 8);
STRING_LITERAL(TMP662, "syscall", 7);
STRING_LITERAL(TMP663, "inline", 6);
STRING_LITERAL(TMP664, "noinline", 8);
STRING_LITERAL(TMP665, "fastcall", 8);
STRING_LITERAL(TMP666, "closure", 7);
STRING_LITERAL(TMP667, "noconv", 6);
STRING_LITERAL(TMP668, "on", 2);
STRING_LITERAL(TMP669, "off", 3);
STRING_LITERAL(TMP670, "checks", 6);
STRING_LITERAL(TMP671, "rangechecks", 11);
STRING_LITERAL(TMP672, "boundchecks", 11);
STRING_LITERAL(TMP673, "overflowchecks", 14);
STRING_LITERAL(TMP674, "nilchecks", 9);
STRING_LITERAL(TMP675, "floatchecks", 11);
STRING_LITERAL(TMP676, "nanchecks", 9);
STRING_LITERAL(TMP677, "infchecks", 9);
STRING_LITERAL(TMP678, "assertions", 10);
STRING_LITERAL(TMP679, "patterns", 8);
STRING_LITERAL(TMP680, "warnings", 8);
STRING_LITERAL(TMP681, "hints", 5);
STRING_LITERAL(TMP682, "optimization", 12);
STRING_LITERAL(TMP683, "raises", 6);
STRING_LITERAL(TMP684, "writes", 6);
STRING_LITERAL(TMP685, "reads", 5);
STRING_LITERAL(TMP686, "size", 4);
STRING_LITERAL(TMP687, "effects", 7);
STRING_LITERAL(TMP688, "tags", 4);
STRING_LITERAL(TMP689, "deadcodeelim", 12);
STRING_LITERAL(TMP690, "safecode", 8);
STRING_LITERAL(TMP691, "noforward", 9);
STRING_LITERAL(TMP692, "norewrite", 9);
STRING_LITERAL(TMP693, "pragma", 6);
STRING_LITERAL(TMP694, "compiletime", 11);
STRING_LITERAL(TMP695, "noinit", 6);
STRING_LITERAL(TMP696, "passc", 5);
STRING_LITERAL(TMP697, "passl", 5);
STRING_LITERAL(TMP698, "borrow", 6);
STRING_LITERAL(TMP699, "discardable", 11);
STRING_LITERAL(TMP700, "fieldchecks", 11);
STRING_LITERAL(TMP701, "watchpoint", 10);
STRING_LITERAL(TMP702, "subschar", 8);
STRING_LITERAL(TMP703, "acyclic", 7);
STRING_LITERAL(TMP704, "shallow", 7);
STRING_LITERAL(TMP705, "unroll", 6);
STRING_LITERAL(TMP706, "linearscanend", 13);
STRING_LITERAL(TMP707, "computedgoto", 12);
STRING_LITERAL(TMP708, "injectstmt", 10);
STRING_LITERAL(TMP709, "experimental", 12);
STRING_LITERAL(TMP710, "write", 5);
STRING_LITERAL(TMP711, "gensym", 6);
STRING_LITERAL(TMP712, "inject", 6);
STRING_LITERAL(TMP713, "dirty", 5);
STRING_LITERAL(TMP714, "inheritable", 11);
STRING_LITERAL(TMP715, "threadvar", 9);
STRING_LITERAL(TMP716, "emit", 4);
STRING_LITERAL(TMP717, "asmnostackframe", 15);
STRING_LITERAL(TMP718, "implicitstatic", 14);
STRING_LITERAL(TMP719, "global", 6);
STRING_LITERAL(TMP720, "codegendecl", 11);
STRING_LITERAL(TMP721, "unchecked", 9);
STRING_LITERAL(TMP722, "guard", 5);
STRING_LITERAL(TMP723, "locks", 5);
STRING_LITERAL(TMP724, "auto", 4);
STRING_LITERAL(TMP725, "bool", 4);
STRING_LITERAL(TMP726, "catch", 5);
STRING_LITERAL(TMP727, "char", 4);
STRING_LITERAL(TMP728, "class", 5);
STRING_LITERAL(TMP729, "const_cast", 10);
STRING_LITERAL(TMP730, "default", 7);
STRING_LITERAL(TMP731, "delete", 6);
STRING_LITERAL(TMP732, "double", 6);
STRING_LITERAL(TMP733, "dynamic_cast", 12);
STRING_LITERAL(TMP734, "explicit", 8);
STRING_LITERAL(TMP735, "extern", 6);
STRING_LITERAL(TMP736, "false", 5);
STRING_LITERAL(TMP737, "float", 5);
STRING_LITERAL(TMP738, "friend", 6);
STRING_LITERAL(TMP739, "goto", 4);
STRING_LITERAL(TMP740, "int", 3);
STRING_LITERAL(TMP741, "long", 4);
STRING_LITERAL(TMP742, "mutable", 7);
STRING_LITERAL(TMP743, "namespace", 9);
STRING_LITERAL(TMP744, "new", 3);
STRING_LITERAL(TMP745, "operator", 8);
STRING_LITERAL(TMP746, "private", 7);
STRING_LITERAL(TMP747, "protected", 9);
STRING_LITERAL(TMP748, "public", 6);
STRING_LITERAL(TMP749, "register", 8);
STRING_LITERAL(TMP750, "reinterpret_cast", 16);
STRING_LITERAL(TMP751, "short", 5);
STRING_LITERAL(TMP752, "signed", 6);
STRING_LITERAL(TMP753, "sizeof", 6);
STRING_LITERAL(TMP754, "static_cast", 11);
STRING_LITERAL(TMP755, "struct", 6);
STRING_LITERAL(TMP756, "switch", 6);
STRING_LITERAL(TMP757, "this", 4);
STRING_LITERAL(TMP758, "throw", 5);
STRING_LITERAL(TMP759, "true", 4);
STRING_LITERAL(TMP760, "typedef", 7);
STRING_LITERAL(TMP761, "typeid", 6);
STRING_LITERAL(TMP762, "typename", 8);
STRING_LITERAL(TMP763, "union", 5);
STRING_LITERAL(TMP764, "packed", 6);
STRING_LITERAL(TMP765, "unsigned", 8);
STRING_LITERAL(TMP766, "virtual", 7);
STRING_LITERAL(TMP767, "void", 4);
STRING_LITERAL(TMP768, "volatile", 8);
STRING_LITERAL(TMP769, "wchar_t", 7);
STRING_LITERAL(TMP770, "alignas", 7);
STRING_LITERAL(TMP771, "alignof", 7);
STRING_LITERAL(TMP772, "constexpr", 9);
STRING_LITERAL(TMP773, "decltype", 8);
STRING_LITERAL(TMP774, "nullptr", 7);
STRING_LITERAL(TMP775, "noexcept", 8);
STRING_LITERAL(TMP776, "thread_local", 12);
STRING_LITERAL(TMP777, "static_assert", 13);
STRING_LITERAL(TMP778, "char16_t", 8);
STRING_LITERAL(TMP779, "char32_t", 8);
STRING_LITERAL(TMP780, "stdin", 5);
STRING_LITERAL(TMP781, "stdout", 6);
STRING_LITERAL(TMP782, "stderr", 6);
STRING_LITERAL(TMP783, "inout", 5);
STRING_LITERAL(TMP784, "bycopy", 6);
STRING_LITERAL(TMP785, "byref", 5);
STRING_LITERAL(TMP786, "oneway", 6);
STRING_LITERAL(TMP787, "bitsize", 7);
NIM_CONST TY197333 specialwords_197329 = {((NimStringDesc*) &TMP527),
((NimStringDesc*) &TMP528),
((NimStringDesc*) &TMP529),
((NimStringDesc*) &TMP530),
((NimStringDesc*) &TMP531),
((NimStringDesc*) &TMP532),
((NimStringDesc*) &TMP533),
((NimStringDesc*) &TMP534),
((NimStringDesc*) &TMP535),
((NimStringDesc*) &TMP536),
((NimStringDesc*) &TMP537),
((NimStringDesc*) &TMP538),
((NimStringDesc*) &TMP539),
((NimStringDesc*) &TMP540),
((NimStringDesc*) &TMP541),
((NimStringDesc*) &TMP542),
((NimStringDesc*) &TMP543),
((NimStringDesc*) &TMP544),
((NimStringDesc*) &TMP545),
((NimStringDesc*) &TMP546),
((NimStringDesc*) &TMP547),
((NimStringDesc*) &TMP548),
((NimStringDesc*) &TMP549),
((NimStringDesc*) &TMP550),
((NimStringDesc*) &TMP551),
((NimStringDesc*) &TMP552),
((NimStringDesc*) &TMP553),
((NimStringDesc*) &TMP554),
((NimStringDesc*) &TMP555),
((NimStringDesc*) &TMP556),
((NimStringDesc*) &TMP557),
((NimStringDesc*) &TMP558),
((NimStringDesc*) &TMP559),
((NimStringDesc*) &TMP560),
((NimStringDesc*) &TMP561),
((NimStringDesc*) &TMP562),
((NimStringDesc*) &TMP563),
((NimStringDesc*) &TMP564),
((NimStringDesc*) &TMP565),
((NimStringDesc*) &TMP566),
((NimStringDesc*) &TMP567),
((NimStringDesc*) &TMP568),
((NimStringDesc*) &TMP569),
((NimStringDesc*) &TMP570),
((NimStringDesc*) &TMP571),
((NimStringDesc*) &TMP572),
((NimStringDesc*) &TMP573),
((NimStringDesc*) &TMP574),
((NimStringDesc*) &TMP575),
((NimStringDesc*) &TMP576),
((NimStringDesc*) &TMP577),
((NimStringDesc*) &TMP578),
((NimStringDesc*) &TMP579),
((NimStringDesc*) &TMP580),
((NimStringDesc*) &TMP581),
((NimStringDesc*) &TMP582),
((NimStringDesc*) &TMP583),
((NimStringDesc*) &TMP584),
((NimStringDesc*) &TMP585),
((NimStringDesc*) &TMP586),
((NimStringDesc*) &TMP587),
((NimStringDesc*) &TMP588),
((NimStringDesc*) &TMP589),
((NimStringDesc*) &TMP590),
((NimStringDesc*) &TMP591),
((NimStringDesc*) &TMP592),
((NimStringDesc*) &TMP593),
((NimStringDesc*) &TMP594),
((NimStringDesc*) &TMP595),
((NimStringDesc*) &TMP596),
((NimStringDesc*) &TMP597),
((NimStringDesc*) &TMP598),
((NimStringDesc*) &TMP599),
((NimStringDesc*) &TMP600),
((NimStringDesc*) &TMP601),
((NimStringDesc*) &TMP602),
((NimStringDesc*) &TMP603),
((NimStringDesc*) &TMP604),
((NimStringDesc*) &TMP605),
((NimStringDesc*) &TMP606),
((NimStringDesc*) &TMP607),
((NimStringDesc*) &TMP608),
((NimStringDesc*) &TMP609),
((NimStringDesc*) &TMP610),
((NimStringDesc*) &TMP611),
((NimStringDesc*) &TMP612),
((NimStringDesc*) &TMP613),
((NimStringDesc*) &TMP614),
((NimStringDesc*) &TMP615),
((NimStringDesc*) &TMP616),
((NimStringDesc*) &TMP617),
((NimStringDesc*) &TMP618),
((NimStringDesc*) &TMP619),
((NimStringDesc*) &TMP620),
((NimStringDesc*) &TMP621),
((NimStringDesc*) &TMP622),
((NimStringDesc*) &TMP623),
((NimStringDesc*) &TMP624),
((NimStringDesc*) &TMP625),
((NimStringDesc*) &TMP626),
((NimStringDesc*) &TMP627),
((NimStringDesc*) &TMP628),
((NimStringDesc*) &TMP629),
((NimStringDesc*) &TMP630),
((NimStringDesc*) &TMP631),
((NimStringDesc*) &TMP632),
((NimStringDesc*) &TMP633),
((NimStringDesc*) &TMP634),
((NimStringDesc*) &TMP635),
((NimStringDesc*) &TMP636),
((NimStringDesc*) &TMP637),
((NimStringDesc*) &TMP638),
((NimStringDesc*) &TMP639),
((NimStringDesc*) &TMP640),
((NimStringDesc*) &TMP641),
((NimStringDesc*) &TMP642),
((NimStringDesc*) &TMP643),
((NimStringDesc*) &TMP644),
((NimStringDesc*) &TMP645),
((NimStringDesc*) &TMP646),
((NimStringDesc*) &TMP647),
((NimStringDesc*) &TMP648),
((NimStringDesc*) &TMP649),
((NimStringDesc*) &TMP650),
((NimStringDesc*) &TMP651),
((NimStringDesc*) &TMP652),
((NimStringDesc*) &TMP653),
((NimStringDesc*) &TMP654),
((NimStringDesc*) &TMP655),
((NimStringDesc*) &TMP656),
((NimStringDesc*) &TMP657),
((NimStringDesc*) &TMP658),
((NimStringDesc*) &TMP659),
((NimStringDesc*) &TMP660),
((NimStringDesc*) &TMP661),
((NimStringDesc*) &TMP662),
((NimStringDesc*) &TMP663),
((NimStringDesc*) &TMP664),
((NimStringDesc*) &TMP665),
((NimStringDesc*) &TMP666),
((NimStringDesc*) &TMP667),
((NimStringDesc*) &TMP668),
((NimStringDesc*) &TMP669),
((NimStringDesc*) &TMP670),
((NimStringDesc*) &TMP671),
((NimStringDesc*) &TMP672),
((NimStringDesc*) &TMP673),
((NimStringDesc*) &TMP674),
((NimStringDesc*) &TMP675),
((NimStringDesc*) &TMP676),
((NimStringDesc*) &TMP677),
((NimStringDesc*) &TMP678),
((NimStringDesc*) &TMP679),
((NimStringDesc*) &TMP680),
((NimStringDesc*) &TMP681),
((NimStringDesc*) &TMP682),
((NimStringDesc*) &TMP683),
((NimStringDesc*) &TMP684),
((NimStringDesc*) &TMP685),
((NimStringDesc*) &TMP686),
((NimStringDesc*) &TMP687),
((NimStringDesc*) &TMP688),
((NimStringDesc*) &TMP689),
((NimStringDesc*) &TMP690),
((NimStringDesc*) &TMP691),
((NimStringDesc*) &TMP692),
((NimStringDesc*) &TMP693),
((NimStringDesc*) &TMP694),
((NimStringDesc*) &TMP695),
((NimStringDesc*) &TMP696),
((NimStringDesc*) &TMP697),
((NimStringDesc*) &TMP698),
((NimStringDesc*) &TMP699),
((NimStringDesc*) &TMP700),
((NimStringDesc*) &TMP701),
((NimStringDesc*) &TMP702),
((NimStringDesc*) &TMP703),
((NimStringDesc*) &TMP704),
((NimStringDesc*) &TMP705),
((NimStringDesc*) &TMP706),
((NimStringDesc*) &TMP707),
((NimStringDesc*) &TMP708),
((NimStringDesc*) &TMP709),
((NimStringDesc*) &TMP710),
((NimStringDesc*) &TMP711),
((NimStringDesc*) &TMP712),
((NimStringDesc*) &TMP713),
((NimStringDesc*) &TMP714),
((NimStringDesc*) &TMP715),
((NimStringDesc*) &TMP716),
((NimStringDesc*) &TMP717),
((NimStringDesc*) &TMP718),
((NimStringDesc*) &TMP719),
((NimStringDesc*) &TMP720),
((NimStringDesc*) &TMP721),
((NimStringDesc*) &TMP722),
((NimStringDesc*) &TMP723),
((NimStringDesc*) &TMP724),
((NimStringDesc*) &TMP725),
((NimStringDesc*) &TMP726),
((NimStringDesc*) &TMP727),
((NimStringDesc*) &TMP728),
((NimStringDesc*) &TMP729),
((NimStringDesc*) &TMP730),
((NimStringDesc*) &TMP731),
((NimStringDesc*) &TMP732),
((NimStringDesc*) &TMP733),
((NimStringDesc*) &TMP734),
((NimStringDesc*) &TMP735),
((NimStringDesc*) &TMP736),
((NimStringDesc*) &TMP737),
((NimStringDesc*) &TMP738),
((NimStringDesc*) &TMP739),
((NimStringDesc*) &TMP740),
((NimStringDesc*) &TMP741),
((NimStringDesc*) &TMP742),
((NimStringDesc*) &TMP743),
((NimStringDesc*) &TMP744),
((NimStringDesc*) &TMP745),
((NimStringDesc*) &TMP746),
((NimStringDesc*) &TMP747),
((NimStringDesc*) &TMP748),
((NimStringDesc*) &TMP749),
((NimStringDesc*) &TMP750),
((NimStringDesc*) &TMP751),
((NimStringDesc*) &TMP752),
((NimStringDesc*) &TMP753),
((NimStringDesc*) &TMP754),
((NimStringDesc*) &TMP755),
((NimStringDesc*) &TMP756),
((NimStringDesc*) &TMP757),
((NimStringDesc*) &TMP758),
((NimStringDesc*) &TMP759),
((NimStringDesc*) &TMP760),
((NimStringDesc*) &TMP761),
((NimStringDesc*) &TMP762),
((NimStringDesc*) &TMP763),
((NimStringDesc*) &TMP764),
((NimStringDesc*) &TMP765),
((NimStringDesc*) &TMP766),
((NimStringDesc*) &TMP767),
((NimStringDesc*) &TMP768),
((NimStringDesc*) &TMP769),
((NimStringDesc*) &TMP770),
((NimStringDesc*) &TMP771),
((NimStringDesc*) &TMP772),
((NimStringDesc*) &TMP773),
((NimStringDesc*) &TMP774),
((NimStringDesc*) &TMP775),
((NimStringDesc*) &TMP776),
((NimStringDesc*) &TMP777),
((NimStringDesc*) &TMP778),
((NimStringDesc*) &TMP779),
((NimStringDesc*) &TMP780),
((NimStringDesc*) &TMP781),
((NimStringDesc*) &TMP782),
((NimStringDesc*) &TMP783),
((NimStringDesc*) &TMP784),
((NimStringDesc*) &TMP785),
((NimStringDesc*) &TMP786),
((NimStringDesc*) &TMP787)}
;

N_NIMCALL(void, initspecials_197370)(void) {
	{
		NU16 s_197414;
		NI res_197426;
		s_197414 = 0;
		res_197426 = ((NI) 1);
		{
			while (1) {
				NI LOC4;
				Tident190012* LOC5;
				if (!(res_197426 <= ((NI) 260))) goto LA3;
				s_197414 = ((NU16) (res_197426));
				LOC4 = 0;
				LOC4 = hashignorestyle_137892(specialwords_197329[(s_197414)- 0]);
				LOC5 = 0;
				LOC5 = getident_190445(specialwords_197329[(s_197414)- 0], LOC4);
				(*LOC5).Sup.id = ((NI) (s_197414));
				res_197426 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NU16, whichkeyword_197362)(Tident190012* id) {
	NU16 result;
	result = 0;
	{
		if (!((*id).Sup.id < ((NI) 0))) goto LA3;
		result = ((NU16) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((NU16) ((*id).Sup.id));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU16, whichkeyword_197366)(NimStringDesc* id) {
	NU16 result;
	Tident190012* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_190441(id);
	result = whichkeyword_197362(LOC1);
	return result;
}

N_NIMCALL(NI, findstr_197336)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
{	result = 0;
	{
		NI i_197353;
		NI HEX3Atmp_197355;
		NI res_197358;
		i_197353 = 0;
		HEX3Atmp_197355 = 0;
		HEX3Atmp_197355 = (aLen0-1);
		res_197358 = ((NI) 0);
		{
			while (1) {
				if (!(res_197358 <= HEX3Atmp_197355)) goto LA3;
				i_197353 = res_197358;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(a[i_197353], s);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result = i_197353;
					goto BeforeRet;
				}
				LA7: ;
				res_197358 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgInit000)(void) {
	initspecials_197370();
}

NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgDatInit000)(void) {
}

