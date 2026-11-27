#include <globaldefs.h>

// USA: GetNextBattleAction_ov000_0215e9d8
extern "C" ARM void* GetNextBattleAction_ov000_0215e9d8(void* battle) {
    int actionCount = *(int*)((char*)battle + 0x8e24);
    if (actionCount >= 0x48) return (void*)0;
    return (char*)battle + 0x821c + actionCount * 0x28;
}
