#pragma once
#include <SFML/Graphics.hpp>
#include "Player/Player.h"

namespace Remorse
{
	class Input
	{
	public:
		void InputUpdate(Player& player);
		void PlatformTouch(Player& player, const std::vector<sf::Sprite>& platformSprite);

	private:
		void PositionCalculation(Player& player);
	};
}