#include "../include/actor.h"

Actor::Actor(Controller * c, sf::Vector2f position, string name) : Entity(position, name)
{
    controller = c;
}

Controller * Actor::getController()
{
    return controller;
}

void Actor::setController(Controller * c)
{
    controller = c;
}

Actor::~Actor()
{
    //dtor
}
