#include <globaldefs.h>
#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif


#if defined(jpn)
#define func_ov006_02154fe4 func_ov006_02156730
#endif

extern "C" void func_ov023_021dfad8(char* arg0);
struct MenuLayout_0207fd88;
extern "C" void CopyMenuLayoutBGScreenDataToVRAM_0207fd88(MenuLayout_0207fd88* menuLayout);

struct Struct_ov006_02154fe4 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
};

// USA: func_ov006_02154fe4
extern "C" ARM void func_ov006_02154fe4(void* arg0) {
    char* var0 = (char*)arg0;
    if (!*(unsigned char*)(var0 + R(0x95c, 0xadc))) return;
    if (*(unsigned char*)(var0 + 0x1000 + R(0xb9, 0x2bd))) {
        volatile unsigned int* var1 = (volatile unsigned int*)0x4000000;
        unsigned int var2 = (*var1 & 0x1f00) >> 8;
        *var1 = (*var1 & ~0x1f00) | ((var2 | 1) << 8);
        *(unsigned char*)(var0 + 0x1000 + R(0xb9, 0x2bd)) = 0;
    }
    func_ov023_021dfad8(var0 + R(0x164, 0x2e4) + 0x800);
    if (((Struct_ov006_02154fe4*)(var0 + 0x1000 + R(0x7b, 0x27f)))->unknown_0_1_) return;
    MenuLayout_0207fd88* var3 = *(MenuLayout_0207fd88**)(var0 + R(0x54, 0x1d4));
    if (var3 == 0) return;
    CopyMenuLayoutBGScreenDataToVRAM_0207fd88(var3);
}
