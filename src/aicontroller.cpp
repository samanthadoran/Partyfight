#include "aicontroller.h"

AIController::AIController() : Controller()
{

}

void AIController::doControls()
{
    currentControl = static_cast<sf::Keyboard::Key>(rand() % sf::Keyboard::KeyCount);
}

AIController::~AIController()
{
    //dtor
}
