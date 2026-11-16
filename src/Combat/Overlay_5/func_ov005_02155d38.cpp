#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Graphics/SPRSprite.h"
#include "Graphics/TextureArena.h"

struct TextureVRAMArea_0203d028;
struct Struct_02012fa4;

struct Struct_ov005_021556e4_2 {
	char unknown_0_[4];
	struct TextureVRAMArea_0203d028* unknown_4_;
	struct Struct_02012fa4* unknown_8_;
	char unknown_c_[0x18 - 0xc];
	short unknown_18_;
};

// USA: func_ov005_02155d38
extern "C" ARM void func_ov005_02155d38(Struct_ov005_021556e4_2* arg0) {
	if (arg0->unknown_4_) ((TextureArena*)(arg0->unknown_4_))->Reset();
	if (arg0->unknown_8_) ((SPRSprite*)(arg0->unknown_8_))->Release();
	arg0->unknown_18_ = -1;
}
