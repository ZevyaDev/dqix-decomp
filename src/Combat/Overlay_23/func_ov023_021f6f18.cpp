#include <globaldefs.h>

// USA: GetNextMenuObject_ov023_021f6f18
extern "C" ARM int GetNextMenuObject_ov023_021f6f18(void* object) {
    return *(int*)((char*)object + 0x18);
}
