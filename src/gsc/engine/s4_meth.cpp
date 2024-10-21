// Copyright 2024 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "xsk/gsc/engine/s4.hpp"

namespace xsk::gsc::s4
{

extern std::array<std::pair<u16, char const*>, meth_count> const meth_list
{{
		//{ 0x80AD , "DisablePlayerUse" },
	//{ 0x8276 , "EnablePlayerUse" },
	{ 0x809B , "Delete" },
	{ 0x80AD , "HudOutlineDisableForClient" },
	{ 0x8126 , "GetCurrentWeapon" },
	{ 0x817B , "GetTagOrigin" },
	{ 0x817E , "TagExists" },
	{ 0x81A5 , "Hide" },
	{ 0x81B8 , "iPrintLnBold" },
	{ 0x820C , "LinkTo" },
	{ 0x8226 , "MakeUnUsable" },
	{ 0x8227 , "MakeUseable" },
	{ 0x8276 , "PlayLocalSound" },
	{ 0x8277 , "PlayLoopSound" },
	{ 0x8291 , "ControlTurretOn" },
	{ 0x82F7 , "SetClientOmnVar" },
	{ 0x8306 , "SetCursorHint" },
	{ 0x830A , "SetDefaultDropPitch" },
	{ 0x832C , "SetHintString" },
	{ 0x8351 , "SetModel" },
	{ 0x8358 , "SetNodePloy" },
	{ 0x83C4 , "Show" },
	{ 0x83C9 , "ShowPart" },
	{ 0x83CB , "ShowToPlayer" },
	{ 0x83F1 , "StopLoopSound" },
	{ 0x8401 , "SwitchToWeaponImmediate" },
	{ 0x841F , "UseButtonPressed" },
	{ 0x8428 , "UsingGamepad" },
	{ 0x84A9 , "SetPlayerMusicState" },
	{ 0x84B2 , "AllowMountTop" },
	{ 0x84B3 , "AllowMountSide" },
	{ 0x84C7 , "SetHudTutorialMessage" },
	{ 0x84C8 , "ClearHudTutorialMessage" },
	{ 0x84CF , "SetUseRange" },
	{ 0x84D0 , "SetUseHoldDuration" },
	{ 0x84D5 , "SetUseFov" },
	{ 0x84D6 , "SetHintDisplayFov" },
	{ 0x8580 , "SetHintRequiresHolding" },
	{ 0x85A4 , "SetAsGameTypeObjective" },
	
}};

} // namespace xsk::gsc::s4
