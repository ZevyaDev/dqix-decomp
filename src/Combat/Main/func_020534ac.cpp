#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/SPRSprite.h"
#include "Graphics/TextureArena.h"

#if defined(jpn)
#define func_020d6c00 func_020d8608
#endif

#if defined(jpn)
#define func_02046708 func_02047528
#endif

struct GlobalFlags_02012de8;
extern "C" void* func_020d6c00(void);
extern "C" int func_02046708(struct GlobalFlags_02012de8* globalFlags, unsigned int mask);

struct Struct_020534ac_2;

struct Struct_020534ac;

struct TextureVRAMArea_0203d028;

extern "C" void func_0205308c(void* arg0, int arg1);

// USA: func_020534ac
extern "C" ARM void func_020534ac(char* arg0) {
    int var0;
    char* var1;
    char* var2;
    void* var3;
    void* var4;
    int var5;
    int var6;

    if (func_02046708((struct GlobalFlags_02012de8*)func_020d6c00(), 2)) {
        return;
    }
    if (*(unsigned char*)(arg0 + (IS_JPN ? 0x179 : 0x185)) == 0) {
        return;
    }

    var3 = (void*)(int)BackgroundLoader::GetInstance();

    if (((BackgroundLoader*)((struct Struct_020534ac_2*)var3))->GetDetailedTaskStatus((int)(*(int*)(arg0 + (IS_JPN ? 0x188 : 0x194)))) == 2) {
        ((BackgroundLoader*)((struct Struct_020534ac*)var3))->GetLoadedFileByID((int)(*(int*)(arg0 + (IS_JPN ? 0x188 : 0x194))), (void**)(&var5), (unsigned int*)(&var6));
        if (var5 != 0) {
            var0 = *(int*)(arg0 + (IS_JPN ? 0x148 : 0x154));
            var1 = (char*)(var0 + 0x168);
            var2 = (char*)(var0 + 0x154);
            ((TextureArena*)((struct TextureVRAMArea_0203d028*)(var1 + 0x400)))->Reset();
            ((TextureArena*)(var1 + 0x400))->Restore();
            var4 = ((SafeAllocator*)(var2 + 0x400))->Allocate(0x88);
            *(void**)(arg0 + (IS_JPN ? 0x184 : 0x190)) = var4;
            if (var4 != NULL) {
                ((SPRSprite*)(var4))->Reset();
                *(unsigned char*)((char*)(*(void**)(arg0 + (IS_JPN ? 0x184 : 0x190))) + 0x84) |= 4;
                ((SPRSprite*)(*(void**)(arg0 + (IS_JPN ? 0x184 : 0x190))))->LoadFromSPR((const void*)(var5), (SafeAllocator*)(var2 + 0x400));
            }
            ((TextureArena*)(var1 + 0x400))->Save();
        }
    }

    ((BackgroundLoader*)(var3))->RemoveTask((int)(*(int*)(arg0 + (IS_JPN ? 0x188 : 0x194))));
    *(int*)(arg0 + (IS_JPN ? 0x188 : 0x194)) = -1;
    *(unsigned char*)(arg0 + (IS_JPN ? 0x179 : 0x185)) = 0;

    if (*(unsigned char*)(arg0 + (IS_JPN ? 0x17a : 0x186)) != 0) {
        signed char var7 = *(signed char*)(arg0 + (IS_JPN ? 0x171 : 0x17d));
        char* var8 = arg0 + (var7 + 1);
        func_0205308c(arg0, *(signed char*)(var8 + 0x100 + (IS_JPN ? 0x6c : 0x78)));
        *(unsigned char*)(arg0 + (IS_JPN ? 0x17a : 0x186)) = 0;
    }
}
