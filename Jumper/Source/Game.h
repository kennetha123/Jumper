#pragma once
#include <SFML/Graphics.hpp>
#include "Generator/LevelGenerator.h"
#include "Player/Player.h"
#include "Input/Input.h"
#include "Score/Score.h"
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

		private:
			sf::RenderWindow window;

		private:
			LevelGenerator levelGenerator;
			Score score;
			Input input;
			Player player;
		};
	}
}