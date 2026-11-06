#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" void SetScriptRefInt_ov017_021d6134(void* value, unsigned int number);

// USA: func_ov001_0215ae84
extern "C" ARM int func_ov001_0215ae84(void* arg0) {
    int var0 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    unsigned short var1 = (unsigned short)var0;
    int var2 = g_keyManager.TestKeysPressed(var1);
    SetScriptRefInt_ov017_021d6134((char*)arg0 + 8, var2);
    return 1;
}
