#include <globaldefs.h>


extern "C" void Memcpy16Bit_020ca3b8(void* src, void* dst, unsigned int len);

struct Struct_020c99c8 { unsigned short language_0_0_ : 3; };
struct Struct_020c99c8_2 { unsigned char unknown_0_0_ : 4; };

// USA: GetUserSettings_020c99c8
extern "C" ARM void GetUserSettings_020c99c8(void* buffer) {
    char* userSettings = (char*)buffer;
    unsigned char* firmwareSettings = (unsigned char*)0x27ffc80;
    userSettings[0] = ((struct Struct_020c99c8*)(firmwareSettings + 0x64))->language_0_0_;
    userSettings[1] = ((struct Struct_020c99c8_2*)(firmwareSettings + 2))->unknown_0_0_;
    userSettings[2] = firmwareSettings[3];
    userSettings[3] = firmwareSettings[4];
    *(unsigned short*)(userSettings + 0x1a) = (unsigned char)firmwareSettings[0x1a];
    *(unsigned short*)(userSettings + 0x52) = (unsigned char)firmwareSettings[0x50];
    Memcpy16Bit_020ca3b8(firmwareSettings + 6, userSettings + 4, 0x14);
    Memcpy16Bit_020ca3b8(firmwareSettings + 0x1c, userSettings + 0x1c, 0x34);
    *(unsigned short*)(userSettings + 0x18) = 0;
    *(unsigned short*)(userSettings + 0x50) = 0;
}
