#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
#include "map.h"
#include "player.h"
class Game {
public:
	enum GameState { INTRO, PLAY, PAUSE, GAME_OVER };
	Game();
	void play();
private:
	void check_events();
	void update();
	void draw();
	void check_collisions();
	Map map1, map2;
	Player player;
	sf::RenderWindow window;
	
	GameState game_state = PLAY;
	

};

