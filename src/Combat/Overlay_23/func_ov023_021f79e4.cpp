#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD 0x24
#else
#define REGION_FIELD 0x28
#endif

// USA: GetMenuObjectBGLayer_ov023_021f79e4
extern "C" ARM void* GetMenuObjectBGLayer_ov023_021f79e4(void* object) {
    return (char*)object + REGION_FIELD;
}
