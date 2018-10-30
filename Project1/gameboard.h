#pragma once
#include <vector>
#include "gametile.h"

class GameBoard
{
public:
  GameBoard();
  ~GameBoard();
  std::vector<GameTile*> board;

private:
	//helper methods
	void construct_board();

	//private board data
	

};

