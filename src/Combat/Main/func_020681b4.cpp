#include <globaldefs.h>

#if defined(jpn)
struct Struct_020681b4 {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

// JPN: func_020681b4
extern "C" ARM void func_020681b4(struct Struct_020681b4* arg0, int arg1, int arg2, int arg3) {
    arg0->unknown_c_ = arg1;
    arg0->unknown_10_ = arg2;
    arg0->unknown_14_ = arg3;
}
#endif
