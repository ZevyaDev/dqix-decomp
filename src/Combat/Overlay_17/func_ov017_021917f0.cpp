#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02040774_2;

struct PartyMemberData_ov017_021917f0_2 {
    char unknown_0_[0x29c];
    unsigned int unknown_29c_0_ : 4;
    unsigned int weaponType_29c_4_ : 5;
};

struct WeaponPlacement_ov017_021917f0 {
    unsigned char unknown_0_;
    unsigned char stowedBoneSlot_1_;
    short stowedPosition_2_[3];
    short stowedRotation_8_[3];
    unsigned char heldBoneSlot_e_;
    unsigned char unknown_f_;
    short heldPosition_10_[3];
    short heldRotation_16_[3];
};

extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);
extern "C" PartyMemberData_ov017_021917f0_2* GetPartyMemberData_02053c6c(unsigned char* gameObject);
extern "C" WeaponPlacement_ov017_021917f0* func_02099f60(void);
extern "C" int func_02053eb4(void*, int);
extern "C" void func_02053ec0(unsigned char*, int);
extern "C" void SetObject3DPosition_020407b4(Struct_02040774_2* object, int x, int y, int z);
extern "C" void SetObject3DRotation_0203db34(unsigned char* object, int x, int y, int z);

// USA: AttachPartyMemberWeapon_ov017_021917f0
extern "C" ARM void AttachPartyMemberWeapon_ov017_021917f0(int memberIndex, int isHeld) {
#if defined(jpn)
 enum { Enum_ov017_021917f0_396 = 0x180 };
#else
 enum { Enum_ov017_021917f0_396 = 0x18c };
#endif
    GameState* gameState = GameState::GetInstance();
    PartyMemberData_ov017_021917f0_2* memberData;
    GameObject* partyMemberBase = GetPartyMemberBaseByIndex_0200ff1c(gameState, memberIndex);
    GameObject* weaponObject = gameState->GetGameObjectByIndex(memberIndex * 12 + 0x1c);
    if (partyMemberBase == NULL || weaponObject == NULL) return;
    memberData = GetPartyMemberData_02053c6c((unsigned char*)partyMemberBase);
    if (memberData == NULL) return;
    WeaponPlacement_ov017_021917f0* placement = &func_02099f60()[memberData->weaponType_29c_4_];
    if (isHeld == 1) {
        int heldBoneIndex = func_02053eb4(partyMemberBase, placement->heldBoneSlot_e_);
        func_02053ec0((unsigned char*)partyMemberBase, heldBoneIndex);
        SetObject3DPosition_020407b4((Struct_02040774_2*)weaponObject, placement->heldPosition_10_[0], placement->heldPosition_10_[1], placement->heldPosition_10_[2]);
        SetObject3DRotation_0203db34((unsigned char*)weaponObject, placement->heldRotation_16_[0], placement->heldRotation_16_[1], placement->heldRotation_16_[2]);
        weaponObject->obj3D_.Detach();
        weaponObject->obj3D_.Attach(&partyMemberBase->obj3D_, heldBoneIndex);
        if (placement->heldRotation_16_[0] != 0 || placement->heldRotation_16_[1] != 0 || placement->heldRotation_16_[2] != 0) {
            weaponObject->obj3D_.SetFlag16();
        } else {
            weaponObject->obj3D_.ClearFlag16();
        }
    } else if (isHeld == 0) {
        int stowedBoneIndex = func_02053eb4(partyMemberBase, placement->stowedBoneSlot_1_);
        func_02053ec0((unsigned char*)partyMemberBase, stowedBoneIndex);
        SetObject3DPosition_020407b4((Struct_02040774_2*)weaponObject, placement->stowedPosition_2_[0], placement->stowedPosition_2_[1], placement->stowedPosition_2_[2]);
        SetObject3DRotation_0203db34((unsigned char*)weaponObject, placement->stowedRotation_8_[0], placement->stowedRotation_8_[1], placement->stowedRotation_8_[2]);
        weaponObject->obj3D_.Detach();
        weaponObject->obj3D_.Attach(&partyMemberBase->obj3D_, stowedBoneIndex);
        if (placement->stowedRotation_8_[0] != 0 || placement->stowedRotation_8_[1] != 0 || placement->stowedRotation_8_[2] != 0) {
            weaponObject->obj3D_.SetFlag16();
        } else {
            weaponObject->obj3D_.ClearFlag16();
        }
    }
    unsigned int* memberFlags = (unsigned int*)((char*)partyMemberBase + Enum_ov017_021917f0_396);
    if (memberData->weaponType_29c_4_ == 6) {
        *memberFlags |= 0x20;
    } else {
        *memberFlags &= ~0x20;
    }
    if (weaponObject->obj3D_.unknown_2_ < 0) {
        weaponObject->obj3D_.MakeHidden();
    } else {
        weaponObject->obj3D_.MakeVisible();
    }
}
