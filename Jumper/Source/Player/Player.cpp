#include "Jumperpch.h"
#include "Player.h"

Remorse::Player::Player() : X(WIDTH_WINDOW / 2), Y(HEIGHT_WINDOW / 2)
{
	if (!texturePlayer.loadFromFile("../images/doodle.png")) {}

	spritePlayer.setTexture(texturePlayer);
	spritePlayer.setTextureRect(sf::IntRect(0, 0, 80, 80));
	spritePlayer.setOrigin(spritePlayer.getTexture()->getSize().x / 2, spritePlayer.getTexture()->getSize().y / 2);
}

Remorse::Player::~Player()
{

}

void Remorse::Player::DrawPlayer(sf::RenderWindow& window)
{
	window.draw(spritePlayer);
	UpdatePlayer();
}

void Remorse::Player::UpdatePlayer()
{
	spritePlayer.setPosition(X, Y);
}