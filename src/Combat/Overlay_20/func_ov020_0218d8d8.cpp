#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov020_0218d8d8_1136 = 0x400 };
#else
enum { Enum_ov020_0218d8d8_1136 = 0x470 };
#endif

#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern "C" unsigned char func_0200fb9c(char* arg0);

struct MusicManager_02109bf4_4;
extern "C" void func_0209c678(struct MusicManager_02109bf4_4* arg0, int arg1);

struct Struct_02109bf4_3;
extern "C" void func_0209c20c(struct Struct_02109bf4_3* arg0);

struct Struct_0205e8ec;
extern "C" void func_0205e8ec(struct Struct_0205e8ec* arg0);

extern AllocatorUnion gMainHeap_02114e20;
extern char gMusicManager_02109bf4;
extern char gSoundEffectManager_02108760;

struct Struct_ov020_0218b710_3 {
    char unknown_0_[Enum_ov020_0218d8d8_1136];
    SafeAllocator unknown_470_;
};

// USA: func_ov020_0218d8d8
extern "C" ARM void func_ov020_0218d8d8(struct Struct_ov020_0218b710_3* arg0) {
    GameState* var0 = GameState::GetInstance();
    SignedAllocatorHeader* var1 = arg0->unknown_470_.GetSignedAllocator();
    arg0->unknown_470_.Destroy();
    FreeMemory_02012da4(&gMainHeap_02114e20, var1);
    if (func_0200fb9c((char*)var0) == 2) {
        return;
    }
    func_0209c678((struct MusicManager_02109bf4_4*)&gMusicManager_02109bf4, 0);
    func_0209c20c((struct Struct_02109bf4_3*)&gMusicManager_02109bf4);
    func_0205e8ec((struct Struct_0205e8ec*)&gSoundEffectManager_02108760);
}
