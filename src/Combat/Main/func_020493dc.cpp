#include <globaldefs.h>

// USA: SetCombatantReservedCell_020493dc
extern "C" ARM void SetCombatantReservedCell_020493dc(unsigned char* combatant, unsigned char cell) {
    unsigned char* battleState = *(unsigned char**)(combatant + 0x13c);
    if (battleState != 0) {
        battleState[0x1e] = cell;
    }
}
