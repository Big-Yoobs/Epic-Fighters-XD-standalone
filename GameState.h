#pragma once
class GameState
{
private:
	bool IsSinglePlayer;
	int playerAmount;


public:
	//functions
	void mainMenu();

	void NewGame();
	void Game();

	void HelpScreen();


	//setters
	void setIsSinglePlayer(bool singlePlayerBl);
	void setPlayerAmount(int numberofplayers);


	//getters
	bool getIsSinglePlayer();
	int getPlayerAmount();





};

