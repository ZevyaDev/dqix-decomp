#include <globaldefs.h>

struct SoundEffectManager_02108760;
extern struct SoundEffectManager_02108760 gSoundEffectManager_02108760;
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern "C" void func_ov000_02182498(void* arg0, int arg1);

// USA: func_ov000_021823dc
extern "C" ARM void func_ov000_021823dc(unsigned char* arg0, int arg1) {
    if (arg1 > 3) {
        arg1 = 3;
    }
    if (arg1 > 0) {
        unsigned char var0 = arg0[0x6e8];
        if (arg1 == var0) {
            if (*(short*)(arg0 + 0x600 + 0xea) != 0) {
                return;
            }
        }
        arg0[0x6e9] = var0;
        arg0[0x6e8] = arg1;
        *(short*)(arg0 + 0x600 + 0xea) = 0x1e;
        *(short*)(arg0 + 0x600 + 0xec) = 0;
        if (arg1 == 1) {
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 0x1a, 0);
            return;
        }
        if (arg1 == 2) {
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 0x17, 0);
            return;
        }
        PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 0x18, 0);
        return;
    }
    if (arg0[0x6e8] != 0) {
        func_ov000_02182498(arg0, 1);
        return;
    }
    arg0[0x6e9] = 0;
    arg0[0x6e8] = 0;
    *(short*)(arg0 + 0x600 + 0xea) = 0;
}
