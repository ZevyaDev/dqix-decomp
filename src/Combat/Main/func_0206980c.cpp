#include <globaldefs.h>
#include "std_library_functions.h"

// USA: ApplyAddTag_0206980c
extern "C" ARM int ApplyAddTag_0206980c(void** arg0) {
    void* var0 = *arg0;
    unsigned short var1 = 0xff0a;
    memcpy(var0, &var1, 2);
    return 2;
}
