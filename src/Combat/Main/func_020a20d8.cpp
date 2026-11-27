#include <globaldefs.h>

extern "C" void func_020a2d14(void* arg0);
extern "C" void func_020a20f0(void* arg0);

// USA: UpdateFollowCamera_020a20d8
extern "C" ARM void UpdateFollowCamera_020a20d8(void* camera) {
    func_020a2d14(camera);
    func_020a20f0(camera);
}
