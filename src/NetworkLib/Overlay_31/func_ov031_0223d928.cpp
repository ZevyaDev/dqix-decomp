#include <globaldefs.h>

struct Struct_ov031_0223d928 {
    char unknown_0_[2][0x400];
    int unknown_800_[2];
    int unknown_808_;
};

extern "C" void* AllocateZeroedMemory_ov031_0223cf4c(unsigned int size, int alignAndDir);
extern "C" void Memset32Bit_020ca458(unsigned int value, void* dest, int count);
extern Struct_ov031_0223d928* data_ov031_02290d60;
extern "C" ARM int func_ov031_0223beec(int arg0, int arg1, int arg2);
extern "C" void* AddTask_ov031_0223e218(void* listIndex, void* callback, void* callbackData, int priority);
extern "C" ARM void func_ov031_0223d9c4(void);

// USA: func_ov031_0223d928
extern "C" ARM void func_ov031_0223d928(void) {
    void* var0 = AllocateZeroedMemory_ov031_0223cf4c(sizeof(Struct_ov031_0223d928), 4);
    data_ov031_02290d60 = (Struct_ov031_0223d928*)var0;
    Memset32Bit_020ca458(0x200, var0, sizeof(data_ov031_02290d60->unknown_0_));
    for (int var1 = 0; var1 < 2; var1++) {
        data_ov031_02290d60->unknown_800_[var1] = func_ov031_0223beec(0x40, (int)data_ov031_02290d60->unknown_0_[var1], 8);
    }
    data_ov031_02290d60->unknown_808_ = (int)AddTask_ov031_0223e218((void*)1, (void*)func_ov031_0223d9c4, 0, 0xc8);
}
