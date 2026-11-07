#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217daa4_144 = 0x8c };
#else
enum { Enum_ov003_0217daa4_144 = 0x90 };
#endif

extern "C" int GetMessageWindow_020421a0(void);
extern "C" void DrawMessageGlyphs_0204359c(void* window, int glyphCount);
extern "C" void func_020439b0(void* arg0, int arg1);
struct TextWindowManager_0205d2bc;
extern "C" void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(struct TextWindowManager_0205d2bc* windowManager);

// USA: func_ov003_0217daa4
extern "C" ARM void func_ov003_0217daa4(char* arg0) {
    int var0 = GetMessageWindow_020421a0();
    DrawMessageGlyphs_0204359c((void*)var0, 2);
    func_020439b0((void*)var0, 0);
    struct TextWindowManager_0205d2bc* var1 = *(struct TextWindowManager_0205d2bc**)(arg0 + Enum_ov003_0217daa4_144);
    if (var1 == 0) return;
    if (*(signed char*)(arg0 + 4) == 2 || *(signed char*)(arg0 + 5) == 0) {
        CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(var1);
    }
}
