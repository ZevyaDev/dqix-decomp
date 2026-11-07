#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetResources_0200fb8c(int* gameState);
int IsSubBrightnessTransitionActive(GameResources*);
struct GameResources;
void SetSubBrightness(GameResources*, int, int);
struct BGControlSave_02074bf4;
extern "C" void func_02074e54(struct BGControlSave_02074bf4*);
extern "C" void* GetGlobalFlags_020d6c00(void);
struct GlobalFlags_02038598_4;
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" void func_020dc2d0(int);

struct Struct_ov003_0215445c {
    char unknown_0_[0x38];
    char unknown_38_[0x58 - 0x38];
    unsigned char unknown_58_;
    char unknown_59_[0x5a - 0x59];
    unsigned char unknown_5a_;
    unsigned char unknown_5b_;
};

// USA: func_ov003_0215445c
extern "C" ARM void func_ov003_0215445c(struct Struct_ov003_0215445c* arg0) {
    int var0 = GetResources_0200fb8c((int*)GameState::GetInstance());

    if (arg0->unknown_58_ == 0) {
        arg0->unknown_5a_ = 3;
        return;
    }
    if (arg0->unknown_5b_ == 0) {
        SetSubBrightness((GameResources*)var0, -16, 1);
        arg0->unknown_5b_ = arg0->unknown_5b_ + 1;
        return;
    }
    if (arg0->unknown_5b_ != 1) return;
    if (IsSubBrightnessTransitionActive((GameResources*)var0) != 0) return;

    func_02074e54((struct BGControlSave_02074bf4*)((char*)arg0 + 0x38));
    ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00(), 1);
    func_020dc2d0(0);
    arg0->unknown_5a_ = 3;
    arg0->unknown_5b_ = 0;
}
