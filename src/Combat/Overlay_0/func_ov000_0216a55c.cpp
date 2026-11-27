#include <globaldefs.h>

extern "C" void AppendNewBACTCommand_ov000_02169bb4(int opcode);

// USA: AppendBACTWaitForLoadsCommand_ov000_0216a55c
extern "C" ARM int AppendBACTWaitForLoadsCommand_ov000_0216a55c(void) {
    AppendNewBACTCommand_ov000_02169bb4(0x13);
    return 1;
}
