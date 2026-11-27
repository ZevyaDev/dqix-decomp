#include <globaldefs.h>

#include "std_library_functions.h"

// USA: ClearFlagRange_0206dfe8
extern "C" ARM void ClearFlagRange_0206dfe8(void *flagManager, int firstFlag, int flagCount) {
    int var0  = firstFlag / 8 + 1;
    int var1 = 8 - firstFlag % 8;
    int var2  = flagCount - var1;
    int var3 = var2 / 8;
    int var4  = var2 % 8;
    if (var3 > 0) {
        memset((unsigned char *) flagManager + 0x8c + var0, 0, var3);
    }
    int var5         = var0 + var3;
    unsigned char *var6 = (unsigned char *) flagManager + 0x8c;
    var6[var5] >>= var4;
    var6[var5] <<= var4;
    var6[var0 - 1] <<= var1;
    var6[var0 - 1] >>= var1;
}
