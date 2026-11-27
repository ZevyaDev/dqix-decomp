#include <globaldefs.h>
#include "std_library_functions.h"

extern char data_ov025_021ef7ef;
extern "C" void LoadBACTEffectResource_ov025_021e27c8(char* path, signed char effectId);

struct Struct_ov025_021e4168 {
    unsigned char unknown_0_[8];
    signed char unknown_8_;
    unsigned char unknown_9_[3];
    int unknown_c_;
};

// USA: RunBACTLoadEffectResourceCommand_ov025_021e4168
extern "C" ARM int RunBACTLoadEffectResourceCommand_ov025_021e4168(struct Struct_ov025_021e4168* command) {
    char var0[0x50];
    sprintf(var0, &data_ov025_021ef7ef, command->unknown_c_);
    LoadBACTEffectResource_ov025_021e27c8(var0, command->unknown_8_);
    return 1;
}
