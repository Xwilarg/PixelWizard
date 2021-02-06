#include "Window.hpp"

namespace PixelWizard
{
    Window::Window(unsigned int xSize, unsigned int ySize)
        : _window(sf::VideoMode(xSize, ySize), "Pixel Wizard"),
        _objects()
#ifdef DEBUG
        , _fpsTimer(), _font(), _text(), _frameCount(0)
#endif
    {
        if (!_font.loadFromFile("Resources/font/Barecast.otf"))
            throw new std::runtime_error("Can't load font file");
        _text.setFont(_font);
        _text.setCharacterSize(20);
        _text.setPosition(sf::Vector2f(5.f, 15.f));
        _text.setString("FPS: 0");
    }

    void Window::render()
    {
        _window.clear();
        for (auto&& o : _objects)
            o->render(_window);

#ifdef DEBUG
        _frameCount++;
        if (_fpsTimer.getElapsedTime().asSeconds() > 1.f)
        {
            _text.setFillColor(_frameCount < 60 ? sf::Color::Red : sf::Color::White);
            _text.setString("FPS: " + std::to_string(_frameCount));
            _fpsTimer.restart();
            _frameCount = 0;
        }
        _window.draw(_text);
#endif

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