#include "Jumperpch.h"
#include "LevelGenerator.h"

Remorse::LevelGenerator::LevelGenerator() : 
	spawnTotalLevel(10)
{
	AddBackground();
}

Remorse::LevelGenerator::~LevelGenerator()
{
}

void Remorse::LevelGenerator::GenerateLevel()
{
	srand(time(0));
	for (int i = 0; i < spawnTotalLevel; i++)
	{
		int randomX = rand() % WIDTH_WINDOW;
		int randomY = rand() % HEIGHT_WINDOW;
		AddPlatform(randomX, randomY);
	}
}

void Remorse::LevelGenerator::DrawLevel(sf::RenderWindow& window)
{
	window.draw(spriteBackground);

	for (int i = 0; i < spawnTotalLevel; i++)
	{
		window.draw(spritePlatforms[i]);
	}
}

void Remorse::LevelGenerator::AddBackground()
{
	if (!textureBackground.loadFromFile("../images/background.png")) {}
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setTextureRect(sf::IntRect(0, 0, WIDTH_WINDOW, HEIGHT_WINDOW));
}

void Remorse::LevelGenerator::AddPlatform(const int& x,const int& y)
{
	if (!texturePlatform.loadFromFile("../images/platform.png")) {}

	sf::Sprite spritePlatform;

	spritePlatform.setTexture(texturePlatform);
	spritePlatform.setTextureRect(sf::IntRect(0, 0, 68, 14));
	spritePlatform.setPosition(x, y);
	spritePlatform.setOrigin(spritePlatform.getTexture()->getSize().x / 2, spritePlatform.getTexture()->getSize().y / 2);
	spritePlatforms.push_back(spritePlatform);
}
