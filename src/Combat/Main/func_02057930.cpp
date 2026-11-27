#include <globaldefs.h>

extern "C" void ResetEffectSlot_02059cc8(unsigned char* slot);

struct Struct_02057930 {
    int unknown_0_;                       // 0x0
    int unknown_4_;                       // 0x4
    unsigned char unknown_8_[16][0xd4];  // 0x8 .. 0xd48
    int unknown_d48_;                     // 0xd48
    int unknown_d4c_;                     // 0xd4c
    int unknown_d50_;                     // 0xd50
};

// USA: ResetEffectManager_02057930
extern "C" ARM void ResetEffectManager_02057930(Struct_02057930* effectManager) {
    int i;
    effectManager->unknown_0_ = 0;
    effectManager->unknown_4_ = 0;
    effectManager->unknown_d4c_ = 0;
    effectManager->unknown_d50_ = 0;
    for (i = 0; i < 16; i++) {
        ResetEffectSlot_02059cc8(effectManager->unknown_8_[i]);
    }
    effectManager->unknown_d48_ = 0;
}
