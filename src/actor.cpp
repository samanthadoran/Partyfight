#include "../include/actor.h"

Actor::Actor(Controller * c, sf::Vector2f position, string name) : Entity(position, name)
{
    controller = c;
}

Controller * Actor::getController()
{
    return controller;
}

string Actor::addItem(Item i)
{
    std::stringstream s;
    inventory.push_back(i);
    s << getName() << " obtains" << i.getName();
    return s.str();
}

void Actor::setController(Controller * c)
{
    controller = c;
}

Actor::~Actor()
{
    //dtor
}
