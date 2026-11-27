#include <globaldefs.h>
#if defined(jpn)
#define func_02095578 func_020971c8
#define data_020f05dc data_020f0644
#endif
#include <GameState/GameState.h>
#include <Filesystem/BackgroundLoader.h>
#include <Filesystem/FileIO.h>
#include <std_library_functions.h>
#include "Resource/GameResources.h"

struct FlagManager_0206461c {
    unsigned char unknown_0_[0x47c];
    int unknown_47c_;
    unsigned char unknown_480_[0x14];
    int unknown_494_;
};
struct Struct_0206461c_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[3];
    char mapShortName_5_[3];
};
struct Struct_02108844;
struct Struct_02013fb4;
extern Struct_02108844 data_02108844;
extern char data_020f05dc[] __attribute__((aligned(4)));
extern "C" int GetStoryChapter_0201079c(char*);
extern "C" int GetStoryStep_020107d0(char*);
extern "C" void func_02064574(Struct_02108844*, int, Struct_02013fb4*, int, int, int, int);
extern "C" void* GetQuestManager_02094d6c();
extern "C" void func_02095578(void*);

static inline SafeAllocator* inline_0206461c(GameResources* arg0, int arg1) {
    return &arg0->allocator_array_38[arg1];
}

// USA: LoadZoneTriggers_0206461c
extern "C" ARM int LoadZoneTriggers_0206461c(FlagManager_0206461c* flagManager, Struct_0206461c_2* currentMap) {
    GameState* gameState = GameState::GetInstance();
    BackgroundLoader::GetInstance();
    Struct_02108844* staticFlagManager = &data_02108844;
    SafeAllocator* allocator = inline_0206461c(GetGameResources(), 15);
    unsigned int fileSize = 0;
    char mapPrefix[4];
    char path[64];
    int storyChapter = GetStoryChapter_0201079c((char*)gameState);
    int storyStep = GetStoryStep_020107d0((char*)gameState);
    allocator->Reset();
    flagManager->unknown_47c_ = 0;
    flagManager->unknown_494_ = 0;
    memcpy(mapPrefix, currentMap->mapShortName_5_, 3);
    mapPrefix[3] = 0;
    if (mapPrefix[0] == 'F') mapPrefix[1] = 0;
    BackgroundLoader::AddLockGlobal();
    sprintf(path, data_020f05dc, mapPrefix);
    Struct_02013fb4* triggerScript = (Struct_02013fb4*)LoadFileIntoMemory(path, g_fileScratchSpace, &fileSize);
    if (triggerScript) func_02064574(staticFlagManager, (int)allocator, triggerScript, fileSize, currentMap->unknown_0_, storyChapter, storyStep);
    BackgroundLoader::RemoveLockGlobal();
    func_02095578(GetQuestManager_02094d6c());
    return 1;
}
