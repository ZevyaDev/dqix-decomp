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

struct Struct_0207cf30_4;
extern "C" int func_020a095c(struct Struct_0207cf30_4* arg0, int arg1, int arg2);

extern "C" void func_0207cc18(void* arg0, struct ItemData_0201099c_9* arg1);

extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

extern AllocatorUnion gMainHeap_02114e20;

struct Struct_0207ccf0_4 {
    char unknown_0_[0x2c];
    struct ItemTable_0201099c_10* unknown_2c_;
    void* unknown_30_;
};

// USA: func_0207d200
extern "C" ARM int func_0207d200(struct Struct_0207ccf0_4* arg0, short arg1, int arg2) {
    int var0 = 0;
    if (arg0->unknown_2c_ == NULL) {
        func_0207d6dc((SafeAllocator*)arg0, (int)&arg1, 1);
        var0 = 1;
    }
    int var1 = 0;
    struct ItemData_0201099c_9* var2 = FindItemData_020dedd0(arg0->unknown_2c_, arg1);
    if (var2 != NULL) {
        GameState* var3 = GameState::GetInstance();
        char* var4 = (char*)GetParty_02010828(var3) + 0xe04;
        var1 = func_020a095c((struct Struct_0207cf30_4*)var4, arg1, arg2);
        if (var1) {
            func_0207cc18(arg0, var2);
            arg0->unknown_30_ = *(void**)((char*)var2 + 4);
        }
    }
    if (var0) {
        SafeAllocator* var5 = (SafeAllocator*)arg0;
        SignedAllocatorHeader* var6 = var5->GetSignedAllocator();
        var5->Destroy();
        FreeMemory_02012da4(&gMainHeap_02114e20, var6);
        arg0->unknown_2c_ = NULL;
    }
    return var1;
}
