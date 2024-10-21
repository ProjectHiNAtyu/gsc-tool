// Copyright 2024 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "xsk/gsc/engine/s4.hpp"

namespace xsk::gsc::s4
{

extern std::array<std::pair<u32, char const*>, token_count> const token_list
{{
	{ 0x07A4 , "scripts/engine/utility" },
	{ 0x2AA9 , "br_quests_Enabled" },
	{ 0x2AAA , "br_queststashlocations" },
	{ 0x6D9A , "GetStructArray" },
}};

} // namespace xsk::gsc::s4
