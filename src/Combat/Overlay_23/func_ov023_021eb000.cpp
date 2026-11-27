#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov023_021fddb8 { int unknown_0_; int unknown_4_; };
extern struct Struct_ov023_021fddb8 data_ov023_021fddb8[];
extern int data_ov023_021ffa4c[];
extern "C" void SetScriptNatives_ov017_021d4cc0(void* scriptVM, void* natives, int nativeCount);

// USA: func_ov023_021eb000
extern "C" ARM void func_ov023_021eb000(void* arg0) {
    memset(data_ov023_021ffa4c, 0, 0x4b0);
    struct Struct_ov023_021fddb8* var0;
    for (var0 = data_ov023_021fddb8; var0 != 0; var0++) {
        if (var0->unknown_0_ == 0) break;
        if (var0->unknown_4_ >= 0 && var0->unknown_4_ < 0x12c) {
            if (data_ov023_021ffa4c[var0->unknown_4_] != 0) {
                for (;;) {}
            }
            data_ov023_021ffa4c[var0->unknown_4_] = var0->unknown_0_;
        }
    }
    SetScriptNatives_ov017_021d4cc0(arg0, data_ov023_021ffa4c, 0x12c);
}
