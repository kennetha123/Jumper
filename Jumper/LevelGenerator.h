#pragma once
#include "ImageManager.h"

namespace Remorse
{
	class LevelGenerator
	{
	public:
		LevelGenerator();
		~LevelGenerator();

		ImageManager* imageManager;
	};
}