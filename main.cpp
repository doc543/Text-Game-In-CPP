#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO GCC TO COMPILE
#include <string> // do I need this if I already added diaply.h that has the sting class in it?

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
    disp.drawBorder('+');
    disp.printBody(3, 2, "Welcome to game. It is good game!");
    disp.printBody(3, 4, "Console X size is");
    disp.printBody(3, 5, to_string( disp.getConsoleXSize() ));
    disp.printBody(3, 6, "Console Y size is");
    disp.printBody(3, 7, to_string( disp.getConsoleYSize() ));

    while (str != "exit"){ //maingame loop
        disp.drawHorzLine(disp.getConsoleYSize() - 5, '-');
        disp.drawBorder('+');
        
        str = disp.getInput(3, disp.getConsoleYSize() - 3);
        disp.refresh();
        disp.printBody(3, disp.getConsoleYSize() - 7, str);
    }
    return 0;
}
