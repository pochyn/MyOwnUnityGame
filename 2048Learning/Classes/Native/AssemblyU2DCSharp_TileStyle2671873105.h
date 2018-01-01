#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileStyle
struct  TileStyle_t2671873105  : public Il2CppObject
{
public:
	// System.Int32 TileStyle::Number
	int32_t ___Number_0;
	// UnityEngine.Color32 TileStyle::TileColor
	Color32_t874517518  ___TileColor_1;
	// UnityEngine.Color32 TileStyle::TextColor
	Color32_t874517518  ___TextColor_2;
	// UnityEngine.Sprite TileStyle::sprite
	Sprite_t309593783 * ___sprite_3;

public:
	inline static int32_t get_offset_of_Number_0() { return static_cast<int32_t>(offsetof(TileStyle_t2671873105, ___Number_0)); }
	inline int32_t get_Number_0() const { return ___Number_0; }
	inline int32_t* get_address_of_Number_0() { return &___Number_0; }
	inline void set_Number_0(int32_t value)
	{
		___Number_0 = value;
	}

	inline static int32_t get_offset_of_TileColor_1() { return static_cast<int32_t>(offsetof(TileStyle_t2671873105, ___TileColor_1)); }
	inline Color32_t874517518  get_TileColor_1() const { return ___TileColor_1; }
	inline Color32_t874517518 * get_address_of_TileColor_1() { return &___TileColor_1; }
	inline void set_TileColor_1(Color32_t874517518  value)
	{
		___TileColor_1 = value;
	}

	inline static int32_t get_offset_of_TextColor_2() { return static_cast<int32_t>(offsetof(TileStyle_t2671873105, ___TextColor_2)); }
	inline Color32_t874517518  get_TextColor_2() const { return ___TextColor_2; }
	inline Color32_t874517518 * get_address_of_TextColor_2() { return &___TextColor_2; }
	inline void set_TextColor_2(Color32_t874517518  value)
	{
		___TextColor_2 = value;
	}

	inline static int32_t get_offset_of_sprite_3() { return static_cast<int32_t>(offsetof(TileStyle_t2671873105, ___sprite_3)); }
	inline Sprite_t309593783 * get_sprite_3() const { return ___sprite_3; }
	inline Sprite_t309593783 ** get_address_of_sprite_3() { return &___sprite_3; }
	inline void set_sprite_3(Sprite_t309593783 * value)
	{
		___sprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
