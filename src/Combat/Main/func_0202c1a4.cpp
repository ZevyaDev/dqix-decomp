#include <globaldefs.h>

struct LocalWireless_0202c1a4 {
    char unknown_0_[0x1038];
    signed char protagonistObjectIndexByConsole_1038_[16];
};

extern "C" unsigned short func_0202df58(void);

// USA: GetOwnProtagonistObjectIndex_0202c1a4
extern "C" ARM signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless) {
    return wireless->protagonistObjectIndexByConsole_1038_[func_0202df58()];
}
