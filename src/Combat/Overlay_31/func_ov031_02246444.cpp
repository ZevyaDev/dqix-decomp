#include <globaldefs.h>

#if defined(jpn)
extern "C" void VectorizedInvertedMemcpy(void* arg0, void* arg1, int arg2);
extern "C" void func_020c7e0c(void* arg0, int arg1, int arg2);
extern int data_ov031_02292040;
extern int data_ov031_02291f60;

// JPN: func_ov031_02246444
extern "C" ARM void func_ov031_02246444(void* arg0) {
    VectorizedInvertedMemcpy(arg0, &data_ov031_02292040, 0xc0);
    func_020c7e0c(&data_ov031_02291f60, 4, 0);
}
#endif
