#pragma once
#include <vector>
#include "Player.h"
#include "CommonFunctions.h"
class GameState
{
private:
	int GameMode;
	
	int playerAmount;
	Player PlayersArray[2];
	int playerWin;
	


public:
	//functions
	void mainMenu();

	void NewGame();
	void Game();

	void HelpScreen();

	void RoundResult(int i);

	void GameEnd();


	//setters
	void setGameMode(int gameModeSelector);
	void setPlayerAmount(int numberofplayers);
	void setPlayersArray(Player player, int i);
	void setPlayerWin(int playerNum);
	void setIsComVCom(bool comVComBl);
	


	//getters
	int getGameMode();
	int getPlayerAmount();
	Player getPlayersArray(int i);
	int getPlayerWin();
	
	CommonFunctions* commonFunctions;
	GameState(CommonFunctions& commonFunctions);





};



