#include "Jumperpch.h"
#include "LevelGenerator.h"

Remorse::LevelGenerator::LevelGenerator()
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
		randomX[i] = rand() % WIDTH_WINDOW;
		randomY[i] = rand() % HEIGHT_WINDOW;
		AddPlatform(randomX[i], randomY[i]);
	}
}

void Remorse::LevelGenerator::DrawLevel(sf::RenderWindow& window, Player& player)
{
	window.draw(spriteBackground);

	for (int i = 0; i < spawnTotalLevel; i++)
	{
		window.draw(spritePlatforms[i]);
	}

	UpdateLevel(player);
}

void Remorse::LevelGenerator::UpdateLevel(Player& player)
{
	if (player.Y < 200)
	{
		for (int i = 0; i < spawnTotalLevel; i++)
		{
			player.Y = 200;
			spritePlatforms[i].setPosition(randomX[i], spritePlatforms[i].getPosition().y - player.deltaY);
			if (spritePlatforms[i].getPosition().y > HEIGHT_WINDOW)
			{
				spritePlatforms[i].setPosition(rand() % 400, 0);
			}
		}
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
