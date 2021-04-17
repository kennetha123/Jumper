#include "Jumperpch.h"
#include "Score.h"

Remorse::Score::Score() : score(0)
{
	if (!font.loadFromFile("../font/KGHAPPYSolid.ttf")) {}

	text.setFont(font);
	text.setCharacterSize(32);
	text.setFillColor(sf::Color::Black);
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	text.setPosition(0, 0);
}

Remorse::Score::~Score()
{
}

void Remorse::Score::DrawScore(sf::RenderWindow& window)
{
	std::string s = "Score : " + std::to_string(score);
	text.setString(s);
	window.draw(text);
}

void Remorse::Score::CalculateScore(const int& posToVal)
{
	score += posToVal;
}
