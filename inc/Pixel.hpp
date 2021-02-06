#pragma once

#include "IRenderable.hpp"

namespace PixelWizard
{
    class Pixel final
    {
    public:
        Pixel(sf::Vector2f&& position) noexcept;

    private:
        sf::Vector2f _position;
    };
}