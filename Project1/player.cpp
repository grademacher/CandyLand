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
  std::cout << "Starting square: " << current_tile << "\n";

  //if the player is blocked from their turn, skip them
  if (delayed_turn) { delayed_turn = false; std::cout << "Ending square: " << current_tile << "\n"; true; }

  //draw a new card
  int current_move = deck->DrawCard();

  //check for special cards first
  if (current_move == 12) { //gingerbread
    current_tile = 8;
    std::cout << "Ending square: " << current_tile << "\n";
    return true;
  }
  else if (current_move == 13) { //candycane
    current_tile = 19;
    std::cout << "Ending square: " << current_tile << "\n";
    return true;
  }
  else if (current_move == 14) { //gumdrop
    current_tile = 41;
    std::cout << "Ending square: " << current_tile << "\n";
    return true;
  }
  else if (current_move == 15) { //peanut
    current_tile = 68;
    std::cout << "Ending square: " << current_tile << "\n";
    return true;
  }
  else if (current_move == 16) { //lollypop
    current_tile = 91;
    std::cout << "Ending square: " << current_tile << "\n";
    return true;
  }
  else if (current_move == 17) { //icecream
    current_tile = 101;
    std::cout << "Ending square: " << current_tile << "\n";
    return true;
  }

  //determine what spot to move to
  for (int i = current_tile; i < board->board.size(); i++) {
    int spots_found = 0;
    if (board->board.at(i)->get_color() == ConvertColor(current_move)) {
      spots_found++;
      if (IsDouble(current_move) && (spots_found < 2)) {
        //continue on in the search
      }
      else {
        //set the player board index
        current_tile = i;
        if (board->board[i]->get_jump() > 0) { //player landed on a jump tile
          current_tile = board->board[i]->get_jump();
        }
        if (board->board[i]->get_turn() > 0) { //player landed on a tile that will skip their turn next time
          delayed_turn = true;
        }
        std::cout << "Ending square: " << current_tile << "\n";
        return true;
      }
    }
  }
  //update the current tile to reflect the current spot

  //no tile was found, the player must have reached the end of the board
  return false;
}

int Player::ConvertColor(int card) {

  //0 = red, 1 = purple, 2 = yellow, 3 = blue, 4 = orange, 5 = green, 6 = pink
  if (card == 0 || card == 1) {
    return 0;
  }
  else if (card == 2 || card == 3) {
    return 4;
  }
  else if (card == 4 || card == 5) {
    return 2;
  }
  else if (card == 6 || card == 7) {
    return 5;
  }
  else if (card == 8 || card == 9) {
    return 3;
  }
  else if (card == 10 || card == 11) {
    return 1;
  }
  else {
    //shouldnt get here, if this happens we are all fucked
    return -1;
  }
}

bool Player::IsDouble(int card) {
  if (card == 1 || card == 3 || card == 5 || card == 7 || card == 9 || card == 11) {
    return true;
  }
  else {
    return false;
  }

}
