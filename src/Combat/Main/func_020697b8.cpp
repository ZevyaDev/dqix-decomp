#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void ParseTagNumbers_020696bc(int text, int* values, int count);
extern "C" char* GetMessageWindow_020421a0();

struct Struct_020697b8 { void* unknown_0_; };

// USA: ApplyAutoTag_020697b8
extern "C" ARM int ApplyAutoTag_020697b8(Struct_020697b8* arg0, int arg1) {
    int var0;
    unsigned short var1;
    void* var2;
    ParseTagNumbers_020696bc(arg1, &var0, 1);
    GetMessageWindow_020421a0()[0x195e] = var0;
    var2 = arg0->unknown_0_;
    var1 = 0xff0b;
    memcpy(var2, &var1, 2);
    return 2;
}
