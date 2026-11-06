#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_ov023_021e6de4 func_ov023_021e7148
#endif

struct TextWindowManager_0205da38;
extern "C" int IsEntryTouchedAgain_0205da38(struct TextWindowManager_0205da38* windowManager, int arg1);

// USA: func_ov023_021e6de4
extern "C" ARM int func_ov023_021e6de4(char* arg0) {
    int var0 = g_keyManager.TestKeysPressed(0x601);
    int var1 = IsEntryTouchedAgain_0205da38((struct TextWindowManager_0205da38*)(arg0 +
#if defined(jpn)
        0x90
#else
        0xac
#endif
        ), 0x14);
    return (var0 | var1) != 0;
}
