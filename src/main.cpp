#include "Window.hpp"

int main()
{
	constexpr unsigned int xWin = 1200, yWin = 500;
	PixelWizard::Window window(xWin, yWin);

	while (window.isOpen())
	{
        window.handleEvents();
        window.render();
	}
	return 0;
}