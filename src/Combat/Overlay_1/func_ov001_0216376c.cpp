#include <globaldefs.h>

extern "C" int IsJinglePlaying_0209ca2c(void* manager);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned int);
extern void* gMusicManager_02109bf4;

// USA: func_ov001_0216376c
extern "C" ARM int func_ov001_0216376c(void* arg0) {
    if (IsJinglePlaying_0209ca2c(&gMusicManager_02109bf4)) {
        SetScriptRefInt_ov017_021d6134(arg0, 1);
    } else {
        SetScriptRefInt_ov017_021d6134(arg0, 0);
    }
    return 1;
}
