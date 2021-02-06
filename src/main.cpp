#include "Window.hpp"

int main()
{
	constexpr unsigned int xWin = 1200, yWin = 500;
	PixelWizard::Window window(xWin, yWin);

    window.addObject<PixelWizard::Object>(sf::Vector2f(500.f, 200.f), sf::Vector2f(400.f, 20.f));

	while (window.isOpen())
	{
        window.handleEvents();
        window.render();
	}
	return 0;
}