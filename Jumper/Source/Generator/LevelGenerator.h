#pragma once
#include <SFML/Graphics.hpp>
namespace Remorse
{
	class LevelGenerator
	{
	public:
		LevelGenerator();
		~LevelGenerator();

		void GenerateLevel();
		void DrawLevel(sf::RenderWindow& window);

		std::vector<sf::Sprite> spritePlatforms;

	private:
		void AddBackground();
		void AddPlatform(const int& x, const int& y);

	private:
		// Background
		sf::Texture textureBackground;
		sf::Sprite spriteBackground;

		// Platform
		sf::Texture texturePlatform;

		int spawnTotalLevel;
	};
}