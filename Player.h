#pragma once
#include <iostream>
class Player {
private:
	int PlayerHP;
	std::string PlayerInput;
	std::string PlayerInputName;
	char PlayerNameUpper;
	std::string PlayerName;
	int PlayerAttackSelector;
	std::string PlayerAttack;
	int PlayerAIRandomAttackNumber;

public:

	//Attack input conversion to switch num
	void PlayerAttackInputSwitch(std::string playerinput);

	//setters
	void setPlayerInput();
	void setPlayerName();
	void setPlayerAIName(std::string AIbotName);
	void setPlayerHP(int playerHP);
	void setPlayerAIRandomAttackNumber();

	//getters 
	std::string getPlayerInput();
	std::string getPlayerName();
	int getPlayerHP();
	int getPlayerAttackSelector();
	int getPlayerAIRandomAttackNumber();
	std::string getPlayerAttack();



};

