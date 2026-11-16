#include <globaldefs.h>
#include "Resource/StringList.h"

#if defined(jpn)
extern const char* data_020f2bcc;
extern "C" void* func_020e0968(const char* arg0, unsigned int* arg1);

// JPN: func_020e08f0
extern "C" ARM void* func_020e08f0(int arg0, unsigned int* arg1) {
    *arg1 = 0;
    if (arg0 < 0 || arg0 > 12)
        return 0;
    char var0[0x20] = {0};
    if (arg0 == 9)
        arg0 = 8;
    GetStringFromNAT(var0, data_020f2bcc, arg0, 0, true);
    return func_020e0968(var0, arg1);
}
#endif
