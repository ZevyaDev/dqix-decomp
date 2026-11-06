#include <globaldefs.h>
extern "C" void func_02070950(struct Struct_02070950_2*, struct Struct_02070950*, int, int, int);

extern "C" void* func_020704fc(void*);

struct SoundEffectManager_02108760;
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern struct SoundEffectManager_02108760 gSoundEffectManager_02108760;

// USA: func_0208ad1c
extern "C" ARM void func_0208ad1c(void* arg0) {
    void* var0 = func_020704fc(arg0);
    if (var0 != NULL) {
        func_02070950((struct Struct_02070950_2*)var0, (struct Struct_02070950*)((char*)arg0 + 0xc), 0x14, 5, 0xf);
        PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 0x78, 0);
    }
}
