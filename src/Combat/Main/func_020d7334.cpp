#include <globaldefs.h>

extern "C" void ResetEffectSlot_02059cc8(unsigned char* slot);

// USA: ClearCombatantEffectSlot_020d7334
extern "C" ARM void ClearCombatantEffectSlot_020d7334(unsigned char* combatantSlots, int combatantIndex) {
    int slotOffset;
    unsigned int keepMask;
    if (combatantIndex >= 0xc0) combatantIndex -= 0xbc;
    slotOffset = combatantIndex * 0xd8;
    ResetEffectSlot_02059cc8(combatantSlots + slotOffset);
    *(int*)(combatantSlots + 0xd4 + slotOffset) = 0;
    keepMask = ~(1 << combatantIndex);
    *(unsigned short*)(combatantSlots + 0xa00 + 0x24) &= keepMask;
    *(unsigned short*)(combatantSlots + 0xa00 + 0x26) &= keepMask;
}
