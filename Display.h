<<<<<<< Updated upstream
=======
<<<<<<< Updated upstream
#include <iostream>
#include <string>
=======
>>>>>>> Stashed changes
/*******************************************************	
/	Display 
/	This class encapisilates the ncurses libary for eazy
/	use in a simple text based game, and some other stuff
/ 	too if I get board.
*******************************************************/
#include <iostream> //should I put these in the .h file and the .cpp file?
#include <string> 
<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes
>>>>>>> Stashed changes

#ifndef DISP_H 
#define DISP_H 

class Display {
    private:
        int consoleXSize;
		int consoleYSize;
    public:
		Display();
<<<<<<< Updated upstream
		~Display();
=======
<<<<<<< Updated upstream
>>>>>>> Stashed changes
		
		//functions
		void refresh();
		
		//getters
		std::string getInput(int x0, int y0);
		
		//setters
		void printBody(int x0, int y0, std::string body);
		void drawBorder(char borderChar);
        void drawHorzLine(int y0, char fillChar);
		void drawVertLine(int x0, char fillChar);
<<<<<<< Updated upstream
=======
				
		~Display();
=======
		~Display();
		
		//functions
		void refresh();
		
		//getters
		std::string getInput(int x0, int y0);
		
		//setters
		void printBody(int x0, int y0, std::string body);
		void drawBorder(char borderChar);
        void drawHorzLine(int y0, char fillChar);
		void drawVertLine(int x0, char fillChar);
>>>>>>> Stashed changes
>>>>>>> Stashed changes
};

#endif