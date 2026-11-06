#include <globaldefs.h>

struct SoundEffectManager_02108760;

extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern int gSoundEffectManager_02108760;

// USA: func_ov006_02159f0c
extern "C" ARM int func_ov006_02159f0c(char* arg0) {
    int var0 = *(int*)(arg0 + 0x3ac);
    if (var0 != 0) {
        return var0;
    }
    int var1 = *(int*)(arg0 + 0x3a4);
    if (var1 == 0) {
        return var1;
    }
    switch (*(int*)(arg0 + 0x39c)) {
    case 0:
        PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 0xa, 0);
        break;
    case 1:
        PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 0xc, 0);
        break;
    case 2:
        PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 0xb, 0);
        break;
    default:
        break;
    }
    *(int*)(arg0 + 0x3ac) = 1;
    return 1;
}
