#include "Player.h"


//setters
//playerinput
void Player::setPlayerInput(std::string playerInput) {

	PlayerInput = playerInput;

}

//playername
void Player::setPlayerName() {

	std::cout << "ENTER YOUR NAME: ";
	std::cin >> PlayerName;
}

//playerhp
void Player::setPlayerHP(int playerHP) {
	playerHP = PlayerHP;

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

