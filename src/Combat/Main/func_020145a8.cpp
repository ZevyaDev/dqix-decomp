#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "std_library_functions.h"

struct Zone3D_StructPtr_8
{
    unsigned short unknown_0_;
    unsigned short unknown_2_ : 15;
    char unk_4;
    char mapShortName_[7];
    unsigned char unknown_c_low_ : 4;
    unsigned char unknown_c_high_ : 1;
};

// Layout-compatible with include/World/Zone3D.h (usa). The repo header does not
// declare LoadMapAMDJ, so the class is re-stated here with the method added.
class Zone3D
{
public:
    unsigned short currentZoneID_;
    unsigned short previousZoneID_;
    short unknown_4_;
    char unk_6[2];
    Zone3D_StructPtr_8* pUnknownStruct_8_;
    char unk_c[0x420];
    unsigned char unknown_42c_;
    char unk_42d[3];
    int mapListLoadHandle_;
    int unknown_434_;
    int mapAMBLLoadHandle_;
    int mapAMDJLoadHandle_;
    char unk_440[0x1fac];
    ActiveGrottoClass grotto_;

    void LoadMapAMDJ();
};

extern "C" {
    int _Z17IsInRange0201b5b0i(int id);
    int _Z22IsValueInRange0201b5d8i(int id);
}

extern char data_020ef116[];
extern char data_020ef156[];
extern char data_020ef166[];
extern char data_020ef176[];
extern char data_020ef182[];
extern char data_020ef18e[];

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020145a8
void Zone3D::LoadMapAMDJ() {
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    char buf[0x14];

    if (_Z17IsInRange0201b5b0i(currentZoneID_)) {
        int env = grotto_.GetActiveGrottoEnviron();
        if (env == 0) env = 1;
        if (env > 5) env = 5;
        sprintf(buf, data_020ef156, data_020ef116, env);
    } else if (_Z22IsValueInRange0201b5d8i(currentZoneID_)) {
        int env = grotto_.GetActiveGrottoEnviron();
        sprintf(buf, data_020ef166, data_020ef116, env);
    } else if (currentZoneID_ == 10000 || currentZoneID_ == 10100) {
        if (unknown_42c_ == 0) {
            sprintf(buf, data_020ef176, data_020ef116, *(int*)((char*)this + 8) + 5);
            unknown_42c_++;
        } else if (unknown_42c_ == 1) {
            sprintf(buf, data_020ef182, data_020ef116, *(int*)((char*)this + 8) + 5);
            unknown_42c_++;
        }
    } else {
        sprintf(buf, data_020ef18e, data_020ef116, *(int*)((char*)this + 8) + 5);
    }

    mapAMDJLoadHandle_ = loader->QueueLoadFile(buf, NULL);
}