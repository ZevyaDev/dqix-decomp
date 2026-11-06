#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

struct GlobalFlags_02038598_4;
struct Struct_02033834;
struct Struct_02018300_3;

extern "C" void* GetParty_02010828(GameState* gameState);
extern "C" int func_02039860(void* arg0);
extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" void func_ov017_021d2ad0(short arg0, int arg1, int arg2, int arg3, unsigned char arg4);
extern "C" void func_ov017_021d2c34(unsigned char arg0, unsigned char arg1, unsigned char arg2);
extern "C" void* GetGlobalFlags_020d6c00();
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" void SetFacingInstantly_02033874(struct Struct_02033834* object, int angle);
extern "C" void DisablePlayerControl_020397cc(struct Struct_02018300_3* object, int standStill);

struct Struct_020a8d08 {
    Object3D unknown_0_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[0xc1 - 0xb0];
    unsigned char unknown_c1_;
};

struct Struct_020a8d08_2 {
    char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    char unknown_6_[2];
    int unknown_8_;
    char unknown_c_[4];
    int unknown_10_;
    int unknown_14_;
};

// USA: func_020a8d08
extern "C" ARM void func_020a8d08(struct Struct_020a8d08_2* arg0, unsigned char arg1) {
    GameState* var0 = GameState::GetInstance();
    Struct_020a8d08* var1 = (Struct_020a8d08*)var0->GetPartyMemberByIndex(arg1);
    Object3D* var2 = &var0->GetUnknownGameObject()->obj3D_;
    GetParty_02010828(var0);
    var0->GetPartyMemberByIndex(func_02039860(var1));
    if ((arg0->unknown_4_ & (1 << arg1)) == 0) {
        return;
    }
    if (arg0->unknown_5_ & (1 << arg1)) {
        return;
    }
    Vector3i var3;
    var3 = var1->unknown_0_.position_;
    var3.x += arg0->unknown_10_;
    var3.z += arg0->unknown_14_;
    var1->unknown_0_.position_ = var3;
    if (var1->unknown_ac_ == 0) {
        var1->unknown_c1_ &= ~8;
        EnablePlayerControl_020397c0(var1);
        arg0->unknown_5_ |= (1 << arg1);
        if (var1->unknown_0_.unknown_4_ != var2->unknown_4_) {
            var1->unknown_0_.position_ = var2->position_;
        }
        Vector3i var4 = var1->unknown_0_.position_;
        func_ov017_021d2ad0(arg1, var4.x, var4.y, var4.z, 0);
        func_ov017_021d2c34(arg1, 0x1f, 0);
        ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00(), 0x402);
    } else {
        SetFacingInstantly_02033874((struct Struct_02033834*)var1, var1->unknown_ae_ + arg0->unknown_8_);
        if (var1->unknown_0_.unknown_4_ == var2->unknown_4_) {
            arg0->unknown_8_ -= 40;
        }
        DisablePlayerControl_020397cc((struct Struct_02018300_3*)var1, 1);
    }
}
