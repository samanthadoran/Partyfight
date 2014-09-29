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

Entity::Entity(Controller * c, sf::Vector2f position, string name)
{
    UUID = Entity::generateUUID();
    controller = c;
    this->position = position;
    this->name = name;
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
