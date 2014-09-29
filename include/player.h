#ifndef PLAYER_H
#define PLAYER_H

#include "../include/entity.h"


class Player : public Entity
{
    public:
        Player(Controller *, sf::Vector2f, string);
        virtual ~Player();

        void update();
        string toString() const;
    private:
};

#endif // PLAYER_H
