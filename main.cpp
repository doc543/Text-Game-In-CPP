#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO GCC TO COMPILE
#include "Display.h"
#include <string>

using namespace std;

int main()
{
   Display disp;
   
   disp.drawHorzLine(5, '-');
   disp.drawVertLine(10, '|');
   disp.drawBorder('x');
   disp.printBody(2, 3, "Halla halla get dalla");
   
   
   string str;
   str = disp.getInput(3, 5);
   str = disp.getInput(4, 6);
   disp.printBody(7, 6, str);
	
   refresh();			/* Print it on to the real screen */
   getch();			/* Wait for user input */
  
   return 0;
}