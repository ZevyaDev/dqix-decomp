#include <globaldefs.h>

// USA: SetCombatantOffBattlefield_02049f3c
extern "C" ARM void SetCombatantOffBattlefield_02049f3c(unsigned char* combatant) {
    unsigned char* battleState = *(unsigned char**)(combatant + 0x13c);
    if (battleState != 0) {
        battleState[0x56] = 0;
    }
}
