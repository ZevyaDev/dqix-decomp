#include <globaldefs.h>

extern "C" void AppendNewBACTCommand_ov000_02169bb4(int opcode);

// USA: func_ov000_0216ac7c
extern "C" ARM int func_ov000_0216ac7c(void) {
    AppendNewBACTCommand_ov000_02169bb4(0x20);
    return 1;
}
