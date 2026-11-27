#include <globaldefs.h>
#include "Input/Input.h"


struct TextWindowManager_0205da38;
extern "C" int IsEntryTouchedAgain_0205da38(struct TextWindowManager_0205da38* windowManager, int arg1);

// USA: IsProfileMenuConfirmPressed_ov023_021e6de4
extern "C" ARM int IsProfileMenuConfirmPressed_ov023_021e6de4(char* menu) {
    int isConfirmKeyPressed = g_keyManager.TestKeysPressed(0x601);
    int isEntryTouchedAgain = IsEntryTouchedAgain_0205da38((struct TextWindowManager_0205da38*)(menu +
#if defined(jpn)
        0x90
#else
        0xac
#endif
        ), 0x14);
    return (isConfirmKeyPressed | isEntryTouchedAgain) != 0;
}
