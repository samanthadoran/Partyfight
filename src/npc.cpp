#include "npc.h"

NPC::NPC(Controller * c, sf::Vector2f position, string name) : Entity(c, position, name)
{

}

void NPC::update()
{
    getController()->getControls();
}

string NPC::toString() const
{
    std::stringstream s;
    s << getName() << " is an NPC Entity with a position of: (" << getPosition().x << ", " << getPosition().y << ") and a UUID of " << getUUID();
    return s.str();
}

NPC::~NPC()
{
    //dtor
}
