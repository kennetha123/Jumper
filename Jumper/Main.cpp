#include "Game.h"
#include "Jumperpch.h"

int main()
{
	Remorse::Jumper::Game* app = new Remorse::Jumper::Game();
	app->Update();
	delete app;
}