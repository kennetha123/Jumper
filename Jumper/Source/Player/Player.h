#pragma once
#include <SFML/Graphics.hpp>

namespace Remorse
{
	class Player
	{
	public:
		Player();
		~Player();

		void DrawPlayer(sf::RenderWindow& window);

		float deltaX = 0;
		float deltaY = 0;
		int X;
		int Y;

	private:
		void UpdatePlayer();

		sf::Sprite spritePlayer;
		sf::Texture texturePlayer;

	};
}
