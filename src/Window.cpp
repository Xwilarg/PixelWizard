#include "Window.hpp"

namespace PixelWizard
{
    Window::Window(unsigned int xSize, unsigned int ySize) noexcept
        : _window(sf::VideoMode(xSize, ySize), "Pixel Wizard"),
        _objects()
    { }

    void Window::render()
    {
        _window.clear();
        for (auto&& o : _objects)
            o->render(_window);
        _window.display();
    }

    bool Window::isOpen() const noexcept
    {
        return _window.isOpen();
    }

    void Window::handleEvents() noexcept
    {
		sf::Event event;
		while (_window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				_window.close();
		}
    }
}