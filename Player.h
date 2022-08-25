#pragma once
#include <iostream>
class Player {
private:
	int PlayerHP;
	std::string PlayerInput;
	std::string PlayerInputName;
	char PlayerNameUpper;
	std::string PlayerName;
	std::string AIBotName;

public:



	//setters
	void setPlayerInput(std::string playerInput);
	void setPlayerName();
	void setPlayerAIName(std::string AIbotName);
	void setPlayerHP(int playerHP);

	//getters 
	std::string getPlayerInput();
	std::string getPlayerName();
	int getPlayerHP();



};

