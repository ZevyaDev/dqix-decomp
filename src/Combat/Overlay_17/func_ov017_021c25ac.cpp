#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsNotLocalWirelessGuest_0202c508(void* wireless);
extern "C" void func_ov017_021c2380(int arg0, int arg1);
extern "C" unsigned char func_02039820(void* arg0);
extern "C" int IsPerformingGesture_020535c8(signed char* gameObject);
extern "C" unsigned char GetOwnPartyLeaderObjectIndex_020100b0(GameState* gameState);

// USA: func_ov017_021c25ac
extern "C" ARM void func_ov017_021c25ac() {
    GameState* var0 = GameState::GetInstance();
    void* var1 = GetLocalWireless_0202ae18();
    GameObject* var2 = var0->GetUnknownGameObject();
    if (var2 != 0 && func_02039820(var2) != 0 && IsPerformingGesture_020535c8((signed char*)var2) == 0) {
        for (int var3 = 0; var3 < 4; var3++) {
            func_ov017_021c2380(var3, GetOwnPartyLeaderObjectIndex_020100b0(var0));
        }
    }
    if (IsNotLocalWirelessGuest_0202c508(var1) != 0) {
        for (int var4 = 0; var4 < 4; var4++) {
            for (int var5 = 0; var5 < 0x30; var5++) {
                func_ov017_021c2380(var4, var5 + 0x70);
            }
        }
    } else {
        for (int var6 = 0; var6 < 0x30; var6++) {
            func_ov017_021c2380(GetOwnPartyLeaderObjectIndex_020100b0(var0), var6 + 0x70);
        }
    }
}
