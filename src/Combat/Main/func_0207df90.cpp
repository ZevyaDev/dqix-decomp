#include <globaldefs.h>

extern "C" void func_020bb740(int* arg0);
extern "C" void func_020bb92c(int* arg0);

// USA: RestoreTextureVRAMState_0207df90
extern "C" ARM void RestoreTextureVRAMState_0207df90(char* area) {
    func_020bb740((int*)(area + 0x28));
    func_020bb92c((int*)(area + 0x60));
}
