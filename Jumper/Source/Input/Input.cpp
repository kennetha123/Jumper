#include "Jumperpch.h"
#include "Input.h"

/* notes : 
*
* in SFML we are using OpenGL coordinate which is top-left is 0
* so when player want to jump we decrease the value position
* (since higher value means the player at the bottom.)
* 
*/
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
	 // boundaries
	 if (player.Y > 500)
	 {
		 player.deltaY = -10;
	 }
	 else
	{
		player.deltaY += 0.2;
	}
	
	if (player.X > 380) player.X = 379;
	if (player.X < 20) player.X = 21;

	// increase delta and assign it to player pos.
	
	player.Y += player.deltaY;
}

 void Remorse::Input::PlatformTouch(Player& player, const std::vector<sf::Sprite>& platformSprite)
 {
	 for (int i = 0; i < platformSprite.size(); i++)
	 {
		 if (player.X + 40 > platformSprite[i].getPosition().x && 
			 (player.X + 20 < platformSprite[i].getPosition().x + 68) &&
			 (player.Y + 40 > platformSprite[i].getPosition().y) &&
			 (player.Y + 40 < platformSprite[i].getPosition().y + 14) && (player.deltaY > 0))
		 {
			 player.deltaY = -10;
		 }
	 }
 }