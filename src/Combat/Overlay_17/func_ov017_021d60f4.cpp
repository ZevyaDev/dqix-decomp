#include <globaldefs.h>

union ScriptValueData_ov017_021d60f4 { int intValue_0_; float floatValue_0_; };
struct ScriptValue_ov001_0215f344 { int type_0_; ScriptValueData_ov017_021d60f4 value_4_; };

// USA: GetScriptValueAsInt_ov017_021d60f4
extern "C" ARM int GetScriptValueAsInt_ov017_021d60f4(ScriptValue_ov001_0215f344 *value) {
	if (value->type_0_ != 1) {
		return value->value_4_.intValue_0_;
	}
	return (int)value->value_4_.floatValue_0_;
}
