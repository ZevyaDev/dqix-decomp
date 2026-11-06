#include <globaldefs.h>

struct SoundEffectManager_02108760 { char unknown_0_[0xb4]; short loadedSoundSet_b4_; };
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);

extern struct SoundEffectManager_02108760 gSoundEffectManager_02108760;

struct Struct_ov025_021e49e0 { char unknown_0_[8]; unsigned short unknown_8_; };

// USA: func_ov025_021e49e0
extern "C" ARM int func_ov025_021e49e0(struct Struct_ov025_021e49e0* arg0) {
    PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, arg0->unknown_8_, 0);
    return 1;
}
