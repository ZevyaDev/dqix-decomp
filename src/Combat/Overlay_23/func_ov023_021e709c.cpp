#include <globaldefs.h>

extern int data_ov023_021fdd6c;
extern "C" int _s32_div_f(int a, int b);
extern "C" void FillTextWindowRect_0204f914(void* textWindow, int colorIndex, int left, int top, int right, int bottom);
extern "C" void* GetFontGlyph_020425b4(int glyphIndex, int font);
struct FontGlyph_0204254c;
extern "C" FontGlyph_0204254c* FindFontGlyph_0204254c(int text, int font);
extern "C" void func_0204f41c(void* arg0, short arg1, short arg2, int arg3, int arg4, int arg5, void* arg6, void* arg7, int arg8);

// USA: func_ov023_021e709c
extern "C" ARM void func_ov023_021e709c(void* arg0, unsigned char* arg1, int arg2) {
    if (arg2 < 0 || arg2 >= 0x39) {
        return;
    }
    unsigned char var0 = arg1[arg2];
    int var1 = arg2 % 0x13;
    int var2 = var1 * 0xc + 0xf;
    int var3 = arg2 / 0x13;
    int var4 = var3 * 0x13 + 8;
    FillTextWindowRect_0204f914(arg0, 1, (short)var2, (short)var4, (short)(var2 + 0xc), (short)(var4 + 0xc));
    if (var0 == 0xff) {
        return;
    }
    void* var5 = GetFontGlyph_020425b4(var0, 1);
    if (var0 == 0) {
        var5 = FindFontGlyph_0204254c((int)&data_ov023_021fdd6c, 1);
    }
    short var6;
    short var7;
    func_0204f41c(arg0, (short)var2, (short)var4, *(int*)var5, 0xc, 0xf, &var6, &var7, 1);
}
