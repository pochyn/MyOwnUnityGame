#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"

// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.UI.Image
struct Image_t2042527209;
// Tile[0...,0...]
struct TileU5BU2CU5D_t1358904254;
// System.Collections.Generic.List`1<Tile[]>
struct List_1_t728025385;
// System.Collections.Generic.List`1<Tile>
struct List_1_t2098562912;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// GameState GameManager::State
	int32_t ___State_2;
	// System.Single GameManager::delay
	float ___delay_3;
	// System.Boolean GameManager::moveMade
	bool ___moveMade_4;
	// System.Boolean[] GameManager::lineMoveComplete
	BooleanU5BU5D_t3568034315* ___lineMoveComplete_5;
	// UnityEngine.GameObject GameManager::YouWonText
	GameObject_t1756533147 * ___YouWonText_6;
	// UnityEngine.GameObject GameManager::GameOverText
	GameObject_t1756533147 * ___GameOverText_7;
	// UnityEngine.UI.Text GameManager::GameOverScoreText
	Text_t356221433 * ___GameOverScoreText_8;
	// UnityEngine.UI.Text GameManager::LevelTop
	Text_t356221433 * ___LevelTop_9;
	// UnityEngine.GameObject GameManager::GameOverPanel
	GameObject_t1756533147 * ___GameOverPanel_10;
	// UnityEngine.GameObject GameManager::ContinueButtonWon
	GameObject_t1756533147 * ___ContinueButtonWon_11;
	// UnityEngine.GameObject GameManager::ContinueButtonLoose
	GameObject_t1756533147 * ___ContinueButtonLoose_12;
	// UnityEngine.GameObject GameManager::MainPanel
	GameObject_t1756533147 * ___MainPanel_13;
	// System.Single GameManager::time
	float ___time_14;
	// UnityEngine.UI.Text GameManager::TimeText
	Text_t356221433 * ___TimeText_15;
	// UnityEngine.UI.Text GameManager::TimeLapsText
	Text_t356221433 * ___TimeLapsText_16;
	// UnityEngine.UI.Text GameManager::TwoText
	Text_t356221433 * ___TwoText_17;
	// UnityEngine.UI.Text GameManager::FourText
	Text_t356221433 * ___FourText_18;
	// UnityEngine.UI.Text GameManager::EightText
	Text_t356221433 * ___EightText_19;
	// UnityEngine.UI.Text GameManager::BlackHole
	Text_t356221433 * ___BlackHole_20;
	// UnityEngine.AudioClip GameManager::otherClip
	AudioClip_t1932558630 * ___otherClip_21;
	// UnityEngine.AudioClip GameManager::mainClip
	AudioClip_t1932558630 * ___mainClip_22;
	// UnityEngine.UI.Image GameManager::lvl1Aim
	Image_t2042527209 * ___lvl1Aim_23;
	// Tile[0...,0...] GameManager::AllTiles
	TileU5BU2CU5D_t1358904254* ___AllTiles_24;
	// System.Collections.Generic.List`1<Tile[]> GameManager::columns
	List_1_t728025385 * ___columns_25;
	// System.Collections.Generic.List`1<Tile[]> GameManager::rows
	List_1_t728025385 * ___rows_26;
	// System.Collections.Generic.List`1<Tile> GameManager::EmptyTiles
	List_1_t2098562912 * ___EmptyTiles_27;

public:
	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_delay_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___delay_3)); }
	inline float get_delay_3() const { return ___delay_3; }
	inline float* get_address_of_delay_3() { return &___delay_3; }
	inline void set_delay_3(float value)
	{
		___delay_3 = value;
	}

	inline static int32_t get_offset_of_moveMade_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___moveMade_4)); }
	inline bool get_moveMade_4() const { return ___moveMade_4; }
	inline bool* get_address_of_moveMade_4() { return &___moveMade_4; }
	inline void set_moveMade_4(bool value)
	{
		___moveMade_4 = value;
	}

	inline static int32_t get_offset_of_lineMoveComplete_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lineMoveComplete_5)); }
	inline BooleanU5BU5D_t3568034315* get_lineMoveComplete_5() const { return ___lineMoveComplete_5; }
	inline BooleanU5BU5D_t3568034315** get_address_of_lineMoveComplete_5() { return &___lineMoveComplete_5; }
	inline void set_lineMoveComplete_5(BooleanU5BU5D_t3568034315* value)
	{
		___lineMoveComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___lineMoveComplete_5, value);
	}

	inline static int32_t get_offset_of_YouWonText_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___YouWonText_6)); }
	inline GameObject_t1756533147 * get_YouWonText_6() const { return ___YouWonText_6; }
	inline GameObject_t1756533147 ** get_address_of_YouWonText_6() { return &___YouWonText_6; }
	inline void set_YouWonText_6(GameObject_t1756533147 * value)
	{
		___YouWonText_6 = value;
		Il2CppCodeGenWriteBarrier(&___YouWonText_6, value);
	}

	inline static int32_t get_offset_of_GameOverText_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___GameOverText_7)); }
	inline GameObject_t1756533147 * get_GameOverText_7() const { return ___GameOverText_7; }
	inline GameObject_t1756533147 ** get_address_of_GameOverText_7() { return &___GameOverText_7; }
	inline void set_GameOverText_7(GameObject_t1756533147 * value)
	{
		___GameOverText_7 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverText_7, value);
	}

	inline static int32_t get_offset_of_GameOverScoreText_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___GameOverScoreText_8)); }
	inline Text_t356221433 * get_GameOverScoreText_8() const { return ___GameOverScoreText_8; }
	inline Text_t356221433 ** get_address_of_GameOverScoreText_8() { return &___GameOverScoreText_8; }
	inline void set_GameOverScoreText_8(Text_t356221433 * value)
	{
		___GameOverScoreText_8 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverScoreText_8, value);
	}

	inline static int32_t get_offset_of_LevelTop_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___LevelTop_9)); }
	inline Text_t356221433 * get_LevelTop_9() const { return ___LevelTop_9; }
	inline Text_t356221433 ** get_address_of_LevelTop_9() { return &___LevelTop_9; }
	inline void set_LevelTop_9(Text_t356221433 * value)
	{
		___LevelTop_9 = value;
		Il2CppCodeGenWriteBarrier(&___LevelTop_9, value);
	}

	inline static int32_t get_offset_of_GameOverPanel_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___GameOverPanel_10)); }
	inline GameObject_t1756533147 * get_GameOverPanel_10() const { return ___GameOverPanel_10; }
	inline GameObject_t1756533147 ** get_address_of_GameOverPanel_10() { return &___GameOverPanel_10; }
	inline void set_GameOverPanel_10(GameObject_t1756533147 * value)
	{
		___GameOverPanel_10 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverPanel_10, value);
	}

	inline static int32_t get_offset_of_ContinueButtonWon_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___ContinueButtonWon_11)); }
	inline GameObject_t1756533147 * get_ContinueButtonWon_11() const { return ___ContinueButtonWon_11; }
	inline GameObject_t1756533147 ** get_address_of_ContinueButtonWon_11() { return &___ContinueButtonWon_11; }
	inline void set_ContinueButtonWon_11(GameObject_t1756533147 * value)
	{
		___ContinueButtonWon_11 = value;
		Il2CppCodeGenWriteBarrier(&___ContinueButtonWon_11, value);
	}

	inline static int32_t get_offset_of_ContinueButtonLoose_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___ContinueButtonLoose_12)); }
	inline GameObject_t1756533147 * get_ContinueButtonLoose_12() const { return ___ContinueButtonLoose_12; }
	inline GameObject_t1756533147 ** get_address_of_ContinueButtonLoose_12() { return &___ContinueButtonLoose_12; }
	inline void set_ContinueButtonLoose_12(GameObject_t1756533147 * value)
	{
		___ContinueButtonLoose_12 = value;
		Il2CppCodeGenWriteBarrier(&___ContinueButtonLoose_12, value);
	}

	inline static int32_t get_offset_of_MainPanel_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___MainPanel_13)); }
	inline GameObject_t1756533147 * get_MainPanel_13() const { return ___MainPanel_13; }
	inline GameObject_t1756533147 ** get_address_of_MainPanel_13() { return &___MainPanel_13; }
	inline void set_MainPanel_13(GameObject_t1756533147 * value)
	{
		___MainPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&___MainPanel_13, value);
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___time_14)); }
	inline float get_time_14() const { return ___time_14; }
	inline float* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(float value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_TimeText_15() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___TimeText_15)); }
	inline Text_t356221433 * get_TimeText_15() const { return ___TimeText_15; }
	inline Text_t356221433 ** get_address_of_TimeText_15() { return &___TimeText_15; }
	inline void set_TimeText_15(Text_t356221433 * value)
	{
		___TimeText_15 = value;
		Il2CppCodeGenWriteBarrier(&___TimeText_15, value);
	}

	inline static int32_t get_offset_of_TimeLapsText_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___TimeLapsText_16)); }
	inline Text_t356221433 * get_TimeLapsText_16() const { return ___TimeLapsText_16; }
	inline Text_t356221433 ** get_address_of_TimeLapsText_16() { return &___TimeLapsText_16; }
	inline void set_TimeLapsText_16(Text_t356221433 * value)
	{
		___TimeLapsText_16 = value;
		Il2CppCodeGenWriteBarrier(&___TimeLapsText_16, value);
	}

	inline static int32_t get_offset_of_TwoText_17() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___TwoText_17)); }
	inline Text_t356221433 * get_TwoText_17() const { return ___TwoText_17; }
	inline Text_t356221433 ** get_address_of_TwoText_17() { return &___TwoText_17; }
	inline void set_TwoText_17(Text_t356221433 * value)
	{
		___TwoText_17 = value;
		Il2CppCodeGenWriteBarrier(&___TwoText_17, value);
	}

	inline static int32_t get_offset_of_FourText_18() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___FourText_18)); }
	inline Text_t356221433 * get_FourText_18() const { return ___FourText_18; }
	inline Text_t356221433 ** get_address_of_FourText_18() { return &___FourText_18; }
	inline void set_FourText_18(Text_t356221433 * value)
	{
		___FourText_18 = value;
		Il2CppCodeGenWriteBarrier(&___FourText_18, value);
	}

	inline static int32_t get_offset_of_EightText_19() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___EightText_19)); }
	inline Text_t356221433 * get_EightText_19() const { return ___EightText_19; }
	inline Text_t356221433 ** get_address_of_EightText_19() { return &___EightText_19; }
	inline void set_EightText_19(Text_t356221433 * value)
	{
		___EightText_19 = value;
		Il2CppCodeGenWriteBarrier(&___EightText_19, value);
	}

	inline static int32_t get_offset_of_BlackHole_20() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___BlackHole_20)); }
	inline Text_t356221433 * get_BlackHole_20() const { return ___BlackHole_20; }
	inline Text_t356221433 ** get_address_of_BlackHole_20() { return &___BlackHole_20; }
	inline void set_BlackHole_20(Text_t356221433 * value)
	{
		___BlackHole_20 = value;
		Il2CppCodeGenWriteBarrier(&___BlackHole_20, value);
	}

	inline static int32_t get_offset_of_otherClip_21() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___otherClip_21)); }
	inline AudioClip_t1932558630 * get_otherClip_21() const { return ___otherClip_21; }
	inline AudioClip_t1932558630 ** get_address_of_otherClip_21() { return &___otherClip_21; }
	inline void set_otherClip_21(AudioClip_t1932558630 * value)
	{
		___otherClip_21 = value;
		Il2CppCodeGenWriteBarrier(&___otherClip_21, value);
	}

	inline static int32_t get_offset_of_mainClip_22() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mainClip_22)); }
	inline AudioClip_t1932558630 * get_mainClip_22() const { return ___mainClip_22; }
	inline AudioClip_t1932558630 ** get_address_of_mainClip_22() { return &___mainClip_22; }
	inline void set_mainClip_22(AudioClip_t1932558630 * value)
	{
		___mainClip_22 = value;
		Il2CppCodeGenWriteBarrier(&___mainClip_22, value);
	}

	inline static int32_t get_offset_of_lvl1Aim_23() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lvl1Aim_23)); }
	inline Image_t2042527209 * get_lvl1Aim_23() const { return ___lvl1Aim_23; }
	inline Image_t2042527209 ** get_address_of_lvl1Aim_23() { return &___lvl1Aim_23; }
	inline void set_lvl1Aim_23(Image_t2042527209 * value)
	{
		___lvl1Aim_23 = value;
		Il2CppCodeGenWriteBarrier(&___lvl1Aim_23, value);
	}

	inline static int32_t get_offset_of_AllTiles_24() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___AllTiles_24)); }
	inline TileU5BU2CU5D_t1358904254* get_AllTiles_24() const { return ___AllTiles_24; }
	inline TileU5BU2CU5D_t1358904254** get_address_of_AllTiles_24() { return &___AllTiles_24; }
	inline void set_AllTiles_24(TileU5BU2CU5D_t1358904254* value)
	{
		___AllTiles_24 = value;
		Il2CppCodeGenWriteBarrier(&___AllTiles_24, value);
	}

	inline static int32_t get_offset_of_columns_25() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___columns_25)); }
	inline List_1_t728025385 * get_columns_25() const { return ___columns_25; }
	inline List_1_t728025385 ** get_address_of_columns_25() { return &___columns_25; }
	inline void set_columns_25(List_1_t728025385 * value)
	{
		___columns_25 = value;
		Il2CppCodeGenWriteBarrier(&___columns_25, value);
	}

	inline static int32_t get_offset_of_rows_26() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___rows_26)); }
	inline List_1_t728025385 * get_rows_26() const { return ___rows_26; }
	inline List_1_t728025385 ** get_address_of_rows_26() { return &___rows_26; }
	inline void set_rows_26(List_1_t728025385 * value)
	{
		___rows_26 = value;
		Il2CppCodeGenWriteBarrier(&___rows_26, value);
	}

	inline static int32_t get_offset_of_EmptyTiles_27() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___EmptyTiles_27)); }
	inline List_1_t2098562912 * get_EmptyTiles_27() const { return ___EmptyTiles_27; }
	inline List_1_t2098562912 ** get_address_of_EmptyTiles_27() { return &___EmptyTiles_27; }
	inline void set_EmptyTiles_27(List_1_t2098562912 * value)
	{
		___EmptyTiles_27 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyTiles_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
