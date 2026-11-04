#include <globaldefs.h>

#if defined(jpn)
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void func_ov012_021856c8(void* arg0);

// JPN: func_ov012_02185690
extern "C" ARM void func_ov012_02185690(void* arg0) {
    memset(arg0, 0, 0xc);
    *(int*)((char*)arg0 + 0xc) = 0;
    *(short*)((char*)arg0 + 0x10) = 0;
    *(int*)((char*)arg0 + 0x14) = -1;
    *(int*)((char*)arg0 + 0x18) = -1;
    func_ov012_021856c8(arg0);
}
#endif
