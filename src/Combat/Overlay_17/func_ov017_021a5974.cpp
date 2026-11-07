#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Queue_02038598_5;
extern "C" int IsTypeInQueue_02046b60(struct Queue_02038598_5* queue, int type);
extern "C" void func_ov002_021556fc(int arg0);
extern "C" void PopOverlay_020a1e54(int isPreviousReloaded);
extern "C" void PopSubOverlay_020a1f4c(int isPreviousReloaded);
extern "C" void func_ov017_021a55b0(void* arg0);

extern int data_ov017_021d83ac;

// USA: func_ov017_021a5974
extern "C" ARM void func_ov017_021a5974(char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021a5974_14076=0x34ec};
#else
 enum {Enum_ov017_021a5974_14076=0x36fc};
#endif
    int var0 = data_ov017_021d83ac;
    if (var0 != 0) {
        func_ov002_021556fc(var0);
        data_ov017_021d83ac = 0;
    }
    int var1 = (int)GetGameResources();
    struct Queue_02038598_5* var2 = *(struct Queue_02038598_5**)(var1 + Enum_ov017_021a5974_14076);
    if (var2 != NULL
        && (IsTypeInQueue_02046b60(var2, 0x2) || IsTypeInQueue_02046b60(var2, 0x2f) || IsTypeInQueue_02046b60(var2, 0x2d)))
    {
        PopOverlay_020a1e54(0);
        PopSubOverlay_020a1f4c(0);
    } else {
        PopOverlay_020a1e54(1);
        PopSubOverlay_020a1f4c(1);
    }
    func_ov017_021a55b0(arg0);
    arg0[0x1] = 1;
}
