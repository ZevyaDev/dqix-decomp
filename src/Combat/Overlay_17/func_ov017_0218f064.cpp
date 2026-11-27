#include <globaldefs.h>
#include <GameState/GameState.h>
#include <World/Zone3D.h>
#include "World/Zone3DTypes.h"
#include "Graphics/TextureArena.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif


struct TextureVRAMArea_0203d028;
struct Struct_ov017_0218f064_6;
struct Struct_02048104;
struct Struct_02054664;
struct Struct_020415d8;
struct Struct_02010604;
struct Struct_020545b8 {
    short unknown_0_;
    unsigned short unknown_2_;
    char unknown_4_[0x5d4];
    SafeAllocator unknown_5d8_;
};
struct Struct_ov017_0218f064_8 { char unknown_0_[0x70]; };
#if defined(jpn)
struct Struct_ov017_0218f064_9 { char unknown_0_[0x27c]; Struct_ov017_0218f064_8 unknown_2cc_[22]; };
struct Struct_ov017_0218f064 { char unknown_0_[0x4114]; Object3D* unknown_4334_; Object3D* unknown_4338_; Object3D* unknown_433c_; Object3D* unknown_4340_; };
struct Struct_ov017_0218f064_10 { char unknown_0_[0x1b58]; Struct_020545b8* unknown_1b58_; char* unknown_1b5c_; };
struct Struct_ov017_0218f064_3 {
    char unknown_0_[0x860];
    Struct_ov017_0218f064_10 unknown_860_;
    Struct_ov017_0218f064_10* inline_ov017_0218f064_3() { return &unknown_860_; }
};
#else
struct Struct_ov017_0218f064_9 { char unknown_0_[0x2cc]; Struct_ov017_0218f064_8 unknown_2cc_[22]; };
struct Struct_ov017_0218f064 { char unknown_0_[0x4334]; Object3D* unknown_4334_; Object3D* unknown_4338_; Object3D* unknown_433c_; Object3D* unknown_4340_; };
struct Struct_ov017_0218f064_2 { char unknown_0_[0xb58]; Struct_020545b8* unknown_b58_; char* unknown_b5c_; };
struct Struct_ov017_0218f064_3 { char unknown_0_[0x1840]; Struct_ov017_0218f064_2 unknown_1840_; };
static inline Struct_ov017_0218f064_2* inline_ov017_0218f064(Zone3D* arg0) { SDK_NULL_ASSERT(arg0); return &((Struct_ov017_0218f064_3*)arg0)->unknown_1840_; }
#endif
struct Struct_ov017_0218f064_4 { char unknown_0_[0x10]; Vector3i unknown_10_; short unknown_1c_; };
struct Struct_ov017_0218f064_5 {
    Object3D unknown_0_;
    char unknown_ac_[4];
    unsigned short unknown_b0_, unknown_b2_, unknown_b4_;
#if defined(jpn)
    char unknown_b6_[0x148 - 0xb6];
#else
    char unknown1_b6_[0x9e];
#endif
    Struct_020545b8* unknown_154_;
    char unknown_158_[0x17a];
    unsigned char unknown_2d2_;
};
struct Struct_ov017_0218f064_7 { Object3D unknown_0_[11]; };
#if defined(jpn)
enum { Enum_ov017_0218f064_720 = 0x2c4, Enum_ov017_0218f064_724 = 0x2c8, Enum_ov017_0218f064_760 = 0x2ec };
#else
enum { Enum_ov017_0218f064_720 = 0x2d0, Enum_ov017_0218f064_724 = 0x2d4, Enum_ov017_0218f064_760 = 0x2f8 };
#endif
extern "C" void* GetZoneEntry_0200fd0c(GameState*);
extern "C" Zone3D* GetZone3D_02012fe4();
extern "C" void func_0202ae18();
extern "C" void func_020545b8(Struct_020545b8*);
extern "C" void InitPartyMemberSlotAllocators_020542b4(Struct_020545b8*, SafeAllocator*, Struct_ov017_0218f064_8*);
extern "C" int func_ov017_021925e0();
extern "C" void* func_ov017_021a11b4(Struct_ov017_0218f064_6*);
extern "C" void func_02054464(Struct_020545b8*, SafeAllocator*, Struct_ov017_0218f064_8*);
extern "C" void func_02037d10(Struct_ov017_0218f064_5*);
extern "C" void func_02048104(Struct_02048104*);
extern "C" void func_02054664(Struct_02054664*);
extern "C" int func_ov017_02192548();
extern "C" void func_020415d8(Struct_020415d8*);
extern "C" void func_020c9be0();
extern "C" void SetGameObjectByIndex_0200fd38(GameState*, int, GameObject*);
extern "C" void SetObject3DRotation_0203db34(unsigned char*, int, int, int);
extern "C" void SetMotion_02033b88(Struct_02010604*, int);
extern "C" void func_02053c4c(char*, char*);
extern "C" void func_02053c74(char*, int);
extern "C" void func_ov017_0218f57c(void*, int);
extern "C" int QueuePartyMemberModelLoad_ov017_0218f5a4(GameResources*, int, int, int, int);
#if defined(jpn)
#define data_ov017_021d73a4 data_ov017_021d7804
#endif
extern const char data_ov017_021d73a4[];

static inline Struct_ov017_0218f064_8* inline_ov017_0218f064_2(GameResources* arg0) { SDK_NULL_ASSERT(arg0); return ((Struct_ov017_0218f064_9*)arg0)->unknown_2cc_; }

// USA: CreatePartyMemberObject_ov017_0218f064
// JPN: func_ov017_0218fc44
extern "C" ARM void CreatePartyMemberObject_ov017_0218f064(GameResources* gameResources, int memberIndex, int kind, int requestModelLoad, int arg4) {
    GameState* gameState = GameState::GetInstance();
#if !defined(jpn)
    Zone3D* zone;
#endif
    Struct_ov017_0218f064_4* zoneEntry = (Struct_ov017_0218f064_4*)GetZoneEntry_0200fd0c(gameState);
#if defined(jpn)
    Struct_ov017_0218f064_10* var3 = ((Struct_ov017_0218f064_3*)GetZone3D_02012fe4())->inline_ov017_0218f064_3();
#else
    zone = GetZone3D_02012fe4();
#endif
    func_0202ae18();
    int hasPartObjects = 1;
    SafeAllocator* allocator;
    Struct_020545b8* var6;
    if (kind == 0x4000) {
#if defined(jpn)
        var6 = var3->unknown_1b58_;
#else
        var6 = inline_ov017_0218f064(zone)->unknown_b58_;
#endif
        if (!var6) return;
        SafeAllocator* var7 = gameResources->allocator_array_1a0;
        SafeAllocator* var8 = &var7[3];
        allocator = &var6->unknown_5d8_;
        Struct_ov017_0218f064_8* var9 = inline_ov017_0218f064_2(gameResources);
        var8->Reset();
        Struct_ov017_0218f064_8* var10 = &var9[21];
        ((TextureArena*)((TextureVRAMArea_0203d028*)var10))->Reset();
        func_020545b8(var6);
        InitPartyMemberSlotAllocators_020542b4(var6, var8, var10);
    } else {
        if (func_ov017_021925e0()) {
            for (int i = 0; i < 4; ++i) {
                if (((Struct_020545b8*)&gameResources->substruct_array_12c8[i])->unknown_0_ == memberIndex) return;
            }
        }
        var6 = (Struct_020545b8*)func_ov017_021a11b4((Struct_ov017_0218f064_6*)gameResources);
        if (!var6) return;
        allocator = &var6->unknown_5d8_;
        int var12 = var6->unknown_2_ + 1;
        SafeAllocator* var13 = &gameResources->allocator_array_38[var12];
        Struct_ov017_0218f064_8* var14 = &((Struct_ov017_0218f064_9*)gameResources)->unknown_2cc_[var12];
        func_020545b8(var6);
        if (kind == 4) func_02054464(var6, var13, var14);
        else InitPartyMemberSlotAllocators_020542b4(var6, var13, var14);
    }
    Struct_ov017_0218f064* var15 = (Struct_ov017_0218f064*)gameResources;
    if (var15->unknown_4334_) { var15->unknown_4334_->Destroy(); var15->unknown_4334_ = 0; }
    if (var15->unknown_4338_) { var15->unknown_4338_->Destroy(); var15->unknown_4338_ = 0; }
    if (var15->unknown_433c_) { var15->unknown_433c_->Destroy(); var15->unknown_433c_ = 0; }
    if (var15->unknown_4340_) { var15->unknown_4340_->Destroy(); var15->unknown_4340_ = 0; }
    allocator->Reset();
    Struct_ov017_0218f064_5* partyMember = 0;
    if (kind == 0x800) {
        partyMember = (Struct_ov017_0218f064_5*)allocator->Allocate(Enum_ov017_0218f064_720);
        func_02037d10(partyMember);
    } else if (kind == 0x200) {
        partyMember = (Struct_ov017_0218f064_5*)allocator->Allocate(Enum_ov017_0218f064_720);
        func_02048104((Struct_02048104*)partyMember);
    } else if (kind == 0x1000) {
        partyMember = (Struct_ov017_0218f064_5*)allocator->Allocate(Enum_ov017_0218f064_724);
        func_02054664((Struct_02054664*)partyMember);
        if (partyMember) partyMember->unknown_2d2_ = func_ov017_02192548();
    } else if (kind == 0x4000) {
        partyMember = (Struct_ov017_0218f064_5*)allocator->Allocate(Enum_ov017_0218f064_760);
        func_020415d8((Struct_020415d8*)partyMember);
    } else if (kind == 4) {
        partyMember = (Struct_ov017_0218f064_5*)allocator->Allocate(Enum_ov017_0218f064_724);
        func_02054664((Struct_02054664*)partyMember);
        if (partyMember) partyMember->unknown_2d2_ = func_ov017_02192548();
        hasPartObjects = 0;
    }
    if (!partyMember) func_020c9be0();
    partyMember->unknown_0_.unknown_4_ = (short)memberIndex;
    partyMember->unknown_154_ = var6;
    var6->unknown_0_ = (short)memberIndex;
    SetGameObjectByIndex_0200fd38(gameState, memberIndex, (GameObject*)partyMember);
    if (hasPartObjects) {
        Struct_ov017_0218f064_7* partObjects = (Struct_ov017_0218f064_7*)allocator->Allocate(0x764);
        if (!partObjects) func_020c9be0();
        partObjects->unknown_0_[0].Initialize();
        partObjects->unknown_0_[2].Initialize();
        partObjects->unknown_0_[1].Initialize();
        partObjects->unknown_0_[3].Initialize();
        partObjects->unknown_0_[4].Initialize();
        partObjects->unknown_0_[5].Initialize();
        Object3D* var18 = &partObjects->unknown_0_[6];
        var18->Initialize();
        Object3D* var19 = &partObjects->unknown_0_[7];
        var19->Initialize();
        partObjects->unknown_0_[8].Initialize();
        Object3D* var20 = &partObjects->unknown_0_[9];
        var20->Initialize();
        Object3D* var21 = &partObjects->unknown_0_[10];
        var21->Initialize();
        int partIndexBase = memberIndex * 12;
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x13, (GameObject*)&partObjects->unknown_0_[0]);
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x14, (GameObject*)&partObjects->unknown_0_[1]);
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x15, (GameObject*)&partObjects->unknown_0_[2]);
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x16, (GameObject*)&partObjects->unknown_0_[3]);
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x17, (GameObject*)&partObjects->unknown_0_[5]);
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x18, (GameObject*)var18);
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x19, (GameObject*)var19);
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x1a, (GameObject*)&partObjects->unknown_0_[8]);
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x1b, (GameObject*)&partObjects->unknown_0_[4]);
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x1c, (GameObject*)var20);
        SetGameObjectByIndex_0200fd38(gameState, partIndexBase + 0x1d, (GameObject*)var21);
    }
    partyMember->unknown_b0_ = 0x324;
    partyMember->unknown_b4_ = 0x189;
    partyMember->unknown_0_.SetHeight(0x1800);
    partyMember->unknown_0_.SetRadius(0x1000);
    partyMember->unknown_0_.MaybeSetRegularAnimation(data_ov017_021d73a4, 0);
    partyMember->unknown_0_.position_ = zoneEntry->unknown_10_;
    SetObject3DRotation_0203db34((unsigned char*)partyMember, partyMember->unknown_0_.rotation_.x, zoneEntry->unknown_1c_, partyMember->unknown_0_.rotation_.z);
    SetMotion_02033b88((Struct_02010604*)partyMember, 0);
    if (kind == 0x4000) {
#if defined(jpn)
        char* var23 = var3->unknown_1b5c_;
#else
        char* var23 = inline_ov017_0218f064(zone)->unknown_b5c_;
#endif
        if (var23) func_02053c4c((char*)partyMember, var23);
    } else func_02053c74((char*)partyMember, memberIndex);
    if (arg4 > 0) func_ov017_0218f57c(partyMember, arg4);
    if (requestModelLoad) QueuePartyMemberModelLoad_ov017_0218f5a4(gameResources, memberIndex, 0, 0, 0);
}

#if defined(jpn)
#undef data_ov017_021d73a4
#endif

void force_emission_of_vector3_copy_assignment_operator(Vector3fix* a)
{
    *a = *a;
}
