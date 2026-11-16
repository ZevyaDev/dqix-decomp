#include "Combat/Main/ElementLookup.h"
#include <globaldefs.h>

#if defined(jpn)
#define func_02011584 func_020112f4
#endif

// USA: func_02011584
extern "C" ARM void *func_02011584(void *gameState) {
    return (char *) gameState + 0x468;
}
