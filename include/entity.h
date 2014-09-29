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
        Entity(sf::Vector2f, string);
        virtual ~Entity();

        int getUUID() const;

        string getName() const;
        void setName(string);

        sf::Vector2f getPosition() const;
        void setPosition(sf::Vector2f);

        virtual string toString() const = 0;
        virtual void update() = 0;

    protected:
        void move(sf::Vector2f);

    private:
        static int currUUID;
        static int generateUUID();

        string name;
        int UUID;
        sf::Vector2f position;

};

#endif // ENTITY_H
