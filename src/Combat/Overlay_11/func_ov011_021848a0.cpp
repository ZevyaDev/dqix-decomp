#include <globaldefs.h>

// USA: QueueMenuScriptEntry_ov011_021848a0
extern "C" ARM void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId) {
    *(int*)((char*)menu + 0x10c) = entryId;
}
