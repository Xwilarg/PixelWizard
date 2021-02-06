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
            _objects.push_back(std::make_unique<T>(std::forward<Args>(params)...));
        }

    private:
        sf::RenderWindow _window;
        std::vector<std::unique_ptr<Object>> _objects;
    };
}