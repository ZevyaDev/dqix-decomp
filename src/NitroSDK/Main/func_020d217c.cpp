#include <globaldefs.h>

extern "C" void* func_020d2404(int);
struct Struct_020d217c_2;
extern "C" int func_020d248c(Struct_020d217c_2*);

struct SoundCommand_020d217c {
    int unknown_0_;
    int commandId_4_;
    int arg1;
    int arg2;
    int arg3;
    int arg4;
};

// USA: QueueSoundCommand_020d217c
// Kept as extern "C" QueueSoundCommand_020d217c: 18 decompiled EnqueueEvent/PostEvent/SubmitCommand
// wrappers reference this symbol directly, so the raw name must be preserved.
extern "C" ARM int QueueSoundCommand_020d217c(int commandId, int param0, int param1, int param2, int param3) {
    struct SoundCommand_020d217c* command = (struct SoundCommand_020d217c*)func_020d2404(1);
    if (command == NULL) return (int)command;
    command->commandId_4_ = commandId;
    command->arg1 = param0;
    command->arg2 = param1;
    command->arg3 = param2;
    command->arg4 = param3;
    return func_020d248c((Struct_020d217c_2*)command);
}
