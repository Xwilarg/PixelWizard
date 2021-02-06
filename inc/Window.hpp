#pragma once

# include <SFML/Graphics.hpp>

namespace PixelWizard
{
    class Window final
    {
    public:
        Window(unsigned int xSize, unsigned int ySize) noexcept;
        void render();
        bool isOpen() const noexcept;
        void handleEvents() noexcept;

    private:
        sf::RenderWindow _window;
    };
}