#include <globaldefs.h>

extern "C" void CloseTextWindow_0204c804(void* textWindow);

// USA: CloseMenuWindow_ov023_021f8120
extern "C" ARM void CloseMenuWindow_ov023_021f8120(void* window) {
    CloseTextWindow_0204c804((char*)window + 0x20);
}
