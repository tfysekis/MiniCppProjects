#ifndef BASKETBALLPLAYER_H
#define BASKETBALLPLAYER_H
#include "Player.h"

class BasketballPlayer : public Player
{
    public:
        BasketballPlayer(string name, string surname, string position);
        string getPosition() { return this->position; }
        string getPlayerDescription();
        bool operator==(BasketballPlayer);
    private:
        string position;
};


ostream &operator<<(ostream &, BasketballPlayer);

#endif // BASKETBALLPLAYER_H
