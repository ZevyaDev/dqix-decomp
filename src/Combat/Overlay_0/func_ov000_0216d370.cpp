#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Matrix.h"

struct Struct_0202ecfc;
extern "C" void func_0202ecfc(struct Struct_0202ecfc* arg0);
extern "C" void func_0202e874(unsigned char* arg0, unsigned short arg1);
struct Struct_0202df68;
extern "C" void SetCameraFieldOfView_0202e9a4(struct Struct_0202df68* camera, int halfAngle);
extern "C" void func_0202e948(unsigned char* arg0);
struct Struct_0202e95c_2;
extern "C" void func_0202e98c(struct Struct_0202e95c_2* arg0);
extern "C" void* func_0202ee84(char* arg0);
extern "C" void* func_0202ee94(void* arg0);
extern "C" void* func_0202eea4(void* arg0);

// USA: ResetBattleCamera_ov000_0216d370
extern "C" ARM void ResetBattleCamera_ov000_0216d370(char* camera, int resetRoll, int resetFieldOfView, int resetTurns) {
    *(unsigned char*)(camera + 0x220) = 0;
    if (*(int*)(camera + 0x224) >= 0) {
        Vector3i transformedTarget = *(Vector3i*)(camera + 0x12c);
        Vector3i transformedEye = *(Vector3i*)(camera + 0x120);
        *(Vector3i*)(camera + 0x10) = transformedTarget;
        *(Vector3i*)(camera + 0x4) = transformedEye;
    }

    *(int*)(camera + 0x224) = -1;
    *(int*)(camera + 0x238) = 0;
    *(int*)(camera + 0x23c) = 0;
    func_0202ecfc((struct Struct_0202ecfc*)camera);
    *(unsigned char*)(camera + 0x260) = 0;

    if (resetRoll) {
        func_0202e874((unsigned char*)camera, 0);
    }

    if (resetFieldOfView) {
        SetCameraFieldOfView_0202e9a4((struct Struct_0202df68*)camera, 0xf000);
    }

    if (resetTurns) {
        func_0202e948((unsigned char*)camera);
        func_0202e98c((struct Struct_0202e95c_2*)camera);
    }

    memset(camera + 0x264, 0, 0x14);
    func_0202ee84(camera);
    func_0202ee94(camera);
    func_0202eea4(camera);
}
