#pragma once

#include "Filesystem/FileIO.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "World/ZoneResourceInitialization.h"
#include "Graphics/TextureArena.h"

struct Struct_020151cc {
    unsigned int unknown_0_;
    int unknown_4_;
    char unknown_8_[8];
};

struct Struct_020e6f48 {
    Struct_020151cc unknown_0_[6];
};

struct Struct_02014d80 {
    char unknown_0_[0x20];
    int unknown_20_;
};

extern "C" void *GetZoneEntry_0200fd0c(GameState *gameState);
extern "C" void func_02014d18(int arg0, char *arg1, char *arg2);
extern char data_020ef1e8[];
extern const Struct_020e6f48 data_020e6f48;
