#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO G++ TO COMPILE
#include "Display.h"

using namespace std;

Display::Display(){
	initscr();			/* Start curses mode 		  */
	getmaxyx(stdscr,consoleXSize, consoleYSize);
}

void Display::DrawHorzLine(int y0, char fillChar){

	for (int i = 0; i < consoleYSize; i++)
		mvaddch(y0, i,fillChar);
}

void Display::DrawVertLine(int x0, char fillChar){

	for (int i = 0; i < consoleXSize; i++)
		mvaddch(i, x0,fillChar);
}


void Display::DrawBox(int x0, int y0, int x1, int y1, char charToUse, bool fill){
    
}


void Display::Display::DrawBorder(char charToUse){
    DrawVertLine(0, '|');
	DrawVertLine(consoleYSize -1, '|');
	DrawHorzLine(0, '-');
	DrawHorzLine(consoleXSize -1, '-');
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
