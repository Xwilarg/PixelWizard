#pragma once

# include "IRenderable.hpp"

namespace PixelWizard
{
    class Object : IRenderable
    {
    public:
        Object(const sf::Vector2f& position, const sf::Vector2f& size) noexcept;
        void render(sf::RenderWindow& window) const noexcept override;

    protected:
        std::unique_ptr<sf::Shape> _object;
    };
}