#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// GameManager
struct GameManager_t2252321495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchInputManager
struct  TouchInputManager_t3372913232  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TouchInputManager::fingerStartTime
	float ___fingerStartTime_2;
	// UnityEngine.Vector2 TouchInputManager::fingerStartPos
	Vector2_t2243707579  ___fingerStartPos_3;
	// System.Boolean TouchInputManager::isSwipe
	bool ___isSwipe_4;
	// System.Single TouchInputManager::minSwipeDist
	float ___minSwipeDist_5;
	// System.Single TouchInputManager::maxSwipeTime
	float ___maxSwipeTime_6;
	// GameManager TouchInputManager::gm
	GameManager_t2252321495 * ___gm_7;

public:
	inline static int32_t get_offset_of_fingerStartTime_2() { return static_cast<int32_t>(offsetof(TouchInputManager_t3372913232, ___fingerStartTime_2)); }
	inline float get_fingerStartTime_2() const { return ___fingerStartTime_2; }
	inline float* get_address_of_fingerStartTime_2() { return &___fingerStartTime_2; }
	inline void set_fingerStartTime_2(float value)
	{
		___fingerStartTime_2 = value;
	}

	inline static int32_t get_offset_of_fingerStartPos_3() { return static_cast<int32_t>(offsetof(TouchInputManager_t3372913232, ___fingerStartPos_3)); }
	inline Vector2_t2243707579  get_fingerStartPos_3() const { return ___fingerStartPos_3; }
	inline Vector2_t2243707579 * get_address_of_fingerStartPos_3() { return &___fingerStartPos_3; }
	inline void set_fingerStartPos_3(Vector2_t2243707579  value)
	{
		___fingerStartPos_3 = value;
	}

	inline static int32_t get_offset_of_isSwipe_4() { return static_cast<int32_t>(offsetof(TouchInputManager_t3372913232, ___isSwipe_4)); }
	inline bool get_isSwipe_4() const { return ___isSwipe_4; }
	inline bool* get_address_of_isSwipe_4() { return &___isSwipe_4; }
	inline void set_isSwipe_4(bool value)
	{
		___isSwipe_4 = value;
	}

	inline static int32_t get_offset_of_minSwipeDist_5() { return static_cast<int32_t>(offsetof(TouchInputManager_t3372913232, ___minSwipeDist_5)); }
	inline float get_minSwipeDist_5() const { return ___minSwipeDist_5; }
	inline float* get_address_of_minSwipeDist_5() { return &___minSwipeDist_5; }
	inline void set_minSwipeDist_5(float value)
	{
		___minSwipeDist_5 = value;
	}

	inline static int32_t get_offset_of_maxSwipeTime_6() { return static_cast<int32_t>(offsetof(TouchInputManager_t3372913232, ___maxSwipeTime_6)); }
	inline float get_maxSwipeTime_6() const { return ___maxSwipeTime_6; }
	inline float* get_address_of_maxSwipeTime_6() { return &___maxSwipeTime_6; }
	inline void set_maxSwipeTime_6(float value)
	{
		___maxSwipeTime_6 = value;
	}

	inline static int32_t get_offset_of_gm_7() { return static_cast<int32_t>(offsetof(TouchInputManager_t3372913232, ___gm_7)); }
	inline GameManager_t2252321495 * get_gm_7() const { return ___gm_7; }
	inline GameManager_t2252321495 ** get_address_of_gm_7() { return &___gm_7; }
	inline void set_gm_7(GameManager_t2252321495 * value)
	{
		___gm_7 = value;
		Il2CppCodeGenWriteBarrier(&___gm_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
