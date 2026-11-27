#include <globaldefs.h>

struct InputState_ov031_0223d49c {
	unsigned char unknown_0_[0x28];
	unsigned short touchX_28_;
	unsigned short touchY_2a_;
	unsigned char unknown_2c_[0xc];
	unsigned char unknown_38_0_:1, isTouchPressed_38_1_:1, unknown_38_2_:1, unknown_38_3_:1, unknown_38_4_:1, unknown_38_5_:1, unknown_38_6_:1, unknown_38_7_:1;
};
struct Struct_ov031_02290d40_7 { unsigned char unknown_0_[4]; struct InputState_ov031_0223d49c* pInputState_4_; };
extern struct Struct_ov031_02290d40_7 gInput_ov031_02290d40;

struct TouchRect_ov031_02248d8e { unsigned short left_0_, top_2_, right_4_, bottom_6_; };

// USA: IsTouchPressInRect_ov031_0223d49c
extern "C" ARM int IsTouchPressInRect_ov031_0223d49c(struct TouchRect_ov031_02248d8e* rect) {
	int isLidClosed = *(unsigned short*)0x27fffa8 & 0x8000;
	if (isLidClosed >> 15) return 0;
	struct InputState_ov031_0223d49c* inputState = gInput_ov031_02290d40.pInputState_4_;
	if (!inputState->isTouchPressed_38_1_) return 0;
	unsigned short x = inputState->touchX_28_;
	if (rect->left_0_ > x) return 0;
	if (rect->right_4_ < x) return 0;
	unsigned short y = inputState->touchY_2a_;
	if (rect->top_2_ > y) return 0;
	return (rect->bottom_6_ >= y) ? 1 : 0;
}
