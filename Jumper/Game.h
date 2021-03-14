#pragma once
#include <SFML/Graphics.hpp>

#define WIDTH_WINDOW 400
#define HEIGHT_WINDOW 533

namespace Remorse
{
	namespace Jumper
	{
		class Game
		{
		public:
			Game();
			~Game();

			void Update();
			void Render();

			sf::RenderWindow window;

			sf::Texture textureBackground;
			sf::Sprite spriteBackground;
			sf::Texture texturePlatform;
			sf::Sprite spritePlatform;

			std::vector<sf::Sprite> renderList;

		};
	}
}