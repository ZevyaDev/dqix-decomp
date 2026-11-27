#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

extern unsigned char g_fileScratchSpace[0x30000];

#if defined(jpn)
#define func_020d6c00 func_020d8608
#endif

struct Struct_02011544;
struct GlobalFlags_02038598_4;

extern int data_02108e00;

extern "C" int ReadSaveMemory_02075910(int offset, void* destination, int length, int isAsync);
extern "C" void func_02075acc(int arg0, void* arg1, int arg2, int arg3);
extern "C" int func_020a9eb8(void* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_020d6c00();
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);
void SetBrightness(struct GameResources* res, int a, int b);
extern "C" void func_02011544(struct Struct_02011544* arg0);
extern "C" int func_02075ca0();
extern "C" void func_02075cb8();

struct SaveProgress_020aad1c {
    unsigned char step_0_;
    int saveBuffer_4_;
};

// USA: UpdateSaveProgress_020aad1c
extern "C" ARM int UpdateSaveProgress_020aad1c(struct SaveProgress_020aad1c* progress, int scratchBuffer, int saveOptions, int isQuickSave) {
    if (progress->step_0_ == 0) {
        GameState* gameState = GameState::GetInstance();
#if defined(jpn)
        gameState->unknown_5cc8_ = 1;
#else
        gameState->unknown_5cc8_ = 1;
        GameResources* resources = GetGameResources();
#endif
        unsigned int testByte;
        if (ReadSaveMemory_02075910(0, &testByte, 1, 0) == 0) {
#if defined(jpn)
            SetBrightness(GetGameResources(), -16, 10);
#else
            SetBrightness(resources, -16, 10);
#endif
            func_02011544((struct Struct_02011544*)gameState);
            progress->step_0_ = 4;
            return 1;
        } else {
            BackgroundLoader::FreeAllocationsGlobal();
#if !defined(jpn)
            unsigned int* globalFlags = (unsigned int*)func_020d6c00();
            SetGlobalFlags_020466e4(globalFlags, 0x2000000);
            SetFlags00(resources, 0x10);
#endif
            int saveBuffer = (int)&g_fileScratchSpace + 0x1c + 0x29000;
            if (ReadSaveMemory_02075910(0x8000, (void*)(progress->saveBuffer_4_ = saveBuffer), 0x6fe4, 1) == 0) {
#if !defined(jpn)
                globalFlags = (unsigned int*)func_020d6c00();
                ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)globalFlags, 0x2000000);
                ClearFlags00(resources, 0x10);
#endif
                progress->step_0_ = 4;
                return 1;
            } else {
                progress->step_0_ = 1;
            }
        }
    } else if (progress->step_0_ == 1) {
        if (func_02075ca0() == 0) {
            return 0;
        }
        func_02075cb8();
        data_02108e00 = progress->saveBuffer_4_;
        if (func_020a9eb8(progress, scratchBuffer, saveOptions, isQuickSave) == 0) {
#if !defined(jpn)
            ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)func_020d6c00(), 0x2000000);
            ClearFlags00(GetGameResources(), 0x10);
#endif
            progress->step_0_ = 4;
            return 1;
        } else {
            data_02108e00 = 0;
            func_02075acc(isQuickSave ? 0x8010 : 0x10, (void*)(progress->saveBuffer_4_ + 0x10), 0x6fe4, 1);
            progress->step_0_ = 2;
        }
    } else if (progress->step_0_ == 2) {
        if (func_02075ca0() == 0) {
            return 0;
        }
        func_02075cb8();
        if (isQuickSave != 0) {
#if !defined(jpn)
            ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)func_020d6c00(), 0x2000000);
            ClearFlags00(GetGameResources(), 0x10);
#endif
            progress->step_0_ = 4;
            return 1;
        } else {
            func_02075acc(0x8010, (void*)(progress->saveBuffer_4_ + 0x10), 0x6fe4, 1);
            progress->step_0_ = 3;
        }
    } else if (progress->step_0_ == 3) {
        if (func_02075ca0() == 0) {
            return 0;
        }
        func_02075cb8();
#if !defined(jpn)
        ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)func_020d6c00(), 0x2000000);
        ClearFlags00(GetGameResources(), 0x10);
#endif
        progress->step_0_ = 4;
        return 1;
    }
    return 0;
}
