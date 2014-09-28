#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <SFML/Graphics.hpp>
#include <vector>

class Controller
{
    public:
        Controller();
        virtual ~Controller();
        sf::Keyboard::Key getControls() const;
        virtual void doControls() = 0;
    protected:
        sf::Keyboard::Key currentControl;
    private:

};

#endif // CONTROLLER_H
