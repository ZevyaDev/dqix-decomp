#include <globaldefs.h>

struct EffectParams_02078398_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xf];
    unsigned char unknown_10_;
    unsigned char unknown_11_0_ : 1;
    unsigned char unknown_11_1_ : 1;
    unsigned char unknown_11_2_ : 1;
    unsigned char unknown_11_3_ : 1;
    unsigned char unknown_11_4_ : 1;
    unsigned char unknown_11_5_ : 1;
    unsigned char unknown_11_6_ : 1;
    unsigned char unknown_11_7_ : 1;
    short unknown_12_;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
    short unknown_1c_;
    short unknown_1e_;
    int unknown_20_; int unknown_24_; int unknown_28_; int unknown_2c_; int unknown_30_;
    int unknown_34_; int unknown_38_; int unknown_3c_; int unknown_40_;
    int unknown_44_; int unknown_48_; int unknown_4c_;
};

// USA: InitEffectParams_02078484
extern "C" ARM void InitEffectParams_02078484(struct EffectParams_02078398_2* params) {
    params->unknown_0_ = 0;
    params->unknown_10_ = 1;
    params->unknown_12_ = 0;
    params->unknown_14_ = -1;
    params->unknown_16_ = -1;
    params->unknown_18_ = -1;
    params->unknown_1a_ = -1;
    params->unknown_1c_ = -0x1000;
    params->unknown_20_ = 0;
    params->unknown_24_ = 0;
    params->unknown_28_ = 0;
    params->unknown_2c_ = 0;
    params->unknown_30_ = 0;
    params->unknown_34_ = 0;
    params->unknown_38_ = 0;
    params->unknown_3c_ = 0;
    params->unknown_40_ = 0;
    params->unknown_44_ = 0x1000;
    params->unknown_48_ = 0x1000;
    params->unknown_4c_ = 0x1000;
    params->unknown_11_0_ = 0;
    params->unknown_11_1_ = 0;
    params->unknown_11_2_ = 1;
    params->unknown_11_3_ = 0;
    params->unknown_11_4_ = 0;
    params->unknown_11_5_ = 0;
    params->unknown_11_6_ = 0;
    params->unknown_11_7_ = 0;
}
