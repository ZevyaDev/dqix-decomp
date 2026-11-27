#include <globaldefs.h>

// USA: SetCombatantLineupFacing_02049bac
extern "C" ARM void SetCombatantLineupFacing_02049bac(unsigned char* combatant, int* rotation) {
    if (*(int**)(combatant + 0x13c) == 0) return;
    (*(int**)(combatant + 0x13c))[2] = rotation[1];
    (*(int**)(combatant + 0x13c))[8] &= ~0x2;
}
