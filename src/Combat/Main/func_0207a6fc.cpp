#include <globaldefs.h>

#if defined(jpn)
struct Struct_0207a6fc {
    char unknown_0_[8];
    int unknown_8_;
};

// JPN: func_0207a6fc
extern "C" ARM int func_0207a6fc(Struct_0207a6fc *arg0, int *arg1) {
    int var0 = 1;
    int var1 = (int)((char *)*arg1 - (char *)0);
    int var2;
    if (var1 != -1) {
        if (arg0->unknown_8_ != 0) {
            var0 = 0;
        }
    }
    if (var0 != 0) {
        var2 = 0;
    } else {
        var2 = arg0->unknown_8_ + var1;
    }
    *arg1 = var2;
    return 1;
}
#endif
