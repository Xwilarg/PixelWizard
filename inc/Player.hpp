#pragma once

# include "Object.hpp"

namespace PixelWizard
{
    class Player final : public Object
    {
    public:
        Player(const sf::Vector2f& position) noexcept;
    };
}