#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

extern "C" void SetEquippedItem_02052d7c(void* gameObject, int slot, int itemId);
extern "C" void func_02072afc(int arg0, void* arg1, void* arg2);
extern "C" int func_02053c6c(unsigned char* gameObject);
extern char data_020f0cf4[];

struct ItemData_02072c9c {
    void* unknown_0_;
    char unknown_4_[0x14];
    short itemId_18_;
};

// USA: FormatPartyMemberAnimationName_02072c9c
extern "C" ARM void FormatPartyMemberAnimationName_02072c9c(int memberIndex, char* animationName) {
    GameObject* partyMemberBase = GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), memberIndex);
    if (partyMemberBase == NULL) {
        return;
    }
    int memberData = func_02053c6c((unsigned char*)partyMemberBase);
    if (memberData == 0) {
        return;
    }
    char* memberDataBytes = (char*)memberData;

    char partObjectIndices[0x2c];
    char partModelIds[0x18];
    func_02072afc(memberIndex, partObjectIndices, partModelIds);

    struct ItemData_02072c9c* weaponItemData = (struct ItemData_02072c9c*)(memberDataBytes + 0x294);
    struct ItemData_02072c9c* bodyItemData = (struct ItemData_02072c9c*)(memberDataBytes + 0x194);
    if (bodyItemData == NULL) {
        SetEquippedItem_02052d7c(partyMemberBase, 0, -1);
        func_02072afc(memberIndex, partObjectIndices, partModelIds);
        bodyItemData = (struct ItemData_02072c9c*)(memberDataBytes + 0x194);
    }

    unsigned int* bodyEquipData = *(unsigned int**)bodyItemData;
    unsigned int bodyAnimationType = (bodyEquipData[1] << 12) >> 24;
    unsigned int weaponAnimationType = 0;
    if (weaponItemData->itemId_18_ >= 0) {
        if (weaponItemData != NULL) {
            unsigned int* weaponEquipData = *(unsigned int**)weaponItemData;
            weaponAnimationType = (weaponEquipData[1] << 12) >> 24;
        }
    }
    sprintf(animationName, data_020f0cf4, bodyAnimationType, weaponAnimationType);
}
