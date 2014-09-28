#include "../include/entity.h"

Entity::Entity(Controller * c, sf::Vector2f position)
{
    //ctor
}

sf::Vector2f Entity::getPosition() const
{
    return position;
}

void Entity::setPosition(sf::Vector2f position)
{
    this->position = position;
}

void Entity::setController(Controller * c)
{
    this->c = c;
}

Entity::~Entity()
{
    //dtor
}
