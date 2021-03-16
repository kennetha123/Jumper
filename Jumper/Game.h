#pragma once
#include <SFML/Graphics.hpp>
#include "LevelGenerator.h"
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
			std::unique_ptr<LevelGenerator> _levelGenerator;
		};
	}
}