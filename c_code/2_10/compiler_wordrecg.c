/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Tident201010 Tident201010;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj201004 Tidobj201004;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU16 Tspecialword277003;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY277336[264];
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
struct  Tidobj201004  {
  TNimObject Sup;
NI id;
};
struct  Tident201010  {
  Tidobj201004 Sup;
NimStringDesc* s;
Tident201010* next;
NI h;
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
N_NIMCALL(void, initspecials_277373_1391470768)(void);
N_NIMCALL(Tident201010*, getident_201445_791273810)(NimStringDesc* identifier0, NI h0);
N_NIMCALL(NI, hashignorestyle_150892_213663784)(NimStringDesc* x0);
N_NIMCALL(Tspecialword277003, whichkeyword_277365_1391470768)(Tident201010* id0);
N_NIMCALL(Tident201010*, getident_201441_791273810)(NimStringDesc* identifier0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
STRING_LITERAL(T1391470768_2, "", 0);
STRING_LITERAL(T1391470768_3, "addr", 4);
STRING_LITERAL(T1391470768_4, "and", 3);
STRING_LITERAL(T1391470768_5, "as", 2);
STRING_LITERAL(T1391470768_6, "asm", 3);
STRING_LITERAL(T1391470768_7, "atomic", 6);
STRING_LITERAL(T1391470768_8, "bind", 4);
STRING_LITERAL(T1391470768_9, "block", 5);
STRING_LITERAL(T1391470768_10, "break", 5);
STRING_LITERAL(T1391470768_11, "case", 4);
STRING_LITERAL(T1391470768_12, "cast", 4);
STRING_LITERAL(T1391470768_13, "concept", 7);
STRING_LITERAL(T1391470768_14, "const", 5);
STRING_LITERAL(T1391470768_15, "continue", 8);
STRING_LITERAL(T1391470768_16, "converter", 9);
STRING_LITERAL(T1391470768_17, "defer", 5);
STRING_LITERAL(T1391470768_18, "discard", 7);
STRING_LITERAL(T1391470768_19, "distinct", 8);
STRING_LITERAL(T1391470768_20, "div", 3);
STRING_LITERAL(T1391470768_21, "do", 2);
STRING_LITERAL(T1391470768_22, "elif", 4);
STRING_LITERAL(T1391470768_23, "else", 4);
STRING_LITERAL(T1391470768_24, "end", 3);
STRING_LITERAL(T1391470768_25, "enum", 4);
STRING_LITERAL(T1391470768_26, "except", 6);
STRING_LITERAL(T1391470768_27, "export", 6);
STRING_LITERAL(T1391470768_28, "finally", 7);
STRING_LITERAL(T1391470768_29, "for", 3);
STRING_LITERAL(T1391470768_30, "from", 4);
STRING_LITERAL(T1391470768_31, "func", 4);
STRING_LITERAL(T1391470768_32, "generic", 7);
STRING_LITERAL(T1391470768_33, "if", 2);
STRING_LITERAL(T1391470768_34, "import", 6);
STRING_LITERAL(T1391470768_35, "in", 2);
STRING_LITERAL(T1391470768_36, "include", 7);
STRING_LITERAL(T1391470768_37, "interface", 9);
STRING_LITERAL(T1391470768_38, "is", 2);
STRING_LITERAL(T1391470768_39, "isnot", 5);
STRING_LITERAL(T1391470768_40, "iterator", 8);
STRING_LITERAL(T1391470768_41, "let", 3);
STRING_LITERAL(T1391470768_42, "macro", 5);
STRING_LITERAL(T1391470768_43, "method", 6);
STRING_LITERAL(T1391470768_44, "mixin", 5);
STRING_LITERAL(T1391470768_45, "mod", 3);
STRING_LITERAL(T1391470768_46, "nil", 3);
STRING_LITERAL(T1391470768_47, "not", 3);
STRING_LITERAL(T1391470768_48, "notin", 5);
STRING_LITERAL(T1391470768_49, "object", 6);
STRING_LITERAL(T1391470768_50, "of", 2);
STRING_LITERAL(T1391470768_51, "or", 2);
STRING_LITERAL(T1391470768_52, "out", 3);
STRING_LITERAL(T1391470768_53, "proc", 4);
STRING_LITERAL(T1391470768_54, "ptr", 3);
STRING_LITERAL(T1391470768_55, "raise", 5);
STRING_LITERAL(T1391470768_56, "ref", 3);
STRING_LITERAL(T1391470768_57, "return", 6);
STRING_LITERAL(T1391470768_58, "shl", 3);
STRING_LITERAL(T1391470768_59, "shr", 3);
STRING_LITERAL(T1391470768_60, "static", 6);
STRING_LITERAL(T1391470768_61, "template", 8);
STRING_LITERAL(T1391470768_62, "try", 3);
STRING_LITERAL(T1391470768_63, "tuple", 5);
STRING_LITERAL(T1391470768_64, "type", 4);
STRING_LITERAL(T1391470768_65, "using", 5);
STRING_LITERAL(T1391470768_66, "var", 3);
STRING_LITERAL(T1391470768_67, "when", 4);
STRING_LITERAL(T1391470768_68, "while", 5);
STRING_LITERAL(T1391470768_69, "with", 4);
STRING_LITERAL(T1391470768_70, "without", 7);
STRING_LITERAL(T1391470768_71, "xor", 3);
STRING_LITERAL(T1391470768_72, "yield", 5);
STRING_LITERAL(T1391470768_73, ":", 1);
STRING_LITERAL(T1391470768_74, "::", 2);
STRING_LITERAL(T1391470768_75, "=", 1);
STRING_LITERAL(T1391470768_76, ".", 1);
STRING_LITERAL(T1391470768_77, "..", 2);
STRING_LITERAL(T1391470768_78, "*", 1);
STRING_LITERAL(T1391470768_79, "-", 1);
STRING_LITERAL(T1391470768_80, "magic", 5);
STRING_LITERAL(T1391470768_81, "thread", 6);
STRING_LITERAL(T1391470768_82, "final", 5);
STRING_LITERAL(T1391470768_83, "profiler", 8);
STRING_LITERAL(T1391470768_84, "objchecks", 9);
STRING_LITERAL(T1391470768_85, "intdefine", 9);
STRING_LITERAL(T1391470768_86, "strdefine", 9);
STRING_LITERAL(T1391470768_87, "destroy", 7);
STRING_LITERAL(T1391470768_88, "immediate", 9);
STRING_LITERAL(T1391470768_89, "constructor", 11);
STRING_LITERAL(T1391470768_90, "destructor", 10);
STRING_LITERAL(T1391470768_91, "delegator", 9);
STRING_LITERAL(T1391470768_92, "override", 8);
STRING_LITERAL(T1391470768_93, "importcpp", 9);
STRING_LITERAL(T1391470768_94, "importobjc", 10);
STRING_LITERAL(T1391470768_95, "importcompilerproc", 18);
STRING_LITERAL(T1391470768_96, "importc", 7);
STRING_LITERAL(T1391470768_97, "exportc", 7);
STRING_LITERAL(T1391470768_98, "exportnims", 10);
STRING_LITERAL(T1391470768_99, "incompletestruct", 16);
STRING_LITERAL(T1391470768_100, "requiresinit", 12);
STRING_LITERAL(T1391470768_101, "align", 5);
STRING_LITERAL(T1391470768_102, "nodecl", 6);
STRING_LITERAL(T1391470768_103, "pure", 4);
STRING_LITERAL(T1391470768_104, "sideeffect", 10);
STRING_LITERAL(T1391470768_105, "header", 6);
STRING_LITERAL(T1391470768_106, "nosideeffect", 12);
STRING_LITERAL(T1391470768_107, "gcsafe", 6);
STRING_LITERAL(T1391470768_108, "noreturn", 8);
STRING_LITERAL(T1391470768_109, "merge", 5);
STRING_LITERAL(T1391470768_110, "lib", 3);
STRING_LITERAL(T1391470768_111, "dynlib", 6);
STRING_LITERAL(T1391470768_112, "compilerproc", 12);
STRING_LITERAL(T1391470768_113, "procvar", 7);
STRING_LITERAL(T1391470768_114, "base", 4);
STRING_LITERAL(T1391470768_115, "fatal", 5);
STRING_LITERAL(T1391470768_116, "error", 5);
STRING_LITERAL(T1391470768_117, "warning", 7);
STRING_LITERAL(T1391470768_118, "hint", 4);
STRING_LITERAL(T1391470768_119, "line", 4);
STRING_LITERAL(T1391470768_120, "push", 4);
STRING_LITERAL(T1391470768_121, "pop", 3);
STRING_LITERAL(T1391470768_122, "define", 6);
STRING_LITERAL(T1391470768_123, "undef", 5);
STRING_LITERAL(T1391470768_124, "linedir", 7);
STRING_LITERAL(T1391470768_125, "stacktrace", 10);
STRING_LITERAL(T1391470768_126, "linetrace", 9);
STRING_LITERAL(T1391470768_127, "link", 4);
STRING_LITERAL(T1391470768_128, "compile", 7);
STRING_LITERAL(T1391470768_129, "linksys", 7);
STRING_LITERAL(T1391470768_130, "deprecated", 10);
STRING_LITERAL(T1391470768_131, "varargs", 7);
STRING_LITERAL(T1391470768_132, "callconv", 8);
STRING_LITERAL(T1391470768_133, "breakpoint", 10);
STRING_LITERAL(T1391470768_134, "debugger", 8);
STRING_LITERAL(T1391470768_135, "nimcall", 7);
STRING_LITERAL(T1391470768_136, "stdcall", 7);
STRING_LITERAL(T1391470768_137, "cdecl", 5);
STRING_LITERAL(T1391470768_138, "safecall", 8);
STRING_LITERAL(T1391470768_139, "syscall", 7);
STRING_LITERAL(T1391470768_140, "inline", 6);
STRING_LITERAL(T1391470768_141, "noinline", 8);
STRING_LITERAL(T1391470768_142, "fastcall", 8);
STRING_LITERAL(T1391470768_143, "closure", 7);
STRING_LITERAL(T1391470768_144, "noconv", 6);
STRING_LITERAL(T1391470768_145, "on", 2);
STRING_LITERAL(T1391470768_146, "off", 3);
STRING_LITERAL(T1391470768_147, "checks", 6);
STRING_LITERAL(T1391470768_148, "rangechecks", 11);
STRING_LITERAL(T1391470768_149, "boundchecks", 11);
STRING_LITERAL(T1391470768_150, "overflowchecks", 14);
STRING_LITERAL(T1391470768_151, "nilchecks", 9);
STRING_LITERAL(T1391470768_152, "floatchecks", 11);
STRING_LITERAL(T1391470768_153, "nanchecks", 9);
STRING_LITERAL(T1391470768_154, "infchecks", 9);
STRING_LITERAL(T1391470768_155, "assertions", 10);
STRING_LITERAL(T1391470768_156, "patterns", 8);
STRING_LITERAL(T1391470768_157, "warnings", 8);
STRING_LITERAL(T1391470768_158, "hints", 5);
STRING_LITERAL(T1391470768_159, "optimization", 12);
STRING_LITERAL(T1391470768_160, "raises", 6);
STRING_LITERAL(T1391470768_161, "writes", 6);
STRING_LITERAL(T1391470768_162, "reads", 5);
STRING_LITERAL(T1391470768_163, "size", 4);
STRING_LITERAL(T1391470768_164, "effects", 7);
STRING_LITERAL(T1391470768_165, "tags", 4);
STRING_LITERAL(T1391470768_166, "deadcodeelim", 12);
STRING_LITERAL(T1391470768_167, "safecode", 8);
STRING_LITERAL(T1391470768_168, "noforward", 9);
STRING_LITERAL(T1391470768_169, "norewrite", 9);
STRING_LITERAL(T1391470768_170, "pragma", 6);
STRING_LITERAL(T1391470768_171, "compiletime", 11);
STRING_LITERAL(T1391470768_172, "noinit", 6);
STRING_LITERAL(T1391470768_173, "passc", 5);
STRING_LITERAL(T1391470768_174, "passl", 5);
STRING_LITERAL(T1391470768_175, "borrow", 6);
STRING_LITERAL(T1391470768_176, "discardable", 11);
STRING_LITERAL(T1391470768_177, "fieldchecks", 11);
STRING_LITERAL(T1391470768_178, "watchpoint", 10);
STRING_LITERAL(T1391470768_179, "subschar", 8);
STRING_LITERAL(T1391470768_180, "acyclic", 7);
STRING_LITERAL(T1391470768_181, "shallow", 7);
STRING_LITERAL(T1391470768_182, "unroll", 6);
STRING_LITERAL(T1391470768_183, "linearscanend", 13);
STRING_LITERAL(T1391470768_184, "computedgoto", 12);
STRING_LITERAL(T1391470768_185, "injectstmt", 10);
STRING_LITERAL(T1391470768_186, "experimental", 12);
STRING_LITERAL(T1391470768_187, "write", 5);
STRING_LITERAL(T1391470768_188, "gensym", 6);
STRING_LITERAL(T1391470768_189, "inject", 6);
STRING_LITERAL(T1391470768_190, "dirty", 5);
STRING_LITERAL(T1391470768_191, "inheritable", 11);
STRING_LITERAL(T1391470768_192, "threadvar", 9);
STRING_LITERAL(T1391470768_193, "emit", 4);
STRING_LITERAL(T1391470768_194, "asmnostackframe", 15);
STRING_LITERAL(T1391470768_195, "implicitstatic", 14);
STRING_LITERAL(T1391470768_196, "global", 6);
STRING_LITERAL(T1391470768_197, "codegendecl", 11);
STRING_LITERAL(T1391470768_198, "unchecked", 9);
STRING_LITERAL(T1391470768_199, "guard", 5);
STRING_LITERAL(T1391470768_200, "locks", 5);
STRING_LITERAL(T1391470768_201, "partial", 7);
STRING_LITERAL(T1391470768_202, "auto", 4);
STRING_LITERAL(T1391470768_203, "bool", 4);
STRING_LITERAL(T1391470768_204, "catch", 5);
STRING_LITERAL(T1391470768_205, "char", 4);
STRING_LITERAL(T1391470768_206, "class", 5);
STRING_LITERAL(T1391470768_207, "const_cast", 10);
STRING_LITERAL(T1391470768_208, "default", 7);
STRING_LITERAL(T1391470768_209, "delete", 6);
STRING_LITERAL(T1391470768_210, "double", 6);
STRING_LITERAL(T1391470768_211, "dynamic_cast", 12);
STRING_LITERAL(T1391470768_212, "explicit", 8);
STRING_LITERAL(T1391470768_213, "extern", 6);
STRING_LITERAL(T1391470768_214, "false", 5);
STRING_LITERAL(T1391470768_215, "float", 5);
STRING_LITERAL(T1391470768_216, "friend", 6);
STRING_LITERAL(T1391470768_217, "goto", 4);
STRING_LITERAL(T1391470768_218, "int", 3);
STRING_LITERAL(T1391470768_219, "long", 4);
STRING_LITERAL(T1391470768_220, "mutable", 7);
STRING_LITERAL(T1391470768_221, "namespace", 9);
STRING_LITERAL(T1391470768_222, "new", 3);
STRING_LITERAL(T1391470768_223, "operator", 8);
STRING_LITERAL(T1391470768_224, "private", 7);
STRING_LITERAL(T1391470768_225, "protected", 9);
STRING_LITERAL(T1391470768_226, "public", 6);
STRING_LITERAL(T1391470768_227, "register", 8);
STRING_LITERAL(T1391470768_228, "reinterpret_cast", 16);
STRING_LITERAL(T1391470768_229, "short", 5);
STRING_LITERAL(T1391470768_230, "signed", 6);
STRING_LITERAL(T1391470768_231, "sizeof", 6);
STRING_LITERAL(T1391470768_232, "static_cast", 11);
STRING_LITERAL(T1391470768_233, "struct", 6);
STRING_LITERAL(T1391470768_234, "switch", 6);
STRING_LITERAL(T1391470768_235, "this", 4);
STRING_LITERAL(T1391470768_236, "throw", 5);
STRING_LITERAL(T1391470768_237, "true", 4);
STRING_LITERAL(T1391470768_238, "typedef", 7);
STRING_LITERAL(T1391470768_239, "typeid", 6);
STRING_LITERAL(T1391470768_240, "typename", 8);
STRING_LITERAL(T1391470768_241, "union", 5);
STRING_LITERAL(T1391470768_242, "packed", 6);
STRING_LITERAL(T1391470768_243, "unsigned", 8);
STRING_LITERAL(T1391470768_244, "virtual", 7);
STRING_LITERAL(T1391470768_245, "void", 4);
STRING_LITERAL(T1391470768_246, "volatile", 8);
STRING_LITERAL(T1391470768_247, "wchar_t", 7);
STRING_LITERAL(T1391470768_248, "alignas", 7);
STRING_LITERAL(T1391470768_249, "alignof", 7);
STRING_LITERAL(T1391470768_250, "constexpr", 9);
STRING_LITERAL(T1391470768_251, "decltype", 8);
STRING_LITERAL(T1391470768_252, "nullptr", 7);
STRING_LITERAL(T1391470768_253, "noexcept", 8);
STRING_LITERAL(T1391470768_254, "thread_local", 12);
STRING_LITERAL(T1391470768_255, "static_assert", 13);
STRING_LITERAL(T1391470768_256, "char16_t", 8);
STRING_LITERAL(T1391470768_257, "char32_t", 8);
STRING_LITERAL(T1391470768_258, "stdin", 5);
STRING_LITERAL(T1391470768_259, "stdout", 6);
STRING_LITERAL(T1391470768_260, "stderr", 6);
STRING_LITERAL(T1391470768_261, "inout", 5);
STRING_LITERAL(T1391470768_262, "bycopy", 6);
STRING_LITERAL(T1391470768_263, "byref", 5);
STRING_LITERAL(T1391470768_264, "oneway", 6);
STRING_LITERAL(T1391470768_265, "bitsize", 7);
NIM_CONST TY277336 specialwords_277332_1391470768 = {((NimStringDesc*) &T1391470768_2),
((NimStringDesc*) &T1391470768_3),
((NimStringDesc*) &T1391470768_4),
((NimStringDesc*) &T1391470768_5),
((NimStringDesc*) &T1391470768_6),
((NimStringDesc*) &T1391470768_7),
((NimStringDesc*) &T1391470768_8),
((NimStringDesc*) &T1391470768_9),
((NimStringDesc*) &T1391470768_10),
((NimStringDesc*) &T1391470768_11),
((NimStringDesc*) &T1391470768_12),
((NimStringDesc*) &T1391470768_13),
((NimStringDesc*) &T1391470768_14),
((NimStringDesc*) &T1391470768_15),
((NimStringDesc*) &T1391470768_16),
((NimStringDesc*) &T1391470768_17),
((NimStringDesc*) &T1391470768_18),
((NimStringDesc*) &T1391470768_19),
((NimStringDesc*) &T1391470768_20),
((NimStringDesc*) &T1391470768_21),
((NimStringDesc*) &T1391470768_22),
((NimStringDesc*) &T1391470768_23),
((NimStringDesc*) &T1391470768_24),
((NimStringDesc*) &T1391470768_25),
((NimStringDesc*) &T1391470768_26),
((NimStringDesc*) &T1391470768_27),
((NimStringDesc*) &T1391470768_28),
((NimStringDesc*) &T1391470768_29),
((NimStringDesc*) &T1391470768_30),
((NimStringDesc*) &T1391470768_31),
((NimStringDesc*) &T1391470768_32),
((NimStringDesc*) &T1391470768_33),
((NimStringDesc*) &T1391470768_34),
((NimStringDesc*) &T1391470768_35),
((NimStringDesc*) &T1391470768_36),
((NimStringDesc*) &T1391470768_37),
((NimStringDesc*) &T1391470768_38),
((NimStringDesc*) &T1391470768_39),
((NimStringDesc*) &T1391470768_40),
((NimStringDesc*) &T1391470768_41),
((NimStringDesc*) &T1391470768_42),
((NimStringDesc*) &T1391470768_43),
((NimStringDesc*) &T1391470768_44),
((NimStringDesc*) &T1391470768_45),
((NimStringDesc*) &T1391470768_46),
((NimStringDesc*) &T1391470768_47),
((NimStringDesc*) &T1391470768_48),
((NimStringDesc*) &T1391470768_49),
((NimStringDesc*) &T1391470768_50),
((NimStringDesc*) &T1391470768_51),
((NimStringDesc*) &T1391470768_52),
((NimStringDesc*) &T1391470768_53),
((NimStringDesc*) &T1391470768_54),
((NimStringDesc*) &T1391470768_55),
((NimStringDesc*) &T1391470768_56),
((NimStringDesc*) &T1391470768_57),
((NimStringDesc*) &T1391470768_58),
((NimStringDesc*) &T1391470768_59),
((NimStringDesc*) &T1391470768_60),
((NimStringDesc*) &T1391470768_61),
((NimStringDesc*) &T1391470768_62),
((NimStringDesc*) &T1391470768_63),
((NimStringDesc*) &T1391470768_64),
((NimStringDesc*) &T1391470768_65),
((NimStringDesc*) &T1391470768_66),
((NimStringDesc*) &T1391470768_67),
((NimStringDesc*) &T1391470768_68),
((NimStringDesc*) &T1391470768_69),
((NimStringDesc*) &T1391470768_70),
((NimStringDesc*) &T1391470768_71),
((NimStringDesc*) &T1391470768_72),
((NimStringDesc*) &T1391470768_73),
((NimStringDesc*) &T1391470768_74),
((NimStringDesc*) &T1391470768_75),
((NimStringDesc*) &T1391470768_76),
((NimStringDesc*) &T1391470768_77),
((NimStringDesc*) &T1391470768_78),
((NimStringDesc*) &T1391470768_79),
((NimStringDesc*) &T1391470768_80),
((NimStringDesc*) &T1391470768_81),
((NimStringDesc*) &T1391470768_82),
((NimStringDesc*) &T1391470768_83),
((NimStringDesc*) &T1391470768_84),
((NimStringDesc*) &T1391470768_85),
((NimStringDesc*) &T1391470768_86),
((NimStringDesc*) &T1391470768_87),
((NimStringDesc*) &T1391470768_88),
((NimStringDesc*) &T1391470768_89),
((NimStringDesc*) &T1391470768_90),
((NimStringDesc*) &T1391470768_91),
((NimStringDesc*) &T1391470768_92),
((NimStringDesc*) &T1391470768_93),
((NimStringDesc*) &T1391470768_94),
((NimStringDesc*) &T1391470768_95),
((NimStringDesc*) &T1391470768_96),
((NimStringDesc*) &T1391470768_97),
((NimStringDesc*) &T1391470768_98),
((NimStringDesc*) &T1391470768_99),
((NimStringDesc*) &T1391470768_100),
((NimStringDesc*) &T1391470768_101),
((NimStringDesc*) &T1391470768_102),
((NimStringDesc*) &T1391470768_103),
((NimStringDesc*) &T1391470768_104),
((NimStringDesc*) &T1391470768_105),
((NimStringDesc*) &T1391470768_106),
((NimStringDesc*) &T1391470768_107),
((NimStringDesc*) &T1391470768_108),
((NimStringDesc*) &T1391470768_109),
((NimStringDesc*) &T1391470768_110),
((NimStringDesc*) &T1391470768_111),
((NimStringDesc*) &T1391470768_112),
((NimStringDesc*) &T1391470768_113),
((NimStringDesc*) &T1391470768_114),
((NimStringDesc*) &T1391470768_115),
((NimStringDesc*) &T1391470768_116),
((NimStringDesc*) &T1391470768_117),
((NimStringDesc*) &T1391470768_118),
((NimStringDesc*) &T1391470768_119),
((NimStringDesc*) &T1391470768_120),
((NimStringDesc*) &T1391470768_121),
((NimStringDesc*) &T1391470768_122),
((NimStringDesc*) &T1391470768_123),
((NimStringDesc*) &T1391470768_124),
((NimStringDesc*) &T1391470768_125),
((NimStringDesc*) &T1391470768_126),
((NimStringDesc*) &T1391470768_127),
((NimStringDesc*) &T1391470768_128),
((NimStringDesc*) &T1391470768_129),
((NimStringDesc*) &T1391470768_130),
((NimStringDesc*) &T1391470768_131),
((NimStringDesc*) &T1391470768_132),
((NimStringDesc*) &T1391470768_133),
((NimStringDesc*) &T1391470768_134),
((NimStringDesc*) &T1391470768_135),
((NimStringDesc*) &T1391470768_136),
((NimStringDesc*) &T1391470768_137),
((NimStringDesc*) &T1391470768_138),
((NimStringDesc*) &T1391470768_139),
((NimStringDesc*) &T1391470768_140),
((NimStringDesc*) &T1391470768_141),
((NimStringDesc*) &T1391470768_142),
((NimStringDesc*) &T1391470768_143),
((NimStringDesc*) &T1391470768_144),
((NimStringDesc*) &T1391470768_145),
((NimStringDesc*) &T1391470768_146),
((NimStringDesc*) &T1391470768_147),
((NimStringDesc*) &T1391470768_148),
((NimStringDesc*) &T1391470768_149),
((NimStringDesc*) &T1391470768_150),
((NimStringDesc*) &T1391470768_151),
((NimStringDesc*) &T1391470768_152),
((NimStringDesc*) &T1391470768_153),
((NimStringDesc*) &T1391470768_154),
((NimStringDesc*) &T1391470768_155),
((NimStringDesc*) &T1391470768_156),
((NimStringDesc*) &T1391470768_157),
((NimStringDesc*) &T1391470768_158),
((NimStringDesc*) &T1391470768_159),
((NimStringDesc*) &T1391470768_160),
((NimStringDesc*) &T1391470768_161),
((NimStringDesc*) &T1391470768_162),
((NimStringDesc*) &T1391470768_163),
((NimStringDesc*) &T1391470768_164),
((NimStringDesc*) &T1391470768_165),
((NimStringDesc*) &T1391470768_166),
((NimStringDesc*) &T1391470768_167),
((NimStringDesc*) &T1391470768_168),
((NimStringDesc*) &T1391470768_169),
((NimStringDesc*) &T1391470768_170),
((NimStringDesc*) &T1391470768_171),
((NimStringDesc*) &T1391470768_172),
((NimStringDesc*) &T1391470768_173),
((NimStringDesc*) &T1391470768_174),
((NimStringDesc*) &T1391470768_175),
((NimStringDesc*) &T1391470768_176),
((NimStringDesc*) &T1391470768_177),
((NimStringDesc*) &T1391470768_178),
((NimStringDesc*) &T1391470768_179),
((NimStringDesc*) &T1391470768_180),
((NimStringDesc*) &T1391470768_181),
((NimStringDesc*) &T1391470768_182),
((NimStringDesc*) &T1391470768_183),
((NimStringDesc*) &T1391470768_184),
((NimStringDesc*) &T1391470768_185),
((NimStringDesc*) &T1391470768_186),
((NimStringDesc*) &T1391470768_187),
((NimStringDesc*) &T1391470768_188),
((NimStringDesc*) &T1391470768_189),
((NimStringDesc*) &T1391470768_190),
((NimStringDesc*) &T1391470768_191),
((NimStringDesc*) &T1391470768_192),
((NimStringDesc*) &T1391470768_193),
((NimStringDesc*) &T1391470768_194),
((NimStringDesc*) &T1391470768_195),
((NimStringDesc*) &T1391470768_196),
((NimStringDesc*) &T1391470768_197),
((NimStringDesc*) &T1391470768_198),
((NimStringDesc*) &T1391470768_199),
((NimStringDesc*) &T1391470768_200),
((NimStringDesc*) &T1391470768_201),
((NimStringDesc*) &T1391470768_202),
((NimStringDesc*) &T1391470768_203),
((NimStringDesc*) &T1391470768_204),
((NimStringDesc*) &T1391470768_205),
((NimStringDesc*) &T1391470768_206),
((NimStringDesc*) &T1391470768_207),
((NimStringDesc*) &T1391470768_208),
((NimStringDesc*) &T1391470768_209),
((NimStringDesc*) &T1391470768_210),
((NimStringDesc*) &T1391470768_211),
((NimStringDesc*) &T1391470768_212),
((NimStringDesc*) &T1391470768_213),
((NimStringDesc*) &T1391470768_214),
((NimStringDesc*) &T1391470768_215),
((NimStringDesc*) &T1391470768_216),
((NimStringDesc*) &T1391470768_217),
((NimStringDesc*) &T1391470768_218),
((NimStringDesc*) &T1391470768_219),
((NimStringDesc*) &T1391470768_220),
((NimStringDesc*) &T1391470768_221),
((NimStringDesc*) &T1391470768_222),
((NimStringDesc*) &T1391470768_223),
((NimStringDesc*) &T1391470768_224),
((NimStringDesc*) &T1391470768_225),
((NimStringDesc*) &T1391470768_226),
((NimStringDesc*) &T1391470768_227),
((NimStringDesc*) &T1391470768_228),
((NimStringDesc*) &T1391470768_229),
((NimStringDesc*) &T1391470768_230),
((NimStringDesc*) &T1391470768_231),
((NimStringDesc*) &T1391470768_232),
((NimStringDesc*) &T1391470768_233),
((NimStringDesc*) &T1391470768_234),
((NimStringDesc*) &T1391470768_235),
((NimStringDesc*) &T1391470768_236),
((NimStringDesc*) &T1391470768_237),
((NimStringDesc*) &T1391470768_238),
((NimStringDesc*) &T1391470768_239),
((NimStringDesc*) &T1391470768_240),
((NimStringDesc*) &T1391470768_241),
((NimStringDesc*) &T1391470768_242),
((NimStringDesc*) &T1391470768_243),
((NimStringDesc*) &T1391470768_244),
((NimStringDesc*) &T1391470768_245),
((NimStringDesc*) &T1391470768_246),
((NimStringDesc*) &T1391470768_247),
((NimStringDesc*) &T1391470768_248),
((NimStringDesc*) &T1391470768_249),
((NimStringDesc*) &T1391470768_250),
((NimStringDesc*) &T1391470768_251),
((NimStringDesc*) &T1391470768_252),
((NimStringDesc*) &T1391470768_253),
((NimStringDesc*) &T1391470768_254),
((NimStringDesc*) &T1391470768_255),
((NimStringDesc*) &T1391470768_256),
((NimStringDesc*) &T1391470768_257),
((NimStringDesc*) &T1391470768_258),
((NimStringDesc*) &T1391470768_259),
((NimStringDesc*) &T1391470768_260),
((NimStringDesc*) &T1391470768_261),
((NimStringDesc*) &T1391470768_262),
((NimStringDesc*) &T1391470768_263),
((NimStringDesc*) &T1391470768_264),
((NimStringDesc*) &T1391470768_265)}
;

N_NIMCALL(void, initspecials_277373_1391470768)(void) {
	{
		Tspecialword277003 s_277414_1391470768;
		NI res_277426_1391470768;
		s_277414_1391470768 = (Tspecialword277003)0;
		res_277426_1391470768 = ((NI) 1);
		{
			while (1) {
				NI LOC4;
				Tident201010* LOC5;
				if (!(res_277426_1391470768 <= ((NI) 263))) goto LA3;
				s_277414_1391470768 = ((Tspecialword277003) (res_277426_1391470768));
				LOC4 = (NI)0;
				LOC4 = hashignorestyle_150892_213663784(specialwords_277332_1391470768[(s_277414_1391470768)- 0]);
				LOC5 = (Tident201010*)0;
				LOC5 = getident_201445_791273810(specialwords_277332_1391470768[(s_277414_1391470768)- 0], LOC4);
				(*LOC5).Sup.id = ((NI) (s_277414_1391470768));
				res_277426_1391470768 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(Tspecialword277003, whichkeyword_277365_1391470768)(Tident201010* id0) {
	Tspecialword277003 result0;
	result0 = (Tspecialword277003)0;
	{
		if (!((*id0).Sup.id < ((NI) 0))) goto LA3;
		result0 = ((Tspecialword277003) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((Tspecialword277003) ((*id0).Sup.id));
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tspecialword277003, whichkeyword_277369_1391470768)(NimStringDesc* id0) {
	Tspecialword277003 result0;
	Tident201010* LOC1;
	result0 = (Tspecialword277003)0;
	LOC1 = (Tident201010*)0;
	LOC1 = getident_201441_791273810(id0);
	result0 = whichkeyword_277365_1391470768(LOC1);
	return result0;
}

N_NIMCALL(NI, findstr_277339_1391470768)(NimStringDesc** a0, NI a0Len0, NimStringDesc* s0) {
	NI result0;
{	result0 = (NI)0;
	{
		NI i_277356_1391470768;
		NI HEX3Atmp_277358_1391470768;
		NI res_277361_1391470768;
		i_277356_1391470768 = (NI)0;
		HEX3Atmp_277358_1391470768 = (NI)0;
		HEX3Atmp_277358_1391470768 = (a0Len0-1);
		res_277361_1391470768 = ((NI) 0);
		{
			while (1) {
				if (!(res_277361_1391470768 <= HEX3Atmp_277358_1391470768)) goto LA3;
				i_277356_1391470768 = res_277361_1391470768;
				{
					NI LOC6;
					LOC6 = (NI)0;
					LOC6 = nsuCmpIgnoreStyle(a0[i_277356_1391470768], s0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result0 = i_277356_1391470768;
					goto BeforeRet;
				}
				LA7: ;
				res_277361_1391470768 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((NI) -1);
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgInit000)(void) {
	initspecials_277373_1391470768();
}

NIM_EXTERNC N_NOINLINE(void, compiler_wordrecgDatInit000)(void) {
}

