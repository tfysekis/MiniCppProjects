#ifndef OVERLOADS_H_INCLUDED
#define OVERLOADS_H_INCLUDED

#include "BasketballPlayer.h"

ostream &operator<<(ostream &os, BasketballPlayer player)
{
    return os << player.getPlayerDescription();
}

bool BasketballPlayer::operator==(BasketballPlayer player)
{
    if (player.getPosition() == this->position){
        return true;
    }else{
        return false;
    }
}

template <typename T>
void print(const T& value) {
    std::cout << value << std::endl;
}


#endif // OVERLOADS_H_INCLUDED
