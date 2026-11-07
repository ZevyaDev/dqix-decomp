#include <globaldefs.h>

// USA: GetCombatantCell_020493a4
extern "C" ARM int GetCombatantCell_020493a4(unsigned char* combatant) {
    unsigned char* battleState = *(unsigned char**)(combatant + 0x13c);
    return battleState != 0 ? battleState[0x1c] : 0xff;
}
