#include <SFML/Graphics.hpp>

int main()
{
	constexpr unsigned int xWin = 1200, yWin = 500;
	sf::RenderWindow window(sf::VideoMode(xWin, yWin), "Pixel Wizard");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.display();
	}
	return 0;
}