#include <globaldefs.h>

struct Vector3i;
int ConvertWorldToScreenCoordinates(Vector3i const*, int*, int*);

struct Struct_02015ef4 {
    unsigned int unknown_0_[3];
};

// USA: ConvertWorldToScreen_0202ec84
extern "C" ARM int ConvertWorldToScreen_0202ec84(void* camera, struct Struct_02015ef4* worldPosition, int* outX, int* outY) {
    struct Struct_02015ef4 position = *worldPosition;
    int x, y;
    int result = ConvertWorldToScreenCoordinates((Vector3i const*)&position, &x, &y);
    *outX = x;
    *outY = y;
    return result;
}
