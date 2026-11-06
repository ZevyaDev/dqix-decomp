#include <globaldefs.h>

struct Struct_ov000_02184220_2 {
    int unknown_0_;
    void* pBattleScene_4_;
};
extern struct Struct_ov000_02184220_2 data_ov000_02184220;

// USA: GetBattleScene_ov000_02160130
extern "C" ARM void* GetBattleScene_ov000_02160130(void) {
    return data_ov000_02184220.pBattleScene_4_;
}
