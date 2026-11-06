#include <globaldefs.h>

struct StringList_020727d8 {
    void* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: ResetStringList_020727d8
extern "C" ARM void ResetStringList_020727d8(struct StringList_020727d8* stringList) {
    stringList->unknown_0_ = 0;
    stringList->unknown_4_ = 0;
    stringList->unknown_6_ = 0;
}
