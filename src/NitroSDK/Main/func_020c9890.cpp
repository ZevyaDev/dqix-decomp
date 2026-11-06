#include <globaldefs.h>


extern "C" void HaltForever_020c9be0(void);
extern short data_02111668;

// USA: func_020c9890
extern "C" ARM void func_020c9890(int arg0, unsigned int arg1) {
    if ((((arg1 & 0x7f00) << 8) >> 16) == 0x10) {
        data_02111668 = 1;
        return;
    }
    HaltForever_020c9be0();
}
