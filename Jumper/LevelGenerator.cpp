#include "Jumperpch.h"
#include "LevelGenerator.h"

Remorse::LevelGenerator::LevelGenerator() : 
	spawnTotalLevel(10)
{
	imageManager = std::make_unique<ImageManager>();
}

Remorse::LevelGenerator::~LevelGenerator()
{
}

void Remorse::LevelGenerator::GenerateLevel()
{
	srand(time(0));
	for (int i = 0; i < spawnTotalLevel; i++)
	{
		imageManager->AddPlatform(rand() % WIDTH_WINDOW, rand() % HEIGHT_WINDOW);
	}
}
