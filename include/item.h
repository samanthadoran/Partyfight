#ifndef ITEM_H
#define ITEM_H

#include "entity.h"


class Item : public Entity
{
    public:
        Item(sf::Vector2f, string);
        virtual ~Item();
    protected:
    private:
};

#endif // ITEM_H
