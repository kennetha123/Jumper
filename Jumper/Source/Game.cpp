#include "Game.h"
#include "Generator/LevelGenerator.h"
#include "Jumperpch.h"

Remorse::Jumper::Game::Game() :
	window(sf::VideoMode(WIDTH_WINDOW, HEIGHT_WINDOW), "Jumper Game"), 
	_levelGenerator(std::make_unique<LevelGenerator>())

{	
	_levelGenerator->imageManager->AddBackground();
	_levelGenerator->GenerateLevel();
	_levelGenerator->imageManager->AddPlayer();

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
	for (it = _levelGenerator->imageManager->renderList.begin(); it < _levelGenerator->imageManager->renderList.end(); it++)
	{
		window.draw(*it);
	}
}
