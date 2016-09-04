#include <math.h>
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

static int multiply (lua_State *L)
{
    int arg1 = luaL_checknumber(L, 1);
    int arg2 = luaL_checknumber(L, 2); 
    lua_pushnumber(L, arg1*arg2);
    lua_pushnumber(L, arg1+arg2);
    return 2;
}
  
static const struct luaL_Reg mylib [] = {
    {"multiply", multiply},
    {NULL, NULL}
};
  
int luaopen_test_lua(lua_State *L)
{
    luaL_openlib(L, "test_lua", mylib, 0);
    return 1;
}

