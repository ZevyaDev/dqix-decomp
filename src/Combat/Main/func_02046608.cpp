#include <globaldefs.h>

extern "C" void __clear(void*, int);
extern "C" void ExpandMessageValueTags_0206831c(void*, const char*, char*);
extern "C" void NormalizeMessageText_02068418(void*, char*, char*, unsigned char);
extern "C" void ExpandMessageConditionTags_02068f40(void*, char*, char*, unsigned char);
extern "C" void ExpandMessageTextTags_02069234(void*, char*, char*, unsigned char);
extern "C" void ApplyMessageCapitalization_020695f4(void*, char*, char*, unsigned char);
extern "C" void WrapMessageText_0206b974(void*, bool, char*, char*, int, int, bool, unsigned char);

// USA: func_02046608
extern "C" ARM void func_02046608(void* arg0, int arg1, const char* arg2, char* arg3, int arg4, int arg5, unsigned char arg6) {
    char var0[0x960];
    if (arg2 != NULL && arg3 != NULL) {
        __clear(var0, 0x960);
        ExpandMessageValueTags_0206831c(arg0, arg2, var0);
        NormalizeMessageText_02068418(arg0, var0, arg3, arg6);
        ExpandMessageConditionTags_02068f40(arg0, arg3, var0, arg6);
        ExpandMessageTextTags_02069234(arg0, var0, arg3, arg6);
        ApplyMessageCapitalization_020695f4(arg0, arg3, var0, arg6);
        WrapMessageText_0206b974(arg0, false, var0, arg3, arg4, arg5, false, arg6);
    }
}
