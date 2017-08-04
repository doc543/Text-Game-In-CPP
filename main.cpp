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

    disp.drawHorzLine(5, '-');
    disp.drawVertLine(10, '|');
    disp.drawBorder('x');
    disp.printBody(2, 3, "Halla halla get dalla");

    string str;
    str = disp.getInput(3, 5);
    disp.printBody(7, 6, str);

    disp.printBody(6, 9, game.phraseInput(str));

    disp.printBody(8, 5, "GIT GUD");
    getch();			/* Wait for user input */

    return 0;
}
