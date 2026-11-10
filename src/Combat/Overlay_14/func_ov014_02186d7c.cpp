#include <globaldefs.h>

struct MenuLayout_0207fcb8;
extern "C" unsigned int ClearMenuLayoutBGScreenData_0207fcb8(MenuLayout_0207fcb8*);
struct MenuLayout_0207fd44_2;
extern "C" unsigned int FlushMenuLayoutBGScreenData_0207fd44(MenuLayout_0207fd44_2*);
struct Struct_0207fd00;
extern "C" unsigned int func_0207fd00(Struct_0207fd00*);
extern "C" unsigned int func_0207fe80(unsigned int, unsigned int, unsigned int, unsigned int);
extern "C" void func_ov014_02186e2c(unsigned int);

// USA: func_ov014_02186d7c
extern "C" ARM void func_ov014_02186d7c(unsigned int arg0) {
    if (*(unsigned char*)((char*)arg0 + 0x17a) != 0) {
        ClearMenuLayoutBGScreenData_0207fcb8((MenuLayout_0207fcb8*)(*(unsigned int*)((char*)arg0 + 0xc0)));
        func_0207fd00((Struct_0207fd00*)(*(unsigned int*)((char*)arg0 + 0xc0)));
        func_0207fe80(*(unsigned int*)((char*)arg0 + 0xc0), 1, 0, 1);
        FlushMenuLayoutBGScreenData_0207fd44((MenuLayout_0207fd44_2*)(*(unsigned int*)((char*)arg0 + 0xc0)));
        func_ov014_02186e2c(arg0);
    }
}
