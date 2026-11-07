#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"

extern "C" unsigned char IsOnLadder_02039d7c(char* object);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" int func_020a277c(void* arg0);
extern "C" void func_020a2770(void* arg0, short arg1);
typedef void (*Type_ov017_02191108)(void* obj, int value);
extern "C" void func_0202c3e0(void* arg0);

struct PartyOrder_ov017_02191108 { int memberIndices_0_[4]; };
extern "C" void func_ov017_02190884(int arg0, struct PartyOrder_ov017_02191108* arg1, int* arg2, int arg3, int arg4, int arg5);
extern "C" void* GetLocalWireless_0202ae18(void* arg0);

extern "C" void func_020a2be8(void* arg0);

// USA: RebuildFieldPartyOrder_ov017_02191108
extern "C" ARM void RebuildFieldPartyOrder_ov017_02191108(void* gameResources, int resumeFollowing, int updatePlayerControl, int clearFollowTrails, int recomputeCameraOffset) {
    GameState* gameState = GameState::GetInstance();
    if (gameState->GetProtagonist() == 0) return;

    GameObject* currentLeader = gameState->GetUnknownGameObject();
    if (currentLeader != 0 && IsOnLadder_02039d7c((char*)currentLeader) != 0) {
        Struct_02037d10* leaderAction = func_020399a8(currentLeader);
        leaderAction->isPartyOrderRebuildPending_52_ = 1;
        return;
    }

    int partyCount = 0;
    int protagonistIndex = GetProtagonistObjectIndex_020100a8(gameState);
    struct PartyOrder_ov017_02191108 partyOrder;
    func_ov017_02190884(protagonistIndex, &partyOrder, &partyCount, resumeFollowing, updatePlayerControl, clearFollowTrails);
    int leaderIndex = partyOrder.memberIndices_0_[0];

    GameObject* newLeader = gameState->GetGameObjectByIndex(leaderIndex);
    if (newLeader != 0) {
        ((Object3D*)((unsigned char*)newLeader))->DisableFlag(0x80);
    }

    void* followCamera = (void*)GetFollowCamera_020100f8((char*)gameState);
    if (followCamera != 0) {
        int cameraTargetIndex = func_020a277c(followCamera);
        if (cameraTargetIndex != 0xc9 && cameraTargetIndex != 0xca) {
            ((Type_ov017_02191108)func_020a2770)(followCamera, leaderIndex);
            if (recomputeCameraOffset != 0 && cameraTargetIndex != leaderIndex) {
                func_020a2be8(followCamera);
            }
        }
    }

    unsigned char* party = (unsigned char*)GetParty_02010828(gameState);
    int i;
    for (i = 0; i < partyCount; i++) {
        unsigned char* orderSlot = party + i;
        orderSlot[0xf78] = (unsigned char)partyOrder.memberIndices_0_[i];
    }
    party[0xf7c] = (unsigned char)partyCount;
    func_0202c3e0(GetLocalWireless_0202ae18(party));
}
