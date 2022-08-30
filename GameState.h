#pragma once
#include <vector>
#include "Player.h"
#include "CommonFunctions.h"
class GameState
{
private:
	int GameMode;
	int playerAmount;
	int playerWin;
	bool GameRun;
	


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
	void setGameRun(bool rungame);
	void setPlayerWin(int playerNum);
	void setIsComVCom(bool comVComBl);
	


	//getters
	int getGameMode();
	int getPlayerAmount();	
	int getPlayerWin();
	bool getGameRun();
	
	CommonFunctions* commonFunctions;
	GameState(CommonFunctions& commonFunctions);

};



