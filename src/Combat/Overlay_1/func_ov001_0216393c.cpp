#include <globaldefs.h>

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);

struct MusicManager_02109bf4_4;
extern "C" void StopMusic_0209c678(struct MusicManager_02109bf4_4* manager, int fadeDuration);

extern int gMusicManager_02109bf4;

// USA: func_ov001_0216393c
extern "C" ARM int func_ov001_0216393c(void* arg0, int arg1) {
    int var0 = 0x1e;
    if (arg1 > 0) var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    StopMusic_0209c678((struct MusicManager_02109bf4_4*)&gMusicManager_02109bf4, var0);
    return 1;
}
