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
	void setPlayerHp(int hitpoints);
	void decreasePlayerHP(bool decrease);
	void setPlayerAIRandomAttackNumber();
	void setPlayerAIRandomAttackNumberNULL();

	//getters 
	std::string getPlayerInput();
	std::string getPlayerName();
	int getPlayerHP();
	int getPlayerAttackSelector();
	int getPlayerAIRandomAttackNumber();
	std::string getPlayerAttack();



};

