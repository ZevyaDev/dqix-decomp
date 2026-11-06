#include <globaldefs.h>

extern "C" void Memset32Bit_020ca458(unsigned int value, void* dest, int count);
extern char data_020fe9cc;

// USA: func_0202ad30
extern "C" ARM void func_0202ad30() {
    Memset32Bit_020ca458(0, &data_020fe9cc, 0x600);
}
