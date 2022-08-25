#pragma once
#include <iostream>
class Player {
private:
	int PlayerHP;
	std::string PlayerInput;
	std::string PlayerName;

public:



	//setters
	void setPlayerInput(std::string playerInput);
	void setPlayerName();
	void setPlayerHP(int playerHP);

	//getters 
	std::string getPlayerInput();
	std::string getPlayerName();



};

