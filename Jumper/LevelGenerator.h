#pragma once
#include "ImageManager.h"

namespace Remorse
{
	class LevelGenerator
	{
	public:
		LevelGenerator();
		~LevelGenerator();

		std::unique_ptr<ImageManager> imageManager;

		void GenerateLevel();
	private:
		int spawnTotalLevel;
	};
}