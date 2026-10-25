#include <globaldefs.h>

struct Struct_ov031_022118a8 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[2];
    unsigned char unknown_4_[256];
};

// USA: func_ov031_022118a8
// RC4 key setup: i = j = 0, the state permutation set to the identity, then mixed with the key (at most 16 bytes).
extern "C" ARM void func_ov031_022118a8(Struct_ov031_022118a8* arg0, const void* arg1, unsigned int arg2) {
    unsigned char* var0;
    unsigned char var1, var2;
    int var3;

    if (arg2 > 16) {
        arg2 = 16;
    }

    arg0->unknown_0_ = 0;
    arg0->unknown_1_ = 0;

    var0 = arg0->unknown_4_;

    for (var3 = 0; var3 < 256; var3++) {
        var0[var3] = var3;
    }

    var1 = var2 = 0;
    for (var3 = 0; var3 < 256; var3++) {
        unsigned char var4 = var0[var3];
        var2 = (((unsigned char*)arg1)[var1] + var4 + var2);
        if (++var1 == (unsigned char)arg2) {
            var1 = 0;
        }
        var0[var3] = var0[var2];
        var0[var2] = var4;
    }
}
