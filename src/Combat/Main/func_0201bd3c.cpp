#include <globaldefs.h>

struct Struct_02017a94;
struct Struct_0201b600;
struct BMDJEntry_02013380 { unsigned short unknown_0_; unsigned short flags_2_; };

extern "C" Struct_0201b600* func_0201b600(Struct_02017a94*, int, unsigned short);
extern "C" void SetBMDJEntryVisible_02013380(BMDJEntry_02013380* entry, int bmdjId, int isVisible);

// USA: func_0201bd3c
extern "C" ARM void func_0201bd3c(Struct_02017a94* arg0, unsigned int arg1, int arg2) {
    Struct_0201b600* var0 = func_0201b600(arg0, arg2, arg1);
    int var1 = 0;
    if (arg2 >= 0) var1 = arg2 & 0xff;
    if (var0 == 0) return;
    SetBMDJEntryVisible_02013380((BMDJEntry_02013380*)var0, var1, 0);
}
