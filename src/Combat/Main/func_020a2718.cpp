#include <globaldefs.h>

extern "C" void func_020a0d58(void* arg0);
extern "C" void SetCameraOrbitFromArray_0202e694(void* camera, int* orbit);

// USA: ResetFollowCameraAngle_020a2718
extern "C" ARM void ResetFollowCameraAngle_020a2718(char* camera) {
    func_020a0d58(camera + 0x248);
    *(int*)(camera + 0x220) = *(short*)(camera + 0x246);
    SetCameraOrbitFromArray_0202e694(camera, (int*)(camera + 0x220));
}
