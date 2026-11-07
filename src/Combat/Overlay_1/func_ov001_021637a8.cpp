#include <globaldefs.h>

extern "C" short GetScriptValueAsInt_ov017_021d60f4(void* value);
struct Struct_02109bf4_3;
extern "C" void ResetMusic_0209c20c(struct Struct_02109bf4_3* manager);
extern "C" void PlayJingle_0209c6d8(void* manager, int jingleIndex);
extern struct Struct_02109bf4_3 gMusicManager_02109bf4;

// USA: func_ov001_021637a8
extern "C" ARM int func_ov001_021637a8(void* arg0) {
    short var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    ResetMusic_0209c20c(&gMusicManager_02109bf4);
    PlayJingle_0209c6d8(&gMusicManager_02109bf4, var0);
    return 1;
}
