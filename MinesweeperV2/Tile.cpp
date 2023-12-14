#include "Tile.h"


Tile::Tile()
{

}


void Tile::checkClick(sf::RenderWindow& window)
{
	sf::Mouse mouse;

	if (cover.getGlobalBounds().contains(sf::Vector2f(mouse.getPosition(window)))
		&& mouse.isButtonPressed(sf::Mouse::Left))
	{
		coverOn = false;
	}
}


void Tile::drawTo(sf::RenderWindow& window)
{
	window.draw(text);
	if(coverOn)
		window.draw(cover);
	if(mineOn)
		window.draw(mine);
	if(flagOn)
		window.draw(flag);
}


void Tile::operator=(int newVal)
{
	value = newVal;
}