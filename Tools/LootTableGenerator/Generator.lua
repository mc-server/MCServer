-- Generator.lua

--[[
Crafts the LootTables.h file to be used by Cuberite.
It processes the loot_tables report folder (https://wiki.vg/Data_Generators)
into a the h file containing all LootTables

The output format is the regular LootTables.h
--]]





-- Allow Lua to load libraries in our subfolder:
package.path = '../BlockTypePaletteGenerator/lib/lunajson/src/?.lua;' .. package.path;





--- Prints usage instructions to stdout.
-- If the optional `aMessage` is passed, output is prepended by message _and_
-- redirected to stderr.
local function usage(aMessage)
	if aMessage then
		io.output(io.stderr);
		io.write(aMessage, "\n\n");
	end
	io.write(
		"Usage: lua Generator.lua INPUTFOLDER OUTPUTFILE\n"..
		"Converts the Minecraft loot_tables report format to the cuberite "..
		"LootTables.h.\n"..
		"\n"..
		"INPUTFOLDER and OUTPUTFILE must point to a valid path. INPUTFOLDER must "..
		"be readable and OUTPUTFILE must be writable. Either can be replaced "..
		"with `-` (dash character) to point to standard-input or -output.\n");
	os.exit(message and 1 or 0);
end



local function tchelper(first, rest)
	return first:upper()..rest:lower()
end

local function stringFixer(aString)
	aString = string.gsub(aString,"minecraft:","")
	aString = string.gsub(aString,"_", " ")
	aString = string.gsub(aString,"(%a)([%w_']*)", tchelper)
	aString = string.gsub(aString, " ", "")
	return aString
end


local function stringItemFixer(aString)
	aString = string.gsub(aString,"minecraft:","")
	aString = string.gsub(aString, "%f[%a]%l+%f[%A]", string.upper)
	aString = "E_ITEM_"..aString
	aString = string.gsub(aString,"E_ITEM_IRON_INGOT","E_ITEM_IRON")
	aString = string.gsub(aString,"E_ITEM_GOLD_INGOT","E_ITEM_GOLD")
	return aString
end



local function parseLootTable(aLootTable, aName)
	-- read file name and create class definition
	assert(type(aLootTable) == "string")
	Name = string.gsub(aName, ".json","")
	Name = stringFixer(Name)
	io.write(
			"\n"..
			"class c"..Name.."LootTable: public cLootTable"..
			"\n{\n")
	-- check for json parser
	local lj = require("lunajson")
	local input = lj.decode(aLootTable)
	local rootTypeString, poolsString, poolString, rollString, poolStartString
	local weight, name, functionsString

	poolsString = ""
	poolStartString =
	"\tcLootTablePoolList m_LootTablePools =\n"..
			"\t{\n"

	-- on the lowest layer you may have type, pools, functions
	for root, value in pairs(input) do
		if root == "type" then
			do
				rootTypeString = "\tenum LootTable::eType m_Type = LootTable::eType::"..stringFixer(value)..";\n"
			end
		elseif root == "pools" then
			do
				poolString = ""
				pools = value
				for _, pool in pairs(pools) do
					poolString = poolString.."\t\t\t{\n"
					for entryType, entries in pairs(pool) do
						if entryType == "rolls" then
							do
								if type(entries) == "number" then
									do
										rollString =
											"\t\t"..entries..", {0, 0},  // Rolls\n"..
											"\t\t0, {0, 0},  // Bonus Rolls\n"
									end
								elseif type(entries) == "table" then
									do
										-- Todo: add type
										local min, max, disType
										for index, value in pairs(entries) do
											if index == "min" then do min = value end end
											if index == "max" then do max = value end end
											if index == "type" then do disType = value end end
										end
										rollString =
											"\t\t\t-1, {"..min..", "..max.."},  // Rolls\n"..
											"\t\t\t0, {0, 0},  // Bonus Rolls\n"
									end
								end
							end
						elseif entryType == "entries" then
							do
								functionsString = ""
								functionParamString = ""
								functionCondString = ""
								functionTypeString = ""
								for _, entry in pairs(entries) do
									for index, value in pairs(entry) do
										weight = 0
										if index == "type" then
											do
												poolEntryType = value
											end
										elseif index == "name" then
											do
												name = stringItemFixer(value)
											end
										elseif index == "weight" then
											do
												weight = value
											end
										elseif index == "functions" then
											do
												for _,functions in pairs(value) do
													for functionsDescName, functionDesc in pairs(functions) do
														if functionsDescName == "function" then
															do
																functionTypeString = "LootTable::eFunctionType::"..stringFixer(functionDesc)
															end
														elseif functionsDescName == "conditions" then
															do
																for _,condition in pairs(functionDesc) do
																	for param, value in pairs(condition) do
																		if type(value) ~= "table" then
																			do
																				functionCondString = functionCondString.."{\""..param.."\", \""..stringFixer(value).."\"}, "
																			end
																		else
																			do
																				for _, flags in pairs(value) do
																					for a, b in pairs(flags) do
																						if type(b) == "boolean" then
																							if b then do b ="true" end
																							else do b ="false" end end
																						end
																						functionCondString = functionCondString.."{\""..a.."\", \""..b.."\"}, "
																					end
																				end
																			end
																		end
																	end
																end
															end -- conditions
														else -- values are function parameters
															do
																if type(functionDesc) == "boolean" then
																	if functionDesc then do functionDesc ="true" end
																	else do functionDesc ="false" end end
																end
																if type(functionDesc) ~= "table" then
																	do
																		functionParamString = functionParamString.."{\""..functionsDescName.."\", \""..stringFixer(functionDesc).."\"}, "
																	end
																else 
																	do
																		for param, val in pairs(functionDesc) do
																			if type(val) ~= "table" then
																				do
																					functionParamString = functionParamString.."{\""..param.."\", \""..stringFixer(val).."\"}, "
																				end
																			end
																		end
																	end
																end
															end
														end -- function parameters
													end -- function
													if functionTypeString ~= "" then
														do
															functionsString = functionsString.."{"..functionTypeString..", {"..string.sub(functionParamString, 0, #functionParamString-2).."}, {"..string.sub(functionCondString, 0, #functionCondString-2).."}}, "
															functionParamString = ""
															functionCondString = ""
															functionTypeString = ""
														end
													end
												end -- functions
											end
										end
									end -- index, value in entry
									if pool ~= "" then
										do
											if functionsString ~= "" then
												do
												poolString = poolString..
												"\t\t\t\t{"..
												"{"..string.sub(functionsString, 0, #functionsString-2).."}, "..name..", "..weight..
												"},\n"
												functionsString = ""
												end
											else
												do
													poolString = poolString..
													"\t\t\t\t{"..
													"{}, "..name..", "..weight..
													"},\n"
								
												end
											end
										end
									end
								end -- entry in entries
								poolString = poolString.."\t\t\t},\n"
							end
						end -- entryType == "entries"
					end
					poolsString = poolsString.."\t\t{\n"..rollString..poolString.."\n\t\t},\n"
					poolString = ""
				end -- pool in pools
				poolsString = poolsString.."\t};\n"
			end
		end -- root == "type"
	end
	if rollString ~= nil then
		do
			io.write(rootTypeString)
			io.write(poolStartString..poolsString)
		end
	else
		do
			io.write("\tenum LootTable::eType m_Type = LootTable::eType::Empty;\n};\n")
			return
		end
	end
	io.write("};\n")
end




--- Serializes the properties from the JSON / array table format into a single output string
-- Concatenates all properties with \t as the delimiting character
local function serializeProperties(aProperties)
	local res = {}
	local idx = 1
	for k, v in pairs(aProperties or {}) do
		res[idx] = k
		res[idx + 1] = v
		idx = idx + 2
	end
	return table.concat(res, "\t")
end





--- Returns the prefix that is common for all block type names in the registry
-- aRegistry is the parsed registry, as returned from parseRegistry()
local function findCommonPrefix(aRegistryTable)
	local prefix = aRegistryTable[1].blockTypeName
	local len = string.len(prefix)
	local sub = string.sub
	for _, block in ipairs(aRegistryTable) do
		while (sub(block.blockTypeName, 1, len) ~= prefix) do
			len = len - 1
			if (len == 0) then
				return ""
			end
			prefix = sub(prefix, 1, len)
		end
	end
	return prefix
end





-- Test whether the script is run in a path where it can load it's libraries
if not(pcall(function() require("lunajson") end)) then
	usage(
		"Could not load required libraries, please run `Generator.lua` " ..
		"within its directory and make sure to run `git submodule update`."
	)
end

-- Check/Prepare CLI arguments
local inpath, outpath = ...;
inpath = inpath or "loot_tables"
outpath = outpath or "LootTables.h"
--[[
if (inpath ~= "-") then
	local handle, err = io.open(inpath, "r")
	io.input(handle or usage(err))
end--]]
if (outpath ~= "-") then
	local handle, err = io.open(outpath, "w")
	io.output(handle or usage(err))
end
-- Parse the registry:
-- local registry = parseRegistry(io.input():read("*a"))
-- local commonPrefix = findCommonPrefix(registry)

io.write(
	"\n"..
	"// LootTables.h\n"..
	"\n"..
	"#pragma once\n"..
	"\n"..
	"#include \"../LootTableProvider.h\"\n\n"..
	"/*\n"..
	"This files contains all default loot tables\n"..
	"*/\n"
)

-- find all files in json format in specified folder
-- root dir
for dir in io.popen([[dir ".\]]..inpath..[[" /b /ad]]):lines() do
	if (dir ~= "blocks" and dir ~= "gameplay") then
		-- print(dir)
		for file in io.popen([[dir ".\]]..inpath..[[\]]..dir..[[" /b /a-d]]):lines() do
			-- print(inpath.."/"..dir.."/"..file)
			local handle, err = io.open([[.\]]..inpath..[[\]]..dir..[[\]]..file)
			io.input(handle or usage(err))
			parseLootTable(io.input():read("*a"), file)
		end

		for subdir in io.popen([[dir ".\]]..inpath..[[\]]..dir..[[" /b /ad]]):lines() do
			-- print(inpath.."/"..dir.."/"..subdir)
			for file in io.popen([[dir ".\]]..inpath..[[\]]..dir..[[" /b /a-d]]):lines() do
				-- print(inpath.."/"..dir.."/"..subdir.."/"..file)
			end
		end

	end
end

--[[
for _, entry in ipairs(registry) do
	local props = serializeProperties(entry.properties)
	if (props ~= "") then
		props = "\t" .. props
	end
	io.write(
		entry.id, "\t",
		string.sub(entry.blockTypeName, prefixLen),
		props, "\n"
	)
end
--]]