#include "Game.h"
#include "ImageManager.h"
#include "Jumperpch.h"

Remorse::Jumper::Game::Game() : window(sf::VideoMode(WIDTH_WINDOW, HEIGHT_WINDOW), "Jumper Game")
{	

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
	ImageManager* _imageManager = new ImageManager();

	std::vector<sf::Sprite>::iterator it;
	for (it = _imageManager->renderList.begin(); it < _imageManager->renderList.end(); it++)
	{
		window.draw(*it);
	}

	delete _imageManager;
}
