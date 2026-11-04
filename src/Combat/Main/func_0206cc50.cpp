#include <globaldefs.h>

#if defined(jpn)
struct Struct_0206cc50 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[0x1724];
    int unknown_1730_;
    char unknown_1734_[0x54];
    unsigned char unknown_1788_;
};

extern "C" int func_02069430(void* arg0, unsigned short arg1);
extern "C" int func_02069444(void* arg0, unsigned short arg1);
extern "C" int func_020694a0(void* arg0, unsigned int arg1);

// JPN: func_0206cc50
extern "C" ARM int func_0206cc50(Struct_0206cc50* arg0, unsigned short* arg1) {
    if (!arg1) return 0;
    unsigned short var2;
    int var0 = 0;
    int var1 = 0;
    while (!func_020694a0(arg0, *arg1)) {
        var2 = *arg1;
        if (func_02069430(arg0, var2)) {
            int var3 = func_02069444(arg0, var2);
            switch (var2) {
            case 0xff19:
                var0 += arg0->unknown_1788_;
                break;
            case 0xff1a:
                switch (arg0->unknown_1788_) {
                case 8:
                case 10:
                    var0 += arg0->unknown_1788_;
                    break;
                case 12:
                    var0 += arg0->unknown_8_;
                    break;
                }
                break;
            case 0xff1b:
                var0 += arg0->unknown_1788_ >> 1;
                break;
            case 0xff22:
                if (var0 < arg1[1]) var0 = arg1[1];
                break;
            case 0xff25:
                var0 += arg1[1];
                break;
            case 0xff37:
                var1 = 1;
                break;
            case 0xff38:
                var1 = 0;
                break;
            }
            arg1 = arg1 + var3 + 1;
        } else {
            if (var1 != 0) {
                arg1++;
            } else {
                arg1++;
                var0 += arg0->unknown_1730_;
            }
        }
    }
    return var0;
}
#endif
