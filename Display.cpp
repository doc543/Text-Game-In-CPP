/*******************************************************
/	Display
/	it displays things?
*******************************************************/
#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO G++ TO COMPILE
#include <string>
#include "Display.h"

using namespace std;

/*******************************************************
/	Display Controctor
/	starts curses, initalizes various types. Sets the size of consele window to
/class varables
*******************************************************/
Display::Display(){
	initscr();			/* Start curses mode 		  */
	echo();
	getmaxyx(stdscr, consoleYSize, consoleXSize);
}

/*******************************************************
/	Get input
/	becouse curses uses c-strings a c-sting is crated input is aquired from
/   ncurses then is converted to a string.
*******************************************************/
string Display::getInput(int x0, int y0){
	move(y0, x0);//all ncuses functions are y,x
	char cStr[255]; //this nonsence changes a cstr to a str
	getstr(cStr);
	string str(cStr);
	return str;
}

/*******************************************************
/	refresh
/	I wanted to cencapilate nucrses in this class. Simply	calls the refresh()
/   function from ncurses
*******************************************************/
void Display::refresh(){
	werase(stdscr);
	//wrefresh(stdscr);
	getmaxyx(stdscr, consoleYSize, consoleXSize);
}

/*******************************************************
/	print body
/	Prints a string to the ncurse window. Sting geven to it should be the main
/descriptor of the area in game
*******************************************************/
void Display::printBody(int x0, int y0, string body){
	move(y0, x0);
	printw(body.c_str());

	//not sure why it has a location passed to the mvprint functuon
	//it should be set to the top left corner of the screen

	//need to add text wrap functionality
}

/*******************************************************
/	Draw horizontal line
/	Simply draws a horizontal line all the way across the	screen.
*******************************************************/
void Display::drawHorzLine(int y0, char fillChar){
	for (int i = 0; i < consoleXSize; i++) {
		move(y0, i);
		if (i == 0)
			addch(ACS_LTEE);
		else if (i == consoleXSize)
			addch(ACS_RTEE);
		else
			addch(ACS_HLINE);
	}
}

/*******************************************************
/	Draw vertical line
/	Simply draws a vertical line all the way across the screen.
*******************************************************/
void Display::drawVertLine(int x0, char fillChar){

	for (int i = 0; i < consoleYSize; i++){
		move(y0, i);
		if (i == 0)
			addch(ACS_BTEE);
		else if (i == consoleYSize)
			addch(ACS_VTEE);
		else
			addch(ACS_VLINE);
	}
}

/*******************************************************
/	Draw border
/	draws a border around the consele window. ncurses itself has a border draw
/function i need to chefck out
*******************************************************/
void Display::drawBorder(char charToUse){
	int border(0, 0, 0, 0, 0, 0, 0, 0);
    //drawVertLine(0, '|');
	//drawVertLine(consoleXSize -1, '|');
	//drawHorzLine(0, '-');
	//drawHorzLine(consoleYSize -1, '-');
}

/*******************************************************
/	Display Deconstructor
/	ends curses mode
*******************************************************/
Display::~Display(){
	endwin();			/* End curses mode		  */
}

