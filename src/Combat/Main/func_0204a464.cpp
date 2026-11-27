#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_0204a4ac(void*);

// USA: SetBoneCameraTargetBone_0204a464
extern "C" ARM void SetBoneCameraTargetBone_0204a464(char* camera, const char* boneName) {
    strcpy(camera + 0x234, boneName);
    *(int*)(camera + 0x258) = -1;
    func_0204a4ac(camera);
}
