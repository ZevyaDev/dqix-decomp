#include <globaldefs.h>
#include "GameState/GameState.h"

union ScriptValueData_ov017_021d60f4 { int intValue_0_; float floatValue_0_; };
struct ScriptValue_ov001_0215f344 { int type_0_; ScriptValueData_ov017_021d60f4 value_4_; };
struct ScriptValue_ov001_0216089c { int type_0_; int* pVariable_4_; };

extern "C" ARM int GetScriptValueAsInt_ov017_021d60f4(ScriptValue_ov001_0215f344* value);
extern "C" ARM void SetScriptRefInt_ov017_021d6134(ScriptValue_ov001_0216089c* value, int number);
extern "C" GameObject* func_ov023_021e8f28(int arg0);

struct Struct_ov023_021e94cc {
    ScriptValue_ov001_0215f344 unknown_0_; // offset 0
    ScriptValue_ov001_0215f344 unknown_8_;  // offset 8
    ScriptValue_ov001_0216089c unknown_10_;             // offset 0x10
};

struct Struct_ov023_021e94cc_2 { unsigned int unknown_0_0_ : 10; unsigned int unknown_1_2_ : 10; unsigned int unknown_2_4_ : 10; };

struct Struct_ov023_021e94cc_3 {
    struct Struct_ov023_021e94cc_2 unknown_0_;   // offset 0
    struct Struct_ov023_021e94cc_2 unknown_4_;   // offset 4
    struct Struct_ov023_021e94cc_2 unknown_8_; // offset 8
    struct Struct_ov023_021e94cc_2 unknown_c_; // offset 0xc
};

// USA: func_ov023_021e94cc
extern "C" ARM int func_ov023_021e94cc(Struct_ov023_021e94cc* arg0) {
#if defined(jpn)
 enum { Enum_ov023_021e94cc_336=0x144 };
#else
 enum { Enum_ov023_021e94cc_336=0x150 };
#endif
    GameState::GetInstance();
    int var0 = GetScriptValueAsInt_ov017_021d60f4(&arg0->unknown_0_);
    GameObject* var1 = func_ov023_021e8f28(var0);
    if (var1 == 0) {
        return 0;
    }
    int var2 = GetScriptValueAsInt_ov017_021d60f4(&arg0->unknown_8_);
    switch (var2) {
    case 0: {
        unsigned short var3 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_0_.unknown_0_0_;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var3);
        break;
    }
    case 1: {
        unsigned short var4 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_0_.unknown_1_2_;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var4);
        break;
    }
    case 2: {
        unsigned short var5 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_0_.unknown_2_4_;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var5);
        break;
    }
    case 3: {
        unsigned short var6 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_4_.unknown_0_0_;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var6);
        break;
    }
    case 4: {
        unsigned short var7 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_4_.unknown_1_2_;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var7);
        break;
    }
    case 5: {
        unsigned short var8 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_4_.unknown_2_4_;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var8);
        break;
    }
    case 6: {
        unsigned short var9 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_8_.unknown_0_0_;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var9);
        break;
    }
    case 7: {
        unsigned short var10 = var1->baseStats_->primaryStats.maxHP;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var10);
        break;
    }
    case 8: {
        unsigned short var11 = var1->baseStats_->primaryStats.maxMP;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var11);
        break;
    }
    case 9: {
        unsigned short var12 = var1->baseStats_->primaryStats.attack;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var12);
        break;
    }
    case 10: {
        unsigned short var13 = var1->baseStats_->primaryStats.defense;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var13);
        break;
    }
    case 11: {
        unsigned short var14 = (*(struct Struct_ov023_021e94cc_3**)((char*)var1 + Enum_ov023_021e94cc_336))->unknown_c_.unknown_0_0_;
        SetScriptRefInt_ov017_021d6134(&arg0->unknown_10_, var14);
        break;
    }
    }
    return 1;
}
