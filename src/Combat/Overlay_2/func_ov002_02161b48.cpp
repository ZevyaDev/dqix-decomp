#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int HitTestCursorWindowTouch_0205d97c(void* windowManager);

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

// USA: IsCancelPressed_ov002_02161b48
extern "C" ARM int IsCancelPressed_ov002_02161b48(char* menu, int isTouchCancelAllowed) {
    if (g_keyManager.TestKeysPressed(2)) {
        return 1;
    }
    if (isTouchCancelAllowed) {
        if (HitTestCursorWindowTouch_0205d97c(menu + RG(0xec8, 0xe20)) == 2) {
            return 1;
        }
    }
    return 0;
}
