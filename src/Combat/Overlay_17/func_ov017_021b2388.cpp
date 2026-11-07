#if defined(jpn)
enum { Enum_ov017_021b2388_14080 = 0x34f0 };
#else
enum { Enum_ov017_021b2388_14080 = 0x3700 };
#endif

#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "std_library_functions.h"
#include "Resource/Brightness.h"


extern "C" int GetFollowCamera_020100f8(char* gameState);
struct Struct_02018300_3;
extern "C" void DisablePlayerControl_020397cc(struct Struct_02018300_3* object, int standStill);
extern "C" void SetCameraFlags_020a28a0(unsigned char* camera, unsigned char flags);
extern "C" void DisableCameraTurning_020a27b8(unsigned char* camera);
extern "C" int IsQueueEmpty_02046b08(void** queue);
extern "C" void ReleaseFileTablesForSpace_020a0cc4(unsigned int);
extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
extern "C" void HaltForever_020c9be0(void);
struct GameResources;
void SetBrightness(GameResources*, int, int);
struct Struct_0214e34c;
extern "C" struct Struct_0214e34c* func_020d7a50();
struct TimedMessageQueue_020d7aa0_2;
extern "C" void ClearTimedMessageQueue_020d7aa0(struct TimedMessageQueue_020d7aa0_2* queue);

extern int gMainHeap_02114e20;
extern char data_ov017_021d7a28;

struct Struct_ov017_021b2388 {
    unsigned int unknown_0_0_ : 4;
    unsigned int unknown_0_4_ : 1;
    unsigned int unknown_0_5_ : 27;
};

struct Struct_ov017_021b2388_2 {
    char unknown_0_[0x8];
    int unknown_8_;
    int unknown_c_;
    SafeAllocator unknown_10_;
    char unknown_24_[0x14];
    struct Struct_ov017_021b2388 unknown_38_;
    char unknown_3c_[0x2];
    unsigned char unknown_3e_;
    unsigned int unknown_40_;
    void* unknown_44_;
};

// USA: func_ov017_021b2388
extern "C" ARM int func_ov017_021b2388(struct Struct_ov017_021b2388_2* arg0) {
    GameState* var0 = (GameState*)GameState::GetInstance();
    int var1 = ((int)GetGameResources());
    unsigned char* var2;
    GameObject* var3 = var0->GetUnknownGameObject();
    var2 = (unsigned char*)GetFollowCamera_020100f8((char*)var0);
    int var4 = (int)BackgroundLoader::GetInstance();
    void** var5 = *(void***)((char*)var1 + Enum_ov017_021b2388_14080);
    unsigned int var6 = GetFlags04((GameResources*)var1);
    arg0->unknown_40_ = var6;

    if (var3) {
        DisablePlayerControl_020397cc((struct Struct_02018300_3*)var3, 1);
    }

    if (var2) {
        arg0->unknown_3e_ = (var2[0x244] & 2) != 0;
        SetCameraFlags_020a28a0(var2, 2);
        DisableCameraTurning_020a27b8(var2);
        arg0->unknown_44_ = var2;
    }

    if (!IsQueueEmpty_02046b08(var5)) {
        return arg0->unknown_8_;
    }

    SetFlags00((GameResources*)var1, 0x10);
    ReleaseFileTablesForSpace_020a0cc4(0x2f800);
    void* var7 = AllocateRoundedSize_02012d88((AllocatorUnion*)&gMainHeap_02114e20, 0x2f800);
    if (!var7) {
        HaltForever_020c9be0();
    }
    arg0->unknown_10_.CreateTypeA(var7, 0x2f800);

    char var8[0x50];
    sprintf(var8, &data_ov017_021d7a28, arg0->unknown_24_);
    arg0->unknown_c_ = ((BackgroundLoader*)(var4))->QueueLoadFile((const char*)((int)var8), (SafeAllocator*)((int)&arg0->unknown_10_));

    if (!arg0->unknown_38_.unknown_0_4_) {
        SetBrightness((GameResources*)var1, -16, 30);
    }

    ClearTimedMessageQueue_020d7aa0((struct TimedMessageQueue_020d7aa0_2*)func_020d7a50());
    return 1;
}
