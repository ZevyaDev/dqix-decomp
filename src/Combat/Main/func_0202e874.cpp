#include <globaldefs.h>

// USA: SetCameraRoll_0202e874
extern "C" ARM void SetCameraRoll_0202e874(unsigned char* camera, unsigned short roll) {
    *(unsigned short*)(camera + 0x7c) = roll;
    *(unsigned short*)(camera + 0x1ec) = 0;
    *(unsigned short*)(camera + 0x1ee) = 0;
}
