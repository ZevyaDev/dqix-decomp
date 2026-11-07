#include <globaldefs.h>

extern "C" void AppendNewBACTCommand_ov000_02169bb4(int opcode);

// USA: func_ov000_0216d010
extern "C" ARM int func_ov000_0216d010(void) {
    AppendNewBACTCommand_ov000_02169bb4(0x88);
    return 1;
}
