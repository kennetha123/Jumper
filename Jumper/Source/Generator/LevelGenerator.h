#pragma once
#include <SFML/Graphics.hpp>
#include "Player/Player.h"

namespace Remorse
{
	class LevelGenerator
	{
	public:
		LevelGenerator();
		~LevelGenerator();

		void GenerateLevel();
		void DrawLevel(sf::RenderWindow& window, Player& player);

		std::vector<sf::Sprite> spritePlatforms;

		void UpdateLevel(Player& player);

	private:
		void AddBackground();
		void AddPlatform(const int& x, const int& y);

	private:
		// Background
		sf::Texture textureBackground;
		sf::Sprite spriteBackground;

		// Platform
		sf::Texture texturePlatform;

	private:
		static constexpr int spawnTotalLevel = 10;
		int randomX[spawnTotalLevel], randomY[spawnTotalLevel];
	};
}