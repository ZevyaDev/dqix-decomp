#include <globaldefs.h>

struct PartyMemberData_02054000_2 {
    char unknown_0_[0x294];
    char weaponItemData_294_;
    char unknown_295_[0x496 - 0x295];
    short weaponItemId_496_;
};

struct PartyMember_02054000 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    struct PartyMemberData_02054000_2* pPartyMemberData_150_;
};

// USA: GetEquippedWeaponItemData_02054000
extern "C" ARM void* GetEquippedWeaponItemData_02054000(struct PartyMember_02054000* gameObject) {
    struct PartyMemberData_02054000_2* memberData = gameObject->pPartyMemberData_150_;
    if (memberData != 0) {
        if (memberData->weaponItemId_496_ > 0) {
            return &memberData->weaponItemData_294_;
        }
    }
    return 0;
}
