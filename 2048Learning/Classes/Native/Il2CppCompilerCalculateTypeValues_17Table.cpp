#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyt2191537572.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analyt1068911718.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Tracka1304606600.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Tracka2256174789.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"
#include "AssemblyU2DCSharp_GameManager2252321495.h"
#include "AssemblyU2DCSharp_GameManager_U3CMoveOneLineUpInde1650293457.h"
#include "AssemblyU2DCSharp_GameManager_U3CMoveOneLineDownIn1783852095.h"
#include "AssemblyU2DCSharp_GameManager_U3CMoveCoroutineU3Ec1729936226.h"
#include "AssemblyU2DCSharp_MoveDirection2240699694.h"
#include "AssemblyU2DCSharp_InputManager1610719423.h"
#include "AssemblyU2DCSharp_MainMenu4009084430.h"
#include "AssemblyU2DCSharp_ScoreTracker1973445098.h"
#include "AssemblyU2DCSharp_Tile2729441780.h"
#include "AssemblyU2DCSharp_TileStyle2671873105.h"
#include "AssemblyU2DCSharp_TileStyleHolder1625266725.h"
#include "AssemblyU2DCSharp_TouchInputManager3372913232.h"
#include "AssemblyU2DCSharp_AutoGridLayout808228231.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1486305137.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1459944466.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (AnalyticsTracker_t2191537572), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1700[5] = 
{
	AnalyticsTracker_t2191537572::get_offset_of_m_EventName_2(),
	AnalyticsTracker_t2191537572::get_offset_of_m_Dict_3(),
	AnalyticsTracker_t2191537572::get_offset_of_m_PrevDictHash_4(),
	AnalyticsTracker_t2191537572::get_offset_of_m_TrackableProperty_5(),
	AnalyticsTracker_t2191537572::get_offset_of_m_Trigger_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (Trigger_t1068911718)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1701[8] = 
{
	Trigger_t1068911718::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (TrackableProperty_t1304606600), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[2] = 
{
	0,
	TrackableProperty_t1304606600::get_offset_of_m_Fields_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (FieldWithTarget_t2256174789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1703[6] = 
{
	FieldWithTarget_t2256174789::get_offset_of_m_ParamName_0(),
	FieldWithTarget_t2256174789::get_offset_of_m_Target_1(),
	FieldWithTarget_t2256174789::get_offset_of_m_FieldPath_2(),
	FieldWithTarget_t2256174789::get_offset_of_m_TypeString_3(),
	FieldWithTarget_t2256174789::get_offset_of_m_DoStatic_4(),
	FieldWithTarget_t2256174789::get_offset_of_m_StaticString_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (U3CModuleU3E_t3783534221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (GameState_t1561012519)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1705[4] = 
{
	GameState_t1561012519::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (GameManager_t2252321495), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1706[26] = 
{
	GameManager_t2252321495::get_offset_of_State_2(),
	GameManager_t2252321495::get_offset_of_delay_3(),
	GameManager_t2252321495::get_offset_of_moveMade_4(),
	GameManager_t2252321495::get_offset_of_lineMoveComplete_5(),
	GameManager_t2252321495::get_offset_of_YouWonText_6(),
	GameManager_t2252321495::get_offset_of_GameOverText_7(),
	GameManager_t2252321495::get_offset_of_GameOverScoreText_8(),
	GameManager_t2252321495::get_offset_of_LevelTop_9(),
	GameManager_t2252321495::get_offset_of_GameOverPanel_10(),
	GameManager_t2252321495::get_offset_of_ContinueButtonWon_11(),
	GameManager_t2252321495::get_offset_of_ContinueButtonLoose_12(),
	GameManager_t2252321495::get_offset_of_MainPanel_13(),
	GameManager_t2252321495::get_offset_of_time_14(),
	GameManager_t2252321495::get_offset_of_TimeText_15(),
	GameManager_t2252321495::get_offset_of_TimeLapsText_16(),
	GameManager_t2252321495::get_offset_of_TwoText_17(),
	GameManager_t2252321495::get_offset_of_FourText_18(),
	GameManager_t2252321495::get_offset_of_EightText_19(),
	GameManager_t2252321495::get_offset_of_BlackHole_20(),
	GameManager_t2252321495::get_offset_of_otherClip_21(),
	GameManager_t2252321495::get_offset_of_mainClip_22(),
	GameManager_t2252321495::get_offset_of_lvl1Aim_23(),
	GameManager_t2252321495::get_offset_of_AllTiles_24(),
	GameManager_t2252321495::get_offset_of_columns_25(),
	GameManager_t2252321495::get_offset_of_rows_26(),
	GameManager_t2252321495::get_offset_of_EmptyTiles_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (U3CMoveOneLineUpIndexCoroutineU3Ec__Iterator0_t1650293457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1707[6] = 
{
	U3CMoveOneLineUpIndexCoroutineU3Ec__Iterator0_t1650293457::get_offset_of_index_0(),
	U3CMoveOneLineUpIndexCoroutineU3Ec__Iterator0_t1650293457::get_offset_of_line_1(),
	U3CMoveOneLineUpIndexCoroutineU3Ec__Iterator0_t1650293457::get_offset_of_U24this_2(),
	U3CMoveOneLineUpIndexCoroutineU3Ec__Iterator0_t1650293457::get_offset_of_U24current_3(),
	U3CMoveOneLineUpIndexCoroutineU3Ec__Iterator0_t1650293457::get_offset_of_U24disposing_4(),
	U3CMoveOneLineUpIndexCoroutineU3Ec__Iterator0_t1650293457::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (U3CMoveOneLineDownIndexCoroutineU3Ec__Iterator1_t1783852095), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1708[6] = 
{
	U3CMoveOneLineDownIndexCoroutineU3Ec__Iterator1_t1783852095::get_offset_of_index_0(),
	U3CMoveOneLineDownIndexCoroutineU3Ec__Iterator1_t1783852095::get_offset_of_line_1(),
	U3CMoveOneLineDownIndexCoroutineU3Ec__Iterator1_t1783852095::get_offset_of_U24this_2(),
	U3CMoveOneLineDownIndexCoroutineU3Ec__Iterator1_t1783852095::get_offset_of_U24current_3(),
	U3CMoveOneLineDownIndexCoroutineU3Ec__Iterator1_t1783852095::get_offset_of_U24disposing_4(),
	U3CMoveOneLineDownIndexCoroutineU3Ec__Iterator1_t1783852095::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (U3CMoveCoroutineU3Ec__Iterator2_t1729936226), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1709[5] = 
{
	U3CMoveCoroutineU3Ec__Iterator2_t1729936226::get_offset_of_md_0(),
	U3CMoveCoroutineU3Ec__Iterator2_t1729936226::get_offset_of_U24this_1(),
	U3CMoveCoroutineU3Ec__Iterator2_t1729936226::get_offset_of_U24current_2(),
	U3CMoveCoroutineU3Ec__Iterator2_t1729936226::get_offset_of_U24disposing_3(),
	U3CMoveCoroutineU3Ec__Iterator2_t1729936226::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (MoveDirection_t2240699694)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1710[5] = 
{
	MoveDirection_t2240699694::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (InputManager_t1610719423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1711[1] = 
{
	InputManager_t1610719423::get_offset_of_gm_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (MainMenu_t4009084430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (ScoreTracker_t1973445098), -1, sizeof(ScoreTracker_t1973445098_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1713[4] = 
{
	ScoreTracker_t1973445098::get_offset_of_score_2(),
	ScoreTracker_t1973445098_StaticFields::get_offset_of_Instance_3(),
	ScoreTracker_t1973445098::get_offset_of_ScoreText_4(),
	ScoreTracker_t1973445098::get_offset_of_HighScoreText_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (Tile_t2729441780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1714[7] = 
{
	Tile_t2729441780::get_offset_of_mergedThisTurn_2(),
	Tile_t2729441780::get_offset_of_indRow_3(),
	Tile_t2729441780::get_offset_of_indCol_4(),
	Tile_t2729441780::get_offset_of_number_5(),
	Tile_t2729441780::get_offset_of_TileText_6(),
	Tile_t2729441780::get_offset_of_TileImage_7(),
	Tile_t2729441780::get_offset_of_anim_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (TileStyle_t2671873105), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1715[4] = 
{
	TileStyle_t2671873105::get_offset_of_Number_0(),
	TileStyle_t2671873105::get_offset_of_TileColor_1(),
	TileStyle_t2671873105::get_offset_of_TextColor_2(),
	TileStyle_t2671873105::get_offset_of_sprite_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (TileStyleHolder_t1625266725), -1, sizeof(TileStyleHolder_t1625266725_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1716[2] = 
{
	TileStyleHolder_t1625266725_StaticFields::get_offset_of_Instance_2(),
	TileStyleHolder_t1625266725::get_offset_of_TileStyles_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { sizeof (TouchInputManager_t3372913232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1717[6] = 
{
	TouchInputManager_t3372913232::get_offset_of_fingerStartTime_2(),
	TouchInputManager_t3372913232::get_offset_of_fingerStartPos_3(),
	TouchInputManager_t3372913232::get_offset_of_isSwipe_4(),
	TouchInputManager_t3372913232::get_offset_of_minSwipeDist_5(),
	TouchInputManager_t3372913232::get_offset_of_maxSwipeTime_6(),
	TouchInputManager_t3372913232::get_offset_of_gm_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1718 = { sizeof (AutoGridLayout_t808228231), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1718[3] = 
{
	AutoGridLayout_t808228231::get_offset_of_m_IsColumn_16(),
	AutoGridLayout_t808228231::get_offset_of_m_Column_17(),
	AutoGridLayout_t808228231::get_offset_of_m_Row_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1719 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305142), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1719[1] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D5827001C056C9FDFBECCEC3C4B214488CBF567C7_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1720 = { sizeof (U24ArrayTypeU3D8_t1459944466)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D8_t1459944466 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
