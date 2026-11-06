#include <globaldefs.h>
#include "Input/Input.h"

struct SoundEffectManager_02108760;
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);

extern struct SoundEffectManager_02108760 gSoundEffectManager_02108760;

// USA: func_ov019_0218c240
extern "C" ARM int func_ov019_0218c240(void* arg0) {
    if (!g_keyManager.TestKeysPressed(0x7f3)) {
        unsigned char var0 = g_touchInput.pressed_;
        if (var0 == 0) return 0;
    }
    PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
    return 1;
}
