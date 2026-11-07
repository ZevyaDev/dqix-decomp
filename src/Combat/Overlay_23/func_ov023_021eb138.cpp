#include <globaldefs.h>

extern "C" void SaveMainBGControl_02074af4(void*);

struct BGControlSave_02074b64;
extern "C" void SaveSubBGControl_02074b64(struct BGControlSave_02074b64* save);

struct StringTable_0201099c_14;
extern "C" void InitStringTable_020dfc40(struct StringTable_0201099c_14* stringTable);

struct BGLayer_02020cb8;
extern "C" void InitBGLayer_0204af64(struct BGLayer_02020cb8* layer);

extern "C" void InitTextWindow_0204c684(void*);

struct TextWindowManager_0205cfd4;
extern "C" void InitTextWindowManager_0205cfd4(struct TextWindowManager_0205cfd4* windowManager);

// USA: func_ov023_021eb138
extern "C" ARM void func_ov023_021eb138(void* arg0, unsigned char arg1) {
    *(unsigned char*)((char*)arg0 + 0x430) = arg1;
    *(unsigned char*)((char*)arg0 + 0x3a) = 0;
    *(unsigned char*)((char*)arg0 + 0x3b) = 0;
    SaveMainBGControl_02074af4((char*)arg0 + 0x2a);
    SaveSubBGControl_02074b64((struct BGControlSave_02074b64*)((char*)arg0 + 0x2a));

    unsigned int* var0 = (unsigned int*)0x4000000;
    *(int*)((char*)arg0 + 0x3c) = (*var0 & 0x1f00) >> 8;
    unsigned int* var1 = (unsigned int*)0x4001000;
    struct StringTable_0201099c_14* var2 = (struct StringTable_0201099c_14*)((char*)arg0 + 4);
    *(int*)((char*)arg0 + 0x40) = (*var1 & 0x1f00) >> 8;
    *(int*)arg0 = 0;
    InitStringTable_020dfc40(var2);

    for (int var3 = 0; var3 < 2; var3++) {
        InitBGLayer_0204af64((struct BGLayer_02020cb8*)((char*)arg0 + 0x44 + var3 * 0x20));
    }
    for (int var4 = 0; var4 < 2; var4++) {
        InitBGLayer_0204af64((struct BGLayer_02020cb8*)((char*)arg0 + 0x84 + var4 * 0x20));
    }
    for (int var5 = 0; var5 < 3; var5++) {
        InitTextWindow_0204c684((char*)arg0 + 0x180 + var5 * 0xe0);
    }

    InitTextWindowManager_0205cfd4((struct TextWindowManager_0205cfd4*)((char*)arg0 + 0xc4));

    *(int*)((char*)arg0 + 0x420) = 0;
    *(int*)((char*)arg0 + 0x424) = 0;
    *(int*)((char*)arg0 + 0x428) = 0;
    *(int*)((char*)arg0 + 0x42c) = 0;
    *(int*)((char*)arg0 + 0x20) = 0;
    *(int*)((char*)arg0 + 0x24) = 0;
    *(unsigned char*)((char*)arg0 + 0x28) = 0;
    *(unsigned char*)((char*)arg0 + 0x431) = 0;
    *(unsigned char*)((char*)arg0 + 0x432) = 0;
    *(unsigned char*)((char*)arg0 + 0x433) = 0;
    *(int*)((char*)arg0 + 0x434) = -1;
    *(unsigned short*)((char*)arg0 + 0x438) = 0;
    *(unsigned short*)((char*)arg0 + 0x43a) = 0;
    *(unsigned char*)((char*)arg0 + 0x43c) = 0;
    *(unsigned char*)((char*)arg0 + 0x43d) = 0;
    *(unsigned short*)((char*)arg0 + 0x43e) = 0;
    *(unsigned short*)((char*)arg0 + 0x440) = 0;
    *(unsigned short*)((char*)arg0 + 0x442) = 0;
    *(unsigned short*)((char*)arg0 + 0x444) = 0;
    *(unsigned short*)((char*)arg0 + 0x446) = 0;
    *(unsigned short*)((char*)arg0 + 0x448) = 0;
    *(unsigned char*)((char*)arg0 + 0x44a) = 0;
}
