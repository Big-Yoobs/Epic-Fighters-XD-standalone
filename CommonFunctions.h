#pragma once
#include <iostream>

	
class CommonFunctions {

private:
	bool DebugMode;



public:

	//functions
	void WaitTime(int milliseconds);
	void WrongInput();

	//setters
	void setDebugMode(bool debugMode);

	//getters
	bool getDebugMode();


};