#include <globaldefs.h>
#include "NitroSDK/Cache.h"

typedef char* Type_02001bdc;
#define __va_align(size) ((((unsigned long)(size)) + 3U) & ~3U)
#define va_start(ap, parm) ((ap) = (Type_02001bdc)((char*)((unsigned long)&(parm) & ~3U) + __va_align(sizeof(parm))))
#define va_arg(ap, type) (*(type*)(((ap) += __va_align(sizeof(type))) - __va_align(sizeof(type))))
#define va_end(ap) ((void)0)

extern "C" int func_020d41e8();

struct Struct_020d424c
{
    unsigned short unknown_0_;
};

struct Struct_020d424c_2
{
    void* unknown_0_;
    Struct_020d424c* unknown_4_;
};

struct Struct_021142e0_3
{
    unsigned short unknown_0_;
    Struct_020d424c_2* unknown_4_;
};

extern Struct_021142e0_3 data_021142e0;

// USA: CheckWirelessState_020d424c
extern "C" ARM int CheckWirelessState_020d424c(int stateCount, ...)
{
    int result = func_020d41e8();
    unsigned short state;
    Type_02001bdc allowedStates;
    if (result != 0)
        return result;
    InvalidateDataCacheRange(&data_021142e0.unknown_4_->unknown_4_->unknown_0_, sizeof(unsigned short));
    state = data_021142e0.unknown_4_->unknown_4_->unknown_0_;
    va_start(allowedStates, stateCount);
    result = 3;
    if (stateCount == 0)
        return result;
    do
    {
        if (va_arg(allowedStates, unsigned long) == state)
            result = 0;
    } while (--stateCount != 0);
    va_end(allowedStates);
    return result;
}
