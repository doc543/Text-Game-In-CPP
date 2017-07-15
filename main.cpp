#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO GCC TO COMPILE
#include "Display.h"
#include <string>

using namespace std;

int main()
{
   initscr();			/* Start curses mode 		  */
	
   Display disp;
   
   int row, col;
   getmaxyx(stdscr,row,col);
    
   printw(to_string(row).c_str());
   printw(" ");
   printw(to_string(col).c_str());
   
   disp.DrawHorzLine(2, '~');
    
   refresh();			/* Print it on to the real screen */
    getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */   
   
   return 0;
}