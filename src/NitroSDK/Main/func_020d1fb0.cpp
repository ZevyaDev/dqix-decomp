#include <globaldefs.h>

extern "C" int QueueSoundCommand_020d217c(int, int, int, int, int);

// USA: func_020d1fb0
extern "C" ARM int func_020d1fb0(int arg0, int arg1) {
    return QueueSoundCommand_020d217c(0x1a, arg0, arg1, 0, 0);
}
