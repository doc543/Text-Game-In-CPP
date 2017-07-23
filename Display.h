#include <iostream>
#include <string>

#ifndef DISP_H 
#define DISP_H 

class Display {
    private:
        int consoleXSize;
		int consoleYSize;
    public:
		Display();
		
		std::string getInput(int x0, int y0);
		
		
        void drawBorder(char borderChar);
        void drawHorzLine(int y0, char fillChar);
		void drawVertLine(int x0, char fillChar);
				
		~Display();
};

#endif