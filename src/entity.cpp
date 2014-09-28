#include "../include/entity.h"

Entity::Entity(Controller * c, sf::Vector2f position)
{
    controller = c;
    this->position = position;
}

sf::Vector2f Entity::getPosition() const
{
    return position;
}

Controller * Entity::getController()
{
    return controller;
}

void Entity::setPosition(sf::Vector2f position)
{
    this->position = position;
}

void Entity::setController(Controller * c)
{
    controller = c;
}

Entity::~Entity()
{
    //dtor
}
