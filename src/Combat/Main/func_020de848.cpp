#include <globaldefs.h>
#include "std_library_functions.h"

// USA: ClearItemTable_020de848
extern "C" ARM void ClearItemTable_020de848(void* itemTable) {
    memset(itemTable, 0, 0x14);
    *((unsigned char*)itemTable + 0x14) = 0;
}
