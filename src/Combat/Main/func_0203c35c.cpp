#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/LoadToVRAM.h"

struct Struct_0203c35c {
    #if defined(jpn)
    unsigned char unknown_0_[0x604];
    #else
    unsigned char unknown1_0_[0x504];
    #endif
    int unknown_504_;
    int unknown_508_;
    unsigned int unknown_50c_;
    #if defined(jpn)
    unsigned char unknown_610_[4];
    unsigned short unknown_614_[112];
    #endif
};
struct Struct_0203c35c_2 {
    unsigned char unknown_0_[0x60];
    unsigned short* unknown_60_;
};
struct Struct_020e78c4 {
    float unknown_0_;
    float unknown_4_;
    float unknown_8_;
};
#if defined(jpn)
extern Struct_0203c35c* data_02105244;
#define data_020e78c4 data_020e8220
#define data_020e78b0 data_020e81ec
#define data_020e78a0 data_020e81dc
#else
extern "C" int GetMessageWindow_020421a0();
#endif
extern const Struct_020e78c4 data_020e78c4[7];
extern const float data_020e78b0[5];
extern const unsigned short data_020e78a0[7];

// USA: func_0203c35c
extern "C" ARM void func_0203c35c(Struct_0203c35c* arg0) {
    unsigned short var0[16] __attribute__((aligned(4))) = {};
#if defined(jpn)
    unsigned short* var1 = data_02105244->unknown_614_;
#else
    unsigned short* var1 = ((Struct_0203c35c_2*)GetMessageWindow_020421a0())->unknown_60_;
#endif
    unsigned int var2 = 0xe0;
    memset(var1, 0, var2);
    for (unsigned int var3 = 0; var3 < 7; var3++) {
        var0[1] = 0x294a;
        if (var3 == 6) var0[1] = 0x18c6;
        for (int var4 = 0; var4 < 5; var4++) {
            int var5 = (int)(data_020e78b0[var4] * data_020e78c4[var3].unknown_0_);
            int var6 = (int)(data_020e78b0[var4] * data_020e78c4[var3].unknown_4_);
            int var7 = (int)(data_020e78b0[var4] * data_020e78c4[var3].unknown_8_);
            var5 >>= 3;
            var6 >>= 3;
            var7 >>= 3;
            var0[var4 + 2] = var5 | (var6 << 5) | (var7 << 10);
        }
        var0[15] = data_020e78a0[var3];
        memcpy(var1 + var3 * 16, var0, sizeof(var0));
    }
    DC_FlushRange(var1, var2);
    if (arg0->unknown_504_ == 0) LoadToMainObjStandardPalette(var1, arg0->unknown_50c_, var2);
    else if (arg0->unknown_504_ == 1) LoadToSubObjStandardPalette(var1, arg0->unknown_50c_, var2);
}
