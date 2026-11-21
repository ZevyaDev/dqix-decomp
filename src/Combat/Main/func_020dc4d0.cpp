#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned char GetPartyOrder_020114ec(char* gameState, void* outPartyOrder);

// USA: GetExistingPartyOrder_020dc4d0
extern "C" ARM void GetExistingPartyOrder_020dc4d0(signed char* outPartyOrder, signed char* outCount) {
    GameState* gameState = GameState::GetInstance();
    signed char partyOrder[8];
    signed char partyOrderCount = GetPartyOrder_020114ec((char*)gameState, partyOrder);
    signed char existingCount = 0;
    for (signed char i = 0; i < partyOrderCount; i++) {
        if (gameState->GetPartyMemberByIndex(partyOrder[i]) != NULL) {
            outPartyOrder[existingCount] = partyOrder[i];
            existingCount = existingCount + 1;
        }
    }
    *outCount = existingCount;
}
