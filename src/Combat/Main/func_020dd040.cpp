#include <globaldefs.h>
#include "Resource/StringList.h"

#if defined(jpn)
extern const char data_020f2b82[];
#else

extern const char data_020f2994[];
extern const char data_020f29a8[];
#endif

// JPN: func_020dea34
// USA: func_020dd040
extern "C" ARM void func_020dd040(int arg0, char* arg1) {
    const char* var0;
#if !defined(jpn)
    const char* var1;
#endif
    if (arg0 > 0 && arg1 != NULL) {
#if defined(jpn)
        var0 = data_020f2b82;
#else
        var1 = data_020f2994;
        var0 = data_020f29a8;
#endif
        arg1[0] = 0;
        StringList var2;
        var2.Reset();
    } else {
        return;
    }
#if defined(jpn)
    GetStringFromNAT(arg1, var0, arg0, 0, true);
#else
    GetStringFromNAT((char*)((int)arg1), (const char*)((void*)var0), arg0, 0, 1, (const char*)((int)var1));
#endif
}
