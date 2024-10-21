// Copyright 2024 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "xsk/gsc/engine/s4.hpp"

namespace xsk::gsc::s4
{

extern std::array<std::pair<u16, char const*>, func_count> const func_list
{{
    { 0x001 , "Abs" },
    { 0x005 , "AddBot" },
    { 0x00E , "AnglesToForward" },
    { 0x010 , "AnglesToUp" },
    { 0x01B , "BbPrint" },
    { 0x040 , "Clamp" },
    { 0x058 , "Distance2D" },
    { 0x059 , "Distance2DSquared" },
    { 0x068 , "Floor" },
    { 0x08F , "GetDvar" },
    { 0x090 , "GetDvarFloat" },
    { 0x091 , "GetDvarInt" },
    { 0x097 , "GetEntArray" },
    { 0x09B , "GetFirstArrayKey" },
    { 0x0AD , "GetMatchRulesData" },
    { 0x0B1 , "GetNextArrayKey" },
    { 0x0C9 , "GetScriptableArray" },
    { 0x0DD , "GetTime" },
    { 0x0FE , "Int" },
    { 0x105 , "IsAI" },
    { 0x108 , "IsBot" },
    { 0x118 , "IsPlayer" },
    { 0x122 , "IsSubStr" },
    { 0x126 , "IsUsingMatchRulesData" },
    { 0x13B , "LoadFX" },
    { 0x146 , "Map_Restart" },
    { 0x15A , "Obituary" },
    { 0x191 , "Objective_SetPingsForTeam" },
    { 0x19C , "PlayFxOnTag" },
    { 0x1BB , "RandomFloat" },
    { 0x1BD , "RandomInt" },
    { 0x1D3 , "SetClientNameMode" },
    { 0x1D5 , "SetDvar" },
    { 0x1D6 , "SetDvarIFunInitialized" },
    { 0x1D7 , "SetDynamicDvar" },
    { 0x1D8 , "SetGameEndTime" },
    { 0x1DD , "SetMapCenter" },
    { 0x1E9 , "SetOmnVar" },
    { 0x20A , "Spawn" },
    { 0x214 , "SpawnStruct" },
    { 0x215 , "SpawnTurret" },
    { 0x248 , "ToLower" },
    { 0x26D , "WeaponBurstCount" },
    { 0x26E , "WeaponClass" },
    { 0x270 , "WeaponClipSize" },
    { 0x272 , "WeaponFireTime" },
    { 0x277 , "WeaponIsAuto" },
    { 0x27A , "WeaponIsSemiAuto" },
    { 0x2BA , "IsBotMatchMakingEnabled" },
    { 0x2BB , "AddMpBotToTeam" },
    { 0x2F1 , "WeaponIsBeam" },
    { 0x351 , "MakeWeapon" },
    { 0x374 , "IsNullWeapon" },
    { 0x424 , "BrMatchStarted" },
}};

} // namespace xsk::gsc::s4
