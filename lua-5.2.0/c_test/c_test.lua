require "test_lua"
require "module"
array = {}
array = {["lua"]="LUA",["ysq"]="YSQ"}
print(test_lua.multiply(10,2,1))
print(module.func3())
print(module.constant)
table.sort(array)
print(array.lua)
