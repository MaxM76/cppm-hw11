#pragma once
#include <string>

#ifdef LEAVERLIBRARYDYNAMIC_EXPORTS
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif

namespace leaverlib {
	class Leaver {
	public:
		LEAVERLIBRARY_API std::string leave(std::string name);
	};
}
