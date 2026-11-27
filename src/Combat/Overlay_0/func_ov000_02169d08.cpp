#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern "C" void AppendBACTCommand_ov000_02169b78(void* command);

struct BACTParseState_ov000_02184264_2 {
    unsigned char unknown_0_[8];
    SafeAllocator* pAllocator_8_;
};
extern struct BACTParseState_ov000_02184264_2 gBACTParseState_ov000_02184264;

struct Struct_ov000_02169d08 {
    int unknown_0_;
    int unknown_4_;
    char* unknown_8_;
    short unknown_c_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

// USA: AppendBACTSetAnimationCommand_ov000_02169d08
extern "C" ARM int AppendBACTSetAnimationCommand_ov000_02169d08(Script::Parameter* params, int numParams) {
    struct Struct_ov000_02169d08* var0 = (struct Struct_ov000_02169d08*)gBACTParseState_ov000_02184264.pAllocator_8_->Allocate(sizeof(struct Struct_ov000_02169d08));
    var0->unknown_0_ = 3;
    if (params->type == 0) {
        const char* var1 = (params++)->ToString();
        int var2 = 1;
        if (numParams >= 2) {
            var2 = (params++)->ToInt();
        }
        var0->unknown_8_ = (char*)gBACTParseState_ov000_02184264.pAllocator_8_->Allocate(strlen(var1) + 1);
        strcpy(var0->unknown_8_, var1);
        var0->unknown_c_ = var2;
        var0->unknown_e_ = 7;
        int var3 = 0;
        if (numParams >= 3) {
            var3 = params->ToInt();
        }
        var0->unknown_f_ = var3;
    } else if (params->type == 1) {
        var0->unknown_e_ = (params++)->ToInt();
        const char* var4 = (params++)->ToString();
        int var5 = 1;
        if (numParams >= 3) {
            var5 = (params++)->ToInt();
        }
        var0->unknown_8_ = (char*)gBACTParseState_ov000_02184264.pAllocator_8_->Allocate(strlen(var4) + 1);
        strcpy(var0->unknown_8_, var4);
        var0->unknown_c_ = var5;
        int var6 = 0;
        if (numParams >= 4) {
            var6 = params->ToInt();
        }
        var0->unknown_f_ = var6;
    } else {
        return 0;
    }
    AppendBACTCommand_ov000_02169b78(var0);
    return 1;
}
