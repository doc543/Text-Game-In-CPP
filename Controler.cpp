#include "Controler.h"
#include <string>
#include "pugixml.hpp"

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
        if (takeItem(secondWord))
            return "You cannot get that";
    } else if (firstWord == "use") {
        if (combineItems(secondWord, "Placeholder"))
            return "You cannot do that";
    } else {
        return "Wut?";
    }
}
bool Controler::changeArea(std::string direction){
    //compare direction with acceptable values
    //if there is a 
}        
bool Controler::eventSet(std::string eventName){

}
bool Controler::eventRemove(std::string eventName){

}
bool Controler::takeItem(std::string item){

}
bool Controler::loseItem(std::string item){

}
bool Controler::combineItems(std::string item1, std::string item2){

}