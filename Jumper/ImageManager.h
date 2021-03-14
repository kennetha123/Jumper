#pragma once
#include <SFML/Graphics.hpp>

namespace Remorse
{
	class ImageManager
	{
	public:
		ImageManager();
		~ImageManager();

		void LoadImage();
		void AddSprite();
	public:
		sf::Texture textureBackground;
		sf::Texture texturePlatform;
		sf::Texture texturePlayer;

		sf::Sprite spriteBackground;
		sf::Sprite spritePlatform;
		sf::Sprite spritePlayer;

		std::vector<sf::Sprite> renderList;
	};
}