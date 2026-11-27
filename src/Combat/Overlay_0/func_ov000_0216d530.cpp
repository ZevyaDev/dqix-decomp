#include <globaldefs.h>

extern "C" void ResetBattleCamera_ov000_0216d370(void*, int, int, int);
extern "C" void func_0202ecec(unsigned char* arg0);

// USA: SetBattleCameraAnchor_ov000_0216d530
extern "C" ARM void SetBattleCameraAnchor_ov000_0216d530(void* camera, int objectIndex) {
    if (objectIndex < 0) {
        ResetBattleCamera_ov000_0216d370(camera, 1, 1, 1);
    } else {
        func_0202ecec((unsigned char*)camera);
    }
    *(int*)((char*)camera + 0x224) = objectIndex;
}
