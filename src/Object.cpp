#include "Object.hpp"

namespace PixelWizard
{
    Object::Object(const sf::Vector2f& position, const sf::Vector2f& size) noexcept
        : _object(std::make_unique<sf::RectangleShape>(size))
    {
        _object->setPosition(position);
    }

    void Object::render(sf::RenderWindow& window) const noexcept
    {
        window.draw(*_object);
    }
}