string PhraseInput(string input){

    //TODO: get first word of string
    string firstWord;
    string secondWord;

    switch(input){
        case "move" :
            if (changeDirection(secondWord))
            return "You cannot go there";
        case "get" :
            if (moveItemToInventory(secondWord))
            retrun "You cannot get that";
        case "use"
            if (activateInteractable(string interactabeName))
            retrun "You cannot do that";
    }
    return "";
    }

}