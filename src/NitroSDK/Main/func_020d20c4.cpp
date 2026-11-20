#include <globaldefs.h>

extern "C" int QueueSoundCommand_020d217c(int commandId, int param0, int param1, int param2, int param3);

// USA: func_020d20c4
extern "C" ARM void func_020d20c4(int arg0, int arg1) {
    QueueSoundCommand_020d217c(0x20, arg0, arg1, 0, 0);
}
