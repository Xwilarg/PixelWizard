#include "Player.hpp"

namespace PixelWizard
{
    Player::Player(const sf::Vector2f& position) noexcept
        : Object(position, sf::Vector2f(32.f, 64.f))
    {
        _object->setFillColor(sf::Color::Red);
    }
}