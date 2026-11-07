#include <globaldefs.h>

extern "C" void AppendNewBACTCommand_ov000_02169bb4(int opcode);

// USA: func_ov000_0216c500
extern "C" ARM int func_ov000_0216c500(void) {
    AppendNewBACTCommand_ov000_02169bb4(0x67);
    return 1;
}
