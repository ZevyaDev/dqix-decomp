#include <globaldefs.h>

extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

// USA: func_ov004_0216dca0
extern "C" ARM int func_ov004_0216dca0(void* arg0) {
    QueueMenuScriptEntry_ov011_021848a0(arg0, 0xc8);
    return 0;
}
