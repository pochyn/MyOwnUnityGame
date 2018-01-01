#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile
struct  Tile_t2729441780  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Tile::mergedThisTurn
	bool ___mergedThisTurn_2;
	// System.Int32 Tile::indRow
	int32_t ___indRow_3;
	// System.Int32 Tile::indCol
	int32_t ___indCol_4;
	// System.Int32 Tile::number
	int32_t ___number_5;
	// UnityEngine.UI.Text Tile::TileText
	Text_t356221433 * ___TileText_6;
	// UnityEngine.UI.Image Tile::TileImage
	Image_t2042527209 * ___TileImage_7;
	// UnityEngine.Animator Tile::anim
	Animator_t69676727 * ___anim_8;

public:
	inline static int32_t get_offset_of_mergedThisTurn_2() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mergedThisTurn_2)); }
	inline bool get_mergedThisTurn_2() const { return ___mergedThisTurn_2; }
	inline bool* get_address_of_mergedThisTurn_2() { return &___mergedThisTurn_2; }
	inline void set_mergedThisTurn_2(bool value)
	{
		___mergedThisTurn_2 = value;
	}

	inline static int32_t get_offset_of_indRow_3() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___indRow_3)); }
	inline int32_t get_indRow_3() const { return ___indRow_3; }
	inline int32_t* get_address_of_indRow_3() { return &___indRow_3; }
	inline void set_indRow_3(int32_t value)
	{
		___indRow_3 = value;
	}

	inline static int32_t get_offset_of_indCol_4() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___indCol_4)); }
	inline int32_t get_indCol_4() const { return ___indCol_4; }
	inline int32_t* get_address_of_indCol_4() { return &___indCol_4; }
	inline void set_indCol_4(int32_t value)
	{
		___indCol_4 = value;
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___number_5)); }
	inline int32_t get_number_5() const { return ___number_5; }
	inline int32_t* get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(int32_t value)
	{
		___number_5 = value;
	}

	inline static int32_t get_offset_of_TileText_6() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___TileText_6)); }
	inline Text_t356221433 * get_TileText_6() const { return ___TileText_6; }
	inline Text_t356221433 ** get_address_of_TileText_6() { return &___TileText_6; }
	inline void set_TileText_6(Text_t356221433 * value)
	{
		___TileText_6 = value;
		Il2CppCodeGenWriteBarrier(&___TileText_6, value);
	}

	inline static int32_t get_offset_of_TileImage_7() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___TileImage_7)); }
	inline Image_t2042527209 * get_TileImage_7() const { return ___TileImage_7; }
	inline Image_t2042527209 ** get_address_of_TileImage_7() { return &___TileImage_7; }
	inline void set_TileImage_7(Image_t2042527209 * value)
	{
		___TileImage_7 = value;
		Il2CppCodeGenWriteBarrier(&___TileImage_7, value);
	}

	inline static int32_t get_offset_of_anim_8() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___anim_8)); }
	inline Animator_t69676727 * get_anim_8() const { return ___anim_8; }
	inline Animator_t69676727 ** get_address_of_anim_8() { return &___anim_8; }
	inline void set_anim_8(Animator_t69676727 * value)
	{
		___anim_8 = value;
		Il2CppCodeGenWriteBarrier(&___anim_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
