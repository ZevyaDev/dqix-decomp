#include <globaldefs.h>

extern "C" int GetNextActionResult_ov000_0215e958(int battle);
extern "C" void AddActionResultMessage_ov000_0215a88c(void* battle, void* result, int messageId);
extern "C" void AppendTargetResult_ov000_0215ffc4(void* target, void* result, int listIndex);

struct ActionRunner_ov024_021e2bd0 { char unknown_0_[0xc]; void* pTarget_c_; void* pBattle_10_; };

// USA: AddExtraTargetResult_ov024_021e8ca0
extern "C" ARM void* AddExtraTargetResult_ov024_021e8ca0(struct ActionRunner_ov024_021e2bd0* actionRunner, int messageId) {
	void* result = (void*)GetNextActionResult_ov000_0215e958((int)actionRunner->pBattle_10_);
	if (!result) return 0;
	AddActionResultMessage_ov000_0215a88c(actionRunner->pBattle_10_, result, messageId);
	AppendTargetResult_ov000_0215ffc4(actionRunner->pTarget_c_, result, 1);
	((unsigned char*)actionRunner->pBattle_10_)[0x8e02] = ((unsigned char*)actionRunner->pBattle_10_)[0x8e02] + 1;
	return result;
}
