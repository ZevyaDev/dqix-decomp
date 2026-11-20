#include <globaldefs.h>

extern "C" int QueueSoundCommand_020d217c(int, int, int, int, int);

// USA: func_020d20e4
extern "C" ARM int func_020d20e4(int arg0) {
    return QueueSoundCommand_020d217c(0x17, arg0, 0, 0, 0);
}
