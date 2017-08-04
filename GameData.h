/*******************************************************	
/	Game 
/	
*******************************************************/
#include <iostream> //should I put these in the .h file and the .cpp file?
#include <string> 

#ifndef GAMEDATA_H 
#define GAMEDATA_H 

struct interactable{
	string name;
	string descInventory;
	string descLocation;
};

struct location{
	string locationDisc;
	string interactable[5];
	bool north;
	bool south;
	bool east;
	bool west;
};

class GameData {
    private:
        location[255, 255];
		inventory interactable[255];
		
    public:
		GameData();
		~GameData();
		
		
};

#endif