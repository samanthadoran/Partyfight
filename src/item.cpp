#include "../include/item.h"

Item::Item(sf::Vector2f position, string name) : Entity(position, name)
{
    //ctor
}

string Item::use(Entity * target)
{
    std::stringstream s;
    s << getName() << " is used on " << target->getName();
    update();
    return s.str();
}

string Item::toString() const
{
    return description;
}

void Item::update()
{
    ;
}


Item::~Item()
{
    //dtor
}
