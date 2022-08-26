
#include <iostream>
#include "GameState.h"
#include "CommonFunctions.h"
#include "Player.h"


CommonFunctions commonFunctionsMainMenu;
Player player1;
Player player2;
GameState Game;

void GameState::mainMenu() {
    //main menu display
    while (1) {
        std::cout << "\n\n\n\n\n\n";
        //title ascii
        std::cout << "\n             ___________ _____ _____                \n            |  ___| ___ \\_   _/  __ \\               \n            | |__ | |_/ / | | | /  \\/               \n            |  __||  __/  | | | |                   \n            | |___| |    _| |_| \\__/\\               \n            \\____/\\_|    \\___/ \\____/               \n                                                    \n                                                    \n______ _____ _____  _   _ _____ ___________  _____  \n|  ___|_   _|  __ \\| | | |_   _|  ___| ___ \\/  ___| \n| |_    | | | |  \\/| |_| | | | | |__ | |_/ /\\ `--.  \n|  _|   | | | | __ |  _  | | | |  __||    /  `--. \\ \n| |    _| |_| |_\\ \\| | | | | | | |___| |\\ \\ /\\__/ / \n\\_|    \\___/ \\____/\\_| |_/ \\_/ \\____/\\_| \\_|\\____/  \n                                                    \n                                                    \n                  __   _______                      \n                  \\ \\ / /  _  \\                     \n                   \\ V /| | | |                     \n                   /   \\| | | |                     \n                  / /^\\ \\ |/ /                      \n                  \\/   \\/___/                       \n                                                    \n                                                    \n\n";
        //title ascii
        std::cout << "\n\n";
        std::cout << "[1] SINGLE PLAYER   | [2] VS. FIGHT   |   [3] HELP   |   [4] QUIT\n\n\n";
        player1.setPlayerInput();
        commonFunctionsMainMenu.WaitTime(1500);
        std::cout << "\n\n\n\n\n";
        //main menu display

        //main menu logic
        if (player1.getPlayerInput() == "4") { //quit game
            break;
        }

        else if (player1.getPlayerInput() == "3") { // help
            HelpScreen();
        }

        else if (player1.getPlayerInput() == "1") { //single player
            setIsSinglePlayer(true);
            NewGame();
            Game();
            
        }

        //wrong input
        else { commonFunctionsMainMenu.WrongInput(); }

    }



}


//new game
void GameState::NewGame() {

    player1.setPlayerHP(5);
    player2.setPlayerHP(5);
    if (getIsSinglePlayer()) {
        player2.setPlayerAIName("JACK"); //setting ai player's name
        setPlayerAmount(1);
        std::cout << "SINGLE PLAYER!\n" << std::endl;
    }
    std::cout << "\nPLAYER ONE: \n\n";
    player1.setPlayerName();
    commonFunctionsMainMenu.WaitTime(1500);

    if (!getIsSinglePlayer()) {
        std::cout << "\nPLAYER TWO: \n\n";
        player2.setPlayerName();
        commonFunctionsMainMenu.WaitTime(1500);
    }

}

//game logic
void GameState::Game() {
    while (1 == 1) {

        for (int i = 0; i < getPlayerAmount(); i++) { //loops through this part for the amount of players
            std::cout << "\n\n\n\n\n\n\n\n";

            //health bars and names
            std::cout << player1.getPlayerName(); //top name and health bar code: "PlayerName: |||||||| (this is health) vs |||||| :AIbotName"
            std::cout << ":  ";
            for (int i = 0; i <= player1.getPlayerHP(); i++) { //health bar display loop player

                std::cout << "|";

            }
            std::cout << "     VS.     ";
            for (int i = 0; i <= player2.getPlayerHP(); i++) { //health bar display loop aibot
                std::cout << "|";
            }
            std::cout << "  :";
            std::cout << player2.getPlayerName();
            std::cout << "\n\n";
            //healthbars and names

            //IDLE ASCII ART
            std::cout << "                                                                                                                        \n                  ###%%%                                                                            +===*               \n                 ########                                                                         --*****:--.           \n               ###*#%*#@#                                                                         =-+-*+*%%  =::        \n               # #++:++:@                                                                        .-=+*==+**%%=%::.      \n    :   =   *--:+++*+==%****                                                 ++               ---+=++++++:===+=+-:+     \n      *=*:*:  ..=*+:++.    +:-::                                               %%*%          :+::+*=+++++++=-=++-+*:    \n       :%** *=.:-::+-..  .*---:++                                         =#@@#=:##%+      -:+:++*%=***=++++:+++-:*::+  \n       +*%***=.-.++--. .:::+++=%*                                              ###%+:--::%---.-:+%%%***%%:::+-++--*=+=+ \n       +++++**==%=:++::+:-:++=**                                                    +:--.-::::+* **%**%%%%+=+=:=++=*=== \n       +=++*+-:=+:::+::-:=*=***                                                       +::-:::+   %%%%%%%%+%%%*=*+**+::= \n       +*:=*=*:=*::::++=+==*%                                                           :::     %=***=%*%*%%%***-**+=   \n        ==*  =**=*==+=***=***                                                                   *=***========*=++       \n              %*::=*====*%###                                                                  %*====*%**=*%%%* =       \n              %*%%%#%%%##%%*%                                                                %**++=***%%#%=             \n             %==+*%%*-:--.=%=*                                                             *%%#*++====***               \n            **+...=*=..-.:-=*=*                                                          :+=***%*++=====%               \n            %*=-..%==---:..++* *                                                        +=***=%%+::++==+*               \n            *%=*****%=+=:..-:=                                                         +==**%%%%+::++===*               \n            .:====*% +*:   .-=                                                        =****%%%%  +++====*               \n            .--:***   *=    -+=                                                      =**%%=%%    =++==***               \n            -+=*=*    +-.  .-+=                                                      =*==%%%     ===***%                \n           -=***%       :...-++                                                       *==*=====   ++==+*                \n          -**%%*         +-...=                                                        =*=====**  +++++=*               \n       ..=*%*%=           +  .-*                                                         *******=  ++++++==             \n       -+==+=*%           -+::===                                                         *%**=%%   *===++===           \n       .--:+=**            :+====*                                                         ***%*==   =*=====*           \n      -.-:+++=              -:-:+=*                                                        +%==*=%=    ==*=**=          \n      :.::+=*                ::::=*                                                         ===:%=:+=  ===*%=**         \n      ..::-**                --..:==                                                         :=+:=++    **==+=%=        \n        .::+                 -.  :-                                                           *%%-+      +%=+=+*=       \n     ::+=%                     .%%%%                                                         +=*-        ***=+===*      \n   ++::==*%                    *:-:=++                                                      --          =++%*+=***      \n   ++::==*%                    *:-:=++                                                      --          =++%*+=***      \n\n";
            //IDLE ASCII ART

            //fight menu
            std::cout << "[K]ICK | [P]UNCH | [D]ODGE |          [Q]uit|" << std::endl;
            std::cout << "PLAYER " << ( i + 1 );
            
            if (i == 0) { //player 1 input
                player1.setPlayerInput();
                player1.PlayerAttackInputSwitch(player1.getPlayerInput());
            }

            if (!getIsSinglePlayer()) { //human player 2 input
                if (i > 0) {
                    player2.setPlayerInput();
                    player2.PlayerAttackInputSwitch(player2.getPlayerInput());
                }
            }

            else if (getIsSinglePlayer()) {
                player2.setPlayerAIRandomAttackNumber();
                //player2.PlayerAttackInputSwitch(player2.getPlayerAIRandomAttackNumber()); NEEDS TO GO TO SWITCH

            }

            

        }
        

    }


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
    std::cout << "\n";
    player1.getPlayerInput();
    commonFunctionsMainMenu.WaitTime(1500);
    std::cout << "\n\n\n\n";


}



//setters
//Single player true of false
void GameState::setIsSinglePlayer(bool singlePlayerBl) {

    IsSinglePlayer = singlePlayerBl;
}

//Number of human players (1 or 2)
void GameState::setPlayerAmount(int numberofplayers) {

    playerAmount = numberofplayers;
}


//getters
//Single player true or false
bool GameState::getIsSinglePlayer() {
    return IsSinglePlayer;
}

//Number of human players (1 or 2)
int GameState::getPlayerAmount() {
    return playerAmount;
}

