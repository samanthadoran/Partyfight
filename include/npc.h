#ifndef NPC_H
#define NPC_H

#include "../include/actor.h"


class NPC : public Actor
{
    public:
        NPC(Controller *, sf::Vector2f, string);
        virtual ~NPC();

        void update();
        string toString() const;
    private:
};

#endif // NPC_H
