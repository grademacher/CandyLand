#include "game.h"
#include <iostream>


Game::Game() {

}

Game::Game(int num_play, GameBoard* game, Deck* deck) {
	turns = 0;
	winner = -1;
	num_players = num_play;
  game_board = game;
  my_deck = deck;

	

	for (int i = 0; i < num_players; i++) {
		Player* temp = new Player(game_board, my_deck);
		players.push_back(temp);
	}
}


Game::~Game() {
  for (int i = 0; i < players.size(); i++) {
    delete players.at(i);
  }
  
  
}

std::vector<int> Game::play_game() {
	bool game_running = true;
	std::vector<int> values;

	while (game_running) { //go duration of game
		for (int i = 0; i < players.size(); i++) {
			if (game_running) { //ensure you don't finish turns after player wins
				//std::cout << "Player " << i << " turn" << std::endl;
				game_running = players.at(i)->MovePlayer();
				if (!game_running) {
					values.push_back(i); //add winner to vector
					winner = i;
					//std::cout << "Winner is Player " << i << std::endl;
				}
			}
		}
		turns++;
	}
	values.push_back(turns); //add number of turns to vector

	return values;
}
