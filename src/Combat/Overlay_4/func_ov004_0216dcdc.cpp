#include <globaldefs.h>

extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_0216dcdc
extern "C" ARM int func_ov004_0216dcdc(void* arg0) {
    QueueMenuScriptEntry_ov011_021848a0(arg0, 0xca);
    return 0;
}
