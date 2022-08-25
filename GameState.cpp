
#include <iostream>
#include "GameState.h"
#include "CommonFunctions.h"
#include "Player.h"

CommonFunctions commonFunctionsMainMenu;

std::string menuInput;
void GameState::mainMenu() {
    //main menu display
    while (1) {
        std::cout << "\n\n\n\n\n\n";
        //title ascii
        std::cout << "\n             ___________ _____ _____                \n            |  ___| ___ \\_   _/  __ \\               \n            | |__ | |_/ / | | | /  \\/               \n            |  __||  __/  | | | |                   \n            | |___| |    _| |_| \\__/\\               \n            \\____/\\_|    \\___/ \\____/               \n                                                    \n                                                    \n______ _____ _____  _   _ _____ ___________  _____  \n|  ___|_   _|  __ \\| | | |_   _|  ___| ___ \\/  ___| \n| |_    | | | |  \\/| |_| | | | | |__ | |_/ /\\ `--.  \n|  _|   | | | | __ |  _  | | | |  __||    /  `--. \\ \n| |    _| |_| |_\\ \\| | | | | | | |___| |\\ \\ /\\__/ / \n\\_|    \\___/ \\____/\\_| |_/ \\_/ \\____/\\_| \\_|\\____/  \n                                                    \n                                                    \n                  __   _______                      \n                  \\ \\ / /  _  \\                     \n                   \\ V /| | | |                     \n                   /   \\| | | |                     \n                  / /^\\ \\ |/ /                      \n                  \\/   \\/___/                       \n                                                    \n                                                    \n\n";
        //title ascii
        std::cout << "\n\n";
        std::cout << "[1] SINGLE PLAYER   | [2] VS. FIGHT   |   [3] HELP   |   [4] QUIT\n\n\n";
        std::cout << "ENTER INPUT: ";
        std::cin >> menuInput;
        commonFunctionsMainMenu.WaitTime(1500);
        std::cout << "\n\n\n\n\n";
        //main menu display

        //main menu logic
        if (menuInput == "4") { //quit game
            break;
        }

        else if (menuInput == "3") { // help
            HelpScreen();
        }

        else if (menuInput == "1") { //single player
            newSinglePlayerGame();
            SinglePlayerGame();
            
        }

        //wrong input
        else { commonFunctionsMainMenu.WrongInput(); }

    }



}


//new game single player
void GameState::newSinglePlayerGame() {
    Player player11;
    player11.setPlayerHP(5);
    std::cout << "SINGLE PLAYER!\n" << std::endl;
    player11.setPlayerName();
    commonFunctionsMainMenu.WaitTime(1500);

}

//single player game logic
void GameState::SinglePlayerGame() {

}







//HELP SCREEN DISPLAY
void GameState::HelpScreen() {
    std::cout << "\n\n\n\n";
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "-                                            -" << std::endl;
    std::cout << "-                                            -" << std::endl;
    std::cout << "-               HOW TO PLAY                  -" << std::endl;
    std::cout << "-                                            -" << std::endl;
    std::cout << "-           Kicks beat Punches!              -" << std::endl;
    std::cout << "-           Punches beat Dodges!             -" << std::endl;
    std::cout << "-            Dodges beat Kicks!              -" << std::endl;
    std::cout << "-                                            -" << std::endl;
    std::cout << "-                                            -" << std::endl;
    std::cout << "-     ENTER ANY CHARACTER TO GO BACK         -" << std::endl;
    std::cout << "-                                            -" << std::endl;
    std::cout << "-                                            -" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "\nEnter input: ";
    std::cin >> menuInput;
    commonFunctionsMainMenu.WaitTime(1500);
    std::cout << "\n\n\n\n";


}
