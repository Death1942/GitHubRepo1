#include "SFML\Graphics.hpp"
#include "InputManager.h"



int main()
{
	InputManager inputManager();

	sf::RenderWindow window(sf::VideoMode(200, 200), "Test");
	sf::CircleShape shape(100.0f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

    return 0;
}

