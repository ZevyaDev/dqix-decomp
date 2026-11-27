#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory/SignedAllocator.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

struct ItemTable_0201099c_10;
struct ItemData_0201099c_9;
struct PartyMember_0205faf4_11;
struct Struct_0207ccf0_4;

extern "C" struct ItemData_0201099c_9* FindItemData_020dedd0(struct ItemTable_0201099c_10* itemTable, int itemId);
extern "C" void* func_0207d6dc(SafeAllocator* arg0, int arg1, int arg2);
extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);
extern "C" int IsNPCCompanion_02061bd8(struct PartyMember_0205faf4_11* partyMember);
extern "C" unsigned char* func_02053c6c(unsigned char* gameObject);
extern "C" int AddItemToBagThenHeldItems_0207cf30(void* itemContext, short itemId, int count, unsigned char isOverflowToHeldItems);
extern "C" void func_0207cc18(void* arg0, struct ItemData_0201099c_9* arg1);
extern "C" int AddItemToEquipmentBag_0207d134(void* itemContext, short itemId, int count);
extern "C" int func_0207d200(struct Struct_0207ccf0_4* arg0, short arg1, int arg2);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);
extern AllocatorUnion gMainHeap_02114e20;

struct ItemContext_0207ccf0 {
    char unknown_0_[0x2c];
    struct ItemTable_0201099c_10* pItemTable_2c_;
    void* unknown_30_;
    int unknown_34_;
};

struct ItemData_0207ccf0_2 {
    char unknown_0_[4];
    void* unknown_4_;
    unsigned int unknown_8_0_ : 4, unknown_8_4_ : 21, unknown_b_1_ : 1, unknown_b_2_ : 6;
};

struct Struct_0207ccf0_3 {
    char unknown_0_[0x134];
    int unknown_134_;
};

static inline int inline_0207ccf0(unsigned int arg0) { return arg0 <= 7; }

// USA: AddItemToPartyMember_0207ccf0
extern "C" ARM int AddItemToPartyMember_0207ccf0(struct ItemContext_0207ccf0* itemContext, short itemId, int count, int memberIndex, unsigned char isBagAllowed, unsigned char isOverflowToHeldItems, unsigned char arg6) {
    int hasLoadedItemTable = 0;
    if (itemContext->pItemTable_2c_ == NULL) {
        func_0207d6dc((SafeAllocator*)itemContext, (int)&itemId, 1);
        hasLoadedItemTable = 1;
    }
    int result = -1;
    struct ItemData_0207ccf0_2* item = (struct ItemData_0207ccf0_2*)FindItemData_020dedd0(itemContext->pItemTable_2c_, itemId);
    if (item != NULL) {
        struct Struct_0207ccf0_3* partyMemberBase = (struct Struct_0207ccf0_3*)GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), memberIndex);
        if (partyMemberBase == NULL) return -1;
        if (IsNPCCompanion_02061bd8((struct PartyMember_0205faf4_11*)partyMemberBase)) return -1;
        short* heldItems = (short*)(func_02053c6c((unsigned char*)partyMemberBase) + 0x454);
        int placedCount = 0;
        if (isBagAllowed && arg6 && item->unknown_b_1_) {
            if (AddItemToBagThenHeldItems_0207cf30(itemContext, itemId, count, isOverflowToHeldItems)) {
                placedCount = count;
                result = 1;
            }
        } else if (item->unknown_8_0_ == 8) {
            for (int i = 0; i < 8; i++) {
                if (heldItems[i] <= 0) {
                    heldItems[i] = itemId;
                    placedCount = (short)(placedCount + 1);
                    result = 0;
                    func_0207cc18(itemContext, (struct ItemData_0201099c_9*)item);
                    itemContext->unknown_30_ = item->unknown_4_;
                    itemContext->unknown_34_ = partyMemberBase->unknown_134_;
                    if (placedCount == count) break;
                }
            }
        }
        if ((result == 0 && placedCount < count) || isBagAllowed) {
            short remainingCount = (short)(count - placedCount);
            if (inline_0207ccf0(item->unknown_8_0_)) {
                if (AddItemToEquipmentBag_0207d134(itemContext, itemId, (signed char)remainingCount)) result = 1;
            } else if (item->unknown_8_0_ == 9) {
                if (func_0207d200((struct Struct_0207ccf0_4*)itemContext, itemId, (signed char)remainingCount)) result = 1;
            } else {
                if (AddItemToBagThenHeldItems_0207cf30(itemContext, itemId, remainingCount, isOverflowToHeldItems)) result = 1;
            }
        }
    } else {
        result = -2;
    }
    if (hasLoadedItemTable) {
        SafeAllocator* allocator = (SafeAllocator*)itemContext;
        SignedAllocatorHeader* block = allocator->GetSignedAllocator();
        allocator->Destroy();
        func_02012da4(&gMainHeap_02114e20, block);
        itemContext->pItemTable_2c_ = NULL;
    }
    return result;
}
