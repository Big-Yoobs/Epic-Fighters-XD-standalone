#pragma once
#include <iostream>
class Player {
private:
	int PlayerHealth;
	std::string PlayerInput;

public:



	//setters
	void setPlayerInput(std::string playerInput);

	//getters 
	std::string getPlayerInput();



};

