#include <globaldefs.h>

extern "C" void* func_ov017_0219219c(char* arg0, int arg1);

// USA: SetCombatantAppearanceFlags_ov017_02191aac
extern "C" ARM void SetCombatantAppearanceFlags_ov017_02191aac(void* gameResources, int isSet, int combatantIndex, int flags) {
    void* appearanceFlags = func_ov017_0219219c((char*)gameResources, combatantIndex);
    if (!appearanceFlags) return;
    appearanceFlags = func_ov017_0219219c((char*)gameResources, combatantIndex);
    if (appearanceFlags) *(unsigned char*)appearanceFlags |= 1;
    if (isSet == 1) {
        appearanceFlags = func_ov017_0219219c((char*)gameResources, combatantIndex);
        if (appearanceFlags) *(unsigned char*)appearanceFlags |= flags;
        return;
    }
    if (isSet != 0) return;
    appearanceFlags = func_ov017_0219219c((char*)gameResources, combatantIndex);
    if (appearanceFlags) *(unsigned char*)appearanceFlags &= ~flags;
}
