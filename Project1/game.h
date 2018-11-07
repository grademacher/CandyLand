#pragma once
#include <vector>
#include "player.h"
#include "gameboard.h"
#include "deck.h"

class Game
{
public:
  Game();
  Game(int num_play);
  std::vector<int> play_game();

  ~Game();

private:

	int turns;
	int num_players;
	int winner;
	std::vector<Player*> players;
	GameBoard* game_board;
	Deck* my_deck;

};

