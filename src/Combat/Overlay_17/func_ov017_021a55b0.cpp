#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern "C" void LoadFileTables_020a0c0c(void);
struct Struct_0214e34c;
extern "C" struct Struct_0214e34c* func_020d7a50();
struct Struct_020d7aa0_2;
extern "C" void func_020d7aa0(struct Struct_020d7aa0_2* arg0);

extern int gMainHeap_02114e20;

struct Struct_ov017_021a55b0 {
    char unknown_0_[0x8];
    int unknown_8_;
    SafeAllocator unknown_c_;
};

// USA: func_ov017_021a55b0
extern "C" ARM void func_ov017_021a55b0(struct Struct_ov017_021a55b0* arg0) {
    void* var0 = arg0->unknown_c_.GetSignedAllocator();
    if (var0 != NULL) {
        arg0->unknown_c_.Destroy();
        FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
        LoadFileTables_020a0c0c();
    }
    func_020d7aa0((struct Struct_020d7aa0_2*)func_020d7a50());
    arg0->unknown_c_.ResetAllocatorPointer();
    arg0->unknown_8_ = 0;
}
