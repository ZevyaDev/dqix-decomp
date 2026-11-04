#include <globaldefs.h>

#if defined(jpn)

#include "Filesystem/BackgroundLoader.h"

struct Struct_ov012_021856c8 {
    char unknown_0_[0x12];
    short unknown_12_;
    int unknown_14_[2];
    int unknown_1c_;
};

// JPN: func_ov012_021856c8
extern "C" ARM int func_ov012_021856c8(Struct_ov012_021856c8* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int* var1 = arg0->unknown_14_;
    for (int var2 = 0; var2 < 2; var2++, var1++) {
        if (*var1 >= 0) {
            var0->RemoveTask(*var1);
            *var1 = -1;
        }
    }
    arg0->unknown_12_ = 0;
    arg0->unknown_1c_ = 0;
    return 1;
}

#endif
