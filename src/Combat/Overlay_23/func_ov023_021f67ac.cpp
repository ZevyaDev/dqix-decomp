#include <globaldefs.h>

struct MenuObjectList_ov004_0215c30c {
    void* pHead_0_;
};

struct MenuObject_ov004_0215c30c_2 {
    char unknown_0_[0x6];
    unsigned short id_6_;
    char unknown_8_[0xc];
    struct MenuObject_ov004_0215c30c_2* pPrevious_14_;
    struct MenuObject_ov004_0215c30c_2* pNext_18_;
};

// USA: AppendMenuObject_ov023_021f67ac
extern "C" ARM void AppendMenuObject_ov023_021f67ac(struct MenuObjectList_ov004_0215c30c* objectList, struct MenuObject_ov004_0215c30c_2* object) {
    struct MenuObject_ov004_0215c30c_2* last;
    if (object->id_6_ == 0) {
        return;
    }
    last = (struct MenuObject_ov004_0215c30c_2*)objectList->pHead_0_;
    if (last != NULL) {
        while (last->pNext_18_ != NULL) {
            last = last->pNext_18_;
        }
        last->pNext_18_ = object;
        object->pPrevious_14_ = last;
        return;
    }
    objectList->pHead_0_ = object;
}
