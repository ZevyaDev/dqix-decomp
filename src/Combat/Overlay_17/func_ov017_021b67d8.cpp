#if defined(jpn)
enum {Enum_ov017_021b67d8_1788=0x4ec, Enum_ov017_021b67d8_1844=0x524, Enum_ov017_021b67d8_204=0xc8};
#else
enum {Enum_ov017_021b67d8_1788=0x6fc, Enum_ov017_021b67d8_1844=0x734, Enum_ov017_021b67d8_204=0xcc};
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_020a1e54 func_020a3bcc
#endif

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

extern "C" void func_020a1e54(int isPreviousReloaded);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);
extern "C" void LoadFileTables_020a0c0c(void);
struct Queue_02038598_5;
extern "C" int IsTypeInQueue_02046b60(struct Queue_02038598_5* queue, int type);
extern "C" void* func_0202ae18(void);

extern int gMainHeap_02114e20;

struct Struct_ov017_021b67d8 {
    unsigned char unknown_0_[0x8];
    SafeAllocator unknown_8_;
    unsigned char unknown_1c_[0x24 - 0x8 - sizeof(SafeAllocator)];
    void* unknown_24_;
};

struct Struct_ov017_021b67d8_2 {
    unsigned char unknown_0_[Enum_ov017_021b67d8_1788];
    struct Queue_02038598_5* unknown_6fc_;
    unsigned char unknown_700_[Enum_ov017_021b67d8_1844 - Enum_ov017_021b67d8_1788 - 4];
    unsigned char* unknown_734_;
};

// USA: func_ov017_021b67d8
extern "C" ARM void func_ov017_021b67d8(struct Struct_ov017_021b67d8* arg0) {
    if (arg0->unknown_24_ != NULL) {
        arg0->unknown_24_ = NULL;
        func_020a1e54(1);
    }

    void* var0 = arg0->unknown_8_.GetSignedAllocator();
    if (var0 != NULL) {
        arg0->unknown_8_.Destroy();
        func_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
    }

    LoadFileTables_020a0c0c();

    int var1 = 1;
    struct Struct_ov017_021b67d8_2* var2 = (struct Struct_ov017_021b67d8_2*)((char*)GetGameResources() + 0x3000);
    struct Queue_02038598_5* var3 = var2->unknown_6fc_;
    unsigned char* var4 = var2->unknown_734_;

    if (IsTypeInQueue_02046b60(var3, 0x18) != 0) {
        var1 = 0;
    }
    if (IsTypeInQueue_02046b60(var3, 4) != 0) {
        if (var4[Enum_ov017_021b67d8_204] == 1) {
            var1 = 0;
        }
    }
    if (var1 == 0) {
        return;
    }

    char* var5 = (char*)func_0202ae18();
    var5[0x1000 + 0x11] = 1;
}
