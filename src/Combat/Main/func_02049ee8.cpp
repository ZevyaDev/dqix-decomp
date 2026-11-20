#include <globaldefs.h>

// USA: IsCombatantOnBattlefield_02049ee8
extern "C" ARM int IsCombatantOnBattlefield_02049ee8(unsigned char* combatant) {
    unsigned char* battleState = *(unsigned char**)(combatant + 0x13c);
    return battleState != 0 ? battleState[0x56] : 0;
}
