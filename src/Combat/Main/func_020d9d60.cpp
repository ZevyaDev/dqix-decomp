#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020d9d60_88 = 0x24 };
#else
enum { Enum_020d9d60_88 = 0x58 };
#endif

#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_020d6c00 func_020d8608
#endif

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" void* func_020d6c00(void);
struct GlobalFlags_02038598_4;
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);
extern int gMainHeap_02114e20;

struct Struct_020d9b34 {
    char unknown_0_[Enum_020d9d60_88];
    SafeAllocator unknown_58_;
};

// USA: func_020d9d60
extern "C" ARM void func_020d9d60(struct Struct_020d9b34* arg0) {
    EnablePlayerControl_020397c0((void*)GameState::GetInstance()->GetUnknownGameObject());
    ClearFlags00(GetGameResources(), 0x10);
    ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)func_020d6c00(), 0xe);
    void* var0 = arg0->unknown_58_.GetSignedAllocator();
    if (var0 == NULL) return;
    arg0->unknown_58_.Destroy();
    func_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
}
