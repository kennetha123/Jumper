#pragma once
#include <SFML/Graphics.hpp>
#include "Player/Player.h"

namespace Remorse
{
	class Input
	{
	public:
		void InputUpdate(Player& player);

	private:
		void PositionCalculation(Player& player);

	};
}