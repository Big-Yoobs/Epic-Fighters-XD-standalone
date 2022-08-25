#include "MainMenu.h"
#include "CommonFunctions.h"
#include <iostream>

CommonFunctions commonFunctionsMainMenu;

std::string menuInput;
void MainMenu::MainMenuDisplay() {

    std::cout << "\n\n\n\n\n\n";
    //title ascii
    std::cout << "\n             ___________ _____ _____                \n            |  ___| ___ \\_   _/  __ \\               \n            | |__ | |_/ / | | | /  \\/               \n            |  __||  __/  | | | |                   \n            | |___| |    _| |_| \\__/\\               \n            \\____/\\_|    \\___/ \\____/               \n                                                    \n                                                    \n______ _____ _____  _   _ _____ ___________  _____  \n|  ___|_   _|  __ \\| | | |_   _|  ___| ___ \\/  ___| \n| |_    | | | |  \\/| |_| | | | | |__ | |_/ /\\ `--.  \n|  _|   | | | | __ |  _  | | | |  __||    /  `--. \\ \n| |    _| |_| |_\\ \\| | | | | | | |___| |\\ \\ /\\__/ / \n\\_|    \\___/ \\____/\\_| |_/ \\_/ \\____/\\_| \\_|\\____/  \n                                                    \n                                                    \n                  __   _______                      \n                  \\ \\ / /  _  \\                     \n                   \\ V /| | | |                     \n                   /   \\| | | |                     \n                  / /^\\ \\ |/ /                      \n                  \\/   \\/___/                       \n                                                    \n                                                    \n\n";
    //title ascii
    std::cout << "\n\n";
    std::cout << "[1] SINGLE PLAYER   | [2] VS. FIGHT   |   [3] HELP   |   [4] QUIT\n\n\n";
    std::cout << "ENTER INPUT: ";
    std::cin >> menuInput;



}



void MainMenu::HelpScreen() {
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
