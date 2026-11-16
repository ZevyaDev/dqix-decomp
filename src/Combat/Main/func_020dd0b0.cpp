#if !defined(jpn)
#include <globaldefs.h>
#include "Resource/StringList.h"

extern const char data_020f29cc[];
extern const char data_020f29b8[];

// USA: func_020dd0b0
extern "C" ARM void func_020dd0b0(int arg0, char* arg1) {
    const char* var0;
    const char* var1;
    if (arg0 >= 0 && arg1 != NULL) {
        var1 = data_020f29b8;
        var0 = data_020f29cc;
        arg1[0] = 0;
        StringList var2;
        var2.Reset();
    } else {
        return;
    }
    GetStringFromNAT((char*)((int)arg1), (const char*)((void*)var0), arg0, 0, 1, (const char*)((int)var1));
}
#endif
