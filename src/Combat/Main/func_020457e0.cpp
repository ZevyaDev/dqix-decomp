#include <globaldefs.h>

// USA: GetMessageChoice_020457e0
extern "C" ARM int GetMessageChoice_020457e0(char* window) {
#if defined(jpn)
    return *(int*)(window + 0x824);
#else
    return *(int*)(window + 0x954);
#endif
}
