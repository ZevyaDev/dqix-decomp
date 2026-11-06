#include <globaldefs.h>

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" void func_0205eb54(void* arg0, int arg1, int arg2);
extern char gSoundEffectManager_02108760;

// USA: func_ov001_021637ec
extern "C" ARM int func_ov001_021637ec(void* arg0, int arg1) {
    if (arg1 == 2) {
        int var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
        int var1 = GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 8);
        func_0205eb54(&gSoundEffectManager_02108760, var0, var1);
    } else if (arg1 == 1) {
        int var2 = GetScriptValueAsInt_ov017_021d60f4(arg0);
        func_0205eb54(&gSoundEffectManager_02108760, var2, var2);
    }
    return 1;
}
