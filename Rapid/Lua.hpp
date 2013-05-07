#pragma once

#include <string>
#include <vector>

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

namespace Rapid {

struct ModinfoT
{
	std::string Name;
	std::string Version;
	std::vector<std::string> Depends;
};

class LuaT
{
	private:
	lua_State * mState;

	public:
	LuaT();
	~LuaT();

	ModinfoT getModinfo(std::string const & Buffer);
};

}
