#include <globaldefs.h>

extern "C" void LoadExtraSoundSet_0205ebc0(void* manager, int soundSetToLoad, int soundSet);

extern char gSoundEffectManager_02108760;

struct Struct_ov025_021e6320 { char unknown_0_[8]; unsigned short unknown_8_; unsigned short unknown_a_; };

// USA: func_ov025_021e6320
extern "C" ARM int func_ov025_021e6320(struct Struct_ov025_021e6320* arg0) {
    LoadExtraSoundSet_0205ebc0(&gSoundEffectManager_02108760, arg0->unknown_8_, arg0->unknown_a_);
    return 1;
}
