#ifndef NPC_H
#define NPC_H

#include "../include/entity.h"


class NPC : public Entity
{
    public:
        NPC(Controller *, sf::Vector2f, string);
        virtual ~NPC();

        void update();
        string toString() const;
    private:
};

#endif // NPC_H
