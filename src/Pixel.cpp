#include "Pixel.hpp"

namespace PixelWizard
{
    Pixel::Pixel(sf::Vector2f&& position)
        : _position(std::move(position))
    { }
}