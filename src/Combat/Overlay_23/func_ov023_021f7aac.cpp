#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);

struct PacEntry_02020aec {
    char unknown_0_;
    char unknown_1_[0x3f];
    int dataOffset_40_;
    int dataSize_44_;
    int nextOffset_48_;
};

struct PacEntry_02020cb8_4 {
    signed char unknown_0_;
    char unknown_1_[0x47];
    int nextOffset_48_;
};

struct BGLayer_0204af38;


extern char data_ov023_021fe5f4[];

struct Struct_ov023_021f7688 {
    char unknown_0_[0x8];
    unsigned short unknown_8_;
};

// USA: func_ov023_021f7aac
extern "C" ARM void func_ov023_021f7aac(struct Struct_ov023_021f7688* arg0, void* arg1, struct PacEntry_02020aec* arg2, unsigned int arg3) {
#if defined(jpn)
 enum {Enum_ov023_021f7aac_40=0x24};
#else
 enum {Enum_ov023_021f7aac_40=0x28};
#endif
    if (arg2 == 0 || arg3 == 0) return;

    void* var0 = func_ov011_021845f8(arg1, arg0->unknown_8_);
    if (var0 == 0) return;

    int var1 = GetNumFilesInPAC((const void*)((struct PacEntry_02020cb8_4*)arg2));
    int var2 = 0;
    int var3;
    for (var3 = 0; var3 < var1; var3++) {
        int var4;
        void* var5;
        GetFileInPACByIndex((void*)(arg2), var3, (const char**)(&var5), (unsigned int*)(&var4));
        if (strstr((char*)var5, data_ov023_021fe5f4) != NULL) var2++;
    }

    if (var2 > 0) {
        ((BGLayer*)((struct BGLayer_0204af38*)((char*)arg0 + Enum_ov023_021f7aac_40)))->AllocateSprites((unsigned char)var2, (SafeAllocator*)((SafeAllocator*)((char*)var0 + 4)));
    }

    int var6;
    for (var6 = 0; var6 < var1; var6++) {
        int var7;
        void* var8;
        void* var9 = GetFileInPACByIndex((void*)(arg2), var6, (const char**)(&var8), (unsigned int*)(&var7));
        if (var9 != 0) {
            ((BGLayer*)((struct BGLayer_0204af38*)((char*)arg0 + Enum_ov023_021f7aac_40)))->ProcessGraphicsFile((const void*)var9, (SafeAllocator*)((SafeAllocator*)((char*)var0 + 4)), var7);
        }
    }
}
