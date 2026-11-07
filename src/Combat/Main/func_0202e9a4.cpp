#include <globaldefs.h>

short fix32sin(int x);
short fix32cos(int x);

struct Struct_0202df68;

// USA: SetCameraFieldOfView_0202e9a4
extern "C" ARM void SetCameraFieldOfView_0202e9a4(struct Struct_0202df68* camera, int halfAngle) {
    *(int*)((char*)camera + 0x58) = halfAngle;
    *(int*)((char*)camera + 0x5c) = fix32sin((int)(((long long)halfAngle * 0x47 + 0x800) >> 12));
    *(int*)((char*)camera + 0x60) = fix32cos((int)(((long long)halfAngle * 0x47 + 0x800) >> 12));
}
