#pragma once

# include <SFML/Graphics.hpp>

namespace PixelWizard
{
    class IRenderable
    {
    public:
        virtual void render(sf::RenderWindow& window) const noexcept = 0;
    };
}