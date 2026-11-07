#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Memory/SignedAllocator.h"
#include "GameState/GameState.h"

struct ItemTable_0201099c_10;
struct ItemData_0201099c_9;
extern "C" struct ItemData_0201099c_9* FindItemData_020dedd0(struct ItemTable_0201099c_10* itemTable, int itemId);

extern "C" void* func_0207d6dc(SafeAllocator* arg0, int arg1, int arg2);
extern "C" void* GetParty_02010828(GameState* gameState);

struct EquipmentBag_020732cc;
extern "C" int AddEquipmentToBag_0207c378(struct EquipmentBag_020732cc* bag, int itemId, int count, int category);

extern "C" void func_0207cc18(void* arg0, struct ItemData_0201099c_9* arg1);

extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

extern AllocatorUnion gMainHeap_02114e20;

struct Struct_0207d134 {
    char unknown_0_[0x2c];
    struct ItemTable_0201099c_10* unknown_2c_;
    void* unknown_30_;
};

struct Struct_0207d134_2 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
};

// USA: func_0207d134
extern "C" ARM int func_0207d134(struct Struct_0207d134* arg0, short arg1, int arg2) {
    int var0 = 0;
    if (arg0->unknown_2c_ == NULL) {
        func_0207d6dc((SafeAllocator*)arg0, (int)&arg1, 1);
        var0 = 1;
    }
    int var1 = 0;
    struct ItemData_0201099c_9* var2 = FindItemData_020dedd0(arg0->unknown_2c_, arg1);
    if (var2 != NULL) {
        GameState* var3 = GameState::GetInstance();
        char* var4 = (char*)GetParty_02010828(var3) + 0x1d4;
        unsigned int var5 = ((struct Struct_0207d134_2*)var2)->unknown_8_0_;
        var1 = AddEquipmentToBag_0207c378((struct EquipmentBag_020732cc*)var4, arg1, arg2, var5);
        if (var1) {
            func_0207cc18(arg0, var2);
            arg0->unknown_30_ = *(void**)((char*)var2 + 4);
        }
    }
    if (var0) {
        SafeAllocator* var6 = (SafeAllocator*)arg0;
        SignedAllocatorHeader* var7 = var6->GetSignedAllocator();
        var6->Destroy();
        FreeMemory_02012da4(&gMainHeap_02114e20, var7);
        arg0->unknown_2c_ = NULL;
    }
    return var1;
}
