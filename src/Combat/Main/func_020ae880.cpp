#include <globaldefs.h>

extern "C" bool func_020ae4c8();
extern "C" void* GetZone3D_02012fe4(void);
extern "C" void func_020ae4ec(int arg0, int arg1);

struct Struct_02017a94;
struct BMDJEntry_0201b600 { unsigned short id_0_; unsigned short unknown_2_; };
extern "C" struct BMDJEntry_0201b600* FindFirstBMDJEntry_0201b600(Struct_02017a94*, int, unsigned short);

// USA: func_020ae880
extern "C" ARM void func_020ae880(int arg0) {
    struct Struct_02017a94* var0 = (struct Struct_02017a94*)GetZone3D_02012fe4();
    if (*(unsigned short*)var0 != 0x232f) return;

    struct BMDJEntry_0201b600* var1 = FindFirstBMDJEntry_0201b600(var0, 0, 5);
    struct BMDJEntry_0201b600* var2 = FindFirstBMDJEntry_0201b600(var0, 0, 3);
    struct BMDJEntry_0201b600* var3 = FindFirstBMDJEntry_0201b600(var0, 0, 0xf);
    struct BMDJEntry_0201b600* var4 = FindFirstBMDJEntry_0201b600(var0, 0, 0x11);
    if (var1 == 0 || var2 == 0 || var3 == 0 || var4 == 0) return;

    if (!func_020ae4c8()) {
        if (arg0 == 0) {
            var2->unknown_2_ &= ~0x4;
            var4->unknown_2_ &= ~0x4;
            var3->unknown_2_ |= 0x4;
            var1->unknown_2_ |= 0x4;
        } else {
            var2->unknown_2_ |= 0x4;
            var4->unknown_2_ |= 0x4;
            var3->unknown_2_ &= ~0x4;
            var1->unknown_2_ &= ~0x4;
        }
    }
    func_020ae4ec(0xc, arg0 != 0 ? 1 : 0);
}
