#include <globaldefs.h>
#include "Resource/StringList.h"

struct StringTable_0201099c_14;
#if defined(jpn)
extern const char* data_020f2ca0;
#else
extern int data_020f2a3c;
extern int data_020f2a24;
#endif

struct Struct_020dcfc8 { unsigned char unknown_0_[0x18]; };

// JPN: func_020de9cc
// USA: func_020dcfc8
extern "C" ARM void func_020dcfc8(int arg0, char* arg1) {
    if (arg0 > 0 && arg1 != NULL) {
#if defined(jpn)
        const char* var1;
        arg1[0] = 0;
        var1 = data_020f2ca0;
#else
        int var2, var3;
        arg1[0] = 0;
        var3 = data_020f2a3c;
        var2 = data_020f2a24;
#endif
        StringList var0;
        ((StringList*)((StringTable_0201099c_14*)&var0))->Reset();
#if defined(jpn)
        GetStringFromNAT(arg1, var1, arg0, 0, true);
#else
        GetStringFromNAT((char*)((int)arg1), (const char*)((void*)var2), arg0, 0, 1, (const char*)(var3));
#endif
    }
}
