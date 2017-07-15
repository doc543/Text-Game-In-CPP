#include <iostream>

#ifndef DISP_H 
#define DISP_H 

class Display {
    private:
        int conXSize;
		int conYSize;
    public:
        void DrawBorder(char borderChar);
        void DrawLine(int x0, int y0, int x1, int y1);
		void DrawHorzLine(int y0, char fillChar);
		void DrawBox(int x0, int y0, int x1, int y1, char charToUse, bool fill);
};

#endif