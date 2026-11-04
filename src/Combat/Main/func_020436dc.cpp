#include <globaldefs.h>
#if defined(jpn)

struct Struct_020436dc {
    char unknown_0_[0x173c];
    int unknown_173c_[4];
};

// JPN: func_020436dc
extern "C" ARM void func_020436dc(Struct_020436dc* arg0, int arg1, int arg2) {
    if (arg2 == -1) {
        for (int var0 = 0; var0 < 4; var0++) {
            arg0->unknown_173c_[arg2] = arg1;
        }
    } else if (arg2 < 0) {
        for (int var0 = 0; var0 < 4; var0++) {
            arg0->unknown_173c_[var0] = arg1;
        }
    } else if (arg2 >= 4) {
        for (int var0 = 0; var0 < 4; var0++) {
            arg0->unknown_173c_[var0] = arg1;
        }
    } else {
        arg0->unknown_173c_[arg2] = arg1;
    }
}
#endif
