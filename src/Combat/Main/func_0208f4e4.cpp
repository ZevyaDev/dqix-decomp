#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0208f4e4_108 = 0x4c };
#else
enum { Enum_0208f4e4_108 = 0x6c };
#endif

#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Resource/GameResources.h"

struct QueueNode_02015438;
extern "C" int GetQueueHeadType_02046b24(struct QueueNode_02015438** queue);

extern "C" void* GetZone3D_02012fe4(void);
extern "C" void func_0208f68c(void* arg0);

// USA: func_0208f4e4
extern "C" ARM void func_0208f4e4(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1;
    void* var2;
    GameResources* var3 = GetGameResources();
    var2 = var3->unknown_ptr_array_36fc[0];
    var1 = GetZone3D_02012fe4();
    if (arg0[0xb5]) {
        func_0208f68c(arg0);
    }
    if (GetQueueHeadType_02046b24((struct QueueNode_02015438**)var2) == 10) return;
    GrottoStruct* var4 = var0->GetGrottoStruct();
    TreasureMapMetadata* var5 = (TreasureMapMetadata*)((char*)var4 + Enum_0208f4e4_108);
    unsigned short var6 = *(unsigned short*)var1;
    unsigned char var7 = var5->GetDiscoveryState();
    if (var6 == *(int*)((char*)var0->GetGrottoStruct() + 0xc)) {
        ((Object3D*)(arg0 + 8))->AdvanceEffects();
    }
    if (var4->unknown_0[0] != 0) {
        switch (var7) {
            case 2:
            case 3:
                return;
        }
    }
    ((Object3D*)(arg0 + 8))->MakeHidden();
}
