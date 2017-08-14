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
		void printToCords(int x0, int y0, std::string str);
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
		void printHeader(std::string header);
		void printBody(int x0, int y0, std::string body);
		void drawBorder(void);
    	void drawHorzLine(int y0);
		void drawVertLine(int x0);
};

#endif
