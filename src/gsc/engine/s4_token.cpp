// Copyright 2024 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "xsk/gsc/engine/s4.hpp"

namespace xsk::gsc::s4
{

extern std::array<std::pair<u32, char const*>, token_count> const token_list
{{
    { 0x0055, "angles" },
    { 0x030A, "origin" },
    { 0x0329, "pers" } ,
    { 0x0482, "team" } ,
    { 0x07FE, "scripts/mp/persistence" },
    { 0x0A92, "scripts/mp/utility/game" },
    { 0x07A4, "scripts/engine/utility" },
    { 0x2AA9, "br_quests_enabled" },
    { 0x2AAA, "br_queststashlocations" },
    { 0x6D9A, "getstructarray" },
    { 0x60F0, "gametype" } ,
    { 0x8A0B, "isroundbased" } ,
    { 0x9BCA, "matchmakinggame" },
    { 0x9CAE, "maxteamsize" },
    { 0xB76B, "players" },
}};

} // namespace xsk::gsc::s4
