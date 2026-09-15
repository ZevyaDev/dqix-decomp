#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"


// USA: func_020a39d8
ARM void ReleaseBattleBuffers020a39d8(SafeAllocator* alloc) {
    GameState* battleStruct = GameState::GetInstance();
    int base = ((int)func_ov017_0218b5b0());
    int word = (int)battleStruct->GetTreasureMapLanguageData();
    alloc->Free(*(void**)(base + 0x4000 + 0x48c));
    alloc->Free((void*)word);
    battleStruct->SetTreasureMapLanguageDataPtr(0);
    *(void**)(base + 0x4000 + 0x48c) = NULL;
}
