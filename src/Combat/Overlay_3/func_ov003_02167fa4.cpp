#include <globaldefs.h>

extern "C" int ShowMenuLayoutText_02080b40(void* menuLayout, int textId);
extern "C" int func_02080b2c(void* arg0, int arg1);
extern "C" void SetMenuLayoutTextStringId_0208103c(void* menuLayout, int textId, int stringId);
extern "C" void func_02080798(void* arg0, int arg1, int arg2);
struct Struct_02080cc0;
extern "C" void func_02080cc0(struct Struct_02080cc0* arg0, int arg1, int arg2);
struct MenuLayout_02080fa8;
extern "C" void SetMenuLayoutTextValue_02080fa8(struct MenuLayout_02080fa8* menuLayout, int textId, int value);
extern "C" ARM int GetVocationSkill_020dd11c(unsigned int vocation, unsigned int index);

// USA: func_ov003_02167fa4
extern "C" ARM void func_ov003_02167fa4(void* arg0, int arg1, unsigned char* arg2) {
    void* var0 = *(void**)((char*)arg0 + 0x10);
    int var1 = 0x1f;
    int var2 = 0x24;
    for (unsigned char var3 = 0; var3 < 5; var3++) {
        if (arg1 == 0) {
            func_02080b2c(var0, var1);
            func_02080b2c(var0, var2);
        } else {
            ShowMenuLayoutText_02080b40(var0, var1);
            ShowMenuLayoutText_02080b40(var0, var2);
            int var4 = GetVocationSkill_020dd11c(arg1, var3);
            short var5 = (short)(var4 + 0x26);
            unsigned char var6 = arg2[var4];
            int var7 = 0xf;
            if (var6 == 0x64) var7 = 0xd;
            func_02080cc0((struct Struct_02080cc0*)var0, var2, var7);
            SetMenuLayoutTextStringId_0208103c(var0, var1, var5);
#if !defined(jpn)
            func_02080798(var0, var1, 1);
#endif
            SetMenuLayoutTextValue_02080fa8((struct MenuLayout_02080fa8*)var0, var2, var6);
        }
        var1 = (short)(var1 + 1);
        var2 = (short)(var2 + 1);
    }
}
