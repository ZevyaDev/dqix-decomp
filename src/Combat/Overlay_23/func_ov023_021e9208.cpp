#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetStoryChapter_0201079c(char* gameState);
extern "C" int GetStoryStep_020107d0(char* gameState);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned int);

// USA: func_ov023_021e9208
extern "C" ARM int func_ov023_021e9208(void* arg0) {
    char* var0 = (char*)GameState::GetInstance();
    SetScriptRefInt_ov017_021d6134(arg0, GetStoryChapter_0201079c(var0));
    SetScriptRefInt_ov017_021d6134((char*)arg0 + 0x8, GetStoryStep_020107d0(var0));
    return 1;
}
