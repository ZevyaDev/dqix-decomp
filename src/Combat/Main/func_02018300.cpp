#include <globaldefs.h>
#include "World/ZoneChest.h"
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"
#include "World/Zone3DTypes.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif


struct ActiveZone_020fdd44;
struct Struct_02018300_2;
struct SoundEffectManager_02108760;
struct Struct_02018300_3;
struct Struct_02018300_4 {
    char unknown_0_[0xb2];
    short unknown_b2_;
};
struct Struct_020e6e74 { int unknown_0_[5]; };
struct Struct_02018300_5 {
    char unknown_0_[0xc];
    int unknown_c_;
    char unknown_10_[0xc];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    char unknown_20_[8];
    short unknown_28_;
    char unknown_2a_[0xa];
};
extern "C" void* func_0205ec34();
extern "C" int RunTriggerActionsOfType_02064b24(void*, int, unsigned short, void*);
#if defined(jpn)
#define data_020e6e74 data_020e7718
#endif
int fix32ReduceAngle0To2Pi(int);
int fix32cos(int);
int fix32sin(int);
void Vector3fixMultiplyScalar(const Vector3i*, int, Vector3i*);
extern "C" void* GetFirstZoneFeatureOfType_0201e838(unsigned char*, unsigned int);
extern "C" void PlaySoundEffect_0205eaa0(SoundEffectManager_02108760*, int, int);
extern "C" void DisablePlayerControl_020397cc(Struct_02018300_3*, int);
extern "C" void func_ov017_021d196c(unsigned short, unsigned short, int);
extern "C" ActiveZone_020fdd44* GetActiveZones_02027ca4();
extern "C" Struct_02018300_2* FindActiveZone_02028bd0(ActiveZone_020fdd44*, int);
extern "C" void func_02028c64(Struct_02018300_2*, int);
extern const Struct_020e6e74 data_020e6e74;
extern SoundEffectManager_02108760 gSoundEffectManager_02108760;

// USA: OpenDoor_02018300
extern "C" ARM void OpenDoor_02018300(Zone3D* zone, Struct_020134e0::Struct_02018300* door, int isSoundPlayed, int isOpenedHere, int isSentToOtherConsoles) {
    BMDJEntry_02016874_2* doorEntry = FindDoorEntry_02018b34(zone, door);
    if (!doorEntry) return;
    if (!isOpenedHere && (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 8)) return;
    if (!isOpenedHere && (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 4)) return;
    if (!isOpenedHere) {
        void* flagManager = func_0205ec34();
        Struct_02018300_5 triggerResult;
        triggerResult.unknown_28_ = door->unknown_20_;
        triggerResult.unknown_1e_ = door->unknown_2c_.unknown1_0_.unknown_1_;
        triggerResult.unknown_1c_ = door->unknown_2c_.unknown1_0_.unknown_0_;
        triggerResult.unknown_c_ = zone->currentZoneID_;
        RunTriggerActionsOfType_02064b24(flagManager, 17, 108, &triggerResult);
        RunTriggerActionsOfType_02064b24(flagManager, 3, 108, &triggerResult);
        if (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 4) {
            door->unknown_2c_.unknown1_0_.unknown_2_4_ = (unsigned short)(door->unknown_2c_.unknown1_0_.unknown_2_4_ & ~4);
            door->unknown_2c_.unknown1_0_.unknown_2_4_ = (unsigned short)(door->unknown_2c_.unknown1_0_.unknown_2_4_ & ~1);
            return;
        }
    }
    if (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 32) {
        short slideAngle = fix32ReduceAngle0To2Pi((short)(door->unknown_20_ + 0x1922));
        int slideCos = fix32cos(slideAngle);
        Vector3i slideOffset;
        slideOffset.x = fix32sin(slideAngle);
        slideOffset.y = 0;
        slideOffset.z = slideCos;
        Vector3fix_Normalize(&slideOffset, &slideOffset);
        Vector3fixMultiplyScalar(&slideOffset, door->unknown_2c_.unknown1_0_.unknown_40_, &slideOffset);
        Vector3i slideDirection;
        Vector3fix_Normalize(&slideOffset, &slideDirection);
        doorEntry->unknown_48_ = slideDirection;
        Vector3i slideTarget;
        Vector3fix_Add(&doorEntry->unknown_8_, &slideOffset, &slideTarget);
        doorEntry->unknown_3c_ = slideTarget;
        doorEntry->unknown_3a_ = 0x266;
    } else {
        int swingAngle = (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 64) ? 0x1922 : 0x141b;
        if (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 256) {
            if (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 128) {
                doorEntry->flags_2_ |= 16;
                if (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 2) {
                    doorEntry->unknown_34_ = doorEntry->unknown_6_ - swingAngle;
                    doorEntry->unknown_38_ = doorEntry->unknown_34_;
                } else {
                    doorEntry->unknown_34_ = doorEntry->unknown_6_ + swingAngle;
                    doorEntry->unknown_38_ = doorEntry->unknown_34_;
                }
            } else doorEntry->flags_2_ |= 4;
        } else {
            if (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 128) doorEntry->flags_2_ |= 16;
            if (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 2) {
                doorEntry->unknown_34_ = doorEntry->unknown_6_ - swingAngle;
            } else {
                doorEntry->unknown_34_ = doorEntry->unknown_6_ + swingAngle;
            }
        }
        doorEntry->unknown_36_ = 0x199;
    }
    door->unknown_2c_.unknown1_0_.unknown_2_4_ = (unsigned short)(door->unknown_2c_.unknown1_0_.unknown_2_4_ | 1);
    doorEntry->flags_2_ |= 1;
    for (int i = 0; i < zone->unknown_82c_; i++) {
        BMDJEntry_02016874_2* collisionEntry = (*(BMDJEntry_02016874_2***)(zone->unk_5f0 + 0x234))[i];
        if (collisionEntry->unknown_28_ == doorEntry) {
            collisionEntry->flags_2_ |= 1;
            break;
        }
    }
    Struct_020134e0::Struct_02018300* matchingDoor = (Struct_020134e0::Struct_02018300*)GetFirstZoneFeatureOfType_0201e838((unsigned char*)&zone->substruct_6c_, 2);
    while (matchingDoor) {
        if (matchingDoor->unknown_2c_.unknown1_0_.unknown_0_ == door->unknown_2c_.unknown1_0_.unknown_0_ && matchingDoor->unknown_2c_.unknown1_0_.unknown_1_ == door->unknown_2c_.unknown1_0_.unknown_1_)
            matchingDoor->unknown_2c_.unknown1_0_.unknown_2_4_ = (unsigned short)(matchingDoor->unknown_2c_.unknown1_0_.unknown_2_4_ | 1);
        matchingDoor = matchingDoor->unknown_70_;
    }
    if (isSoundPlayed) {
        Struct_020e6e74 doorSounds = data_020e6e74;
        PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, doorSounds.unknown_0_[door->unknown_2c_.unknown1_0_.unknown_2_0_], 0);
    }
    if (isOpenedHere && (door->unknown_2c_.unknown1_0_.unknown_2_4_ & 8)) {
        GameObject* protagonist = GameState::GetInstance()->GetProtagonist();
        ((Struct_02018300_4*)protagonist)->unknown_b2_ = 0;
        DisablePlayerControl_020397cc((Struct_02018300_3*)protagonist, 1);
        zone->unk_830[0] = 8;
        return;
    }
    int doorIndex = func_02018bc4(zone, door);
    if (isOpenedHere && isSentToOtherConsoles) func_ov017_021d196c(zone->currentZoneID_, (unsigned short)doorIndex, isSoundPlayed);
    Struct_02018300_2* activeZone = FindActiveZone_02028bd0(GetActiveZones_02027ca4(), zone->currentZoneID_);
    if (activeZone && !(door->unknown_2c_.unknown1_0_.unknown_2_4_ & 512)) func_02028c64(activeZone, doorIndex);
}
