#ifndef ITEM_H
#define ITEM_H

#include "entity.h"


class Item : public Entity
{
    public:
        Item(sf::Vector2f, string);
        virtual ~Item();
        string use(Entity*);
        string toString() const;
        void update();
    protected:
    private:
        string description;
};

#endif // ITEM_H
