/*******************************************************
/	Game
/
*******************************************************/
#include <iostream> //should I put these in the .h file and the .cpp file?
#include <string>
#include "pugixml.hpp"

#ifndef CONTORL_H
#define CONTROL_H

class Controler {
    private:

        //methods that
        bool changeArea(std::string direction);
        
        bool eventSet(std::string eventName);
        bool eventRemove(std::string eventName);

        bool takeItem(std::string item);
        bool loseItem(std::string item);
        bool combineItems(std::string item1, std::string item2);

    public:
		std::string phraseInput(std::string input); //returns ture if error, should be used to ask user for input again
};

#endif
