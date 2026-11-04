#include <globaldefs.h>
#if defined(jpn)

struct Struct_020454dc {
    unsigned char* unknown_0_;
};

// JPN: func_020454dc
extern "C" ARM void func_020454dc(Struct_020454dc* arg0, int arg1) {
    unsigned char* var0 = arg0->unknown_0_;
    arg0->unknown_0_ = var0 + 1;
    *var0 = arg1;
    var0 = arg0->unknown_0_;
    arg0->unknown_0_ = var0 + 1;
    *var0 = arg1 >> 8;
}
#endif
