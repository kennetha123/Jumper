#include "Jumperpch.h"
#include "Input.h"

void Remorse::Input::InputUpdate(Player& player)
{
	PositionCalculation(player);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		player.X += 3;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		player.X -= 3;
	}
}

 void Remorse::Input::PositionCalculation(Player& player)
{
	if (player.Y > 500) player.deltaY -= 5;
	if (player.X > 380) player.X = 379;
	if (player.X < 20) player.X = 21;

	player.deltaY += 0.2;
	player.Y += player.deltaY;
}

 void Remorse::Input::PlatformTouch(Player& player, const std::vector<sf::Sprite>& platformSprite)
 {
	 for (int i = 0; i < platformSprite.size(); i++)
	 {
		 if (player.X + 50 > platformSprite[i].getPosition().x && 
			 (player.X + 20 < platformSprite[i].getPosition().x + 68) &&
			 (player.Y + 40 > platformSprite[i].getPosition().y) &&
			 (player.Y + 40 < platformSprite[i].getPosition().y + 14) && (player.deltaY > 0))
		 {
			 player.deltaY -= 10;
		 }
	 }
 }