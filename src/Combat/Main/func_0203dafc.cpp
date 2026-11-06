#include <globaldefs.h>

struct ObjectArchiveLoadInfo_0203d028_11 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
};

// USA: ClearObjectArchiveLoadInfo_0203dafc
extern "C" ARM void ClearObjectArchiveLoadInfo_0203dafc(struct ObjectArchiveLoadInfo_0203d028_11* loadInfo) {
    loadInfo->unknown_0_ = 0;
    loadInfo->unknown_4_ = 0;
    loadInfo->unknown_8_ = 0;
    loadInfo->unknown_c_ = 0;
    loadInfo->unknown_10_ = 0;
    loadInfo->unknown_14_ = 0;
    loadInfo->unknown_18_ = 0;
    loadInfo->unknown_1c_ = 0;
}
