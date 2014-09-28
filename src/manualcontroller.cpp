#include "manualcontroller.h"

ManualController::ManualController() : Controller()
{
    //ctor
}

//This needs to catch an event somehow?
void ManualController::doControls()
{
    for(int i = 0; i < sf::Keyboard::KeyCount; ++i)
    {
        sf::Keyboard::Key k = static_cast<sf::Keyboard::Key>(i);
        if(sf::Keyboard::isKeyPressed(k))
        {
            currentControl = k;
            break;
        }
    }
}

ManualController::~ManualController()
{
    //dtor
}
