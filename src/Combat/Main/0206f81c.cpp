#include <globaldefs.h>

#if defined(jpn)
#define REGION_VALUE(jpnValue, usaValue) jpnValue
extern char* gItemDataPath_020f2a38;
extern "C" int func_020e04f8(void*, void*, const char*, short, bool);
#else
#define REGION_VALUE(jpnValue, usaValue) usaValue
#endif
#include "Combat/Main/BattleList.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/OverlayId.h"
#include "Graphics/LightingManager.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Filesystem/FileIO.h"

#if defined(jpn)
#define func_020de848 func_020e01c4
#endif

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct Struct_0203d028_2 {
    int unknown_0_;
    int unknown_4_;
    struct Struct_0203d028_3* unknown_8_[0xe9];
};

extern "C" void* func_0202ae18(void);
extern "C" void* func_0205ec34(void);
extern "C" void func_020703c8(int arg0, int arg1, int arg2, int arg3);
extern "C" void* ResetEventTask_ov017_021baedc(void* node, int isRestart);

struct QueueNode_0201bdac;
struct Queue_0201bdac_2;
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);

struct Struct_020213fc;
extern "C" void SetSubScreenFadeInHeld_020213fc(struct Struct_020213fc* subScreenDisplay, int isHeld);
extern "C" void DisableInputForDuration_020e1154(void* durationMs);

extern "C" void* GetZoneEntry_0200fd0c(GameState*);
extern "C" void InitZoneEntry_02070378(char* zoneEntry);

extern "C" void* GetNPCManager_0203cf4c(void);
extern "C" void* FindNPCById_0203df78(void* npcManager, int id);
extern "C" int GetNPCData_02040528(int* npc);

extern "C" void func_ov017_021b8d80(void*);
extern "C" void ResetTalkTask_ov017_021b8d1c(void* talkTask);

extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void DisableCameraTurning_020a27b8(unsigned char* camera);

struct Vector3i;

extern "C" void ResetBattleTask_ov017_021b6f18(void* battleTask);
extern "C" void func_ov017_021b6e70(void* arg0, unsigned short arg1);
extern "C" int IsLocalWirelessGuest_0202c540(void* wireless);
extern "C" void ApplyBattleRequest_ov017_021b7104(void* battleManager, void* request);

struct GameState;
extern "C" void* InitItemTable_020de824(void* itemTable);
extern "C" void func_020de848(void* itemTable);
extern char* gItemDataPath_020f2a38;
extern char* data_020f2a30;
extern "C" int LoadItemTableById_020de980(void* itemTable, void* allocator, void* fileData, int fileSize, int itemId);
extern "C" void ResetItemContext_0207cbe8(char* itemContext);
extern "C" void AddItem_0207d300(void* itemContext, short itemId, int count, int isAliveRequired);

extern "C" int RemoveItemFromBagsOrHeldItems_02086d88(unsigned char* party, int itemId);
extern "C" unsigned char GetOwnPartyOrder_02011494(char* gameState, void* outOwnPartyOrder);
struct Struct_0203d028_3;
extern "C" int func_02053c6c(unsigned char* gameObject);
struct PartyMemberData_0206f81c;
extern "C" void* FindEquippedItem_02083554(struct PartyMemberData_0206f81c* memberData, int itemId);
extern "C" void UnequipCategory_02083738(void* memberData, int category);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" void SendPartyMemberEquippedItems_ov017_021c3fb4(int memberIndex, int requestModelLoad);
extern "C" void SendPartyMemberBodyAppearance_ov017_021c4418(int memberIndex, signed char recipientIndex);
extern "C" void QueuePartyMemberModelLoad_ov017_0218f5a4(void* gameResources, int memberIndex, int isForced, int useAlternateAnimationPackage, int isFullReload);

struct Queue_0203d028_4;
extern "C" void UpdateTaskQueue_ov017_021a3498(struct Queue_0203d028_4* queue);
struct QueueNode_02015438;
extern "C" int GetQueueHeadType_02046b24(struct QueueNode_02015438** queue);

extern "C" void* GetZone3D_02012fe4(void);
extern "C" void LoadZoneTriggers_0206461c(void* flagManager, int currentMap);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState*);

extern "C" void func_ov017_021c16a8(unsigned char* arg0);

extern "C" void func_ov017_021b65e0(void* arg0, int arg1);

struct MenuTask_0206f81c_2;
extern "C" void ResetMenuTask_ov017_021b2174(unsigned char* node);
extern "C" void SetMenuTaskFileName_ov017_021b2ba0(MenuTask_0206f81c_2* menuTask, char* fileName);
extern "C" void SetMenuTaskSetupFunction_ov017_021b2bd0(void* menuTask, int setupFunction, int overlayId);
struct Struct_0206f81c_3;
extern "C" void func_ov017_021b2bf4(Struct_0206f81c_3* arg0, unsigned int arg1);
struct Struct_0206f81c_4;
extern "C" void func_ov017_021b2c0c(Struct_0206f81c_4* arg0, unsigned int arg1);
struct Struct_0206f81c_5;
extern "C" void func_ov017_021b2bdc(Struct_0206f81c_5* arg0, unsigned int arg1);
struct Queue_020469f8;
struct QueueNode_020469f8_2;
extern "C" void PrependToQueue_020469f8(struct Queue_020469f8* queue, struct QueueNode_020469f8_2* node);

extern "C" void func_ov004_0215e25c(void*, void*);
extern "C" void func_ov004_02168684();
extern "C" void func_ov004_021689d8(SafeAllocator*, void*);
extern char data_020f0b40[];
extern char data_020f0b4c[];
extern char data_020f0b56[];

struct Struct_0206f81c_6 {
    char unknown_0_[0x164 - sizeof(SafeAllocator)];
    SafeAllocator unknown_150_[2];
    SafeAllocator* inline_0206f81c(int arg0) { return &unknown_150_[arg0]; }
};

struct ItemContext_0206f81c_7 {
    SafeAllocator unknown_0_;
    char unknown_14_[0x14 - sizeof(SafeAllocator)];
    char itemTable_14_[0x18];
    void* pItemTable_2c_;
    char unknown_30_[8];
};

struct ItemData_0206f81c_8 {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 4;
};

struct Struct_0206f81c_9 {
    unsigned short unknown_0_0_ : 13;
    unsigned short unknown_1_5_ : 3;
};

struct Struct_0206f81c_10 {
    char unknown_0_[0x5d0c];
    struct Struct_0206f81c_9 unknown_5d0c_;
};

struct Struct_0206f81c_11 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[2];
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    int unknown_14_;
};

// USA: RunDeferredTriggerActions_0206f81c
extern "C" ARM void RunDeferredTriggerActions_0206f81c(void* triggerResult) {
    void* wireless;
    void* flagManager;
    int isTriggerReloadNeeded;
    int var3;
    int hasPosition;
    int var5;
    short var6;
    struct Struct_0203d028_2* var7;
    BackgroundLoader* backgroundLoader;
    struct Queue_0201bdac_2* queue;
    int position[3];
    struct Struct_0203d028_2* gameState = (Struct_0203d028_2*)GameState::GetInstance();
    void* gameResources = GetGameResources();
    void* var13 = (char*)gameResources + 0x3000;
    queue = *(struct Queue_0201bdac_2**)((char*)var13 + REGION_VALUE(0x4ec, 0x6fc));
    wireless = func_0202ae18();
    flagManager = func_0205ec34();
    unsigned char* action = *(unsigned char**)((char*)triggerResult + 0x30);
    unsigned char hasZoneEntry;
    isTriggerReloadNeeded = 0;
    var3 = 0;
    hasZoneEntry = 0;
    hasPosition = 0;
    var5 = 0;

    if (action != NULL) {
        while (action != NULL) {
            unsigned short opcode = *(unsigned short*)(action + 0);
            switch (opcode) {
            case 0x84: {
                func_020703c8(((unsigned char*)flagManager)[0x332], *(unsigned short*)(action + 4), *(unsigned short*)(action + 6), *(unsigned short*)(action + 8));
                isTriggerReloadNeeded = 1;
                break;
            }

            case 0x94: {
                for (int i = 0; i < 5; i++) {
                    func_020703c8(i, *(unsigned short*)(action + 4), *(unsigned short*)(action + 6), *(unsigned short*)(action + 8));
                }
                isTriggerReloadNeeded = 1;
                break;
            }

            case 0xd6: {
                func_020703c8(*(unsigned short*)(action + 2), *(unsigned short*)(action + 4), *(unsigned short*)(action + 6), *(unsigned short*)(action + 8));
                isTriggerReloadNeeded = 1;
                break;
            }

            case 0x77: case 0x80: case 0x9b: {
                struct QueueNode_0201bdac* eventTask = *(struct QueueNode_0201bdac**)((char*)gameResources + 0x3000 + REGION_VALUE(0x524, 0x734));
                ResetEventTask_ov017_021baedc(eventTask, 1);
                *(unsigned short*)((char*)eventTask + 8) = *(unsigned short*)(action + 2);
                AppendToQueue_020469b4(queue, eventTask);
                SetSubScreenFadeInHeld_020213fc(*(struct Struct_020213fc**)((char*)gameResources + 0x3000 + REGION_VALUE(0x4c0, 0x6d0)), 1);
                DisableInputForDuration_020e1154((void*)0x1f4);
                break;
            }

            case 0x85: case 0x8a: case 0xe2: {
                unsigned char* zoneEntry = (unsigned char*)GetZoneEntry_0200fd0c((GameState*)gameState);
                InitZoneEntry_02070378((char*)zoneEntry);
                zoneEntry[2] = 1;
                *(unsigned short*)(zoneEntry + 0) = *(unsigned short*)(action + 2);
                *(unsigned int*)(zoneEntry + 0x20) = *(unsigned short*)(action + 4);
                if (*(unsigned short*)(action + 0) == 0x8a) zoneEntry[6] = 1;
                if (*(unsigned short*)(action + 0) == 0xe2) zoneEntry[0xc] = 1;
                if (*((unsigned char*)gameState + 0x5000 + REGION_VALUE(0xa4c, 0xcac)) != 0) zoneEntry[0x60] = 1;
                hasZoneEntry = 1;
                SetSubScreenFadeInHeld_020213fc(*(struct Struct_020213fc**)((char*)gameResources + 0x3000 + REGION_VALUE(0x4c0, 0x6d0)), hasZoneEntry);
                break;
            }

            case 0x76: {
                void* npc = FindNPCById_0203df78(GetNPCManager_0203cf4c(), *(unsigned short*)(action + 2));
                int npcData = 0;
                if (npc != NULL) {
                    npcData = GetNPCData_02040528((int*)npc);
                }
                if (npcData != 0) {
                    unsigned char var22;
                    unsigned char* var23 = *(unsigned char**)((char*)gameResources + 0x3000 + REGION_VALUE(0x500, 0x710));
                    var22 = *(unsigned char*)(var23 + 3);
                    if (var22 != 0) {
                        func_ov017_021b8d80(var23);
                    }
                    unsigned char* var24 = *(unsigned char**)((char*)gameResources + 0x3000 + REGION_VALUE(0x50c, 0x71c));
                    var22 |= (*(unsigned char*)(var24 + 3) != 0 && *(unsigned char*)(var24 + 0x20) != 0);
                    ResetTalkTask_ov017_021b8d1c(var23);
                    *(int*)(var23 + 0x114) = npcData;
                    *(int*)(var23 + 0x124) = *(unsigned short*)(action + 4);
                    *(unsigned char*)(var23 + 0x139) = (var22 != 0) ? 1 : 0;
                    AppendToQueue_020469b4(queue, (struct QueueNode_0201bdac*)var23);
                    int camera = GetFollowCamera_020100f8((char*)gameState);
                    if (camera != 0) {
                        DisableCameraTurning_020a27b8((unsigned char*)camera);
                    }
                }
                break;
            }

            case 0x79: case 0x89: case 0xe1: {
                unsigned char* zoneEntry = (unsigned char*)GetZoneEntry_0200fd0c((GameState*)gameState);
                InitZoneEntry_02070378((char*)zoneEntry);
                zoneEntry[2] = 1;
                *(unsigned short*)(zoneEntry + 0) = *(unsigned short*)(action + 2);
                zoneEntry[0xc] = 1;
                if (*(unsigned short*)(action + 0) == 0x89) zoneEntry[6] = 1;
                if (*(unsigned short*)(action + 0) == 0xe1) zoneEntry[0xc] = 0;
                hasZoneEntry = 1;
                break;
            }

            case 0x7a: {
                *(Vector3i*)position = *(Vector3i const*)(action + 4);
                hasPosition = 1;
                break;
            }

            case 0x7b: {
                var6 = *(short*)(action + 4);
                var5 = 1;
                break;
            }

            case 0x78: {
                struct Queue_0201bdac_2* var27;
                unsigned char* var28 = *(unsigned char**)((char*)gameResources + 0x3000 + REGION_VALUE(0x508, 0x718));
                var27 = *(struct Queue_0201bdac_2**)((char*)gameResources + 0x3000 + REGION_VALUE(0x4ec, 0x6fc));
                void* lightingManager = LightingManager::GetInstance();
                ResetBattleTask_ov017_021b6f18(var28);

                struct Struct_0206f81c_11 var30;
                var30.unknown_0_ = 1;
                var30.unknown_1_ = 0;
                var30.unknown_2_ = 0;
                var30.unknown_4_ = 0;
                var30.unknown_c_ = 0;
                var30.unknown_d_ = 0;
                var30.unknown_e_ = 0;
                var30.unknown_f_ = 0;
                var30.unknown_14_ = 0;
                var30.unknown_10_ = -1;
                var30.unknown_12_ = 2;
                var30.unknown_8_ = -1;

                var30.unknown_1_ = GetProtagonistObjectIndex_020100a8((GameState*)gameState);
                var30.unknown_4_ = *(unsigned short*)(action + 2) + 5 + 0x8000;
                var30.unknown_2_ = 0xffff;
                var30.unknown_8_ = *(unsigned short*)(action + 2);
                func_ov017_021b6e70(&var30, var30.unknown_2_);
                var30.unknown_12_ = *(int*)((char*)lightingManager + 0x98);

                if (IsLocalWirelessGuest_0202c540(wireless) != 0) {
                    if (var30.unknown_c_ == 0 && var30.unknown_d_ == 0) {
                        var30.unknown_14_ = 1;
                    }
                }
                ApplyBattleRequest_ov017_021b7104(var28, &var30);
                AppendToQueue_020469b4(var27, (struct QueueNode_0201bdac*)var28);
                break;
            }

            case 0x7c: {
                void* npc = FindNPCById_0203df78(GetNPCManager_0203cf4c(), *(unsigned short*)(action + 2));
                if (npc != NULL) {
                    *(int*)npc |= 0x8000;
                }
                break;
            }

            case 0x72: case 0x74: {
                if (GetParty_02010828((GameState*)gameState) != NULL) {
                    unsigned char itemTable[0x18];
#if defined(jpn)
                    SafeAllocator* allocator = ((Struct_0206f81c_6*)gameResources)->inline_0206f81c(1);
#else
                    void* allocator = ((Struct_0206f81c_6*)gameResources)->inline_0206f81c(1);
#endif
                    InitItemTable_020de824(itemTable);
                    func_020de848(itemTable);
#if defined(jpn)
                    func_020e04f8(itemTable, (void*)allocator, gItemDataPath_020f2a38, *(short*)(action + 2), true);
#else
                    BackgroundLoader::AddLockGlobal();
                    unsigned int fileSize = 0;
                    void* fileData = ExtractFileFromGP2((const char*)(gItemDataPath_020f2a38), (const char*)(data_020f2a30), (unsigned int*)(&fileSize));
                    if (fileData != NULL) {
                        LoadItemTableById_020de980(itemTable, allocator, fileData, fileSize, (int)(*(short*)(action + 2)));
                    }
                    BackgroundLoader::RemoveLockGlobal();
#endif
                    ItemContext_0206f81c_7 itemContext;
                    InitItemTable_020de824(itemContext.itemTable_14_);
                    ResetItemContext_0207cbe8((char*)&itemContext);
                    ResetItemContext_0207cbe8((char*)&itemContext);
                    itemContext.pItemTable_2c_ = itemTable;
                    AddItem_0207d300(&itemContext, *(short*)(action + 2), (signed char)*(unsigned short*)(action + 4), 0);
                }
                break;
            }

            case 0x73: case 0x75: {
                void* party = GetParty_02010828((GameState*)gameState);
                if (party != NULL) {
                    int removedCount = 0;
                    for (int i = 0; i < *(unsigned short*)(action + 4); i++) {
                        if (RemoveItemFromBagsOrHeldItems_02086d88((unsigned char*)party, *(short*)(action + 2)) != 0) removedCount++;
                    }
                    if (removedCount < *(unsigned short*)(action + 4)) {
                        var7 = (Struct_0203d028_2*)GameState::GetInstance();
                        unsigned char ownPartyOrder[4];
                        int unequippedMembers[4];
                        int unequippedCount = 0;
                        unsigned char memberCount = GetOwnPartyOrder_02011494((char*)var7, ownPartyOrder);
                        for (int i = 0; i < memberCount; i++) {
                            struct Struct_0203d028_3* partyMemberBase = (Struct_0203d028_3*)GetPartyMemberBaseByIndex_0200ff1c((GameState*)var7, ownPartyOrder[i]);
                            if (partyMemberBase != NULL) {
                                int memberData = func_02053c6c((unsigned char*)partyMemberBase);
                                if (memberData != 0) {
                                    struct ItemData_0206f81c_8* equippedItem = (struct ItemData_0206f81c_8*)FindEquippedItem_02083554((struct PartyMemberData_0206f81c*)memberData, *(unsigned short*)(action + 2));
                                    if (equippedItem != NULL) {
                                        UnequipCategory_02083738((void*)memberData, equippedItem->unknown_8_0_);
                                        unequippedMembers[unequippedCount] = ownPartyOrder[i];
                                        unequippedCount++;
                                        removedCount++;
                                        if (removedCount == *(unsigned short*)(action + 4)) break;
                                    }
                                }
                            }
                        }
                        int recipientIndex = -1;
                        for (int i = 0; i < unequippedCount; i++) {
                            if (IsLocalWirelessOn_0202b7d8((int*)func_0202ae18())) {
                                int memberIndex = unequippedMembers[i];
                                SendPartyMemberEquippedItems_ov017_021c3fb4(memberIndex, 1);
                                SendPartyMemberBodyAppearance_ov017_021c4418(memberIndex, recipientIndex);
                            }
                            void* var52 = GetGameResources();
                            void* var53 = *(void**)((char*)var52 + 0x3000 + REGION_VALUE(0x4f0, 0x700));
                            void* var54 = *(void**)((char*)var52 + 0x3000 + REGION_VALUE(0x4f4, 0x704));
                            backgroundLoader = BackgroundLoader::GetInstance();
                            QueuePartyMemberModelLoad_ov017_0218f5a4(var52, unequippedMembers[i], 1, 0, 0);
                            while (GetQueueHeadType_02046b24((struct QueueNode_02015438**)var53) == 0x13) {
                                backgroundLoader->RemoveAllLocks();
                                UpdateTaskQueue_ov017_021a3498((struct Queue_0203d028_4*)var53);
                                if (GetQueueHeadType_02046b24((struct QueueNode_02015438**)var54) == 0x14) {
                                    UpdateTaskQueue_ov017_021a3498((struct Queue_0203d028_4*)var54);
                                }
                            }
                        }
                    }
                }
                break;
            }

            case 0x9c: case 0x9d: {
                if (opcode == 0x9c) {
                    void* party = GetParty_02010828((GameState*)gameState);
                    if (party == NULL) break;
                    int isRemoved = 0;
                    if (RemoveItemFromBagsOrHeldItems_02086d88((unsigned char*)party, *(short*)(action + 4)) != 0) isRemoved = 1;
                    if (isRemoved == 0) {
                        unsigned char ownPartyOrder[4];
                        unsigned char memberCount = GetOwnPartyOrder_02011494((char*)gameState, ownPartyOrder);
                        for (int i = 0; i < memberCount; i++) {
                            int memberIndex = ownPartyOrder[i];
                            struct Struct_0203d028_3* partyMemberBase = (Struct_0203d028_3*)GetPartyMemberBaseByIndex_0200ff1c((GameState*)gameState, memberIndex);
                            if (partyMemberBase != NULL) {
                                int memberData = func_02053c6c((unsigned char*)partyMemberBase);
                                if (memberData != 0) {
                                    struct ItemData_0206f81c_8* equippedItem = (struct ItemData_0206f81c_8*)FindEquippedItem_02083554((struct PartyMemberData_0206f81c*)memberData, *(short*)(action + 4));
                                    if (equippedItem != NULL) {
                                        UnequipCategory_02083738((void*)memberData, equippedItem->unknown_8_0_);
                                        if (IsLocalWirelessOn_0202b7d8((int*)func_0202ae18())) {
                                            SendPartyMemberEquippedItems_ov017_021c3fb4(memberIndex, 1);
                                            SendPartyMemberBodyAppearance_ov017_021c4418(memberIndex, -1);
                                        }
                                        void* var64 = GetGameResources();
                                        void* var65 = *(void**)((char*)var64 + 0x3000 + REGION_VALUE(0x4f0, 0x700));
                                        void* var66 = *(void**)((char*)var64 + 0x3000 + REGION_VALUE(0x4f4, 0x704));
                                        BackgroundLoader* var67 = BackgroundLoader::GetInstance();
                                        QueuePartyMemberModelLoad_ov017_0218f5a4(var64, memberIndex, 1, 0, 0);
                                        while (GetQueueHeadType_02046b24((struct QueueNode_02015438**)var65) == 0x13) {
                                            var67->RemoveAllLocks();
                                            UpdateTaskQueue_ov017_021a3498((struct Queue_0203d028_4*)var65);
                                            if (GetQueueHeadType_02046b24((struct QueueNode_02015438**)var66) == 0x14) {
                                                UpdateTaskQueue_ov017_021a3498((struct Queue_0203d028_4*)var66);
                                            }
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
                if (GetParty_02010828((GameState*)gameState) != NULL) {
                    unsigned char itemTable[0x18];
#if defined(jpn)
                    SafeAllocator* allocator = ((Struct_0206f81c_6*)gameResources)->inline_0206f81c(1);
#else
                    void* allocator = ((Struct_0206f81c_6*)gameResources)->inline_0206f81c(1);
#endif
                    InitItemTable_020de824(itemTable);
                    func_020de848(itemTable);
#if defined(jpn)
                    func_020e04f8(itemTable, (void*)allocator, gItemDataPath_020f2a38, *(short*)(action + 6), true);
#else
                    BackgroundLoader::AddLockGlobal();
                    unsigned int fileSize = 0;
                    void* fileData = ExtractFileFromGP2((const char*)(gItemDataPath_020f2a38), (const char*)(data_020f2a30), (unsigned int*)(&fileSize));
                    if (fileData != NULL) {
                        LoadItemTableById_020de980(itemTable, allocator, fileData, fileSize, (int)(*(short*)(action + 6)));
                    }
                    BackgroundLoader::RemoveLockGlobal();
#endif
                    ItemContext_0206f81c_7 itemContext;
                    InitItemTable_020de824(itemContext.itemTable_14_);
                    ResetItemContext_0207cbe8((char*)&itemContext);
                    ResetItemContext_0207cbe8((char*)&itemContext);
                    itemContext.pItemTable_2c_ = itemTable;
                    AddItem_0207d300(&itemContext, *(short*)(action + 6), 1, 0);
                }
                break;
            }

            case 0x8d: {
                var3 = *(unsigned short*)(action + 2);
                break;
            }

            case 0x91: {
                void* var74 = GetGameResources();
                unsigned short var75 = *(unsigned short*)(action + 2);
                struct Queue_020469f8* var76 = *(struct Queue_020469f8**)((char*)var74 + 0x3000 + REGION_VALUE(0x4ec, 0x6fc));
                switch (var75) {
                case 2:
                    func_ov017_021b65e0(var74, 1);
                    break;
                case 6:
                    ((struct Struct_0206f81c_10*)((char*)gameState + REGION_VALUE(0xc, 0x26c)))->unknown_5d0c_.unknown_0_0_ |= 0x20;
                case 5: {
                    unsigned char* menuTask = *(unsigned char**)((char*)var74 + 0x3000 + REGION_VALUE(0x92c, 0xb4c));
                    ResetMenuTask_ov017_021b2174(menuTask);
                    SetMenuTaskFileName_ov017_021b2ba0((MenuTask_0206f81c_2*)menuTask, data_020f0b40);
                    SetMenuTaskSetupFunction_ov017_021b2bd0(menuTask, (int)func_ov004_0215e25c, OVERLAY_ID(4));
                    PrependToQueue_020469f8(var76, (struct QueueNode_020469f8_2*)menuTask);
                    break;
                }
                case 7: {
                    unsigned char* menuTask = *(unsigned char**)((char*)var74 + 0x3000 + REGION_VALUE(0x92c, 0xb4c));
                    ResetMenuTask_ov017_021b2174(menuTask);
                    func_ov017_021b2bf4((Struct_0206f81c_3*)menuTask, 1);
                    func_ov017_021b2c0c((Struct_0206f81c_4*)menuTask, 1);
                    SetMenuTaskFileName_ov017_021b2ba0((MenuTask_0206f81c_2*)menuTask, data_020f0b4c);
                    SetMenuTaskSetupFunction_ov017_021b2bd0(menuTask, (int)func_ov004_02168684, OVERLAY_ID(4));
                    PrependToQueue_020469f8(var76, (struct QueueNode_020469f8_2*)menuTask);
                    break;
                }
                case 8: {
                    unsigned char* menuTask = *(unsigned char**)((char*)var74 + 0x3000 + REGION_VALUE(0x92c, 0xb4c));
                    ResetMenuTask_ov017_021b2174(menuTask);
                    func_ov017_021b2bf4((Struct_0206f81c_3*)menuTask, 1);
                    func_ov017_021b2c0c((Struct_0206f81c_4*)menuTask, 1);
                    func_ov017_021b2bdc((Struct_0206f81c_5*)menuTask, 0);
                    SetMenuTaskFileName_ov017_021b2ba0((MenuTask_0206f81c_2*)menuTask, data_020f0b56);
                    SetMenuTaskSetupFunction_ov017_021b2bd0(menuTask, (int)func_ov004_021689d8, OVERLAY_ID(4));
                    PrependToQueue_020469f8(var76, (struct QueueNode_020469f8_2*)menuTask);
                    break;
                }
                }
                break;
            }
            }

            action = *(unsigned char**)(action + 0x18);
        }

        if (hasPosition != 0 && hasZoneEntry != 0) {
            unsigned char* zoneEntry = (unsigned char*)GetZoneEntry_0200fd0c((GameState*)gameState);
            zoneEntry[7] = 1;
            *(Vector3i*)(zoneEntry + 0x10) = *(Vector3i const*)position;
        }
        if (var5 != 0 && hasZoneEntry != 0) {
            unsigned char* zoneEntry = (unsigned char*)GetZoneEntry_0200fd0c((GameState*)gameState);
            zoneEntry[7] = 1;
            *(short*)(zoneEntry + 0x1c) = var6;
        }
        BackgroundLoader* var82 = BackgroundLoader::GetInstance();
        if (isTriggerReloadNeeded != 0 && var82->GetNumQueuedTasks() <= 0) {
            void* var83 = func_0205ec34();
            void* zone3D = GetZone3D_02012fe4();
            LoadZoneTriggers_0206461c(var83, *(int*)((char*)zone3D + 8));
        }
        if (var3 != 0) {
            unsigned char* var85 = *(unsigned char**)((char*)gameResources + 0x3000 + REGION_VALUE(0x938, 0xb58));
            if (var85[2] == 0) {
                func_ov017_021c16a8(var85);
                AppendToQueue_020469b4(queue, (struct QueueNode_0201bdac*)var85);
            }
        }
    }
}

void force_emission_of_vector3_copy_assignment_operator(Vector3fix* a)
{
    *a = *a;
}
