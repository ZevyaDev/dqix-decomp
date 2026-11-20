#include <globaldefs.h>

extern "C" int QueueSoundCommand_020d217c(int commandId, int param0, int param1, int param2, int param3);

// USA: func_020d1e08
extern "C" ARM int func_020d1e08(int arg0, int arg1, int arg2, int arg3) {
    return QueueSoundCommand_020d217c(2, arg0, arg1, arg2, arg3);
}
