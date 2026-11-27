#include <globaldefs.h>

struct Struct_ov025_021e27c8 {
    char unknown_0_[0x582];
    unsigned char unknown_582_;
    char unknown_583_;
    unsigned short unknown_584_[1];
};

// USA: RemoveBACTLoadTask_ov025_021eb084
extern "C" ARM void RemoveBACTLoadTask_ov025_021eb084(struct Struct_ov025_021e27c8* player, int taskId) {
    if (taskId < 0) {
        return;
    }
    if (player->unknown_582_ == 0) {
        return;
    }
    int var0 = 0;
    int var1 = 0;
    for (int var2 = 0; var2 < player->unknown_582_; var2++) {
        unsigned short var3 = player->unknown_584_[var2];
        if (taskId == var3) {
            var0 = 1;
        } else {
            player->unknown_584_[var1] = var3;
            var1++;
        }
    }
    if (var0) {
        player->unknown_582_ = player->unknown_582_ - 1;
    }
}
