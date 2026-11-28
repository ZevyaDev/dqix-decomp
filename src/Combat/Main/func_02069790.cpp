#include <globaldefs.h>
#include "std_library_functions.h"

// USA: ApplyPageTag_02069790
extern "C" ARM int ApplyPageTag_02069790(void** arg0) {
    void* var0 = *arg0;
    unsigned short var1 = 0xff0d;
    memcpy(var0, &var1, 2);
    return 2;
}
