#pragma once
class GameState
{
private:
	bool IsSinglePlayer;


public:
	//functions
	void mainMenu();

	void NewGame();
	void Game();

	void HelpScreen();


	//setters
	void setIsSinglePlayer(bool singlePlayerBl);


	//getters
	bool getIsSinglePlayer();





};

