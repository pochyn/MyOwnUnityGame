#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GameManager
struct GameManager_t2252321495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputManager
struct  InputManager_t1610719423  : public MonoBehaviour_t1158329972
{
public:
	// GameManager InputManager::gm
	GameManager_t2252321495 * ___gm_2;

public:
	inline static int32_t get_offset_of_gm_2() { return static_cast<int32_t>(offsetof(InputManager_t1610719423, ___gm_2)); }
	inline GameManager_t2252321495 * get_gm_2() const { return ___gm_2; }
	inline GameManager_t2252321495 ** get_address_of_gm_2() { return &___gm_2; }
	inline void set_gm_2(GameManager_t2252321495 * value)
	{
		___gm_2 = value;
		Il2CppCodeGenWriteBarrier(&___gm_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
