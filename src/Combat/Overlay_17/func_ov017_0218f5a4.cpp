#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov017_0218f5a4_1844 = 0x524, Enum_ov017_0218f5a4_336 = 0x144, Enum_ov017_0218f5a4_396 = 0x180, Enum_ov017_0218f5a4_1792 = 0x4f0 };
#else
enum { Enum_ov017_0218f5a4_1844 = 0x734, Enum_ov017_0218f5a4_336 = 0x150, Enum_ov017_0218f5a4_396 = 0x18c, Enum_ov017_0218f5a4_1792 = 0x700 };
#endif

extern "C" void GetLocalWireless_0202ae18(void);
extern "C" int func_ov017_021925e0(void* arg0);
extern "C" void func_ov017_021bd440(void* arg0, int arg1);
extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);
extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);
struct PartyMember_0205faf4_11;
extern "C" int IsNPCCompanion_02061bd8(struct PartyMember_0205faf4_11* partyMember);
extern "C" void func_02072afc(int arg0, int* arg1, short* arg2);
extern "C" void* func_ov017_021a4658(void* arg0, int arg1);
struct Queue_0201bdac_2;
struct QueueNode_0201bdac;
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);

// USA: QueuePartyMemberModelLoad_ov017_0218f5a4
extern "C" ARM int QueuePartyMemberModelLoad_ov017_0218f5a4(char* gameResources, int memberIndex, int isForced, int useAlternateAnimationPackage, int isFullReload) {
    GameState* gameState = GameState::GetInstance();
    GetLocalWireless_0202ae18();
    void* eventTask = *(void**)(gameResources + 0x3000 + Enum_ov017_0218f5a4_1844);

    if (func_ov017_021925e0(gameResources + 0x3000) != 0) {
        GameObject* partyMember = gameState->GetPartyMemberByIndex(memberIndex);
        if (partyMember != 0) {
            unsigned short classFlags = partyMember->obj3D_.classFlags_0_;
            if (classFlags & 0x1000) {
                func_ov017_021bd440(eventTask, memberIndex & 0xff);
                return 0;
            }
        }
    }

    GameObject* partyMemberBase = GetPartyMemberBaseByIndex_0200ff1c(gameState, memberIndex);
    if (partyMemberBase == 0) return 0;
    if (GetPartyMemberData_02053c6c((unsigned char*)partyMemberBase) == 0) return 0;

    if (isFullReload == 0) {
        unsigned char* memberData = *(unsigned char**)((char*)partyMemberBase + Enum_ov017_0218f5a4_336);
        int isReloadPending = memberData ? memberData[0x56e] : 0;
        if (isReloadPending == 0 && isForced == 0) {
            if (IsNPCCompanion_02061bd8((struct PartyMember_0205faf4_11*)partyMemberBase) == 0) {
                int partObjectIndices[0xb];
                short partModelIds[0xb];
                func_02072afc(memberIndex, partObjectIndices, partModelIds);
                int hasChangedPart = 0;
                int i;
                for (i = 0; i < 0xb; i++) {
                    if (i == 0xa) continue;
                    GameObject* part = gameState->GetGameObjectByIndex(partObjectIndices[i]);
                    if (part != 0) {
                        short partModelId = partModelIds[i];
                        short loadedModelId = part->obj3D_.unknown_2_;
                        if (partModelId != loadedModelId) hasChangedPart = 1;
                    }
                }
                if (hasChangedPart == 0) return 0;
            }
        }
    }

    void* loadTask = func_ov017_021a4658(gameResources, memberIndex);
    if (loadTask != 0) {
        *(short*)((char*)loadTask + 8) = (short)memberIndex;
        if (isForced != 0) {
            ((unsigned char*)loadTask)[0xb] |= 0x2;
        }
        if (useAlternateAnimationPackage != 0 || (*(int*)((char*)partyMemberBase + Enum_ov017_0218f5a4_396) & 0x40)) {
            ((unsigned char*)loadTask)[0xb] |= 0x4;
        }
        if (isFullReload != 0) {
            ((unsigned char*)loadTask)[0xb] |= 0x1;
        }
        if (((unsigned char*)loadTask)[2] == 0) {
            AppendToQueue_020469b4((struct Queue_0201bdac_2*)*(void**)(gameResources + 0x3000 + Enum_ov017_0218f5a4_1792), (struct QueueNode_0201bdac*)loadTask);
        }
    }
    return 1;
}
