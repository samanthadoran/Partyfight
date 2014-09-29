#ifndef PLAYER_H
#define PLAYER_H

#include "../include/actor.h"


class Player : public Actor
{
    public:
        Player(Controller *, sf::Vector2f, string);
        virtual ~Player();

        void update();
        string toString() const;
    private:
};

#endif // PLAYER_H
