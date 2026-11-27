#include <globaldefs.h>

extern "C" void LoadExtraSoundSet_0205ebc0(void* manager, int soundSetToLoad, int soundSet);

extern char gSoundEffectManager_02108760;

struct Struct_ov025_021e6320 { char unknown_0_[8]; unsigned short unknown_8_; unsigned short unknown_a_; };

// USA: RunBACTLoadExtraSoundSetCommand_ov025_021e6320
extern "C" ARM int RunBACTLoadExtraSoundSetCommand_ov025_021e6320(struct Struct_ov025_021e6320* command) {
    LoadExtraSoundSet_0205ebc0(&gSoundEffectManager_02108760, command->unknown_8_, command->unknown_a_);
    return 1;
}
