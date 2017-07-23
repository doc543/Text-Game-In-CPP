#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO G++ TO COMPILE
#include <string>
#include "Display.h"


using namespace std;

Display::Display(){
	initscr();			/* Start curses mode 		  */
	getmaxyx(stdscr,consoleXSize, consoleYSize);
}


string Display::getInput(int x0, int y0){
	//getstr(); 
}

void Display::drawHorzLine(int y0, char fillChar){

	for (int i = 0; i < consoleYSize; i++)
		mvaddch(y0, i, fillChar);
}

void Display::drawVertLine(int x0, char fillChar){

	for (int i = 0; i < consoleXSize; i++)
		mvaddch(i, x0, fillChar);
}

void Display::drawBorder(char charToUse){
    drawVertLine(0, '|');
	drawVertLine(consoleYSize -1, '|');
	drawHorzLine(0, '-');
	drawHorzLine(consoleXSize -1, '-');
}

Display::~Display(){
	endwin();			/* End curses mode		  */   	
}
