#include <globaldefs.h>

// USA: GetScriptValueAsString_ov017_021d612c
extern "C" ARM void* GetScriptValueAsString_ov017_021d612c(void* value) {
    return *(void**)((char*)value + 0x4);
}
