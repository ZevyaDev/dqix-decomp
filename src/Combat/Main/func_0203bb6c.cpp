#include <globaldefs.h>
#if defined(jpn)

struct Struct_0203bb6c_2 {
    char unknown_0_[2];
    short unknown_2_;
};

struct Struct_0203bb6c {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};

// JPN: func_0203bb6c
extern "C" ARM void func_0203bb6c(Struct_0203bb6c_2* arg0, Struct_0203bb6c* arg1, unsigned int arg2,
                                  int arg3, int arg4, int arg5, int arg6, int arg7) {
    short var0 = arg0->unknown_2_;
    if (var0 == -1) {
        return;
    }
    if (arg2 == 0x100 || arg2 == 0x300) {
        arg1->unknown_0_ = ((arg5 & 0x1ff) << 16) | ((arg6 & 0xff) | (arg4 << 25) | 0x4000 | 0x80000000) | arg2;
    } else {
        arg1->unknown_0_ = ((arg5 & 0x1ff) << 16) | ((arg6 & 0xff) | 0x4000 | 0x80000000) | arg2;
    }
    arg1->unknown_4_ = (unsigned short)(var0 | ((arg3 & 3) << 10) | ((arg7 & 0xf) << 12));
}
#endif
