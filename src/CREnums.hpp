#ifndef _A_CR_ENUMS_HPP_
#define _A_CR_ENUMS_HPP_
#include <vector>
#include <string>

// I put these in their own header because they're gonna be like, really big

enum CRInstruction {
	OP_NOP = 0x0,
	OP_EXIT = 0x1,
	OP_SET_GAME_VALUE = 0x2,
	OP_SET_INSTANCE_VAR = 0x3,
	OP_SET_FIELD = 0x4,
	OP_SET_ARRAY = 0x5,
	OP_BIND_VARS = 0x6,
	OP_DEREF = 0x7,
	OP_RESET_DEREF = 0x8,
	OP_RUN_INTERNAL_FUNC = 0x9,
	OP_RUN_SCRIPT = 0xA,
	OP_TEST_VAL = 0xB,
	OP_TEST_VAL_NOT = 0xC,
	OP_TEST_VALS_EQUAL = 0xD,
	OP_CHANGE_CONTEXT = 0xE,
	OP_REVERT_CONTEXT = 0xF,
	OP_SET_STACK = 0x10,
	OP_JUMP = 0x11,
	OP_JUMP_LONG = 0x12,
	OP_JUMP_BACK = 0x13,
	OP_JUMP_BACK_LONG = 0x14,
	OP_STACK_PUSH = 0x15,
	OP_STACK_POP = 0x16,
	OP_RETURN = 0x17
};

enum CRSetMethod {
	SM_ASSIGN = 0,
	SM_ADD = 1,
	SM_SUBTRACT = 2,
	SM_MULTIPLY = 3,
	SM_DIVIDE = 4,
	SM_BITWISE_OR = 5,
	SM_BITWISE_AND = 6,
	SM_BITWISE_XOR = 7
};

enum CRVarType {
	VARTYPE_INSTANCE,
	VARTYPE_FIELD,
	VARTYPE_GAME
};

enum CROperator {
	OPERATOR_STOP = 0x0,
	OPERATOR_ADD = 0x1,
	OPERATOR_SUBTRACT = 0x2,
	OPERATOR_MULTIPLY = 0x3,
	OPERATOR_DIVIDE = 0x4,
	OPERATOR_MOD = 0x5,
	OPERATOR_DIV = 0x6,
	OPERATOR_EQUALS = 0x7,
	OPERATOR_NOT_EQUAL = 0x8,
	OPERATOR_LT = 0x9,
	OPERATOR_LTE = 0xA,
	OPERATOR_GT = 0xB,
	OPERATOR_GTE = 0xC,
	OPERATOR_BITWISE_OR = 0xD,
	OPERATOR_BOOLEAN_OR = 0xE,
	OPERATOR_BITWISE_AND = 0xF,
	OPERATOR_BOOLEAN_AND = 0x10,
	OPERATOR_BITWISE_XOR = 0x11,
	OPERATOR_BOOLEAN_XOR = 0x12,
	OPERATOR_LSHIFT = 0x13,
	OPERATOR_RSHIFT = 0x14,
	OPERATOR_DEREF = 0x15,

	EVMOD_NOT = 0x16,
	EVMOD_NEGATIVE = 0x17,
	EVMOD_TILDE = 0x18
};

enum CRExpVType {
	EVTYPE_NONE = 0x0,
	EVTYPE_VAL = 0x1,
	EVTYPE_GAME_VALUE = 0x2,
	EVTYPE_FIELD = 0x3,
	EVTYPE_ARRAY = 0x4,
	EVTYPE_INSTANCEVAR = 0x5,
	EVTYPE_INTERNAL_FUNC = 0x6,
	EVTYPE_SCRIPT = 0x7,
	EVTYPE_STACK = 0x8,
};

enum CRInternalFunction {
	COS,
	EXECUTE_STRING,
	FILE_BIN_OPEN,
	FILE_BIN_CLOSE,
	FILE_BIN_READ_BYTE,
	FILE_BIN_WRITE_BYTE,
	FILE_EXISTS,
	FLOOR,
	GAME_RESTART,
	INSTANCE_CREATE,
	INSTANCE_DESTROY,
	INSTANCE_EXISTS,
	INSTANCE_NUMBER,
	IRANDOM,
	IRANDOM_RANGE,
	KEYBOARD_CHECK,
	KEYBOARD_CHECK_DIRECT,
	KEYBOARD_CHECK_PRESSED,
	KEYBOARD_CHECK_RELEASED,
	MAKE_COLOR_HSV,
	MOVE_WRAP,
	ORD,
	PLACE_MEETING,
	POINT_DIRECTION,
	RANDOM,
	RANDOM_RANGE,
	RANDOM_GET_SEED,
	RANDOM_SET_SEED,
	ROOM_GOTO,
	ROOM_GOTO_NEXT,
	ROOM_GOTO_PREVIOUS,
	SIN,
	SOUND_PLAY,
	STRING,
	_INTERNAL_FUNC_COUNT // As long as this one is last, it'll tell us how many internal functions are in this enum. So don't move it.
};

enum CRGameVar {
	HEALTH,
	LIVES,
	MOUSE_X,
	MOUSE_Y,
	ROOM,
	ROOM_SPEED,
	ROOM_HEIGHT,
	ROOM_WIDTH,
	_GAME_VALUE_COUNT // As long as this one is last, it'll tell us how many things are in this enum. So don't move it.
};

enum CRInstanceVar {
	IV_INSTANCE_ID,
	IV_OBJECT_INDEX,
	IV_SOLID,
	IV_VISIBLE,
	IV_PERSISTENT,
	IV_DEPTH,
	IV_ALARM,
	IV_SPRITE_INDEX,
	IV_IMAGE_ALPHA,
	IV_IMAGE_BLEND,
	IV_IMAGE_INDEX,
	IV_IMAGE_SPEED,
	IV_IMAGE_XSCALE,
	IV_IMAGE_YSCALE,
	IV_IMAGE_ANGLE,
	IV_MASK_INDEX,
	IV_DIRECTION,
	IV_FRICTION,
	IV_GRAVITY,
	IV_GRAVITY_DIRECTION,
	IV_HSPEED,
	IV_VSPEED,
	IV_SPEED,
	IV_X,
	IV_Y,
	IV_XPREVIOUS,
	IV_YPREVIOUS,
	IV_XSTART,
	IV_YSTART,
	IV_PATH_INDEX,
	IV_PATH_POSITION,
	IV_PATH_POSITIONPREVIOUS,
	IV_PATH_SPEED,
	IV_PATH_SCALE,
	IV_PATH_ORIENTATION,
	IV_PATH_ENDACTION,
	IV_TIMELINE_INDEX,
	IV_TIMELINE_RUNNING,
	IV_TIMELINE_SPEED,
	IV_TIMELINE_POSITION,
	IV_TIMELINE_LOOP,

	IV_SPRITE_WIDTH,
	IV_SPRITE_HEIGHT,
	IV_BBOX_LEFT,
	IV_BBOX_RIGHT,
	IV_BBOX_BOTTOM,
	IV_BBOX_TOP,
	_INSTANCE_VAR_COUNT // As long as this one is last, it'll tell us how many things are in this enum. So don't move it.
};

enum CRSpecialNames {
	SP_SELF,
	SP_OTHER,
	SP_ALL,
	SP_NOONE,
	SP_GLOBAL
};

#endif