#include "player.h"
#include "gameboard.h"


Player::Player(GameBoard* this_board, Deck* current_deck)
{
  board = this_board;
  deck = current_deck;
  current_tile = 0;
  delayed_turn = false;
}


Player::~Player()
{
}

bool Player::MovePlayer() {
  //if the player is blocked from their turn, skip themm
  if (delayed_turn) { delayed_turn = false; return true; }
  //draw a new card
  int current_move = deck->DrawCard();

  //check for special cards first
  if (current_move == 12) { //gingerbread
    current_tile = 8;
  }
  else if (current_move == 13) { //candycane
    current_tile = 19;
  }
  else if (current_move == 14) { //gumdrop
    current_tile = 41;
  }
  else if (current_move == 15) { //peanut
    current_tile = 68;
  }
  else if (current_move == 16) { //lollypop
    current_tile = 91;
  }
  else if (current_move == 17) { //icecream
    current_tile = 101;
  }

  //determine what spot to move to
  for (int i = current_tile; i < board->board.size(); i++) {
    if (board->board.at(i)->get_color() == ConvertColor(current_move)) {

    }
  }
  //update the current tile to reflect the current spot
  //update the gameboard to reflect the player moving

  return true;
}

int Player::ConvertColor(int card) {
	return 0;
}

bool Player::IsDouble(int card) {
	return 0;
}
