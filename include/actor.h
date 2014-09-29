#ifndef ACTOR_H
#define ACTOR_H

#include "entity.h"


class Actor : public Entity
{
    public:
        Actor(Controller *, sf::Vector2f, string);
        virtual ~Actor();

        Controller * getController();
        void setController(Controller *);
    protected:
    private:
        Controller * controller;
};

#endif // ACTOR_H
