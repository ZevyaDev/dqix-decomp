#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_02046968;
extern "C" void func_02046968(struct Struct_02046968* arg0);
extern "C" void func_ov017_021a3544(void* arg0, void* arg1);

struct Struct_ov017_021d6a34 {
    int unknown_0_[18];
};
extern struct Struct_ov017_021d6a34 data_ov017_021d6a34;

struct Queue_0203d028_4 {
    void* pHead_0_;
};

// USA: UpdateTaskQueue_ov017_021a3498
extern "C" ARM void UpdateTaskQueue_ov017_021a3498(struct Queue_0203d028_4* queue) {
#if defined(jpn)
 enum {Enum_ov017_021a3498_852=0x134};
#else
 enum {Enum_ov017_021a3498_852=0x354};
#endif
    void* head = queue->pHead_0_;
    if (head != NULL && *((unsigned char*)head + 1) != 0) {
        int gameResources = (int)GetGameResources();
        if (gameResources != 0) {
            struct Struct_ov017_021d6a34 taskTypes = data_ov017_021d6a34;
            int* typeEntry = taskTypes.unknown_0_;
            while (*typeEntry != 0xffff) {
                signed char headType = *(signed char*)queue->pHead_0_;
                if (headType == *typeEntry) {
                    *((unsigned char*)(long)gameResources + 0x4000 + Enum_ov017_021a3498_852) = 0xc;
                    break;
                }
                typeEntry++;
            }
        }
    }
    func_02046968((struct Struct_02046968*)queue);
    func_ov017_021a3544(queue, queue->pHead_0_);
}
