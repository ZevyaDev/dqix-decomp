#include <globaldefs.h>

extern "C" void UnloadExtraSoundSet_0205eb80(void* manager);

extern int gSoundEffectManager_02108760;

// USA: func_ov001_02163848
extern "C" ARM int func_ov001_02163848(void) {
    UnloadExtraSoundSet_0205eb80(&gSoundEffectManager_02108760);
    return 1;
}
