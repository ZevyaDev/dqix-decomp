#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Object3D.h"

struct ActiveZone_020fdd44 {
    unsigned short zoneId_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short : 14;
};
extern "C" struct ActiveZone_020fdd44* GetActiveZones_02027ca4(void);
extern "C" struct ActiveZone_020fdd44* FindActiveZone_02028bd0(struct ActiveZone_020fdd44* zones, int zoneId);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
struct LocalWireless_0202c1a4;
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);
extern "C" GameObject* func_ov017_021a2738(void* arg0, int arg1);

// USA: func_ov017_0219e180
extern "C" ARM void func_ov017_0219e180(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    struct ActiveZone_020fdd44* var1 = GetActiveZones_02027ca4();
    void* var2 = GetLocalWireless_0202ae18();
    if (IsLocalWirelessOn_0202b7d8((int*)var2) != 0) {
        if (GetOwnProtagonistObjectIndex_0202c1a4((struct LocalWireless_0202c1a4*)var2) != 0) {
            return;
        }
    }
    struct ActiveZone_020fdd44* var3 = FindActiveZone_02028bd0(var1, arg1);
    if (var3 == NULL) {
        return;
    }
    int var4 = var3->unknown_2_0_;
    for (int var5 = 0; var5 < 0xc; var5++) {
        GameObject* var6 = var0->GetMaybeFieldMonsterByIndex(var4 * 0xc + 0x70 + var5);
        if (var6 == NULL) {
            continue;
        }
        GameObject* var7 = func_ov017_021a2738(arg0, var6->obj3D_.unknown_2_);
        if (var7 == NULL) {
            continue;
        }
        var7->obj3D_.ShallowCloneModelAndAnimationsTo(&var6->obj3D_);
    }
}
