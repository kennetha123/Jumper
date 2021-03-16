#include "ImageManager.h"
#include "Jumperpch.h"

Remorse::ImageManager::ImageManager()
{
	LoadImage();
}

Remorse::ImageManager::~ImageManager()
{
}

void Remorse::ImageManager::LoadImage()
{
	if (!textureBackground.loadFromFile("../images/background.png")) {}
	if (!texturePlatform.loadFromFile("../images/platform.png")) {}
	if (!texturePlayer.loadFromFile("../images/doodle.png")) {}
}

void Remorse::ImageManager::AddBackground()
{
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setTextureRect(sf::IntRect(0, 0, WIDTH_WINDOW, HEIGHT_WINDOW));

	renderList.push_back(spriteBackground);
}

void Remorse::ImageManager::AddPlayer()
{
	spritePlayer.setTexture(texturePlayer);
	spritePlayer.setTextureRect(sf::IntRect(0, 0, 80, 80));
	spritePlayer.setPosition(WIDTH_WINDOW / 2, HEIGHT_WINDOW / 2);
	spritePlayer.setOrigin(spritePlayer.getTexture()->getSize().x / 2, spritePlayer.getTexture()->getSize().y / 2);

	renderList.push_back(spritePlayer);

}

void Remorse::ImageManager::AddPlatform(int x, int y)
{
	renderList.push_back(spritePlatform);

	spritePlatform.setTexture(texturePlatform);
	spritePlatform.setTextureRect(sf::IntRect(0, 0, 68, 14));
	spritePlatform.setPosition(x, y);
	spritePlatform.setOrigin(spritePlatform.getTexture()->getSize().x / 2, spritePlatform.getTexture()->getSize().y / 2);

}


