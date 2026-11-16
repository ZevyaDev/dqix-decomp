#include <globaldefs.h>
#include "NitroSDK/Graphics3D/Graphics3D.h"

#if defined(jpn)
#define func_0202ec84 func_0202e7f4
#endif

struct Vector3i;

struct Struct_02015ef4 {
    unsigned int unknown_0_[3];
};

// USA: func_0202ec84
extern "C" ARM int func_0202ec84(void* camera, struct Struct_02015ef4* worldPosition, int* outX, int* outY) {
    struct Struct_02015ef4 position = *worldPosition;
    int x, y;
    int result = Nitro3D_WorldToScreen((Vector3i const*)&position, &x, &y);
    *outX = x;
    *outY = y;
    return result;
}
