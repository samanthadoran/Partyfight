#include "aicontroller.h"

AIController::AIController() : AutomatedController()
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
