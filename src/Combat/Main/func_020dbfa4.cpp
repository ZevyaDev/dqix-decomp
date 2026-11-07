#include <globaldefs.h>
extern "C" void* GetEffectManager_02057924(void);

extern "C" void PlayEffect_02057fb4(void* effectManager, int effectId, void* params);

struct Struct_020dbfa4 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[4];
    int unknown_10_;
    unsigned char unknown_14_;
};

// USA: func_020dbfa4
extern "C" ARM void func_020dbfa4(struct Struct_020dbfa4* arg0, int arg1) {
    if (arg0->unknown_10_ == 2 && arg0->unknown_14_ == 0) {
        PlayEffect_02057fb4(GetEffectManager_02057924(), arg0->unknown_8_, (void*)arg1);
        arg0->unknown_14_ = 1;
    }
}
