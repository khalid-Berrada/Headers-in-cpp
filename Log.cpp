#include "Log.h"
#include <iostream>

void intiaLog() {
	Log("Hello user");
}

void Log(const char* message) {
	std::cout << message << std::endl;
}
