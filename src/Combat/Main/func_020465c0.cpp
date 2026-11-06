#include <globaldefs.h>

struct MessageWindow_020465c0 {
#if defined(jpn)
    char unknown1_0_[0x780];
#else
    char unknown_0_[0x8b0];
#endif
    int numbers_8b0_[0x10];
};

// USA: SetMessageNumber_020465c0
extern "C" ARM void SetMessageNumber_020465c0(struct MessageWindow_020465c0* window, int index, int number) {
    if (index < 0) {
        return;
    }
    if (index < 0x10) {
        window->numbers_8b0_[index] = number;
    }
}
