#include <globaldefs.h>
#include "Input/Input.h"
#if defined(jpn)
enum { Enum_ov003_0216950c_228 = 0xe0 };
#else
enum { Enum_ov003_0216950c_228 = 0xe4 };
#endif

struct TextWindowManager_0205da38;
extern "C" int IsEntryTouchedAgain_0205da38(struct TextWindowManager_0205da38* windowManager, int arg1);

// USA: func_ov003_0216950c
extern "C" ARM int func_ov003_0216950c(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = IsEntryTouchedAgain_0205da38((struct TextWindowManager_0205da38*)(var0 + Enum_ov003_0216950c_228), 0x14);
    int var2 = g_keyManager.TestKeysPressed(0x1);
    int var3 = g_keyManager.TestKeysPressed(0x400);
    if ((var2 | var3 | var1) != 0) {
        return 1;
    }
    return 0;
}
