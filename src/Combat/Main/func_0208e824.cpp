#include <globaldefs.h>
#include "std_library_functions.h"

extern char data_020f12b8;
extern "C" int CompareBytes_02001aec(const char*, const void*, int);

// USA: func_0208e824
extern "C" ARM int func_0208e824(void* arg0, char* arg1) {
    if (arg1[0] == 'F') {
        if (strlen(arg1) <= 3) return 1;
    }
    if (CompareBytes_02001aec(arg1, &data_020f12b8, 6) == 0) return 1;
    return 0;
}
