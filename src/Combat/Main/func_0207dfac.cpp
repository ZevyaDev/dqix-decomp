#include <globaldefs.h>

extern "C" void func_020bb700(int* arg0);
extern "C" void func_020bb910(int* arg0);

// USA: SaveTextureVRAMState_0207dfac
extern "C" ARM void SaveTextureVRAMState_0207dfac(char* area) {
    func_020bb700((int*)(area + 0x28));
    func_020bb910((int*)(area + 0x60));
}
