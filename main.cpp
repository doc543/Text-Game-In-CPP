#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO GCC TO COMPILE
#include "Display.h"
#include <string>

using namespace std;

int main()
{
   Display disp;
   
   disp.drawHorzLine(10, '-');
   disp.drawVertLine(10, '|');
   disp.drawBorder('x');
   
   
   //string str;
   //str = disp.getInput(3, 5);
	
	
   refresh();			/* Print it on to the real screen */
   getch();			/* Wait for user input */
  
   return 0;
}