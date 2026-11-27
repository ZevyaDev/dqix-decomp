#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct LocalWireless_0202b2f0;
extern "C" void SetLocalWirelessPlayerJoined_0202c1e8(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);
extern "C" void* func_0202ae18(void);
extern "C" void CreatePartyMemberObject_ov017_0218f064(GameResources* gameResources, int memberIndex, int kind, int requestModelLoad, int arg4);

// USA: func_ov017_021b0a7c
extern "C" ARM void func_ov017_021b0a7c(unsigned char* arg0) {
    unsigned char* var0;
    GameState* var1;
    GameResources* var2;
    int var3;
    var1 = GameState::GetInstance();
    var2 = GetGameResources();
    var0 = arg0 + 0x1b;
    for (var3 = 0; var3 < 4; var3++) {
        if (var0[var3] != 0) {
            if (!var1->GetGameObjectByIndex(var3)) {
                if (var0[var3] == 1) {
                    CreatePartyMemberObject_ov017_0218f064(var2, var3, 0x200, 0, 0);
                } else {
                    CreatePartyMemberObject_ov017_0218f064(var2, var3, 0x1000, 0, 0);
                }
            }
        }
    }
    struct LocalWireless_0202b2f0* var4 = (struct LocalWireless_0202b2f0*)func_0202ae18();
    int var5;
    for (var5 = 0; var5 < 4; var5++) {
        if ((arg0 + var5)[0x1b] == 1) {
            SetLocalWirelessPlayerJoined_0202c1e8(var4, var5);
        }
    }
}
