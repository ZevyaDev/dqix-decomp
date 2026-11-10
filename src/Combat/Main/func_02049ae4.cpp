#include <globaldefs.h>

// USA: StopCombatantSidestep_02049ae4
extern "C" ARM void StopCombatantSidestep_02049ae4(unsigned char* combatant) {
    int* battleState = *(int**)(combatant + 0x13c);
    if (battleState != 0) {
        battleState[8] &= ~0x4;
    }
}
