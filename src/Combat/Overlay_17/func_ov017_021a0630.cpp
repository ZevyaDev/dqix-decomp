#if defined(jpn)
enum { Enum_ov017_021a0630_632 = 0x68, Enum_ov017_021a0630_2768 = 0x8c0, Enum_ov017_021a0630_716 = 0x27c, Enum_ov017_021a0630_680 = 0x98, Enum_ov017_021a0630_668 = 0x24c, Enum_ov017_021a0630_780 = 0x2bc };
#else
enum { Enum_ov017_021a0630_632 = 0x278, Enum_ov017_021a0630_2768 = 0xad0, Enum_ov017_021a0630_716 = 0x2cc, Enum_ov017_021a0630_680 = 0x2a8, Enum_ov017_021a0630_668 = 0x29c, Enum_ov017_021a0630_780 = 0x30c };
#endif

#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/TextureArena.h"
#include "NitroSDK/VRAMAllocation.h"

extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);

extern AllocatorUnion gMainHeap_02114e20;

struct Struct_ov017_021d66c8 { int unknown_0_; int unknown_4_; };
struct Struct_ov017_021d66cc { int unknown_0_; int unknown_4_; };
extern Struct_ov017_021d66c8 data_ov017_021d66c8[];
extern Struct_ov017_021d66cc data_ov017_021d66cc[];

struct Struct_ov017_021d6800 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern Struct_ov017_021d6800 data_ov017_021d6818[];
extern Struct_ov017_021d6800 data_ov017_021d6820[];
extern Struct_ov017_021d6800 data_ov017_021d681c[];
extern Struct_ov017_021d6800 data_ov017_021d6800[];
extern Struct_ov017_021d6800 data_ov017_021d6808[];
extern Struct_ov017_021d6800 data_ov017_021d6804[];

// USA: func_ov017_021a0630
extern "C" ARM void func_ov017_021a0630(char* arg0) {
    int var0;
    int var1;
    for (var0 = 0; (var1 = data_ov017_021d66cc[var0].unknown_0_) != 0; var0++) {
        void* var2 = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, var1);
        int var3 = data_ov017_021d66c8[var0].unknown_0_;
        SafeAllocator* var4 = (SafeAllocator*)(arg0 + 0x38 + var3 * 0x14);
        var4->CreateTypeA(var2, var1);
    }

    RestoreTextureImageAllocationState((const unsigned int*)((int*)(arg0 + Enum_ov017_021a0630_632 + 0x2800)));
    RestoreTexturePaletteAllocationState((const unsigned int*)((int*)(arg0 + Enum_ov017_021a0630_2768 + 0x2000)));

    int var5;
    for (var0 = 0; (var5 = data_ov017_021d681c[var0].unknown_0_) != 0; var0++) {
        int var6 = data_ov017_021d6818[var0].unknown_0_;
        int var7 = data_ov017_021d6820[var0].unknown_0_;
        ((TextureArena*)((arg0 + Enum_ov017_021a0630_716) + var6 * 0x70))->Initialize(var5, var7);
    }

    RestoreTextureImageAllocationState((const unsigned int*)((int*)(arg0 + Enum_ov017_021a0630_680 + 0x2800)));

    for (var0 = 0; (var5 = data_ov017_021d6804[var0].unknown_0_) != 0; var0++) {
        int var8 = data_ov017_021d6800[var0].unknown_0_;
        int var9 = data_ov017_021d6808[var0].unknown_0_;
        ((TextureArena*)((arg0 + Enum_ov017_021a0630_716) + var8 * 0x70))->Initialize(var5, var9);
    }

    ((TextureArena*)(arg0 + Enum_ov017_021a0630_668 + 0xc00))->Initialize(0x8000, 0x400);
    ((TextureArena*)(arg0 + Enum_ov017_021a0630_780 + 0xc00))->Initialize(0x4000, 0x400);
}
