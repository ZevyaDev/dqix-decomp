#include <globaldefs.h>
#include "Memory/AllocatorUnion.h"
#include "GameState/GameState.h"

extern "C" void func_020a0c0c(void);
void TailForward02012da4(AllocatorUnion* alloc, void* data);
extern AllocatorUnion data_02114e20;

// USA: func_020a395c  (semantic: ReleaseBattleBuffersAlt020a395c)
extern "C" ARM void func_020a395c(void) {
    GameState* battleStruct = GameState::GetInstance();
    int base = ((int)func_ov017_0218b5b0());
    unsigned char* word = battleStruct->GetTreasureMapLanguageData();
    TailForward02012da4(&data_02114e20, *(void**)(base + 0x4000 + 0x48c));
    TailForward02012da4(&data_02114e20, word);
    if (*(unsigned char*)(base + 0x4000 + 0x490) != 0) {
        func_020a0c0c();
        *(unsigned char*)(base + 0x4000 + 0x490) = 0;
    }
    battleStruct->SetTreasureMapLanguageDataPtr(0);
    *(void**)(base + 0x4000 + 0x48c) = 0;
}
