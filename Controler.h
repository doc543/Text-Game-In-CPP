/*******************************************************
/	Game
/
*******************************************************/
#include <iostream> //should I put these in the .h file and the .cpp file?
#include <string>

#ifndef CONTORL_H
#define CONTROL_H

class Controler {
    private:
        bool moveItemToInventory(std::string interactableName);
        bool changeDirection(std::string direction);
        bool activateInteractable(std::string interactabeName);
    public:
		std::string phraseInput(std::string input); //returns ture if error, should be used to ask user for input again
};

#endif
