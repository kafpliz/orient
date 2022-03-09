#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
 
class Map {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f speed = sf::Vector2f(0.0f, 1.0f);
public:
	Map() {
		texture.loadFromFile("map.jpg");
		sprite.setTexture(texture);
		//sprite.setScale(1.f, 1.67f);
	}
	sf::Sprite getSprite() { return sprite; }
	void init(float startx, float starty) { sprite.setPosition(startx, starty); }
	void update() {
		sprite.move(speed);
		if (sprite.getPosition().y >= WINDOW_HEIGHT) {
			sprite.setPosition(0.f, -WINDOW_HEIGHT);
		}
	}
};