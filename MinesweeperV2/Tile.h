#pragma once
#include <SFML/Graphics.hpp>

class Tile
{
public:
	Tile();
	void checkClick(sf::RenderWindow&);
	void drawTo(sf::RenderWindow&);
	void operator=(int);
private:
	sf::RectangleShape cover;
	sf::Sprite flag;
	sf::Sprite mine;
	sf::Text text;
	int value = 0;
	bool coverOn = true, mineOn, flagOn;
};

