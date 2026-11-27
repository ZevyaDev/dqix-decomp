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
struct ItemBag_0207cf30_3;
struct ItemBag_0207cf30_4;
struct PartyMember_0205faf4_11;
struct PartyMemberData_0207cf30;

extern "C" struct ItemData_0201099c_9* FindItemData_020dedd0(struct ItemTable_0201099c_10* itemTable, int itemId);
extern "C" void* func_0207d6dc(SafeAllocator* arg0, int arg1, int arg2);
extern "C" void* GetParty_02010828(GameState* gameState);
extern "C" int GetBagItemCount_020a0b3c(struct ItemBag_0207cf30_3* bag, int itemId);
extern "C" int AddItemToBag_020a095c(struct ItemBag_0207cf30_4* bag, int itemId, int count);
extern "C" int IsNPCCompanion_02061bd8(struct PartyMember_0205faf4_11* partyMember);
extern "C" struct PartyMemberData_0207cf30* func_02053c6c(unsigned char* gameObject);
extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);

extern "C" void func_0207cc18(void* arg0, struct ItemData_0201099c_9* arg1);

extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);

extern AllocatorUnion gMainHeap_02114e20 __attribute__((aligned(4)));

struct PartyMemberData_0207cf30 {
    char unknown_0_[0x454];
    short heldItems_454_[8];
};

struct ItemContext_0207cf30_2 {
    char unknown_0_[0x2c];
    struct ItemTable_0201099c_10* pItemTable_2c_;
    void* unknown_30_;
    void* unknown_34_;
};

// USA: AddItemToBagThenHeldItems_0207cf30
extern "C" ARM int AddItemToBagThenHeldItems_0207cf30(struct ItemContext_0207cf30_2* itemContext, short itemId, int count, int isOverflowToHeldItems) {
    int hasLoadedItemTable = 0;
    if (itemContext->pItemTable_2c_ == NULL) {
        func_0207d6dc((SafeAllocator*)itemContext, (int)&itemId, 1);
        hasLoadedItemTable = 1;
    }
    int result = 0;
    struct ItemData_0201099c_9* item = FindItemData_020dedd0(itemContext->pItemTable_2c_, itemId);
    if (item != NULL) {
        GameState* gameState = GameState::GetInstance();
        char* bag = (char*)GetParty_02010828(gameState);
        int countToBag = count;
        short placedCount = 0;
        if (isOverflowToHeldItems) {
            int var7 = GetBagItemCount_020a0b3c((struct ItemBag_0207cf30_3*)GetParty_02010828(gameState), itemId);
            var7 = 99 - var7;
            if (var7 > count)
                var7 = count;
            countToBag = (short)var7;
        }
        result = AddItemToBag_020a095c((struct ItemBag_0207cf30_4*)bag, itemId, (signed char)countToBag);
        placedCount += countToBag;
        if (result) {
            func_0207cc18(itemContext, item);
            itemContext->unknown_30_ = *(void**)((char*)item + 4);
            itemContext->unknown_34_ = gameState->GetProtagonist()->baseStats_;
        }
        if (placedCount < count && isOverflowToHeldItems) {
            char* party = (char*)GetParty_02010828(gameState);
            for (int i = 0; i < *(unsigned char*)(party + 0xf7c); i++) {
                GameObject* partyMemberBase = GetPartyMemberBaseByIndex_0200ff1c(gameState, *(unsigned char*)(party + i + 0xf78));
                if (partyMemberBase == NULL)
                    continue;
                if (IsNPCCompanion_02061bd8((struct PartyMember_0205faf4_11*)partyMemberBase) != 0)
                    continue;
                struct PartyMemberData_0207cf30* memberData = func_02053c6c((unsigned char*)partyMemberBase);
                if (memberData == NULL)
                    continue;
                for (int j = 0; j < 8; j++) {
                    if (memberData->heldItems_454_[j] > 0)
                        continue;
                    memberData->heldItems_454_[j] = itemId;
                    func_0207cc18(itemContext, item);
                    placedCount++;
                    if (placedCount == count)
                        break;
                }
                if (placedCount == count)
                    break;
            }
        }
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
