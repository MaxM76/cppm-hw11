#include "greeter.h"

namespace greetlib {
	std::string Greeter::greet(std::string name) {
		return "Здравствуйте, " + name;
	}
}
