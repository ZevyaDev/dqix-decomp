#include <globaldefs.h>
#include "Resource/MessageUpdate.h"
#include "std_library_functions.h"

#if defined(jpn)
extern "C" ARM int func_02069430(void* arg0, unsigned short arg1) {
    return (arg1 & 0xff00) == 0xff00;
}
#else
// USA: IsControlCode_02044494
extern "C" ARM bool IsControlCode_02044494(void* window, void* text) {
    unsigned short code;
    memcpy(&code, text, 2);
    return (code & 0xff00) == 0xff00;
}

#endif
