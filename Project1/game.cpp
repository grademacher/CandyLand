#include "game.h"

Game::Game() {

}

Game::Game(int num_play) {
	turns = 0;
	winner = -1;
	num_players = num_play;
	game_board = new GameBoard();

	//create deck
	std::vector<int>* deck = new std::vector<int>();
	deck->push_back(6); //red 1 -- 0
	deck->push_back(4); //red 2 -- 1
	deck->push_back(6); //orange 1 -- 2
	deck->push_back(3); //orange 2 -- 3
	deck->push_back(6); //yellow 1 -- 4
	deck->push_back(4); //yellow 2 -- 5
	deck->push_back(6); //green 1 -- 6
	deck->push_back(3); //green 2 -- 7
	deck->push_back(6); //blue 1 -- 8
	deck->push_back(4); //blue 2 -- 9
	deck->push_back(6); //purple 1 -- 10
	deck->push_back(4); //purple 2 -- 11
	deck->push_back(1); //gingerbread -- 12
	deck->push_back(1); //candycane -- 13
	deck->push_back(1); //gumdrop -- 14
	deck->push_back(1); //peanut -- 15
	deck->push_back(1); //lollypop -- 16
	deck->push_back(1); //icecream -- 17
	my_deck = new Deck(deck);

	for (int i = 0; i < num_players; i++) {
		Player* temp = new Player(game_board, my_deck);
		players.push_back(temp);
	}
}


Game::~Game() {

}

std::vector<int> Game::play_game() {
	bool game_running = true;
	std::vector<int> values;

	while (game_running) { //go duration of game
		for (int i = 0; i < players.size(); i++) {
			if (game_running) { //ensure you don't finish turns after player wins
				game_running = players.at(i)->MovePlayer();
				if (!game_running) {
					values.push_back(i); //add winner to vector
					winner = i;
				}
			}
		}
		turns++;
	}
	values.push_back(turns); //add number of turns to vector

	return values;
}
