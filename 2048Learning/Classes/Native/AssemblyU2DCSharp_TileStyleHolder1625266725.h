#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TileStyleHolder
struct TileStyleHolder_t1625266725;
// TileStyle[]
struct TileStyleU5BU5D_t2599963468;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileStyleHolder
struct  TileStyleHolder_t1625266725  : public MonoBehaviour_t1158329972
{
public:
	// TileStyle[] TileStyleHolder::TileStyles
	TileStyleU5BU5D_t2599963468* ___TileStyles_3;

public:
	inline static int32_t get_offset_of_TileStyles_3() { return static_cast<int32_t>(offsetof(TileStyleHolder_t1625266725, ___TileStyles_3)); }
	inline TileStyleU5BU5D_t2599963468* get_TileStyles_3() const { return ___TileStyles_3; }
	inline TileStyleU5BU5D_t2599963468** get_address_of_TileStyles_3() { return &___TileStyles_3; }
	inline void set_TileStyles_3(TileStyleU5BU5D_t2599963468* value)
	{
		___TileStyles_3 = value;
		Il2CppCodeGenWriteBarrier(&___TileStyles_3, value);
	}
};

struct TileStyleHolder_t1625266725_StaticFields
{
public:
	// TileStyleHolder TileStyleHolder::Instance
	TileStyleHolder_t1625266725 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(TileStyleHolder_t1625266725_StaticFields, ___Instance_2)); }
	inline TileStyleHolder_t1625266725 * get_Instance_2() const { return ___Instance_2; }
	inline TileStyleHolder_t1625266725 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(TileStyleHolder_t1625266725 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
