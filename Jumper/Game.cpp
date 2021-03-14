#include "Game.h"

Remorse::Jumper::Game::Game() : window(sf::VideoMode(WIDTH_WINDOW, HEIGHT_WINDOW), "SFML Test")
{
	
	if (!textureBackground.loadFromFile("../images/background.png")) { }
	if (!texturePlatform.loadFromFile("../images/platform.png")) { }

	spriteBackground.setTexture(textureBackground);
	spriteBackground.setTextureRect(sf::IntRect(0, 0, WIDTH_WINDOW, HEIGHT_WINDOW));
	spritePlatform.setTexture(texturePlatform);
	spritePlatform.setTextureRect(sf::IntRect(0, 0, 68, 14));
	spritePlatform.setPosition(WIDTH_WINDOW / 2, HEIGHT_WINDOW / 2);
	//set origin to middle
	spritePlatform.setOrigin(spritePlatform.getTexture()->getSize().x / 2, spritePlatform.getTexture()->getSize().y / 2);
	renderList.push_back(spriteBackground);
	renderList.push_back(spritePlatform);
}

Remorse::Jumper::Game::~Game()
{
}

void Remorse::Jumper::Game::Update()
{
	while (window.isOpen())
	{
		sf::Event evt;
		while (window.pollEvent(evt))
		{
			if (evt.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		Render();
		window.display();
	}
}

void Remorse::Jumper::Game::Render()
{
	std::vector<sf::Sprite>::iterator it;
	for (it = renderList.begin(); it < renderList.end(); it++)
	{
		window.draw(*it);
	}
}
