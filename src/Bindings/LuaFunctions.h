/**
 * Copyright 2014 MCServer Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#pragma once

#include "../MCLogger.h"
#include <time.h>
// tolua_begin

unsigned int GetTime()
{
	return (unsigned int)time(0);
}

std::string GetChar( std::string & a_Str, unsigned int a_Idx )
{
	return std::string(1, a_Str[ a_Idx ]);
}

// tolua_end
