#include <globaldefs.h>
#include "Input/Input.h"

// USA: IsYesNoWindowCancelPressed_020e2984
extern "C" ARM int IsYesNoWindowCancelPressed_020e2984(struct YesNoWindow_020e28dc* yesNoWindow) {
    return g_keyManager.TestKeysPressed(2) != 0;
}
