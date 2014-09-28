#include "npc.h"

NPC::NPC(Controller * c, sf::Vector2f position) : Entity(c, position)
{

}

void NPC::update()
{
    getController()->getControls();
}

string NPC::toString() const
{
    std::stringstream s;
    s << "Placeholder" << " is an NPC Entity with a position of: (" << getPosition().x << ", " << getPosition().y << ")";
    return s.str();
}

NPC::~NPC()
{
    //dtor
}
