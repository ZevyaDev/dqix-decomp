#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory/SignedAllocator.h"
#include "GameState/GameState.h"

struct ItemTable_0201099c_10;
struct ItemData_0201099c_9;
struct PartyMember_0205faf4_11;
struct PartyMemberData_0207d300;

struct Struct_0207ccf0_4 {
    char unknown_0_[0x2c];
    struct ItemTable_0201099c_10* pItemTable_2c_;
};

struct ItemData_0201099c_9 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 21;
    unsigned int unknown_b_1_ : 1;
};

extern "C" struct ItemData_0201099c_9* FindItemData_020dedd0(struct ItemTable_0201099c_10* itemTable, int itemId);
extern "C" void* func_0207d6dc(SafeAllocator* arg0, int arg1, int arg2);
extern "C" void* GetParty_02010828(GameState* gameState);
extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);
extern "C" int IsNPCCompanion_02061bd8(struct PartyMember_0205faf4_11* partyMember);
extern "C" unsigned char* GetPartyMemberData_02053c6c(unsigned char* gameObject);
extern "C" int CountHeldItems_02083960(struct PartyMemberData_0207d300* memberData);
extern "C" int func_0207ccf0(struct Struct_0207ccf0_4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" int func_0207cf30(struct Struct_0207ccf0_4* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0207d134(struct Struct_0207ccf0_4* arg0, int arg1, int arg2);
extern "C" int func_0207d200(struct Struct_0207ccf0_4* arg0, short arg1, int arg2);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern AllocatorUnion gMainHeap_02114e20;

static inline int inline_0207d300(struct ItemData_0201099c_9* arg0) {
    return arg0->unknown_8_0_ <= 7;
}

// USA: AddItem_0207d300
extern "C" ARM int AddItem_0207d300(struct Struct_0207ccf0_4* itemContext, short itemId, short count, int isAliveRequired) {
    int hasLoadedItemTable = 0;
    if (itemContext->pItemTable_2c_ == NULL) {
        func_0207d6dc((SafeAllocator*)itemContext, (int)&itemId, 1);
        hasLoadedItemTable = 1;
    }
    int result = -1;
    struct ItemData_0201099c_9* item = FindItemData_020dedd0(itemContext->pItemTable_2c_, itemId);
    if (item == NULL) {
        result = -2;
    } else if (inline_0207d300(item) != 0) {
        func_0207d134(itemContext, itemId, count);
        result = 3;
    } else if (item->unknown_8_0_ == 9) {
        func_0207d200(itemContext, itemId, count);
        result = 5;
    } else if (item->unknown_b_1_) {
        if (func_0207cf30(itemContext, itemId, count, 0) != 0) {
            result = 2;
        }
    } else {
        GameState* gameState = GameState::GetInstance();
        char* party = (char*)GetParty_02010828(gameState);
        unsigned char i;
        for (i = 0; i < *(unsigned char*)(party + 0xf7c); i++) {
            int memberIndex = *(signed char*)(party + i + 0xf78);
            GameObject* partyMemberBase = GetPartyMemberBaseByIndex_0200ff1c(gameState, memberIndex);
            if (partyMemberBase == NULL) {
                continue;
            }
            if (IsNPCCompanion_02061bd8((struct PartyMember_0205faf4_11*)partyMemberBase) != 0) {
                continue;
            }
            if (isAliveRequired != 0) {
                if ((int)*(unsigned short*)(*(char**)((char*)partyMemberBase + 0x130) + 4) <= 0) {
                    continue;
                }
                char* currentStats = *(char**)((char*)partyMemberBase + 0x138);
                if (currentStats != NULL && *(unsigned short*)currentStats == 0) {
                    continue;
                }
            }
            unsigned char* memberData = GetPartyMemberData_02053c6c((unsigned char*)partyMemberBase);
            if (memberData == NULL) {
                continue;
            }
            while (count != 0) {
                if (CountHeldItems_02083960((struct PartyMemberData_0207d300*)memberData) == 8) {
                    break;
                }
                result = func_0207ccf0(itemContext, itemId, 1, memberIndex, 0, 0, 0);
                if (result != 0) {
                    break;
                }
                count = (short)(count - 1);
            }
        }
        if (count > 0) {
            if (func_0207cf30(itemContext, itemId, count, 0) != 0) {
                result = 2;
            }
        }
    }
    if (hasLoadedItemTable) {
        SafeAllocator* allocator = (SafeAllocator*)itemContext;
        SignedAllocatorHeader* block = allocator->GetSignedAllocator();
        allocator->Destroy();
        FreeMemory_02012da4(&gMainHeap_02114e20, block);
        itemContext->pItemTable_2c_ = NULL;
    }
    return result;
}
