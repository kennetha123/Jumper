#include "ImageManager.h"
#include "Jumperpch.h"

Remorse::ImageManager::ImageManager()
{
	LoadImage();
	{
		// background
		spriteBackground.setTexture(textureBackground);
		spriteBackground.setTextureRect(sf::IntRect(0, 0, WIDTH_WINDOW, HEIGHT_WINDOW));

		// platform
		spritePlatform.setTexture(texturePlatform);
		spritePlatform.setTextureRect(sf::IntRect(0, 0, 68, 14));
		spritePlatform.setPosition(WIDTH_WINDOW / 2, HEIGHT_WINDOW / 2);
		spritePlatform.setOrigin(spritePlatform.getTexture()->getSize().x / 2, spritePlatform.getTexture()->getSize().y / 2);

		spritePlayer.setTexture(texturePlayer);
		spritePlayer.setTextureRect(sf::IntRect(0, 0, 80, 80));
		spritePlayer.setPosition(WIDTH_WINDOW / 2, HEIGHT_WINDOW / 2);
		spritePlayer.setOrigin(spritePlayer.getTexture()->getSize().x / 2, spritePlayer.getTexture()->getSize().y / 2);
	}
	AddSprite();
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

void Remorse::ImageManager::AddSprite()
{
	renderList.push_back(spriteBackground);
	renderList.push_back(spritePlatform);
	renderList.push_back(spritePlayer);
}
