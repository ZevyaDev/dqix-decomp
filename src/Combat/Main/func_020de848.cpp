#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_020de848 func_020e01c4
#endif

// USA: func_020de848
extern "C" ARM void func_020de848(void* itemTable) {
    memset(itemTable, 0, 0x14);
    *((unsigned char*)itemTable + 0x14) = 0;
}
