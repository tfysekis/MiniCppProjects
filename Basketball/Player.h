#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>


using namespace std;

class Player
{
    public:
        Player();
        Player(string , string );
        string getName() { return this->name; };
        string getSurname() { return this->surname; };
        virtual string getPlayerDescription();
    private:
        string name,surname;
};

#endif // PLAYER_H
