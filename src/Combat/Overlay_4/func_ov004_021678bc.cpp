#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QuestDisplay_0208ba54;
extern "C" void ReleaseQuestDisplay_0208ba54(struct QuestDisplay_0208ba54* display);

struct Struct_ov004_021678bc {
    unsigned char unknown_0_[0x20];
    SafeAllocator unknown_20_;
    unsigned char unknown_34_[0x34 - 0x20 - sizeof(SafeAllocator)];
    struct QuestDisplay_0208ba54* unknown1_34_;
};

// USA: func_ov004_021678bc
extern "C" ARM void func_ov004_021678bc(struct Struct_ov004_021678bc* arg0) {
    ReleaseQuestDisplay_0208ba54((struct QuestDisplay_0208ba54*)((char*)arg0 + 0x34));
    arg0->unknown_20_.Destroy();
}
