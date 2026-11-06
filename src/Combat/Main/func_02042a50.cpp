#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Resource/FontGlyphTable.h"

// USA: func_02042a50
extern "C" ARM char* func_02042a50(int arg0, const char* arg1) {
    if (arg1 == NULL) return NULL;
    char* var0 = func_020429e4(func_020429bc(arg0),
        reinterpret_cast<const unsigned char*>(arg1));
    if (var0 != NULL) return var0;
    return func_020429e4(
        static_cast<Struct_0203bebc*>(func_02094b44(GetFontLoader_02094a00(), arg0)),
        reinterpret_cast<const unsigned char*>(arg1));
}

#if defined(jpn)
// JPN: func_02043110
extern "C" ARM char* func_02043110(int arg0, int arg1) {
    Struct_0203bebc* var0;
    if (arg1 < 0) return NULL;
    if (arg1 & 0x40000000) {
        var0 = static_cast<Struct_0203bebc*>(func_02094b44(GetFontLoader_02094a00(), arg0));
        arg1 &= ~0x40000000;
    } else {
        var0 = func_020429bc(arg0);
    }
    if (var0 == NULL) return NULL;
    if (var0->unknown_6_ <= arg1) return NULL;
    return var0->unknown_c_ + arg1 * var0->unknown_0_;
}
#endif
