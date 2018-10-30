#pragma once
#include "gameboard.h"
#include "deck.h"

class Player
{
public:
  Player(GameBoard* this_board, Deck* deck);
  ~Player();

  bool MovePlayer();


private:
  int current_tile;
  bool delayed_turn;
  int player_id;

  GameBoard* board;
  Deck* deck;

  int ConvertColor(int card);
  bool IsDouble(int card);
};

