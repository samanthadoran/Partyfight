#include "../include/controller.h"

Controller::Controller()
{
    //ctor
}

sf::Keyboard::Key Controller::getControls() const
{
    return currentControl;
}

Controller::~Controller()
{
    //dtor
}
