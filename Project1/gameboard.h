#pragma once
#include <vector>
#include "gametile.h"

class GameBoard
{
public:
  GameBoard();
  ~GameBoard();

private:
	//helper methods
	void construct_board();

	//private board data
	std::vector<GameTile*> board;

};

