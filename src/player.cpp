#include "player.h"

Player::Player(Controller * c, sf::Vector2f position, string name) : Entity(c, position, name)
{
    //ctor
}

void Player::update()
{
    getController()->getControls();
}

string Player::toString() const
{
    std::stringstream s;
    s << getName() << " is a Player Entity with a position of: (" << getPosition().x << ", " << getPosition().y << ") and a UUID of " << getUUID();
    return s.str();
}

Player::~Player()
{
    //dtor
}
