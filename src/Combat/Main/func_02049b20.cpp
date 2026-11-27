#include <globaldefs.h>

// USA: SetCombatantLineupPosition_02049b20
extern "C" ARM void SetCombatantLineupPosition_02049b20(unsigned char* combatant, int* position) {
    if (*(int**)(combatant + 0x13c) == 0) {
        return;
    }
    (*(int**)(combatant + 0x13c))[1] = position[0];
    (*(int**)(combatant + 0x13c))[3] = position[2];
    (*(int**)(combatant + 0x13c))[8] &= ~0x2;
}
