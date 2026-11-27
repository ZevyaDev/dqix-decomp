#include <globaldefs.h>

// USA: SetCombatantOnBattlefield_02049f28
extern "C" ARM void SetCombatantOnBattlefield_02049f28(unsigned char* combatant) {
    unsigned char* battleState = *(unsigned char**)(combatant + 0x13c);
    if (battleState != 0) {
        battleState[0x56] = 1;
    }
}
