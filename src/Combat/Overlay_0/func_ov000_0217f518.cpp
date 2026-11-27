#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/StringList.h"

extern "C" void func_0203c198(char* arg0);
extern "C" int IsPanelMemberIncapacitated_ov000_021719f8(int* panel);
extern "C" void __clear(void* arg0, int arg1);
#if defined(jpn)
extern "C" int func_ov000_02171a74(void* arg0);
struct Struct_0201099c_3;
#else
extern "C" int func_ov000_02171a74(void* arg0, char* arg1);
#endif
struct Struct_0203c108_3;
extern "C" void SetSpriteText_0203c108(struct Struct_0203c108_3* spriteText, char* text);
extern "C" void func_ov000_02170ffc(void* arg0);

// USA: ClearPanelCommand_ov000_0217f518
extern "C" ARM void ClearPanelCommand_ov000_0217f518(char* panel) {
#if !defined(jpn)
    char statusText[0x80];
#endif
    memset(panel + 0x10, 0, 8);
    *(unsigned char*)(panel + 0x10) = 0xd;
    *(unsigned char*)(panel + 0x18) = 0;
    *(unsigned char*)(panel + 0x1c) = 0;
    *(char*)(panel + 0x1d) = -1;
    *(char*)(panel + 0x20) = -1;
    *(short*)(panel + 0x1e) = -1;
    *(char*)(panel + 0x22) = -1;
    *(char*)(panel + 0x21) = -1;
    *(short*)(panel + 0x2c) = -1;
    *(char*)(panel + 0x2e) = -1;
    *(short*)(panel + 0x26) = 0;
    func_0203c198(panel + 0x50);
#if defined(jpn)
    *(char*)(panel + 0x47d) = -1;
#else
    *(char*)(panel + 0x43d) = -1;
#endif
    if (IsPanelMemberIncapacitated_ov000_021719f8((int*)panel)) {
#if defined(jpn)
        int statusStringIndex = func_ov000_02171a74(panel);
        struct Struct_0201099c_3* stringList = *(struct Struct_0201099c_3**)(panel + 4);
        if (stringList && statusStringIndex >= 0) {
            SetSpriteText_0203c108((struct Struct_0203c108_3*)(panel + 0x50), (char*)((int)((StringList*)(stringList))->GetString(statusStringIndex)));
        }
#else
        __clear(statusText, 0x80);
        int statusStringIndex = func_ov000_02171a74(panel, statusText);
        if (statusStringIndex >= 0) {
            SetSpriteText_0203c108((struct Struct_0203c108_3*)(panel + 0x50), statusText);
        }
#endif
        *(unsigned char*)(panel + 0x10) = 0x64;
    }
    func_ov000_02170ffc(panel);
}
