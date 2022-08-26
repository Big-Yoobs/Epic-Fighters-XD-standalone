#include "Player.h"




//playerattack input switch func 
void Player::PlayerAttackInputSwitch(std::string playerinput) {
	
	
	if (playerinput == "K" || playerinput == "k") { //kick

		PlayerAttackSelector = 0;
		PlayerAttack = "KICKS";


	}

	else if (playerinput == "P" || playerinput == "p") { //punch

		PlayerAttackSelector = 1;
		PlayerAttack = "PUNCHES";

	}

	else if (playerinput == "D" || playerinput == "d") { //dodge

		PlayerAttackSelector = 2;
		PlayerAttack = "DODGES";

	}

	else { //wrong input
		PlayerAttackSelector = 3; //wrong input
		PlayerAttack = "FUMBLES";
	}


}




//setters
//playerinput
void Player::setPlayerInput() {

	std::cout << "ENTER INPUT: ";
	std::cin >> PlayerInput;

}

//playername
void Player::setPlayerName() {

	std::cout << "ENTER YOUR NAME: ";
	PlayerName = "";
	std::cin >> PlayerInputName;
	for (int i = 0; i < PlayerInputName.length(); i++) {
		
		PlayerNameUpper = PlayerInputName[i];
		PlayerNameUpper = toupper(PlayerNameUpper);
		PlayerName = PlayerName + PlayerNameUpper;
		PlayerNameUpper = NULL;		

	}
}

//player 2 name if ai bot
void Player::setPlayerAIName(std::string AIbotName) {

	PlayerName = AIbotName;
}

//playerhp
void Player::setPlayerHP(int playerHP) {
	PlayerHP = playerHP ;

}

//player AI random attack number
void  Player::setPlayerAIRandomAttackNumber() {

	PlayerAIRandomAttackNumber = rand() % 3;

	switch (PlayerAIRandomAttackNumber) {

	case 0:
		PlayerAttack = "KICKS";
		PlayerAttackSelector = 0;

		break;

	case 1:
		PlayerAttack = "PUNCHES";
		PlayerAttackSelector = 1;
		break;

	case 2:
		PlayerAttack = "DODGES";
		PlayerAttackSelector = 2;

	default:
		PlayerAttack = "DEBUG ERROR: AI WENT OUT OF BOUND IN \"setPlayerAIRandomAttackNumber()\" player class function";
		PlayerAttackSelector = 3;

	}

}




//getters 
//playerinput
std::string Player::getPlayerInput() {

	return PlayerInput;
}

//playername
std::string Player::getPlayerName() {
	return PlayerName;
}

//playerhp
int Player::getPlayerHP() {

	return PlayerHP;
}


//player attack selector 
int Player::getPlayerAttackSelector() {

	return PlayerAttackSelector;

}

//player ai random attack number
int Player::getPlayerAIRandomAttackNumber() {

	return PlayerAIRandomAttackNumber;
}

//player attack string 
std::string Player::getPlayerAttack() {

	return PlayerAttack;

}
