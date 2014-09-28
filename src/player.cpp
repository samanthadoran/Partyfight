#include "player.h"

Player::Player(Controller * c, sf::Vector2f position) : Entity(c, position)
{
    //ctor
}

string Player::toString() const
{
    std::stringstream s;
    s << "Placeholder" << " is a Player Entity with a position of: (" << getPosition().x << ", " << getPosition().y << ")";
    return s.str();
}

Player::~Player()
{
    //dtor
}
