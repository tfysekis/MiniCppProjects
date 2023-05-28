#include "BasketballPlayer.h"

BasketballPlayer::BasketballPlayer(string name, string surname, string position) : Player(name,surname), position(position)
{
    int count = 0;
    for (int i = 0; i < position.length(); i++){
        count++;
    }
    if (count < 3){
        this->position  ="unknown";
    }
}


string BasketballPlayer::getPlayerDescription()
{
    return getName() + "-" + getSurname() + "-" + getPosition();
}



