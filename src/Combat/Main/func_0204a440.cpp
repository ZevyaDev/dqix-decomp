#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_0204a4ac(void*);

// USA: SetBoneCameraEyeBone_0204a440
extern "C" ARM void SetBoneCameraEyeBone_0204a440(char* camera, const char* boneName) {
    strcpy(camera + 0x224, boneName);
    *(int*)(camera + 0x254) = -1;
    func_0204a4ac(camera);
}
