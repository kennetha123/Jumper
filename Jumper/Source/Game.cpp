#include "Game.h"
#include "Generator/LevelGenerator.h"
#include "Jumperpch.h"

Remorse::Jumper::Game::Game() :
	window(sf::VideoMode(WIDTH_WINDOW, HEIGHT_WINDOW), "Jumper Game")
{	
	window.setFramerateLimit(60);


	levelGenerator.GenerateLevel();
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
		input.InputUpdate(player);
		window.display();
	}
}

void Remorse::Jumper::Game::Render()
{
	levelGenerator.DrawLevel(window);
	player.DrawPlayer(window);
}
