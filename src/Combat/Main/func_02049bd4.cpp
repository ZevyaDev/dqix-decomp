#include <globaldefs.h>

// USA: SetCombatantCellPosition_02049bd4
extern "C" ARM void SetCombatantCellPosition_02049bd4(unsigned char* combatant, int* cellPosition) {
    if (*(int**)(combatant + 0x13c) == 0) return;
    (*(int**)(combatant + 0x13c))[4] = cellPosition[0];
    (*(int**)(combatant + 0x13c))[6] = cellPosition[2];
    (*(int**)(combatant + 0x13c))[8] &= ~0x1;
}
