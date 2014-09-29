#include "include/player.h"
#include "include/npc.h"
#include <iostream>

using std::vector;

int main()
{
    srand(time(0));

    vector<Actor *> actors;
    Player p(new ManualController(), sf::Vector2f(0, 0), "Sammi");
    NPC n(new AIController(), sf::Vector2f(5, 0), "Number 5");

    actors.push_back(&p);
    actors.push_back(&n);

    // Create the main window
    sf::RenderWindow app(sf::VideoMode(800, 600), "SFML window");

	// Start the game loop
    while (app.isOpen())
    {
        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app.close();

            if(event.type == sf::Event::KeyPressed)
                if(event.key.code == sf::Keyboard::Escape)
                    app.close();
        }
        // Clear screen
        app.clear();

        for(Entity * e: actors)
            e->toString();

        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}
