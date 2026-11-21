#include <globaldefs.h>
#include "Input/Input.h"

// USA: GetYesNoWindowChoice_020e2918
extern "C" ARM int GetYesNoWindowChoice_020e2918(signed char* yesNoWindow) {
    if (g_touchInput.pressed_ != 0
        || g_keyManager.TestKeysPressed(0x1)
        || g_keyManager.TestKeysPressed(0x400)
        || g_keyManager.TestKeysPressed(0x200))
    {
        return yesNoWindow[0x15];
    }
    return -1;
}
