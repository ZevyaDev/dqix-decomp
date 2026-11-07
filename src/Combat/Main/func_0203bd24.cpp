#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0203bd24_4096 = 0x3000 };
#else
enum { Enum_0203bd24_4096 = 0x1000 };
#endif


extern char data_021056b4;
extern void* data_02105244;
extern "C" void func_0203c304(char* arg0);

// USA: ResetOAMManager_0203bd24
extern "C" ARM void ResetOAMManager_0203bd24(char* oamManager) {
    *(int*)(oamManager + 0x8) = 0;
    *(unsigned char*)(oamManager + 0xc) = 1;
    *(unsigned char*)(oamManager + 0xd) = 1;
    *(int*)(oamManager + 0x0) = Enum_0203bd24_4096;
    *(int*)(oamManager + 0x4) = 0xe0;
    func_0203c304(oamManager + 0x10);
    *(void**)(oamManager + 0x10) = &data_021056b4;
    data_02105244 = oamManager + 0x10;
}
