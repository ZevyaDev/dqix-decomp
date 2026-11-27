#include <globaldefs.h>

// USA: GetCombatantReservedCell_020493ec
extern "C" ARM int GetCombatantReservedCell_020493ec(unsigned char* combatant) {
    unsigned char* battleState = *(unsigned char**)(combatant + 0x13c);
    return battleState != 0 ? battleState[0x1e] : 0xff;
}
