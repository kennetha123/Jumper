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

		void AddBackground();
		void AddPlayer();
		void AddPlatform(int x , int y);

	public:
		std::vector<sf::Sprite> renderList;

	private:
		sf::Texture textureBackground;
		sf::Texture texturePlatform;
		sf::Texture texturePlayer;

		sf::Sprite spriteBackground;
		sf::Sprite spritePlatform;
		sf::Sprite spritePlayer;

	};
}