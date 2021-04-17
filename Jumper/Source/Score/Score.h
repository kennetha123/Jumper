#pragma once
#include <SFML/Graphics.hpp>


namespace Remorse
{
	class Score
	{
	public:
		Score();
		~Score();

		void DrawScore(sf::RenderWindow& window);
		void CalculateScore(const int& posToVal);
	private:
		sf::Text text;
		sf::Font font;
		unsigned int score;
	};
}