#include <globaldefs.h>
#include "Graphics/BGLayer.h"
#include "Resource/StringList.h"

extern "C" void SaveMainBGControl_02074af4(void*);

struct BGControlSave_02074b64;
extern "C" void SaveSubBGControl_02074b64(struct BGControlSave_02074b64* save);

struct StringTable_0201099c_14;

struct BGLayer_02020cb8;

extern "C" void InitTextWindow_0204c684(void*);

struct TextWindowManager_0205cfd4;
extern "C" void InitTextWindowManager_0205cfd4(struct TextWindowManager_0205cfd4* windowManager);

// USA: InitAccoladeDisplay_ov023_021eb138
extern "C" ARM void InitAccoladeDisplay_ov023_021eb138(void* display, unsigned char kind) {
    *(unsigned char*)((char*)display + 0x430) = kind;
    *(unsigned char*)((char*)display + 0x3a) = 0;
    *(unsigned char*)((char*)display + 0x3b) = 0;
    SaveMainBGControl_02074af4((char*)display + 0x2a);
    SaveSubBGControl_02074b64((struct BGControlSave_02074b64*)((char*)display + 0x2a));

    unsigned int* dISPCNT = (unsigned int*)0x4000000;
    *(int*)((char*)display + 0x3c) = (*dISPCNT & 0x1f00) >> 8;
    unsigned int* dISPCNTSUB = (unsigned int*)0x4001000;
    struct StringTable_0201099c_14* stringList = (struct StringTable_0201099c_14*)((char*)display + 4);
    *(int*)((char*)display + 0x40) = (*dISPCNTSUB & 0x1f00) >> 8;
    *(int*)display = 0;
    ((StringList*)(stringList))->Reset();

    for (int i = 0; i < 2; i++) {
        ((BGLayer*)((struct BGLayer_02020cb8*)((char*)display + 0x44 + i * 0x20)))->Reset();
    }
    for (int i = 0; i < 2; i++) {
        ((BGLayer*)((struct BGLayer_02020cb8*)((char*)display + 0x84 + i * 0x20)))->Reset();
    }
    for (int i = 0; i < 3; i++) {
        InitTextWindow_0204c684((char*)display + 0x180 + i * 0xe0);
    }

    InitTextWindowManager_0205cfd4((struct TextWindowManager_0205cfd4*)((char*)display + 0xc4));

    *(int*)((char*)display + 0x420) = 0;
    *(int*)((char*)display + 0x424) = 0;
    *(int*)((char*)display + 0x428) = 0;
    *(int*)((char*)display + 0x42c) = 0;
    *(int*)((char*)display + 0x20) = 0;
    *(int*)((char*)display + 0x24) = 0;
    *(unsigned char*)((char*)display + 0x28) = 0;
    *(unsigned char*)((char*)display + 0x431) = 0;
    *(unsigned char*)((char*)display + 0x432) = 0;
    *(unsigned char*)((char*)display + 0x433) = 0;
    *(int*)((char*)display + 0x434) = -1;
    *(unsigned short*)((char*)display + 0x438) = 0;
    *(unsigned short*)((char*)display + 0x43a) = 0;
    *(unsigned char*)((char*)display + 0x43c) = 0;
    *(unsigned char*)((char*)display + 0x43d) = 0;
    *(unsigned short*)((char*)display + 0x43e) = 0;
    *(unsigned short*)((char*)display + 0x440) = 0;
    *(unsigned short*)((char*)display + 0x442) = 0;
    *(unsigned short*)((char*)display + 0x444) = 0;
    *(unsigned short*)((char*)display + 0x446) = 0;
    *(unsigned short*)((char*)display + 0x448) = 0;
    *(unsigned char*)((char*)display + 0x44a) = 0;
}
