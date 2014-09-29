#ifndef ACTOR_H
#define ACTOR_H

#include "item.h"
#include "entity.h"

using std::vector;

class Actor : public Entity
{
    public:
        Actor(Controller *, sf::Vector2f, string);
        virtual ~Actor();

        Controller * getController();
        void setController(Controller *);

        string addItem(Item);
    protected:
    private:
        vector<Item> inventory;
        Controller * controller;
};

#endif // ACTOR_H
