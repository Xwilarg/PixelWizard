#pragma once

# include <SFML/Graphics.hpp>

namespace PixelWizard
{
    class IRenderable
    {
    public:
        virtual void render(sf::RenderTarget& renderer) const noexcept = 0;
    };
}