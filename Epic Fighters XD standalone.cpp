// Epic Fighters XD standalone.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CommonFunctions.h"
#include "Player.h"


std::string playerInput;

int main() {
    CommonFunctions commonFunctions;
    Player Player1;
    while (1) {
        std::cout << "DEBUG MODE\n";
        std::cout << "Debug mode switches off WaitTime(milliseconds) function.\n\n";
        std::cout << "Would you like to turn debug mode on? (Y/N): ";
        std::cin >> playerInput;

        Player1.setPlayerInput(playerInput);
        if (Player1.getPlayerInput() == "Y" || Player1.getPlayerInput() == "y") {
            commonFunctions.setDebugMode(true);
            break;
        }

        else if (Player1.getPlayerInput() == "N" || Player1.getPlayerInput() == "n") {
            commonFunctions.setDebugMode(false);
            break;
        }

        else {
            commonFunctions.WrongInput();
        }
    }


    std::cout << "Debug mode set to \"" << commonFunctions.getDebugMode() << "\"";
    commonFunctions.WaitTime(1500);

    




    

    
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
