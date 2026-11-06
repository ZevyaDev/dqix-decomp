#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021694b8_228 = 0xe0 };
enum { Enum_ov003_021694b8_232 = 0xe4 };
enum { Enum_ov003_021694b8_1258 = 0x4e6 };
#else
enum { Enum_ov003_021694b8_228 = 0xe4 };
enum { Enum_ov003_021694b8_232 = 0xe8 };
enum { Enum_ov003_021694b8_1258 = 0x4ea };
#endif

struct TextWindowManager_0205d81c {
    char unknown_0_[0x98];
    int unknown_98_;
    void* pTextWindows_9c_;
    char unknown_a0_[0x14];
    unsigned char unknown_b4_;
};

extern "C" struct TextWindowManager_0205d81c* GetCursorTextWindow_0205d8c4(struct TextWindowManager_0205d81c*);
extern "C" int IsTextWindowReady_0204c7cc(unsigned char* textWindow);
extern "C" void func_0205bc24(void* arg0, int arg1);
extern "C" int UpdateTextWindowManager_0205d0e0(void*, int);

// USA: func_ov003_021694b8
extern "C" ARM void func_ov003_021694b8(void* arg0, int arg1) {
    struct TextWindowManager_0205d81c* var0 = GetCursorTextWindow_0205d8c4((struct TextWindowManager_0205d81c*)((char*)arg0 + Enum_ov003_021694b8_228));
    if (var0 != 0) {
        if (IsTextWindowReady_0204c7cc((unsigned char*)var0)) {
            if (!(((unsigned char*)var0)[0xc5] & 0x2)) {
                func_0205bc24((char*)arg0 + Enum_ov003_021694b8_232, -1);
            }
        }
    }
    *((unsigned char*)arg0 + Enum_ov003_021694b8_1258) = (unsigned char)UpdateTextWindowManager_0205d0e0((char*)arg0 + Enum_ov003_021694b8_228, arg1);
}
