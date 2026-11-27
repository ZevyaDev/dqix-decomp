#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory/SignedAllocator.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

struct ItemTable_0201099c_10;
struct ItemData_0201099c_9;
extern "C" struct ItemData_0201099c_9* FindItemData_020dedd0(struct ItemTable_0201099c_10* itemTable, int itemId);

extern "C" void* func_0207d6dc(SafeAllocator* arg0, int arg1, int arg2);
extern "C" void* GetParty_02010828(GameState* gameState);

struct EquipmentBag_020732cc;
extern "C" int AddEquipmentToBag_0207c378(struct EquipmentBag_020732cc* bag, int itemId, int count, int category);

extern "C" void func_0207cc18(void* arg0, struct ItemData_0201099c_9* arg1);

extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);

extern AllocatorUnion gMainHeap_02114e20;

struct ItemContext_0207d134 {
    char unknown_0_[0x2c];
    struct ItemTable_0201099c_10* pItemTable_2c_;
    void* unknown_30_;
};

struct ItemData_0207d134_2 {
    char unknown_0_[8];
    unsigned int category_8_0_ : 4;
};

// USA: AddItemToEquipmentBag_0207d134
extern "C" ARM int AddItemToEquipmentBag_0207d134(struct ItemContext_0207d134* itemContext, short itemId, int count) {
    int hasLoadedItemTable = 0;
    if (itemContext->pItemTable_2c_ == NULL) {
        func_0207d6dc((SafeAllocator*)itemContext, (int)&itemId, 1);
        hasLoadedItemTable = 1;
    }
    int isAdded = 0;
    struct ItemData_0201099c_9* item = FindItemData_020dedd0(itemContext->pItemTable_2c_, itemId);
    if (item != NULL) {
        GameState* gameState = GameState::GetInstance();
        char* equipmentBag = (char*)GetParty_02010828(gameState) + 0x1d4;
        unsigned int category = ((struct ItemData_0207d134_2*)item)->category_8_0_;
        isAdded = AddEquipmentToBag_0207c378((struct EquipmentBag_020732cc*)equipmentBag, itemId, count, category);
        if (isAdded) {
            func_0207cc18(itemContext, item);
            itemContext->unknown_30_ = *(void**)((char*)item + 4);
        }
    }
    if (hasLoadedItemTable) {
        SafeAllocator* allocator = (SafeAllocator*)itemContext;
        SignedAllocatorHeader* block = allocator->GetSignedAllocator();
        allocator->Destroy();
        func_02012da4(&gMainHeap_02114e20, block);
        itemContext->pItemTable_2c_ = NULL;
    }
    return isAdded;
}
