#include <globaldefs.h>

extern "C" int QueueSoundCommand_020d217c(int, int, int, int, int);

// USA: func_020d1ebc
extern "C" ARM int func_020d1ebc(int arg0, int arg1, int arg2) {
    return QueueSoundCommand_020d217c(0x9, arg0, arg1, arg2, 0);
}
