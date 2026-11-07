#include <globaldefs.h>

#include "Combat/Main/BattleList.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_020534ac(char* arg0);
extern "C" int func_02039750(void* arg0);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" int func_02053604(signed char* arg0);

struct Struct_ov017_02199684 { unsigned char unknown_0_[0x14]; int unknown_14_; unsigned char unknown_18_[0x20 - 0x18]; };
extern "C" void func_ov017_02199684(Struct_ov017_02199684* arg0, int arg1, int arg2);
extern "C" void func_ov017_021996bc(Struct_ov017_02199684* arg0, int arg1);

struct TextWindowManager_0205d1e0;
struct TextWindowManager_0205d228;
struct TextWindowManager_0205d274;
extern "C" void ClearTextWindowManagerBGScreenData_0205d1e0(TextWindowManager_0205d1e0*);
extern "C" void DrawTextWindows_0205d228(TextWindowManager_0205d228*);
extern "C" void FlushTextWindowManagerBGScreenData_0205d274(TextWindowManager_0205d274*);
extern "C" void FillBGUnderTextWindows_0205da88(void*, int, int, int);
struct TextWindowManager_0205d2bc;
extern "C" void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(TextWindowManager_0205d2bc*);

struct TextWindow_0205d0e0 {
    char unknown_0_[0xA8];
    short width_a8_;
    short unknown_aa_;
    short tileX_ac_;
    short tileY_ae_;
};
struct TextWindowManager_0205d81c;
extern "C" TextWindow_0205d0e0* FindTextWindow_0205d81c(TextWindowManager_0205d81c* windowManager, int windowId);

struct BGLayer_0204bc74;
extern "C" void FillBGScreenRect_0204bc74(BGLayer_0204bc74* layer, unsigned short screenEntry, int x, int y, int width, int height, unsigned short palette);

// USA: func_ov017_0219a18c
extern "C" ARM void func_ov017_0219a18c(unsigned char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_0219a18c_16512=0x3e60, Enum_ov017_0219a18c_16500=0x3e54, Enum_ov017_0219a18c_16504=0x3e58, Enum_ov017_0219a18c_180=0x294, Enum_ov017_0219a18c_15360=0x3800, Enum_ov017_0219a18c_3248=0xa90};
#else
 enum {Enum_ov017_0219a18c_16512=0x4080, Enum_ov017_0219a18c_16500=0x4074, Enum_ov017_0219a18c_16504=0x4078, Enum_ov017_0219a18c_180=0xb4, Enum_ov017_0219a18c_15360=0x3c00, Enum_ov017_0219a18c_3248=0xcb0};
#endif
    for (int var0 = 0; var0 < 4; var0++) {
        GameObject* var1 = GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), var0);
        if (var1 != 0) {
            func_020534ac((char*)var1);
        }
    }

    if (*(int*)(arg0 + (Enum_ov017_0219a18c_16512)) == 0 || *(int*)(arg0 + (Enum_ov017_0219a18c_16500)) == 0) {
        return;
    }
    if (*(int*)(arg0 + (Enum_ov017_0219a18c_16504)) < 4) {
        return;
    }

    GameState* var2 = GameState::GetInstance();
    if (func_02039750(var2->GetUnknownGameObject()) != -1) {
        return;
    }

    func_ov017_02199684((Struct_ov017_02199684*)(arg0 + Enum_ov017_0219a18c_180 + Enum_ov017_0219a18c_15360), 2, 0x800);
    ClearTextWindowManagerBGScreenData_0205d1e0(*(TextWindowManager_0205d1e0**)(arg0 + 0x3000 + Enum_ov017_0219a18c_3248));
    DrawTextWindows_0205d228(*(TextWindowManager_0205d228**)(arg0 + 0x3000 + Enum_ov017_0219a18c_3248));
    FillBGUnderTextWindows_0205da88(*(void**)(arg0 + 0x3000 + Enum_ov017_0219a18c_3248), 1, 2, 1);

    GameObject* var3 = var2->GetProtagonist();
    GameObject* var4 = GetPartyMemberBaseByIndex_0200ff1c(var2, GetProtagonistObjectIndex_020100a8(var2));
    int var5 = 0;
    int var6;
    int var7 = func_02039750(var3);
    int var8 = func_02053604((signed char*)var4);
    switch (var7) {
    case -1:
        break;
    case 0:
        var5 = 1;
        var6 = 0;
        break;
    case 1:
        var5 = 1;
        var6 = 1;
        break;
    case 2:
        var5 = 1;
        var6 = 2;
        break;
    case 3:
        var5 = 1;
        var6 = 3;
        break;
    }

    if (var5 && var8 >= 0) {
        TextWindow_0205d0e0* var9 = FindTextWindow_0205d81c(*(TextWindowManager_0205d81c**)(arg0 + 0x3000 + Enum_ov017_0219a18c_3248), var6);
        if (var9 != 0) {
            FillBGScreenRect_0204bc74((BGLayer_0204bc74*)(arg0 + Enum_ov017_0219a18c_180 + Enum_ov017_0219a18c_15360), 1, var9->tileX_ac_, var9->tileY_ae_, var9->width_a8_, var9->unknown_aa_, 0xf);
        }
    }

    FlushTextWindowManagerBGScreenData_0205d274(*(TextWindowManager_0205d274**)(arg0 + 0x3000 + Enum_ov017_0219a18c_3248));
    if (TestFlags04((GameResources*)arg0, 0x10000) == 0) {
        CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(*(TextWindowManager_0205d2bc**)(arg0 + 0x3000 + Enum_ov017_0219a18c_3248));
    }
    func_ov017_021996bc((Struct_ov017_02199684*)(arg0 + Enum_ov017_0219a18c_180 + Enum_ov017_0219a18c_15360), 2);
}
