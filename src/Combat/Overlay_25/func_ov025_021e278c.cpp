#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int _s32_div_f(int a, int b);
extern const char* data_ov025_021ef520[];

// USA: FormatEffectFileName_ov025_021e278c
extern "C" ARM void FormatEffectFileName_ov025_021e278c(int effectId, char* outPath) {
    int var0 = _s32_div_f(effectId, 1000000);
    int var1 = effectId - var0 * 1000000;
    sprintf(outPath, data_ov025_021ef520[var0], var1);
}
