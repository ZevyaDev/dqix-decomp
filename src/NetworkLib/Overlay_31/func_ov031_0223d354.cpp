#include <globaldefs.h>

struct InputState_ov031_0223d354 { unsigned char unknown_0_[0x32]; unsigned short pressedKeys_32_; };
struct Struct_ov031_02290d40_3 { unsigned char unknown_0_[4]; struct InputState_ov031_0223d354* pInputState_4_; };
extern struct Struct_ov031_02290d40_3 data_ov031_02290d40;

// USA: AreKeysPressed_ov031_0223d354
extern "C" ARM int AreKeysPressed_ov031_0223d354(int keys) {
	int isLidClosed = *(unsigned short*)0x27fffa8 & 0x8000;
	if (isLidClosed >> 15) {
		return 0;
	}
	int pressedKeys = data_ov031_02290d40.pInputState_4_->pressedKeys_32_;
	int matchingKeys = keys & pressedKeys;
	return (keys == matchingKeys) ? 1 : 0;
}
