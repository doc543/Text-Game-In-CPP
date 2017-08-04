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
        bool moveItemToInventory(string interactableName);
        bool changeDirection(string direction);
        bool activateInteractable(string interactabeName);
    public:
		string PhraseInput(string input); //returns ture if error, should be used to ask user for input again
		
};

#endif