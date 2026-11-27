#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetGameObjectByIndex_0200ff94(GameState* gameState, int index);

// USA: GetPartyMemberObjectIndices_02010890
extern "C" ARM void GetPartyMemberObjectIndices_02010890(GameState* gameState, int* outMemberObjectIndices, int* outMemberCount) {
    int count = 0;
    int i;
    for (i = 0; i < 4; i++) {
        if (GetGameObjectByIndex_0200ff94(gameState, i)) {
            outMemberObjectIndices[count] = i;
            count++;
        }
    }
    *outMemberCount = count;
}
