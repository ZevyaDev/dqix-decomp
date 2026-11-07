#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct Struct_02018300_3;
extern "C" void DisablePlayerControl_020397cc(struct Struct_02018300_3* object, int standStill);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void DisableCameraTurning_020a27b8(unsigned char* camera);
struct Struct_02033834_2;
extern "C" void SetFacing_02033834(struct Struct_02033834_2* object, int angle);
extern "C" void func_02033e18(void* arg0, int* arg1, short arg2);
struct Struct_02033b68;
extern "C" void SetMotionIfDifferent_02033b68(struct Struct_02033b68* object, int motion);

struct Struct_ov017_021bf628 {
    char unknown_0_[8];
    int unknown_8_, unknown_c_, unknown_10_;
    char unknown_14_[0xc];
    short unknown_20_;
};

struct Struct_ov017_021bf628_2 { int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_ov017_021bf628_3 { char unknown_0_[0x44]; struct Struct_ov017_021bf628_2 unknown_44_; };

struct Struct_ov017_021bf628_4 {
    char unknown_0_[0xc];
    struct Struct_ov017_021bf628* unknown_c_;
    char unknown_10_[0x14 - 0x10];
    unsigned short unknown_14_;
    char unknown_16_[0x28 - 0x16];
    int unknown_28_, unknown_2c_, unknown_30_;
};

// USA: func_ov017_021bf628
extern "C" ARM int func_ov017_021bf628(struct Struct_ov017_021bf628_4* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    struct Struct_ov017_021bf628* var2 = arg0->unknown_c_;
    arg0->unknown_28_ = var2->unknown_8_;
    arg0->unknown_2c_ = var2->unknown_c_;
    arg0->unknown_30_ = var2->unknown_10_;
    DisablePlayerControl_020397cc((struct Struct_02018300_3*)var1, 1);
    void* var3 = GetGameResources();
    int var4 = GetFollowCamera_020100f8((char*)var0);
    if (var4 != 0) {
        DisableCameraTurning_020a27b8((unsigned char*)var4);
    }
    if (var3 != 0) {
        SetFlags04((GameResources*)var3, 0x80);
    }
    SetFacing_02033834((struct Struct_02033834_2*)var1, fix32ReduceAngle0To2Pi(var2->unknown_20_));
    struct Struct_ov017_021bf628_2 var5 = ((struct Struct_ov017_021bf628_3*)var1)->unknown_44_;
    int* var6 = (int*)&var5;
    var5.unknown_0_ = var2->unknown_8_;
    var5.unknown_8_ = var2->unknown_10_;
    func_02033e18(var1, var6, 0xcc);
    SetMotionIfDifferent_02033b68((struct Struct_02033b68*)var1, 1);
    arg0->unknown_14_ = 5;
    return 1;
}
