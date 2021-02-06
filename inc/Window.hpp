#pragma once

# include <SFML/Graphics.hpp>

# include "Object.hpp"

namespace PixelWizard
{
    class Window final
    {
    public:
        Window(unsigned int xSize, unsigned int ySize) noexcept;
        void render();
        bool isOpen() const noexcept;
        void handleEvents() noexcept;
        template<class T, typename... Args>
        void addObject(Args&&... params) noexcept
        {
            _objects.emplace_back(std::forward<Args>(params)...);
        }

    private:
        sf::RenderWindow _window;
        std::vector<Object> _objects;
    };
}