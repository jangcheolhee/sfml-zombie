#pragma once
class HitBox
{
public:
	sf::RectangleShape rect;
	HitBox();
	void UpdateTransform(const sf::Transformable& tr, const sf::FloatRect& localBounds);
	void Draw(sf::RenderWindow& window);
};

