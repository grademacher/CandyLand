#pragma once
#include "gameboard.h"
class Player
{
public:
  Player(GameBoard* this_board);
  ~Player();

  bool MovePlayer();


private:
  int current_tile;
  bool delayed_turn;
  int player_id;

  GameBoard* board;
};

