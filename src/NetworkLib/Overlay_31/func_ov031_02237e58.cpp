#include <globaldefs.h>

extern "C" void QueueTaskRemoval_ov031_0223e2c0(int, void*);
extern "C" ARM void *AddTask_ov031_0223e218(void *listIndex, void *callback, void *callbackData, int priority);
extern "C" void func_ov031_022384bc(int arg0);

struct Dialog_ov031_02237e58 { unsigned char unknown_0_[0x14]; void* pTask_14_; };
extern Dialog_ov031_02237e58* gDialog_ov031_02290d10;

// USA: CloseDialog_ov031_02237e58
extern "C" ARM void CloseDialog_ov031_02237e58(void) {
    QueueTaskRemoval_ov031_0223e2c0(0, gDialog_ov031_02290d10->pTask_14_);
    gDialog_ov031_02290d10->pTask_14_ = AddTask_ov031_0223e218((void*)1, (void*)func_ov031_022384bc, 0, 0x78);
}
