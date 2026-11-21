#include <globaldefs.h>

struct LocalWireless_0202b2f0 {
    char unknown_0_[0x1038];
    signed char protagonistObjectIndexByConsole_1038_[16];
};

// USA: FindConsoleByProtagonistObjectIndex_0202bcbc
extern "C" ARM signed char FindConsoleByProtagonistObjectIndex_0202bcbc(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex) {
    int console;
    for (console = 0; console < 16; console++) {
        if (wireless->protagonistObjectIndexByConsole_1038_[console] == protagonistObjectIndex) {
            break;
        }
    }
    if (console == 16) {
        return -1;
    }
    return console;
}
