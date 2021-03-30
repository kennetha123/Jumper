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

	private:
		void AddBackground();
		void AddPlatform(const int& x, const int& y);

	private:
		// Background
		sf::Texture textureBackground;
		sf::Sprite spriteBackground;

		// Platform
		sf::Texture texturePlatform;
		std::vector<sf::Sprite> spritePlatforms;

		int spawnTotalLevel;
	};
}