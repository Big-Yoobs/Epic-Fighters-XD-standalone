#include "Player.h"


//setters
//playerinput
void Player::setPlayerInput() {

	std::cout << "Enter Input: ";
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

void Player::setPlayerAIName(std::string AIbotName) {

	PlayerName = AIbotName;
}

//playerhp
void Player::setPlayerHP(int playerHP) {
	PlayerHP = playerHP ;

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

