#include <globaldefs.h>

struct Struct_02033f44 {
    char unknown_0_[0xe0];
    unsigned char unknown_e0_0_ : 6;
    unsigned char unknown_e0_6_ : 1;
    unsigned char unknown_e0_7_ : 1;
    char unknown_e1_[3];
    int unknown_e4_;
};

// USA: GetCollidedWallTriangle_02033f44
extern "C" ARM int* GetCollidedWallTriangle_02033f44(struct Struct_02033f44* object) {
    return object->unknown_e0_6_ ? &object->unknown_e4_ : 0;
}
