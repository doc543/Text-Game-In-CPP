#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO GCC TO COMPILE
#include "Display.h"
#include <string>

using namespace std;

int main()
{
   Display disp;
   
   disp.DrawHorzLine(10, '~');
   disp.DrawVertLine(10, 'I');
   disp.DrawBorder('x');

	
	
   refresh();			/* Print it on to the real screen */
   getch();			/* Wait for user input */
  
   return 0;
}