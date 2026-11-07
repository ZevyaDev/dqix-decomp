#include <globaldefs.h>

// USA: SetCombatantCell_02049390
extern "C" ARM void SetCombatantCell_02049390(unsigned char* combatant, unsigned char cell) {
    unsigned char* battleState = *(unsigned char**)(combatant + 0x13c);
    if (battleState != 0 && cell != 0xff) {
        battleState[0x1c] = cell;
    }
}
