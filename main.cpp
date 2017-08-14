#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO GCC TO COMPILE
#include <string>

#include "Display.h"
#include "Controler.h"

using namespace std;

/*******************************************************
/	main
/	should just call a "Game" class. Curently just used
/   for testing methods
*******************************************************/
int main()
{
    Display disp;
    Controler game;
    string str = "";
    
    //begeining of game
    disp.drawBorder();
    disp.printBody(2, 1, "Welcome to game. It is good game!");
    disp.printBody(2, 3, "Console X size is");
    disp.printBody(2, 4, to_string( disp.getConsoleXSize() ));
    disp.printBody(2, 5, "Console Y size is");
    disp.printBody(2, 6, to_string( disp.getConsoleYSize() ));
    disp.printBody(2, 8, "Text Wrap Test: 1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890");

    while (str != "exit"){ //maingame loop        
        disp.drawBorder();
        disp.drawHorzLine(disp.getConsoleYSize() - 3);
        
        str = disp.getInput(2, disp.getConsoleYSize() - 2);
        game.phraseInput(str);
        disp.refresh();
        disp.printBody(2, 1, game.phraseInput(str));
        disp.printBody(2, disp.getConsoleYSize() - 5, str);
    }
    return 0;
}
