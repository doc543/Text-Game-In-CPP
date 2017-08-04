/*******************************************************	
/	Display 
/	it displays things? 
*******************************************************/
#include <iostream>
#include <curses.h> //MUST ADD "-lncurses" TO G++ TO COMPILE
#include <string>
#include "Display.h"

using namespace std;

<<<<<<< Updated upstream
/*******************************************************	
/	Display Controctor
/	starts curses, initalizes various types. Sets the size
/	of consele window to class varables
*******************************************************/
=======
<<<<<<< Updated upstream
>>>>>>> Stashed changes
Display::Display(){
	initscr();			/* Start curses mode 		  */
	echo();
	getmaxyx(stdscr,consoleXSize, consoleYSize);
=======
/*******************************************************	
/	Display Controctor
/	starts curses, initalizes various types. Sets the size
/	of consele window to class varables
*******************************************************/
Display::Display(){
	initscr();			/* Start curses mode 		  */
	echo();
	getmaxyx(stdscr,consoleXSize, consoleYSize);
}

/*******************************************************	
/	Get input 
/	becouse curses uses c-strings a c-sting is crated 
/	input is aquired from ncurses then is converted to 
/	a string.
*******************************************************/
<<<<<<< Updated upstream
=======
string Display::getInput(int x0, int y0){
	char cStr[255];
	getstr(cStr);
	string str(cStr);
	return str;	
>>>>>>> Stashed changes
}

/*******************************************************	
/	refresh
/	I wanted to cencapilate nucrses in this class. Simply
/	calls the refresh() function from ncurses
*******************************************************/
void Display::refresh(){
	refresh();
}

<<<<<<< Updated upstream
>>>>>>> Stashed changes
string Display::getInput(int x0, int y0){
	char cStr[255];
	getstr(cStr);
	string str(cStr);
	return str;	
}

/*******************************************************	
/	refresh
/	I wanted to cencapilate nucrses in this class. Simply
/	calls the refresh() function from ncurses
*******************************************************/
void Display::refresh(){
	refresh();
}

/*******************************************************	
/	print body
/	Prints a string to the ncurse window. Sting geven to
/	it should be the main descriptor of the area in game
*******************************************************/
void Display::printBody(int x0, int y0, string body){
	mvprintw(x0, y0, body.c_str()); 
	
	//not sure why it has a location passed to the mvprint functuon
	//it should be set to the top left corner of the screen
	
	//need to add text wrap functionality 
}

<<<<<<< Updated upstream
=======
=======
/*******************************************************	
/	print body
/	Prints a string to the ncurse window. Sting geven to
/	it should be the main descriptor of the area in game
*******************************************************/
void Display::printBody(int x0, int y0, string body){
	mvprintw(x0, y0, body.c_str()); 
	
	//not sure why it has a location passed to the mvprint functuon
	//it should be set to the top left corner of the screen
	
	//need to add text wrap functionality 
}

>>>>>>> Stashed changes
/*******************************************************	
/	Draw horizontal line
/	Simply draws a horizontal line all the way across the 
/	screen.
*******************************************************/
<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes
>>>>>>> Stashed changes
void Display::drawHorzLine(int y0, char fillChar){

	for (int i = 0; i < consoleYSize; i++)
		mvaddch(y0, i, fillChar);
}

<<<<<<< Updated upstream
=======
<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes
/*******************************************************	
/	Draw vertical line
/	Simply draws a vertical line all the way across the 
/	screen.
*******************************************************/
<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes
>>>>>>> Stashed changes
void Display::drawVertLine(int x0, char fillChar){

	for (int i = 0; i < consoleXSize; i++)
		mvaddch(i, x0, fillChar);
}

<<<<<<< Updated upstream
=======
<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes
/*******************************************************	
/	Draw border
/	draws a border around the consele window. ncurses 
/	itself has a border draw function i need to chefck out
*******************************************************/
<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes
>>>>>>> Stashed changes
void Display::drawBorder(char charToUse){
    drawVertLine(0, '|');
	drawVertLine(consoleYSize -1, '|');
	drawHorzLine(0, '-');
	drawHorzLine(consoleXSize -1, '-');
}

<<<<<<< Updated upstream
=======
<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes
/*******************************************************	
/	Display Deconstructor
/	ends curses mode	
*******************************************************/
<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes
>>>>>>> Stashed changes
Display::~Display(){
	endwin();			/* End curses mode		  */   	
}
