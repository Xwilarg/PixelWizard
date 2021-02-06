#pragma once

# include <SFML/Graphics.hpp>

# include "Object.hpp"

# include "Debug.hpp"

namespace PixelWizard
{
    class Window final
    {
    public:
        Window(unsigned int xSize, unsigned int ySize);
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

        sf::RenderTexture _renderTexture;

#ifdef DEBUG
        // Debug information
        sf::Clock _fpsTimer;
        sf::Font _font;
        sf::Text _text;
        int _frameCount;
#endif
    };
}