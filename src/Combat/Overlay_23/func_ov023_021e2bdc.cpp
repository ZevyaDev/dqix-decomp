#include <globaldefs.h>

struct Struct_ov023_021e2bdc { short elementId_0_; };
struct LayoutGroup_ov023_021e2bdc_2 { char unknown_0_[2]; unsigned short elementCount_2_; struct Struct_ov023_021e2bdc* pElementIds_4_; };

extern "C" struct LayoutGroup_ov023_021e2bdc_2* FindLayoutGroup_ov023_021db4e4(void*);
extern "C" void func_ov023_021e2b5c(void*, int, short*, short*);

// USA: GetLayoutGroupFirstElementPosition_ov023_021e2bdc
extern "C" ARM void GetLayoutGroupFirstElementPosition_ov023_021e2bdc(void* layout, int groupId, short* outX, short* outY) {
    struct LayoutGroup_ov023_021e2bdc_2* group = FindLayoutGroup_ov023_021db4e4(layout);
    if (group != 0 && group->elementCount_2_ != 0 && group->pElementIds_4_ != 0) {
        short firstElementId = group->pElementIds_4_->elementId_0_;
        short x, y;
        func_ov023_021e2b5c(layout, firstElementId, &x, &y);
        *outX = x;
        *outY = y;
    }
}
