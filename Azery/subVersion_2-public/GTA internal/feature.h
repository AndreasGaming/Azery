/*
	Copyright 2016-2017 sub1to

	This file is part of subVersion 2 GTA:O Hack.

    subVersion 2 GTA:O Hack is free software: you can redistribute
	it and/or modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation, either version 3 of the
	License, or (at your option) any later version.

    subVersion 2 GTA:O Hack is distributed in the hope that it
	will be useful, but WITHOUT ANY WARRANTY; without even the implied
	warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
	the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with subVersion 2 GTA:O Hack.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#ifndef FEATURES_H
#define FEATURES_H

#include <map>
#include <vector>

enum eFeatures : unsigned
{
	FEATURE_P_TRUEGOD,
	FEATURE_P_GOD,
	FEATURE_P_INVISIBLE,
	FEATURE_P_VISIBLE_LOCAL,
	FEATURE_P_OFFRADAR,
	FEATURE_P_CLEAN_PLAYER,
	FEATURE_P_WANTED,
	FEATURE_P_NEVERWANTED,
	FEATURE_P_ANTINPC,
	FEATURE_P_SUPER_RUN,
	FEATURE_P_RUNSPD,
	FEATURE_P_SWIMSPD,
	FEATURE_P_SUPERJUMP,
	FEATURE_P_EXPLOSIVEMELEE,
	FEATURE_P_SEATBELT,
	FEATURE_P_NORAGDOLL,
	FEATURE_P_STAMINA,
	FEATURE_P_MOBILE_RADIO,
	FEATURE_P_FREEZE_RADIO,
	FEATURE_P_CLEAR_REPORTS,
	FEATURE_P_CLONE_BODYGUARD,
	FEATURE_P_CLEANUP_OBJECTS,
	FEATURE_P_ANTI_AFK,
	FEATURE_P_TINY,
	FEATURE_P_GIVE_HEALTH,
	FEATURE_P_QUICK_REGEN,
	FEATURE_P_TEST,
	FEATURE_P_TEST2,
	FEATURE_V_TRUEGOD,
	FEATURE_V_GOD,
	FEATURE_V_REPAIR,
	FEATURE_V_UPGRADE,
	FEATURE_V_FLIP,
	FEATURE_V_STICK_TO_GROUND,
	FEATURE_V_BOOST,
	FEATURE_V_STOP,
	FEATURE_V_INVISIBLE,
	FEATURE_V_RAINBOW,
	FEATURE_V_COLOR_PRESET,
	FEATURE_V_COLOR_PRESET2,
	FEATURE_V_COLOR_PEARL,
	FEATURE_V_COLOR_WHEEL,
	FEATURE_V_COLOR_TIRE_R,
	FEATURE_V_COLOR_TIRE_B,
	FEATURE_V_COLOR_TIRE_G,
	FEATURE_V_BULLETPROOFTIRES,
	FEATURE_V_DEFORMATION,
	FEATURE_V_ACCELERATION,
	FEATURE_V_UPSHIFT,
	FEATURE_V_BRAKEFORCE,
	FEATURE_V_TRACTION,
	FEATURE_V_GRAVITY,
	FEATURE_V_SUSPENSION_FORCE,
	FEATURE_V_VOLTIC_BOOST,
	FEATURE_V_INF_CAR_ALARM,
	FEATURE_V_LICENSE,
	FEATURE_M_RANDOMIZE_PED,
	FEATURE_C_SANTA,
	FEATURE_C_TRASH_ORANGE,
	FEATURE_C_TRASH_GREEN,
	FEATURE_C_POLICE,
	FEATURE_U_STOP_ANIM,
	FEATURE_TP_WAYPOINT,
	FEATURE_TP_OBJECTIVE,
	FEATURE_TP_PERSONAL_VEH,
	FEATURE_TP_NEARBY_CAR,
	FEATURE_W_SPREAD,
	FEATURE_W_RECOIL,
	FEATURE_W_RELOAD,	//quick reload
	FEATURE_W_DAMAGE,
	FEATURE_W_AMMO,
	FEATURE_W_NO_RELOAD,
	FEATURE_W_RANGE,
	FEATURE_W_SPINUP,
	FEATURE_W_EXPLOSIVEAMMO,
	FEATURE_W_FIREAMMO,
	FEATURE_W_BULLET_BATCH,
	FEATURE_W_BATCH_SPREAD,
	FEATURE_W_MUZZLE_VELOCITY,
	FEATURE_W_TRIGGERBOT,
	FEATURE_T_PAUSE_CLOCK,
	FEATURE_T_SET_HOUR,
	FEATURE_T_SET_MIN,
	FEATURE_T_WEATHER,
	FEATURE_R_RP_LOOP,
	FEATURE_R_STEALTH_MONEY,
	FEATURE_R_STEALTH_MONEY_REMOVE,
	FEATURE_R_UNLOCK_STAT,
	FEATURE_R_UNLOCK_TATTOO,
	FEATURE_R_UNLOCK_PARACHUTE,
	FEATURE_R_UNLOCK_RIMS,
	FEATURE_R_UNLOCK_VEHICLE,
	FEATURE_R_UNLOCK_TROPHY,
	FEATURE_R_UNLOCK_HAIRSTYLE,
	FEATURE_R_UNLOCK_WEAPON,
	FEATURE_R_UNLOCK_CLOTHING,
	FEATURE_D_FRAUD,
	FEATURE_D_KICK,
	FEATURE_D_TELEPORT,
	FEATURE_D_EXPLOSION,
	FEATURE_D_FIRE,
	FEATURE_D_REMOVE_WEAPONS,
	FEATURE_D_CLEAR_TASKS,
	FEATURE_D_CRASH,
	FEATURE_D_REQUEST_CONTROL,
	FEATURE_U_NAME_CHANGER,
	FEATURE_U_NOCLIP,
	FEATURE_U_NOCLIP_SPEED,
	FEATURE_U_CHAOS_MODE,
	FEATURE_U_SMASH_VEHICLES,
	FEATURE_U_BLACK_HOLE,
	FEATURE_U_PED_DROP,
	FEATURE_U_MONEY_DROP_2K,
	FEATURE_U_MONEY_DROP_40K,
	FEATURE_U_CLEAN_SESSION,
	FEATURE_U_SECURO_50K,
	FEATURE_I_FPS_COUNTER,
	FEATURE_I_SPEED_O_METER,
	FEATURE_I_MENU_SCALE,
	FEATURE_I_MENU_PADDING_X,
	FEATURE_I_MENU_PADDING_Y,
	FEATURE_I_SAVE_INI,
	FEATURE_I_CUSTOM_XHAIR,
	FEATURE_I_CUSTOM_XHAIR_SIZE,
	FEATURE_I_CUSTOM_XHAIR_THICKNESS,
	FEATURE_I_CUSTOM_XHAIR_COL_R,
	FEATURE_I_CUSTOM_XHAIR_COL_G,
	FEATURE_I_CUSTOM_XHAIR_COL_B,
	FEATURE_I_CUSTOM_XHAIR_COL_A,
	FEATURE_I_MENU_COLOR1_R,
	FEATURE_I_MENU_COLOR1_G,
	FEATURE_I_MENU_COLOR1_B,
	FEATURE_I_MENU_COLOR2_R,
	FEATURE_I_MENU_COLOR2_G,
	FEATURE_I_MENU_COLOR2_B,
	FEATURE_I_MENU_SEL_COLOR1_R,
	FEATURE_I_MENU_SEL_COLOR1_G,
	FEATURE_I_MENU_SEL_COLOR1_B,
	FEATURE_I_MENU_SEL_COLOR2_R,
	FEATURE_I_MENU_SEL_COLOR2_G,
	FEATURE_I_MENU_SEL_COLOR2_B,
	FEATURE_I_MENU_SLDR_COLOR1_R,
	FEATURE_I_MENU_SLDR_COLOR1_G,
	FEATURE_I_MENU_SLDR_COLOR1_B,
	FEATURE_I_MENU_SLDR_COLOR2_R,
	FEATURE_I_MENU_SLDR_COLOR2_G,
	FEATURE_I_MENU_SLDR_COLOR2_B,
	FEATURE_A_TRACK,
	FEATURE_A_TP_TO_ME,
	FEATURE_A_TP_TO_SEA,
	FEATURE_A_TP_TO_AIR,
	FEATURE_A_EXPLODE,
	FEATURE_A_GIVE_WEAPON,
	FEATURE_A_GIVE_WEAPONS,
	FEATURE_A_REMOVE_WEAPONS,
	FEATURE_A_TRAP_IN_CAGE,
	FEATURE_A_CLEAR_TASKS,
	FEATURE_A_MONEY_DROP_2K,
	FEATURE_A_MONEY_DROP_40K,
	FEATURE_A_SECURO_50K,
	FEATURE_A_FREEZE,
	FEATURE_A_KICK,
	FEATURE_A_GIVE_WANTED,
	FEATURE_A_ANIMATE,
	FEATURE_A_FREEZE_INV_SCREEN,
	FEATURE_O_ESP_MAX_DIST,
	FEATURE_O_ESP_DIST,
	FEATURE_O_ESP_HEALTH,
	FEATURE_O_ESP_BOX,
	FEATURE_O_ESP_HEALTH_TEXT,
	FEATURE_O_ESP_GOD,
	FEATURE_O_ESP_WORLD_LINE,
	FEATURE_O_ATTACH_BONE,
	FEATURE_S_VEH_MOD,
	FEATURE_S_IN_VEHICLE,
	FEATURE_S_SP_BYPASS,
	FEATURE_S_MP_BYPASS,
	FEATURE_S_LICENSE,
	FEATURE_S_COLOR_1,
	FEATURE_S_COLOR_2,
	FEATURE_S_COLOR_PEARL,
	FEATURE_S_COLOR_WHEEL,
	FEATURE_S_PED_RANDOMIZE,
	FEATURE_S_PED_TYPE,
	FEATURE_S_PED_CLEANUP,
	FEATURE_E_EDITOR_MODE,
	FEATURE_E_DELETE,
	FEATURE_E_DISTANCE,
	FEATURE_E_TEXT_TYPE,
	FEATURE_E_TEXT_POS,
	FEATURE_E_FREEZE,
	FEATURE_E_INVISIBLE,
	FEATURE_E_COLLISION,
	FEATURE_E_ROTATION_ENABLE,
	FEATURE_E_ROTATION_RELATIVE,
	FEATURE_E_ROTATION_X,
	FEATURE_E_ROTATION_Y,
	FEATURE_E_ROTATION_Z,
	FEATURE_E_THROW_MODE,
	FEATURE_END
};

enum ePlrFeats : unsigned
{
	PLRFEAT_PARENT,
	PLRFEAT_INFO,
	PLRFEAT_INFO_NAME,
	PLRFEAT_INFO_IP,
	PLRFEAT_INFO_PORT,
	PLRFEAT_INFO_COORDS,
	PLRFEAT_INFO_DISTANCE,
	PLRFEAT_INFO_HEALTH,
	PLRFEAT_INFO_IS_IN_VEH,
	PLRFEAT_INFO_IS_GOD,
	PLRFEAT_INFO_WANTED,
	PLRFEAT_TRACK,
	PLRFEAT_SPECTATE,
	PLRFEAT_PED_DROP,
	PLRFEAT_TP_TO,
	PLRFEAT_TP_TO_CAR,
	PLRFEAT_TP_TO_ME,
	PLRFEAT_TP_TO_SEA,
	PLRFEAT_TP_TO_AIR,
	PLRFEAT_EXPLODE,
	PLRFEAT_EXPLODE_OWNED,
	PLRFEAT_GIVE_WEAPON,
	PLRFEAT_GIVE_WEAPONS,
	PLRFEAT_REMOVE_WEAPONS,
	PLRFEAT_CLONE_BODYGUARD,
	PLRFEAT_ATTACH_TO,
	PLRFEAT_ATTACH_PIGGY_BACK,
	PLRFEAT_ATTACH_69,
	PLRFEAT_ATTACH_VIOLATE,
	PLRFEAT_DETACH_ALL,
	PLRFEAT_ATTACH_CLONE,
	PLRFEAT_ATTACH_CLONE_69,
	PLRFEAT_ATTACH_OBJ_PARENT,
	PLRFEAT_TRAP_IN_CAGE,
	PLRFEAT_SHOOT,
	PLRFEAT_CHRISFORMAGE,
	PLRFEAT_CLEAR_TASKS,
	PLRFEAT_FREEZE,
	PLRFEAT_ANIMATE,
	PLRFEAT_DEAD_CLONES,
	PLRFEAT_GIVE_WANTED,
	PLRFEAT_MONEY_DROP_2K,
	PLRFEAT_MONEY_DROP_40K,
	PLRFEAT_SECURO_50K,
	PLRFEAT_CRASH,
	PLRFEAT_EXPLODE_LOOP,
	PLRFEAT_KICK,
	PLRFEAT_FREEZE_INV_SCREEN,
	PLRFEAT_END
};

#define IS_FEATURE_VALID(value) (value < FEATURE_END)
#define IS_PLRFEAT_VALID(value) (value < PLRFEAT_END)

namespace feature
{
	void	populate();
};

#endif