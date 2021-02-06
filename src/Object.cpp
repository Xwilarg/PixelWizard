#include "Object.hpp"

namespace PixelWizard
{
    Object::Object(const sf::Vector2f& position, const sf::Vector2f& size) noexcept
        : _object(std::make_unique<sf::RectangleShape>(size))
    {
        _object->setPosition(position);
        _object->setFillColor(sf::Color::White);
    }

    void Object::render(sf::RenderTarget& renderer) const noexcept
    {
        renderer.draw(*_object);
    }
}