#ifndef ENTITY_H
#define ENTITY_H
#include <SFML/Graphics.hpp>
#include <string.h>
#include <sstream>

using std::string;

#include "manualcontroller.h"
#include "aicontroller.h"

class Entity
{
    public:
        Entity(Controller *, sf::Vector2f);
        virtual ~Entity();

        sf::Vector2f getPosition() const;
        void setPosition(sf::Vector2f);
        void setController(Controller *);
        void move(sf::Vector2f);

        virtual string toString() const = 0;
    private:
        sf::Vector2f position;
        Controller * c;
};

#endif // ENTITY_H
