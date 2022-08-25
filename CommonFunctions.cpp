#include <chrono>
#include <thread>
#include "CommonFunctions.h"

void CommonFunctions::WaitTime(int milliseconds) {
	if (!getDebugMode()) {
		std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));

	}
	
}


void CommonFunctions::WrongInput() {
	std::cout << "\n\n\nYou did not enter a correct input.\n Please try again...\n\n\n";
	WaitTime(1000);
}


//setters
void CommonFunctions::setDebugMode(bool debugMode) {
	DebugMode = debugMode;
	
}


//getters
bool CommonFunctions::getDebugMode() {
	return DebugMode;
}





