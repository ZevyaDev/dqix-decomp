#include <globaldefs.h>
#include "std_library_functions.h"

// USA: GetNextActionResult_ov000_0215e958
extern "C" ARM void* GetNextActionResult_ov000_0215e958(char* battle) {
    int resultCount = *(unsigned char*)(battle + 0x8e02);
    if (resultCount >= 0x168) {
        return 0;
    }
    char* result = battle + 0x21e0 + resultCount * 0x24;
    memset(result, 0, 0x20);
    *(int*)(result + 0x20) = 0;
    return battle + 0x21e0 + *(unsigned char*)(battle + 0x8e02) * 0x24;
}
