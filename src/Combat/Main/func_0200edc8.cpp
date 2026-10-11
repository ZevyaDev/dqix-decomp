#include <globaldefs.h>

// USA: func_0200edc8
extern "C" ARM void func_0200edc8(void) {
    void (**p)(void) = (void (**)(void))0x020eeb18;
    while (p != 0 && *p != 0) {
        (*p)();
        p++;
    }
}