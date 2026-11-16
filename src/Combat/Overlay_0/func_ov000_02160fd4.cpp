#include <globaldefs.h>

#if defined(jpn)
#define func_ov000_02160fd4 func_ov000_02162740
#endif

#if defined(jpn)
enum { Enum_ov000_02160fd4_22004 = 0x57e4 };
#else
enum { Enum_ov000_02160fd4_22004 = 0x55f4 };
#endif

// USA: func_ov000_02160fd4
extern "C" ARM int func_ov000_02160fd4(void* battleScene, int flags) {
    return *(int*)((char*)battleScene + Enum_ov000_02160fd4_22004) & flags;
}
