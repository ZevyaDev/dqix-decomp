#include <globaldefs.h>

#if defined(jpn)

extern "C" void func_ov004_0216afb0(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
extern unsigned char data_ov004_02171034;

// JPN: func_ov004_0216b418
extern "C" ARM void func_ov004_0216b418(void* arg0, int arg1, int arg2) {
    int var0 = 1;
    switch (arg1) {
    case 0:
        func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, 0x23, 0xc, 6, 0xa, var0);
        func_ov004_0216afb0(arg0, 0x33, 1, 0xd2, 0x35, 0xc, 0x13, 0xa, 1);
        func_ov004_0216afb0(arg0, 0x34, 1, 0xd2, 0x3c, 0xc, 0x20, 0xa, 1);
        break;
    case 1:
        switch (arg2) {
        case 0:
            if (((unsigned char*)&data_ov004_02171034)[5] == 5) var0 = 0;
            func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, 2, 0xc, 6, 0xa, var0);
            func_ov004_0216afb0(arg0, 0x33, 1, 0xd2, 3, 0xc, 0x13, 0xa, 1);
            func_ov004_0216afb0(arg0, 0x34, 1, 0xd2, 0x3c, 0xc, 0x20, 0xa, 1);
            break;
        case 1:
            func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, 2, 0xc, 6, 0xa, var0);
            func_ov004_0216afb0(arg0, 0x33, 1, 0xd2, 4, 0xc, 0x14, 0xa, 1);
            func_ov004_0216afb0(arg0, 0x34, 1, 0xd2, 3, 0xc, 0x22, 0xa, 1);
            func_ov004_0216afb0(arg0, 0x35, 1, 0xd2, 0x3c, 0xc, 0x30, 0xa, 1);
            break;
        case 2:
            func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, 2, 0xc, 6, 0xa, var0);
            func_ov004_0216afb0(arg0, 0x33, 1, 0xd2, 4, 0xc, 0x14, 0xa, 1);
            func_ov004_0216afb0(arg0, 0x34, 1, 0xd2, 5, 0xc, 0x22, 0xa, 1);
            func_ov004_0216afb0(arg0, 0x35, 1, 0xd2, 3, 0xc, 0x30, 0xa, 1);
            func_ov004_0216afb0(arg0, 0x36, 1, 0xd2, 0x3c, 0xc, 0x3e, 0xa, 1);
            break;
        }
        break;
    case 2:
        func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, var0, 0xc, 8, 0xa, var0);
        func_ov004_0216afb0(arg0, 0x33, 1, 0xd2, 0x3c, 0xc, 0x16, 0xa, 1);
        break;
    case 3:
        func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, 2, 0xc, 7, 0xa, var0);
        break;
    }
}

#endif
