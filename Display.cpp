#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO G++ TO COMPILE
#include "Display.h"

using namespace std;

Display::Display(){
	initscr();			/* Start curses mode 		  */
	getmaxyx(stdscr,consoleXSize, consoleYSize);
}

void Display::DrawHorzLine(int y0, char fillChar){
	int row, col;	
	getmaxyx(stdscr,row,col); //should be but in a contructor and added as a class varable
	
	for (int i = 0; i > col; i++)
		mvaddch(row,col,fillChar);
}


void Display::DrawBox(int x0, int y0, int x1, int y1, char charToUse, bool fill){
    /*
	cout << "Drawing Box with " << charToUse << " at " 
         << x0 << "," << y0 << " and "
         << x1 << "," << y1;
    if (!fill)
        cout << " no";
    cout << " fill" << endl;
	*/
}


void Display::Display::DrawBorder(char charToUse){
    DrawBox(0, 0, 85, 20, charToUse, true);
}

void Display::DrawLine(int x0, int y0, int x1, int y1) {
  /*
  int dx, dy, D, y;  
  plotLine(x0,y0, x1,y1)
  dx = x1 - x0
  dy = y1 - y0
  D = 2*dy - dx
  y = y0

  for (x from x0 to x1) {
    //plot(x,y)
    if D > 0
       y = y + 1
       D = D - 2*dx
    end if
    D = D + 2*dy    
  }
  */
  
  
}

Display::~Display(){
	endwin();			/* End curses mode		  */   	
}
