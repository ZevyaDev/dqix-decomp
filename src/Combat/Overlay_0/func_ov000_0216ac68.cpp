#include <globaldefs.h>

extern "C" void AppendNewBACTCommand_ov000_02169bb4(int opcode);

// USA: func_ov000_0216ac68
extern "C" ARM int func_ov000_0216ac68(void) {
    AppendNewBACTCommand_ov000_02169bb4(0x1f);
    return 1;
}
