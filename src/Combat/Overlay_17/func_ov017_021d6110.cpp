#include <globaldefs.h>

union ScriptValueData_ov017_021d6110 { int intValue_0_; float floatValue_0_; };
struct ScriptValue_ov017_021d6110_2 { int type_0_; ScriptValueData_ov017_021d6110 value_4_; };

// USA: GetScriptValueAsFloat_ov017_021d6110
extern "C" ARM float GetScriptValueAsFloat_ov017_021d6110(ScriptValue_ov017_021d6110_2 *value) {
	if (value->type_0_ != 0) {
		return value->value_4_.floatValue_0_;
	}
	return (float)value->value_4_.intValue_0_;
}
