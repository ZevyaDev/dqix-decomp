#include <globaldefs.h>

struct Struct_02057f8c {
    int unknown_0_;
    char unknown_4_[0x1e8];
    struct Struct_02057f8c* unknown_1ec_;
};

// USA: FindEffectResource_02057f8c
extern "C" ARM struct Struct_02057f8c* FindEffectResource_02057f8c(void* effectManager, int effectId) {
    struct Struct_02057f8c* effect = *(struct Struct_02057f8c**)effectManager;
    while (effect != 0) {
        if (effectId == effect->unknown_0_) {
            return effect;
        }
        effect = effect->unknown_1ec_;
    }
    return 0;
}
