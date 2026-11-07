#include <globaldefs.h>
#include "Combat/Main/CopyRecord0200fbb4.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* GetZoneEntry_0200fd0c(GameState*);
extern "C" void GetZone3D_02012fe4(void);
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void* value);
extern "C" float GetScriptValueAsFloat_ov017_021d6110(void* value);
struct Vector3i;
extern "C" void InitZoneEntry_02070378(char*);

struct Struct_ov001_02161f80 {
    short unknown_0_;
    char unknown_2_;
    char unknown_3_[4];
    char unknown_7_;
    char unknown_8_[8];
    int unknown_10_[3];
    short unknown_1c_;
    char unknown_1e_[2];
    int unknown_20_;
    char unknown_24_[0x68 - 0x24];
    char unknown_68_;
    char unknown_69_;
};

// USA: func_ov001_02161f80
extern "C" ARM int func_ov001_02161f80(void* arg0, int arg1) {
    int var0[3];
    void* var1 = GameState::GetInstance();
    struct Struct_ov001_02161f80* var2 = (struct Struct_ov001_02161f80*)GetZoneEntry_0200fd0c((GameState*)var1);
    GetZone3D_02012fe4();
    int var3 = -1;
    int var4;
    int var5 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    var0[0] = (int)(4096.0f * GetScriptValueAsFloat_ov017_021d6110((char*)arg0 + 0x8));
    var0[1] = (int)(4096.0f * GetScriptValueAsFloat_ov017_021d6110((char*)arg0 + 0x10));
    var0[2] = (int)(4096.0f * GetScriptValueAsFloat_ov017_021d6110((char*)arg0 + 0x18));
    var4 = (int)(4096.0f * GetScriptValueAsFloat_ov017_021d6110((char*)arg0 + 0x20));
    int var6 = arg1;
    if (var6 > 5) {
        var3 = GetScriptValueAsInt_ov017_021d60f4((char*)arg0 + 0x28);
    }
    InitZoneEntry_02070378((char*)var2);
    var2->unknown_2_ = 1;
    var2->unknown_7_ = 1;
    var2->unknown_0_ = (short)var5;
    *(Vector3i*)var2->unknown_10_ = *(Vector3i const*)var0;
    var2->unknown_1c_ = (short)var4;
    var2->unknown_20_ = var3;
    void* var7 = ((char*)GetGameResources()) + 0x3000;
#if defined(jpn)
    void* var8 = *(void**)((char*)var7 + 0x524);
#else
    void* var8 = *(void**)((char*)var7 + 0x734);
#endif
    if (var8 != NULL && *((unsigned char*)var8 + 3) != 0) {
        unsigned short var9 = *(unsigned short*)((char*)var8 + 8);
        if (var9 == 0x733d || var9 == 0x7340) {
            var2->unknown_69_ = 1;
        }
    }
    SetZoneEntry_0200fcfc(var1, var2);
    return 1;
}
