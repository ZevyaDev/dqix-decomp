#include <globaldefs.h>
#include "std_library_functions.h"

// USA: ResetSelectionScript_0209fe9c
extern "C" ARM void ResetSelectionScript_0209fe9c(char* script) {
    *(int*)(script + 0) = 0;
    *(int*)(script + 4) = 0;
    *(int*)(script + 8) = 0;
    *(int*)(script + 0x60) = -1;
    *(int*)(script + 0x64) = -1;
    *(short*)(script + 0x68) = 0;
    memset(script + 0xc, 0, 0x54);
    memset(script + 0x6a, 0, 0x64);
}
