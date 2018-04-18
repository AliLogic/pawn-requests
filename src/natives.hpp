/*
# natives.hpp

Contains all the `PAWN_NATIVE_DECL` for native function declarations.
*/

#ifndef RESTFUL_NATIVES_H
#define RESTFUL_NATIVES_H

#include <string>
#include <utility>
#include <set>

#include <cpprest/json.h>
#include <amx/amx2.h>

#include "common.hpp"
// #include "plugin-natives\NativeFunc.hpp" // must be included last

namespace Natives {
int RestfulGetData(AMX* amx, cell* params);
int RestfulPostData(AMX* amx, cell* params);
int RestfulGetJSON(AMX* amx, cell* params);
int RestfulPostJSON(AMX* amx, cell* params);
int RestfulHeaders(AMX* amx, cell* params);

namespace JSON {
	int JsonObject(AMX* amx, cell* params);
	int JsonString(AMX* amx, cell* params);
	int JsonNumber(AMX* amx, cell* params);
	int JsonArray(AMX* amx, cell* params);
	int JsonStringify(AMX* amx, cell* params);

	extern std::unordered_map<int, web::json::value> jsonPool;
	extern int jsonPoolCounter;
	int JsonAlloc(web::json::value item);
	web::json::value JsonGet(int id);
}
}

#endif
