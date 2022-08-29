#pragma once
#include <vector>
#include "Player.h"
class GameState
{
private:
	bool IsSinglePlayer;
	int playerAmount;
	std::vector<Player> PlayersVec;
	


public:
	//functions
	void mainMenu();

	void NewGame();
	void Game();

	void HelpScreen();

	void RoundResult(int i);


	//setters
	void setIsSinglePlayer(bool singlePlayerBl);
	void setPlayerAmount(int numberofplayers);
	void setPlayersVector(Player player);
	


	//getters
	bool getIsSinglePlayer();
	int getPlayerAmount();
	Player getPlayersVector(int i);
	





};



