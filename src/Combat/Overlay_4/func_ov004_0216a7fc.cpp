#include <globaldefs.h>

extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_0216a7fc
extern "C" ARM int func_ov004_0216a7fc(void* arg0) {
    QueueMenuScriptEntry_ov011_021848a0(arg0, 0x54);
    return 0;
}
