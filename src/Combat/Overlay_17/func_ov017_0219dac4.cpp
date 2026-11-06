#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"
#include "World/Object3D.h"


struct ActiveZone_020fdd44;

struct Struct_ov017_0219dac4 {
    Object3D unknown_0_;
    char unknown_ac_[0xc2 - 0xac];
    unsigned char unknown_c2_;
#if defined(jpn)
    char unknown_c3_[0x150 - 0xc3];
#else
    char unknown1_c3_[0x15c - 0xc3];
#endif
    int unknown_15c_;
};

extern "C" void _ZN8Object3D10SetField06Et(Object3D* arg0, int arg1);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" struct ActiveZone_020fdd44* GetActiveZones_02027ca4(void);
extern "C" unsigned short* GetZone3D_02012fe4(void);
extern "C" void* GetFlagManager_0205ec34(void);
extern "C" int func_02053ed0(void* arg0);
extern "C" GameObject* GetCompanionByIndex_0200ff58(GameState* gameState, int index);
extern "C" int GetLeaderObjectIndex_020546a8(void* companion);
extern "C" void func_ov017_0219cdc0(unsigned short arg0, int arg1, signed char arg2);
extern "C" void func_0203409c(unsigned char* arg0);
extern "C" int IsLocalWirelessGuest_0202c540(void* wireless);
extern "C" int IsNotLocalWirelessGuest_0202c508(void* wireless);
extern "C" void func_ov017_021a01bc(unsigned char* arg0);
extern "C" void func_ov017_021cdaa0(void);

// USA: func_ov017_0219dac4
extern "C" ARM void func_ov017_0219dac4(unsigned char* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = GetLocalWireless_0202ae18();
    GetActiveZones_02027ca4();
    unsigned short* var2 = GetZone3D_02012fe4();
    Struct_ov017_0219dac4* var3 = (Struct_ov017_0219dac4*)var0->GetPartyMemberByIndex(arg1);
    GetFlagManager_0205ec34();
    if (var3 == NULL) {
        return;
    }

    unsigned short var4 = var3->unknown_0_.GetField06();
    if (arg2 == 10000) {
        arg2 = 5900;
    } else if (arg2 == 10100) {
        arg2 = 6401;
    }

    if (var3->unknown_15c_ != -1 && func_02053ed0(var3) != 3) {
        var3->unknown_15c_ = arg2;
        for (int var5 = 0; var5 < 4; var5++) {
            Struct_ov017_0219dac4* var6 = (Struct_ov017_0219dac4*)GetCompanionByIndex_0200ff58(var0, var5);
            if (var6 != NULL && arg1 == GetLeaderObjectIndex_020546a8(var6)) {
                var6->unknown_15c_ = arg2;
            }
        }
    }

    _ZN8Object3D10SetField06Et(&var3->unknown_0_, arg2);
    func_ov017_0219cdc0(arg2, 0, arg1);
    var3->unknown_0_.SetInheritedAlpha(31);
    var3->unknown_c2_ &= ~0x40;
    func_0203409c((unsigned char*)var3);
    func_02038508(func_020399a8(var3));

    for (int var7 = 0; var7 < 4; var7++) {
        Struct_ov017_0219dac4* var8 = (Struct_ov017_0219dac4*)GetCompanionByIndex_0200ff58(var0, var7);
        if (var8 != NULL && arg1 == GetLeaderObjectIndex_020546a8(var8)) {
            _ZN8Object3D10SetField06Et(&var8->unknown_0_, arg2);
            var8->unknown_c2_ &= ~0x40;
        }
    }

    if (IsLocalWirelessGuest_0202c540(var1) && arg1 == 0 && arg2 == *var2 && var4 != arg2) {
        func_ov017_021a01bc(arg0);
    }
    if (arg2 == *var2 && IsNotLocalWirelessGuest_0202c508(var1)) {
        func_ov017_021cdaa0();
    }
}
