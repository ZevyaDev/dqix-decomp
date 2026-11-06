#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" void* GetGlobalFlags_020d6c00(void);
struct GlobalFlags_02038598_4 {
    unsigned int bits_0_;
};
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);

struct Struct_020d9e44 {
    char unknown_0_[0xc];
    int unknown_c_[1];
};

// USA: func_020d9fc8
extern "C" ARM void func_020d9fc8(struct Struct_020d9e44* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    int var1;
    for (var1 = 0; var1 < 1; var1++) {
        if (arg0->unknown_c_[var1] != -1) {
            ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_c_[var1]));
            arg0->unknown_c_[var1] = -1;
        }
    }
    EnablePlayerControl_020397c0(GameState::GetInstance()->GetUnknownGameObject());
    ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00(), 0x1e);
    *((unsigned char*)arg0 + 1) = 1;
}
