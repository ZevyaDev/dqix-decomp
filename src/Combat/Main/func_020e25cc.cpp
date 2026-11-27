#include <globaldefs.h>

// USA: ResetYesNoWindowCursor_020e25cc
extern "C" ARM void ResetYesNoWindowCursor_020e25cc(signed char* yesNoWindow) {
    yesNoWindow[0x14] = yesNoWindow[0x16];
    yesNoWindow[0x15] = -1;
    yesNoWindow[0x17] = 0;
}
