#include <globaldefs.h>
#include "Resource/StringList.h"

#if defined(jpn)
extern const char data_020f2b6c[];
#define func_020dcf7c func_020de968
extern "C" void func_020de968(int arg0, void* arg1);
#else
extern char data_020f296c;
extern char data_020f297e;
extern "C" void func_020e54bc(int, void*, int, int, unsigned char, int);
#endif

// JPN: func_020de968
// USA: func_020dcf7c
extern "C" ARM void func_020dcf7c(int arg0, void* arg1) {
#if defined(jpn)
    const char* var0;
    if (arg0 > 0 && arg1 != NULL) {
        var0 = data_020f2b6c;
        *(char*)arg1 = 0;
        StringList var1;
        var1.Reset();
    } else {
        return;
    }
    GetStringFromNAT((char*)arg1, var0, arg0, 0, true);
#else
    if (arg0 <= 0) return;
    if (arg1 == NULL) return;
    func_020e54bc((int)arg1, &data_020f296c, arg0, 0, 1, (int)&data_020f297e);
#endif
}
