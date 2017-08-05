/*******************************************************
/	Display
/	This class encapisilates the ncurses libary for eazy
/	use in a simple text based game, and some other stuff
/ 	too if I get board.
*******************************************************/
#include <string>

#ifndef DISP_H
#define DISP_H

class Display {
    private:
        int consoleXSize;
		int consoleYSize;
    public:
		Display();
		~Display();

    	//functions
		void refresh();
		std::string getInput(int x0, int y0);

		//getters
		int getConsoleXSize() {return consoleXSize;};
		int getConsoleYSize() {return consoleYSize;};

		//setters
		void printBody(int x0, int y0, std::string body);
		void drawBorder(char borderChar);
    	void drawHorzLine(int y0, char fillChar);
		void drawVertLine(int x0, char fillChar);
};

#endif
