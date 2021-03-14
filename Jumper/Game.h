#pragma once
#include <SFML/Graphics.hpp>
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
		};
	}
}