#include "player.h"
#include "gameboard.h"


Player::Player(GameBoard* this_board, Deck* current_deck)
{
  board = this_board;
  deck = current_deck;
}


Player::~Player()
{
}

bool Player::MovePlayer() {
  //draw a new card
  int current_move = deck->DrawCard();

  //determine what spot to move to

  //update the current tile to reflect the current spot
  //update the gameboard to reflect the player moving

  return true;
}
