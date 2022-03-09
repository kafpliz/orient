#include "game.h"
#include "map.h"
Game::Game():
	window( sf::VideoMode(
		static_cast<size_t> (WINDOW_WIDTH),
		static_cast<size_t> (WINDOW_HEIGHT)
	),
		WINDOW_TITLE,
		sf::Style::Titlebar | sf::Style::Close
	)
	{}

void Game::play() {
	while (window.isOpen()) {
		check_events();
		update();
		check_collisions();
		draw();
	}
}
void Game::check_events(){
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) window.close();
		/*
		else
			if (event.type == sf::Event::KeyPressed::Entrer)
			{

			}
	}
	*/

}
}
void Game::update(){
	switch (game_state)
	{
	case INTRO:

		break;
	case PLAY:
		map1.update();
		map2.update();
		
	case GAME_OVER:

		break;
	default:
		break;
	}
};

void Game::draw(){
	switch (game_state)
	{
	case INTRO:
		//window.clear(sf::Color::Black);
		//window.draw(splash.getSprite());
		//window.display();
		break;
	case PLAY:

		window.draw(map1.getSprite());
		window.draw(map2.getSprite());

		window.display();
		break;
	case GAME_OVER:

		break;
	default:
		break;
	}
}
void Game::check_collisions(){

}

