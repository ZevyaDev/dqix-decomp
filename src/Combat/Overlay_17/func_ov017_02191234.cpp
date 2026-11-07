#include <globaldefs.h>
#include "GameState/GameState.h"

struct LocalWireless_0202b2f0;

extern "C" LocalWireless_0202b2f0* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" int IsLocalWirelessPlayerJoined_0202c1c0(LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" unsigned char* GetCompanionByIndex_0200ff58(GameState* gameState, int index);
extern "C" int GetLeaderObjectIndex_020546a8(void* companion);
extern "C" void func_02026348(char* arg0, unsigned char* arg1, int arg2);
extern "C" void func_020114c0(char* arg0, int arg1, void* arg2);
extern "C" void func_02011468(void* arg0, int arg1, void* arg2);

// USA: RebuildPartyOrders_ov017_02191234
extern "C" ARM void RebuildPartyOrders_ov017_02191234(unsigned char* gameResources) {
#if defined(jpn)
 enum {Enum_ov017_02191234_722=0x2c6, Enum_ov017_02191234_14032=0x34c0};
#else
 enum {Enum_ov017_02191234_722=0x2d2, Enum_ov017_02191234_14032=0x36d0};
#endif
    GameState* gameState = GameState::GetInstance();
    LocalWireless_0202b2f0* wireless = GetLocalWireless_0202ae18();
    unsigned char partyCount = 0;
    unsigned char ownPartyCount = 0;
    unsigned char partyOrder[4];
    unsigned char ownPartyOrder[4];

    if (IsLocalWirelessOn_0202b7d8((int*)wireless)) {
        for (int protagonistIndex = 0; protagonistIndex < 4; protagonistIndex++) {
            if (!IsLocalWirelessPlayerJoined_0202c1c0(wireless, protagonistIndex)) continue;
            partyOrder[partyCount++] = protagonistIndex;
            int isOwnProtagonist = 0;
            if (protagonistIndex == GetProtagonistObjectIndex_020100a8(gameState)) {
                ownPartyOrder[ownPartyCount++] = protagonistIndex;
                isOwnProtagonist = 1;
            }
            for (int companionIndex = 1; companionIndex < 4; companionIndex++) {
                unsigned char* companion = GetCompanionByIndex_0200ff58(gameState, companionIndex);
                if (companion == 0) continue;
                if (protagonistIndex != GetLeaderObjectIndex_020546a8(companion)) continue;
                partyOrder[companion[Enum_ov017_02191234_722]] = companionIndex;
                partyCount++;
                if (isOwnProtagonist) {
                    ownPartyOrder[companion[Enum_ov017_02191234_722]] = companionIndex;
                    ownPartyCount++;
                }
            }
        }
    } else {
        partyOrder[partyCount++] = 0;
        ownPartyOrder[ownPartyCount++] = 0;
        for (int companionIndex = 1; companionIndex < 4; companionIndex++) {
            unsigned char* companion = GetCompanionByIndex_0200ff58(gameState, companionIndex);
            if (companion != 0) {
                partyOrder[companion[Enum_ov017_02191234_722]] = companionIndex;
                partyCount++;
                ownPartyOrder[companion[Enum_ov017_02191234_722]] = companionIndex;
                ownPartyCount++;
            }
        }
    }
    func_02026348(*(char**)(gameResources + Enum_ov017_02191234_14032), partyOrder, partyCount);
    func_020114c0((char*)gameState, partyCount, partyOrder);
    func_02011468(gameState, ownPartyCount, ownPartyOrder);
}
