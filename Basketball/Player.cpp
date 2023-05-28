#include "Player.h"

Player::Player(string name,string surname)
{
    this->name = name;
    this->surname = surname;
}

string Player::getPlayerDescription()
{
    return getName() + "-" + getSurname();
}


Player::Player()
{
    this->name = "";
    this->surname = "";
}
