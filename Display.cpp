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
/   class varables   
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
	printToCords(x0, y0, body);
}

/*******************************************************
/	Draw horizontal line
/	Simply draws a horizontal line all the way across the	screen.
*******************************************************/
void Display::drawHorzLine(int y0){
	for (int i = 0; i < consoleXSize; i++) {
		move(y0, i);
		if (i == 0)
			addch(ACS_LTEE);
		else if (i == consoleXSize - 1)
			addch(ACS_RTEE);
		else
			addch(ACS_HLINE);
	}
}

/*******************************************************
/	Draw vertical line
/	Simply draws a vertical line all the way across the screen.
*******************************************************/
void Display::drawVertLine(int x0){

	for (int i = 0; i < consoleYSize; i++){
		move(x0, i);
		if (i == 0)
			addch(ACS_BTEE);
		else if (i == consoleYSize -1)
			addch(ACS_TTEE);
		else
			addch(ACS_VLINE);
	}
}

/*******************************************************
/	Draw border
/	draws a border around the consele window. ncurses itself has a border draw
/   function i need to chefck out
*******************************************************/
void Display::drawBorder(){
	border(0, 0, 0, 0, 0, 0, 0, 0);
}

/*******************************************************
/	Print to cordinates
/	prints a string to given cordinates
*******************************************************/
void Display::printToCords(int x0, int y0, string str){
	string name = str;
	move(y0, x0);
	printw(str.substr(0, consoleXSize - 4).c_str());
	if (name.size() > consoleXSize - 4)
	{
		name.erase(0, consoleXSize - 4);
		printToCords(x0, y0 + 1, name);
	}
}

/*******************************************************
/	Display Deconstructor
/	ends curses mode
*******************************************************/
Display::~Display(){
	endwin();			/* End curses mode		  */
}

