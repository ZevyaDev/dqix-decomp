#include <globaldefs.h>

extern "C" unsigned short GetScriptValueAsInt_ov017_021d60f4(int value);
extern "C" int PlayStream_0203ad14(void* manager, int streamIndex, void* handle, int startPosition);
extern void* gMusicManager_02109bf4;

// USA: func_ov001_02163518
extern "C" ARM int func_ov001_02163518(int arg0) {
    unsigned short var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    PlayStream_0203ad14(&gMusicManager_02109bf4, var0, NULL, 0);
    return 1;
}
