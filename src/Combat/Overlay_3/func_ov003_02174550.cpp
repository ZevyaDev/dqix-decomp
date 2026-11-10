#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02174550_4174 = 0xfca };
enum { Enum_ov003_02174550_4175 = 0xfcb };
enum { Enum_ov003_02174550_4159 = 0xfbb };
enum { Enum_ov003_02174550_4088 = 0xf74 };
enum { Enum_ov003_02174550_2188 = 0x808 };
enum { Enum_ov003_02174550_4166 = 0xfc2 };
enum { Enum_ov003_02174550_4158 = 0xfba };
enum { Enum_ov003_02174550_2204 = 0x818 };
#else
enum { Enum_ov003_02174550_4174 = 0x104e };
enum { Enum_ov003_02174550_4175 = 0x104f };
enum { Enum_ov003_02174550_4159 = 0x103f };
enum { Enum_ov003_02174550_4088 = 0xff8 };
enum { Enum_ov003_02174550_2188 = 0x88c };
enum { Enum_ov003_02174550_4166 = 0x1046 };
enum { Enum_ov003_02174550_4158 = 0x103e };
enum { Enum_ov003_02174550_2204 = 0x89c };
#endif


struct KeyRepeat_02081f20_2;
struct MenuLayout_0207fe44;
struct Struct_020e28dc;
struct YesNoWindow_020e25e8;

extern "C" int GetMessageWindow_020421a0();
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void func_0208203c(struct KeyRepeat_02081f20_2* arg0);
extern "C" void CloseMenuLayoutWindows_0207fe44(struct MenuLayout_0207fe44* menuLayout);
extern "C" void func_ov003_021749c0(char* arg0);
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
extern "C" void CloseYesNoWindow_020e25e8(struct YesNoWindow_020e25e8* yesNoWindow);
extern "C" void func_ov003_02175cb0(char* arg0, int arg1);

// USA: func_ov003_02174550
extern "C" ARM void func_ov003_02174550(char* arg0) {
    if (*(unsigned char*)(arg0 + Enum_ov003_02174550_4174) != 0) return;
    *(unsigned char*)(arg0 + Enum_ov003_02174550_4174) = 1;

    ResetMessageWindow_02043204((char*)GetMessageWindow_020421a0());
    func_0208203c((struct KeyRepeat_02081f20_2*)(arg0 + Enum_ov003_02174550_2188));

    *(int*)(arg0 + Enum_ov003_02174550_4088) = 0;
    CloseMenuLayoutWindows_0207fe44(*(struct MenuLayout_0207fe44**)(arg0 + Enum_ov003_02174550_2204));

    *(unsigned char*)(arg0 + Enum_ov003_02174550_4158) = 9;
    *(unsigned char*)(arg0 + Enum_ov003_02174550_4159) = 0;
    if (*(unsigned short*)(arg0 + Enum_ov003_02174550_4166) & 0x80) {
        func_ov003_021749c0(arg0);
    }

    if (*(struct Struct_020e28dc**)arg0 != NULL && func_020e28dc(*(struct Struct_020e28dc**)arg0)) {
        CloseYesNoWindow_020e25e8((struct YesNoWindow_020e25e8*)(*(void**)arg0));
    }

    if (*(unsigned char*)(arg0 + Enum_ov003_02174550_4175) != 0) {
        func_ov003_02175cb0(arg0, 1);
    }
}
