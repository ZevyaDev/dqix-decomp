#if defined(jpn)
enum { Enum_ov017_02195658_1052 = 0x16c, Enum_ov017_02195658_2864 = 0x910 };
#else
enum { Enum_ov017_02195658_1052 = 0x41c, Enum_ov017_02195658_2864 = 0xb30 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct LocalWireless_0202b2f0;
extern "C" struct LocalWireless_0202b2f0* func_0202ae18(void);
extern "C" int IsLocalWirelessPlayerDisconnected_0202c578(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);
extern "C" GameObject* func_0200fee0(GameState* arg0, int arg1);
extern "C" void func_ov017_021905b8(void* arg0, int arg1, int arg2);

// USA: RemoveDepartedPlayer_ov017_02195658
extern "C" ARM int RemoveDepartedPlayer_ov017_02195658(unsigned char* gameResources) {
    GameState* gameState = GameState::GetInstance();
    struct LocalWireless_0202b2f0* wireless = func_0202ae18();
    for (int i = 1; i < 4; i++) {
        int isRemoving = 0;
        int isJoinCleared = 1;
        GameObject* member = func_0200fee0(gameState, i);
        unsigned char* joinRecord = *(unsigned char**)(gameResources + 0x4000 + Enum_ov017_02195658_1052);
        if (joinRecord[0] == 1 && joinRecord[2] == i) {
            if (member != NULL) {
                isRemoving = isJoinCleared;
                isJoinCleared = 0;
            }
        }
        if (IsLocalWirelessPlayerDisconnected_0202c578(wireless, i) != 0) isRemoving = 1;
        if (isRemoving != 0) {
            func_ov017_021905b8(gameResources, i, isJoinCleared);
            if (isJoinCleared != 0) {
                unsigned char* clearedJoinRecord = *(unsigned char**)(gameResources + 0x4000 + Enum_ov017_02195658_1052);
                if (clearedJoinRecord[0] != 0 && clearedJoinRecord[2] == i) {
                    clearedJoinRecord[0] = 0;
                    clearedJoinRecord[1] = 0;
                    unsigned char* joinTask = *(unsigned char**)(gameResources + 0x3000 + Enum_ov017_02195658_2864);
                    if (joinTask[3] != 0) joinTask[8] = 1;
                }
            }
            return i;
        }
    }
    return -1;
}
