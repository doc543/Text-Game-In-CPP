#include "Controler.h"

using namespace std;

/*******************************************************
/	Draw horizontal line
/	Simply draws a horizontal line all the way across the	screen.
*******************************************************/
std::string Controler::phraseInput(std::string input){

    std::string firstWord, secondWord;
    int firstSpaceLoc;
    
    //gets first word of a string
    if (input.empty()){
        return "";
    } else {
        firstSpaceLoc = input.find_first_of(" ", 0);
        firstWord = input.substr(0, firstSpaceLoc);
        secondWord = input.substr(firstSpaceLoc + 1, input.size());
    }
    
    //dictates what the word means
    if (firstWord == "move") {
        if (changeArea(secondWord))
            return "You cannot go there";
    } else if (firstWord == "get") {
        if (moveItemToInventory(secondWord))
            return "You cannot get that";
    } else if (firstWord == "use") {
        if (activateInteractable(secondWord))
            return "You cannot do that";
    } else {
        return "Wut?";
    }
}
/*******************************************************
/	moveItemToInventory
/	takes item from area and moves it to inventory
*******************************************************/
bool Controler::moveItemToInventory(std::string interactableName){
  return true;
}

/*******************************************************
/	
/	Simply draws a horizontal line all the way across the	screen.
*******************************************************/
bool Controler::changeArea(std::string direction){
  return true;
}

/*******************************************************
/	Draw horizontal line
/	Simply draws a horizontal line all the way across the	screen.
*******************************************************/
bool Controler::activateInteractable(std::string interactabeName){
  return true;
}
