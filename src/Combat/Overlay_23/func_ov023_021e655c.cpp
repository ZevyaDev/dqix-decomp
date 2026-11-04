#include <globaldefs.h>

#if defined(jpn)

struct Struct_0205d81c;
extern "C" void func_0205deb4(struct Struct_0205d81c* arg0, int arg1, int arg2);

// JPN: func_ov023_021e655c
extern "C" ARM void func_ov023_021e655c(void* arg0) {
    *((unsigned char*)arg0 + 0x1341) = 7;
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0x90), 7, 0);
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0x90), 8, 1);
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0x90), 9, 1);
}

// JPN: func_ov023_021e65a0
extern "C" ARM void func_ov023_021e65a0(void* arg0) {
    *((unsigned char*)arg0 + 0x1341) = 8;
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0x90), 7, 1);
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0x90), 8, 0);
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0x90), 9, 1);
}

// JPN: func_ov023_021e65e8
extern "C" ARM void func_ov023_021e65e8(void* arg0) {
    *((unsigned char*)arg0 + 0x1341) = 9;
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0x90), 7, 1);
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0x90), 8, 1);
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0x90), 9, 0);
}

#endif
