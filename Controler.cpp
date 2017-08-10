#include "Controler.h"

using namespace std;

/*******************************************************
/	Draw horizontal line
/	Simply draws a horizontal line all the way across the	screen.
*******************************************************/
std::string Controler::phraseInput(std::string input){

    //TODO: make functionthat gets first word of a string
    std::string firstWord;
    std::string secondWord;

    firstWord = input;//

    if (firstWord == "move") {
        if (changeDirection(secondWord))
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
/	Draw horizontal line
/	Simply draws a horizontal line all the way across the	screen.
*******************************************************/
bool Controler::moveItemToInventory(std::string interactableName){
  return true;
}

/*******************************************************
/	Draw horizontal line
/	Simply draws a horizontal line all the way across the	screen.
*******************************************************/
bool Controler::changeDirection(std::string direction){
  return true;
}

/*******************************************************
/	Draw horizontal line
/	Simply draws a horizontal line all the way across the	screen.
*******************************************************/
bool Controler::activateInteractable(std::string interactabeName){
  return true;
}
