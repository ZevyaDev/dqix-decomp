#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD 0x20
#else
#define REGION_FIELD 0x24
#endif

// USA: GetMenuObjectSpriteSet_ov023_021fad18
extern "C" ARM void* GetMenuObjectSpriteSet_ov023_021fad18(void* object) {
    return (char*)object + REGION_FIELD;
}
