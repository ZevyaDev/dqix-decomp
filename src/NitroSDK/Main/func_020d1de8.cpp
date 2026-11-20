#include <globaldefs.h>

extern "C" int QueueSoundCommand_020d217c(int commandId, int param0, int param1, int param2, int param3);

// USA: func_020d1de8
extern "C" ARM int func_020d1de8(int arg0) {
    return QueueSoundCommand_020d217c(1, arg0, 0, 0, 0);
}
