#include <globaldefs.h>
#include "std_library_functions.h"

// USA: ClearNPCCompanionTable_020d3c08
extern "C" ARM void ClearNPCCompanionTable_020d3c08(char* companionTable) {
#if defined(jpn)
    memset(companionTable, 0, 0xa0);
#else
    memset(companionTable, 0, 0xb4);
#endif
#if defined(jpn)
    *(int*)(companionTable + 0xa0) = 0;
#else
    *(int*)(companionTable + 0xb4) = 0;
#endif
}
