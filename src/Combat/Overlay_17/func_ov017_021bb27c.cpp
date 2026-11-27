#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_020d6c00 func_020d8608
#endif

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

struct Struct_02033fdc;
struct Struct_02033b58;
struct Struct_02033834;
struct GlobalFlags_02038598_4;
struct Queue_02038598_5;
struct Struct_ov017_021bb27c_2 {
    Object3D unknown_0_; char unknown_ac_[0x15]; unsigned char unknown_c1_0_:2, unknown_c1_2_:6;
    char unknown_c2_[0x1e]; unsigned char unknown_e0_;
#if defined(jpn)
    char unknown_e1_[0x180 - 0xe1];
#else
    char unknown1_e1_[0x18c - 0xe1];
#endif
    unsigned int unknown_18c_;
};
struct Struct_ov017_021bb27c_3 { char unknown_0_[0xf78]; unsigned char unknown_f78_[4], unknown_f7c_; };
struct Struct_ov017_021bb27c_4 {
#if defined(jpn)
    char unknown_0_[0x2816];
#else
    char unknown1_0_[0x27d6];
#endif
    unsigned short unknown_27d6_;
};
struct Struct_ov017_021bb27c_5 { unsigned short unknown_0_; unsigned char unknown_2_; char unknown_3_[0xb]; unsigned char unknown_e_; };
struct Struct_ov017_021bb27c_6 { unsigned short unknown_0_; unsigned char unknown_2_; };
struct Struct_ov017_021bb27c_7 {
    char unknown_0_[8]; unsigned short unknown_8_, unknown_a_; char unknown_c_[5]; unsigned char unknown_11_, unknown_12_;
    char unknown_13_[3]; unsigned short unknown_16_, unknown_18_;
#if defined(jpn)
    char unknown_1a_[0x78 - 0x1a];
#else
    char unknown1_1a_[0x7c - 0x1a];
#endif
    SafeAllocator unknown_7c_;
    char unknown_90_[0xa]; unsigned char unknown_9a_; char unknown_9b_[0x34]; unsigned char unknown_cf_;
    char unknown_d0_[0x2d]; unsigned char unknown_fd_; char unknown_fe_; unsigned char unknown_ff_;
    char unknown_100_[4]; unsigned char unknown_104_; char unknown_105_[3]; unsigned char unknown_108_;
    char unknown_109_[3]; unsigned char unknown_10c_; char unknown_10d_[9]; signed char unknown_116_;
    char unknown_117_[0xd]; SafeAllocator unknown_124_; SafeAllocator* unknown_138_;
    char unknown_13c_[0x38]; unsigned char unknown_174_, unknown_175_;
};
struct Struct_ov017_021bb27c {
#if defined(jpn)
    char unknown_0_[0x41fc];
#else
    char unknown1_0_[0x44ac];
#endif
    unsigned short unknown_44ac_;
};
struct Struct_ov017_021d6c20 { int unknown_0_; Vector3fix unknown_4_, unknown_10_, unknown_1c_; };
extern "C" int GetFollowCamera_020100f8(char*);
extern "C" int* func_0202ae18();
extern "C" Struct_ov017_021bb27c_4* GetZone3D_02012fe4();
extern "C" void func_ov001_0215aa5c();
extern "C" void ResumeMovementUpdate_02033fdc(Struct_02033fdc*);
extern "C" void SetMotionKeepingAnimation_02033b58(Struct_02033b58*, unsigned char);
extern "C" int IsOnLadder_02039d7c(char*);
extern "C" void SetFacingInstantly_02033874(Struct_02033834*, int);
extern "C" int IsLocalWirelessOn_0202b7d8(int*);
extern "C" void func_02053ec8(void*, int);
extern "C" void func_02053f04(void*);
extern "C" int GetOwnPartyLeaderObjectIndex_020100b0(GameState*);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern "C" GlobalFlags_02038598_4* func_020d6c00();
extern "C" void ClearGlobalFlags_020466f4(GlobalFlags_02038598_4*, unsigned int);
extern "C" void func_ov017_02191fec(GameResources*, int);
extern "C" void* GetZoneEntry_0200fd0c(GameState*);
extern "C" int IsTypeInQueue_02046b60(Queue_02038598_5*, int);
extern "C" void RestartMapDisplay_020dc2d0(int);
extern "C" void func_ov017_02190264(GameResources*, int);
extern "C" void QueuePartyMemberModelLoad_ov017_0218f5a4(GameResources*, int, int, int, int);
extern "C" void EnablePlayerControl_020397c0(void*);
extern "C" void EnableCameraTurning_020a27ac(void*);
extern "C" void func_ov017_021921fc(const Vector3fix*, int, int);
extern "C" void func_ov017_021d035c(unsigned char, unsigned char, unsigned char);
extern "C" int func_02039790(void*, int);
extern "C" void func_ov017_021bd4d0(Struct_ov017_021bb27c_7*, unsigned char, int, int);
#if defined(jpn)
#define data_ov017_021d7d6c data_ov017_021d8544
#define data_ov017_021d7d72 data_ov017_021d854a
#define data_ov017_021d6c20 data_ov017_021d7018
#endif
extern const char data_ov017_021d7d6c[], data_ov017_021d7d72[];
extern AllocatorUnion gMainHeap_02114e20;
extern const Struct_ov017_021d6c20 data_ov017_021d6c20[3];

static inline Struct_ov017_021bb27c_6* inline_ov017_021bb27c(GameResources* arg0) {
    return (Struct_ov017_021bb27c_6*)arg0->unknown_ptr_3718;
}

// USA: EndEventTask_ov017_021bb27c
extern "C" ARM void EndEventTask_ov017_021bb27c(Struct_ov017_021bb27c_7* eventTask) {
    int* wireless;
    GameState* gameState = GameState::GetInstance();
    GameResources* gameResources = GetGameResources();
    Queue_02038598_5* queue = (Queue_02038598_5*)gameResources->unknown_ptr_array_36fc[0];
    Struct_ov017_021bb27c_6* battleManager = inline_ov017_021bb27c(gameResources);
    GameObject* currentLeader = gameState->GetUnknownGameObject();
    void* followCamera = (void*)GetFollowCamera_020100f8((char*)gameState);
    wireless = func_0202ae18();
    Struct_ov017_021bb27c_4* zone = GetZone3D_02012fe4();
    if (!TestFlags00(gameResources, 0x1000)) {
        func_ov001_0215aa5c();
    }
    if (eventTask->unknown_8_ == 0x7343 || eventTask->unknown_8_ == 0x7346 || eventTask->unknown_8_ == 0x7349) zone->unknown_27d6_ = eventTask->unknown_8_;
    for (int i = 0; i < 4; i++) {
        GameObject* partyMember = gameState->GetPartyMemberByIndex(i);
        if (!partyMember) continue;
        ResumeMovementUpdate_02033fdc((Struct_02033fdc*)partyMember);
        SetMotionKeepingAnimation_02033b58((Struct_02033b58*)partyMember, 0);
        if (!IsOnLadder_02039d7c((char*)partyMember) || GetLadderAction_020399a8(partyMember)->unknown_1_ != 2) {
                partyMember->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d6c, 0x10);
        } else if (eventTask->unknown_11_) {
                ((Struct_ov017_021bb27c_2*)partyMember)->unknown_e0_ &= ~1;
                partyMember->obj3D_.DisableFlag(0x1180);
                ResetLadderAction_02038508(GetLadderAction_020399a8(partyMember));
                partyMember->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d6c, 0x10);
        } else partyMember->obj3D_.MaybeSetRegularAnimation(data_ov017_021d7d72, 0);
        SetFacingInstantly_02033874((Struct_02033834*)partyMember, partyMember->obj3D_.rotation_.y);
        partyMember->obj3D_.DisableFlag(0x10);
    }
    if (IsLocalWirelessOn_0202b7d8(wireless)) {
        Struct_ov017_021bb27c_3* party = (Struct_ov017_021bb27c_3*)GetParty_02010828(gameState);
        for (int i = 0; i < party->unknown_f7c_; i++) {
            Struct_ov017_021bb27c_2* partyMemberBase = (Struct_ov017_021bb27c_2*)GetPartyMemberBaseByIndex_0200ff1c(gameState, party->unknown_f78_[i]);
            if (partyMemberBase) { func_02053ec8(partyMemberBase, 0); func_02053f04(partyMemberBase); }
        }
        if (eventTask->unknown_12_) {
            GetOwnPartyLeaderObjectIndex_020100b0(gameState);
            for (int i = 0; i < 4; i++) {
                Struct_ov017_021bb27c_2* partyMemberBase = (Struct_ov017_021bb27c_2*)GetPartyMemberBaseByIndex_0200ff1c(gameState, i);
                if (partyMemberBase) {
                    partyMemberBase->unknown_c1_0_ &= ~1; partyMemberBase->unknown_c1_0_ &= ~2; partyMemberBase->unknown_18c_ &= ~2;
                }
            }
        }
        if (eventTask->unknown_116_ >= 0) {
            Struct_ov017_021bb27c_2* partyMemberBase = (Struct_ov017_021bb27c_2*)GetPartyMemberBaseByIndex_0200ff1c(gameState, eventTask->unknown_116_);
            if (partyMemberBase) {
                partyMemberBase->unknown_c1_0_ &= ~1; partyMemberBase->unknown_c1_0_ &= ~2; partyMemberBase->unknown_18c_ &= ~2;
            }
        }
    }
    if (gameResources) {
        ClearFlags04(gameResources, 0x1040);
        ClearFlags00(gameResources, 0x10);
        ClearFlags00(gameResources, 0x800);
        ClearFlags00(gameResources, 0x4000);
    }
    void* block = eventTask->unknown_124_.GetSignedAllocator();
    if (block) { eventTask->unknown_124_.Destroy(); eventTask->unknown_7c_.Free(block); }
    if (!TestFlags00(gameResources, 0x1000)) {
        block = eventTask->unknown_7c_.GetSignedAllocator();
        if (block) { eventTask->unknown_7c_.Destroy(); func_02012da4(&gMainHeap_02114e20, block); }
    }
    if (eventTask->unknown_138_) {
        block = eventTask->unknown_138_->GetSignedAllocator();
        if (block) { eventTask->unknown_138_->Destroy(); func_02012da4(&gMainHeap_02114e20, block); }
        eventTask->unknown_138_ = 0;
    }
    ClearGlobalFlags_020466f4(func_020d6c00(), 0x20000);
    for (int i = 0; i < 4; i++) func_ov017_02191fec(gameResources, i);
    ClearGlobalFlags_020466f4(func_020d6c00(), 0x400f);
    Struct_ov017_021bb27c_5* zoneEntry = (Struct_ov017_021bb27c_5*)GetZoneEntry_0200fd0c(gameState);
    if (eventTask->unknown_104_ && !battleManager->unknown_2_ && (!zoneEntry->unknown_2_ || eventTask->unknown_10c_) &&
        !IsTypeInQueue_02046b60(queue, 10) && !(eventTask->unknown_16_ == 1 && eventTask->unknown_cf_ == 2)) {
        RestartMapDisplay_020dc2d0(0);
    }
    eventTask->unknown_ff_ = 1;
    for (int i = 0; i < 4; i++) {
        if (eventTask->unknown_174_ & (1 << i)) func_ov017_02190264(gameResources, i);
        if (eventTask->unknown_175_ & (1 << i)) QueuePartyMemberModelLoad_ov017_0218f5a4(gameResources, i, 0, 0, 1);
    }
    if (currentLeader) EnablePlayerControl_020397c0(currentLeader);
    if (followCamera) EnableCameraTurning_020a27ac(followCamera);
    const Struct_ov017_021d6c20* partyPlacement = data_ov017_021d6c20;
    for (int i = 0; i < 3; i++, partyPlacement++) {
        if (partyPlacement->unknown_0_ != eventTask->unknown_8_) continue;
        GameObject* currentLeader = gameState->GetUnknownGameObject();
        Vector3fix leaderPosition = currentLeader->obj3D_.position_;
        if (fix32abs(leaderPosition.x - partyPlacement->unknown_4_.x) > partyPlacement->unknown_10_.x) break;
        if (fix32abs(leaderPosition.y - partyPlacement->unknown_4_.y) > partyPlacement->unknown_10_.y) break;
        if (fix32abs(leaderPosition.z - partyPlacement->unknown_4_.z) > partyPlacement->unknown_10_.z) break;
        func_ov017_021921fc(&partyPlacement->unknown_1c_, currentLeader->obj3D_.rotation_.y, 0); break;
    }
    eventTask->unknown_cf_ = 0xff; eventTask->unknown_9a_ = 0;
    Struct_ov017_021bb27c* var24 = (Struct_ov017_021bb27c*)gameResources;
    if (eventTask->unknown_18_ == var24->unknown_44ac_) var24->unknown_44ac_ = 0;
    if (IsLocalWirelessOn_0202b7d8(wireless)) {
        if (eventTask->unknown_a_ <= 2 && eventTask->unknown_fd_) return;
        Struct_ov017_021bb27c_5* zoneEntry = (Struct_ov017_021bb27c_5*)GetZoneEntry_0200fd0c(gameState);
        if (zoneEntry->unknown_2_ && eventTask->unknown_108_) zoneEntry->unknown_e_ = 1;
        else func_ov017_021d035c(0, GetOwnPartyLeaderObjectIndex_020100b0(gameState), eventTask->unknown_108_);
        for (int i = 0; i < 4; i++) {
            GameObject* partyMember = gameState->GetPartyMemberByIndex(i);
            if (partyMember && func_02039790(partyMember, 0x20)) func_ov017_021bd4d0(eventTask, i, 0, 0);
        }
    }
}
