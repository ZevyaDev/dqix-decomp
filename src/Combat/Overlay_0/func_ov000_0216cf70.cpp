#include <globaldefs.h>

extern "C" void AppendNewBACTCommand_ov000_02169bb4(int opcode);

// USA: func_ov000_0216cf70
extern "C" ARM int func_ov000_0216cf70(void) {
    AppendNewBACTCommand_ov000_02169bb4(0x83);
    return 1;
}
