#include <globaldefs.h>

struct Struct_020e29a8 {
    char unknown_0_[0x16];
    unsigned char unknown_16_;
};

// USA: SetYesNoWindowDefaultCursor_020e29a8
extern "C" ARM void SetYesNoWindowDefaultCursor_020e29a8(struct Struct_020e29a8* yesNoWindow, int cursorIndex) {
    if (cursorIndex >= 3) {
        cursorIndex = 2;
    }
    yesNoWindow->unknown_16_ = (unsigned char)cursorIndex;
}
