#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0202b1f4_23752 = 0x5a68 };
#else
enum { Enum_0202b1f4_23752 = 0x5cc8 };
#endif

#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* GetGlobalFlags_020d6c00(void);
struct GlobalFlags_02012de8;
extern "C" int TestGlobalFlags_02046708(struct GlobalFlags_02012de8* globalFlags, unsigned int mask);
extern "C" int func_0202b284(int arg0, int arg1);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);
extern "C" void func_ov017_021c37a4(void);
struct GameResources;
void SetBrightness(GameResources*, int, int);
struct Struct_02011544;
extern "C" void func_02011544(struct Struct_02011544* arg0);

// USA: func_0202b1f4
extern "C" ARM int func_0202b1f4(int* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = ((int)GetGameResources());
    struct GlobalFlags_02012de8* var2 = (struct GlobalFlags_02012de8*)GetGlobalFlags_020d6c00();
    if (TestGlobalFlags_02046708(var2, 0x1000000)) {
        return 3;
    }
    int var3 = func_0202b284((int)arg0, 1);
    if ((unsigned int)((var3 + 0xfe) & 0xff) > 1) {
        return var3;
    }
    SetGlobalFlags_020466e4((unsigned int*)var2, 0x1000000);
    func_ov017_021c37a4();
    SetBrightness((GameResources*)var1, -16, 10);
    *(unsigned char*)((char*)var0 + Enum_0202b1f4_23752) = 4;
    func_02011544((struct Struct_02011544*)var0);
    *arg0 = 3;
    return 3;
}
