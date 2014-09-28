#include "include/player.h"
#include "include/npc.h"
#include <iostream>

void test(Entity * e)
{
    std::cout << e->toString() << std::endl;
}

int main()
{
    srand(time(0));
    Player p(new ManualController(), sf::Vector2f(0, 0));
    NPC n(new AIController(), sf::Vector2f(5, 0));

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

        // Update the window
        app.display();
    }
    test(&p);
    test(&n);

    return EXIT_SUCCESS;
}
