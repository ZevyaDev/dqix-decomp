#include <globaldefs.h>

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

struct Struct_020e30a4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

// USA: func_020e30a4
extern "C" ARM struct Struct_020e30a4* func_020e30a4(struct Struct_020e30a4* arg0) {
    int var0;
    if (!IsLocalWirelessOn_0202b7d8((int*)GetLocalWireless_0202ae18())) return NULL;
    for (var0 = 0; var0 < 8; var0++) {
        if (arg0->unknown_2_ == 0) return arg0;
        arg0++;
    }
    return NULL;
}
