#include <globaldefs.h>
#include "NitroSDK/Graphics3D/RenderConfig.h"

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" float _ffltu(unsigned int v);
extern "C" int fix32_Atan2(int arg0, int arg1);
int fix32ReduceAngle0To2Pi(int angle);
short fix32sin(int x);
short fix32cos(int x);

struct Struct_02096a20 {
    char unknown_0_[0x220];
    unsigned char unknown_220_;
    unsigned char unknown_221_;
    unsigned char unknown_222_;
    unsigned char unknown_223_;
    char unknown_224_[4];
    short unknown_228_;
    short unknown_22a_;
    short unknown_22c_;
    short unknown_22e_;
};


// USA: func_02096a20
extern "C" ARM void func_02096a20(struct Struct_02096a20* arg0) {
    struct Struct_ov009_0218aa28 var0;
    struct Struct_ov009_0218aa28 var1;

    __clear(&var0, 0xc);
    var0.unknown_0_ = (int)(((float)arg0->unknown_222_ - (float)arg0->unknown_220_ > 0.0f)
                    ? 0.5f + 4096.0f * ((float)arg0->unknown_222_ - (float)arg0->unknown_220_)
                    : 4096.0f * ((float)arg0->unknown_222_ - (float)arg0->unknown_220_) - 0.5f);
    var0.unknown_8_ = (int)(((float)arg0->unknown_223_ - (float)arg0->unknown_221_ > 0.0f)
                    ? 0.5f + 4096.0f * ((float)arg0->unknown_223_ - (float)arg0->unknown_221_)
                    : 4096.0f * ((float)arg0->unknown_223_ - (float)arg0->unknown_221_) - 0.5f);
    Vector3fix_Normalize((const Vector3i*)(&var0), (Vector3i*)(&var0));

    const int* var2 = (const int*)&g_nitro3DRenderConfig.viewMatrix;
    __clear(&var1, 0xc);
    var1.unknown_0_ = var2[6];
    var1.unknown_8_ = var2[8];
    Vector3fix_Normalize((const Vector3i*)(&var1), (Vector3i*)(&var1));

    short var3 = (short)fix32ReduceAngle0To2Pi(fix32_Atan2(var0.unknown_0_, var0.unknown_8_));
    short var4 = (short)fix32ReduceAngle0To2Pi(-fix32_Atan2(var1.unknown_0_, var1.unknown_8_));

    arg0->unknown_22e_ = (short)fix32ReduceAngle0To2Pi(var3 + var4);
    arg0->unknown_228_ = fix32sin(arg0->unknown_22e_);
    arg0->unknown_22a_ = 0;
    arg0->unknown_22c_ = fix32cos(arg0->unknown_22e_);
}
