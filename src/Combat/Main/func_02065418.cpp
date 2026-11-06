#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02065418_14076 = 0x34ec };
#else
enum { Enum_02065418_14076 = 0x36fc };
#endif

#include "GameState/GameState.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/OverlayId.h"

struct QueueNode_02015438;

extern "C" int func_020a18f4(unsigned int arg0);
extern "C" int GetResources_0200fb8c(int* gameState);
extern "C" int GetQueueHeadType_02046b24(QueueNode_02015438** queue);

static inline int inline_02065418() {
    return (int)((*(volatile unsigned int*)0x4000000 & 0x1f00) >> 8);
}

static inline void inline_02065418_2(int arg0) {
    *(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & ~0x1f00) | (arg0 << 8);
}

// USA: func_02065418
extern "C" ARM void func_02065418(int arg0) {
    if (!func_020a18f4(OVERLAY_ID(17))) {
        return;
    }
    QueueNode_02015438** var0 = *(QueueNode_02015438***)((char*)GetResources_0200fb8c((int*)GameState::GetInstance()) + Enum_02065418_14076);
    if (var0 == NULL) {
        return;
    }
    if (GetQueueHeadType_02046b24(var0) == 0x2d) {
        return;
    }
    if (GetQueueHeadType_02046b24(var0) == 0x2a) {
        return;
    }
    if (arg0 != 0) {
        return;
    }
    inline_02065418_2(inline_02065418() | 0x10);
    ColorEffect_ConfigureAlphaBlend(0x4000050, 2, 1, 10, 6);
}
