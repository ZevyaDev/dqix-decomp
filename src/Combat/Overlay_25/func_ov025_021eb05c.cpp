#include <globaldefs.h>

struct Struct_ov025_021eb05c {
    char unknown_0_[0x582];
    unsigned char unknown_582_;
    char unknown_583_;
    unsigned short unknown_584_[8];
};

// USA: AddBACTLoadTask_ov025_021eb05c
extern "C" ARM void AddBACTLoadTask_ov025_021eb05c(struct Struct_ov025_021eb05c* player, int taskId) {
    if (taskId < 0) {
        return;
    }
    if (player->unknown_582_ < 8) {
        unsigned char var0 = player->unknown_582_;
        player->unknown_582_ = var0 + 1;
        player->unknown_584_[var0] = taskId;
    }
}
