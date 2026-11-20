#include <globaldefs.h>

extern "C" int QueueSoundCommand_020d217c(int, int, int, int, int);

// USA: func_020d1e30
extern "C" ARM int func_020d1e30(int arg0) {
    return QueueSoundCommand_020d217c(3, arg0, 0, 0, 0);
}
