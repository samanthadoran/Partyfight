#include "../include/entity.h"

int Entity::currUUID = -1;

int Entity::generateUUID()
{
    return ++currUUID;
}

int Entity::getUUID() const
{
    return UUID;
}

string Entity::getName() const
{
    return name;
}

void Entity::setName(string name)
{
    this->name = name;
}

Entity::Entity(sf::Vector2f position, string name)
{
    UUID = Entity::generateUUID();
    this->position = position;
    this->name = name;
}

sf::Vector2f Entity::getPosition() const
{
    return position;
}

void Entity::setPosition(sf::Vector2f position)
{
    this->position = position;
}

Entity::~Entity()
{
    //dtor
}
