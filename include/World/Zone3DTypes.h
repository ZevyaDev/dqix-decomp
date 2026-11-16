#pragma once

#include "World/Zone3D.h"
#include "World/ZoneLootableRecord.h"
#include "World/BmdjScriptNode.h"
#include "World/ZoneFeatures.h"

struct Struct_020133fc
{
    Vector3i unknown_0_;
    short unknown_c_;
    short unknown_e_;
    unsigned short unknown_10_;
    short unknown_12_;
    signed char unknown_14_;
    unsigned char unknown_15_;
    unsigned char unknown_16_;
    unsigned char unknown_17_;
    unsigned char unknown_18_;
    unsigned char unknown_19_;
    short unknown_1a_;
    unsigned short unknown_1c_;
    unsigned char unknown_1e_[2];
    Struct_02012fa4* unknown_20_;
};

struct Struct_020236dc_3
{
    Vector3i unknown_0_;
    int unknown_c_;
    short unknown_10_;
    unsigned short unknown_12_;
    unsigned char unknown_14_;
};

extern "C"
{
    void func_0201403c(Zone3D* arg0);
    int func_02014108(Zone3D* arg0);
    int func_02014390(Zone3D* arg0, const void* arg1, unsigned int arg2);
    int func_020143d8(Zone3D* arg0, const void* arg1, unsigned int arg2);
    int func_02014414(Zone3D* arg0, const void* arg1, unsigned int arg2);
    bool func_0201445c(Zone3D* arg0, const void* arg1, unsigned int arg2, const char* arg3);
    void func_020145a8(Zone3D* arg0);
    int func_020146fc(Zone3D* arg0);
    int func_02014c04(Zone3D* arg0);
}
