#include <globaldefs.h>

struct ScriptValue_ov001_0216089c { int type_0_; int *pVariable_4_; };

// USA: SetScriptRefInt_ov017_021d6134
extern "C" ARM void SetScriptRefInt_ov017_021d6134(ScriptValue_ov001_0216089c *value, int number) {
	if (value->type_0_ == 3) {
		value->pVariable_4_[1] = number;
	}
}
