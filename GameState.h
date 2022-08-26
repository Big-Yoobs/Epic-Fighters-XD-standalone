#pragma once
class GameState
{
private:
	bool IsSinglePlayer;
	int playerAmount;
	Player playerArray[];
	int RoundResult;


public:
	//functions
	void mainMenu();

	void NewGame();
	void Game();

	void HelpScreen();

	void RoundResult(int result);


	//setters
	void setIsSinglePlayer(bool singlePlayerBl);
	void setPlayerAmount(int numberofplayers);
	void setPlayerArray(Player player, int i);
	


	//getters
	bool getIsSinglePlayer();
	int getPlayerAmount();
	Player getPlayerArray(int i);
	





};

