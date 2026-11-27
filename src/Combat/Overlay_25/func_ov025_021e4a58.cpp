#include <globaldefs.h>

extern "C" void FormatEffectFileName_ov025_021e278c(int effectId, char* outPath);
extern "C" void LoadBACTEffectResource_ov025_021e27c8(char* path, signed char effectId);

struct Struct_ov025_021e4a58 {
    unsigned char unknown_0_[8];
    signed char unknown_8_;
    unsigned char unknown_9_[3];
    int unknown_c_;
};

// USA: RunBACTLoadEffectFileResourceCommand_ov025_021e4a58
extern "C" ARM int RunBACTLoadEffectFileResourceCommand_ov025_021e4a58(struct Struct_ov025_021e4a58* command) {
    char var0[0x50];
    FormatEffectFileName_ov025_021e278c(command->unknown_c_, var0);
    LoadBACTEffectResource_ov025_021e27c8(var0, command->unknown_8_);
    return 1;
}
