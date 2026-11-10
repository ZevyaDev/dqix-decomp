#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" int GetFontLoader_02094a00(void);
extern "C" void CancelFontLoad_02094ab0(void);
extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" void* GetGlobalFlags_020d6c00(void);

struct GlobalFlags_02038598_4;
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);

extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void EnableCameraTurning_020a27ac(void* camera);
extern "C" void DisableInputForDuration_020e1154(void* durationMs);

struct Struct_020e455c {
    unsigned char unknown_0_0_ : 2;
    unsigned char unknown_0_2_ : 6;
};

struct Struct_020e455c_2 {
    char unknown_0_[0x1];
    unsigned char unknown_1_;
    char unknown_2_[0xc - 0x2];
    short unknown_c_;
};

// USA: func_020e455c
extern "C" ARM void func_020e455c(struct Struct_020e455c_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    GetFontLoader_02094a00();
    CancelFontLoad_02094ab0();
    GameObject* var1 = var0->GetUnknownGameObject();
    if (var1 != 0) {
        EnablePlayerControl_020397c0(var1);
    }
    ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00(), 2);

    unsigned int var2 = 0x1000000;
    int var3;
    for (var3 = 0; var3 < 4; var3++) {
        GameObject* var4 = var0->GetPartyMemberByIndex(var3);
        if (var4 != 0) {
            ((Object3D*)((unsigned char*)var4))->DisableFlag(var2);
            ((struct Struct_020e455c*)((char*)var4 + 0xc1))->unknown_0_0_ &= ~2;
        }
    }

    if (arg0->unknown_c_ >= 0) {
        int var5 = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(var5))->RemoveTask((int)(arg0->unknown_c_));
        arg0->unknown_c_ = -1;
    }

    EnableCameraTurning_020a27ac((void*)GetFollowCamera_020100f8((char*)var0));
    DisableInputForDuration_020e1154((void*)0x3e8);
    arg0->unknown_1_ = 1;
}
