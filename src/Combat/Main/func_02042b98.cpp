#include <globaldefs.h>

struct Struct_02042b98_3;
extern "C" void func_02042c24(struct Struct_02042b98_3* arg0, int arg1, int arg2);

struct Struct_02042b98;
extern "C" void func_02042c3c(struct Struct_02042b98* arg0, int arg1, int arg2);

struct Struct_02042b98_2;
extern "C" void func_02042c54(struct Struct_02042b98_2* arg0, int arg1, int arg2, int arg3, int arg4);

#if defined(jpn)
enum { Enum_02042b98_2448 = 0x860, Enum_02042b98_6624 = 0x1804, Enum_02042b98_6232 = 0x1728, Enum_02042b98_6236 = 0x172c, Enum_02042b98_6216 = 0x1718 };
#else
enum { Enum_02042b98_2448 = 0x990, Enum_02042b98_6624 = 0x19e0, Enum_02042b98_6232 = 0x1858, Enum_02042b98_6236 = 0x185c, Enum_02042b98_6216 = 0x1848 };
#endif

// USA: SetMessageWindowRect_02042b98
extern "C" ARM void SetMessageWindowRect_02042b98(void* window, int x, int y, int width, int height) {
    char* windowBytes = (char*)window;
    *(int*)(windowBytes + Enum_02042b98_2448) = x + (width >> 1);
    func_02042c24((struct Struct_02042b98_3*)(windowBytes + Enum_02042b98_6624), (short)x, (short)y);
    func_02042c3c((struct Struct_02042b98*)(windowBytes + Enum_02042b98_6624), (short)width, (short)height);
    *(int*)(windowBytes + Enum_02042b98_6232) = x;
    *(int*)(windowBytes + Enum_02042b98_6236) = y + 8;
    func_02042c54((struct Struct_02042b98_2*)(windowBytes + Enum_02042b98_6216), x, y + 8, x + width, y + height);
}
